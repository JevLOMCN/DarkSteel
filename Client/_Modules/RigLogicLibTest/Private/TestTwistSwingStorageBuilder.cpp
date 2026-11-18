// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 107

// `dynamic_initializer_for_'gtest_TwistSwingJointStorageBuilderTest_LayoutOptimization_registered_'' @ 141365540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
_dynamic_initializer_for__gtest_TwistSwingJointStorageBuilderTest_LayoutOptimization_registered___
          (void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined1 auStackY_a8 [32];
  Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
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
  GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
            (local_78,&local_70,0);
  local_28 = 0;
  pcVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x95;
  *(undefined8 *)pcVar2 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x9f;
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
  uVar3 = s_C__Workspace_UnrealEngine_Engin._136_8_;
  *(undefined8 *)(pcVar2 + 0x80) = s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined8 *)(pcVar2 + 0x88) = uVar3;
  *(undefined4 *)(pcVar2 + 0x90) = s_C__Workspace_UnrealEngine_Engin._144_4_;
  pcVar2[0x94] = s_C__Workspace_UnrealEngine_Engin[0x94];
  pcVar2[0x95] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar2;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  local_48 = ___xmm_000000000000009f0000000000000095;
  uStack_40 = _UNK_1528917c8;
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
  uVar3 = *(undefined8 *)(pcVar2 + 0x88);
  *(undefined8 *)(local_58._Ptr + 0x80) = *(undefined8 *)(pcVar2 + 0x80);
  *(undefined8 *)(local_58._Ptr + 0x88) = uVar3;
  *(undefined4 *)(local_58._Ptr + 0x90) = *(undefined4 *)(pcVar2 + 0x90);
  *(undefined2 *)(local_58._Ptr + 0x94) = *(undefined2 *)(pcVar2 + 0x94);
  local_38 = 0xa0;
  gtest_TwistSwingJointStorageBuilderTest_LayoutOptimization_registered_ =
       testing::internal::
       TypeParameterizedTest<`anonymous_namespace'::TwistSwingJointStorageBuilderTest,testing::internal::TemplateSel<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
       ::Register("",(CodeLocation *)&local_58,"TwistSwingJointStorageBuilderTest",
                  "LayoutOptimization",0,&local_70);
  if (0xf < uStack_40) {
    uVar4 = uStack_40 + 1;
    uVar3 = local_58._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_58._Ptr + -8);
      uVar4 = uStack_40 + 0x28;
      if ((char *)0x1f < local_58._Ptr + (-8 - uVar3)) goto LAB_1413657c2;
    }
    operator_delete((void *)uVar3,uVar4);
  }
  local_58._Ptr = local_58._Ptr & 0xffffffffffffff00;
  local_48 = ___xmm_000000000000000f0000000000000000;
  uStack_40 = _UNK_15076add8;
  operator_delete(pcVar2,0xa0);
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
LAB_1413657c2:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c57e830

void * __thiscall
`anonymous_namespace'::
TwistSwingJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  rltests::twsw::TwistSwingReader::~TwistSwingReader((TwistSwingReader *)((longlong)this + 0x70));
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// TestBody @ 14c57e8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
::TestBody(TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
           *this)

{
  undefined1 *puVar1;
  TwistSwingSetup *this_00;
  TwistSwingSetup *pTVar2;
  undefined1 auStack_108 [32];
  TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  TStack_e8;
  TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>
  *pTStack_98;
  JointBehaviorFilter JStack_90;
  undefined1 auStack_68 [56];
  longlong *plStack_30;
  TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>
  *pTStack_28;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  TStack_e8._padding_ =
       (longlong)
       &
       ___7__TwistSwingJointsBuilder_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3__rl4__6B_
  ;
  puVar1 = &this->field_0x10;
  TStack_e8.config._11_1_ = JStack_90.filters._Mypair._Myval1._3_1_;
  TStack_e8.config.calculationType = SSE;
  TStack_e8.config.loadJoints = true;
  TStack_e8.config.loadBlendShapes = true;
  TStack_e8.config.loadAnimatedMaps = true;
  TStack_e8.config.loadMachineLearnedBehavior = true;
  TStack_e8.config.loadRBFBehavior = true;
  TStack_e8.config.loadTwistSwingBehavior = true;
  TStack_e8.config.translationType = Vector;
  TStack_e8.config.rotationType = Quaternions;
  TStack_e8.config.rotationOrder = XYZ;
  TStack_e8.config.scaleType = Vector;
  TStack_e8.config.translationPruningThreshold = 0.0;
  TStack_e8.config.rotationPruningThreshold = 0.0;
  TStack_e8.config.scalePruningThreshold = 0.0;
  TStack_e8.memRes = (MemoryResource *)puVar1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TStack_e8.setups._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
  TStack_e8.setups._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
  TStack_e8.setups._Mypair._Myval1 =
       (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  if (puVar1 != (undefined1 *)0x0) {
    TStack_e8.setups._Mypair._Myval1 =
         (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)puVar1;
  }
  TStack_e8.setups._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
  TStack_e8.rotationUnit = degrees;
  rl4::JointBehaviorFilter::JointBehaviorFilter
            (&JStack_90,(Reader *)&this->field_0x18,(MemoryResource *)puVar1);
  rl4::
  TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  ::fillStorage(&TStack_e8,&JStack_90);
  rl4::
  TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  ::build(&TStack_e8,
          (unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_> *)
          auStack_68);
  rl4::
  TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>
  ::Accessor::assertRawDataEqual(pTStack_28);
  if (pTStack_28 !=
      (TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>
       *)0x0) {
    pTStack_98 = pTStack_28;
    if (plStack_30 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plStack_30 + 0x10))(plStack_30,&pTStack_98);
  }
  if (plStack_30 != (longlong *)0x0) {
    (**(code **)(*plStack_30 + 0x20))(plStack_30,plStack_30 != (longlong *)auStack_68);
    plStack_30 = (longlong *)0x0;
  }
  if (JStack_90.filters._Mypair._Myval2._Myfirst != (FilterType *)0x0) {
    (**(code **)(*(longlong *)
                  CONCAT44(JStack_90.filters._Mypair._Myval1._4_4_,
                           JStack_90.filters._Mypair._Myval1._0_4_) + 0x10))
              ((longlong *)
               CONCAT44(JStack_90.filters._Mypair._Myval1._4_4_,
                        JStack_90.filters._Mypair._Myval1._0_4_),
               JStack_90.filters._Mypair._Myval2._Myfirst,
               ((longlong)JStack_90.filters._Mypair._Myval2._Myend -
                (longlong)JStack_90.filters._Mypair._Myval2._Myfirst >> 1) * 2,8);
    JStack_90.filters._Mypair._Myval2._Myend = (FilterType *)0x0;
    JStack_90.filters._Mypair._Myval2._Myfirst = (FilterType *)0x0;
    JStack_90.filters._Mypair._Myval2._Mylast = (FilterType *)0x0;
  }
  pTVar2 = TStack_e8.setups._Mypair._Myval2._Mylast;
  this_00 = TStack_e8.setups._Mypair._Myval2._Myfirst;
  if (TStack_e8.setups._Mypair._Myval2._Myfirst != (TwistSwingSetup *)0x0) {
    for (; this_00 != pTVar2; this_00 = this_00 + 1) {
      rl4::TwistSwingSetup::~TwistSwingSetup(this_00);
    }
    (**(code **)(*(undefined **)TStack_e8.setups._Mypair._Myval1 + 0x10))
              (TStack_e8.setups._Mypair._Myval1,TStack_e8.setups._Mypair._Myval2._Myfirst,
               (((longlong)TStack_e8.setups._Mypair._Myval2._Myend -
                (longlong)TStack_e8.setups._Mypair._Myval2._Myfirst) / 0xd0) * 0xd0,8);
    TStack_e8.setups._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
    TStack_e8.setups._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
    TStack_e8.setups._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
  }
  rl4::JointsBuilder::~JointsBuilder((JointsBuilder *)&TStack_e8);
  return;
}

// `scalar_deleting_destructor' @ 14c57e8b0

void * __thiscall
TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
::_scalar_deleting_destructor_
          (TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
           *this,uint param_1)

{
  rltests::twsw::TwistSwingReader::~TwistSwingReader((TwistSwingReader *)&this->field_0x70);
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)(this + 1));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)&this->field_0x70);
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x10);
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// CreateTest @ 14c57e920

Test * __thiscall
testing::internal::
TestFactoryImpl<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
::CreateTest(TestFactoryImpl<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x90);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &TwistSwingJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    rltests::twsw::TwistSwingReader::TwistSwingReader
              ((TwistSwingReader *)&this_00[1].gtest_flag_saver_);
    this_00->_padding_ =
         (longlong)
         &
         ___7__TwistSwingJointStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_UPassthroughAdapter_rl4___std____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c57e990

void * __thiscall
testing::internal::
TestFactoryImpl<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// separateTwistComponentByAxisX @ 14c57e9d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

quat<float> * __cdecl
rl4::separateTwistComponentByAxisX(quat<float> *__return_storage_ptr__,quat<float> *param_1)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  
  uVar6 = _UNK_150689648;
  fVar1 = param_1->x;
  fVar2 = param_1->w;
  fVar8 = fVar2 * fVar2 + fVar1 * fVar1;
  if (fVar8 == 0.0) {
    uVar5 = _UNK_150689644;
    __return_storage_ptr__->x = (float)___xmm_3f800000000000000000000000000000;
    uVar7 = _UNK_150689648;
    __return_storage_ptr__->y = (float)uVar5;
    _UNK_150689648 = (undefined4)uVar6;
    _UNK_15068964c = SUB84(uVar6,4);
    uVar5 = _UNK_15068964c;
    __return_storage_ptr__->z = (float)_UNK_150689648;
    _UNK_150689648 = uVar7;
    __return_storage_ptr__->w = (float)uVar5;
    return __return_storage_ptr__;
  }
  fVar8 = __real_3f800000 / SQRT(fVar8);
  uVar3 = (ulonglong)(uint)(fVar8 * fVar1);
  lVar4 = (ulonglong)(uint)(fVar8 * fVar2) << 0x20;
  __return_storage_ptr__->x = (float)(int)uVar3;
  __return_storage_ptr__->y = (float)(int)(uVar3 >> 0x20);
  __return_storage_ptr__->z = (float)(int)lVar4;
  __return_storage_ptr__->w = (float)(int)((ulonglong)lVar4 >> 0x20);
  return __return_storage_ptr__;
}

// separateTwistComponentByAxisY @ 14c57ea60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

quat<float> * __cdecl
rl4::separateTwistComponentByAxisY(quat<float> *__return_storage_ptr__,quat<float> *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  longlong local_18;
  longlong lStack_10;
  
  uVar4 = _UNK_150689648;
  fVar1 = param_1->y;
  fVar2 = param_1->w;
  fVar6 = fVar2 * fVar2 + fVar1 * fVar1;
  if (fVar6 == 0.0) {
    uVar3 = _UNK_150689644;
    __return_storage_ptr__->x = (float)___xmm_3f800000000000000000000000000000;
    uVar5 = _UNK_150689648;
    __return_storage_ptr__->y = (float)uVar3;
    _UNK_150689648 = (undefined4)uVar4;
    _UNK_15068964c = SUB84(uVar4,4);
    uVar3 = _UNK_15068964c;
    __return_storage_ptr__->z = (float)_UNK_150689648;
    _UNK_150689648 = uVar5;
    __return_storage_ptr__->w = (float)uVar3;
    return __return_storage_ptr__;
  }
  fVar6 = __real_3f800000 / SQRT(fVar6);
  lStack_10 = (ulonglong)(uint)(fVar6 * fVar2) << 0x20;
  local_18 = (ulonglong)(uint)(fVar6 * fVar1) << 0x20;
  __return_storage_ptr__->x = (float)(undefined4)local_18;
  __return_storage_ptr__->y = (float)local_18._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)lStack_10;
  __return_storage_ptr__->w = (float)lStack_10._4_4_;
  return __return_storage_ptr__;
}

// separateTwistComponentByAxisZ @ 14c57eb00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

quat<float> * __cdecl
rl4::separateTwistComponentByAxisZ(quat<float> *__return_storage_ptr__,quat<float> *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uStack_10;
  
  uVar4 = _UNK_150689648;
  fVar1 = param_1->z;
  fVar2 = param_1->w;
  fVar6 = fVar2 * fVar2 + fVar1 * fVar1;
  if (fVar6 == 0.0) {
    uVar3 = _UNK_150689644;
    __return_storage_ptr__->x = (float)___xmm_3f800000000000000000000000000000;
    uVar5 = _UNK_150689648;
    __return_storage_ptr__->y = (float)uVar3;
    _UNK_150689648 = (undefined4)uVar4;
    _UNK_15068964c = SUB84(uVar4,4);
    uVar3 = _UNK_15068964c;
    __return_storage_ptr__->z = (float)_UNK_150689648;
    _UNK_150689648 = uVar5;
    __return_storage_ptr__->w = (float)uVar3;
    return __return_storage_ptr__;
  }
  fVar6 = __real_3f800000 / SQRT(fVar6);
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = fVar6 * fVar1;
  __return_storage_ptr__->w = fVar6 * fVar2;
  return __return_storage_ptr__;
}

// createInstance @ 14c57eb90

unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_> *
__thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
::createInstance(TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
                 *this,unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>
                       *__return_storage_ptr__,MemoryResource *param_1)

{
  longlong *plVar1;
  unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>
  *extraout_RAX;
  MemoryResource *local_res8 [4];
  
  plVar1 = *(longlong **)&(this->instanceFactory).field_0x38;
  local_res8[0] = param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,__return_storage_ptr__,local_res8);
    return __return_storage_ptr__;
  }
  std::_Xbad_function_call();
  return extraout_RAX;
}

// getJointDeltaValueCountForLOD @ 14c57ebd0

uint __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
::getJointDeltaValueCountForLOD
          (TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
           *this,ushort param_1)

{
  return 0;
}

// calculate @ 14c57ebe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
::calculate(TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
            *this,ControlsInputInstance *param_1,JointsOutputInstance *param_2,ushort param_3)

{
  ushort *puVar1;
  TwistSwingSetup *pTVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  TwistSwingSetup *pTVar7;
  ulonglong uVar8;
  ushort *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  quat<float> local_150;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  quat<float> local_128;
  quat<float> local_118;
  quat<float> local_108;
  longlong local_f8 [2];
  longlong local_e8 [22];
  
  (**(code **)((longlong)*param_1 + 0x20))(param_1,local_f8);
  (**(code **)((longlong)*param_2 + 8))(param_2,local_e8);
  fVar5 = __real_42652ee1;
  fVar4 = __real_3f800000;
  pTVar2 = (this->setups)._Mypair._Myval2._Mylast;
  uVar16 = __xmm_80000000800000008000000080000000;
  fVar12 = __real_3fc90fda;
  for (pTVar7 = (this->setups)._Mypair._Myval2._Myfirst; pTVar7 != pTVar2; pTVar7 = pTVar7 + 1) {
    puVar9 = (pTVar7->swingInputIndices)._Mypair._Myval2._Myfirst;
    local_15c = 0.0;
    local_160 = 0.0;
    local_168 = 0.0;
    fVar21 = fVar4;
    __xmm_80000000800000008000000080000000 = uVar16;
    if (puVar9 != (pTVar7->swingInputIndices)._Mypair._Myval2._Mylast) {
      local_150.y = *(float *)(local_f8[0] + (ulonglong)puVar9[1] * 4);
      local_150.z = *(float *)(local_f8[0] + (ulonglong)puVar9[2] * 4);
      local_150.w = *(float *)(local_f8[0] + (ulonglong)puVar9[3] * 4);
      local_150.x = *(float *)(local_f8[0] + (ulonglong)*puVar9 * 4);
      (*`public:_virtual_void___cdecl_rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>::calculate(rl4::ControlsInputInstance_const*___ptr64,rl4::JointsOutputInstance*___ptr64,unsigned_short)const___ptr64'
        ::__l2::separateTwistComponent[(int)pTVar7->swingTwistAxis])(&local_128,&local_150);
      fVar20 = fVar4 / (local_128.w * local_128.w + local_128.z * local_128.z +
                       local_128.y * local_128.y + local_128.x * local_128.x);
      fVar21 = fVar20 * local_128.w;
      local_168 = (float)((uint)(fVar20 * local_128.z) ^ uVar16);
      local_15c = (float)((uint)(fVar20 * local_128.x) ^ uVar16);
      local_160 = (float)((uint)(fVar20 * local_128.y) ^ uVar16);
      local_140 = (local_150.w * local_15c + fVar21 * local_150.x + local_150.y * local_168) -
                  local_150.z * local_160;
      local_13c = (local_150.w * local_160 + fVar21 * local_150.y + local_150.z * local_15c) -
                  local_150.x * local_168;
      pfVar3 = (pTVar7->swingBlendWeights)._Mypair._Myval2._Myfirst;
      uVar8 = 0;
      local_138 = (local_150.w * local_168 + fVar21 * local_150.z + local_150.x * local_160) -
                  local_150.y * local_15c;
      fVar20 = ((fVar21 * local_150.w - local_150.x * local_15c) - local_150.y * local_160) -
               local_150.z * local_168;
      fVar22 = fVar4 / (fVar20 * fVar20 + local_138 * local_138 +
                       local_13c * local_13c + local_140 * local_140);
      local_140 = fVar22 * local_140;
      local_13c = fVar22 * local_13c;
      local_138 = fVar22 * local_138;
      fVar22 = fVar22 * fVar20;
      if ((longlong)(pTVar7->swingBlendWeights)._Mypair._Myval2._Mylast - (longlong)pfVar3 >> 2 != 0
         ) {
        puVar9 = (pTVar7->swingOutputIndices)._Mypair._Myval2._Myfirst;
        do {
          fVar20 = pfVar3[uVar8];
          local_164 = fVar4;
          fVar10 = fVar22;
          if (fVar22 < 0.0) {
            local_164 = __real_bf800000;
            fVar10 = (float)((uint)fVar22 ^ __xmm_80000000800000008000000080000000);
          }
          fVar17 = fVar4 - fVar20;
          if (fVar10 <= __real_3f7ffffe) {
            fVar10 = acosf(fVar10);
            fVar11 = sinf(fVar10);
            fVar17 = sinf(fVar10 * fVar17);
            fVar17 = fVar17 * (fVar4 / fVar11);
            fVar20 = sinf(fVar10 * fVar20);
            fVar20 = fVar20 * (fVar4 / fVar11);
          }
          lVar6 = local_e8[0];
          fVar13 = (float)((uint)(local_140 * fVar17) ^ __xmm_80000000800000008000000080000000);
          fVar11 = (float)((uint)(local_13c * fVar17) ^ __xmm_80000000800000008000000080000000);
          fVar10 = (float)((uint)(local_138 * fVar17) ^ __xmm_80000000800000008000000080000000);
          fVar20 = fVar20 * local_164 + fVar17 * fVar22;
          fVar14 = (fVar13 * fVar21 + fVar20 * local_15c + local_160 * fVar10) - local_168 * fVar11;
          fVar15 = (fVar20 * local_160 + fVar21 * fVar11 + fVar13 * local_168) - local_15c * fVar10;
          fVar17 = fVar15 + fVar15;
          fVar18 = (fVar20 * local_168 + fVar21 * fVar10 + local_15c * fVar11) - fVar13 * local_160;
          local_134 = fVar14 * fVar17;
          fVar19 = ((fVar20 * fVar21 - fVar13 * local_15c) - local_160 * fVar11) -
                   local_168 * fVar10;
          fVar20 = fVar18 + fVar18;
          local_130 = fVar14 * (fVar14 + fVar14);
          fVar13 = fVar19 * (fVar14 + fVar14);
          fVar14 = fVar19 * fVar17 + fVar14 * fVar20;
          fVar11 = (float)((uint)fVar14 & __xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar10 = fVar4 - fVar11;
          if (fVar10 <= 0.0) {
            fVar10 = 0.0;
          }
          fVar10 = SQRT(fVar10) *
                   (((((((__real_3bda90c5 - fVar11 * ___real_3aa57a2c) * fVar11 - ___real_3c8bfc66)
                        * fVar11 + ___real_3cfd10f8) * fVar11 - ___real_3d4d8392) * fVar11 +
                     ___real_3db63a9e) * fVar11 - ___real_3e5bbfca) * fVar11 + fVar12);
          if (fVar14 < 0.0) {
            fVar10 = fVar10 - fVar12;
          }
          else {
            fVar10 = fVar12 - fVar10;
          }
          if (fVar4 <= fVar11) {
            fVar13 = fVar13 + fVar15 * fVar20;
            fVar17 = fVar18 * fVar20 + local_130;
            fVar11 = 0.0;
          }
          else {
            fVar11 = atan2f(fVar19 * fVar20 - local_134,fVar4 - (fVar18 * fVar20 + fVar15 * fVar17))
            ;
            fVar17 = fVar15 * fVar17 + local_130;
            fVar13 = fVar13 - fVar15 * fVar20;
          }
          fVar20 = atan2f(fVar13,fVar4 - fVar17);
          uVar8 = uVar8 + 1;
          *(float *)(lVar6 + (ulonglong)*puVar9 * 4) = fVar20 * fVar5;
          *(float *)(lVar6 + (ulonglong)puVar9[1] * 4) = fVar10 * fVar5;
          puVar1 = puVar9 + 2;
          puVar9 = puVar9 + 4;
          *(float *)(lVar6 + (ulonglong)*puVar1 * 4) = fVar11 * fVar5;
        } while (uVar8 < (ulonglong)
                         ((longlong)(pTVar7->swingBlendWeights)._Mypair._Myval2._Mylast -
                          (longlong)pfVar3 >> 2));
      }
    }
    uVar16 = __xmm_80000000800000008000000080000000;
    puVar9 = (pTVar7->twistInputIndices)._Mypair._Myval2._Myfirst;
    if ((puVar9 != (pTVar7->twistInputIndices)._Mypair._Myval2._Mylast) &&
       ((pTVar7->swingInputIndices)._Mypair._Myval2._Myfirst ==
        (pTVar7->swingInputIndices)._Mypair._Myval2._Mylast)) {
      local_118.y = *(float *)(local_f8[0] + (ulonglong)puVar9[1] * 4);
      local_118.z = *(float *)(local_f8[0] + (ulonglong)puVar9[2] * 4);
      local_118.w = *(float *)(local_f8[0] + (ulonglong)puVar9[3] * 4);
      local_118.x = *(float *)(local_f8[0] + (ulonglong)*puVar9 * 4);
      (*`public:_virtual_void___cdecl_rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>::calculate(rl4::ControlsInputInstance_const*___ptr64,rl4::JointsOutputInstance*___ptr64,unsigned_short)const___ptr64'
        ::__l2::separateTwistComponent[(int)pTVar7->twistTwistAxis])(&local_108,&local_118);
      local_160 = local_108.y;
      local_168 = local_108.z;
      local_15c = local_108.x;
      fVar21 = local_108.w;
    }
    pfVar3 = (pTVar7->twistBlendWeights)._Mypair._Myval2._Myfirst;
    uVar8 = 0;
    if ((longlong)(pTVar7->twistBlendWeights)._Mypair._Myval2._Mylast - (longlong)pfVar3 >> 2 != 0)
    {
      puVar9 = (pTVar7->twistOutputIndices)._Mypair._Myval2._Myfirst;
      do {
        fVar20 = pfVar3[uVar8];
        fVar12 = fVar21;
        fVar22 = fVar4;
        if (fVar21 < 0.0) {
          fVar12 = (float)((uint)fVar21 ^ uVar16);
          fVar22 = __real_bf800000;
        }
        fVar10 = fVar4 - fVar20;
        if (fVar12 <= __real_3f7ffffe) {
          fVar12 = acosf(fVar12);
          fVar17 = sinf(fVar12);
          fVar10 = sinf(fVar12 * fVar10);
          fVar10 = fVar10 * (fVar4 / fVar17);
          fVar20 = sinf(fVar12 * fVar20);
          fVar20 = fVar20 * (fVar4 / fVar17);
        }
        lVar6 = local_e8[0];
        fVar12 = __real_3fc90fda;
        fVar11 = local_160 * fVar10;
        fVar13 = local_15c * fVar10;
        fVar14 = fVar11 + fVar11;
        fVar17 = local_168 * fVar10;
        fVar19 = fVar22 * fVar20 + fVar21 * fVar10;
        fVar20 = fVar17 + fVar17;
        fVar18 = (fVar13 + fVar13) * fVar19;
        fVar17 = fVar20 * fVar17;
        fVar15 = fVar14 * fVar19 + fVar20 * fVar13;
        fVar10 = (float)((uint)fVar15 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        fVar22 = fVar4 - fVar10;
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        fVar22 = SQRT(fVar22) *
                 (((((((__real_3bda90c5 - fVar10 * ___real_3aa57a2c) * fVar10 - ___real_3c8bfc66) *
                      fVar10 + ___real_3cfd10f8) * fVar10 - ___real_3d4d8392) * fVar10 +
                   ___real_3db63a9e) * fVar10 - ___real_3e5bbfca) * fVar10 + __real_3fc90fda);
        if (fVar15 < 0.0) {
          fVar22 = fVar22 - __real_3fc90fda;
        }
        else {
          fVar22 = __real_3fc90fda - fVar22;
        }
        if (fVar4 <= fVar10) {
          fVar18 = fVar18 + fVar20 * fVar11;
          fVar10 = 0.0;
        }
        else {
          fVar10 = atan2f(fVar20 * fVar19 - fVar14 * fVar13,fVar4 - (fVar17 + fVar14 * fVar11));
          fVar18 = fVar18 - fVar20 * fVar11;
          fVar17 = fVar14 * fVar11;
        }
        fVar20 = atan2f(fVar18,fVar4 - (fVar17 + (fVar13 + fVar13) * fVar13));
        uVar8 = uVar8 + 1;
        *(float *)(lVar6 + (ulonglong)*puVar9 * 4) = fVar20 * fVar5;
        *(float *)(lVar6 + (ulonglong)puVar9[1] * 4) = fVar22 * fVar5;
        uVar16 = __xmm_80000000800000008000000080000000;
        puVar1 = puVar9 + 2;
        puVar9 = puVar9 + 4;
        *(float *)(lVar6 + (ulonglong)*puVar1 * 4) = fVar10 * fVar5;
      } while (uVar8 < (ulonglong)
                       ((longlong)(pTVar7->twistBlendWeights)._Mypair._Myval2._Mylast -
                        (longlong)pfVar3 >> 2));
    }
    uVar16 = __xmm_80000000800000008000000080000000;
  }
  __xmm_80000000800000008000000080000000 = uVar16;
  return;
}

// calculate @ 14c57f660

void __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
::calculate(TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
            *this,ControlsInputInstance *param_1,JointsOutputInstance *param_2,ushort param_3,
           ushort param_4)

{
  return;
}

// load @ 14c57f670

void __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
::load(TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
       *this,BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> *param_1)

{
  ExtendableBinaryInputArchive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>,trio::BoundedIOStream,unsigned_int,unsigned_int,1>
  *this_00;
  undefined1 *puVar1;
  uint local_res8 [2];
  
  this_00 = *(ExtendableBinaryInputArchive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>,trio::BoundedIOStream,unsigned_int,unsigned_int,1>
              **)param_1;
  local_res8[0] = 0;
  puVar1 = &this_00->stream->field_0x10;
  (**(code **)(*(longlong *)puVar1 + 8))(puVar1,local_res8,4);
  terse::
  ExtendableBinaryInputArchive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>,trio::BoundedIOStream,unsigned_int,unsigned_int,1>
  ::
  processElements<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>_>
            (this_00,&this->setups,
             (ulonglong)
             (local_res8[0] >> 0x18 | (local_res8[0] & 0xff0000) >> 8 |
              (local_res8[0] & 0xff00) << 8 | local_res8[0] << 0x18));
  return;
}

// save @ 14c57f6d0

void __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
::save(TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
       *this,BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> *param_1)

{
  terse::Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>::
  operator()<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>_&>
            ((Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
              *)param_1,&this->setups);
  return;
}

// `scalar_deleting_destructor' @ 14c57f6f0

void * __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
::_scalar_deleting_destructor_
          (TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
           *this,uint param_1)

{
  longlong *plVar1;
  undefined4 in_register_00000014;
  
  plVar1 = *(longlong **)&(this->instanceFactory).field_0x38;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))
              (plVar1,CONCAT71((int7)(CONCAT44(in_register_00000014,param_1) >> 8),
                               (function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
                                *)plVar1 != &this->instanceFactory));
    *(undefined8 *)&(this->instanceFactory).field_0x38 = 0;
  }
  std::
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
  ::
  ~vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
            (&this->setups);
  JointsEvaluator::~JointsEvaluator((JointsEvaluator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// _Copy @ 14c57f770

_Func_base<void,rl4::JointsEvaluator_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TAEAPEAVMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUdegrees_impl_tdm___tdm___0A__rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__TAEAPEAVMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Move @ 14c57f790

_Func_base<void,rl4::JointsEvaluator_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TAEAPEAVMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUdegrees_impl_tdm___tdm___0A__rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__TAEAPEAVMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Do_call @ 14c57f7b0

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Do_call(void *this,JointsEvaluator **param_1)

{
  JointsEvaluator *pJVar1;
  
  pJVar1 = *param_1;
  (**(code **)*pJVar1)(pJVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00014c57f7ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))
            (*(longlong **)((longlong)this + 8),pJVar1,0x68,8);
  return;
}

// _Target_type @ 14c57f800

type_info * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_class_std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator*___ptr64)>_>___cdecl_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator*___ptr64)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource*___ptr64&___ptr64>(std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>&&___ptr64,std::nullptr_t&&___ptr64,pma::MemoryResource*___ptr64&___ptr64)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Get @ 14c57f810

void * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Delete_this @ 14c57f820

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x10);
    return;
  }
  return;
}

// _Copy @ 14c57f840

_Func_base<void,rl4::JointsEvaluator_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TAEAPEAVMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_UPassthroughAdapter_rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__TAEAPEAVMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Move @ 14c57f860

_Func_base<void,rl4::JointsEvaluator_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TAEAPEAVMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_UPassthroughAdapter_rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__TAEAPEAVMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Do_call @ 14c57f880

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Do_call(void *this,JointsEvaluator **param_1)

{
  JointsEvaluator *pJVar1;
  
  pJVar1 = *param_1;
  (**(code **)*pJVar1)(pJVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00014c57f8ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))
            (*(longlong **)((longlong)this + 8),pJVar1,0x68,8);
  return;
}

// _Target_type @ 14c57f8d0

type_info * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_class_std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator*___ptr64)>_>___cdecl_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator*___ptr64)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource*___ptr64&___ptr64>(std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>&&___ptr64,std::nullptr_t&&___ptr64,pma::MemoryResource*___ptr64&___ptr64)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Get @ 14c57f8e0

void * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Delete_this @ 14c57f8f0

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x10);
    return;
  }
  return;
}

// _Copy @ 14c57f910

_Func_base<void,rl4::JointsEvaluator_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TAEAPEAVMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__TAEAPEAVMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Move @ 14c57f930

_Func_base<void,rl4::JointsEvaluator_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TAEAPEAVMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__TAEAPEAVMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Do_call @ 14c57f950

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Do_call(void *this,JointsEvaluator **param_1)

{
  JointsEvaluator *pJVar1;
  
  pJVar1 = *param_1;
  (**(code **)*pJVar1)(pJVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00014c57f98a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))
            (*(longlong **)((longlong)this + 8),pJVar1,0x68,8);
  return;
}

// _Target_type @ 14c57f9a0

type_info * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_class_std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator*___ptr64)>_>___cdecl_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator*___ptr64)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource*___ptr64&___ptr64>(std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>&&___ptr64,std::nullptr_t&&___ptr64,pma::MemoryResource*___ptr64&___ptr64)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Get @ 14c57f9b0

void * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Delete_this @ 14c57f9c0

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x10);
    return;
  }
  return;
}

// _Copy @ 14c57f9e0

_Func_base<void,rl4::JointsEvaluator_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TAEAPEAVMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUdegrees_impl_tdm___tdm___0A__rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__TAEAPEAVMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Move @ 14c57fa00

_Func_base<void,rl4::JointsEvaluator_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TAEAPEAVMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUdegrees_impl_tdm___tdm___0A__rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__TAEAPEAVMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Do_call @ 14c57fa20

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Do_call(void *this,JointsEvaluator **param_1)

{
  JointsEvaluator *pJVar1;
  
  pJVar1 = *param_1;
  (**(code **)*pJVar1)(pJVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00014c57fa5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))
            (*(longlong **)((longlong)this + 8),pJVar1,0x68,8);
  return;
}

// _Target_type @ 14c57fa70

type_info * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_class_std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator*___ptr64)>_>___cdecl_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator*___ptr64)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource*___ptr64&___ptr64>(std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>&&___ptr64,std::nullptr_t&&___ptr64,pma::MemoryResource*___ptr64&___ptr64)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Get @ 14c57fa80

void * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Delete_this @ 14c57fa90

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x10);
    return;
  }
  return;
}

// _Copy @ 14c57fab0

_Func_base<void,rl4::JointsEvaluator_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TAEAPEAVMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__TAEAPEAVMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Move @ 14c57fad0

_Func_base<void,rl4::JointsEvaluator_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TAEAPEAVMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__TAEAPEAVMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Do_call @ 14c57faf0

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Do_call(void *this,JointsEvaluator **param_1)

{
  JointsEvaluator *pJVar1;
  
  pJVar1 = *param_1;
  (**(code **)*pJVar1)(pJVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00014c57fb2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))
            (*(longlong **)((longlong)this + 8),pJVar1,0x68,8);
  return;
}

// _Target_type @ 14c57fb40

type_info * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_class_std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator*___ptr64)>_>___cdecl_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator*___ptr64)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource*___ptr64&___ptr64>(std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>&&___ptr64,std::nullptr_t&&___ptr64,pma::MemoryResource*___ptr64&___ptr64)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Get @ 14c57fb50

void * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Delete_this @ 14c57fb60

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x10);
    return;
  }
  return;
}

// `scalar_deleting_destructor' @ 14c57fb80

void * __thiscall
`anonymous_namespace'::
TwistSwingJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  rltests::twsw::TwistSwingReader::~TwistSwingReader((TwistSwingReader *)((longlong)this + 0x70));
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// TestBody @ 14c57fbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::TestBody(TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
           *this)

{
  undefined1 *puVar1;
  TwistSwingSetup *this_00;
  TwistSwingSetup *pTVar2;
  undefined1 auStack_108 [32];
  TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128> TStack_e8;
  TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
  *pTStack_98;
  JointBehaviorFilter JStack_90;
  undefined1 auStack_68 [56];
  longlong *plStack_30;
  TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
  *pTStack_28;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  TStack_e8._padding_ =
       (longlong)
       &
       ___7__TwistSwingJointsBuilder_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3__rl4__6B_
  ;
  puVar1 = &this->field_0x10;
  TStack_e8.config._11_1_ = JStack_90.filters._Mypair._Myval1._3_1_;
  TStack_e8.config.calculationType = SSE;
  TStack_e8.config.loadJoints = true;
  TStack_e8.config.loadBlendShapes = true;
  TStack_e8.config.loadAnimatedMaps = true;
  TStack_e8.config.loadMachineLearnedBehavior = true;
  TStack_e8.config.loadRBFBehavior = true;
  TStack_e8.config.loadTwistSwingBehavior = true;
  TStack_e8.config.translationType = Vector;
  TStack_e8.config.rotationType = EulerAngles;
  TStack_e8.config.rotationOrder = XYZ;
  TStack_e8.config.scaleType = Vector;
  TStack_e8.config.translationPruningThreshold = 0.0;
  TStack_e8.config.rotationPruningThreshold = 0.0;
  TStack_e8.config.scalePruningThreshold = 0.0;
  TStack_e8.memRes = (MemoryResource *)puVar1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TStack_e8.setups._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
  TStack_e8.setups._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
  TStack_e8.setups._Mypair._Myval1 =
       (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  if (puVar1 != (undefined1 *)0x0) {
    TStack_e8.setups._Mypair._Myval1 =
         (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)puVar1;
  }
  TStack_e8.setups._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
  TStack_e8.rotationUnit = degrees;
  rl4::JointBehaviorFilter::JointBehaviorFilter
            (&JStack_90,(Reader *)&this->field_0x18,(MemoryResource *)puVar1);
  rl4::TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::
  fillStorage(&TStack_e8,&JStack_90);
  rl4::TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::
  build(&TStack_e8,
        (unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_> *)
        auStack_68);
  rl4::
  TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
  ::Accessor::assertRawDataEqual(pTStack_28);
  if (pTStack_28 !=
      (TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
       *)0x0) {
    pTStack_98 = pTStack_28;
    if (plStack_30 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plStack_30 + 0x10))(plStack_30,&pTStack_98);
  }
  if (plStack_30 != (longlong *)0x0) {
    (**(code **)(*plStack_30 + 0x20))(plStack_30,plStack_30 != (longlong *)auStack_68);
    plStack_30 = (longlong *)0x0;
  }
  if (JStack_90.filters._Mypair._Myval2._Myfirst != (FilterType *)0x0) {
    (**(code **)(*(longlong *)
                  CONCAT44(JStack_90.filters._Mypair._Myval1._4_4_,
                           JStack_90.filters._Mypair._Myval1._0_4_) + 0x10))
              ((longlong *)
               CONCAT44(JStack_90.filters._Mypair._Myval1._4_4_,
                        JStack_90.filters._Mypair._Myval1._0_4_),
               JStack_90.filters._Mypair._Myval2._Myfirst,
               ((longlong)JStack_90.filters._Mypair._Myval2._Myend -
                (longlong)JStack_90.filters._Mypair._Myval2._Myfirst >> 1) * 2,8);
    JStack_90.filters._Mypair._Myval2._Myend = (FilterType *)0x0;
    JStack_90.filters._Mypair._Myval2._Myfirst = (FilterType *)0x0;
    JStack_90.filters._Mypair._Myval2._Mylast = (FilterType *)0x0;
  }
  pTVar2 = TStack_e8.setups._Mypair._Myval2._Mylast;
  this_00 = TStack_e8.setups._Mypair._Myval2._Myfirst;
  if (TStack_e8.setups._Mypair._Myval2._Myfirst != (TwistSwingSetup *)0x0) {
    for (; this_00 != pTVar2; this_00 = this_00 + 1) {
      rl4::TwistSwingSetup::~TwistSwingSetup(this_00);
    }
    (**(code **)(*(undefined **)TStack_e8.setups._Mypair._Myval1 + 0x10))
              (TStack_e8.setups._Mypair._Myval1,TStack_e8.setups._Mypair._Myval2._Myfirst,
               (((longlong)TStack_e8.setups._Mypair._Myval2._Myend -
                (longlong)TStack_e8.setups._Mypair._Myval2._Myfirst) / 0xd0) * 0xd0,8);
    TStack_e8.setups._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
    TStack_e8.setups._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
    TStack_e8.setups._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
  }
  rl4::JointsBuilder::~JointsBuilder((JointsBuilder *)&TStack_e8);
  return;
}

// `scalar_deleting_destructor' @ 14c57fc00

void * __thiscall
TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::_scalar_deleting_destructor_
          (TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
           *this,uint param_1)

{
  rltests::twsw::TwistSwingReader::~TwistSwingReader((TwistSwingReader *)&this->field_0x70);
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)(this + 1));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)&this->field_0x70);
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x10);
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// CreateTest @ 14c57fc70

Test * __thiscall
testing::internal::
TestFactoryImpl<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
::CreateTest(TestFactoryImpl<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x90);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &TwistSwingJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    rltests::twsw::TwistSwingReader::TwistSwingReader
              ((TwistSwingReader *)&this_00[1].gtest_flag_saver_);
    this_00->_padding_ =
         (longlong)
         &
         ___7__TwistSwingJointStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___std____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c57fce0

void * __thiscall
testing::internal::
TestFactoryImpl<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c57fd20

void * __thiscall
`anonymous_namespace'::
TwistSwingJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  rltests::twsw::TwistSwingReader::~TwistSwingReader((TwistSwingReader *)((longlong)this + 0x70));
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// TestBody @ 14c57fd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::TestBody(TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
           *this)

{
  undefined1 *puVar1;
  TwistSwingSetup *this_00;
  TwistSwingSetup *pTVar2;
  undefined1 auStack_108 [32];
  TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  TStack_e8;
  TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
  *pTStack_98;
  JointBehaviorFilter JStack_90;
  undefined1 auStack_68 [56];
  longlong *plStack_30;
  TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
  *pTStack_28;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  TStack_e8._padding_ =
       (longlong)
       &
       ___7__TwistSwingJointsBuilder_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3__rl4__6B_
  ;
  puVar1 = &this->field_0x10;
  TStack_e8.config._11_1_ = JStack_90.filters._Mypair._Myval1._3_1_;
  TStack_e8.config.calculationType = SSE;
  TStack_e8.config.loadJoints = true;
  TStack_e8.config.loadBlendShapes = true;
  TStack_e8.config.loadAnimatedMaps = true;
  TStack_e8.config.loadMachineLearnedBehavior = true;
  TStack_e8.config.loadRBFBehavior = true;
  TStack_e8.config.loadTwistSwingBehavior = true;
  TStack_e8.config.translationType = Vector;
  TStack_e8.config.rotationType = EulerAngles;
  TStack_e8.config.rotationOrder = XYZ;
  TStack_e8.config.scaleType = Vector;
  TStack_e8.config.translationPruningThreshold = 0.0;
  TStack_e8.config.rotationPruningThreshold = 0.0;
  TStack_e8.config.scalePruningThreshold = 0.0;
  TStack_e8.memRes = (MemoryResource *)puVar1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TStack_e8.setups._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
  TStack_e8.setups._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
  TStack_e8.setups._Mypair._Myval1 =
       (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  if (puVar1 != (undefined1 *)0x0) {
    TStack_e8.setups._Mypair._Myval1 =
         (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)puVar1;
  }
  TStack_e8.setups._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
  TStack_e8.rotationUnit = degrees;
  rl4::JointBehaviorFilter::JointBehaviorFilter
            (&JStack_90,(Reader *)&this->field_0x18,(MemoryResource *)puVar1);
  rl4::
  TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  ::fillStorage(&TStack_e8,&JStack_90);
  rl4::
  TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  ::build(&TStack_e8,
          (unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_> *)
          auStack_68);
  rl4::
  TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
  ::Accessor::assertRawDataEqual(pTStack_28);
  if (pTStack_28 !=
      (TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
       *)0x0) {
    pTStack_98 = pTStack_28;
    if (plStack_30 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plStack_30 + 0x10))(plStack_30,&pTStack_98);
  }
  if (plStack_30 != (longlong *)0x0) {
    (**(code **)(*plStack_30 + 0x20))(plStack_30,plStack_30 != (longlong *)auStack_68);
    plStack_30 = (longlong *)0x0;
  }
  if (JStack_90.filters._Mypair._Myval2._Myfirst != (FilterType *)0x0) {
    (**(code **)(*(longlong *)
                  CONCAT44(JStack_90.filters._Mypair._Myval1._4_4_,
                           JStack_90.filters._Mypair._Myval1._0_4_) + 0x10))
              ((longlong *)
               CONCAT44(JStack_90.filters._Mypair._Myval1._4_4_,
                        JStack_90.filters._Mypair._Myval1._0_4_),
               JStack_90.filters._Mypair._Myval2._Myfirst,
               ((longlong)JStack_90.filters._Mypair._Myval2._Myend -
                (longlong)JStack_90.filters._Mypair._Myval2._Myfirst >> 1) * 2,8);
    JStack_90.filters._Mypair._Myval2._Myend = (FilterType *)0x0;
    JStack_90.filters._Mypair._Myval2._Myfirst = (FilterType *)0x0;
    JStack_90.filters._Mypair._Myval2._Mylast = (FilterType *)0x0;
  }
  pTVar2 = TStack_e8.setups._Mypair._Myval2._Mylast;
  this_00 = TStack_e8.setups._Mypair._Myval2._Myfirst;
  if (TStack_e8.setups._Mypair._Myval2._Myfirst != (TwistSwingSetup *)0x0) {
    for (; this_00 != pTVar2; this_00 = this_00 + 1) {
      rl4::TwistSwingSetup::~TwistSwingSetup(this_00);
    }
    (**(code **)(*(undefined **)TStack_e8.setups._Mypair._Myval1 + 0x10))
              (TStack_e8.setups._Mypair._Myval1,TStack_e8.setups._Mypair._Myval2._Myfirst,
               (((longlong)TStack_e8.setups._Mypair._Myval2._Myend -
                (longlong)TStack_e8.setups._Mypair._Myval2._Myfirst) / 0xd0) * 0xd0,8);
    TStack_e8.setups._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
    TStack_e8.setups._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
    TStack_e8.setups._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
  }
  rl4::JointsBuilder::~JointsBuilder((JointsBuilder *)&TStack_e8);
  return;
}

// `scalar_deleting_destructor' @ 14c57fda0

void * __thiscall
TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::_scalar_deleting_destructor_
          (TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
           *this,uint param_1)

{
  rltests::twsw::TwistSwingReader::~TwistSwingReader((TwistSwingReader *)&this->field_0x70);
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)(this + 1));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)&this->field_0x70);
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x10);
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// CreateTest @ 14c57fe10

Test * __thiscall
testing::internal::
TestFactoryImpl<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
::CreateTest(TestFactoryImpl<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x90);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &TwistSwingJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    rltests::twsw::TwistSwingReader::TwistSwingReader
              ((TwistSwingReader *)&this_00[1].gtest_flag_saver_);
    this_00->_padding_ =
         (longlong)
         &
         ___7__TwistSwingJointStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___std____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c57fe80

void * __thiscall
testing::internal::
TestFactoryImpl<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c57fec0

void * __thiscall
`anonymous_namespace'::
TwistSwingJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  rltests::twsw::TwistSwingReader::~TwistSwingReader((TwistSwingReader *)((longlong)this + 0x70));
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// TestBody @ 14c57ff30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
::TestBody(TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
           *this)

{
  undefined1 *puVar1;
  TwistSwingSetup *this_00;
  TwistSwingSetup *pTVar2;
  undefined1 auStack_108 [32];
  TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128> TStack_e8;
  TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
  *pTStack_98;
  JointBehaviorFilter JStack_90;
  undefined1 auStack_68 [56];
  longlong *plStack_30;
  TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
  *pTStack_28;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  TStack_e8._padding_ =
       (longlong)
       &
       ___7__TwistSwingJointsBuilder_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3__rl4__6B_
  ;
  puVar1 = &this->field_0x10;
  TStack_e8.config._11_1_ = JStack_90.filters._Mypair._Myval1._3_1_;
  TStack_e8.config.calculationType = SSE;
  TStack_e8.config.loadJoints = true;
  TStack_e8.config.loadBlendShapes = true;
  TStack_e8.config.loadAnimatedMaps = true;
  TStack_e8.config.loadMachineLearnedBehavior = true;
  TStack_e8.config.loadRBFBehavior = true;
  TStack_e8.config.loadTwistSwingBehavior = true;
  TStack_e8.config.translationType = Vector;
  TStack_e8.config.rotationType = Quaternions;
  TStack_e8.config.rotationOrder = XYZ;
  TStack_e8.config.scaleType = Vector;
  TStack_e8.config.translationPruningThreshold = 0.0;
  TStack_e8.config.rotationPruningThreshold = 0.0;
  TStack_e8.config.scalePruningThreshold = 0.0;
  TStack_e8.memRes = (MemoryResource *)puVar1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TStack_e8.setups._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
  TStack_e8.setups._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
  TStack_e8.setups._Mypair._Myval1 =
       (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  if (puVar1 != (undefined1 *)0x0) {
    TStack_e8.setups._Mypair._Myval1 =
         (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)puVar1;
  }
  TStack_e8.setups._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
  TStack_e8.rotationUnit = degrees;
  rl4::JointBehaviorFilter::JointBehaviorFilter
            (&JStack_90,(Reader *)&this->field_0x18,(MemoryResource *)puVar1);
  rl4::TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::
  fillStorage(&TStack_e8,&JStack_90);
  rl4::TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::
  build(&TStack_e8,
        (unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_> *)
        auStack_68);
  rl4::
  TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
  ::Accessor::assertRawDataEqual(pTStack_28);
  if (pTStack_28 !=
      (TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
       *)0x0) {
    pTStack_98 = pTStack_28;
    if (plStack_30 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plStack_30 + 0x10))(plStack_30,&pTStack_98);
  }
  if (plStack_30 != (longlong *)0x0) {
    (**(code **)(*plStack_30 + 0x20))(plStack_30,plStack_30 != (longlong *)auStack_68);
    plStack_30 = (longlong *)0x0;
  }
  if (JStack_90.filters._Mypair._Myval2._Myfirst != (FilterType *)0x0) {
    (**(code **)(*(longlong *)
                  CONCAT44(JStack_90.filters._Mypair._Myval1._4_4_,
                           JStack_90.filters._Mypair._Myval1._0_4_) + 0x10))
              ((longlong *)
               CONCAT44(JStack_90.filters._Mypair._Myval1._4_4_,
                        JStack_90.filters._Mypair._Myval1._0_4_),
               JStack_90.filters._Mypair._Myval2._Myfirst,
               ((longlong)JStack_90.filters._Mypair._Myval2._Myend -
                (longlong)JStack_90.filters._Mypair._Myval2._Myfirst >> 1) * 2,8);
    JStack_90.filters._Mypair._Myval2._Myend = (FilterType *)0x0;
    JStack_90.filters._Mypair._Myval2._Myfirst = (FilterType *)0x0;
    JStack_90.filters._Mypair._Myval2._Mylast = (FilterType *)0x0;
  }
  pTVar2 = TStack_e8.setups._Mypair._Myval2._Mylast;
  this_00 = TStack_e8.setups._Mypair._Myval2._Myfirst;
  if (TStack_e8.setups._Mypair._Myval2._Myfirst != (TwistSwingSetup *)0x0) {
    for (; this_00 != pTVar2; this_00 = this_00 + 1) {
      rl4::TwistSwingSetup::~TwistSwingSetup(this_00);
    }
    (**(code **)(*(undefined **)TStack_e8.setups._Mypair._Myval1 + 0x10))
              (TStack_e8.setups._Mypair._Myval1,TStack_e8.setups._Mypair._Myval2._Myfirst,
               (((longlong)TStack_e8.setups._Mypair._Myval2._Myend -
                (longlong)TStack_e8.setups._Mypair._Myval2._Myfirst) / 0xd0) * 0xd0,8);
    TStack_e8.setups._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
    TStack_e8.setups._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
    TStack_e8.setups._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
  }
  rl4::JointsBuilder::~JointsBuilder((JointsBuilder *)&TStack_e8);
  return;
}

// `scalar_deleting_destructor' @ 14c57ff40

void * __thiscall
TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
::_scalar_deleting_destructor_
          (TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
           *this,uint param_1)

{
  rltests::twsw::TwistSwingReader::~TwistSwingReader((TwistSwingReader *)&this->field_0x70);
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)(this + 1));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)&this->field_0x70);
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x10);
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// CreateTest @ 14c57ffb0

Test * __thiscall
testing::internal::
TestFactoryImpl<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
::CreateTest(TestFactoryImpl<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x90);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &TwistSwingJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    rltests::twsw::TwistSwingReader::TwistSwingReader
              ((TwistSwingReader *)&this_00[1].gtest_flag_saver_);
    this_00->_padding_ =
         (longlong)
         &
         ___7__TwistSwingJointStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_UPassthroughAdapter_rl4___std____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c580020

void * __thiscall
testing::internal::
TestFactoryImpl<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// createInstance @ 14c580060

unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_> *
__thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
::createInstance(TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
                 *this,unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>
                       *__return_storage_ptr__,MemoryResource *param_1)

{
  longlong *plVar1;
  unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>
  *extraout_RAX;
  MemoryResource *local_res8 [4];
  
  plVar1 = *(longlong **)&(this->instanceFactory).field_0x38;
  local_res8[0] = param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,__return_storage_ptr__,local_res8);
    return __return_storage_ptr__;
  }
  std::_Xbad_function_call();
  return extraout_RAX;
}

// getJointDeltaValueCountForLOD @ 14c5800a0

uint __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
::getJointDeltaValueCountForLOD
          (TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
           *this,ushort param_1)

{
  return 0;
}

// calculate @ 14c5800b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
::calculate(TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
            *this,ControlsInputInstance *param_1,JointsOutputInstance *param_2,ushort param_3)

{
  ushort *puVar1;
  TwistSwingSetup *pTVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  TwistSwingSetup *pTVar7;
  ulonglong uVar8;
  ushort *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  quat<float> local_150;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  quat<float> local_128;
  quat<float> local_118;
  quat<float> local_108;
  longlong local_f8 [2];
  longlong local_e8 [22];
  
  (**(code **)((longlong)*param_1 + 0x20))(param_1,local_f8);
  (**(code **)((longlong)*param_2 + 8))(param_2,local_e8);
  fVar5 = __real_42652ee1;
  fVar4 = __real_3f800000;
  pTVar2 = (this->setups)._Mypair._Myval2._Mylast;
  uVar16 = __xmm_80000000800000008000000080000000;
  fVar12 = __real_3fc90fda;
  for (pTVar7 = (this->setups)._Mypair._Myval2._Myfirst; pTVar7 != pTVar2; pTVar7 = pTVar7 + 1) {
    puVar9 = (pTVar7->swingInputIndices)._Mypair._Myval2._Myfirst;
    local_15c = 0.0;
    local_160 = 0.0;
    local_168 = 0.0;
    fVar21 = fVar4;
    __xmm_80000000800000008000000080000000 = uVar16;
    if (puVar9 != (pTVar7->swingInputIndices)._Mypair._Myval2._Mylast) {
      local_150.y = *(float *)(local_f8[0] + (ulonglong)puVar9[1] * 4);
      local_150.z = *(float *)(local_f8[0] + (ulonglong)puVar9[2] * 4);
      local_150.w = *(float *)(local_f8[0] + (ulonglong)puVar9[3] * 4);
      local_150.x = *(float *)(local_f8[0] + (ulonglong)*puVar9 * 4);
      (*`public:_virtual_void___cdecl_rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>::calculate(rl4::ControlsInputInstance_const*___ptr64,rl4::JointsOutputInstance*___ptr64,unsigned_short)const___ptr64'
        ::__l2::separateTwistComponent[(int)pTVar7->swingTwistAxis])(&local_128,&local_150);
      fVar20 = fVar4 / (local_128.w * local_128.w + local_128.z * local_128.z +
                       local_128.y * local_128.y + local_128.x * local_128.x);
      fVar21 = fVar20 * local_128.w;
      local_168 = (float)((uint)(fVar20 * local_128.z) ^ uVar16);
      local_15c = (float)((uint)(fVar20 * local_128.x) ^ uVar16);
      local_160 = (float)((uint)(fVar20 * local_128.y) ^ uVar16);
      local_140 = (local_150.w * local_15c + fVar21 * local_150.x + local_150.y * local_168) -
                  local_150.z * local_160;
      local_13c = (local_150.w * local_160 + fVar21 * local_150.y + local_150.z * local_15c) -
                  local_150.x * local_168;
      pfVar3 = (pTVar7->swingBlendWeights)._Mypair._Myval2._Myfirst;
      uVar8 = 0;
      local_138 = (local_150.w * local_168 + fVar21 * local_150.z + local_150.x * local_160) -
                  local_150.y * local_15c;
      fVar20 = ((fVar21 * local_150.w - local_150.x * local_15c) - local_150.y * local_160) -
               local_150.z * local_168;
      fVar22 = fVar4 / (fVar20 * fVar20 + local_138 * local_138 +
                       local_13c * local_13c + local_140 * local_140);
      local_140 = fVar22 * local_140;
      local_13c = fVar22 * local_13c;
      local_138 = fVar22 * local_138;
      fVar22 = fVar22 * fVar20;
      if ((longlong)(pTVar7->swingBlendWeights)._Mypair._Myval2._Mylast - (longlong)pfVar3 >> 2 != 0
         ) {
        puVar9 = (pTVar7->swingOutputIndices)._Mypair._Myval2._Myfirst;
        do {
          fVar20 = pfVar3[uVar8];
          local_164 = fVar4;
          fVar10 = fVar22;
          if (fVar22 < 0.0) {
            local_164 = __real_bf800000;
            fVar10 = (float)((uint)fVar22 ^ __xmm_80000000800000008000000080000000);
          }
          fVar17 = fVar4 - fVar20;
          if (fVar10 <= __real_3f7ffffe) {
            fVar10 = acosf(fVar10);
            fVar11 = sinf(fVar10);
            fVar17 = sinf(fVar10 * fVar17);
            fVar17 = fVar17 * (fVar4 / fVar11);
            fVar20 = sinf(fVar10 * fVar20);
            fVar20 = fVar20 * (fVar4 / fVar11);
          }
          lVar6 = local_e8[0];
          fVar13 = (float)((uint)(local_140 * fVar17) ^ __xmm_80000000800000008000000080000000);
          fVar11 = (float)((uint)(local_13c * fVar17) ^ __xmm_80000000800000008000000080000000);
          fVar10 = (float)((uint)(local_138 * fVar17) ^ __xmm_80000000800000008000000080000000);
          fVar20 = fVar20 * local_164 + fVar17 * fVar22;
          fVar14 = (fVar13 * fVar21 + fVar20 * local_15c + local_160 * fVar10) - local_168 * fVar11;
          fVar15 = (fVar20 * local_160 + fVar21 * fVar11 + fVar13 * local_168) - local_15c * fVar10;
          fVar17 = fVar15 + fVar15;
          fVar18 = (fVar20 * local_168 + fVar21 * fVar10 + local_15c * fVar11) - fVar13 * local_160;
          local_134 = fVar14 * fVar17;
          fVar19 = ((fVar20 * fVar21 - fVar13 * local_15c) - local_160 * fVar11) -
                   local_168 * fVar10;
          fVar20 = fVar18 + fVar18;
          local_130 = fVar14 * (fVar14 + fVar14);
          fVar13 = fVar19 * (fVar14 + fVar14);
          fVar14 = fVar19 * fVar17 + fVar14 * fVar20;
          fVar11 = (float)((uint)fVar14 & __xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar10 = fVar4 - fVar11;
          if (fVar10 <= 0.0) {
            fVar10 = 0.0;
          }
          fVar10 = SQRT(fVar10) *
                   (((((((__real_3bda90c5 - fVar11 * ___real_3aa57a2c) * fVar11 - ___real_3c8bfc66)
                        * fVar11 + ___real_3cfd10f8) * fVar11 - ___real_3d4d8392) * fVar11 +
                     ___real_3db63a9e) * fVar11 - ___real_3e5bbfca) * fVar11 + fVar12);
          if (fVar14 < 0.0) {
            fVar10 = fVar10 - fVar12;
          }
          else {
            fVar10 = fVar12 - fVar10;
          }
          if (fVar4 <= fVar11) {
            fVar13 = fVar13 + fVar15 * fVar20;
            fVar17 = fVar18 * fVar20 + local_130;
            fVar11 = 0.0;
          }
          else {
            fVar11 = atan2f(fVar19 * fVar20 - local_134,fVar4 - (fVar18 * fVar20 + fVar15 * fVar17))
            ;
            fVar17 = fVar15 * fVar17 + local_130;
            fVar13 = fVar13 - fVar15 * fVar20;
          }
          fVar20 = atan2f(fVar13,fVar4 - fVar17);
          uVar8 = uVar8 + 1;
          *(float *)(lVar6 + (ulonglong)*puVar9 * 4) = fVar20 * fVar5;
          *(float *)(lVar6 + (ulonglong)puVar9[1] * 4) = fVar10 * fVar5;
          puVar1 = puVar9 + 2;
          puVar9 = puVar9 + 4;
          *(float *)(lVar6 + (ulonglong)*puVar1 * 4) = fVar11 * fVar5;
        } while (uVar8 < (ulonglong)
                         ((longlong)(pTVar7->swingBlendWeights)._Mypair._Myval2._Mylast -
                          (longlong)pfVar3 >> 2));
      }
    }
    uVar16 = __xmm_80000000800000008000000080000000;
    puVar9 = (pTVar7->twistInputIndices)._Mypair._Myval2._Myfirst;
    if ((puVar9 != (pTVar7->twistInputIndices)._Mypair._Myval2._Mylast) &&
       ((pTVar7->swingInputIndices)._Mypair._Myval2._Myfirst ==
        (pTVar7->swingInputIndices)._Mypair._Myval2._Mylast)) {
      local_118.y = *(float *)(local_f8[0] + (ulonglong)puVar9[1] * 4);
      local_118.z = *(float *)(local_f8[0] + (ulonglong)puVar9[2] * 4);
      local_118.w = *(float *)(local_f8[0] + (ulonglong)puVar9[3] * 4);
      local_118.x = *(float *)(local_f8[0] + (ulonglong)*puVar9 * 4);
      (*`public:_virtual_void___cdecl_rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>::calculate(rl4::ControlsInputInstance_const*___ptr64,rl4::JointsOutputInstance*___ptr64,unsigned_short)const___ptr64'
        ::__l2::separateTwistComponent[(int)pTVar7->twistTwistAxis])(&local_108,&local_118);
      local_160 = local_108.y;
      local_168 = local_108.z;
      local_15c = local_108.x;
      fVar21 = local_108.w;
    }
    pfVar3 = (pTVar7->twistBlendWeights)._Mypair._Myval2._Myfirst;
    uVar8 = 0;
    if ((longlong)(pTVar7->twistBlendWeights)._Mypair._Myval2._Mylast - (longlong)pfVar3 >> 2 != 0)
    {
      puVar9 = (pTVar7->twistOutputIndices)._Mypair._Myval2._Myfirst;
      do {
        fVar20 = pfVar3[uVar8];
        fVar12 = fVar21;
        fVar22 = fVar4;
        if (fVar21 < 0.0) {
          fVar12 = (float)((uint)fVar21 ^ uVar16);
          fVar22 = __real_bf800000;
        }
        fVar10 = fVar4 - fVar20;
        if (fVar12 <= __real_3f7ffffe) {
          fVar12 = acosf(fVar12);
          fVar17 = sinf(fVar12);
          fVar10 = sinf(fVar12 * fVar10);
          fVar10 = fVar10 * (fVar4 / fVar17);
          fVar20 = sinf(fVar12 * fVar20);
          fVar20 = fVar20 * (fVar4 / fVar17);
        }
        lVar6 = local_e8[0];
        fVar12 = __real_3fc90fda;
        fVar11 = local_160 * fVar10;
        fVar13 = local_15c * fVar10;
        fVar14 = fVar11 + fVar11;
        fVar17 = local_168 * fVar10;
        fVar19 = fVar22 * fVar20 + fVar21 * fVar10;
        fVar20 = fVar17 + fVar17;
        fVar18 = (fVar13 + fVar13) * fVar19;
        fVar17 = fVar20 * fVar17;
        fVar15 = fVar14 * fVar19 + fVar20 * fVar13;
        fVar10 = (float)((uint)fVar15 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        fVar22 = fVar4 - fVar10;
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        fVar22 = SQRT(fVar22) *
                 (((((((__real_3bda90c5 - fVar10 * ___real_3aa57a2c) * fVar10 - ___real_3c8bfc66) *
                      fVar10 + ___real_3cfd10f8) * fVar10 - ___real_3d4d8392) * fVar10 +
                   ___real_3db63a9e) * fVar10 - ___real_3e5bbfca) * fVar10 + __real_3fc90fda);
        if (fVar15 < 0.0) {
          fVar22 = fVar22 - __real_3fc90fda;
        }
        else {
          fVar22 = __real_3fc90fda - fVar22;
        }
        if (fVar4 <= fVar10) {
          fVar18 = fVar18 + fVar20 * fVar11;
          fVar10 = 0.0;
        }
        else {
          fVar10 = atan2f(fVar20 * fVar19 - fVar14 * fVar13,fVar4 - (fVar17 + fVar14 * fVar11));
          fVar18 = fVar18 - fVar20 * fVar11;
          fVar17 = fVar14 * fVar11;
        }
        fVar20 = atan2f(fVar18,fVar4 - (fVar17 + (fVar13 + fVar13) * fVar13));
        uVar8 = uVar8 + 1;
        *(float *)(lVar6 + (ulonglong)*puVar9 * 4) = fVar20 * fVar5;
        *(float *)(lVar6 + (ulonglong)puVar9[1] * 4) = fVar22 * fVar5;
        uVar16 = __xmm_80000000800000008000000080000000;
        puVar1 = puVar9 + 2;
        puVar9 = puVar9 + 4;
        *(float *)(lVar6 + (ulonglong)*puVar1 * 4) = fVar10 * fVar5;
      } while (uVar8 < (ulonglong)
                       ((longlong)(pTVar7->twistBlendWeights)._Mypair._Myval2._Mylast -
                        (longlong)pfVar3 >> 2));
    }
    uVar16 = __xmm_80000000800000008000000080000000;
  }
  __xmm_80000000800000008000000080000000 = uVar16;
  return;
}

// calculate @ 14c580b30

void __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
::calculate(TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
            *this,ControlsInputInstance *param_1,JointsOutputInstance *param_2,ushort param_3,
           ushort param_4)

{
  return;
}

// load @ 14c580b40

void __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
::load(TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
       *this,BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> *param_1)

{
  ExtendableBinaryInputArchive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>,trio::BoundedIOStream,unsigned_int,unsigned_int,1>
  *this_00;
  undefined1 *puVar1;
  uint local_res8 [2];
  
  this_00 = *(ExtendableBinaryInputArchive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>,trio::BoundedIOStream,unsigned_int,unsigned_int,1>
              **)param_1;
  local_res8[0] = 0;
  puVar1 = &this_00->stream->field_0x10;
  (**(code **)(*(longlong *)puVar1 + 8))(puVar1,local_res8,4);
  terse::
  ExtendableBinaryInputArchive<terse::BinaryInputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>,trio::BoundedIOStream,unsigned_int,unsigned_int,1>
  ::
  processElements<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>_>
            (this_00,&this->setups,
             (ulonglong)
             (local_res8[0] >> 0x18 | (local_res8[0] & 0xff0000) >> 8 |
              (local_res8[0] & 0xff00) << 8 | local_res8[0] << 0x18));
  return;
}

// save @ 14c580ba0

void __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
::save(TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
       *this,BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1> *param_1)

{
  terse::Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>::
  operator()<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>_&>
            ((Archive<terse::BinaryOutputArchive<trio::BoundedIOStream,unsigned_int,unsigned_int,1>_>
              *)param_1,&this->setups);
  return;
}

// `scalar_deleting_destructor' @ 14c580bc0

void * __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
::_scalar_deleting_destructor_
          (TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
           *this,uint param_1)

{
  longlong *plVar1;
  undefined4 in_register_00000014;
  
  plVar1 = *(longlong **)&(this->instanceFactory).field_0x38;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))
              (plVar1,CONCAT71((int7)(CONCAT44(in_register_00000014,param_1) >> 8),
                               (function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
                                *)plVar1 != &this->instanceFactory));
    *(undefined8 *)&(this->instanceFactory).field_0x38 = 0;
  }
  std::
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
  ::
  ~vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
            (&this->setups);
  JointsEvaluator::~JointsEvaluator((JointsEvaluator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// computeStorageRequirements @ 14c580c40

void __thiscall
rl4::TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::
computeStorageRequirements
          (TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>
           *this,RigMetrics *param_1)

{
  return;
}

// computeStorageRequirements @ 14c580c50

void __thiscall
rl4::TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::
computeStorageRequirements
          (TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>
           *this,JointBehaviorFilter *param_1)

{
  return;
}

// allocateStorage @ 14c580c60

void __thiscall
rl4::TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::
allocateStorage(TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>
                *this,JointBehaviorFilter *param_1)

{
  return;
}

// fillStorage @ 14c580c70

void __thiscall
rl4::TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::
fillStorage(TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>
            *this,JointBehaviorFilter *param_1)

{
  TwistSwingSetup *pTVar1;
  short sVar2;
  short *_Buf2;
  ushort uVar3;
  ushort uVar4;
  RotationUnit RVar5;
  TwistAxis TVar6;
  int iVar7;
  Reader *pRVar8;
  ushort *puVar9;
  ushort *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  ushort *puVar13;
  ushort *puVar14;
  TwistSwingSetup *pTVar15;
  longlong lVar16;
  longlong *plVar17;
  size_t _Size;
  ulonglong uVar18;
  ushort uVar19;
  bool bVar20;
  TwistSwingSetup local_198;
  short *local_c8;
  short *local_c0;
  longlong lStack_b8;
  longlong *local_b0;
  short *local_a8;
  ulonglong local_a0;
  ushort *local_98;
  longlong lStack_90;
  float *local_88;
  longlong lStack_80;
  TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128> *local_78;
  short *local_70;
  longlong lStack_68;
  float *local_60;
  longlong lStack_58;
  ushort *local_50;
  longlong lStack_48;
  undefined4 local_40;
  
  RVar5 = JointBehaviorFilter::getRotationUnit(param_1);
  this->rotationUnit = RVar5;
  pRVar8 = JointBehaviorFilter::getReader(param_1);
  plVar17 = (longlong *)&pRVar8->field_0x40;
  local_b0 = plVar17;
  uVar3 = (**(code **)(*(longlong *)&pRVar8->field_0x40 + 0x28))(plVar17);
  uVar4 = (**(code **)*plVar17)(plVar17);
  if (((this->config).loadTwistSwingBehavior != false) && ((uVar4 != 0 || (uVar3 != 0)))) {
    uVar19 = uVar4;
    if (uVar4 < uVar3) {
      uVar19 = uVar3;
    }
    std::
    vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
    ::reserve(&this->setups,(ulonglong)uVar19);
    local_a0 = 0;
    uVar19 = 0;
    bVar20 = uVar3 != 0;
    while (uVar18 = 0, bVar20) {
      TwistSwingSetup::TwistSwingSetup(&local_198,this->memRes);
      TVar6 = (**(code **)(*plVar17 + 0x30))(plVar17,uVar19);
      (**(code **)(*plVar17 + 0x38))(plVar17,&local_98,uVar19);
      (**(code **)(*plVar17 + 0x40))(plVar17,&local_c0,uVar19);
      (**(code **)(*plVar17 + 0x48))(plVar17,&local_88,uVar19);
      local_198.swingTwistAxis = TVar6;
      std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
      _Assign_counted_range<unsigned_short_const_*>
                (&local_198.swingInputIndices,local_98,lStack_90 * 2 >> 1);
      std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
      _Assign_counted_range<float_const_*>(&local_198.swingBlendWeights,local_88,lStack_80 * 4 >> 2)
      ;
      lVar16 = lStack_b8;
      if ((ulonglong)
          ((longlong)local_198.swingOutputIndices._Mypair._Myval2._Myend -
           (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst >> 1) <
          (ulonglong)(lStack_b8 * 10)) {
        if (0x7fffffffffffffff < (ulonglong)(lStack_b8 * 10)) {
LAB_14c581be8:
                    /* WARNING: Subroutine does not return */
          std::
          vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
          _Xlength();
        }
        lVar12 = (longlong)local_198.swingOutputIndices._Mypair._Myval2._Mylast -
                 (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst;
        puVar9 = (ushort *)
                 (**(code **)(*(longlong *)local_198.swingOutputIndices._Mypair._Myval1 + 8))
                           (local_198.swingOutputIndices._Mypair._Myval1,lStack_b8 * 0x14,8);
        puVar14 = puVar9;
        for (puVar13 = local_198.swingOutputIndices._Mypair._Myval2._Myfirst;
            puVar13 != local_198.swingOutputIndices._Mypair._Myval2._Mylast; puVar13 = puVar13 + 1)
        {
          *puVar14 = *puVar13;
          puVar14 = puVar14 + 1;
        }
        if (local_198.swingOutputIndices._Mypair._Myval2._Myfirst != (ushort *)0x0) {
          (**(code **)(*(longlong *)local_198.swingOutputIndices._Mypair._Myval1 + 0x10))
                    (local_198.swingOutputIndices._Mypair._Myval1,
                     local_198.swingOutputIndices._Mypair._Myval2._Myfirst,
                     ((longlong)local_198.swingOutputIndices._Mypair._Myval2._Myend -
                      (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst >> 1) * 2,8);
        }
        local_198.swingOutputIndices._Mypair._Myval2._Mylast = puVar9 + (lVar12 >> 1);
        local_198.swingOutputIndices._Mypair._Myval2._Myend = puVar9 + lVar16 * 10;
        local_198.swingOutputIndices._Mypair._Myval2._Myfirst = puVar9;
      }
      local_c8 = local_c0;
      local_a8 = local_c0 + lStack_b8;
      if ((this->config).rotationType == EulerAngles) {
        if (local_c0 != local_a8) {
          do {
            puVar14 = local_198.swingOutputIndices._Mypair._Myval2._Mylast;
            sVar2 = *local_c8 * 9;
            if (local_198.swingOutputIndices._Mypair._Myval2._Mylast ==
                local_198.swingOutputIndices._Mypair._Myval2._Myend) {
              lVar16 = (longlong)local_198.swingOutputIndices._Mypair._Myval2._Mylast -
                       (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst >> 1;
              if (lVar16 == 0x7fffffffffffffff) goto LAB_14c581be8;
              uVar18 = lVar16 + 1;
              uVar11 = (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myend -
                       (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst >> 1;
              if (0x7fffffffffffffff - (uVar11 >> 1) < uVar11) {
                uVar11 = 0x7fffffffffffffff;
              }
              else {
                uVar11 = uVar11 + (uVar11 >> 1);
                if (uVar11 < uVar18) {
                  uVar11 = uVar18;
                }
              }
              puVar10 = (ushort *)
                        (**(code **)(*(longlong *)local_198.swingOutputIndices._Mypair._Myval1 + 8))
                                  (local_198.swingOutputIndices._Mypair._Myval1,uVar11 * 2,8);
              puVar10[lVar16] = sVar2 + 3U;
              puVar13 = puVar10;
              puVar9 = local_198.swingOutputIndices._Mypair._Myval2._Myfirst;
              if (puVar14 == local_198.swingOutputIndices._Mypair._Myval2._Mylast) {
                for (; puVar9 != local_198.swingOutputIndices._Mypair._Myval2._Mylast;
                    puVar9 = puVar9 + 1) {
                  *puVar13 = *puVar9;
                  puVar13 = puVar13 + 1;
                }
              }
              else {
                for (; puVar9 != puVar14; puVar9 = puVar9 + 1) {
                  *puVar13 = *puVar9;
                  puVar13 = puVar13 + 1;
                }
                if (puVar14 != local_198.swingOutputIndices._Mypair._Myval2._Mylast) {
                  lVar16 = lVar16 * 2 - (longlong)puVar14;
                  do {
                    *(ushort *)((longlong)puVar14 + (longlong)puVar10 + lVar16 + 2) = *puVar14;
                    puVar14 = puVar14 + 1;
                  } while (puVar14 != local_198.swingOutputIndices._Mypair._Myval2._Mylast);
                }
              }
              if (local_198.swingOutputIndices._Mypair._Myval2._Myfirst != (ushort *)0x0) {
                (**(code **)(*(longlong *)local_198.swingOutputIndices._Mypair._Myval1 + 0x10))
                          (local_198.swingOutputIndices._Mypair._Myval1,
                           local_198.swingOutputIndices._Mypair._Myval2._Myfirst,
                           ((longlong)local_198.swingOutputIndices._Mypair._Myval2._Myend -
                            (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst >> 1) *
                           2,8);
              }
              local_198.swingOutputIndices._Mypair._Myval2._Myend = puVar10 + uVar11;
              puVar14 = puVar10 + uVar18;
              local_198.swingOutputIndices._Mypair._Myval2._Myfirst = puVar10;
            }
            else {
              *local_198.swingOutputIndices._Mypair._Myval2._Mylast = sVar2 + 3U;
              puVar14 = local_198.swingOutputIndices._Mypair._Myval2._Mylast + 1;
            }
            if (puVar14 == local_198.swingOutputIndices._Mypair._Myval2._Myend) {
              lVar16 = (longlong)puVar14 -
                       (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst >> 1;
              local_198.swingOutputIndices._Mypair._Myval2._Mylast = puVar14;
              if (lVar16 == 0x7fffffffffffffff) goto LAB_14c581be8;
              uVar18 = lVar16 + 1;
              uVar11 = (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myend -
                       (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst >> 1;
              if (0x7fffffffffffffff - (uVar11 >> 1) < uVar11) {
                uVar11 = 0x7fffffffffffffff;
              }
              else {
                uVar11 = uVar11 + (uVar11 >> 1);
                if (uVar11 < uVar18) {
                  uVar11 = uVar18;
                }
              }
              puVar10 = (ushort *)
                        (**(code **)(*(longlong *)local_198.swingOutputIndices._Mypair._Myval1 + 8))
                                  (local_198.swingOutputIndices._Mypair._Myval1,uVar11 * 2,8);
              puVar10[lVar16] = sVar2 + 4U;
              puVar13 = puVar10;
              puVar9 = local_198.swingOutputIndices._Mypair._Myval2._Myfirst;
              if (puVar14 == local_198.swingOutputIndices._Mypair._Myval2._Mylast) {
                for (; puVar9 != local_198.swingOutputIndices._Mypair._Myval2._Mylast;
                    puVar9 = puVar9 + 1) {
                  *puVar13 = *puVar9;
                  puVar13 = puVar13 + 1;
                }
              }
              else {
                for (; puVar9 != puVar14; puVar9 = puVar9 + 1) {
                  *puVar13 = *puVar9;
                  puVar13 = puVar13 + 1;
                }
                if (puVar14 != local_198.swingOutputIndices._Mypair._Myval2._Mylast) {
                  lVar16 = lVar16 * 2 - (longlong)puVar14;
                  do {
                    *(ushort *)((longlong)puVar14 + (longlong)puVar10 + lVar16 + 2) = *puVar14;
                    puVar14 = puVar14 + 1;
                  } while (puVar14 != local_198.swingOutputIndices._Mypair._Myval2._Mylast);
                }
              }
              if (local_198.swingOutputIndices._Mypair._Myval2._Myfirst != (ushort *)0x0) {
                (**(code **)(*(longlong *)local_198.swingOutputIndices._Mypair._Myval1 + 0x10))
                          (local_198.swingOutputIndices._Mypair._Myval1,
                           local_198.swingOutputIndices._Mypair._Myval2._Myfirst,
                           ((longlong)local_198.swingOutputIndices._Mypair._Myval2._Myend -
                            (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst >> 1) *
                           2,8);
              }
              local_198.swingOutputIndices._Mypair._Myval2._Myend = puVar10 + uVar11;
              puVar14 = puVar10 + uVar18;
              local_198.swingOutputIndices._Mypair._Myval2._Myfirst = puVar10;
            }
            else {
              *puVar14 = sVar2 + 4U;
              puVar14 = puVar14 + 1;
            }
            if (puVar14 == local_198.swingOutputIndices._Mypair._Myval2._Myend) {
              lVar16 = (longlong)puVar14 -
                       (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst >> 1;
              local_198.swingOutputIndices._Mypair._Myval2._Mylast = puVar14;
              if (lVar16 == 0x7fffffffffffffff) goto LAB_14c581be8;
              uVar18 = lVar16 + 1;
              uVar11 = (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myend -
                       (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst >> 1;
              if (0x7fffffffffffffff - (uVar11 >> 1) < uVar11) {
                uVar11 = 0x7fffffffffffffff;
              }
              else {
                uVar11 = (uVar11 >> 1) + uVar11;
                if (uVar11 < uVar18) {
                  uVar11 = uVar18;
                }
              }
              puVar10 = (ushort *)
                        (**(code **)(*(longlong *)local_198.swingOutputIndices._Mypair._Myval1 + 8))
                                  (local_198.swingOutputIndices._Mypair._Myval1,uVar11 * 2,8);
              puVar10[lVar16] = sVar2 + 5U;
              puVar13 = puVar10;
              puVar9 = local_198.swingOutputIndices._Mypair._Myval2._Myfirst;
              if (puVar14 == local_198.swingOutputIndices._Mypair._Myval2._Mylast) {
                for (; puVar9 != local_198.swingOutputIndices._Mypair._Myval2._Mylast;
                    puVar9 = puVar9 + 1) {
                  *puVar13 = *puVar9;
                  puVar13 = puVar13 + 1;
                }
              }
              else {
                for (; puVar9 != puVar14; puVar9 = puVar9 + 1) {
                  *puVar13 = *puVar9;
                  puVar13 = puVar13 + 1;
                }
                if (puVar14 != local_198.swingOutputIndices._Mypair._Myval2._Mylast) {
                  lVar16 = lVar16 * 2 - (longlong)puVar14;
                  do {
                    *(ushort *)((longlong)puVar10 + lVar16 + 2 + (longlong)puVar14) = *puVar14;
                    puVar14 = puVar14 + 1;
                  } while (puVar14 != local_198.swingOutputIndices._Mypair._Myval2._Mylast);
                }
              }
              if (local_198.swingOutputIndices._Mypair._Myval2._Myfirst != (ushort *)0x0) {
                (**(code **)(*(longlong *)local_198.swingOutputIndices._Mypair._Myval1 + 0x10))
                          (local_198.swingOutputIndices._Mypair._Myval1,
                           local_198.swingOutputIndices._Mypair._Myval2._Myfirst,
                           ((longlong)local_198.swingOutputIndices._Mypair._Myval2._Myend -
                            (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst >> 1) *
                           2,8);
              }
              local_198.swingOutputIndices._Mypair._Myval2._Myend = puVar10 + uVar11;
              puVar14 = puVar10 + uVar18;
              local_198.swingOutputIndices._Mypair._Myval2._Myfirst = puVar10;
            }
            else {
              *puVar14 = sVar2 + 5U;
              puVar14 = puVar14 + 1;
            }
            if (puVar14 == local_198.swingOutputIndices._Mypair._Myval2._Myend) {
              lVar16 = (longlong)puVar14 -
                       (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst >> 1;
              local_198.swingOutputIndices._Mypair._Myval2._Mylast = puVar14;
              if (lVar16 == 0x7fffffffffffffff) goto LAB_14c581be8;
              uVar18 = lVar16 + 1;
              uVar11 = (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myend -
                       (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst >> 1;
              if (0x7fffffffffffffff - (uVar11 >> 1) < uVar11) {
                uVar11 = 0x7fffffffffffffff;
              }
              else {
                uVar11 = (uVar11 >> 1) + uVar11;
                if (uVar11 < uVar18) {
                  uVar11 = uVar18;
                }
              }
              puVar10 = (ushort *)
                        (**(code **)(*(longlong *)local_198.swingOutputIndices._Mypair._Myval1 + 8))
                                  (local_198.swingOutputIndices._Mypair._Myval1,uVar11 * 2,8);
              puVar10[lVar16] = 0;
              puVar13 = puVar10;
              puVar9 = local_198.swingOutputIndices._Mypair._Myval2._Myfirst;
              if (puVar14 == local_198.swingOutputIndices._Mypair._Myval2._Mylast) {
                for (; puVar9 != local_198.swingOutputIndices._Mypair._Myval2._Mylast;
                    puVar9 = puVar9 + 1) {
                  *puVar13 = *puVar9;
                  puVar13 = puVar13 + 1;
                }
              }
              else {
                for (; puVar9 != puVar14; puVar9 = puVar9 + 1) {
                  *puVar13 = *puVar9;
                  puVar13 = puVar13 + 1;
                }
                if (puVar14 != local_198.swingOutputIndices._Mypair._Myval2._Mylast) {
                  puVar13 = puVar14;
                  do {
                    *(ushort *)
                     ((longlong)(puVar10 + lVar16) + (2 - (longlong)puVar14) + (longlong)puVar13) =
                         *puVar13;
                    puVar13 = puVar13 + 1;
                  } while (puVar13 != local_198.swingOutputIndices._Mypair._Myval2._Mylast);
                }
              }
              if (local_198.swingOutputIndices._Mypair._Myval2._Myfirst != (ushort *)0x0) {
                (**(code **)(*(longlong *)local_198.swingOutputIndices._Mypair._Myval1 + 0x10))
                          (local_198.swingOutputIndices._Mypair._Myval1,
                           local_198.swingOutputIndices._Mypair._Myval2._Myfirst,
                           ((longlong)local_198.swingOutputIndices._Mypair._Myval2._Myend -
                            (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst >> 1) *
                           2,8);
              }
              local_198.swingOutputIndices._Mypair._Myval2._Myend = puVar10 + uVar11;
              local_198.swingOutputIndices._Mypair._Myval2._Mylast = puVar10 + uVar18;
              local_198.swingOutputIndices._Mypair._Myval2._Myfirst = puVar10;
            }
            else {
              *puVar14 = 0;
              local_198.swingOutputIndices._Mypair._Myval2._Mylast = puVar14 + 1;
            }
            local_c8 = local_c8 + 1;
          } while (local_c8 != local_a8);
        }
      }
      else if (local_c0 != local_a8) {
        do {
          puVar14 = local_198.swingOutputIndices._Mypair._Myval2._Mylast;
          sVar2 = *local_c8 * 10;
          if (local_198.swingOutputIndices._Mypair._Myval2._Mylast ==
              local_198.swingOutputIndices._Mypair._Myval2._Myend) {
            lVar16 = (longlong)local_198.swingOutputIndices._Mypair._Myval2._Mylast -
                     (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst >> 1;
            if (lVar16 == 0x7fffffffffffffff) goto LAB_14c581be8;
            uVar18 = lVar16 + 1;
            uVar11 = (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myend -
                     (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst >> 1;
            if (0x7fffffffffffffff - (uVar11 >> 1) < uVar11) {
              uVar11 = 0x7fffffffffffffff;
            }
            else {
              uVar11 = (uVar11 >> 1) + uVar11;
              if (uVar11 < uVar18) {
                uVar11 = uVar18;
              }
            }
            puVar10 = (ushort *)
                      (**(code **)(*(longlong *)local_198.swingOutputIndices._Mypair._Myval1 + 8))
                                (local_198.swingOutputIndices._Mypair._Myval1,uVar11 * 2,8);
            puVar10[lVar16] = sVar2 + 3U;
            puVar13 = puVar10;
            puVar9 = local_198.swingOutputIndices._Mypair._Myval2._Myfirst;
            if (puVar14 == local_198.swingOutputIndices._Mypair._Myval2._Mylast) {
              for (; puVar9 != local_198.swingOutputIndices._Mypair._Myval2._Mylast;
                  puVar9 = puVar9 + 1) {
                *puVar13 = *puVar9;
                puVar13 = puVar13 + 1;
              }
            }
            else {
              for (; puVar9 != puVar14; puVar9 = puVar9 + 1) {
                *puVar13 = *puVar9;
                puVar13 = puVar13 + 1;
              }
              if (puVar14 != local_198.swingOutputIndices._Mypair._Myval2._Mylast) {
                lVar16 = lVar16 * 2 - (longlong)puVar14;
                do {
                  *(ushort *)((longlong)puVar10 + lVar16 + 2 + (longlong)puVar14) = *puVar14;
                  puVar14 = puVar14 + 1;
                } while (puVar14 != local_198.swingOutputIndices._Mypair._Myval2._Mylast);
              }
            }
            if (local_198.swingOutputIndices._Mypair._Myval2._Myfirst != (ushort *)0x0) {
              (**(code **)(*(longlong *)local_198.swingOutputIndices._Mypair._Myval1 + 0x10))
                        (local_198.swingOutputIndices._Mypair._Myval1,
                         local_198.swingOutputIndices._Mypair._Myval2._Myfirst,
                         ((longlong)local_198.swingOutputIndices._Mypair._Myval2._Myend -
                          (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst >> 1) * 2,
                         8);
            }
            local_198.swingOutputIndices._Mypair._Myval2._Myend = puVar10 + uVar11;
            puVar14 = puVar10 + uVar18;
            local_198.swingOutputIndices._Mypair._Myval2._Myfirst = puVar10;
          }
          else {
            *local_198.swingOutputIndices._Mypair._Myval2._Mylast = sVar2 + 3U;
            puVar14 = local_198.swingOutputIndices._Mypair._Myval2._Mylast + 1;
          }
          if (puVar14 == local_198.swingOutputIndices._Mypair._Myval2._Myend) {
            lVar16 = (longlong)puVar14 -
                     (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst >> 1;
            local_198.swingOutputIndices._Mypair._Myval2._Mylast = puVar14;
            if (lVar16 == 0x7fffffffffffffff) goto LAB_14c581be8;
            uVar18 = lVar16 + 1;
            uVar11 = (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myend -
                     (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst >> 1;
            if (0x7fffffffffffffff - (uVar11 >> 1) < uVar11) {
              uVar11 = 0x7fffffffffffffff;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
              if (uVar11 < uVar18) {
                uVar11 = uVar18;
              }
            }
            puVar10 = (ushort *)
                      (**(code **)(*(longlong *)local_198.swingOutputIndices._Mypair._Myval1 + 8))
                                (local_198.swingOutputIndices._Mypair._Myval1,uVar11 * 2,8);
            puVar10[lVar16] = sVar2 + 4U;
            puVar13 = puVar10;
            puVar9 = local_198.swingOutputIndices._Mypair._Myval2._Myfirst;
            if (puVar14 == local_198.swingOutputIndices._Mypair._Myval2._Mylast) {
              for (; puVar9 != local_198.swingOutputIndices._Mypair._Myval2._Mylast;
                  puVar9 = puVar9 + 1) {
                *puVar13 = *puVar9;
                puVar13 = puVar13 + 1;
              }
            }
            else {
              for (; puVar9 != puVar14; puVar9 = puVar9 + 1) {
                *puVar13 = *puVar9;
                puVar13 = puVar13 + 1;
              }
              if (puVar14 != local_198.swingOutputIndices._Mypair._Myval2._Mylast) {
                lVar16 = lVar16 * 2 - (longlong)puVar14;
                do {
                  *(ushort *)((longlong)puVar14 + (longlong)puVar10 + lVar16 + 2) = *puVar14;
                  puVar14 = puVar14 + 1;
                } while (puVar14 != local_198.swingOutputIndices._Mypair._Myval2._Mylast);
              }
            }
            if (local_198.swingOutputIndices._Mypair._Myval2._Myfirst != (ushort *)0x0) {
              (**(code **)(*(longlong *)local_198.swingOutputIndices._Mypair._Myval1 + 0x10))
                        (local_198.swingOutputIndices._Mypair._Myval1,
                         local_198.swingOutputIndices._Mypair._Myval2._Myfirst,
                         ((longlong)local_198.swingOutputIndices._Mypair._Myval2._Myend -
                          (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst >> 1) * 2,
                         8);
            }
            local_198.swingOutputIndices._Mypair._Myval2._Myend = puVar10 + uVar11;
            puVar14 = puVar10 + uVar18;
            local_198.swingOutputIndices._Mypair._Myval2._Myfirst = puVar10;
          }
          else {
            *puVar14 = sVar2 + 4U;
            puVar14 = puVar14 + 1;
          }
          if (puVar14 == local_198.swingOutputIndices._Mypair._Myval2._Myend) {
            lVar16 = (longlong)puVar14 -
                     (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst >> 1;
            local_198.swingOutputIndices._Mypair._Myval2._Mylast = puVar14;
            if (lVar16 == 0x7fffffffffffffff) goto LAB_14c581be8;
            uVar18 = lVar16 + 1;
            uVar11 = (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myend -
                     (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst >> 1;
            if (0x7fffffffffffffff - (uVar11 >> 1) < uVar11) {
              uVar11 = 0x7fffffffffffffff;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
              if (uVar11 < uVar18) {
                uVar11 = uVar18;
              }
            }
            puVar10 = (ushort *)
                      (**(code **)(*(longlong *)local_198.swingOutputIndices._Mypair._Myval1 + 8))
                                (local_198.swingOutputIndices._Mypair._Myval1,uVar11 * 2,8);
            puVar10[lVar16] = sVar2 + 5U;
            puVar13 = puVar10;
            puVar9 = local_198.swingOutputIndices._Mypair._Myval2._Myfirst;
            if (puVar14 == local_198.swingOutputIndices._Mypair._Myval2._Mylast) {
              for (; puVar9 != local_198.swingOutputIndices._Mypair._Myval2._Mylast;
                  puVar9 = puVar9 + 1) {
                *puVar13 = *puVar9;
                puVar13 = puVar13 + 1;
              }
            }
            else {
              for (; puVar9 != puVar14; puVar9 = puVar9 + 1) {
                *puVar13 = *puVar9;
                puVar13 = puVar13 + 1;
              }
              if (puVar14 != local_198.swingOutputIndices._Mypair._Myval2._Mylast) {
                lVar16 = lVar16 * 2 - (longlong)puVar14;
                do {
                  *(ushort *)((longlong)puVar14 + (longlong)puVar10 + lVar16 + 2) = *puVar14;
                  puVar14 = puVar14 + 1;
                } while (puVar14 != local_198.swingOutputIndices._Mypair._Myval2._Mylast);
              }
            }
            if (local_198.swingOutputIndices._Mypair._Myval2._Myfirst != (ushort *)0x0) {
              (**(code **)(*(longlong *)local_198.swingOutputIndices._Mypair._Myval1 + 0x10))
                        (local_198.swingOutputIndices._Mypair._Myval1,
                         local_198.swingOutputIndices._Mypair._Myval2._Myfirst,
                         ((longlong)local_198.swingOutputIndices._Mypair._Myval2._Myend -
                          (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst >> 1) * 2,
                         8);
            }
            local_198.swingOutputIndices._Mypair._Myval2._Myend = puVar10 + uVar11;
            puVar14 = puVar10 + uVar18;
            local_198.swingOutputIndices._Mypair._Myval2._Myfirst = puVar10;
          }
          else {
            *puVar14 = sVar2 + 5U;
            puVar14 = puVar14 + 1;
          }
          if (puVar14 == local_198.swingOutputIndices._Mypair._Myval2._Myend) {
            lVar16 = (longlong)puVar14 -
                     (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst >> 1;
            local_198.swingOutputIndices._Mypair._Myval2._Mylast = puVar14;
            if (lVar16 == 0x7fffffffffffffff) goto LAB_14c581be8;
            uVar18 = lVar16 + 1;
            uVar11 = (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myend -
                     (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst >> 1;
            if (0x7fffffffffffffff - (uVar11 >> 1) < uVar11) {
              uVar11 = 0x7fffffffffffffff;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
              if (uVar11 < uVar18) {
                uVar11 = uVar18;
              }
            }
            puVar10 = (ushort *)
                      (**(code **)(*(longlong *)local_198.swingOutputIndices._Mypair._Myval1 + 8))
                                (local_198.swingOutputIndices._Mypair._Myval1,uVar11 * 2,8);
            puVar10[lVar16] = sVar2 + 6U;
            puVar13 = puVar10;
            puVar9 = local_198.swingOutputIndices._Mypair._Myval2._Myfirst;
            if (puVar14 == local_198.swingOutputIndices._Mypair._Myval2._Mylast) {
              for (; puVar9 != local_198.swingOutputIndices._Mypair._Myval2._Mylast;
                  puVar9 = puVar9 + 1) {
                *puVar13 = *puVar9;
                puVar13 = puVar13 + 1;
              }
            }
            else {
              for (; puVar9 != puVar14; puVar9 = puVar9 + 1) {
                *puVar13 = *puVar9;
                puVar13 = puVar13 + 1;
              }
              if (puVar14 != local_198.swingOutputIndices._Mypair._Myval2._Mylast) {
                lVar16 = lVar16 * 2 - (longlong)puVar14;
                do {
                  *(ushort *)((longlong)puVar14 + (longlong)puVar10 + lVar16 + 2) = *puVar14;
                  puVar14 = puVar14 + 1;
                } while (puVar14 != local_198.swingOutputIndices._Mypair._Myval2._Mylast);
              }
            }
            if (local_198.swingOutputIndices._Mypair._Myval2._Myfirst != (ushort *)0x0) {
              (**(code **)(*(longlong *)local_198.swingOutputIndices._Mypair._Myval1 + 0x10))
                        (local_198.swingOutputIndices._Mypair._Myval1,
                         local_198.swingOutputIndices._Mypair._Myval2._Myfirst,
                         ((longlong)local_198.swingOutputIndices._Mypair._Myval2._Myend -
                          (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst >> 1) * 2,
                         8);
            }
            local_198.swingOutputIndices._Mypair._Myval2._Myend = puVar10 + uVar11;
            local_198.swingOutputIndices._Mypair._Myval2._Mylast = puVar10 + uVar18;
            local_198.swingOutputIndices._Mypair._Myval2._Myfirst = puVar10;
          }
          else {
            *puVar14 = sVar2 + 6U;
            local_198.swingOutputIndices._Mypair._Myval2._Mylast = puVar14 + 1;
          }
          local_c8 = local_c8 + 1;
        } while (local_c8 != local_a8);
      }
      std::
      vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
      ::_Emplace_one_at_back<rl4::TwistSwingSetup>(&this->setups,&local_198);
      if (local_198.swingInputIndices._Mypair._Myval2._Myfirst != (ushort *)0x0) {
        (**(code **)(*(longlong *)local_198.swingInputIndices._Mypair._Myval1 + 0x10))
                  (local_198.swingInputIndices._Mypair._Myval1,
                   local_198.swingInputIndices._Mypair._Myval2._Myfirst,
                   ((longlong)local_198.swingInputIndices._Mypair._Myval2._Myend -
                    (longlong)local_198.swingInputIndices._Mypair._Myval2._Myfirst >> 1) * 2,8);
        local_198.swingInputIndices._Mypair._Myval2._Myfirst = (ushort *)0x0;
        local_198.swingInputIndices._Mypair._Myval2._Mylast = (ushort *)0x0;
        local_198.swingInputIndices._Mypair._Myval2._Myend = (ushort *)0x0;
      }
      if (local_198.swingOutputIndices._Mypair._Myval2._Myfirst != (ushort *)0x0) {
        (**(code **)(*(longlong *)local_198.swingOutputIndices._Mypair._Myval1 + 0x10))
                  (local_198.swingOutputIndices._Mypair._Myval1,
                   local_198.swingOutputIndices._Mypair._Myval2._Myfirst,
                   ((longlong)local_198.swingOutputIndices._Mypair._Myval2._Myend -
                    (longlong)local_198.swingOutputIndices._Mypair._Myval2._Myfirst >> 1) * 2,8);
        local_198.swingOutputIndices._Mypair._Myval2._Myfirst = (ushort *)0x0;
        local_198.swingOutputIndices._Mypair._Myval2._Mylast = (ushort *)0x0;
        local_198.swingOutputIndices._Mypair._Myval2._Myend = (ushort *)0x0;
      }
      if (local_198.swingBlendWeights._Mypair._Myval2._Myfirst != (float *)0x0) {
        (**(code **)(*(longlong *)local_198.swingBlendWeights._Mypair._Myval1 + 0x10))
                  (local_198.swingBlendWeights._Mypair._Myval1,
                   local_198.swingBlendWeights._Mypair._Myval2._Myfirst,
                   (longlong)local_198.swingBlendWeights._Mypair._Myval2._Myend -
                   (longlong)local_198.swingBlendWeights._Mypair._Myval2._Myfirst &
                   0xfffffffffffffffc,8);
        local_198.swingBlendWeights._Mypair._Myval2._Myfirst = (float *)0x0;
        local_198.swingBlendWeights._Mypair._Myval2._Mylast = (float *)0x0;
        local_198.swingBlendWeights._Mypair._Myval2._Myend = (float *)0x0;
      }
      if (local_198.twistInputIndices._Mypair._Myval2._Myfirst != (ushort *)0x0) {
        (**(code **)(*(longlong *)local_198.twistInputIndices._Mypair._Myval1 + 0x10))
                  (local_198.twistInputIndices._Mypair._Myval1,
                   local_198.twistInputIndices._Mypair._Myval2._Myfirst,
                   ((longlong)local_198.twistInputIndices._Mypair._Myval2._Myend -
                    (longlong)local_198.twistInputIndices._Mypair._Myval2._Myfirst >> 1) * 2,8);
        local_198.twistInputIndices._Mypair._Myval2._Myend = (ushort *)0x0;
        local_198.twistInputIndices._Mypair._Myval2._Myfirst = (ushort *)0x0;
        local_198.twistInputIndices._Mypair._Myval2._Mylast = (ushort *)0x0;
      }
      if (local_198.twistOutputIndices._Mypair._Myval2._Myfirst != (ushort *)0x0) {
        (**(code **)(*(longlong *)local_198.twistOutputIndices._Mypair._Myval1 + 0x10))
                  (local_198.twistOutputIndices._Mypair._Myval1,
                   local_198.twistOutputIndices._Mypair._Myval2._Myfirst,
                   ((longlong)local_198.twistOutputIndices._Mypair._Myval2._Myend -
                    (longlong)local_198.twistOutputIndices._Mypair._Myval2._Myfirst >> 1) * 2,8);
        local_198.twistOutputIndices._Mypair._Myval2._Myend = (ushort *)0x0;
        local_198.twistOutputIndices._Mypair._Myval2._Myfirst = (ushort *)0x0;
        local_198.twistOutputIndices._Mypair._Myval2._Mylast = (ushort *)0x0;
      }
      if (local_198.twistBlendWeights._Mypair._Myval2._Myfirst != (float *)0x0) {
        (**(code **)(*(longlong *)local_198.twistBlendWeights._Mypair._Myval1 + 0x10))
                  (local_198.twistBlendWeights._Mypair._Myval1,
                   local_198.twistBlendWeights._Mypair._Myval2._Myfirst,
                   (longlong)local_198.twistBlendWeights._Mypair._Myval2._Myend -
                   (longlong)local_198.twistBlendWeights._Mypair._Myval2._Myfirst &
                   0xfffffffffffffffc,8);
      }
      uVar19 = uVar19 + 1;
      bVar20 = uVar19 < uVar3;
      plVar17 = local_b0;
    }
    if (uVar4 != 0) {
      do {
        (**(code **)(*plVar17 + 0x10))(plVar17,&local_c0,uVar18 & 0xffff);
        (**(code **)(*plVar17 + 0x18))(plVar17,&local_88,uVar18 & 0xffff);
        (**(code **)(*plVar17 + 0x20))(plVar17,&local_98,uVar18 & 0xffff);
        local_40 = (**(code **)(*plVar17 + 8))(plVar17,uVar18 & 0xffff);
        lVar16 = lStack_b8;
        _Buf2 = local_c0;
        pTVar15 = (this->setups)._Mypair._Myval2._Myfirst;
        pTVar1 = (this->setups)._Mypair._Myval2._Mylast;
        local_70 = local_c0;
        lStack_68 = lStack_b8;
        local_60 = local_88;
        lStack_58 = lStack_80;
        local_50 = local_98;
        lStack_48 = lStack_90;
        local_78 = this;
        if (pTVar15 == pTVar1) {
LAB_14c581b6d:
          TwistSwingSetup::TwistSwingSetup(&local_198,this->memRes);
          `rl4::
          TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::
          fillStorage'::__l22::<lambda_1>::operator()(&local_78,&local_198);
          std::
          vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
          ::_Emplace_one_at_back<rl4::TwistSwingSetup>(&this->setups,&local_198);
          TwistSwingSetup::~TwistSwingSetup(&local_198);
        }
        else {
          do {
            puVar14 = (pTVar15->swingInputIndices)._Mypair._Myval2._Myfirst;
            _Size = (longlong)(pTVar15->swingInputIndices)._Mypair._Myval2._Mylast -
                    (longlong)puVar14;
            lVar12 = (longlong)_Size >> 1;
            if (((lVar12 == lVar16) && (lVar12 == lVar16 * 2 >> 1)) &&
               (iVar7 = memcmp(puVar14,_Buf2,_Size), iVar7 == 0)) break;
            pTVar15 = pTVar15 + 1;
          } while (pTVar15 != pTVar1);
          uVar18 = local_a0;
          plVar17 = local_b0;
          if (pTVar15 == pTVar1) goto LAB_14c581b6d;
          `rl4::
          TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::
          fillStorage'::__l22::<lambda_1>::operator()(&local_78,pTVar15);
        }
        uVar3 = (short)uVar18 + 1;
        uVar18 = CONCAT62((int6)(uVar18 >> 0x10),uVar3);
        local_a0 = uVar18;
      } while (uVar3 < uVar4);
    }
  }
  return;
}

// registerControls @ 14c581c00

void __thiscall
rl4::TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::
registerControls(TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>
                 *this,Controls *param_1)

{
  return;
}

// build @ 14c581c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_> * __thiscall
rl4::TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::build
          (TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>
           *this,unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>
                 *__return_storage_ptr__)

{
  int iVar1;
  MemoryResource *pMVar2;
  JointsEvaluator JVar3;
  JointsEvaluator JVar4;
  JointsEvaluator JVar5;
  JointsEvaluator *pJVar6;
  _Func_base<void,rl4::JointsEvaluator_*> *p_Var7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  MemoryResource *pMVar10;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [56];
  longlong *local_180;
  undefined1 local_178 [56];
  longlong *local_140;
  undefined1 local_138 [56];
  longlong *local_100;
  undefined **local_f8;
  MemoryResource *local_f0;
  undefined ***local_c0;
  undefined **local_b8;
  MemoryResource *local_b0;
  undefined ***local_80;
  undefined **local_78;
  MemoryResource *local_70;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  if ((this->config).rotationType == Quaternions) {
    pMVar2 = this->memRes;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      atexit(`pma::impl::
             PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    pMVar10 = (MemoryResource *)
              &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
    if (pMVar2 != (MemoryResource *)0x0) {
      pMVar10 = pMVar2;
    }
    pJVar6 = (JointsEvaluator *)(**(code **)((longlong)*pMVar10 + 8))(pMVar10,0x68,8);
    local_180 = (longlong *)0x0;
    *pJVar6 = (JointsEvaluator)
              &
              ___7__TwistSwingJointsEvaluator_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_UPassthroughAdapter_rl4___rl4__6B_
    ;
    JVar3 = (JointsEvaluator)(this->setups)._Mypair._Myval2._Mylast;
    JVar4 = (JointsEvaluator)(this->setups)._Mypair._Myval2._Myfirst;
    JVar5 = (JointsEvaluator)(this->setups)._Mypair._Myval2._Myend;
    (this->setups)._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
    (this->setups)._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
    (this->setups)._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
    *(PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> *)(pJVar6 + 1) =
         (this->setups)._Mypair._Myval1;
    pJVar6[2] = JVar4;
    pJVar6[3] = JVar3;
    pJVar6[4] = JVar5;
    std::
    function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
    ::
    function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
              ((function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
                *)(pJVar6 + 5),
               (function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
                *)local_1b8);
    if (local_180 != (longlong *)0x0) {
      (**(code **)(*local_180 + 0x20))(local_180,local_180 != (longlong *)local_1b8);
    }
    local_f8 = &
               ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TAEAPEAVMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_UPassthroughAdapter_rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__TAEAPEAVMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
    ;
    local_c0 = &local_f8;
    *(undefined8 *)&(__return_storage_ptr__->_Mypair)._Myval1.field_0x38 = 0;
    local_f0 = pMVar10;
    p_Var7 = std::
             _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
             ::_Move(&local_f8,__return_storage_ptr__);
    *(_Func_base<void,rl4::JointsEvaluator_*> **)
     &(__return_storage_ptr__->_Mypair)._Myval1.field_0x38 = p_Var7;
    if (local_c0 == (undefined ***)0x0) goto LAB_14c581d6f;
    pppuVar8 = &local_f8;
    pppuVar9 = local_c0;
  }
  else {
    if ((this->config).rotationOrder != XYZ) {
      *(undefined8 *)&(__return_storage_ptr__->_Mypair)._Myval1.field_0x38 = 0;
      (__return_storage_ptr__->_Mypair)._Myval2 = (JointsEvaluator *)0x0;
      return __return_storage_ptr__;
    }
    pMVar2 = this->memRes;
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if (this->rotationUnit == degrees) {
      if ((iVar1 < `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        atexit(`pma::impl::
               PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>
               ::
               PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>'
               ::__l2::_dynamic_atexit_destructor_for__dmr__);
        _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      pMVar10 = (MemoryResource *)
                &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
      if (pMVar2 != (MemoryResource *)0x0) {
        pMVar10 = pMVar2;
      }
      pJVar6 = (JointsEvaluator *)(**(code **)((longlong)*pMVar10 + 8))(pMVar10,0x68,8);
      local_140 = (longlong *)0x0;
      *pJVar6 = (JointsEvaluator)
                &
                ___7__TwistSwingJointsEvaluator_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUdegrees_impl_tdm___tdm___0A__rl4___rl4__6B_
      ;
      JVar3 = (JointsEvaluator)(this->setups)._Mypair._Myval2._Mylast;
      JVar4 = (JointsEvaluator)(this->setups)._Mypair._Myval2._Myfirst;
      JVar5 = (JointsEvaluator)(this->setups)._Mypair._Myval2._Myend;
      (this->setups)._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
      (this->setups)._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
      (this->setups)._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
      *(PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> *)(pJVar6 + 1) =
           (this->setups)._Mypair._Myval1;
      pJVar6[2] = JVar4;
      pJVar6[3] = JVar3;
      pJVar6[4] = JVar5;
      std::
      function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
      ::
      function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
                ((function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
                  *)(pJVar6 + 5),
                 (function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
                  *)local_178);
      if (local_140 != (longlong *)0x0) {
        (**(code **)(*local_140 + 0x20))(local_140,local_140 != (longlong *)local_178);
      }
      local_b8 = &
                 ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TAEAPEAVMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUdegrees_impl_tdm___tdm___0A__rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__TAEAPEAVMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
      ;
      local_80 = &local_b8;
      *(undefined8 *)&(__return_storage_ptr__->_Mypair)._Myval1.field_0x38 = 0;
      local_b0 = pMVar10;
      p_Var7 = std::
               _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
               ::_Move(&local_b8,__return_storage_ptr__);
      *(_Func_base<void,rl4::JointsEvaluator_*> **)
       &(__return_storage_ptr__->_Mypair)._Myval1.field_0x38 = p_Var7;
      if (local_80 == (undefined ***)0x0) goto LAB_14c581d6f;
      pppuVar8 = &local_b8;
      pppuVar9 = local_80;
    }
    else {
      if ((iVar1 < `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                   ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        atexit(`pma::impl::
               PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>
               ::
               PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>'
               ::__l2::_dynamic_atexit_destructor_for__dmr__);
        _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      pMVar10 = (MemoryResource *)
                &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                 ::__l2::dmr;
      if (pMVar2 != (MemoryResource *)0x0) {
        pMVar10 = pMVar2;
      }
      pJVar6 = (JointsEvaluator *)(**(code **)((longlong)*pMVar10 + 8))(pMVar10,0x68,8);
      local_100 = (longlong *)0x0;
      *pJVar6 = (JointsEvaluator)
                &
                ___7__TwistSwingJointsEvaluator_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__6B_
      ;
      JVar3 = (JointsEvaluator)(this->setups)._Mypair._Myval2._Mylast;
      JVar4 = (JointsEvaluator)(this->setups)._Mypair._Myval2._Myfirst;
      JVar5 = (JointsEvaluator)(this->setups)._Mypair._Myval2._Myend;
      (this->setups)._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
      (this->setups)._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
      (this->setups)._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
      *(PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> *)(pJVar6 + 1) =
           (this->setups)._Mypair._Myval1;
      pJVar6[2] = JVar4;
      pJVar6[3] = JVar3;
      pJVar6[4] = JVar5;
      std::
      function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
      ::
      function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
                ((function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
                  *)(pJVar6 + 5),
                 (function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
                  *)local_138);
      if (local_100 != (longlong *)0x0) {
        (**(code **)(*local_100 + 0x20))(local_100,local_100 != (longlong *)local_138);
      }
      local_78 = &
                 ___7___Func_impl_no_alloc_V<lambda_1>__1____create_V__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___std____TAEAPEAVMemoryResource_pma_____ManagedInstance_V__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std__V__TwistSwingJointsEvaluator_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___rl4__VJointsEvaluator_4__impl_pma__QEAA_AV__unique_ptr_VJointsEvaluator_rl4__V__function___A6AXPEAVJointsEvaluator_rl4___Z_std___std____QEAV__vector_UTwistSwingSetup_rl4__V__PolyAllocator_UTwistSwingSetup_rl4___07VDefaultMemoryResource_pma___pma___6___QEA__TAEAPEAVMemoryResource_4__Z_XPEAVJointsEvaluator_rl4___std__6B_
      ;
      local_40 = &local_78;
      *(undefined8 *)&(__return_storage_ptr__->_Mypair)._Myval1.field_0x38 = 0;
      local_70 = pMVar10;
      p_Var7 = std::
               _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>,void,rl4::JointsEvaluator_*>
               ::_Move(&local_78,__return_storage_ptr__);
      *(_Func_base<void,rl4::JointsEvaluator_*> **)
       &(__return_storage_ptr__->_Mypair)._Myval1.field_0x38 = p_Var7;
      if (local_40 == (undefined ***)0x0) goto LAB_14c581d6f;
      pppuVar8 = &local_78;
      pppuVar9 = local_40;
    }
  }
  (*(code *)(*pppuVar9)[4])(pppuVar9,pppuVar9 != pppuVar8);
LAB_14c581d6f:
  (__return_storage_ptr__->_Mypair)._Myval2 = pJVar6;
  return __return_storage_ptr__;
}

// `scalar_deleting_destructor' @ 14c581ff0

void * __thiscall
rl4::TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::
_scalar_deleting_destructor_
          (TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>
           *this,uint param_1)

{
  std::
  vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
  ::
  ~vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
            (&this->setups);
  JointsBuilder::~JointsBuilder((JointsBuilder *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// _Assign_counted_range<float_const_*> @ 14c582040

void __thiscall
std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
_Assign_counted_range<float_const_*>
          (vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_> *this,
          float *param_1,ulong64 param_2)

{
  float fVar1;
  PolyAllocator<float,8,pma::DefaultMemoryResource> PVar2;
  longlong lVar3;
  float *pfVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  pfVar4 = (this->_Mypair)._Myval2._Myfirst;
  uVar7 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pfVar4 >> 2;
  if (uVar7 < param_2) {
    if (0x3fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    uVar5 = 0x3fffffffffffffff;
    if ((uVar7 <= 0x3fffffffffffffff - (uVar7 >> 1)) &&
       (uVar5 = uVar7 + (uVar7 >> 1), uVar5 < param_2)) {
      uVar5 = param_2;
    }
    if (pfVar4 != (float *)0x0) {
      PVar2 = (this->_Mypair)._Myval1;
      (**(code **)(*(longlong *)PVar2 + 0x10))(PVar2,pfVar4,uVar7 * 4,8);
      (this->_Mypair)._Myval2._Myfirst = (float *)0x0;
      (this->_Mypair)._Myval2._Mylast = (float *)0x0;
      (this->_Mypair)._Myval2._Myend = (float *)0x0;
    }
    PVar2 = (this->_Mypair)._Myval1;
    pfVar4 = (float *)(**(code **)(*(longlong *)PVar2 + 8))(PVar2,uVar5 * 4,8);
    (this->_Mypair)._Myval2._Myfirst = pfVar4;
    (this->_Mypair)._Myval2._Mylast = pfVar4;
    (this->_Mypair)._Myval2._Myend = pfVar4 + uVar5;
    pfVar4 = (this->_Mypair)._Myval2._Myfirst;
    for (; param_2 != 0; param_2 = param_2 - 1) {
      fVar1 = *param_1;
      param_1 = param_1 + 1;
      *pfVar4 = fVar1;
      pfVar4 = pfVar4 + 1;
    }
    (this->_Mypair)._Myval2._Mylast = pfVar4;
  }
  else {
    uVar7 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pfVar4 >> 2;
    if (uVar7 < param_2) {
      memmove(pfVar4,param_1,uVar7 * 4);
      pfVar4 = (this->_Mypair)._Myval2._Mylast;
      lVar6 = param_2 - uVar7;
      if (lVar6 != 0) {
        lVar3 = uVar7 * 4 - (longlong)pfVar4;
        do {
          *pfVar4 = *(float *)((longlong)param_1 + lVar3 + (longlong)pfVar4);
          pfVar4 = pfVar4 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      (this->_Mypair)._Myval2._Mylast = pfVar4;
    }
    else {
      memmove(pfVar4,param_1,param_2 * 4);
      (this->_Mypair)._Myval2._Mylast = pfVar4 + param_2;
    }
  }
  return;
}

// _Test_callable<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>_> @ 14c5821c0

bool __cdecl
std::
_Test_callable<_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  return true;
}

// _Test_callable<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>_> @ 14c5821d0

bool __cdecl
std::
_Test_callable<_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  return true;
}

// _Test_callable<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>_> @ 14c5821e0

bool __cdecl
std::
_Test_callable<_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  return true;
}

// _Test_callable<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>_> @ 14c5821f0

bool __cdecl
std::
_Test_callable<_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  return true;
}

// _Test_callable<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>'::__l2::<lambda_1>_> @ 14c582200

bool __cdecl
std::
_Test_callable<_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_>,rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,rl4::JointsEvaluator>::create<std::vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>,std::nullptr_t,pma::MemoryResource_*_&>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  return true;
}

// buildStorage<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_> @ 14c582210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`anonymous_namespace'::
TwistSwingJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::
buildStorage<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
          (void *this)

{
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> PVar1;
  TwistSwingSetup *this_00;
  TwistSwingSetup *pTVar2;
  undefined1 auStack_108 [32];
  TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  local_e8;
  TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
  *local_98;
  JointBehaviorFilter local_90;
  undefined1 local_68 [56];
  longlong *local_30;
  TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
  *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e8._padding_ =
       (longlong)
       &
       ___7__TwistSwingJointsBuilder_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3__rl4__6B_
  ;
  PVar1 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)((longlong)this + 0x10);
  local_e8.config._11_1_ = local_90.filters._Mypair._Myval1._3_1_;
  local_e8.config.calculationType = SSE;
  local_e8.config.loadJoints = true;
  local_e8.config.loadBlendShapes = true;
  local_e8.config.loadAnimatedMaps = true;
  local_e8.config.loadMachineLearnedBehavior = true;
  local_e8.config.loadRBFBehavior = true;
  local_e8.config.loadTwistSwingBehavior = true;
  local_e8.config.translationType = Vector;
  local_e8.config.rotationType = EulerAngles;
  local_e8.config.rotationOrder = XYZ;
  local_e8.config.scaleType = Vector;
  local_e8.config.translationPruningThreshold = 0.0;
  local_e8.config.rotationPruningThreshold = 0.0;
  local_e8.config.scalePruningThreshold = 0.0;
  local_e8.memRes = (MemoryResource *)PVar1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_e8.setups._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
  local_e8.setups._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
  local_e8.setups._Mypair._Myval1 =
       (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  if (PVar1 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    local_e8.setups._Mypair._Myval1 = PVar1;
  }
  local_e8.setups._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
  local_e8.rotationUnit = degrees;
  rl4::JointBehaviorFilter::JointBehaviorFilter
            (&local_90,(Reader *)((longlong)this + 0x18),(MemoryResource *)PVar1);
  rl4::
  TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  ::fillStorage(&local_e8,&local_90);
  rl4::
  TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  ::build(&local_e8,
          (unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_> *)
          local_68);
  rl4::
  TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
  ::Accessor::assertRawDataEqual(local_28);
  if (local_28 !=
      (TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
       *)0x0) {
    local_98 = local_28;
    if (local_30 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*local_30 + 0x10))(local_30,&local_98);
  }
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x20))(local_30,local_30 != (longlong *)local_68);
    local_30 = (longlong *)0x0;
  }
  if (local_90.filters._Mypair._Myval2._Myfirst != (FilterType *)0x0) {
    (**(code **)(*(longlong *)
                  CONCAT44(local_90.filters._Mypair._Myval1._4_4_,
                           local_90.filters._Mypair._Myval1._0_4_) + 0x10))
              ((longlong *)
               CONCAT44(local_90.filters._Mypair._Myval1._4_4_,
                        local_90.filters._Mypair._Myval1._0_4_),
               local_90.filters._Mypair._Myval2._Myfirst,
               ((longlong)local_90.filters._Mypair._Myval2._Myend -
                (longlong)local_90.filters._Mypair._Myval2._Myfirst >> 1) * 2,8);
    local_90.filters._Mypair._Myval2._Myend = (FilterType *)0x0;
    local_90.filters._Mypair._Myval2._Myfirst = (FilterType *)0x0;
    local_90.filters._Mypair._Myval2._Mylast = (FilterType *)0x0;
  }
  pTVar2 = local_e8.setups._Mypair._Myval2._Mylast;
  this_00 = local_e8.setups._Mypair._Myval2._Myfirst;
  if (local_e8.setups._Mypair._Myval2._Myfirst != (TwistSwingSetup *)0x0) {
    for (; this_00 != pTVar2; this_00 = this_00 + 1) {
      rl4::TwistSwingSetup::~TwistSwingSetup(this_00);
    }
    (**(code **)((longlong)*(MemoryResource *)local_e8.setups._Mypair._Myval1 + 0x10))
              (local_e8.setups._Mypair._Myval1,local_e8.setups._Mypair._Myval2._Myfirst,
               (((longlong)local_e8.setups._Mypair._Myval2._Myend -
                (longlong)local_e8.setups._Mypair._Myval2._Myfirst) / 0xd0) * 0xd0,8);
    local_e8.setups._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
    local_e8.setups._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
    local_e8.setups._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
  }
  rl4::JointsBuilder::~JointsBuilder((JointsBuilder *)&local_e8);
  return;
}

// buildStorage<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_> @ 14c582460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`anonymous_namespace'::
TwistSwingJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
::
buildStorage<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
          (void *this)

{
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> PVar1;
  TwistSwingSetup *this_00;
  TwistSwingSetup *pTVar2;
  undefined1 auStack_108 [32];
  TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  local_e8;
  TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>
  *local_98;
  JointBehaviorFilter local_90;
  undefined1 local_68 [56];
  longlong *local_30;
  TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>
  *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e8._padding_ =
       (longlong)
       &
       ___7__TwistSwingJointsBuilder_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3__rl4__6B_
  ;
  PVar1 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)((longlong)this + 0x10);
  local_e8.config._11_1_ = local_90.filters._Mypair._Myval1._3_1_;
  local_e8.config.calculationType = SSE;
  local_e8.config.loadJoints = true;
  local_e8.config.loadBlendShapes = true;
  local_e8.config.loadAnimatedMaps = true;
  local_e8.config.loadMachineLearnedBehavior = true;
  local_e8.config.loadRBFBehavior = true;
  local_e8.config.loadTwistSwingBehavior = true;
  local_e8.config.translationType = Vector;
  local_e8.config.rotationType = Quaternions;
  local_e8.config.rotationOrder = XYZ;
  local_e8.config.scaleType = Vector;
  local_e8.config.translationPruningThreshold = 0.0;
  local_e8.config.rotationPruningThreshold = 0.0;
  local_e8.config.scalePruningThreshold = 0.0;
  local_e8.memRes = (MemoryResource *)PVar1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_e8.setups._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
  local_e8.setups._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
  local_e8.setups._Mypair._Myval1 =
       (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  if (PVar1 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    local_e8.setups._Mypair._Myval1 = PVar1;
  }
  local_e8.setups._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
  local_e8.rotationUnit = degrees;
  rl4::JointBehaviorFilter::JointBehaviorFilter
            (&local_90,(Reader *)((longlong)this + 0x18),(MemoryResource *)PVar1);
  rl4::
  TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  ::fillStorage(&local_e8,&local_90);
  rl4::
  TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  ::build(&local_e8,
          (unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_> *)
          local_68);
  rl4::
  TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>
  ::Accessor::assertRawDataEqual(local_28);
  if (local_28 !=
      (TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>
       *)0x0) {
    local_98 = local_28;
    if (local_30 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*local_30 + 0x10))(local_30,&local_98);
  }
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x20))(local_30,local_30 != (longlong *)local_68);
    local_30 = (longlong *)0x0;
  }
  if (local_90.filters._Mypair._Myval2._Myfirst != (FilterType *)0x0) {
    (**(code **)(*(longlong *)
                  CONCAT44(local_90.filters._Mypair._Myval1._4_4_,
                           local_90.filters._Mypair._Myval1._0_4_) + 0x10))
              ((longlong *)
               CONCAT44(local_90.filters._Mypair._Myval1._4_4_,
                        local_90.filters._Mypair._Myval1._0_4_),
               local_90.filters._Mypair._Myval2._Myfirst,
               ((longlong)local_90.filters._Mypair._Myval2._Myend -
                (longlong)local_90.filters._Mypair._Myval2._Myfirst >> 1) * 2,8);
    local_90.filters._Mypair._Myval2._Myend = (FilterType *)0x0;
    local_90.filters._Mypair._Myval2._Myfirst = (FilterType *)0x0;
    local_90.filters._Mypair._Myval2._Mylast = (FilterType *)0x0;
  }
  pTVar2 = local_e8.setups._Mypair._Myval2._Mylast;
  this_00 = local_e8.setups._Mypair._Myval2._Myfirst;
  if (local_e8.setups._Mypair._Myval2._Myfirst != (TwistSwingSetup *)0x0) {
    for (; this_00 != pTVar2; this_00 = this_00 + 1) {
      rl4::TwistSwingSetup::~TwistSwingSetup(this_00);
    }
    (**(code **)((longlong)*(MemoryResource *)local_e8.setups._Mypair._Myval1 + 0x10))
              (local_e8.setups._Mypair._Myval1,local_e8.setups._Mypair._Myval2._Myfirst,
               (((longlong)local_e8.setups._Mypair._Myval2._Myend -
                (longlong)local_e8.setups._Mypair._Myval2._Myfirst) / 0xd0) * 0xd0,8);
    local_e8.setups._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
    local_e8.setups._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
    local_e8.setups._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
  }
  rl4::JointsBuilder::~JointsBuilder((JointsBuilder *)&local_e8);
  return;
}

// buildStorage<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_> @ 14c5826b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`anonymous_namespace'::
TwistSwingJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::
buildStorage<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
          (void *this)

{
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> PVar1;
  TwistSwingSetup *this_00;
  TwistSwingSetup *pTVar2;
  undefined1 auStack_108 [32];
  TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128> local_e8;
  TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
  *local_98;
  JointBehaviorFilter local_90;
  undefined1 local_68 [56];
  longlong *local_30;
  TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
  *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e8._padding_ =
       (longlong)
       &
       ___7__TwistSwingJointsBuilder_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3__rl4__6B_
  ;
  PVar1 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)((longlong)this + 0x10);
  local_e8.config._11_1_ = local_90.filters._Mypair._Myval1._3_1_;
  local_e8.config.calculationType = SSE;
  local_e8.config.loadJoints = true;
  local_e8.config.loadBlendShapes = true;
  local_e8.config.loadAnimatedMaps = true;
  local_e8.config.loadMachineLearnedBehavior = true;
  local_e8.config.loadRBFBehavior = true;
  local_e8.config.loadTwistSwingBehavior = true;
  local_e8.config.translationType = Vector;
  local_e8.config.rotationType = EulerAngles;
  local_e8.config.rotationOrder = XYZ;
  local_e8.config.scaleType = Vector;
  local_e8.config.translationPruningThreshold = 0.0;
  local_e8.config.rotationPruningThreshold = 0.0;
  local_e8.config.scalePruningThreshold = 0.0;
  local_e8.memRes = (MemoryResource *)PVar1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_e8.setups._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
  local_e8.setups._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
  local_e8.setups._Mypair._Myval1 =
       (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  if (PVar1 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    local_e8.setups._Mypair._Myval1 = PVar1;
  }
  local_e8.setups._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
  local_e8.rotationUnit = degrees;
  rl4::JointBehaviorFilter::JointBehaviorFilter
            (&local_90,(Reader *)((longlong)this + 0x18),(MemoryResource *)PVar1);
  rl4::TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::
  fillStorage(&local_e8,&local_90);
  rl4::TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::
  build(&local_e8,
        (unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_> *)
        local_68);
  rl4::
  TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
  ::Accessor::assertRawDataEqual(local_28);
  if (local_28 !=
      (TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
       *)0x0) {
    local_98 = local_28;
    if (local_30 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*local_30 + 0x10))(local_30,&local_98);
  }
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x20))(local_30,local_30 != (longlong *)local_68);
    local_30 = (longlong *)0x0;
  }
  if (local_90.filters._Mypair._Myval2._Myfirst != (FilterType *)0x0) {
    (**(code **)(*(longlong *)
                  CONCAT44(local_90.filters._Mypair._Myval1._4_4_,
                           local_90.filters._Mypair._Myval1._0_4_) + 0x10))
              ((longlong *)
               CONCAT44(local_90.filters._Mypair._Myval1._4_4_,
                        local_90.filters._Mypair._Myval1._0_4_),
               local_90.filters._Mypair._Myval2._Myfirst,
               ((longlong)local_90.filters._Mypair._Myval2._Myend -
                (longlong)local_90.filters._Mypair._Myval2._Myfirst >> 1) * 2,8);
    local_90.filters._Mypair._Myval2._Myend = (FilterType *)0x0;
    local_90.filters._Mypair._Myval2._Myfirst = (FilterType *)0x0;
    local_90.filters._Mypair._Myval2._Mylast = (FilterType *)0x0;
  }
  pTVar2 = local_e8.setups._Mypair._Myval2._Mylast;
  this_00 = local_e8.setups._Mypair._Myval2._Myfirst;
  if (local_e8.setups._Mypair._Myval2._Myfirst != (TwistSwingSetup *)0x0) {
    for (; this_00 != pTVar2; this_00 = this_00 + 1) {
      rl4::TwistSwingSetup::~TwistSwingSetup(this_00);
    }
    (**(code **)((longlong)*(MemoryResource *)local_e8.setups._Mypair._Myval1 + 0x10))
              (local_e8.setups._Mypair._Myval1,local_e8.setups._Mypair._Myval2._Myfirst,
               (((longlong)local_e8.setups._Mypair._Myval2._Myend -
                (longlong)local_e8.setups._Mypair._Myval2._Myfirst) / 0xd0) * 0xd0,8);
    local_e8.setups._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
    local_e8.setups._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
    local_e8.setups._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
  }
  rl4::JointsBuilder::~JointsBuilder((JointsBuilder *)&local_e8);
  return;
}

// buildStorage<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_> @ 14c582900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`anonymous_namespace'::
TwistSwingJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
::
buildStorage<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
          (void *this)

{
  PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource> PVar1;
  TwistSwingSetup *this_00;
  TwistSwingSetup *pTVar2;
  undefined1 auStack_108 [32];
  TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128> local_e8;
  TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
  *local_98;
  JointBehaviorFilter local_90;
  undefined1 local_68 [56];
  longlong *local_30;
  TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
  *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e8._padding_ =
       (longlong)
       &
       ___7__TwistSwingJointsBuilder_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3__rl4__6B_
  ;
  PVar1 = (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)((longlong)this + 0x10);
  local_e8.config._11_1_ = local_90.filters._Mypair._Myval1._3_1_;
  local_e8.config.calculationType = SSE;
  local_e8.config.loadJoints = true;
  local_e8.config.loadBlendShapes = true;
  local_e8.config.loadAnimatedMaps = true;
  local_e8.config.loadMachineLearnedBehavior = true;
  local_e8.config.loadRBFBehavior = true;
  local_e8.config.loadTwistSwingBehavior = true;
  local_e8.config.translationType = Vector;
  local_e8.config.rotationType = Quaternions;
  local_e8.config.rotationOrder = XYZ;
  local_e8.config.scaleType = Vector;
  local_e8.config.translationPruningThreshold = 0.0;
  local_e8.config.rotationPruningThreshold = 0.0;
  local_e8.config.scalePruningThreshold = 0.0;
  local_e8.memRes = (MemoryResource *)PVar1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_e8.setups._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
  local_e8.setups._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
  local_e8.setups._Mypair._Myval1 =
       (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  if (PVar1 != (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)0x0) {
    local_e8.setups._Mypair._Myval1 = PVar1;
  }
  local_e8.setups._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
  local_e8.rotationUnit = degrees;
  rl4::JointBehaviorFilter::JointBehaviorFilter
            (&local_90,(Reader *)((longlong)this + 0x18),(MemoryResource *)PVar1);
  rl4::TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::
  fillStorage(&local_e8,&local_90);
  rl4::TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::
  build(&local_e8,
        (unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_> *)
        local_68);
  rl4::
  TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
  ::Accessor::assertRawDataEqual(local_28);
  if (local_28 !=
      (TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
       *)0x0) {
    local_98 = local_28;
    if (local_30 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*local_30 + 0x10))(local_30,&local_98);
  }
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x20))(local_30,local_30 != (longlong *)local_68);
    local_30 = (longlong *)0x0;
  }
  if (local_90.filters._Mypair._Myval2._Myfirst != (FilterType *)0x0) {
    (**(code **)(*(longlong *)
                  CONCAT44(local_90.filters._Mypair._Myval1._4_4_,
                           local_90.filters._Mypair._Myval1._0_4_) + 0x10))
              ((longlong *)
               CONCAT44(local_90.filters._Mypair._Myval1._4_4_,
                        local_90.filters._Mypair._Myval1._0_4_),
               local_90.filters._Mypair._Myval2._Myfirst,
               ((longlong)local_90.filters._Mypair._Myval2._Myend -
                (longlong)local_90.filters._Mypair._Myval2._Myfirst >> 1) * 2,8);
    local_90.filters._Mypair._Myval2._Myend = (FilterType *)0x0;
    local_90.filters._Mypair._Myval2._Myfirst = (FilterType *)0x0;
    local_90.filters._Mypair._Myval2._Mylast = (FilterType *)0x0;
  }
  pTVar2 = local_e8.setups._Mypair._Myval2._Mylast;
  this_00 = local_e8.setups._Mypair._Myval2._Myfirst;
  if (local_e8.setups._Mypair._Myval2._Myfirst != (TwistSwingSetup *)0x0) {
    for (; this_00 != pTVar2; this_00 = this_00 + 1) {
      rl4::TwistSwingSetup::~TwistSwingSetup(this_00);
    }
    (**(code **)((longlong)*(MemoryResource *)local_e8.setups._Mypair._Myval1 + 0x10))
              (local_e8.setups._Mypair._Myval1,local_e8.setups._Mypair._Myval2._Myfirst,
               (((longlong)local_e8.setups._Mypair._Myval2._Myend -
                (longlong)local_e8.setups._Mypair._Myval2._Myfirst) / 0xd0) * 0xd0,8);
    local_e8.setups._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
    local_e8.setups._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
    local_e8.setups._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
  }
  rl4::JointsBuilder::~JointsBuilder((JointsBuilder *)&local_e8);
  return;
}

// TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128> @ 14c582b50

TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128> * __thiscall
rl4::TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::
TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>
          (TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>
           *this,Configuration *param_1,MemoryResource *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  TranslationType TVar7;
  RotationType RVar8;
  RotationOrder RVar9;
  ScaleType SVar10;
  undefined1 uVar11;
  float fVar12;
  void *pvVar13;
  ulonglong uVar14;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TwistSwingJointsBuilder_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3__rl4__6B_
  ;
  pvVar13 = ThreadLocalStoragePointer;
  bVar1 = param_1->loadJoints;
  bVar2 = param_1->loadBlendShapes;
  bVar3 = param_1->loadAnimatedMaps;
  bVar4 = param_1->loadMachineLearnedBehavior;
  bVar5 = param_1->loadRBFBehavior;
  bVar6 = param_1->loadTwistSwingBehavior;
  TVar7 = param_1->translationType;
  RVar8 = param_1->rotationType;
  RVar9 = param_1->rotationOrder;
  SVar10 = param_1->scaleType;
  uVar11 = param_1->field_0xb;
  fVar12 = param_1->translationPruningThreshold;
  (this->config).calculationType = param_1->calculationType;
  (this->config).loadJoints = bVar1;
  (this->config).loadBlendShapes = bVar2;
  (this->config).loadAnimatedMaps = bVar3;
  (this->config).loadMachineLearnedBehavior = bVar4;
  (this->config).loadRBFBehavior = bVar5;
  (this->config).loadTwistSwingBehavior = bVar6;
  (this->config).translationType = TVar7;
  (this->config).rotationType = RVar8;
  (this->config).rotationOrder = RVar9;
  (this->config).scaleType = SVar10;
  (this->config).field_0xb = uVar11;
  (this->config).translationPruningThreshold = fVar12;
  fVar12 = param_1->scalePruningThreshold;
  uVar14 = (ulonglong)_tls_index;
  (this->config).rotationPruningThreshold = param_1->rotationPruningThreshold;
  (this->config).scalePruningThreshold = fVar12;
  this->memRes = param_2;
  if (*(int *)(*(longlong *)((longlong)pvVar13 + uVar14 * 8) + 0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::
             PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>'::__l2::
             _dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (param_2 == (MemoryResource *)0x0) {
    param_2 = (MemoryResource *)
              &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>(void)___ptr64'
               ::__l2::dmr;
  }
  (this->setups)._Mypair._Myval1 =
       (PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>)param_2;
  (this->setups)._Mypair._Myval2._Myfirst = (TwistSwingSetup *)0x0;
  (this->setups)._Mypair._Myval2._Mylast = (TwistSwingSetup *)0x0;
  (this->setups)._Mypair._Myval2._Myend = (TwistSwingSetup *)0x0;
  this->rotationUnit = degrees;
  return this;
}

// TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_> @ 14c582c10

TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
* __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
          (TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
           *this,vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
                 *param_1,
          function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
          *param_2,MemoryResource *param_3)

{
  TwistSwingSetup *pTVar1;
  TwistSwingSetup *pTVar2;
  TwistSwingSetup *pTVar3;
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
  *pfVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TwistSwingJointsEvaluator_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUdegrees_impl_tdm___tdm___0A__rl4___rl4__6B_
  ;
  pTVar1 = (param_1->_Mypair)._Myval2._Myend;
  pTVar2 = (param_1->_Mypair)._Myval2._Myfirst;
  (param_1->_Mypair)._Myval2._Myend = (TwistSwingSetup *)0x0;
  pTVar3 = (param_1->_Mypair)._Myval2._Mylast;
  (param_1->_Mypair)._Myval2._Mylast = (TwistSwingSetup *)0x0;
  (param_1->_Mypair)._Myval2._Myfirst = (TwistSwingSetup *)0x0;
  (this->setups)._Mypair._Myval1 = (param_1->_Mypair)._Myval1;
  (this->setups)._Mypair._Myval2._Myfirst = pTVar2;
  (this->setups)._Mypair._Myval2._Mylast = pTVar3;
  (this->setups)._Mypair._Myval2._Myend = pTVar1;
  std::
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
  ::
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
            (&this->instanceFactory,param_2);
  pfVar4 = *(function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
             **)&param_2->field_0x38;
  if (pfVar4 != (function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
                 *)0x0) {
    (**(code **)(*(longlong *)pfVar4 + 0x20))(pfVar4,pfVar4 != param_2);
    *(undefined8 *)&param_2->field_0x38 = 0;
  }
  return this;
}

// TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_> @ 14c582c90

TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
* __thiscall
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
          (TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
           *this,vector<rl4::TwistSwingSetup,pma::PolyAllocator<rl4::TwistSwingSetup,8,pma::DefaultMemoryResource>_>
                 *param_1,
          function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
          *param_2,MemoryResource *param_3)

{
  TwistSwingSetup *pTVar1;
  TwistSwingSetup *pTVar2;
  TwistSwingSetup *pTVar3;
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
  *pfVar4;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TwistSwingJointsEvaluator_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUdegrees_impl_tdm___tdm___0A__rl4___rl4__6B_
  ;
  pTVar1 = (param_1->_Mypair)._Myval2._Myend;
  pTVar2 = (param_1->_Mypair)._Myval2._Myfirst;
  (param_1->_Mypair)._Myval2._Myend = (TwistSwingSetup *)0x0;
  pTVar3 = (param_1->_Mypair)._Myval2._Mylast;
  (param_1->_Mypair)._Myval2._Mylast = (TwistSwingSetup *)0x0;
  (param_1->_Mypair)._Myval2._Myfirst = (TwistSwingSetup *)0x0;
  (this->setups)._Mypair._Myval1 = (param_1->_Mypair)._Myval1;
  (this->setups)._Mypair._Myval2._Myfirst = pTVar2;
  (this->setups)._Mypair._Myval2._Mylast = pTVar3;
  (this->setups)._Mypair._Myval2._Myend = pTVar1;
  std::
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
  ::
  function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
            (&this->instanceFactory,param_2);
  pfVar4 = *(function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
             **)&param_2->field_0x38;
  if (pfVar4 != (function<std::unique_ptr<rl4::JointsOutputInstance,std::function<void___cdecl(rl4::JointsOutputInstance_*)>_>___cdecl(pma::MemoryResource_*)>
                 *)0x0) {
    (**(code **)(*(longlong *)pfVar4 + 0x20))(pfVar4,pfVar4 != param_2);
    *(undefined8 *)&param_2->field_0x38 = 0;
  }
  return this;
}

// operator() @ 14c582d10

void __thiscall
`rl4::TwistSwingJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::
fillStorage'::__l22::<lambda_1>::operator()(void *this,TwistSwingSetup *param_1)

{
  ushort **ppuVar1;
  ulonglong uVar2;
  short *psVar3;
  ushort *puVar4;
  PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource> PVar5;
  short sVar6;
  ushort *puVar7;
  ushort *puVar8;
  ulonglong uVar9;
  short *psVar10;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *this_00;
  longlong lVar11;
  ushort *puVar12;
  ushort *puVar13;
  
  param_1->twistTwistAxis = *(TwistAxis *)((longlong)this + 0x38);
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  _Assign_counted_range<unsigned_short_const_*>
            (&param_1->twistInputIndices,*(ushort **)((longlong)this + 8),
             *(longlong *)((longlong)this + 0x10) * 2 >> 1);
  std::vector<float,pma::PolyAllocator<float,8,pma::DefaultMemoryResource>_>::
  _Assign_counted_range<float_const_*>
            (&param_1->twistBlendWeights,*(float **)((longlong)this + 0x28),
             (*(longlong *)((longlong)this + 0x30) << 2) >> 2);
  this_00 = &param_1->twistOutputIndices;
  std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
  reserve(this_00,*(longlong *)((longlong)this + 0x20) * 10);
  psVar10 = *(short **)((longlong)this + 0x18);
  psVar3 = psVar10 + *(longlong *)((longlong)this + 0x20);
  if (*(char *)(*(longlong *)this + 0x10) == '\x03') {
    for (; psVar10 != psVar3; psVar10 = psVar10 + 1) {
      puVar4 = (param_1->twistOutputIndices)._Mypair._Myval2._Myend;
      puVar13 = (param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
      sVar6 = *psVar10 * 9;
      if (puVar13 == puVar4) {
        puVar12 = (param_1->twistOutputIndices)._Mypair._Myval2._Myfirst;
        lVar11 = (longlong)puVar13 - (longlong)puVar12 >> 1;
        if (lVar11 == 0x7fffffffffffffff) {
LAB_14c583631:
                    /* WARNING: Subroutine does not return */
          std::
          vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>::
          _Xlength();
        }
        uVar2 = lVar11 + 1;
        uVar9 = (longlong)puVar4 - (longlong)puVar12 >> 1;
        if (0x7fffffffffffffff - (uVar9 >> 1) < uVar9) {
          uVar9 = 0x7fffffffffffffff;
        }
        else {
          uVar9 = (uVar9 >> 1) + uVar9;
          if (uVar9 < uVar2) {
            uVar9 = uVar2;
          }
        }
        PVar5 = (this_00->_Mypair)._Myval1;
        puVar8 = (ushort *)(**(code **)(*(longlong *)PVar5 + 8))(PVar5,uVar9 * 2,8);
        puVar8[lVar11] = sVar6 + 3U;
        puVar4 = (param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
        puVar12 = (param_1->twistOutputIndices)._Mypair._Myval2._Myfirst;
        puVar7 = puVar8;
        if (puVar13 == puVar4) {
          for (; puVar12 != puVar4; puVar12 = puVar12 + 1) {
            *puVar7 = *puVar12;
            puVar7 = puVar7 + 1;
          }
        }
        else {
          for (; puVar12 != puVar13; puVar12 = puVar12 + 1) {
            *puVar7 = *puVar12;
            puVar7 = puVar7 + 1;
          }
          puVar4 = (param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
          if (puVar13 != puVar4) {
            lVar11 = lVar11 * 2 - (longlong)puVar13;
            do {
              *(ushort *)((longlong)puVar8 + lVar11 + 2 + (longlong)puVar13) = *puVar13;
              puVar13 = puVar13 + 1;
            } while (puVar13 != puVar4);
          }
        }
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Change_array(this_00,puVar8,uVar2,uVar9);
      }
      else {
        *puVar13 = sVar6 + 3U;
        ppuVar1 = &(param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
        *ppuVar1 = *ppuVar1 + 1;
      }
      puVar4 = (param_1->twistOutputIndices)._Mypair._Myval2._Myend;
      puVar13 = (param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
      if (puVar13 == puVar4) {
        puVar12 = (param_1->twistOutputIndices)._Mypair._Myval2._Myfirst;
        lVar11 = (longlong)puVar13 - (longlong)puVar12 >> 1;
        if (lVar11 == 0x7fffffffffffffff) goto LAB_14c583631;
        uVar2 = lVar11 + 1;
        uVar9 = (longlong)puVar4 - (longlong)puVar12 >> 1;
        if (0x7fffffffffffffff - (uVar9 >> 1) < uVar9) {
          uVar9 = 0x7fffffffffffffff;
        }
        else {
          uVar9 = (uVar9 >> 1) + uVar9;
          if (uVar9 < uVar2) {
            uVar9 = uVar2;
          }
        }
        PVar5 = (this_00->_Mypair)._Myval1;
        puVar8 = (ushort *)(**(code **)(*(longlong *)PVar5 + 8))(PVar5,uVar9 * 2,8);
        puVar8[lVar11] = sVar6 + 4U;
        puVar4 = (param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
        puVar12 = (param_1->twistOutputIndices)._Mypair._Myval2._Myfirst;
        puVar7 = puVar8;
        if (puVar13 == puVar4) {
          for (; puVar12 != puVar4; puVar12 = puVar12 + 1) {
            *puVar7 = *puVar12;
            puVar7 = puVar7 + 1;
          }
        }
        else {
          for (; puVar12 != puVar13; puVar12 = puVar12 + 1) {
            *puVar7 = *puVar12;
            puVar7 = puVar7 + 1;
          }
          puVar4 = (param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
          if (puVar13 != puVar4) {
            lVar11 = lVar11 * 2 - (longlong)puVar13;
            do {
              *(ushort *)((longlong)puVar8 + lVar11 + 2 + (longlong)puVar13) = *puVar13;
              puVar13 = puVar13 + 1;
            } while (puVar13 != puVar4);
          }
        }
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Change_array(this_00,puVar8,uVar2,uVar9);
      }
      else {
        *puVar13 = sVar6 + 4U;
        ppuVar1 = &(param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
        *ppuVar1 = *ppuVar1 + 1;
      }
      puVar4 = (param_1->twistOutputIndices)._Mypair._Myval2._Myend;
      puVar13 = (param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
      if (puVar13 == puVar4) {
        puVar12 = (param_1->twistOutputIndices)._Mypair._Myval2._Myfirst;
        lVar11 = (longlong)puVar13 - (longlong)puVar12 >> 1;
        if (lVar11 == 0x7fffffffffffffff) goto LAB_14c583631;
        uVar2 = lVar11 + 1;
        uVar9 = (longlong)puVar4 - (longlong)puVar12 >> 1;
        if (0x7fffffffffffffff - (uVar9 >> 1) < uVar9) {
          uVar9 = 0x7fffffffffffffff;
        }
        else {
          uVar9 = (uVar9 >> 1) + uVar9;
          if (uVar9 < uVar2) {
            uVar9 = uVar2;
          }
        }
        PVar5 = (this_00->_Mypair)._Myval1;
        puVar8 = (ushort *)(**(code **)(*(longlong *)PVar5 + 8))(PVar5,uVar9 * 2,8);
        puVar8[lVar11] = sVar6 + 5U;
        puVar4 = (param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
        puVar12 = (param_1->twistOutputIndices)._Mypair._Myval2._Myfirst;
        puVar7 = puVar8;
        if (puVar13 == puVar4) {
          for (; puVar12 != puVar4; puVar12 = puVar12 + 1) {
            *puVar7 = *puVar12;
            puVar7 = puVar7 + 1;
          }
        }
        else {
          for (; puVar12 != puVar13; puVar12 = puVar12 + 1) {
            *puVar7 = *puVar12;
            puVar7 = puVar7 + 1;
          }
          puVar4 = (param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
          if (puVar13 != puVar4) {
            lVar11 = lVar11 * 2 - (longlong)puVar13;
            do {
              *(ushort *)((longlong)puVar8 + lVar11 + 2 + (longlong)puVar13) = *puVar13;
              puVar13 = puVar13 + 1;
            } while (puVar13 != puVar4);
          }
        }
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Change_array(this_00,puVar8,uVar2,uVar9);
      }
      else {
        *puVar13 = sVar6 + 5U;
        ppuVar1 = &(param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
        *ppuVar1 = *ppuVar1 + 1;
      }
      puVar4 = (param_1->twistOutputIndices)._Mypair._Myval2._Myend;
      puVar13 = (param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
      if (puVar13 == puVar4) {
        puVar12 = (param_1->twistOutputIndices)._Mypair._Myval2._Myfirst;
        lVar11 = (longlong)puVar13 - (longlong)puVar12 >> 1;
        if (lVar11 == 0x7fffffffffffffff) goto LAB_14c583631;
        uVar2 = lVar11 + 1;
        uVar9 = (longlong)puVar4 - (longlong)puVar12 >> 1;
        if (0x7fffffffffffffff - (uVar9 >> 1) < uVar9) {
          uVar9 = 0x7fffffffffffffff;
        }
        else {
          uVar9 = uVar9 + (uVar9 >> 1);
          if (uVar9 < uVar2) {
            uVar9 = uVar2;
          }
        }
        PVar5 = (this_00->_Mypair)._Myval1;
        puVar8 = (ushort *)(**(code **)(*(longlong *)PVar5 + 8))(PVar5,uVar9 * 2,8);
        puVar8[lVar11] = 0;
        puVar4 = (param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
        puVar12 = (param_1->twistOutputIndices)._Mypair._Myval2._Myfirst;
        puVar7 = puVar8;
        if (puVar13 == puVar4) {
          for (; puVar12 != puVar4; puVar12 = puVar12 + 1) {
            *puVar7 = *puVar12;
            puVar7 = puVar7 + 1;
          }
        }
        else {
          for (; puVar12 != puVar13; puVar12 = puVar12 + 1) {
            *puVar7 = *puVar12;
            puVar7 = puVar7 + 1;
          }
          puVar4 = (param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
          if (puVar13 != puVar4) {
            puVar12 = puVar13;
            do {
              *(ushort *)((longlong)puVar12 + (longlong)(puVar8 + lVar11) + (2 - (longlong)puVar13))
                   = *puVar12;
              puVar12 = puVar12 + 1;
            } while (puVar12 != puVar4);
          }
        }
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Change_array(this_00,puVar8,uVar2,uVar9);
      }
      else {
        *puVar13 = 0;
        ppuVar1 = &(param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
        *ppuVar1 = *ppuVar1 + 1;
      }
    }
  }
  else {
    for (; psVar10 != psVar3; psVar10 = psVar10 + 1) {
      puVar4 = (param_1->twistOutputIndices)._Mypair._Myval2._Myend;
      puVar13 = (param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
      sVar6 = *psVar10 * 10;
      if (puVar13 == puVar4) {
        puVar12 = (param_1->twistOutputIndices)._Mypair._Myval2._Myfirst;
        lVar11 = (longlong)puVar13 - (longlong)puVar12 >> 1;
        if (lVar11 == 0x7fffffffffffffff) goto LAB_14c583631;
        uVar2 = lVar11 + 1;
        uVar9 = (longlong)puVar4 - (longlong)puVar12 >> 1;
        if (0x7fffffffffffffff - (uVar9 >> 1) < uVar9) {
          uVar9 = 0x7fffffffffffffff;
        }
        else {
          uVar9 = uVar9 + (uVar9 >> 1);
          if (uVar9 < uVar2) {
            uVar9 = uVar2;
          }
        }
        PVar5 = (this_00->_Mypair)._Myval1;
        puVar8 = (ushort *)(**(code **)(*(longlong *)PVar5 + 8))(PVar5,uVar9 * 2,8);
        puVar8[lVar11] = sVar6 + 3U;
        puVar4 = (param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
        puVar12 = (param_1->twistOutputIndices)._Mypair._Myval2._Myfirst;
        puVar7 = puVar8;
        if (puVar13 == puVar4) {
          for (; puVar12 != puVar4; puVar12 = puVar12 + 1) {
            *puVar7 = *puVar12;
            puVar7 = puVar7 + 1;
          }
        }
        else {
          for (; puVar12 != puVar13; puVar12 = puVar12 + 1) {
            *puVar7 = *puVar12;
            puVar7 = puVar7 + 1;
          }
          puVar4 = (param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
          if (puVar13 != puVar4) {
            lVar11 = lVar11 * 2 - (longlong)puVar13;
            do {
              *(ushort *)((longlong)puVar13 + (longlong)puVar8 + lVar11 + 2) = *puVar13;
              puVar13 = puVar13 + 1;
            } while (puVar13 != puVar4);
          }
        }
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Change_array(this_00,puVar8,uVar2,uVar9);
      }
      else {
        *puVar13 = sVar6 + 3U;
        ppuVar1 = &(param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
        *ppuVar1 = *ppuVar1 + 1;
      }
      puVar4 = (param_1->twistOutputIndices)._Mypair._Myval2._Myend;
      puVar13 = (param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
      if (puVar13 == puVar4) {
        puVar12 = (param_1->twistOutputIndices)._Mypair._Myval2._Myfirst;
        lVar11 = (longlong)puVar13 - (longlong)puVar12 >> 1;
        if (lVar11 == 0x7fffffffffffffff) goto LAB_14c583631;
        uVar2 = lVar11 + 1;
        uVar9 = (longlong)puVar4 - (longlong)puVar12 >> 1;
        if (0x7fffffffffffffff - (uVar9 >> 1) < uVar9) {
          uVar9 = 0x7fffffffffffffff;
        }
        else {
          uVar9 = uVar9 + (uVar9 >> 1);
          if (uVar9 < uVar2) {
            uVar9 = uVar2;
          }
        }
        PVar5 = (this_00->_Mypair)._Myval1;
        puVar8 = (ushort *)(**(code **)(*(longlong *)PVar5 + 8))(PVar5,uVar9 * 2,8);
        puVar8[lVar11] = sVar6 + 4U;
        puVar4 = (param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
        puVar12 = (param_1->twistOutputIndices)._Mypair._Myval2._Myfirst;
        puVar7 = puVar8;
        if (puVar13 == puVar4) {
          for (; puVar12 != puVar4; puVar12 = puVar12 + 1) {
            *puVar7 = *puVar12;
            puVar7 = puVar7 + 1;
          }
        }
        else {
          for (; puVar12 != puVar13; puVar12 = puVar12 + 1) {
            *puVar7 = *puVar12;
            puVar7 = puVar7 + 1;
          }
          puVar4 = (param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
          if (puVar13 != puVar4) {
            lVar11 = lVar11 * 2 - (longlong)puVar13;
            do {
              *(ushort *)((longlong)puVar13 + (longlong)puVar8 + lVar11 + 2) = *puVar13;
              puVar13 = puVar13 + 1;
            } while (puVar13 != puVar4);
          }
        }
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Change_array(this_00,puVar8,uVar2,uVar9);
      }
      else {
        *puVar13 = sVar6 + 4U;
        ppuVar1 = &(param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
        *ppuVar1 = *ppuVar1 + 1;
      }
      puVar4 = (param_1->twistOutputIndices)._Mypair._Myval2._Myend;
      puVar13 = (param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
      if (puVar13 == puVar4) {
        puVar12 = (param_1->twistOutputIndices)._Mypair._Myval2._Myfirst;
        lVar11 = (longlong)puVar13 - (longlong)puVar12 >> 1;
        if (lVar11 == 0x7fffffffffffffff) goto LAB_14c583631;
        uVar2 = lVar11 + 1;
        uVar9 = (longlong)puVar4 - (longlong)puVar12 >> 1;
        if (0x7fffffffffffffff - (uVar9 >> 1) < uVar9) {
          uVar9 = 0x7fffffffffffffff;
        }
        else {
          uVar9 = (uVar9 >> 1) + uVar9;
          if (uVar9 < uVar2) {
            uVar9 = uVar2;
          }
        }
        PVar5 = (this_00->_Mypair)._Myval1;
        puVar8 = (ushort *)(**(code **)(*(longlong *)PVar5 + 8))(PVar5,uVar9 * 2,8);
        puVar8[lVar11] = sVar6 + 5U;
        puVar4 = (param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
        puVar12 = (param_1->twistOutputIndices)._Mypair._Myval2._Myfirst;
        puVar7 = puVar8;
        if (puVar13 == puVar4) {
          for (; puVar12 != puVar4; puVar12 = puVar12 + 1) {
            *puVar7 = *puVar12;
            puVar7 = puVar7 + 1;
          }
        }
        else {
          for (; puVar12 != puVar13; puVar12 = puVar12 + 1) {
            *puVar7 = *puVar12;
            puVar7 = puVar7 + 1;
          }
          puVar4 = (param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
          if (puVar13 != puVar4) {
            lVar11 = lVar11 * 2 - (longlong)puVar13;
            do {
              *(ushort *)((longlong)puVar8 + lVar11 + 2 + (longlong)puVar13) = *puVar13;
              puVar13 = puVar13 + 1;
            } while (puVar13 != puVar4);
          }
        }
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Change_array(this_00,puVar8,uVar2,uVar9);
      }
      else {
        *puVar13 = sVar6 + 5U;
        ppuVar1 = &(param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
        *ppuVar1 = *ppuVar1 + 1;
      }
      puVar4 = (param_1->twistOutputIndices)._Mypair._Myval2._Myend;
      puVar13 = (param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
      if (puVar13 == puVar4) {
        puVar12 = (param_1->twistOutputIndices)._Mypair._Myval2._Myfirst;
        lVar11 = (longlong)puVar13 - (longlong)puVar12 >> 1;
        if (lVar11 == 0x7fffffffffffffff) goto LAB_14c583631;
        uVar2 = lVar11 + 1;
        uVar9 = (longlong)puVar4 - (longlong)puVar12 >> 1;
        if (0x7fffffffffffffff - (uVar9 >> 1) < uVar9) {
          uVar9 = 0x7fffffffffffffff;
        }
        else {
          uVar9 = (uVar9 >> 1) + uVar9;
          if (uVar9 < uVar2) {
            uVar9 = uVar2;
          }
        }
        PVar5 = (this_00->_Mypair)._Myval1;
        puVar8 = (ushort *)(**(code **)(*(longlong *)PVar5 + 8))(PVar5,uVar9 * 2,8);
        puVar8[lVar11] = sVar6 + 6U;
        puVar4 = (param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
        puVar12 = (param_1->twistOutputIndices)._Mypair._Myval2._Myfirst;
        puVar7 = puVar8;
        if (puVar13 == puVar4) {
          for (; puVar12 != puVar4; puVar12 = puVar12 + 1) {
            *puVar7 = *puVar12;
            puVar7 = puVar7 + 1;
          }
        }
        else {
          for (; puVar12 != puVar13; puVar12 = puVar12 + 1) {
            *puVar7 = *puVar12;
            puVar7 = puVar7 + 1;
          }
          puVar4 = (param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
          if (puVar13 != puVar4) {
            lVar11 = lVar11 * 2 - (longlong)puVar13;
            do {
              *(ushort *)((longlong)puVar8 + lVar11 + 2 + (longlong)puVar13) = *puVar13;
              puVar13 = puVar13 + 1;
            } while (puVar13 != puVar4);
          }
        }
        std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
        ::_Change_array(this_00,puVar8,uVar2,uVar9);
      }
      else {
        *puVar13 = sVar6 + 6U;
        ppuVar1 = &(param_1->twistOutputIndices)._Mypair._Myval2._Mylast;
        *ppuVar1 = *ppuVar1 + 1;
      }
    }
  }
  return;
}

// GetSetUpCaseOrSuite @ 14c583640

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
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

// GetSetUpCaseOrSuite @ 14c5836e0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
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

// GetSetUpCaseOrSuite @ 14c583780

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
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

// GetSetUpCaseOrSuite @ 14c583820

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
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

// GetTearDownCaseOrSuite @ 14c5838c0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
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

// GetTearDownCaseOrSuite @ 14c583960

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
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

// GetTearDownCaseOrSuite @ 14c583a00

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
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

// GetTearDownCaseOrSuite @ 14c583aa0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
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

// Register @ 14c583b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::TwistSwingJointStorageBuilderTest,testing::internal::TemplateSel<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types1<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
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
              ___7__TestFactoryImpl_V__TwistSwingJointStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___std_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
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
             &TypeIdHelper<TwistSwingJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
              ::dummy_,(_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c583fd2;
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
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c583fd2;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c583fd2;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c583fd2;
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
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c583fd2;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c583fd2;
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
LAB_14c583fd2:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c584020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::TwistSwingJointStorageBuilderTest,testing::internal::TemplateSel<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
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
              ___7__TestFactoryImpl_V__TwistSwingJointStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_UPassthroughAdapter_rl4___std_____internal_testing__6B_
    ;
  }
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar16,param_2->line);
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var10 = SuiteApiResolver<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
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
             &TypeIdHelper<TwistSwingJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
              ::dummy_,(_func_void *)p_Var10,(_func_void *)p_Var9,pTVar8);
  if (0xf < uStack_130) {
    uVar20 = uStack_130 + 1;
    pppppppcVar17 = local_148;
    if (0xfff < uVar20) {
      pppppppcVar17 = (char *******)local_148[-1];
      uVar20 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar17)))
      goto LAB_14c5844bf;
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
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar18)) goto LAB_14c5844bf;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c5844bf;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c5844bf;
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
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar18)) goto LAB_14c5844bf;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c5844bf;
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
LAB_14c5844bf:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar19,uVar20);
  }
  bVar7 = TypeParameterizedTest<`anonymous_namespace'::TwistSwingJointStorageBuilderTest,testing::internal::TemplateSel<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types1<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
          ::Register(param_1,param_2,param_3,param_4,param_5 + 1,param_6);
  return bVar7;
}

// Register @ 14c584530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::TwistSwingJointStorageBuilderTest,testing::internal::TemplateSel<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types3<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
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
              ___7__TestFactoryImpl_V__TwistSwingJointStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___std_____internal_testing__6B_
    ;
  }
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar16,param_2->line);
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var10 = SuiteApiResolver<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
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
             &TypeIdHelper<TwistSwingJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
              ::dummy_,(_func_void *)p_Var10,(_func_void *)p_Var9,pTVar8);
  if (0xf < uStack_130) {
    uVar20 = uStack_130 + 1;
    pppppppcVar17 = local_148;
    if (0xfff < uVar20) {
      pppppppcVar17 = (char *******)local_148[-1];
      uVar20 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar17)))
      goto LAB_14c5849cf;
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
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar18)) goto LAB_14c5849cf;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c5849cf;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c5849cf;
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
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar18)) goto LAB_14c5849cf;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c5849cf;
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
LAB_14c5849cf:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar19,uVar20);
  }
  bVar7 = TypeParameterizedTest<`anonymous_namespace'::TwistSwingJointStorageBuilderTest,testing::internal::TemplateSel<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
          ::Register(param_1,param_2,param_3,param_4,param_5 + 1,param_6);
  return bVar7;
}

// Register @ 14c584a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::TwistSwingJointStorageBuilderTest,testing::internal::TemplateSel<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
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
              ___7__TestFactoryImpl_V__TwistSwingJointStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_UPassthroughAdapter_rl4___std_____internal_testing__6B_
    ;
  }
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar16,param_2->line);
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var10 = SuiteApiResolver<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
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
             &TypeIdHelper<TwistSwingJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
              ::dummy_,(_func_void *)p_Var10,(_func_void *)p_Var9,pTVar8);
  if (0xf < uStack_130) {
    uVar20 = uStack_130 + 1;
    pppppppcVar17 = local_148;
    if (0xfff < uVar20) {
      pppppppcVar17 = (char *******)local_148[-1];
      uVar20 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar17)))
      goto LAB_14c584edf;
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
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar18)) goto LAB_14c584edf;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c584edf;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c584edf;
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
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar18)) goto LAB_14c584edf;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c584edf;
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
LAB_14c584edf:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar19,uVar20);
  }
  bVar7 = TypeParameterizedTest<`anonymous_namespace'::TwistSwingJointStorageBuilderTest,testing::internal::TemplateSel<TwistSwingJointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types3<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
          ::Register(param_1,param_2,param_3,param_4,param_5 + 1,param_6);
  return bVar7;
}

// assertRawDataEqual @ 14c584f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
::Accessor::assertRawDataEqual
          (TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
           *param_1)

{
  TwistAxis *pTVar1;
  ushort *puVar2;
  ushort *puVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar8;
  longlong lVar9;
  void *pvVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulong64 uVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar15;
  Message *pMVar16;
  AssertHelper *pAVar17;
  longlong lVar18;
  void *pvVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  char *pcVar22;
  ulong64 uVar23;
  ulong64 uVar24;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar25;
  ulonglong uVar26;
  TwistSwingSetup *pTVar27;
  undefined1 auStackY_1a8 [32];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_178;
  AssertHelper local_170;
  ulong64 local_168;
  AssertionResult local_160;
  AssertionResult local_150;
  AssertionResult local_140;
  AssertionResult local_130;
  AssertionResult local_120;
  AssertionResult local_110;
  AssertionResult local_100;
  AssertionResult local_f0;
  AssertionResult local_e0;
  AssertionResult local_d0;
  AssertionResult local_c0;
  AssertionResult local_b0;
  AssertionResult local_a0;
  AssertionResult local_90;
  _Bxty local_80;
  undefined8 local_70;
  ulonglong uStack_68;
  _Bxty local_60;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_168 = ((longlong)(param_1->setups)._Mypair._Myval2._Mylast -
              (longlong)(param_1->setups)._Mypair._Myval2._Myfirst) / 0xd0;
  testing::internal::EqHelper::Compare<unsigned___int64,unsigned_short,0>
            (&local_160,"result.setups.size()","rltests::twsw::optimized::setupCount",&local_168,
             &rltests::twsw::optimized::setupCount);
  uVar25._Mypair._Myval2 = local_160.message_._Mypair._Myval2;
  if (local_160.success_ == false) {
    pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
    if (local_160.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar22 = "";
    }
    else {
      pcVar22 = (char *)local_160.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_160.message_._Mypair._Myval2 + 0x18)) {
        pcVar22 = *(char **)local_160.message_._Mypair._Myval2;
      }
    }
    pAVar17 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_170,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                         ,0x19,pcVar22);
    testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
    testing::internal::AssertHelper::~AssertHelper(&local_170);
    if (local_178._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar21 = (undefined8 *)
                ((longlong)&(local_178._Myval2)->field_0x0 +
                (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
      (**(code **)*puVar21)(puVar21,1);
    }
    if (local_160.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_160.message_._Mypair._Myval2);
      ::operator_delete((void *)local_160.message_._Mypair._Myval2,0x20);
    }
  }
  else {
    if (local_160.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_160.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
    }
    uVar12 = _UNK_15076add8;
    uVar11 = ___xmm_000000000000000f0000000000000000;
    pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
    lVar18 = (longlong)(param_1->setups)._Mypair._Myval2._Mylast - (longlong)pTVar27;
    local_168 = 0;
    lVar9 = lVar18 >> 0x3f;
    if (lVar18 / 0xd0 + lVar9 != lVar9) {
      do {
        uVar13 = local_168;
        pTVar1 = rltests::twsw::unoptimized::swingTwistAxes._Mypair._Myval2._Myfirst + local_168;
        if (pTVar27[local_168].swingTwistAxis ==
            rltests::twsw::unoptimized::swingTwistAxes._Mypair._Myval2._Myfirst[local_168]) {
          testing::AssertionSuccess(&local_160);
        }
        else {
          pbVar14 = testing::internal::
                    FormatForComparisonFailureMessage<enum_dna::TwistAxis,enum_dna::TwistAxis>
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_80,pTVar1,&pTVar27[local_168].swingTwistAxis);
          pbVar15 = testing::internal::
                    FormatForComparisonFailureMessage<enum_dna::TwistAxis,enum_dna::TwistAxis>
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_60,&pTVar27[uVar13].swingTwistAxis,pTVar1);
          testing::internal::EqFailure
                    (&local_160,"result.setups[si].swingTwistAxis",
                     "rltests::twsw::unoptimized::swingTwistAxes[si]",pbVar15,pbVar14,false);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80);
        }
        uVar25._Mypair._Myval2 = local_160.message_._Mypair._Myval2;
        if (local_160.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_160.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_160.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_160.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_160.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x1b,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_160.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_160.message_._Mypair._Myval2;
          }
LAB_14c586771:
          if (uVar25._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            return;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     uVar25._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
          return;
        }
        if (local_160.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_160.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_178._Myval2 =
             (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)
              rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Mylast -
              (longlong)
              rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Myfirst >> 1);
        local_170.data_ =
             (AssertHelperData *)
             ((longlong)pTVar27[uVar13].swingInputIndices._Mypair._Myval2._Mylast -
              (longlong)pTVar27[uVar13].swingInputIndices._Mypair._Myval2._Myfirst >> 1);
        if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_170.data_
            == local_178._Myval2) {
          testing::AssertionSuccess(&local_90);
        }
        else {
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (ulong64 *)&local_178);
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (ulong64 *)&local_170);
          testing::internal::EqFailure
                    (&local_90,"result.setups[si].swingInputIndices.size()",
                     "rltests::twsw::optimized::swingInputIndices[si].size()",
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     false);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80);
        }
        uVar25._Mypair._Myval2 = local_90.message_._Mypair._Myval2;
        if (local_90.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_90.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_90.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_90.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_90.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x1c,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_90.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_90.message_._Mypair._Myval2;
          }
          goto LAB_14c586771;
        }
        if (local_90.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_90.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        uVar26 = 0;
        if ((longlong)
            rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Mylast -
            (longlong)
            rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Myfirst >> 1 != 0) {
          do {
            puVar2 = rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst[uVar13].
                     _Mypair._Myval2._Myfirst + uVar26;
            puVar3 = (param_1->setups)._Mypair._Myval2._Myfirst[uVar13].swingInputIndices._Mypair.
                     _Myval2._Myfirst + uVar26;
            if (*puVar3 == *puVar2) {
              testing::AssertionSuccess(&local_150);
            }
            else {
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80,puVar2);
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,puVar3);
              testing::internal::EqFailure
                        (&local_150,"result.setups[si].swingInputIndices[i]",
                         "rltests::twsw::optimized::swingInputIndices[si][i]",
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80,false);
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60);
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80);
            }
            uVar25._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
            if (local_150.success_ == false) {
              pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
              if (local_150.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar22 = "";
              }
              else {
                pcVar22 = (char *)local_150.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_150.message_._Mypair._Myval2 + 0x18)) {
                  pcVar22 = *(char **)local_150.message_._Mypair._Myval2;
                }
              }
              pAVar17 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_170,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                                   ,0x1f,pcVar22);
              testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
              testing::internal::AssertHelper::~AssertHelper(&local_170);
              uVar25._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
              if (local_178._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar21 = (undefined8 *)
                          ((longlong)&(local_178._Myval2)->field_0x0 +
                          (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
                (**(code **)*puVar21)(puVar21,1);
                uVar25._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
              }
              goto LAB_14c586771;
            }
            if (local_150.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_150.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 < (ulonglong)
                            ((longlong)
                             rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Mylast -
                             (longlong)
                             rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Myfirst >> 1));
        }
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_170.data_ =
             (AssertHelperData *)
             ((longlong)
              rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Mylast -
              (longlong)
              rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Myfirst >> 2);
        local_178._Myval2 =
             (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)pTVar27[uVar13].swingBlendWeights._Mypair._Myval2._Mylast -
              (longlong)pTVar27[uVar13].swingBlendWeights._Mypair._Myval2._Myfirst >> 2);
        if (local_178._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_170.data_
           ) {
          testing::AssertionSuccess(&local_a0);
        }
        else {
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (ulong64 *)&local_170);
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (ulong64 *)&local_178);
          testing::internal::EqFailure
                    (&local_a0,"result.setups[si].swingBlendWeights.size()",
                     "rltests::twsw::optimized::swingBlendWeights[si].size()",
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     false);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80);
        }
        uVar25._Mypair._Myval2 = local_a0.message_._Mypair._Myval2;
        if (local_a0.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_a0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_a0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_a0.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_a0.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x20,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_a0.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_a0.message_._Mypair._Myval2;
          }
          goto LAB_14c586771;
        }
        if (local_a0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_a0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        uVar26 = 0;
        uVar24 = uVar13;
        if ((longlong)
            rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Mylast -
            (longlong)
            rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Myfirst >> 2 != 0) {
          do {
            pfVar6 = rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst[uVar13].
                     _Mypair._Myval2._Myfirst;
            pfVar4 = pfVar6 + uVar26;
            pfVar7 = (param_1->setups)._Mypair._Myval2._Myfirst[uVar13].swingBlendWeights._Mypair.
                     _Myval2._Myfirst;
            pfVar5 = pfVar7 + uVar26;
            if (pfVar6[uVar26] == pfVar7[uVar26]) {
              testing::AssertionSuccess(&local_140);
            }
            else {
              pbVar14 = testing::internal::FormatForComparisonFailureMessage<float,float>
                                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&local_80,pfVar4,pfVar5);
              pbVar15 = testing::internal::FormatForComparisonFailureMessage<float,float>
                                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&local_60,pfVar5,pfVar4);
              testing::internal::EqFailure
                        (&local_140,"result.setups[si].swingBlendWeights[i]",
                         "rltests::twsw::optimized::swingBlendWeights[si][i]",pbVar15,pbVar14,false)
              ;
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60);
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80);
            }
            uVar25._Mypair._Myval2 = local_140.message_._Mypair._Myval2;
            if (local_140.success_ == false) {
              pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
              if (local_140.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar22 = "";
              }
              else {
                pcVar22 = (char *)local_140.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_140.message_._Mypair._Myval2 + 0x18)) {
                  pcVar22 = *(char **)local_140.message_._Mypair._Myval2;
                }
              }
              pAVar17 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_170,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                                   ,0x23,pcVar22);
              testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
              testing::internal::AssertHelper::~AssertHelper(&local_170);
              uVar25._Mypair._Myval2 = local_140.message_._Mypair._Myval2;
              if (local_178._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar21 = (undefined8 *)
                          ((longlong)&(local_178._Myval2)->field_0x0 +
                          (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
                (**(code **)*puVar21)(puVar21,1);
                uVar25._Mypair._Myval2 = local_140.message_._Mypair._Myval2;
              }
              goto LAB_14c586771;
            }
            if (local_140.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_140.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
            }
            uVar26 = uVar26 + 1;
            uVar24 = local_168;
          } while (uVar26 < (ulonglong)
                            ((longlong)
                             rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Mylast -
                             (longlong)
                             rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Myfirst >> 2));
        }
        pvVar8 = rltests::twsw::optimized::swingOutputIndices._Mypair._Myval2._Myfirst[1]._Mypair.
                 _Myval2._Myfirst;
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_178._Myval2 =
             (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)pTVar27[uVar13].swingOutputIndices._Mypair._Myval2._Mylast -
              (longlong)pTVar27[uVar13].swingOutputIndices._Mypair._Myval2._Myfirst >> 1);
        local_170.data_ =
             (AssertHelperData *)
             ((longlong)pvVar8[uVar13]._Mypair._Myval2._Mylast -
              (longlong)pvVar8[uVar13]._Mypair._Myval2._Myfirst >> 1);
        if (local_178._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_170.data_
           ) {
          testing::AssertionSuccess(&local_b0);
        }
        else {
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (ulong64 *)&local_170);
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (ulong64 *)&local_178);
          testing::internal::EqFailure
                    (&local_b0,"result.setups[si].swingOutputIndices.size()",
                     "rltests::twsw::optimized::swingOutputIndices[rotationSelectorIndex][si].size()"
                     ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     false);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80);
        }
        uVar25._Mypair._Myval2 = local_b0.message_._Mypair._Myval2;
        if (local_b0.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_b0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_b0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_b0.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_b0.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x25,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_b0.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_b0.message_._Mypair._Myval2;
          }
          goto LAB_14c586771;
        }
        if (local_b0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_b0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        uVar26 = 0;
        pvVar8 = rltests::twsw::optimized::swingOutputIndices._Mypair._Myval2._Myfirst[1]._Mypair.
                 _Myval2._Myfirst;
        if ((longlong)pvVar8[uVar13]._Mypair._Myval2._Mylast -
            (longlong)pvVar8[uVar13]._Mypair._Myval2._Myfirst >> 1 != 0) {
          do {
            puVar2 = rltests::twsw::optimized::swingOutputIndices._Mypair._Myval2._Myfirst[1].
                     _Mypair._Myval2._Myfirst[uVar13]._Mypair._Myval2._Myfirst + uVar26;
            puVar3 = (param_1->setups)._Mypair._Myval2._Myfirst[uVar13].swingOutputIndices._Mypair.
                     _Myval2._Myfirst + uVar26;
            if (*puVar3 == *puVar2) {
              testing::AssertionSuccess(&local_130);
            }
            else {
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,puVar2);
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80,puVar3);
              testing::internal::EqFailure
                        (&local_130,"result.setups[si].swingOutputIndices[i]",
                         "rltests::twsw::optimized::swingOutputIndices[rotationSelectorIndex][si][i]"
                         ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_80,
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,false);
              if (0xf < uStack_68) {
                pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
                uVar23 = uStack_68 + 1;
                pvVar19 = pvVar10;
                if (0xfff < uVar23) {
                  pvVar19 = *(void **)((longlong)pvVar10 + -8);
                  uVar23 = uStack_68 + 0x28;
                  if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
                  goto LAB_14c586076;
                }
                ::operator_delete(pvVar19,uVar23);
              }
              local_80._Buf[0] = '\0';
              local_70 = uVar11;
              uStack_68 = uVar12;
              if (0xf < local_48) {
                uVar23 = local_48 + 1;
                uVar20 = local_60._Ptr;
                if (0xfff < uVar23) {
                  uVar20 = *(undefined8 *)(local_60._Ptr + -8);
                  uVar23 = local_48 + 0x28;
                  if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c586076:
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                ::operator_delete((void *)uVar20,uVar23);
              }
            }
            uVar25._Mypair._Myval2 = local_130.message_._Mypair._Myval2;
            if (local_130.success_ == false) {
              pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
              if (local_130.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar22 = "";
              }
              else {
                pcVar22 = (char *)local_130.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_130.message_._Mypair._Myval2 + 0x18)) {
                  pcVar22 = *(char **)local_130.message_._Mypair._Myval2;
                }
              }
              pAVar17 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_170,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                                   ,0x28,pcVar22);
              testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
              testing::internal::AssertHelper::~AssertHelper(&local_170);
              uVar25._Mypair._Myval2 = local_130.message_._Mypair._Myval2;
              if (local_178._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar21 = (undefined8 *)
                          ((longlong)&(local_178._Myval2)->field_0x0 +
                          (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
                (**(code **)*puVar21)(puVar21,1);
                uVar25._Mypair._Myval2 = local_130.message_._Mypair._Myval2;
              }
              goto LAB_14c586771;
            }
            if (local_130.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_130.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
            }
            uVar26 = uVar26 + 1;
            pvVar8 = rltests::twsw::optimized::swingOutputIndices._Mypair._Myval2._Myfirst[1].
                     _Mypair._Myval2._Myfirst;
          } while (uVar26 < (ulonglong)
                            ((longlong)pvVar8[uVar13]._Mypair._Myval2._Mylast -
                             (longlong)pvVar8[uVar13]._Mypair._Myval2._Myfirst >> 1));
        }
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst + uVar13;
        pTVar1 = rltests::twsw::unoptimized::twistTwistAxes._Mypair._Myval2._Myfirst + uVar24;
        if (pTVar27->twistTwistAxis ==
            rltests::twsw::unoptimized::twistTwistAxes._Mypair._Myval2._Myfirst[uVar24]) {
          testing::AssertionSuccess(&local_c0);
        }
        else {
          pbVar14 = testing::internal::
                    FormatForComparisonFailureMessage<enum_dna::TwistAxis,enum_dna::TwistAxis>
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_60,pTVar1,&pTVar27->twistTwistAxis);
          pbVar15 = testing::internal::
                    FormatForComparisonFailureMessage<enum_dna::TwistAxis,enum_dna::TwistAxis>
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_80,&pTVar27->twistTwistAxis,pTVar1);
          testing::internal::EqFailure
                    (&local_c0,"result.setups[si].twistTwistAxis",
                     "rltests::twsw::unoptimized::twistTwistAxes[si]",pbVar15,pbVar14,false);
          if (0xf < uStack_68) {
            pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
            uVar24 = uStack_68 + 1;
            pvVar19 = pvVar10;
            if (0xfff < uVar24) {
              pvVar19 = *(void **)((longlong)pvVar10 + -8);
              uVar24 = uStack_68 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
              goto LAB_14c586116;
            }
            ::operator_delete(pvVar19,uVar24);
          }
          local_80._Buf[0] = '\0';
          local_70 = uVar11;
          uStack_68 = uVar12;
          if (0xf < local_48) {
            uVar24 = local_48 + 1;
            uVar20 = local_60._Ptr;
            if (0xfff < uVar24) {
              uVar20 = *(undefined8 *)(local_60._Ptr + -8);
              uVar24 = local_48 + 0x28;
              if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c586116:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar20,uVar24);
          }
        }
        uVar25._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
        if (local_c0.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_c0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_c0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_c0.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_c0.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x2a,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
          }
          goto LAB_14c586771;
        }
        if (local_c0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_c0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_170.data_ =
             (AssertHelperData *)
             ((longlong)
              rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Mylast -
              (longlong)
              rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Myfirst >> 1);
        local_178._Myval2 =
             (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)pTVar27[uVar13].twistInputIndices._Mypair._Myval2._Mylast -
              (longlong)pTVar27[uVar13].twistInputIndices._Mypair._Myval2._Myfirst >> 1);
        if (local_178._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_170.data_
           ) {
          testing::AssertionSuccess(&local_d0);
        }
        else {
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (ulong64 *)&local_170);
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (ulong64 *)&local_178);
          testing::internal::EqFailure
                    (&local_d0,"result.setups[si].twistInputIndices.size()",
                     "rltests::twsw::optimized::twistInputIndices[si].size()",
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     false);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80);
        }
        uVar25._Mypair._Myval2 = local_d0.message_._Mypair._Myval2;
        if (local_d0.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_d0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_d0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_d0.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_d0.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x2b,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_d0.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_d0.message_._Mypair._Myval2;
          }
          goto LAB_14c586771;
        }
        if (local_d0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_d0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        uVar26 = 0;
        if ((longlong)
            rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Mylast -
            (longlong)
            rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Myfirst >> 1 != 0) {
          do {
            puVar2 = rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst[uVar13].
                     _Mypair._Myval2._Myfirst + uVar26;
            puVar3 = (param_1->setups)._Mypair._Myval2._Myfirst[uVar13].twistInputIndices._Mypair.
                     _Myval2._Myfirst + uVar26;
            if (*puVar3 == *puVar2) {
              testing::AssertionSuccess(&local_120);
            }
            else {
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,puVar2);
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80,puVar3);
              testing::internal::EqFailure
                        (&local_120,"result.setups[si].twistInputIndices[i]",
                         "rltests::twsw::optimized::twistInputIndices[si][i]",
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80,
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,false);
              if (0xf < uStack_68) {
                pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
                uVar24 = uStack_68 + 1;
                pvVar19 = pvVar10;
                if (0xfff < uVar24) {
                  pvVar19 = *(void **)((longlong)pvVar10 + -8);
                  uVar24 = uStack_68 + 0x28;
                  if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
                  goto LAB_14c586130;
                }
                ::operator_delete(pvVar19,uVar24);
              }
              local_80._Buf[0] = '\0';
              local_70 = uVar11;
              uStack_68 = uVar12;
              if (0xf < local_48) {
                uVar24 = local_48 + 1;
                uVar20 = local_60._Ptr;
                if (0xfff < uVar24) {
                  uVar20 = *(undefined8 *)(local_60._Ptr + -8);
                  uVar24 = local_48 + 0x28;
                  if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c586130:
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                ::operator_delete((void *)uVar20,uVar24);
              }
            }
            uVar25._Mypair._Myval2 = local_120.message_._Mypair._Myval2;
            if (local_120.success_ == false) {
              pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
              if (local_120.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar22 = "";
              }
              else {
                pcVar22 = (char *)local_120.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_120.message_._Mypair._Myval2 + 0x18)) {
                  pcVar22 = *(char **)local_120.message_._Mypair._Myval2;
                }
              }
              pAVar17 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_170,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                                   ,0x2e,pcVar22);
              testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
              testing::internal::AssertHelper::~AssertHelper(&local_170);
              uVar25._Mypair._Myval2 = local_120.message_._Mypair._Myval2;
              if (local_178._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar21 = (undefined8 *)
                          ((longlong)&(local_178._Myval2)->field_0x0 +
                          (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
                (**(code **)*puVar21)(puVar21,1);
                uVar25._Mypair._Myval2 = local_120.message_._Mypair._Myval2;
              }
              goto LAB_14c586771;
            }
            if (local_120.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_120.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 < (ulonglong)
                            ((longlong)
                             rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Mylast -
                             (longlong)
                             rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Myfirst >> 1));
        }
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_170.data_ =
             (AssertHelperData *)
             ((longlong)
              rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Mylast -
              (longlong)
              rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Myfirst >> 2);
        local_178._Myval2 =
             (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)pTVar27[uVar13].twistBlendWeights._Mypair._Myval2._Mylast -
              (longlong)pTVar27[uVar13].twistBlendWeights._Mypair._Myval2._Myfirst >> 2);
        if (local_178._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_170.data_
           ) {
          testing::AssertionSuccess(&local_e0);
        }
        else {
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (ulong64 *)&local_170);
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (ulong64 *)&local_178);
          testing::internal::EqFailure
                    (&local_e0,"result.setups[si].twistBlendWeights.size()",
                     "rltests::twsw::optimized::twistBlendWeights[si].size()",
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     false);
          if (0xf < uStack_68) {
            pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
            uVar24 = uStack_68 + 1;
            pvVar19 = pvVar10;
            if (0xfff < uVar24) {
              pvVar19 = *(void **)((longlong)pvVar10 + -8);
              uVar24 = uStack_68 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
              goto LAB_14c5861d0;
            }
            ::operator_delete(pvVar19,uVar24);
          }
          local_80._Buf[0] = '\0';
          local_70 = uVar11;
          uStack_68 = uVar12;
          if (0xf < local_48) {
            uVar24 = local_48 + 1;
            uVar20 = local_60._Ptr;
            if (0xfff < uVar24) {
              uVar20 = *(undefined8 *)(local_60._Ptr + -8);
              uVar24 = local_48 + 0x28;
              if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c5861d0:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar20,uVar24);
          }
        }
        uVar25._Mypair._Myval2 = local_e0.message_._Mypair._Myval2;
        if (local_e0.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_e0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_e0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_e0.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_e0.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x2f,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_e0.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_e0.message_._Mypair._Myval2;
          }
          goto LAB_14c586771;
        }
        if (local_e0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_e0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        uVar26 = 0;
        if ((longlong)
            rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Mylast -
            (longlong)
            rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Myfirst >> 2 != 0) {
          do {
            pfVar6 = rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst[uVar13].
                     _Mypair._Myval2._Myfirst;
            pfVar4 = pfVar6 + uVar26;
            pfVar7 = (param_1->setups)._Mypair._Myval2._Myfirst[uVar13].twistBlendWeights._Mypair.
                     _Myval2._Myfirst;
            pfVar5 = pfVar7 + uVar26;
            if (pfVar6[uVar26] == pfVar7[uVar26]) {
              testing::AssertionSuccess(&local_110);
            }
            else {
              pbVar14 = testing::internal::FormatForComparisonFailureMessage<float,float>
                                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&local_60,pfVar4,pfVar5);
              pbVar15 = testing::internal::FormatForComparisonFailureMessage<float,float>
                                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&local_80,pfVar5,pfVar4);
              testing::internal::EqFailure
                        (&local_110,"result.setups[si].twistBlendWeights[i]",
                         "rltests::twsw::optimized::twistBlendWeights[si][i]",pbVar15,pbVar14,false)
              ;
              if (0xf < uStack_68) {
                pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
                uVar24 = uStack_68 + 1;
                pvVar19 = pvVar10;
                if (0xfff < uVar24) {
                  pvVar19 = *(void **)((longlong)pvVar10 + -8);
                  uVar24 = uStack_68 + 0x28;
                  if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
                  goto LAB_14c5861ea;
                }
                ::operator_delete(pvVar19,uVar24);
              }
              local_80._Buf[0] = '\0';
              local_70 = uVar11;
              uStack_68 = uVar12;
              if (0xf < local_48) {
                uVar24 = local_48 + 1;
                uVar20 = local_60._Ptr;
                if (0xfff < uVar24) {
                  uVar20 = *(undefined8 *)(local_60._Ptr + -8);
                  uVar24 = local_48 + 0x28;
                  if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c5861ea:
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                ::operator_delete((void *)uVar20,uVar24);
              }
            }
            uVar25._Mypair._Myval2 = local_110.message_._Mypair._Myval2;
            if (local_110.success_ == false) {
              pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
              if (local_110.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar22 = "";
              }
              else {
                pcVar22 = (char *)local_110.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_110.message_._Mypair._Myval2 + 0x18)) {
                  pcVar22 = *(char **)local_110.message_._Mypair._Myval2;
                }
              }
              pAVar17 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_170,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                                   ,0x32,pcVar22);
              testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
              testing::internal::AssertHelper::~AssertHelper(&local_170);
              uVar25._Mypair._Myval2 = local_110.message_._Mypair._Myval2;
              if (local_178._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar21 = (undefined8 *)
                          ((longlong)&(local_178._Myval2)->field_0x0 +
                          (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
                (**(code **)*puVar21)(puVar21,1);
                uVar25._Mypair._Myval2 = local_110.message_._Mypair._Myval2;
              }
              goto LAB_14c586771;
            }
            if (local_110.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_110.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 < (ulonglong)
                            ((longlong)
                             rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Mylast -
                             (longlong)
                             rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Myfirst >> 2));
        }
        pvVar8 = rltests::twsw::optimized::twistOutputIndices._Mypair._Myval2._Myfirst[1]._Mypair.
                 _Myval2._Myfirst;
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_178._Myval2 =
             (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)pTVar27[uVar13].twistOutputIndices._Mypair._Myval2._Mylast -
              (longlong)pTVar27[uVar13].twistOutputIndices._Mypair._Myval2._Myfirst >> 1);
        local_170.data_ =
             (AssertHelperData *)
             ((longlong)pvVar8[uVar13]._Mypair._Myval2._Mylast -
              (longlong)pvVar8[uVar13]._Mypair._Myval2._Myfirst >> 1);
        if (local_178._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_170.data_
           ) {
          testing::AssertionSuccess(&local_f0);
        }
        else {
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (ulong64 *)&local_170);
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (ulong64 *)&local_178);
          testing::internal::EqFailure
                    (&local_f0,"result.setups[si].twistOutputIndices.size()",
                     "rltests::twsw::optimized::twistOutputIndices[rotationSelectorIndex][si].size()"
                     ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     false);
          if (0xf < uStack_68) {
            pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
            uVar24 = uStack_68 + 1;
            pvVar19 = pvVar10;
            if (0xfff < uVar24) {
              pvVar19 = *(void **)((longlong)pvVar10 + -8);
              uVar24 = uStack_68 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
              goto LAB_14c58628a;
            }
            ::operator_delete(pvVar19,uVar24);
          }
          local_80._Buf[0] = '\0';
          local_70 = uVar11;
          uStack_68 = uVar12;
          if (0xf < local_48) {
            uVar24 = local_48 + 1;
            uVar20 = local_60._Ptr;
            if (0xfff < uVar24) {
              uVar20 = *(undefined8 *)(local_60._Ptr + -8);
              uVar24 = local_48 + 0x28;
              if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c58628a:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar20,uVar24);
          }
        }
        uVar25._Mypair._Myval2 = local_f0.message_._Mypair._Myval2;
        if (local_f0.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_f0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_f0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_f0.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_f0.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x34,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_f0.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_f0.message_._Mypair._Myval2;
          }
          goto LAB_14c586771;
        }
        if (local_f0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_f0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        uVar26 = 0;
        pvVar8 = rltests::twsw::optimized::twistOutputIndices._Mypair._Myval2._Myfirst[1]._Mypair.
                 _Myval2._Myfirst;
        if ((longlong)pvVar8[uVar13]._Mypair._Myval2._Mylast -
            (longlong)pvVar8[uVar13]._Mypair._Myval2._Myfirst >> 1 != 0) {
          do {
            puVar2 = rltests::twsw::optimized::twistOutputIndices._Mypair._Myval2._Myfirst[1].
                     _Mypair._Myval2._Myfirst[uVar13]._Mypair._Myval2._Myfirst + uVar26;
            puVar3 = (param_1->setups)._Mypair._Myval2._Myfirst[uVar13].twistOutputIndices._Mypair.
                     _Myval2._Myfirst + uVar26;
            if (*puVar3 == *puVar2) {
              testing::AssertionSuccess(&local_100);
            }
            else {
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,puVar2);
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80,puVar3);
              testing::internal::EqFailure
                        (&local_100,"result.setups[si].twistOutputIndices[i]",
                         "rltests::twsw::optimized::twistOutputIndices[rotationSelectorIndex][si][i]"
                         ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_80,
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,false);
              if (0xf < uStack_68) {
                pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
                uVar24 = uStack_68 + 1;
                pvVar19 = pvVar10;
                if (0xfff < uVar24) {
                  pvVar19 = *(void **)((longlong)pvVar10 + -8);
                  uVar24 = uStack_68 + 0x28;
                  if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
                  goto LAB_14c5862a4;
                }
                ::operator_delete(pvVar19,uVar24);
              }
              local_80._Buf[0] = '\0';
              local_70 = uVar11;
              uStack_68 = uVar12;
              if (0xf < local_48) {
                uVar24 = local_48 + 1;
                uVar20 = local_60._Ptr;
                if (0xfff < uVar24) {
                  uVar20 = *(undefined8 *)(local_60._Ptr + -8);
                  uVar24 = local_48 + 0x28;
                  if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c5862a4:
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                ::operator_delete((void *)uVar20,uVar24);
              }
            }
            uVar25._Mypair._Myval2 = local_100.message_._Mypair._Myval2;
            if (local_100.success_ == false) {
              pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
              if (local_100.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar22 = "";
              }
              else {
                pcVar22 = (char *)local_100.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_100.message_._Mypair._Myval2 + 0x18)) {
                  pcVar22 = *(char **)local_100.message_._Mypair._Myval2;
                }
              }
              pAVar17 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_170,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                                   ,0x37,pcVar22);
              testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
              testing::internal::AssertHelper::~AssertHelper(&local_170);
              uVar25._Mypair._Myval2 = local_100.message_._Mypair._Myval2;
              if (local_178._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar21 = (undefined8 *)
                          ((longlong)&(local_178._Myval2)->field_0x0 +
                          (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
                (**(code **)*puVar21)(puVar21,1);
                uVar25._Mypair._Myval2 = local_100.message_._Mypair._Myval2;
              }
              goto LAB_14c586771;
            }
            if (local_100.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_100.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
            }
            uVar26 = uVar26 + 1;
            pvVar8 = rltests::twsw::optimized::twistOutputIndices._Mypair._Myval2._Myfirst[1].
                     _Mypair._Myval2._Myfirst;
          } while (uVar26 < (ulonglong)
                            ((longlong)pvVar8[uVar13]._Mypair._Myval2._Mylast -
                             (longlong)pvVar8[uVar13]._Mypair._Myval2._Myfirst >> 1));
        }
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_168 = local_168 + 1;
      } while (local_168 <
               (ulonglong)
               (((longlong)(param_1->setups)._Mypair._Myval2._Mylast - (longlong)pTVar27) / 0xd0));
    }
  }
  return;
}

// assertRawDataEqual @ 14c586840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>
::Accessor::assertRawDataEqual
          (TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>
           *param_1)

{
  TwistAxis *pTVar1;
  ushort *puVar2;
  ushort *puVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar8;
  longlong lVar9;
  void *pvVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulong64 uVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar15;
  Message *pMVar16;
  AssertHelper *pAVar17;
  longlong lVar18;
  void *pvVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  char *pcVar22;
  ulong64 uVar23;
  ulong64 uVar24;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar25;
  ulonglong uVar26;
  TwistSwingSetup *pTVar27;
  undefined1 auStackY_1a8 [32];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_178;
  AssertHelper local_170;
  ulong64 local_168;
  AssertionResult local_160;
  AssertionResult local_150;
  AssertionResult local_140;
  AssertionResult local_130;
  AssertionResult local_120;
  AssertionResult local_110;
  AssertionResult local_100;
  AssertionResult local_f0;
  AssertionResult local_e0;
  AssertionResult local_d0;
  AssertionResult local_c0;
  AssertionResult local_b0;
  AssertionResult local_a0;
  AssertionResult local_90;
  _Bxty local_80;
  undefined8 local_70;
  ulonglong uStack_68;
  _Bxty local_60;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_168 = ((longlong)(param_1->setups)._Mypair._Myval2._Mylast -
              (longlong)(param_1->setups)._Mypair._Myval2._Myfirst) / 0xd0;
  testing::internal::EqHelper::Compare<unsigned___int64,unsigned_short,0>
            (&local_160,"result.setups.size()","rltests::twsw::optimized::setupCount",&local_168,
             &rltests::twsw::optimized::setupCount);
  uVar25._Mypair._Myval2 = local_160.message_._Mypair._Myval2;
  if (local_160.success_ == false) {
    pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
    if (local_160.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar22 = "";
    }
    else {
      pcVar22 = (char *)local_160.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_160.message_._Mypair._Myval2 + 0x18)) {
        pcVar22 = *(char **)local_160.message_._Mypair._Myval2;
      }
    }
    pAVar17 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_170,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                         ,0x19,pcVar22);
    testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
    testing::internal::AssertHelper::~AssertHelper(&local_170);
    if (local_178._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar21 = (undefined8 *)
                ((longlong)&(local_178._Myval2)->field_0x0 +
                (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
      (**(code **)*puVar21)(puVar21,1);
    }
    if (local_160.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_160.message_._Mypair._Myval2);
      ::operator_delete((void *)local_160.message_._Mypair._Myval2,0x20);
    }
  }
  else {
    if (local_160.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_160.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
    }
    uVar12 = _UNK_15076add8;
    uVar11 = ___xmm_000000000000000f0000000000000000;
    pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
    lVar18 = (longlong)(param_1->setups)._Mypair._Myval2._Mylast - (longlong)pTVar27;
    local_168 = 0;
    lVar9 = lVar18 >> 0x3f;
    if (lVar18 / 0xd0 + lVar9 != lVar9) {
      do {
        uVar13 = local_168;
        pTVar1 = rltests::twsw::unoptimized::swingTwistAxes._Mypair._Myval2._Myfirst + local_168;
        if (pTVar27[local_168].swingTwistAxis ==
            rltests::twsw::unoptimized::swingTwistAxes._Mypair._Myval2._Myfirst[local_168]) {
          testing::AssertionSuccess(&local_160);
        }
        else {
          pbVar14 = testing::internal::
                    FormatForComparisonFailureMessage<enum_dna::TwistAxis,enum_dna::TwistAxis>
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_80,pTVar1,&pTVar27[local_168].swingTwistAxis);
          pbVar15 = testing::internal::
                    FormatForComparisonFailureMessage<enum_dna::TwistAxis,enum_dna::TwistAxis>
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_60,&pTVar27[uVar13].swingTwistAxis,pTVar1);
          testing::internal::EqFailure
                    (&local_160,"result.setups[si].swingTwistAxis",
                     "rltests::twsw::unoptimized::swingTwistAxes[si]",pbVar15,pbVar14,false);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80);
        }
        uVar25._Mypair._Myval2 = local_160.message_._Mypair._Myval2;
        if (local_160.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_160.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_160.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_160.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_160.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x1b,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_160.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_160.message_._Mypair._Myval2;
          }
LAB_14c588061:
          if (uVar25._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            return;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     uVar25._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
          return;
        }
        if (local_160.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_160.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_178._Myval2 =
             (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)
              rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Mylast -
              (longlong)
              rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Myfirst >> 1);
        local_170.data_ =
             (AssertHelperData *)
             ((longlong)pTVar27[uVar13].swingInputIndices._Mypair._Myval2._Mylast -
              (longlong)pTVar27[uVar13].swingInputIndices._Mypair._Myval2._Myfirst >> 1);
        if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_170.data_
            == local_178._Myval2) {
          testing::AssertionSuccess(&local_90);
        }
        else {
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (ulong64 *)&local_178);
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (ulong64 *)&local_170);
          testing::internal::EqFailure
                    (&local_90,"result.setups[si].swingInputIndices.size()",
                     "rltests::twsw::optimized::swingInputIndices[si].size()",
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     false);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80);
        }
        uVar25._Mypair._Myval2 = local_90.message_._Mypair._Myval2;
        if (local_90.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_90.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_90.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_90.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_90.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x1c,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_90.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_90.message_._Mypair._Myval2;
          }
          goto LAB_14c588061;
        }
        if (local_90.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_90.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        uVar26 = 0;
        if ((longlong)
            rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Mylast -
            (longlong)
            rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Myfirst >> 1 != 0) {
          do {
            puVar2 = rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst[uVar13].
                     _Mypair._Myval2._Myfirst + uVar26;
            puVar3 = (param_1->setups)._Mypair._Myval2._Myfirst[uVar13].swingInputIndices._Mypair.
                     _Myval2._Myfirst + uVar26;
            if (*puVar3 == *puVar2) {
              testing::AssertionSuccess(&local_150);
            }
            else {
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80,puVar2);
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,puVar3);
              testing::internal::EqFailure
                        (&local_150,"result.setups[si].swingInputIndices[i]",
                         "rltests::twsw::optimized::swingInputIndices[si][i]",
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80,false);
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60);
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80);
            }
            uVar25._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
            if (local_150.success_ == false) {
              pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
              if (local_150.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar22 = "";
              }
              else {
                pcVar22 = (char *)local_150.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_150.message_._Mypair._Myval2 + 0x18)) {
                  pcVar22 = *(char **)local_150.message_._Mypair._Myval2;
                }
              }
              pAVar17 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_170,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                                   ,0x1f,pcVar22);
              testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
              testing::internal::AssertHelper::~AssertHelper(&local_170);
              uVar25._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
              if (local_178._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar21 = (undefined8 *)
                          ((longlong)&(local_178._Myval2)->field_0x0 +
                          (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
                (**(code **)*puVar21)(puVar21,1);
                uVar25._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
              }
              goto LAB_14c588061;
            }
            if (local_150.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_150.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 < (ulonglong)
                            ((longlong)
                             rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Mylast -
                             (longlong)
                             rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Myfirst >> 1));
        }
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_170.data_ =
             (AssertHelperData *)
             ((longlong)
              rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Mylast -
              (longlong)
              rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Myfirst >> 2);
        local_178._Myval2 =
             (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)pTVar27[uVar13].swingBlendWeights._Mypair._Myval2._Mylast -
              (longlong)pTVar27[uVar13].swingBlendWeights._Mypair._Myval2._Myfirst >> 2);
        if (local_178._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_170.data_
           ) {
          testing::AssertionSuccess(&local_a0);
        }
        else {
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (ulong64 *)&local_170);
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (ulong64 *)&local_178);
          testing::internal::EqFailure
                    (&local_a0,"result.setups[si].swingBlendWeights.size()",
                     "rltests::twsw::optimized::swingBlendWeights[si].size()",
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     false);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80);
        }
        uVar25._Mypair._Myval2 = local_a0.message_._Mypair._Myval2;
        if (local_a0.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_a0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_a0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_a0.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_a0.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x20,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_a0.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_a0.message_._Mypair._Myval2;
          }
          goto LAB_14c588061;
        }
        if (local_a0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_a0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        uVar26 = 0;
        uVar24 = uVar13;
        if ((longlong)
            rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Mylast -
            (longlong)
            rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Myfirst >> 2 != 0) {
          do {
            pfVar6 = rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst[uVar13].
                     _Mypair._Myval2._Myfirst;
            pfVar4 = pfVar6 + uVar26;
            pfVar7 = (param_1->setups)._Mypair._Myval2._Myfirst[uVar13].swingBlendWeights._Mypair.
                     _Myval2._Myfirst;
            pfVar5 = pfVar7 + uVar26;
            if (pfVar6[uVar26] == pfVar7[uVar26]) {
              testing::AssertionSuccess(&local_140);
            }
            else {
              pbVar14 = testing::internal::FormatForComparisonFailureMessage<float,float>
                                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&local_80,pfVar4,pfVar5);
              pbVar15 = testing::internal::FormatForComparisonFailureMessage<float,float>
                                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&local_60,pfVar5,pfVar4);
              testing::internal::EqFailure
                        (&local_140,"result.setups[si].swingBlendWeights[i]",
                         "rltests::twsw::optimized::swingBlendWeights[si][i]",pbVar15,pbVar14,false)
              ;
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60);
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80);
            }
            uVar25._Mypair._Myval2 = local_140.message_._Mypair._Myval2;
            if (local_140.success_ == false) {
              pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
              if (local_140.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar22 = "";
              }
              else {
                pcVar22 = (char *)local_140.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_140.message_._Mypair._Myval2 + 0x18)) {
                  pcVar22 = *(char **)local_140.message_._Mypair._Myval2;
                }
              }
              pAVar17 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_170,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                                   ,0x23,pcVar22);
              testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
              testing::internal::AssertHelper::~AssertHelper(&local_170);
              uVar25._Mypair._Myval2 = local_140.message_._Mypair._Myval2;
              if (local_178._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar21 = (undefined8 *)
                          ((longlong)&(local_178._Myval2)->field_0x0 +
                          (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
                (**(code **)*puVar21)(puVar21,1);
                uVar25._Mypair._Myval2 = local_140.message_._Mypair._Myval2;
              }
              goto LAB_14c588061;
            }
            if (local_140.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_140.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
            }
            uVar26 = uVar26 + 1;
            uVar24 = local_168;
          } while (uVar26 < (ulonglong)
                            ((longlong)
                             rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Mylast -
                             (longlong)
                             rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Myfirst >> 2));
        }
        pvVar8 = ((rltests::twsw::optimized::swingOutputIndices._Mypair._Myval2._Myfirst)->_Mypair).
                 _Myval2._Myfirst;
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_178._Myval2 =
             (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)pTVar27[uVar13].swingOutputIndices._Mypair._Myval2._Mylast -
              (longlong)pTVar27[uVar13].swingOutputIndices._Mypair._Myval2._Myfirst >> 1);
        local_170.data_ =
             (AssertHelperData *)
             ((longlong)pvVar8[uVar13]._Mypair._Myval2._Mylast -
              (longlong)pvVar8[uVar13]._Mypair._Myval2._Myfirst >> 1);
        if (local_178._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_170.data_
           ) {
          testing::AssertionSuccess(&local_b0);
        }
        else {
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (ulong64 *)&local_170);
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (ulong64 *)&local_178);
          testing::internal::EqFailure
                    (&local_b0,"result.setups[si].swingOutputIndices.size()",
                     "rltests::twsw::optimized::swingOutputIndices[rotationSelectorIndex][si].size()"
                     ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     false);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80);
        }
        uVar25._Mypair._Myval2 = local_b0.message_._Mypair._Myval2;
        if (local_b0.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_b0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_b0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_b0.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_b0.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x25,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_b0.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_b0.message_._Mypair._Myval2;
          }
          goto LAB_14c588061;
        }
        if (local_b0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_b0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        uVar26 = 0;
        pvVar8 = ((rltests::twsw::optimized::swingOutputIndices._Mypair._Myval2._Myfirst)->_Mypair).
                 _Myval2._Myfirst;
        if ((longlong)pvVar8[uVar13]._Mypair._Myval2._Mylast -
            (longlong)pvVar8[uVar13]._Mypair._Myval2._Myfirst >> 1 != 0) {
          do {
            puVar2 = ((rltests::twsw::optimized::swingOutputIndices._Mypair._Myval2._Myfirst)->
                     _Mypair)._Myval2._Myfirst[uVar13]._Mypair._Myval2._Myfirst + uVar26;
            puVar3 = (param_1->setups)._Mypair._Myval2._Myfirst[uVar13].swingOutputIndices._Mypair.
                     _Myval2._Myfirst + uVar26;
            if (*puVar3 == *puVar2) {
              testing::AssertionSuccess(&local_130);
            }
            else {
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,puVar2);
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80,puVar3);
              testing::internal::EqFailure
                        (&local_130,"result.setups[si].swingOutputIndices[i]",
                         "rltests::twsw::optimized::swingOutputIndices[rotationSelectorIndex][si][i]"
                         ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_80,
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,false);
              if (0xf < uStack_68) {
                pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
                uVar23 = uStack_68 + 1;
                pvVar19 = pvVar10;
                if (0xfff < uVar23) {
                  pvVar19 = *(void **)((longlong)pvVar10 + -8);
                  uVar23 = uStack_68 + 0x28;
                  if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
                  goto LAB_14c587966;
                }
                ::operator_delete(pvVar19,uVar23);
              }
              local_80._Buf[0] = '\0';
              local_70 = uVar11;
              uStack_68 = uVar12;
              if (0xf < local_48) {
                uVar23 = local_48 + 1;
                uVar20 = local_60._Ptr;
                if (0xfff < uVar23) {
                  uVar20 = *(undefined8 *)(local_60._Ptr + -8);
                  uVar23 = local_48 + 0x28;
                  if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c587966:
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                ::operator_delete((void *)uVar20,uVar23);
              }
            }
            uVar25._Mypair._Myval2 = local_130.message_._Mypair._Myval2;
            if (local_130.success_ == false) {
              pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
              if (local_130.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar22 = "";
              }
              else {
                pcVar22 = (char *)local_130.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_130.message_._Mypair._Myval2 + 0x18)) {
                  pcVar22 = *(char **)local_130.message_._Mypair._Myval2;
                }
              }
              pAVar17 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_170,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                                   ,0x28,pcVar22);
              testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
              testing::internal::AssertHelper::~AssertHelper(&local_170);
              uVar25._Mypair._Myval2 = local_130.message_._Mypair._Myval2;
              if (local_178._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar21 = (undefined8 *)
                          ((longlong)&(local_178._Myval2)->field_0x0 +
                          (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
                (**(code **)*puVar21)(puVar21,1);
                uVar25._Mypair._Myval2 = local_130.message_._Mypair._Myval2;
              }
              goto LAB_14c588061;
            }
            if (local_130.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_130.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
            }
            uVar26 = uVar26 + 1;
            pvVar8 = ((rltests::twsw::optimized::swingOutputIndices._Mypair._Myval2._Myfirst)->
                     _Mypair)._Myval2._Myfirst;
          } while (uVar26 < (ulonglong)
                            ((longlong)pvVar8[uVar13]._Mypair._Myval2._Mylast -
                             (longlong)pvVar8[uVar13]._Mypair._Myval2._Myfirst >> 1));
        }
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst + uVar13;
        pTVar1 = rltests::twsw::unoptimized::twistTwistAxes._Mypair._Myval2._Myfirst + uVar24;
        if (pTVar27->twistTwistAxis ==
            rltests::twsw::unoptimized::twistTwistAxes._Mypair._Myval2._Myfirst[uVar24]) {
          testing::AssertionSuccess(&local_c0);
        }
        else {
          pbVar14 = testing::internal::
                    FormatForComparisonFailureMessage<enum_dna::TwistAxis,enum_dna::TwistAxis>
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_60,pTVar1,&pTVar27->twistTwistAxis);
          pbVar15 = testing::internal::
                    FormatForComparisonFailureMessage<enum_dna::TwistAxis,enum_dna::TwistAxis>
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_80,&pTVar27->twistTwistAxis,pTVar1);
          testing::internal::EqFailure
                    (&local_c0,"result.setups[si].twistTwistAxis",
                     "rltests::twsw::unoptimized::twistTwistAxes[si]",pbVar15,pbVar14,false);
          if (0xf < uStack_68) {
            pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
            uVar24 = uStack_68 + 1;
            pvVar19 = pvVar10;
            if (0xfff < uVar24) {
              pvVar19 = *(void **)((longlong)pvVar10 + -8);
              uVar24 = uStack_68 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
              goto LAB_14c587a06;
            }
            ::operator_delete(pvVar19,uVar24);
          }
          local_80._Buf[0] = '\0';
          local_70 = uVar11;
          uStack_68 = uVar12;
          if (0xf < local_48) {
            uVar24 = local_48 + 1;
            uVar20 = local_60._Ptr;
            if (0xfff < uVar24) {
              uVar20 = *(undefined8 *)(local_60._Ptr + -8);
              uVar24 = local_48 + 0x28;
              if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c587a06:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar20,uVar24);
          }
        }
        uVar25._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
        if (local_c0.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_c0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_c0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_c0.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_c0.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x2a,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
          }
          goto LAB_14c588061;
        }
        if (local_c0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_c0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_170.data_ =
             (AssertHelperData *)
             ((longlong)
              rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Mylast -
              (longlong)
              rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Myfirst >> 1);
        local_178._Myval2 =
             (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)pTVar27[uVar13].twistInputIndices._Mypair._Myval2._Mylast -
              (longlong)pTVar27[uVar13].twistInputIndices._Mypair._Myval2._Myfirst >> 1);
        if (local_178._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_170.data_
           ) {
          testing::AssertionSuccess(&local_d0);
        }
        else {
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (ulong64 *)&local_170);
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (ulong64 *)&local_178);
          testing::internal::EqFailure
                    (&local_d0,"result.setups[si].twistInputIndices.size()",
                     "rltests::twsw::optimized::twistInputIndices[si].size()",
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     false);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80);
        }
        uVar25._Mypair._Myval2 = local_d0.message_._Mypair._Myval2;
        if (local_d0.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_d0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_d0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_d0.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_d0.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x2b,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_d0.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_d0.message_._Mypair._Myval2;
          }
          goto LAB_14c588061;
        }
        if (local_d0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_d0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        uVar26 = 0;
        if ((longlong)
            rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Mylast -
            (longlong)
            rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Myfirst >> 1 != 0) {
          do {
            puVar2 = rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst[uVar13].
                     _Mypair._Myval2._Myfirst + uVar26;
            puVar3 = (param_1->setups)._Mypair._Myval2._Myfirst[uVar13].twistInputIndices._Mypair.
                     _Myval2._Myfirst + uVar26;
            if (*puVar3 == *puVar2) {
              testing::AssertionSuccess(&local_120);
            }
            else {
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,puVar2);
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80,puVar3);
              testing::internal::EqFailure
                        (&local_120,"result.setups[si].twistInputIndices[i]",
                         "rltests::twsw::optimized::twistInputIndices[si][i]",
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80,
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,false);
              if (0xf < uStack_68) {
                pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
                uVar24 = uStack_68 + 1;
                pvVar19 = pvVar10;
                if (0xfff < uVar24) {
                  pvVar19 = *(void **)((longlong)pvVar10 + -8);
                  uVar24 = uStack_68 + 0x28;
                  if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
                  goto LAB_14c587a20;
                }
                ::operator_delete(pvVar19,uVar24);
              }
              local_80._Buf[0] = '\0';
              local_70 = uVar11;
              uStack_68 = uVar12;
              if (0xf < local_48) {
                uVar24 = local_48 + 1;
                uVar20 = local_60._Ptr;
                if (0xfff < uVar24) {
                  uVar20 = *(undefined8 *)(local_60._Ptr + -8);
                  uVar24 = local_48 + 0x28;
                  if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c587a20:
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                ::operator_delete((void *)uVar20,uVar24);
              }
            }
            uVar25._Mypair._Myval2 = local_120.message_._Mypair._Myval2;
            if (local_120.success_ == false) {
              pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
              if (local_120.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar22 = "";
              }
              else {
                pcVar22 = (char *)local_120.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_120.message_._Mypair._Myval2 + 0x18)) {
                  pcVar22 = *(char **)local_120.message_._Mypair._Myval2;
                }
              }
              pAVar17 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_170,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                                   ,0x2e,pcVar22);
              testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
              testing::internal::AssertHelper::~AssertHelper(&local_170);
              uVar25._Mypair._Myval2 = local_120.message_._Mypair._Myval2;
              if (local_178._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar21 = (undefined8 *)
                          ((longlong)&(local_178._Myval2)->field_0x0 +
                          (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
                (**(code **)*puVar21)(puVar21,1);
                uVar25._Mypair._Myval2 = local_120.message_._Mypair._Myval2;
              }
              goto LAB_14c588061;
            }
            if (local_120.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_120.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 < (ulonglong)
                            ((longlong)
                             rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Mylast -
                             (longlong)
                             rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Myfirst >> 1));
        }
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_170.data_ =
             (AssertHelperData *)
             ((longlong)
              rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Mylast -
              (longlong)
              rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Myfirst >> 2);
        local_178._Myval2 =
             (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)pTVar27[uVar13].twistBlendWeights._Mypair._Myval2._Mylast -
              (longlong)pTVar27[uVar13].twistBlendWeights._Mypair._Myval2._Myfirst >> 2);
        if (local_178._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_170.data_
           ) {
          testing::AssertionSuccess(&local_e0);
        }
        else {
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (ulong64 *)&local_170);
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (ulong64 *)&local_178);
          testing::internal::EqFailure
                    (&local_e0,"result.setups[si].twistBlendWeights.size()",
                     "rltests::twsw::optimized::twistBlendWeights[si].size()",
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     false);
          if (0xf < uStack_68) {
            pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
            uVar24 = uStack_68 + 1;
            pvVar19 = pvVar10;
            if (0xfff < uVar24) {
              pvVar19 = *(void **)((longlong)pvVar10 + -8);
              uVar24 = uStack_68 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
              goto LAB_14c587ac0;
            }
            ::operator_delete(pvVar19,uVar24);
          }
          local_80._Buf[0] = '\0';
          local_70 = uVar11;
          uStack_68 = uVar12;
          if (0xf < local_48) {
            uVar24 = local_48 + 1;
            uVar20 = local_60._Ptr;
            if (0xfff < uVar24) {
              uVar20 = *(undefined8 *)(local_60._Ptr + -8);
              uVar24 = local_48 + 0x28;
              if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c587ac0:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar20,uVar24);
          }
        }
        uVar25._Mypair._Myval2 = local_e0.message_._Mypair._Myval2;
        if (local_e0.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_e0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_e0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_e0.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_e0.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x2f,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_e0.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_e0.message_._Mypair._Myval2;
          }
          goto LAB_14c588061;
        }
        if (local_e0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_e0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        uVar26 = 0;
        if ((longlong)
            rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Mylast -
            (longlong)
            rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Myfirst >> 2 != 0) {
          do {
            pfVar6 = rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst[uVar13].
                     _Mypair._Myval2._Myfirst;
            pfVar4 = pfVar6 + uVar26;
            pfVar7 = (param_1->setups)._Mypair._Myval2._Myfirst[uVar13].twistBlendWeights._Mypair.
                     _Myval2._Myfirst;
            pfVar5 = pfVar7 + uVar26;
            if (pfVar6[uVar26] == pfVar7[uVar26]) {
              testing::AssertionSuccess(&local_110);
            }
            else {
              pbVar14 = testing::internal::FormatForComparisonFailureMessage<float,float>
                                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&local_60,pfVar4,pfVar5);
              pbVar15 = testing::internal::FormatForComparisonFailureMessage<float,float>
                                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&local_80,pfVar5,pfVar4);
              testing::internal::EqFailure
                        (&local_110,"result.setups[si].twistBlendWeights[i]",
                         "rltests::twsw::optimized::twistBlendWeights[si][i]",pbVar15,pbVar14,false)
              ;
              if (0xf < uStack_68) {
                pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
                uVar24 = uStack_68 + 1;
                pvVar19 = pvVar10;
                if (0xfff < uVar24) {
                  pvVar19 = *(void **)((longlong)pvVar10 + -8);
                  uVar24 = uStack_68 + 0x28;
                  if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
                  goto LAB_14c587ada;
                }
                ::operator_delete(pvVar19,uVar24);
              }
              local_80._Buf[0] = '\0';
              local_70 = uVar11;
              uStack_68 = uVar12;
              if (0xf < local_48) {
                uVar24 = local_48 + 1;
                uVar20 = local_60._Ptr;
                if (0xfff < uVar24) {
                  uVar20 = *(undefined8 *)(local_60._Ptr + -8);
                  uVar24 = local_48 + 0x28;
                  if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c587ada:
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                ::operator_delete((void *)uVar20,uVar24);
              }
            }
            uVar25._Mypair._Myval2 = local_110.message_._Mypair._Myval2;
            if (local_110.success_ == false) {
              pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
              if (local_110.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar22 = "";
              }
              else {
                pcVar22 = (char *)local_110.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_110.message_._Mypair._Myval2 + 0x18)) {
                  pcVar22 = *(char **)local_110.message_._Mypair._Myval2;
                }
              }
              pAVar17 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_170,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                                   ,0x32,pcVar22);
              testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
              testing::internal::AssertHelper::~AssertHelper(&local_170);
              uVar25._Mypair._Myval2 = local_110.message_._Mypair._Myval2;
              if (local_178._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar21 = (undefined8 *)
                          ((longlong)&(local_178._Myval2)->field_0x0 +
                          (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
                (**(code **)*puVar21)(puVar21,1);
                uVar25._Mypair._Myval2 = local_110.message_._Mypair._Myval2;
              }
              goto LAB_14c588061;
            }
            if (local_110.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_110.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 < (ulonglong)
                            ((longlong)
                             rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Mylast -
                             (longlong)
                             rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Myfirst >> 2));
        }
        pvVar8 = ((rltests::twsw::optimized::twistOutputIndices._Mypair._Myval2._Myfirst)->_Mypair).
                 _Myval2._Myfirst;
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_178._Myval2 =
             (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)pTVar27[uVar13].twistOutputIndices._Mypair._Myval2._Mylast -
              (longlong)pTVar27[uVar13].twistOutputIndices._Mypair._Myval2._Myfirst >> 1);
        local_170.data_ =
             (AssertHelperData *)
             ((longlong)pvVar8[uVar13]._Mypair._Myval2._Mylast -
              (longlong)pvVar8[uVar13]._Mypair._Myval2._Myfirst >> 1);
        if (local_178._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_170.data_
           ) {
          testing::AssertionSuccess(&local_f0);
        }
        else {
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (ulong64 *)&local_170);
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (ulong64 *)&local_178);
          testing::internal::EqFailure
                    (&local_f0,"result.setups[si].twistOutputIndices.size()",
                     "rltests::twsw::optimized::twistOutputIndices[rotationSelectorIndex][si].size()"
                     ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     false);
          if (0xf < uStack_68) {
            pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
            uVar24 = uStack_68 + 1;
            pvVar19 = pvVar10;
            if (0xfff < uVar24) {
              pvVar19 = *(void **)((longlong)pvVar10 + -8);
              uVar24 = uStack_68 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
              goto LAB_14c587b7a;
            }
            ::operator_delete(pvVar19,uVar24);
          }
          local_80._Buf[0] = '\0';
          local_70 = uVar11;
          uStack_68 = uVar12;
          if (0xf < local_48) {
            uVar24 = local_48 + 1;
            uVar20 = local_60._Ptr;
            if (0xfff < uVar24) {
              uVar20 = *(undefined8 *)(local_60._Ptr + -8);
              uVar24 = local_48 + 0x28;
              if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c587b7a:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar20,uVar24);
          }
        }
        uVar25._Mypair._Myval2 = local_f0.message_._Mypair._Myval2;
        if (local_f0.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_f0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_f0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_f0.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_f0.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x34,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_f0.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_f0.message_._Mypair._Myval2;
          }
          goto LAB_14c588061;
        }
        if (local_f0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_f0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        uVar26 = 0;
        pvVar8 = ((rltests::twsw::optimized::twistOutputIndices._Mypair._Myval2._Myfirst)->_Mypair).
                 _Myval2._Myfirst;
        if ((longlong)pvVar8[uVar13]._Mypair._Myval2._Mylast -
            (longlong)pvVar8[uVar13]._Mypair._Myval2._Myfirst >> 1 != 0) {
          do {
            puVar2 = ((rltests::twsw::optimized::twistOutputIndices._Mypair._Myval2._Myfirst)->
                     _Mypair)._Myval2._Myfirst[uVar13]._Mypair._Myval2._Myfirst + uVar26;
            puVar3 = (param_1->setups)._Mypair._Myval2._Myfirst[uVar13].twistOutputIndices._Mypair.
                     _Myval2._Myfirst + uVar26;
            if (*puVar3 == *puVar2) {
              testing::AssertionSuccess(&local_100);
            }
            else {
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,puVar2);
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80,puVar3);
              testing::internal::EqFailure
                        (&local_100,"result.setups[si].twistOutputIndices[i]",
                         "rltests::twsw::optimized::twistOutputIndices[rotationSelectorIndex][si][i]"
                         ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_80,
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,false);
              if (0xf < uStack_68) {
                pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
                uVar24 = uStack_68 + 1;
                pvVar19 = pvVar10;
                if (0xfff < uVar24) {
                  pvVar19 = *(void **)((longlong)pvVar10 + -8);
                  uVar24 = uStack_68 + 0x28;
                  if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
                  goto LAB_14c587b94;
                }
                ::operator_delete(pvVar19,uVar24);
              }
              local_80._Buf[0] = '\0';
              local_70 = uVar11;
              uStack_68 = uVar12;
              if (0xf < local_48) {
                uVar24 = local_48 + 1;
                uVar20 = local_60._Ptr;
                if (0xfff < uVar24) {
                  uVar20 = *(undefined8 *)(local_60._Ptr + -8);
                  uVar24 = local_48 + 0x28;
                  if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c587b94:
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                ::operator_delete((void *)uVar20,uVar24);
              }
            }
            uVar25._Mypair._Myval2 = local_100.message_._Mypair._Myval2;
            if (local_100.success_ == false) {
              pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
              if (local_100.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar22 = "";
              }
              else {
                pcVar22 = (char *)local_100.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_100.message_._Mypair._Myval2 + 0x18)) {
                  pcVar22 = *(char **)local_100.message_._Mypair._Myval2;
                }
              }
              pAVar17 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_170,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                                   ,0x37,pcVar22);
              testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
              testing::internal::AssertHelper::~AssertHelper(&local_170);
              uVar25._Mypair._Myval2 = local_100.message_._Mypair._Myval2;
              if (local_178._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar21 = (undefined8 *)
                          ((longlong)&(local_178._Myval2)->field_0x0 +
                          (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
                (**(code **)*puVar21)(puVar21,1);
                uVar25._Mypair._Myval2 = local_100.message_._Mypair._Myval2;
              }
              goto LAB_14c588061;
            }
            if (local_100.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_100.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
            }
            uVar26 = uVar26 + 1;
            pvVar8 = ((rltests::twsw::optimized::twistOutputIndices._Mypair._Myval2._Myfirst)->
                     _Mypair)._Myval2._Myfirst;
          } while (uVar26 < (ulonglong)
                            ((longlong)pvVar8[uVar13]._Mypair._Myval2._Mylast -
                             (longlong)pvVar8[uVar13]._Mypair._Myval2._Myfirst >> 1));
        }
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_168 = local_168 + 1;
      } while (local_168 <
               (ulonglong)
               (((longlong)(param_1->setups)._Mypair._Myval2._Mylast - (longlong)pTVar27) / 0xd0));
    }
  }
  return;
}

// assertRawDataEqual @ 14c588130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
::Accessor::assertRawDataEqual
          (TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>
           *param_1)

{
  TwistAxis *pTVar1;
  ushort *puVar2;
  ushort *puVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar8;
  longlong lVar9;
  void *pvVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulong64 uVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar15;
  Message *pMVar16;
  AssertHelper *pAVar17;
  longlong lVar18;
  void *pvVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  char *pcVar22;
  ulong64 uVar23;
  ulong64 uVar24;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar25;
  ulonglong uVar26;
  TwistSwingSetup *pTVar27;
  undefined1 auStackY_1a8 [32];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_178;
  AssertHelper local_170;
  ulong64 local_168;
  AssertionResult local_160;
  AssertionResult local_150;
  AssertionResult local_140;
  AssertionResult local_130;
  AssertionResult local_120;
  AssertionResult local_110;
  AssertionResult local_100;
  AssertionResult local_f0;
  AssertionResult local_e0;
  AssertionResult local_d0;
  AssertionResult local_c0;
  AssertionResult local_b0;
  AssertionResult local_a0;
  AssertionResult local_90;
  _Bxty local_80;
  undefined8 local_70;
  ulonglong uStack_68;
  _Bxty local_60;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_168 = ((longlong)(param_1->setups)._Mypair._Myval2._Mylast -
              (longlong)(param_1->setups)._Mypair._Myval2._Myfirst) / 0xd0;
  testing::internal::EqHelper::Compare<unsigned___int64,unsigned_short,0>
            (&local_160,"result.setups.size()","rltests::twsw::optimized::setupCount",&local_168,
             &rltests::twsw::optimized::setupCount);
  uVar25._Mypair._Myval2 = local_160.message_._Mypair._Myval2;
  if (local_160.success_ == false) {
    pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
    if (local_160.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar22 = "";
    }
    else {
      pcVar22 = (char *)local_160.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_160.message_._Mypair._Myval2 + 0x18)) {
        pcVar22 = *(char **)local_160.message_._Mypair._Myval2;
      }
    }
    pAVar17 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_170,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                         ,0x19,pcVar22);
    testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
    testing::internal::AssertHelper::~AssertHelper(&local_170);
    if (local_178._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar21 = (undefined8 *)
                ((longlong)&(local_178._Myval2)->field_0x0 +
                (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
      (**(code **)*puVar21)(puVar21,1);
    }
    if (local_160.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_160.message_._Mypair._Myval2);
      ::operator_delete((void *)local_160.message_._Mypair._Myval2,0x20);
    }
  }
  else {
    if (local_160.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_160.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
    }
    uVar12 = _UNK_15076add8;
    uVar11 = ___xmm_000000000000000f0000000000000000;
    pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
    lVar18 = (longlong)(param_1->setups)._Mypair._Myval2._Mylast - (longlong)pTVar27;
    local_168 = 0;
    lVar9 = lVar18 >> 0x3f;
    if (lVar18 / 0xd0 + lVar9 != lVar9) {
      do {
        uVar13 = local_168;
        pTVar1 = rltests::twsw::unoptimized::swingTwistAxes._Mypair._Myval2._Myfirst + local_168;
        if (pTVar27[local_168].swingTwistAxis ==
            rltests::twsw::unoptimized::swingTwistAxes._Mypair._Myval2._Myfirst[local_168]) {
          testing::AssertionSuccess(&local_160);
        }
        else {
          pbVar14 = testing::internal::
                    FormatForComparisonFailureMessage<enum_dna::TwistAxis,enum_dna::TwistAxis>
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_80,pTVar1,&pTVar27[local_168].swingTwistAxis);
          pbVar15 = testing::internal::
                    FormatForComparisonFailureMessage<enum_dna::TwistAxis,enum_dna::TwistAxis>
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_60,&pTVar27[uVar13].swingTwistAxis,pTVar1);
          testing::internal::EqFailure
                    (&local_160,"result.setups[si].swingTwistAxis",
                     "rltests::twsw::unoptimized::swingTwistAxes[si]",pbVar15,pbVar14,false);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80);
        }
        uVar25._Mypair._Myval2 = local_160.message_._Mypair._Myval2;
        if (local_160.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_160.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_160.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_160.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_160.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x1b,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_160.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_160.message_._Mypair._Myval2;
          }
LAB_14c589951:
          if (uVar25._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            return;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     uVar25._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
          return;
        }
        if (local_160.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_160.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_178._Myval2 =
             (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)
              rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Mylast -
              (longlong)
              rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Myfirst >> 1);
        local_170.data_ =
             (AssertHelperData *)
             ((longlong)pTVar27[uVar13].swingInputIndices._Mypair._Myval2._Mylast -
              (longlong)pTVar27[uVar13].swingInputIndices._Mypair._Myval2._Myfirst >> 1);
        if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_170.data_
            == local_178._Myval2) {
          testing::AssertionSuccess(&local_90);
        }
        else {
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (ulong64 *)&local_178);
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (ulong64 *)&local_170);
          testing::internal::EqFailure
                    (&local_90,"result.setups[si].swingInputIndices.size()",
                     "rltests::twsw::optimized::swingInputIndices[si].size()",
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     false);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80);
        }
        uVar25._Mypair._Myval2 = local_90.message_._Mypair._Myval2;
        if (local_90.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_90.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_90.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_90.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_90.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x1c,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_90.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_90.message_._Mypair._Myval2;
          }
          goto LAB_14c589951;
        }
        if (local_90.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_90.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        uVar26 = 0;
        if ((longlong)
            rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Mylast -
            (longlong)
            rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Myfirst >> 1 != 0) {
          do {
            puVar2 = rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst[uVar13].
                     _Mypair._Myval2._Myfirst + uVar26;
            puVar3 = (param_1->setups)._Mypair._Myval2._Myfirst[uVar13].swingInputIndices._Mypair.
                     _Myval2._Myfirst + uVar26;
            if (*puVar3 == *puVar2) {
              testing::AssertionSuccess(&local_150);
            }
            else {
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80,puVar2);
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,puVar3);
              testing::internal::EqFailure
                        (&local_150,"result.setups[si].swingInputIndices[i]",
                         "rltests::twsw::optimized::swingInputIndices[si][i]",
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80,false);
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60);
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80);
            }
            uVar25._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
            if (local_150.success_ == false) {
              pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
              if (local_150.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar22 = "";
              }
              else {
                pcVar22 = (char *)local_150.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_150.message_._Mypair._Myval2 + 0x18)) {
                  pcVar22 = *(char **)local_150.message_._Mypair._Myval2;
                }
              }
              pAVar17 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_170,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                                   ,0x1f,pcVar22);
              testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
              testing::internal::AssertHelper::~AssertHelper(&local_170);
              uVar25._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
              if (local_178._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar21 = (undefined8 *)
                          ((longlong)&(local_178._Myval2)->field_0x0 +
                          (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
                (**(code **)*puVar21)(puVar21,1);
                uVar25._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
              }
              goto LAB_14c589951;
            }
            if (local_150.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_150.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 < (ulonglong)
                            ((longlong)
                             rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Mylast -
                             (longlong)
                             rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Myfirst >> 1));
        }
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_170.data_ =
             (AssertHelperData *)
             ((longlong)
              rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Mylast -
              (longlong)
              rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Myfirst >> 2);
        local_178._Myval2 =
             (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)pTVar27[uVar13].swingBlendWeights._Mypair._Myval2._Mylast -
              (longlong)pTVar27[uVar13].swingBlendWeights._Mypair._Myval2._Myfirst >> 2);
        if (local_178._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_170.data_
           ) {
          testing::AssertionSuccess(&local_a0);
        }
        else {
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (ulong64 *)&local_170);
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (ulong64 *)&local_178);
          testing::internal::EqFailure
                    (&local_a0,"result.setups[si].swingBlendWeights.size()",
                     "rltests::twsw::optimized::swingBlendWeights[si].size()",
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     false);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80);
        }
        uVar25._Mypair._Myval2 = local_a0.message_._Mypair._Myval2;
        if (local_a0.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_a0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_a0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_a0.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_a0.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x20,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_a0.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_a0.message_._Mypair._Myval2;
          }
          goto LAB_14c589951;
        }
        if (local_a0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_a0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        uVar26 = 0;
        uVar24 = uVar13;
        if ((longlong)
            rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Mylast -
            (longlong)
            rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Myfirst >> 2 != 0) {
          do {
            pfVar6 = rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst[uVar13].
                     _Mypair._Myval2._Myfirst;
            pfVar4 = pfVar6 + uVar26;
            pfVar7 = (param_1->setups)._Mypair._Myval2._Myfirst[uVar13].swingBlendWeights._Mypair.
                     _Myval2._Myfirst;
            pfVar5 = pfVar7 + uVar26;
            if (pfVar6[uVar26] == pfVar7[uVar26]) {
              testing::AssertionSuccess(&local_140);
            }
            else {
              pbVar14 = testing::internal::FormatForComparisonFailureMessage<float,float>
                                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&local_80,pfVar4,pfVar5);
              pbVar15 = testing::internal::FormatForComparisonFailureMessage<float,float>
                                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&local_60,pfVar5,pfVar4);
              testing::internal::EqFailure
                        (&local_140,"result.setups[si].swingBlendWeights[i]",
                         "rltests::twsw::optimized::swingBlendWeights[si][i]",pbVar15,pbVar14,false)
              ;
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60);
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80);
            }
            uVar25._Mypair._Myval2 = local_140.message_._Mypair._Myval2;
            if (local_140.success_ == false) {
              pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
              if (local_140.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar22 = "";
              }
              else {
                pcVar22 = (char *)local_140.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_140.message_._Mypair._Myval2 + 0x18)) {
                  pcVar22 = *(char **)local_140.message_._Mypair._Myval2;
                }
              }
              pAVar17 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_170,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                                   ,0x23,pcVar22);
              testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
              testing::internal::AssertHelper::~AssertHelper(&local_170);
              uVar25._Mypair._Myval2 = local_140.message_._Mypair._Myval2;
              if (local_178._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar21 = (undefined8 *)
                          ((longlong)&(local_178._Myval2)->field_0x0 +
                          (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
                (**(code **)*puVar21)(puVar21,1);
                uVar25._Mypair._Myval2 = local_140.message_._Mypair._Myval2;
              }
              goto LAB_14c589951;
            }
            if (local_140.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_140.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
            }
            uVar26 = uVar26 + 1;
            uVar24 = local_168;
          } while (uVar26 < (ulonglong)
                            ((longlong)
                             rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Mylast -
                             (longlong)
                             rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Myfirst >> 2));
        }
        pvVar8 = rltests::twsw::optimized::swingOutputIndices._Mypair._Myval2._Myfirst[1]._Mypair.
                 _Myval2._Myfirst;
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_178._Myval2 =
             (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)pTVar27[uVar13].swingOutputIndices._Mypair._Myval2._Mylast -
              (longlong)pTVar27[uVar13].swingOutputIndices._Mypair._Myval2._Myfirst >> 1);
        local_170.data_ =
             (AssertHelperData *)
             ((longlong)pvVar8[uVar13]._Mypair._Myval2._Mylast -
              (longlong)pvVar8[uVar13]._Mypair._Myval2._Myfirst >> 1);
        if (local_178._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_170.data_
           ) {
          testing::AssertionSuccess(&local_b0);
        }
        else {
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (ulong64 *)&local_170);
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (ulong64 *)&local_178);
          testing::internal::EqFailure
                    (&local_b0,"result.setups[si].swingOutputIndices.size()",
                     "rltests::twsw::optimized::swingOutputIndices[rotationSelectorIndex][si].size()"
                     ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     false);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80);
        }
        uVar25._Mypair._Myval2 = local_b0.message_._Mypair._Myval2;
        if (local_b0.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_b0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_b0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_b0.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_b0.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x25,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_b0.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_b0.message_._Mypair._Myval2;
          }
          goto LAB_14c589951;
        }
        if (local_b0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_b0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        uVar26 = 0;
        pvVar8 = rltests::twsw::optimized::swingOutputIndices._Mypair._Myval2._Myfirst[1]._Mypair.
                 _Myval2._Myfirst;
        if ((longlong)pvVar8[uVar13]._Mypair._Myval2._Mylast -
            (longlong)pvVar8[uVar13]._Mypair._Myval2._Myfirst >> 1 != 0) {
          do {
            puVar2 = rltests::twsw::optimized::swingOutputIndices._Mypair._Myval2._Myfirst[1].
                     _Mypair._Myval2._Myfirst[uVar13]._Mypair._Myval2._Myfirst + uVar26;
            puVar3 = (param_1->setups)._Mypair._Myval2._Myfirst[uVar13].swingOutputIndices._Mypair.
                     _Myval2._Myfirst + uVar26;
            if (*puVar3 == *puVar2) {
              testing::AssertionSuccess(&local_130);
            }
            else {
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,puVar2);
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80,puVar3);
              testing::internal::EqFailure
                        (&local_130,"result.setups[si].swingOutputIndices[i]",
                         "rltests::twsw::optimized::swingOutputIndices[rotationSelectorIndex][si][i]"
                         ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_80,
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,false);
              if (0xf < uStack_68) {
                pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
                uVar23 = uStack_68 + 1;
                pvVar19 = pvVar10;
                if (0xfff < uVar23) {
                  pvVar19 = *(void **)((longlong)pvVar10 + -8);
                  uVar23 = uStack_68 + 0x28;
                  if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
                  goto LAB_14c589256;
                }
                ::operator_delete(pvVar19,uVar23);
              }
              local_80._Buf[0] = '\0';
              local_70 = uVar11;
              uStack_68 = uVar12;
              if (0xf < local_48) {
                uVar23 = local_48 + 1;
                uVar20 = local_60._Ptr;
                if (0xfff < uVar23) {
                  uVar20 = *(undefined8 *)(local_60._Ptr + -8);
                  uVar23 = local_48 + 0x28;
                  if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c589256:
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                ::operator_delete((void *)uVar20,uVar23);
              }
            }
            uVar25._Mypair._Myval2 = local_130.message_._Mypair._Myval2;
            if (local_130.success_ == false) {
              pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
              if (local_130.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar22 = "";
              }
              else {
                pcVar22 = (char *)local_130.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_130.message_._Mypair._Myval2 + 0x18)) {
                  pcVar22 = *(char **)local_130.message_._Mypair._Myval2;
                }
              }
              pAVar17 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_170,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                                   ,0x28,pcVar22);
              testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
              testing::internal::AssertHelper::~AssertHelper(&local_170);
              uVar25._Mypair._Myval2 = local_130.message_._Mypair._Myval2;
              if (local_178._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar21 = (undefined8 *)
                          ((longlong)&(local_178._Myval2)->field_0x0 +
                          (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
                (**(code **)*puVar21)(puVar21,1);
                uVar25._Mypair._Myval2 = local_130.message_._Mypair._Myval2;
              }
              goto LAB_14c589951;
            }
            if (local_130.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_130.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
            }
            uVar26 = uVar26 + 1;
            pvVar8 = rltests::twsw::optimized::swingOutputIndices._Mypair._Myval2._Myfirst[1].
                     _Mypair._Myval2._Myfirst;
          } while (uVar26 < (ulonglong)
                            ((longlong)pvVar8[uVar13]._Mypair._Myval2._Mylast -
                             (longlong)pvVar8[uVar13]._Mypair._Myval2._Myfirst >> 1));
        }
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst + uVar13;
        pTVar1 = rltests::twsw::unoptimized::twistTwistAxes._Mypair._Myval2._Myfirst + uVar24;
        if (pTVar27->twistTwistAxis ==
            rltests::twsw::unoptimized::twistTwistAxes._Mypair._Myval2._Myfirst[uVar24]) {
          testing::AssertionSuccess(&local_c0);
        }
        else {
          pbVar14 = testing::internal::
                    FormatForComparisonFailureMessage<enum_dna::TwistAxis,enum_dna::TwistAxis>
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_60,pTVar1,&pTVar27->twistTwistAxis);
          pbVar15 = testing::internal::
                    FormatForComparisonFailureMessage<enum_dna::TwistAxis,enum_dna::TwistAxis>
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_80,&pTVar27->twistTwistAxis,pTVar1);
          testing::internal::EqFailure
                    (&local_c0,"result.setups[si].twistTwistAxis",
                     "rltests::twsw::unoptimized::twistTwistAxes[si]",pbVar15,pbVar14,false);
          if (0xf < uStack_68) {
            pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
            uVar24 = uStack_68 + 1;
            pvVar19 = pvVar10;
            if (0xfff < uVar24) {
              pvVar19 = *(void **)((longlong)pvVar10 + -8);
              uVar24 = uStack_68 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
              goto LAB_14c5892f6;
            }
            ::operator_delete(pvVar19,uVar24);
          }
          local_80._Buf[0] = '\0';
          local_70 = uVar11;
          uStack_68 = uVar12;
          if (0xf < local_48) {
            uVar24 = local_48 + 1;
            uVar20 = local_60._Ptr;
            if (0xfff < uVar24) {
              uVar20 = *(undefined8 *)(local_60._Ptr + -8);
              uVar24 = local_48 + 0x28;
              if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c5892f6:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar20,uVar24);
          }
        }
        uVar25._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
        if (local_c0.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_c0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_c0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_c0.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_c0.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x2a,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
          }
          goto LAB_14c589951;
        }
        if (local_c0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_c0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_170.data_ =
             (AssertHelperData *)
             ((longlong)
              rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Mylast -
              (longlong)
              rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Myfirst >> 1);
        local_178._Myval2 =
             (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)pTVar27[uVar13].twistInputIndices._Mypair._Myval2._Mylast -
              (longlong)pTVar27[uVar13].twistInputIndices._Mypair._Myval2._Myfirst >> 1);
        if (local_178._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_170.data_
           ) {
          testing::AssertionSuccess(&local_d0);
        }
        else {
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (ulong64 *)&local_170);
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (ulong64 *)&local_178);
          testing::internal::EqFailure
                    (&local_d0,"result.setups[si].twistInputIndices.size()",
                     "rltests::twsw::optimized::twistInputIndices[si].size()",
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     false);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80);
        }
        uVar25._Mypair._Myval2 = local_d0.message_._Mypair._Myval2;
        if (local_d0.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_d0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_d0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_d0.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_d0.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x2b,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_d0.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_d0.message_._Mypair._Myval2;
          }
          goto LAB_14c589951;
        }
        if (local_d0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_d0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        uVar26 = 0;
        if ((longlong)
            rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Mylast -
            (longlong)
            rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Myfirst >> 1 != 0) {
          do {
            puVar2 = rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst[uVar13].
                     _Mypair._Myval2._Myfirst + uVar26;
            puVar3 = (param_1->setups)._Mypair._Myval2._Myfirst[uVar13].twistInputIndices._Mypair.
                     _Myval2._Myfirst + uVar26;
            if (*puVar3 == *puVar2) {
              testing::AssertionSuccess(&local_120);
            }
            else {
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,puVar2);
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80,puVar3);
              testing::internal::EqFailure
                        (&local_120,"result.setups[si].twistInputIndices[i]",
                         "rltests::twsw::optimized::twistInputIndices[si][i]",
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80,
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,false);
              if (0xf < uStack_68) {
                pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
                uVar24 = uStack_68 + 1;
                pvVar19 = pvVar10;
                if (0xfff < uVar24) {
                  pvVar19 = *(void **)((longlong)pvVar10 + -8);
                  uVar24 = uStack_68 + 0x28;
                  if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
                  goto LAB_14c589310;
                }
                ::operator_delete(pvVar19,uVar24);
              }
              local_80._Buf[0] = '\0';
              local_70 = uVar11;
              uStack_68 = uVar12;
              if (0xf < local_48) {
                uVar24 = local_48 + 1;
                uVar20 = local_60._Ptr;
                if (0xfff < uVar24) {
                  uVar20 = *(undefined8 *)(local_60._Ptr + -8);
                  uVar24 = local_48 + 0x28;
                  if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c589310:
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                ::operator_delete((void *)uVar20,uVar24);
              }
            }
            uVar25._Mypair._Myval2 = local_120.message_._Mypair._Myval2;
            if (local_120.success_ == false) {
              pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
              if (local_120.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar22 = "";
              }
              else {
                pcVar22 = (char *)local_120.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_120.message_._Mypair._Myval2 + 0x18)) {
                  pcVar22 = *(char **)local_120.message_._Mypair._Myval2;
                }
              }
              pAVar17 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_170,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                                   ,0x2e,pcVar22);
              testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
              testing::internal::AssertHelper::~AssertHelper(&local_170);
              uVar25._Mypair._Myval2 = local_120.message_._Mypair._Myval2;
              if (local_178._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar21 = (undefined8 *)
                          ((longlong)&(local_178._Myval2)->field_0x0 +
                          (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
                (**(code **)*puVar21)(puVar21,1);
                uVar25._Mypair._Myval2 = local_120.message_._Mypair._Myval2;
              }
              goto LAB_14c589951;
            }
            if (local_120.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_120.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 < (ulonglong)
                            ((longlong)
                             rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Mylast -
                             (longlong)
                             rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Myfirst >> 1));
        }
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_170.data_ =
             (AssertHelperData *)
             ((longlong)
              rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Mylast -
              (longlong)
              rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Myfirst >> 2);
        local_178._Myval2 =
             (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)pTVar27[uVar13].twistBlendWeights._Mypair._Myval2._Mylast -
              (longlong)pTVar27[uVar13].twistBlendWeights._Mypair._Myval2._Myfirst >> 2);
        if (local_178._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_170.data_
           ) {
          testing::AssertionSuccess(&local_e0);
        }
        else {
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (ulong64 *)&local_170);
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (ulong64 *)&local_178);
          testing::internal::EqFailure
                    (&local_e0,"result.setups[si].twistBlendWeights.size()",
                     "rltests::twsw::optimized::twistBlendWeights[si].size()",
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     false);
          if (0xf < uStack_68) {
            pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
            uVar24 = uStack_68 + 1;
            pvVar19 = pvVar10;
            if (0xfff < uVar24) {
              pvVar19 = *(void **)((longlong)pvVar10 + -8);
              uVar24 = uStack_68 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
              goto LAB_14c5893b0;
            }
            ::operator_delete(pvVar19,uVar24);
          }
          local_80._Buf[0] = '\0';
          local_70 = uVar11;
          uStack_68 = uVar12;
          if (0xf < local_48) {
            uVar24 = local_48 + 1;
            uVar20 = local_60._Ptr;
            if (0xfff < uVar24) {
              uVar20 = *(undefined8 *)(local_60._Ptr + -8);
              uVar24 = local_48 + 0x28;
              if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c5893b0:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar20,uVar24);
          }
        }
        uVar25._Mypair._Myval2 = local_e0.message_._Mypair._Myval2;
        if (local_e0.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_e0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_e0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_e0.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_e0.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x2f,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_e0.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_e0.message_._Mypair._Myval2;
          }
          goto LAB_14c589951;
        }
        if (local_e0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_e0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        uVar26 = 0;
        if ((longlong)
            rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Mylast -
            (longlong)
            rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Myfirst >> 2 != 0) {
          do {
            pfVar6 = rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst[uVar13].
                     _Mypair._Myval2._Myfirst;
            pfVar4 = pfVar6 + uVar26;
            pfVar7 = (param_1->setups)._Mypair._Myval2._Myfirst[uVar13].twistBlendWeights._Mypair.
                     _Myval2._Myfirst;
            pfVar5 = pfVar7 + uVar26;
            if (pfVar6[uVar26] == pfVar7[uVar26]) {
              testing::AssertionSuccess(&local_110);
            }
            else {
              pbVar14 = testing::internal::FormatForComparisonFailureMessage<float,float>
                                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&local_60,pfVar4,pfVar5);
              pbVar15 = testing::internal::FormatForComparisonFailureMessage<float,float>
                                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&local_80,pfVar5,pfVar4);
              testing::internal::EqFailure
                        (&local_110,"result.setups[si].twistBlendWeights[i]",
                         "rltests::twsw::optimized::twistBlendWeights[si][i]",pbVar15,pbVar14,false)
              ;
              if (0xf < uStack_68) {
                pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
                uVar24 = uStack_68 + 1;
                pvVar19 = pvVar10;
                if (0xfff < uVar24) {
                  pvVar19 = *(void **)((longlong)pvVar10 + -8);
                  uVar24 = uStack_68 + 0x28;
                  if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
                  goto LAB_14c5893ca;
                }
                ::operator_delete(pvVar19,uVar24);
              }
              local_80._Buf[0] = '\0';
              local_70 = uVar11;
              uStack_68 = uVar12;
              if (0xf < local_48) {
                uVar24 = local_48 + 1;
                uVar20 = local_60._Ptr;
                if (0xfff < uVar24) {
                  uVar20 = *(undefined8 *)(local_60._Ptr + -8);
                  uVar24 = local_48 + 0x28;
                  if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c5893ca:
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                ::operator_delete((void *)uVar20,uVar24);
              }
            }
            uVar25._Mypair._Myval2 = local_110.message_._Mypair._Myval2;
            if (local_110.success_ == false) {
              pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
              if (local_110.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar22 = "";
              }
              else {
                pcVar22 = (char *)local_110.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_110.message_._Mypair._Myval2 + 0x18)) {
                  pcVar22 = *(char **)local_110.message_._Mypair._Myval2;
                }
              }
              pAVar17 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_170,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                                   ,0x32,pcVar22);
              testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
              testing::internal::AssertHelper::~AssertHelper(&local_170);
              uVar25._Mypair._Myval2 = local_110.message_._Mypair._Myval2;
              if (local_178._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar21 = (undefined8 *)
                          ((longlong)&(local_178._Myval2)->field_0x0 +
                          (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
                (**(code **)*puVar21)(puVar21,1);
                uVar25._Mypair._Myval2 = local_110.message_._Mypair._Myval2;
              }
              goto LAB_14c589951;
            }
            if (local_110.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_110.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 < (ulonglong)
                            ((longlong)
                             rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Mylast -
                             (longlong)
                             rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Myfirst >> 2));
        }
        pvVar8 = rltests::twsw::optimized::twistOutputIndices._Mypair._Myval2._Myfirst[1]._Mypair.
                 _Myval2._Myfirst;
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_178._Myval2 =
             (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)pTVar27[uVar13].twistOutputIndices._Mypair._Myval2._Mylast -
              (longlong)pTVar27[uVar13].twistOutputIndices._Mypair._Myval2._Myfirst >> 1);
        local_170.data_ =
             (AssertHelperData *)
             ((longlong)pvVar8[uVar13]._Mypair._Myval2._Mylast -
              (longlong)pvVar8[uVar13]._Mypair._Myval2._Myfirst >> 1);
        if (local_178._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_170.data_
           ) {
          testing::AssertionSuccess(&local_f0);
        }
        else {
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (ulong64 *)&local_170);
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (ulong64 *)&local_178);
          testing::internal::EqFailure
                    (&local_f0,"result.setups[si].twistOutputIndices.size()",
                     "rltests::twsw::optimized::twistOutputIndices[rotationSelectorIndex][si].size()"
                     ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     false);
          if (0xf < uStack_68) {
            pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
            uVar24 = uStack_68 + 1;
            pvVar19 = pvVar10;
            if (0xfff < uVar24) {
              pvVar19 = *(void **)((longlong)pvVar10 + -8);
              uVar24 = uStack_68 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
              goto LAB_14c58946a;
            }
            ::operator_delete(pvVar19,uVar24);
          }
          local_80._Buf[0] = '\0';
          local_70 = uVar11;
          uStack_68 = uVar12;
          if (0xf < local_48) {
            uVar24 = local_48 + 1;
            uVar20 = local_60._Ptr;
            if (0xfff < uVar24) {
              uVar20 = *(undefined8 *)(local_60._Ptr + -8);
              uVar24 = local_48 + 0x28;
              if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c58946a:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar20,uVar24);
          }
        }
        uVar25._Mypair._Myval2 = local_f0.message_._Mypair._Myval2;
        if (local_f0.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_f0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_f0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_f0.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_f0.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x34,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_f0.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_f0.message_._Mypair._Myval2;
          }
          goto LAB_14c589951;
        }
        if (local_f0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_f0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        uVar26 = 0;
        pvVar8 = rltests::twsw::optimized::twistOutputIndices._Mypair._Myval2._Myfirst[1]._Mypair.
                 _Myval2._Myfirst;
        if ((longlong)pvVar8[uVar13]._Mypair._Myval2._Mylast -
            (longlong)pvVar8[uVar13]._Mypair._Myval2._Myfirst >> 1 != 0) {
          do {
            puVar2 = rltests::twsw::optimized::twistOutputIndices._Mypair._Myval2._Myfirst[1].
                     _Mypair._Myval2._Myfirst[uVar13]._Mypair._Myval2._Myfirst + uVar26;
            puVar3 = (param_1->setups)._Mypair._Myval2._Myfirst[uVar13].twistOutputIndices._Mypair.
                     _Myval2._Myfirst + uVar26;
            if (*puVar3 == *puVar2) {
              testing::AssertionSuccess(&local_100);
            }
            else {
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,puVar2);
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80,puVar3);
              testing::internal::EqFailure
                        (&local_100,"result.setups[si].twistOutputIndices[i]",
                         "rltests::twsw::optimized::twistOutputIndices[rotationSelectorIndex][si][i]"
                         ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_80,
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,false);
              if (0xf < uStack_68) {
                pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
                uVar24 = uStack_68 + 1;
                pvVar19 = pvVar10;
                if (0xfff < uVar24) {
                  pvVar19 = *(void **)((longlong)pvVar10 + -8);
                  uVar24 = uStack_68 + 0x28;
                  if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
                  goto LAB_14c589484;
                }
                ::operator_delete(pvVar19,uVar24);
              }
              local_80._Buf[0] = '\0';
              local_70 = uVar11;
              uStack_68 = uVar12;
              if (0xf < local_48) {
                uVar24 = local_48 + 1;
                uVar20 = local_60._Ptr;
                if (0xfff < uVar24) {
                  uVar20 = *(undefined8 *)(local_60._Ptr + -8);
                  uVar24 = local_48 + 0x28;
                  if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c589484:
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                ::operator_delete((void *)uVar20,uVar24);
              }
            }
            uVar25._Mypair._Myval2 = local_100.message_._Mypair._Myval2;
            if (local_100.success_ == false) {
              pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
              if (local_100.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar22 = "";
              }
              else {
                pcVar22 = (char *)local_100.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_100.message_._Mypair._Myval2 + 0x18)) {
                  pcVar22 = *(char **)local_100.message_._Mypair._Myval2;
                }
              }
              pAVar17 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_170,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                                   ,0x37,pcVar22);
              testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
              testing::internal::AssertHelper::~AssertHelper(&local_170);
              uVar25._Mypair._Myval2 = local_100.message_._Mypair._Myval2;
              if (local_178._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar21 = (undefined8 *)
                          ((longlong)&(local_178._Myval2)->field_0x0 +
                          (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
                (**(code **)*puVar21)(puVar21,1);
                uVar25._Mypair._Myval2 = local_100.message_._Mypair._Myval2;
              }
              goto LAB_14c589951;
            }
            if (local_100.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_100.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
            }
            uVar26 = uVar26 + 1;
            pvVar8 = rltests::twsw::optimized::twistOutputIndices._Mypair._Myval2._Myfirst[1].
                     _Mypair._Myval2._Myfirst;
          } while (uVar26 < (ulonglong)
                            ((longlong)pvVar8[uVar13]._Mypair._Myval2._Mylast -
                             (longlong)pvVar8[uVar13]._Mypair._Myval2._Myfirst >> 1));
        }
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_168 = local_168 + 1;
      } while (local_168 <
               (ulonglong)
               (((longlong)(param_1->setups)._Mypair._Myval2._Mylast - (longlong)pTVar27) / 0xd0));
    }
  }
  return;
}

// assertRawDataEqual @ 14c589a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
rl4::
TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
::Accessor::assertRawDataEqual
          (TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>
           *param_1)

{
  TwistAxis *pTVar1;
  ushort *puVar2;
  ushort *puVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar8;
  longlong lVar9;
  void *pvVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulong64 uVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar15;
  Message *pMVar16;
  AssertHelper *pAVar17;
  longlong lVar18;
  void *pvVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  char *pcVar22;
  ulong64 uVar23;
  ulong64 uVar24;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar25;
  ulonglong uVar26;
  TwistSwingSetup *pTVar27;
  undefined1 auStackY_1a8 [32];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_178;
  AssertHelper local_170;
  ulong64 local_168;
  AssertionResult local_160;
  AssertionResult local_150;
  AssertionResult local_140;
  AssertionResult local_130;
  AssertionResult local_120;
  AssertionResult local_110;
  AssertionResult local_100;
  AssertionResult local_f0;
  AssertionResult local_e0;
  AssertionResult local_d0;
  AssertionResult local_c0;
  AssertionResult local_b0;
  AssertionResult local_a0;
  AssertionResult local_90;
  _Bxty local_80;
  undefined8 local_70;
  ulonglong uStack_68;
  _Bxty local_60;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_168 = ((longlong)(param_1->setups)._Mypair._Myval2._Mylast -
              (longlong)(param_1->setups)._Mypair._Myval2._Myfirst) / 0xd0;
  testing::internal::EqHelper::Compare<unsigned___int64,unsigned_short,0>
            (&local_160,"result.setups.size()","rltests::twsw::optimized::setupCount",&local_168,
             &rltests::twsw::optimized::setupCount);
  uVar25._Mypair._Myval2 = local_160.message_._Mypair._Myval2;
  if (local_160.success_ == false) {
    pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
    if (local_160.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar22 = "";
    }
    else {
      pcVar22 = (char *)local_160.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_160.message_._Mypair._Myval2 + 0x18)) {
        pcVar22 = *(char **)local_160.message_._Mypair._Myval2;
      }
    }
    pAVar17 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_170,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                         ,0x19,pcVar22);
    testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
    testing::internal::AssertHelper::~AssertHelper(&local_170);
    if (local_178._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar21 = (undefined8 *)
                ((longlong)&(local_178._Myval2)->field_0x0 +
                (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
      (**(code **)*puVar21)(puVar21,1);
    }
    if (local_160.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_160.message_._Mypair._Myval2);
      ::operator_delete((void *)local_160.message_._Mypair._Myval2,0x20);
    }
  }
  else {
    if (local_160.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_160.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
    }
    uVar12 = _UNK_15076add8;
    uVar11 = ___xmm_000000000000000f0000000000000000;
    pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
    lVar18 = (longlong)(param_1->setups)._Mypair._Myval2._Mylast - (longlong)pTVar27;
    local_168 = 0;
    lVar9 = lVar18 >> 0x3f;
    if (lVar18 / 0xd0 + lVar9 != lVar9) {
      do {
        uVar13 = local_168;
        pTVar1 = rltests::twsw::unoptimized::swingTwistAxes._Mypair._Myval2._Myfirst + local_168;
        if (pTVar27[local_168].swingTwistAxis ==
            rltests::twsw::unoptimized::swingTwistAxes._Mypair._Myval2._Myfirst[local_168]) {
          testing::AssertionSuccess(&local_160);
        }
        else {
          pbVar14 = testing::internal::
                    FormatForComparisonFailureMessage<enum_dna::TwistAxis,enum_dna::TwistAxis>
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_80,pTVar1,&pTVar27[local_168].swingTwistAxis);
          pbVar15 = testing::internal::
                    FormatForComparisonFailureMessage<enum_dna::TwistAxis,enum_dna::TwistAxis>
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_60,&pTVar27[uVar13].swingTwistAxis,pTVar1);
          testing::internal::EqFailure
                    (&local_160,"result.setups[si].swingTwistAxis",
                     "rltests::twsw::unoptimized::swingTwistAxes[si]",pbVar15,pbVar14,false);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80);
        }
        uVar25._Mypair._Myval2 = local_160.message_._Mypair._Myval2;
        if (local_160.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_160.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_160.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_160.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_160.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x1b,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_160.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_160.message_._Mypair._Myval2;
          }
LAB_14c58b241:
          if (uVar25._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            return;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     uVar25._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
          return;
        }
        if (local_160.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_160.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_178._Myval2 =
             (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)
              rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Mylast -
              (longlong)
              rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Myfirst >> 1);
        local_170.data_ =
             (AssertHelperData *)
             ((longlong)pTVar27[uVar13].swingInputIndices._Mypair._Myval2._Mylast -
              (longlong)pTVar27[uVar13].swingInputIndices._Mypair._Myval2._Myfirst >> 1);
        if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_170.data_
            == local_178._Myval2) {
          testing::AssertionSuccess(&local_90);
        }
        else {
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (ulong64 *)&local_178);
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (ulong64 *)&local_170);
          testing::internal::EqFailure
                    (&local_90,"result.setups[si].swingInputIndices.size()",
                     "rltests::twsw::optimized::swingInputIndices[si].size()",
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     false);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80);
        }
        uVar25._Mypair._Myval2 = local_90.message_._Mypair._Myval2;
        if (local_90.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_90.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_90.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_90.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_90.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x1c,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_90.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_90.message_._Mypair._Myval2;
          }
          goto LAB_14c58b241;
        }
        if (local_90.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_90.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        uVar26 = 0;
        if ((longlong)
            rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Mylast -
            (longlong)
            rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Myfirst >> 1 != 0) {
          do {
            puVar2 = rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst[uVar13].
                     _Mypair._Myval2._Myfirst + uVar26;
            puVar3 = (param_1->setups)._Mypair._Myval2._Myfirst[uVar13].swingInputIndices._Mypair.
                     _Myval2._Myfirst + uVar26;
            if (*puVar3 == *puVar2) {
              testing::AssertionSuccess(&local_150);
            }
            else {
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80,puVar2);
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,puVar3);
              testing::internal::EqFailure
                        (&local_150,"result.setups[si].swingInputIndices[i]",
                         "rltests::twsw::optimized::swingInputIndices[si][i]",
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80,false);
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60);
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80);
            }
            uVar25._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
            if (local_150.success_ == false) {
              pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
              if (local_150.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar22 = "";
              }
              else {
                pcVar22 = (char *)local_150.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_150.message_._Mypair._Myval2 + 0x18)) {
                  pcVar22 = *(char **)local_150.message_._Mypair._Myval2;
                }
              }
              pAVar17 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_170,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                                   ,0x1f,pcVar22);
              testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
              testing::internal::AssertHelper::~AssertHelper(&local_170);
              uVar25._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
              if (local_178._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar21 = (undefined8 *)
                          ((longlong)&(local_178._Myval2)->field_0x0 +
                          (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
                (**(code **)*puVar21)(puVar21,1);
                uVar25._Mypair._Myval2 = local_150.message_._Mypair._Myval2;
              }
              goto LAB_14c58b241;
            }
            if (local_150.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_150.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 < (ulonglong)
                            ((longlong)
                             rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Mylast -
                             (longlong)
                             rltests::twsw::optimized::swingInputIndices._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Myfirst >> 1));
        }
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_170.data_ =
             (AssertHelperData *)
             ((longlong)
              rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Mylast -
              (longlong)
              rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Myfirst >> 2);
        local_178._Myval2 =
             (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)pTVar27[uVar13].swingBlendWeights._Mypair._Myval2._Mylast -
              (longlong)pTVar27[uVar13].swingBlendWeights._Mypair._Myval2._Myfirst >> 2);
        if (local_178._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_170.data_
           ) {
          testing::AssertionSuccess(&local_a0);
        }
        else {
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (ulong64 *)&local_170);
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (ulong64 *)&local_178);
          testing::internal::EqFailure
                    (&local_a0,"result.setups[si].swingBlendWeights.size()",
                     "rltests::twsw::optimized::swingBlendWeights[si].size()",
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     false);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80);
        }
        uVar25._Mypair._Myval2 = local_a0.message_._Mypair._Myval2;
        if (local_a0.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_a0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_a0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_a0.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_a0.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x20,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_a0.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_a0.message_._Mypair._Myval2;
          }
          goto LAB_14c58b241;
        }
        if (local_a0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_a0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        uVar26 = 0;
        uVar24 = uVar13;
        if ((longlong)
            rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Mylast -
            (longlong)
            rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Myfirst >> 2 != 0) {
          do {
            pfVar6 = rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst[uVar13].
                     _Mypair._Myval2._Myfirst;
            pfVar4 = pfVar6 + uVar26;
            pfVar7 = (param_1->setups)._Mypair._Myval2._Myfirst[uVar13].swingBlendWeights._Mypair.
                     _Myval2._Myfirst;
            pfVar5 = pfVar7 + uVar26;
            if (pfVar6[uVar26] == pfVar7[uVar26]) {
              testing::AssertionSuccess(&local_140);
            }
            else {
              pbVar14 = testing::internal::FormatForComparisonFailureMessage<float,float>
                                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&local_80,pfVar4,pfVar5);
              pbVar15 = testing::internal::FormatForComparisonFailureMessage<float,float>
                                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&local_60,pfVar5,pfVar4);
              testing::internal::EqFailure
                        (&local_140,"result.setups[si].swingBlendWeights[i]",
                         "rltests::twsw::optimized::swingBlendWeights[si][i]",pbVar15,pbVar14,false)
              ;
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60);
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80);
            }
            uVar25._Mypair._Myval2 = local_140.message_._Mypair._Myval2;
            if (local_140.success_ == false) {
              pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
              if (local_140.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar22 = "";
              }
              else {
                pcVar22 = (char *)local_140.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_140.message_._Mypair._Myval2 + 0x18)) {
                  pcVar22 = *(char **)local_140.message_._Mypair._Myval2;
                }
              }
              pAVar17 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_170,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                                   ,0x23,pcVar22);
              testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
              testing::internal::AssertHelper::~AssertHelper(&local_170);
              uVar25._Mypair._Myval2 = local_140.message_._Mypair._Myval2;
              if (local_178._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar21 = (undefined8 *)
                          ((longlong)&(local_178._Myval2)->field_0x0 +
                          (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
                (**(code **)*puVar21)(puVar21,1);
                uVar25._Mypair._Myval2 = local_140.message_._Mypair._Myval2;
              }
              goto LAB_14c58b241;
            }
            if (local_140.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_140.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
            }
            uVar26 = uVar26 + 1;
            uVar24 = local_168;
          } while (uVar26 < (ulonglong)
                            ((longlong)
                             rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Mylast -
                             (longlong)
                             rltests::twsw::optimized::swingBlendWeights._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Myfirst >> 2));
        }
        pvVar8 = ((rltests::twsw::optimized::swingOutputIndices._Mypair._Myval2._Myfirst)->_Mypair).
                 _Myval2._Myfirst;
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_178._Myval2 =
             (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)pTVar27[uVar13].swingOutputIndices._Mypair._Myval2._Mylast -
              (longlong)pTVar27[uVar13].swingOutputIndices._Mypair._Myval2._Myfirst >> 1);
        local_170.data_ =
             (AssertHelperData *)
             ((longlong)pvVar8[uVar13]._Mypair._Myval2._Mylast -
              (longlong)pvVar8[uVar13]._Mypair._Myval2._Myfirst >> 1);
        if (local_178._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_170.data_
           ) {
          testing::AssertionSuccess(&local_b0);
        }
        else {
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (ulong64 *)&local_170);
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (ulong64 *)&local_178);
          testing::internal::EqFailure
                    (&local_b0,"result.setups[si].swingOutputIndices.size()",
                     "rltests::twsw::optimized::swingOutputIndices[rotationSelectorIndex][si].size()"
                     ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     false);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80);
        }
        uVar25._Mypair._Myval2 = local_b0.message_._Mypair._Myval2;
        if (local_b0.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_b0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_b0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_b0.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_b0.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x25,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_b0.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_b0.message_._Mypair._Myval2;
          }
          goto LAB_14c58b241;
        }
        if (local_b0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_b0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        uVar26 = 0;
        pvVar8 = ((rltests::twsw::optimized::swingOutputIndices._Mypair._Myval2._Myfirst)->_Mypair).
                 _Myval2._Myfirst;
        if ((longlong)pvVar8[uVar13]._Mypair._Myval2._Mylast -
            (longlong)pvVar8[uVar13]._Mypair._Myval2._Myfirst >> 1 != 0) {
          do {
            puVar2 = ((rltests::twsw::optimized::swingOutputIndices._Mypair._Myval2._Myfirst)->
                     _Mypair)._Myval2._Myfirst[uVar13]._Mypair._Myval2._Myfirst + uVar26;
            puVar3 = (param_1->setups)._Mypair._Myval2._Myfirst[uVar13].swingOutputIndices._Mypair.
                     _Myval2._Myfirst + uVar26;
            if (*puVar3 == *puVar2) {
              testing::AssertionSuccess(&local_130);
            }
            else {
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,puVar2);
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80,puVar3);
              testing::internal::EqFailure
                        (&local_130,"result.setups[si].swingOutputIndices[i]",
                         "rltests::twsw::optimized::swingOutputIndices[rotationSelectorIndex][si][i]"
                         ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_80,
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,false);
              if (0xf < uStack_68) {
                pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
                uVar23 = uStack_68 + 1;
                pvVar19 = pvVar10;
                if (0xfff < uVar23) {
                  pvVar19 = *(void **)((longlong)pvVar10 + -8);
                  uVar23 = uStack_68 + 0x28;
                  if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
                  goto LAB_14c58ab46;
                }
                ::operator_delete(pvVar19,uVar23);
              }
              local_80._Buf[0] = '\0';
              local_70 = uVar11;
              uStack_68 = uVar12;
              if (0xf < local_48) {
                uVar23 = local_48 + 1;
                uVar20 = local_60._Ptr;
                if (0xfff < uVar23) {
                  uVar20 = *(undefined8 *)(local_60._Ptr + -8);
                  uVar23 = local_48 + 0x28;
                  if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c58ab46:
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                ::operator_delete((void *)uVar20,uVar23);
              }
            }
            uVar25._Mypair._Myval2 = local_130.message_._Mypair._Myval2;
            if (local_130.success_ == false) {
              pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
              if (local_130.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar22 = "";
              }
              else {
                pcVar22 = (char *)local_130.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_130.message_._Mypair._Myval2 + 0x18)) {
                  pcVar22 = *(char **)local_130.message_._Mypair._Myval2;
                }
              }
              pAVar17 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_170,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                                   ,0x28,pcVar22);
              testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
              testing::internal::AssertHelper::~AssertHelper(&local_170);
              uVar25._Mypair._Myval2 = local_130.message_._Mypair._Myval2;
              if (local_178._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar21 = (undefined8 *)
                          ((longlong)&(local_178._Myval2)->field_0x0 +
                          (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
                (**(code **)*puVar21)(puVar21,1);
                uVar25._Mypair._Myval2 = local_130.message_._Mypair._Myval2;
              }
              goto LAB_14c58b241;
            }
            if (local_130.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_130.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
            }
            uVar26 = uVar26 + 1;
            pvVar8 = ((rltests::twsw::optimized::swingOutputIndices._Mypair._Myval2._Myfirst)->
                     _Mypair)._Myval2._Myfirst;
          } while (uVar26 < (ulonglong)
                            ((longlong)pvVar8[uVar13]._Mypair._Myval2._Mylast -
                             (longlong)pvVar8[uVar13]._Mypair._Myval2._Myfirst >> 1));
        }
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst + uVar13;
        pTVar1 = rltests::twsw::unoptimized::twistTwistAxes._Mypair._Myval2._Myfirst + uVar24;
        if (pTVar27->twistTwistAxis ==
            rltests::twsw::unoptimized::twistTwistAxes._Mypair._Myval2._Myfirst[uVar24]) {
          testing::AssertionSuccess(&local_c0);
        }
        else {
          pbVar14 = testing::internal::
                    FormatForComparisonFailureMessage<enum_dna::TwistAxis,enum_dna::TwistAxis>
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_60,pTVar1,&pTVar27->twistTwistAxis);
          pbVar15 = testing::internal::
                    FormatForComparisonFailureMessage<enum_dna::TwistAxis,enum_dna::TwistAxis>
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_80,&pTVar27->twistTwistAxis,pTVar1);
          testing::internal::EqFailure
                    (&local_c0,"result.setups[si].twistTwistAxis",
                     "rltests::twsw::unoptimized::twistTwistAxes[si]",pbVar15,pbVar14,false);
          if (0xf < uStack_68) {
            pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
            uVar24 = uStack_68 + 1;
            pvVar19 = pvVar10;
            if (0xfff < uVar24) {
              pvVar19 = *(void **)((longlong)pvVar10 + -8);
              uVar24 = uStack_68 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
              goto LAB_14c58abe6;
            }
            ::operator_delete(pvVar19,uVar24);
          }
          local_80._Buf[0] = '\0';
          local_70 = uVar11;
          uStack_68 = uVar12;
          if (0xf < local_48) {
            uVar24 = local_48 + 1;
            uVar20 = local_60._Ptr;
            if (0xfff < uVar24) {
              uVar20 = *(undefined8 *)(local_60._Ptr + -8);
              uVar24 = local_48 + 0x28;
              if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c58abe6:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar20,uVar24);
          }
        }
        uVar25._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
        if (local_c0.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_c0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_c0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_c0.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_c0.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x2a,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
          }
          goto LAB_14c58b241;
        }
        if (local_c0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_c0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_170.data_ =
             (AssertHelperData *)
             ((longlong)
              rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Mylast -
              (longlong)
              rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Myfirst >> 1);
        local_178._Myval2 =
             (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)pTVar27[uVar13].twistInputIndices._Mypair._Myval2._Mylast -
              (longlong)pTVar27[uVar13].twistInputIndices._Mypair._Myval2._Myfirst >> 1);
        if (local_178._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_170.data_
           ) {
          testing::AssertionSuccess(&local_d0);
        }
        else {
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (ulong64 *)&local_170);
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (ulong64 *)&local_178);
          testing::internal::EqFailure
                    (&local_d0,"result.setups[si].twistInputIndices.size()",
                     "rltests::twsw::optimized::twistInputIndices[si].size()",
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     false);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80);
        }
        uVar25._Mypair._Myval2 = local_d0.message_._Mypair._Myval2;
        if (local_d0.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_d0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_d0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_d0.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_d0.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x2b,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_d0.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_d0.message_._Mypair._Myval2;
          }
          goto LAB_14c58b241;
        }
        if (local_d0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_d0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        uVar26 = 0;
        if ((longlong)
            rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Mylast -
            (longlong)
            rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Myfirst >> 1 != 0) {
          do {
            puVar2 = rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst[uVar13].
                     _Mypair._Myval2._Myfirst + uVar26;
            puVar3 = (param_1->setups)._Mypair._Myval2._Myfirst[uVar13].twistInputIndices._Mypair.
                     _Myval2._Myfirst + uVar26;
            if (*puVar3 == *puVar2) {
              testing::AssertionSuccess(&local_120);
            }
            else {
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,puVar2);
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80,puVar3);
              testing::internal::EqFailure
                        (&local_120,"result.setups[si].twistInputIndices[i]",
                         "rltests::twsw::optimized::twistInputIndices[si][i]",
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80,
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,false);
              if (0xf < uStack_68) {
                pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
                uVar24 = uStack_68 + 1;
                pvVar19 = pvVar10;
                if (0xfff < uVar24) {
                  pvVar19 = *(void **)((longlong)pvVar10 + -8);
                  uVar24 = uStack_68 + 0x28;
                  if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
                  goto LAB_14c58ac00;
                }
                ::operator_delete(pvVar19,uVar24);
              }
              local_80._Buf[0] = '\0';
              local_70 = uVar11;
              uStack_68 = uVar12;
              if (0xf < local_48) {
                uVar24 = local_48 + 1;
                uVar20 = local_60._Ptr;
                if (0xfff < uVar24) {
                  uVar20 = *(undefined8 *)(local_60._Ptr + -8);
                  uVar24 = local_48 + 0x28;
                  if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c58ac00:
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                ::operator_delete((void *)uVar20,uVar24);
              }
            }
            uVar25._Mypair._Myval2 = local_120.message_._Mypair._Myval2;
            if (local_120.success_ == false) {
              pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
              if (local_120.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar22 = "";
              }
              else {
                pcVar22 = (char *)local_120.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_120.message_._Mypair._Myval2 + 0x18)) {
                  pcVar22 = *(char **)local_120.message_._Mypair._Myval2;
                }
              }
              pAVar17 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_170,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                                   ,0x2e,pcVar22);
              testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
              testing::internal::AssertHelper::~AssertHelper(&local_170);
              uVar25._Mypair._Myval2 = local_120.message_._Mypair._Myval2;
              if (local_178._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar21 = (undefined8 *)
                          ((longlong)&(local_178._Myval2)->field_0x0 +
                          (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
                (**(code **)*puVar21)(puVar21,1);
                uVar25._Mypair._Myval2 = local_120.message_._Mypair._Myval2;
              }
              goto LAB_14c58b241;
            }
            if (local_120.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_120.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 < (ulonglong)
                            ((longlong)
                             rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Mylast -
                             (longlong)
                             rltests::twsw::optimized::twistInputIndices._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Myfirst >> 1));
        }
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_170.data_ =
             (AssertHelperData *)
             ((longlong)
              rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Mylast -
              (longlong)
              rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
              _Myval2._Myfirst >> 2);
        local_178._Myval2 =
             (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)pTVar27[uVar13].twistBlendWeights._Mypair._Myval2._Mylast -
              (longlong)pTVar27[uVar13].twistBlendWeights._Mypair._Myval2._Myfirst >> 2);
        if (local_178._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_170.data_
           ) {
          testing::AssertionSuccess(&local_e0);
        }
        else {
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (ulong64 *)&local_170);
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (ulong64 *)&local_178);
          testing::internal::EqFailure
                    (&local_e0,"result.setups[si].twistBlendWeights.size()",
                     "rltests::twsw::optimized::twistBlendWeights[si].size()",
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     false);
          if (0xf < uStack_68) {
            pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
            uVar24 = uStack_68 + 1;
            pvVar19 = pvVar10;
            if (0xfff < uVar24) {
              pvVar19 = *(void **)((longlong)pvVar10 + -8);
              uVar24 = uStack_68 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
              goto LAB_14c58aca0;
            }
            ::operator_delete(pvVar19,uVar24);
          }
          local_80._Buf[0] = '\0';
          local_70 = uVar11;
          uStack_68 = uVar12;
          if (0xf < local_48) {
            uVar24 = local_48 + 1;
            uVar20 = local_60._Ptr;
            if (0xfff < uVar24) {
              uVar20 = *(undefined8 *)(local_60._Ptr + -8);
              uVar24 = local_48 + 0x28;
              if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c58aca0:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar20,uVar24);
          }
        }
        uVar25._Mypair._Myval2 = local_e0.message_._Mypair._Myval2;
        if (local_e0.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_e0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_e0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_e0.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_e0.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x2f,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_e0.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_e0.message_._Mypair._Myval2;
          }
          goto LAB_14c58b241;
        }
        if (local_e0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_e0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        uVar26 = 0;
        if ((longlong)
            rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Mylast -
            (longlong)
            rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst[uVar13]._Mypair.
            _Myval2._Myfirst >> 2 != 0) {
          do {
            pfVar6 = rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst[uVar13].
                     _Mypair._Myval2._Myfirst;
            pfVar4 = pfVar6 + uVar26;
            pfVar7 = (param_1->setups)._Mypair._Myval2._Myfirst[uVar13].twistBlendWeights._Mypair.
                     _Myval2._Myfirst;
            pfVar5 = pfVar7 + uVar26;
            if (pfVar6[uVar26] == pfVar7[uVar26]) {
              testing::AssertionSuccess(&local_110);
            }
            else {
              pbVar14 = testing::internal::FormatForComparisonFailureMessage<float,float>
                                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&local_60,pfVar4,pfVar5);
              pbVar15 = testing::internal::FormatForComparisonFailureMessage<float,float>
                                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&local_80,pfVar5,pfVar4);
              testing::internal::EqFailure
                        (&local_110,"result.setups[si].twistBlendWeights[i]",
                         "rltests::twsw::optimized::twistBlendWeights[si][i]",pbVar15,pbVar14,false)
              ;
              if (0xf < uStack_68) {
                pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
                uVar24 = uStack_68 + 1;
                pvVar19 = pvVar10;
                if (0xfff < uVar24) {
                  pvVar19 = *(void **)((longlong)pvVar10 + -8);
                  uVar24 = uStack_68 + 0x28;
                  if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
                  goto LAB_14c58acba;
                }
                ::operator_delete(pvVar19,uVar24);
              }
              local_80._Buf[0] = '\0';
              local_70 = uVar11;
              uStack_68 = uVar12;
              if (0xf < local_48) {
                uVar24 = local_48 + 1;
                uVar20 = local_60._Ptr;
                if (0xfff < uVar24) {
                  uVar20 = *(undefined8 *)(local_60._Ptr + -8);
                  uVar24 = local_48 + 0x28;
                  if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c58acba:
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                ::operator_delete((void *)uVar20,uVar24);
              }
            }
            uVar25._Mypair._Myval2 = local_110.message_._Mypair._Myval2;
            if (local_110.success_ == false) {
              pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
              if (local_110.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar22 = "";
              }
              else {
                pcVar22 = (char *)local_110.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_110.message_._Mypair._Myval2 + 0x18)) {
                  pcVar22 = *(char **)local_110.message_._Mypair._Myval2;
                }
              }
              pAVar17 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_170,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                                   ,0x32,pcVar22);
              testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
              testing::internal::AssertHelper::~AssertHelper(&local_170);
              uVar25._Mypair._Myval2 = local_110.message_._Mypair._Myval2;
              if (local_178._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar21 = (undefined8 *)
                          ((longlong)&(local_178._Myval2)->field_0x0 +
                          (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
                (**(code **)*puVar21)(puVar21,1);
                uVar25._Mypair._Myval2 = local_110.message_._Mypair._Myval2;
              }
              goto LAB_14c58b241;
            }
            if (local_110.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_110.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 < (ulonglong)
                            ((longlong)
                             rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Mylast -
                             (longlong)
                             rltests::twsw::optimized::twistBlendWeights._Mypair._Myval2._Myfirst
                             [uVar13]._Mypair._Myval2._Myfirst >> 2));
        }
        pvVar8 = ((rltests::twsw::optimized::twistOutputIndices._Mypair._Myval2._Myfirst)->_Mypair).
                 _Myval2._Myfirst;
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_178._Myval2 =
             (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             ((longlong)pTVar27[uVar13].twistOutputIndices._Mypair._Myval2._Mylast -
              (longlong)pTVar27[uVar13].twistOutputIndices._Mypair._Myval2._Myfirst >> 1);
        local_170.data_ =
             (AssertHelperData *)
             ((longlong)pvVar8[uVar13]._Mypair._Myval2._Mylast -
              (longlong)pvVar8[uVar13]._Mypair._Myval2._Myfirst >> 1);
        if (local_178._Myval2 ==
            (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_170.data_
           ) {
          testing::AssertionSuccess(&local_f0);
        }
        else {
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     (ulong64 *)&local_170);
          testing::PrintToString<unsigned___int64>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (ulong64 *)&local_178);
          testing::internal::EqFailure
                    (&local_f0,"result.setups[si].twistOutputIndices.size()",
                     "rltests::twsw::optimized::twistOutputIndices[rotationSelectorIndex][si].size()"
                     ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60,
                     false);
          if (0xf < uStack_68) {
            pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
            uVar24 = uStack_68 + 1;
            pvVar19 = pvVar10;
            if (0xfff < uVar24) {
              pvVar19 = *(void **)((longlong)pvVar10 + -8);
              uVar24 = uStack_68 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
              goto LAB_14c58ad5a;
            }
            ::operator_delete(pvVar19,uVar24);
          }
          local_80._Buf[0] = '\0';
          local_70 = uVar11;
          uStack_68 = uVar12;
          if (0xf < local_48) {
            uVar24 = local_48 + 1;
            uVar20 = local_60._Ptr;
            if (0xfff < uVar24) {
              uVar20 = *(undefined8 *)(local_60._Ptr + -8);
              uVar24 = local_48 + 0x28;
              if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c58ad5a:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar20,uVar24);
          }
        }
        uVar25._Mypair._Myval2 = local_f0.message_._Mypair._Myval2;
        if (local_f0.success_ == false) {
          pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
          if (local_f0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar22 = "";
          }
          else {
            pcVar22 = (char *)local_f0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_f0.message_._Mypair._Myval2 + 0x18)) {
              pcVar22 = *(char **)local_f0.message_._Mypair._Myval2;
            }
          }
          pAVar17 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_170,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                               ,0x34,pcVar22);
          testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
          testing::internal::AssertHelper::~AssertHelper(&local_170);
          uVar25._Mypair._Myval2 = local_f0.message_._Mypair._Myval2;
          if (local_178._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar21 = (undefined8 *)
                      ((longlong)&(local_178._Myval2)->field_0x0 +
                      (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
            (**(code **)*puVar21)(puVar21,1);
            uVar25._Mypair._Myval2 = local_f0.message_._Mypair._Myval2;
          }
          goto LAB_14c58b241;
        }
        if (local_f0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_f0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
        }
        uVar26 = 0;
        pvVar8 = ((rltests::twsw::optimized::twistOutputIndices._Mypair._Myval2._Myfirst)->_Mypair).
                 _Myval2._Myfirst;
        if ((longlong)pvVar8[uVar13]._Mypair._Myval2._Mylast -
            (longlong)pvVar8[uVar13]._Mypair._Myval2._Myfirst >> 1 != 0) {
          do {
            puVar2 = ((rltests::twsw::optimized::twistOutputIndices._Mypair._Myval2._Myfirst)->
                     _Mypair)._Myval2._Myfirst[uVar13]._Mypair._Myval2._Myfirst + uVar26;
            puVar3 = (param_1->setups)._Mypair._Myval2._Myfirst[uVar13].twistOutputIndices._Mypair.
                     _Myval2._Myfirst + uVar26;
            if (*puVar3 == *puVar2) {
              testing::AssertionSuccess(&local_100);
            }
            else {
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,puVar2);
              testing::PrintToString<unsigned_short>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_80,puVar3);
              testing::internal::EqFailure
                        (&local_100,"result.setups[si].twistOutputIndices[i]",
                         "rltests::twsw::optimized::twistOutputIndices[rotationSelectorIndex][si][i]"
                         ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_80,
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_60,false);
              if (0xf < uStack_68) {
                pvVar10 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
                uVar24 = uStack_68 + 1;
                pvVar19 = pvVar10;
                if (0xfff < uVar24) {
                  pvVar19 = *(void **)((longlong)pvVar10 + -8);
                  uVar24 = uStack_68 + 0x28;
                  if (0x1f < (ulonglong)((longlong)pvVar10 + (-8 - (longlong)pvVar19)))
                  goto LAB_14c58ad74;
                }
                ::operator_delete(pvVar19,uVar24);
              }
              local_80._Buf[0] = '\0';
              local_70 = uVar11;
              uStack_68 = uVar12;
              if (0xf < local_48) {
                uVar24 = local_48 + 1;
                uVar20 = local_60._Ptr;
                if (0xfff < uVar24) {
                  uVar20 = *(undefined8 *)(local_60._Ptr + -8);
                  uVar24 = local_48 + 0x28;
                  if ((char *)0x1f < local_60._Ptr + (-8 - uVar20)) {
LAB_14c58ad74:
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                ::operator_delete((void *)uVar20,uVar24);
              }
            }
            uVar25._Mypair._Myval2 = local_100.message_._Mypair._Myval2;
            if (local_100.success_ == false) {
              pMVar16 = (Message *)testing::Message::Message((Message *)&local_178);
              if (local_100.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar22 = "";
              }
              else {
                pcVar22 = (char *)local_100.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_100.message_._Mypair._Myval2 + 0x18)) {
                  pcVar22 = *(char **)local_100.message_._Mypair._Myval2;
                }
              }
              pAVar17 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_170,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\twistswing\\TestTwistSwingStorageBuilder.cpp"
                                   ,0x37,pcVar22);
              testing::internal::AssertHelper::operator=(pAVar17,pMVar16);
              testing::internal::AssertHelper::~AssertHelper(&local_170);
              uVar25._Mypair._Myval2 = local_100.message_._Mypair._Myval2;
              if (local_178._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar21 = (undefined8 *)
                          ((longlong)&(local_178._Myval2)->field_0x0 +
                          (longlong)*(int *)(*(longlong *)local_178._Myval2 + 4));
                (**(code **)*puVar21)(puVar21,1);
                uVar25._Mypair._Myval2 = local_100.message_._Mypair._Myval2;
              }
              goto LAB_14c58b241;
            }
            if (local_100.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_100.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar25._Mypair._Myval2,0x20);
            }
            uVar26 = uVar26 + 1;
            pvVar8 = ((rltests::twsw::optimized::twistOutputIndices._Mypair._Myval2._Myfirst)->
                     _Mypair)._Myval2._Myfirst;
          } while (uVar26 < (ulonglong)
                            ((longlong)pvVar8[uVar13]._Mypair._Myval2._Mylast -
                             (longlong)pvVar8[uVar13]._Mypair._Myval2._Myfirst >> 1));
        }
        pTVar27 = (param_1->setups)._Mypair._Myval2._Myfirst;
        local_168 = local_168 + 1;
      } while (local_168 <
               (ulonglong)
               (((longlong)(param_1->setups)._Mypair._Myval2._Mylast - (longlong)pTVar27) / 0xd0));
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'dmr'' @ 150451100

void __cdecl
`pma::impl::
PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>
::
PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>'
::__l2::_dynamic_atexit_destructor_for__dmr__(void)

{
  pma::MemoryResource::~MemoryResource
            ((MemoryResource *)
             &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr);
  return;
}

// `dynamic_atexit_destructor_for_'dmr'' @ 150451120

void __cdecl
`pma::impl::
PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>
::
PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>'
::__l2::_dynamic_atexit_destructor_for__dmr__(void)

{
  pma::MemoryResource::~MemoryResource
            ((MemoryResource *)
             &`public:___cdecl_pma::impl::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::TwistSwingJointsEvaluator<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr);
  return;
}

