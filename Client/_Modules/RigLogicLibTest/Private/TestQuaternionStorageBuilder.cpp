// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 63

// `dynamic_initializer_for_'gtest_QuaternionJointStorageBuilderTest_LayoutOptimization_registered_'' @ 141364fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
_dynamic_initializer_for__gtest_QuaternionJointStorageBuilderTest_LayoutOptimization_registered___
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
  local_20 = 0x96;
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
  *(undefined2 *)(pcVar2 + 0x94) = s_C__Workspace_UnrealEngine_Engin._148_2_;
  pcVar2[0x96] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar2;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0xa0);
  local_48 = ___xmm_000000000000009f0000000000000096;
  uStack_40 = _UNK_152890458;
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
  *(local_58._Ptr + 0x96) = pcVar2[0x96];
  local_38 = 0x9f;
  gtest_QuaternionJointStorageBuilderTest_LayoutOptimization_registered_ =
       testing::internal::
       TypeParameterizedTest<`anonymous_namespace'::QuaternionJointStorageBuilderTest,testing::internal::TemplateSel<QuaternionJointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
       ::Register("",(CodeLocation *)&local_58,"QuaternionJointStorageBuilderTest",
                  "LayoutOptimization",0,&local_70);
  if (0xf < uStack_40) {
    uVar4 = uStack_40 + 1;
    uVar3 = local_58._Ptr;
    if (0xfff < uVar4) {
      uVar3 = *(undefined8 *)(local_58._Ptr + -8);
      uVar4 = uStack_40 + 0x28;
      if ((char *)0x1f < local_58._Ptr + (-8 - uVar3)) goto LAB_141365240;
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
LAB_141365240:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pbVar5,uVar4);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c56e2d0

void * __thiscall
`anonymous_namespace'::
QuaternionJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  rltests::qs::QuaternionReader::~QuaternionReader((QuaternionReader *)((longlong)this + 0x70));
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// TestBody @ 14c56e340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
::TestBody(QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
           *this)

{
  undefined1 *puVar1;
  JointGroup<float> *pJVar2;
  ushort uVar3;
  JointGroup<float> *pJVar4;
  undefined1 auStack_1a8 [32];
  _Value_init_tag a_Stack_188 [16];
  QuaternionJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128> QStack_178
  ;
  JointBehaviorFilter JStack_128;
  QuaternionJointsEvaluator<float> *pQStack_100;
  JointGroup<float> JStack_f8;
  undefined1 auStack_68 [56];
  longlong *plStack_30;
  QuaternionJointsEvaluator<float> *pQStack_28;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  QStack_178._padding_ =
       (longlong)
       &
       ___7__QuaternionJointsBuilder_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3__rl4__6B_
  ;
  puVar1 = &this->field_0x10;
  QStack_178.config._11_1_ = JStack_128.filters._Mypair._Myval1._3_1_;
  QStack_178.config.calculationType = SSE;
  QStack_178.config.loadJoints = true;
  QStack_178.config.loadBlendShapes = true;
  QStack_178.config.loadAnimatedMaps = true;
  QStack_178.config.loadMachineLearnedBehavior = true;
  QStack_178.config.loadRBFBehavior = true;
  QStack_178.config.loadTwistSwingBehavior = true;
  QStack_178.config.translationType = Vector;
  QStack_178.config.rotationType = Quaternions;
  QStack_178.config.rotationOrder = XYZ;
  QStack_178.config.scaleType = Vector;
  QStack_178.config.translationPruningThreshold = 0.0;
  QStack_178.config.rotationPruningThreshold = 0.0;
  QStack_178.config.scalePruningThreshold = 0.0;
  QStack_178.memRes = (MemoryResource *)puVar1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  QStack_178.jointGroups._Mypair._Myval2._Myfirst = (JointGroup<float> *)0x0;
  QStack_178.jointGroups._Mypair._Myval2._Mylast = (JointGroup<float> *)0x0;
  QStack_178.jointGroups._Mypair._Myval1 =
       (PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  if (puVar1 != (undefined1 *)0x0) {
    QStack_178.jointGroups._Mypair._Myval1 =
         (PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>)puVar1;
  }
  QStack_178.jointGroups._Mypair._Myval2._Myend = (JointGroup<float> *)0x0;
  QStack_178.rotationUnit = degrees;
  rl4::JointBehaviorFilter::JointBehaviorFilter
            (&JStack_128,(Reader *)&this->field_0x18,(MemoryResource *)puVar1);
  rl4::JointBehaviorFilter::include(&JStack_128,Quaternion);
  pJVar4 = rl4::JointGroup<float>::JointGroup<float>(&JStack_f8,QStack_178.memRes);
  uVar3 = rl4::JointBehaviorFilter::getJointGroupCount(&JStack_128);
  std::
  vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>
  ::_Resize<rl4::JointGroup<float>_>(&QStack_178.jointGroups,(ulonglong)uVar3,pJVar4);
  rl4::JointGroup<float>::~JointGroup<float>(&JStack_f8);
  pJVar2 = QStack_178.jointGroups._Mypair._Myval2._Mylast;
  for (pJVar4 = QStack_178.jointGroups._Mypair._Myval2._Myfirst; pJVar4 != pJVar2;
      pJVar4 = pJVar4 + 1) {
    uVar3 = rl4::JointBehaviorFilter::getLODCount(&JStack_128);
    std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>::
    _Resize<std::_Value_init_tag>(&pJVar4->lods,(ulonglong)uVar3,a_Stack_188);
  }
  rl4::QuaternionJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::
  fillStorage(&QStack_178,&JStack_128);
  rl4::QuaternionJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::
  build(&QStack_178,
        (unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_> *)
        auStack_68);
  rl4::QuaternionJointsEvaluator<float>::Accessor::assertRawDataEqual(pQStack_28,0);
  if (pQStack_28 != (QuaternionJointsEvaluator<float> *)0x0) {
    pQStack_100 = pQStack_28;
    if (plStack_30 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plStack_30 + 0x10))(plStack_30,&pQStack_100);
  }
  if (plStack_30 != (longlong *)0x0) {
    (**(code **)(*plStack_30 + 0x20))(plStack_30,plStack_30 != (longlong *)auStack_68);
    plStack_30 = (longlong *)0x0;
  }
  if (JStack_128.filters._Mypair._Myval2._Myfirst != (FilterType *)0x0) {
    (**(code **)(*(longlong *)
                  CONCAT44(JStack_128.filters._Mypair._Myval1._4_4_,
                           JStack_128.filters._Mypair._Myval1._0_4_) + 0x10))
              ((longlong *)
               CONCAT44(JStack_128.filters._Mypair._Myval1._4_4_,
                        JStack_128.filters._Mypair._Myval1._0_4_),
               JStack_128.filters._Mypair._Myval2._Myfirst,
               ((longlong)JStack_128.filters._Mypair._Myval2._Myend -
                (longlong)JStack_128.filters._Mypair._Myval2._Myfirst >> 1) * 2,8);
    JStack_128.filters._Mypair._Myval2._Myend = (FilterType *)0x0;
    JStack_128.filters._Mypair._Myval2._Myfirst = (FilterType *)0x0;
    JStack_128.filters._Mypair._Myval2._Mylast = (FilterType *)0x0;
  }
  pJVar2 = QStack_178.jointGroups._Mypair._Myval2._Mylast;
  pJVar4 = QStack_178.jointGroups._Mypair._Myval2._Myfirst;
  if (QStack_178.jointGroups._Mypair._Myval2._Myfirst != (JointGroup<float> *)0x0) {
    for (; pJVar4 != pJVar2; pJVar4 = pJVar4 + 1) {
      rl4::JointGroup<float>::~JointGroup<float>(pJVar4);
    }
    (**(code **)(*(undefined **)QStack_178.jointGroups._Mypair._Myval1 + 0x10))
              (QStack_178.jointGroups._Mypair._Myval1,
               QStack_178.jointGroups._Mypair._Myval2._Myfirst,
               (((longlong)QStack_178.jointGroups._Mypair._Myval2._Myend -
                (longlong)QStack_178.jointGroups._Mypair._Myval2._Myfirst) / 0x88) * 0x88,8);
    QStack_178.jointGroups._Mypair._Myval2._Myend = (JointGroup<float> *)0x0;
    QStack_178.jointGroups._Mypair._Myval2._Myfirst = (JointGroup<float> *)0x0;
    QStack_178.jointGroups._Mypair._Myval2._Mylast = (JointGroup<float> *)0x0;
  }
  rl4::JointsBuilder::~JointsBuilder((JointsBuilder *)&QStack_178);
  return;
}

// `scalar_deleting_destructor' @ 14c56e350

void * __thiscall
QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
::_scalar_deleting_destructor_
          (QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
           *this,uint param_1)

{
  rltests::qs::QuaternionReader::~QuaternionReader((QuaternionReader *)&this->field_0x70);
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)(this + 1));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)&this->field_0x70);
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x10);
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// CreateTest @ 14c56e3c0

Test * __thiscall
testing::internal::
TestFactoryImpl<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
::CreateTest(TestFactoryImpl<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x90);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &QuaternionJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    rltests::qs::QuaternionReader::QuaternionReader
              ((QuaternionReader *)&this_00[1].gtest_flag_saver_);
    this_00->_padding_ =
         (longlong)
         &
         ___7__QuaternionJointStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_UPassthroughAdapter_rl4___std____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c56e430

void * __thiscall
testing::internal::
TestFactoryImpl<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c56e470

void * __thiscall
`anonymous_namespace'::
QuaternionJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  rltests::qs::QuaternionReader::~QuaternionReader((QuaternionReader *)((longlong)this + 0x70));
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// TestBody @ 14c56e4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::TestBody(QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
           *this)

{
  undefined1 *puVar1;
  JointGroup<float> *pJVar2;
  ushort uVar3;
  JointGroup<float> *pJVar4;
  undefined1 auStack_1a8 [32];
  _Value_init_tag a_Stack_188 [16];
  QuaternionJointsBuilder<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  QStack_178;
  JointBehaviorFilter JStack_128;
  QuaternionJointsEvaluator<float> *pQStack_100;
  JointGroup<float> JStack_f8;
  undefined1 auStack_68 [56];
  longlong *plStack_30;
  QuaternionJointsEvaluator<float> *pQStack_28;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  QStack_178._padding_ =
       (longlong)
       &
       ___7__QuaternionJointsBuilder_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3__rl4__6B_
  ;
  puVar1 = &this->field_0x10;
  QStack_178.config._11_1_ = JStack_128.filters._Mypair._Myval1._3_1_;
  QStack_178.config.calculationType = SSE;
  QStack_178.config.loadJoints = true;
  QStack_178.config.loadBlendShapes = true;
  QStack_178.config.loadAnimatedMaps = true;
  QStack_178.config.loadMachineLearnedBehavior = true;
  QStack_178.config.loadRBFBehavior = true;
  QStack_178.config.loadTwistSwingBehavior = true;
  QStack_178.config.translationType = Vector;
  QStack_178.config.rotationType = EulerAngles;
  QStack_178.config.rotationOrder = XYZ;
  QStack_178.config.scaleType = Vector;
  QStack_178.config.translationPruningThreshold = 0.0;
  QStack_178.config.rotationPruningThreshold = 0.0;
  QStack_178.config.scalePruningThreshold = 0.0;
  QStack_178.memRes = (MemoryResource *)puVar1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  QStack_178.jointGroups._Mypair._Myval2._Myfirst = (JointGroup<float> *)0x0;
  QStack_178.jointGroups._Mypair._Myval2._Mylast = (JointGroup<float> *)0x0;
  QStack_178.jointGroups._Mypair._Myval1 =
       (PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  if (puVar1 != (undefined1 *)0x0) {
    QStack_178.jointGroups._Mypair._Myval1 =
         (PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>)puVar1;
  }
  QStack_178.jointGroups._Mypair._Myval2._Myend = (JointGroup<float> *)0x0;
  QStack_178.rotationUnit = degrees;
  rl4::JointBehaviorFilter::JointBehaviorFilter
            (&JStack_128,(Reader *)&this->field_0x18,(MemoryResource *)puVar1);
  rl4::JointBehaviorFilter::include(&JStack_128,Quaternion);
  pJVar4 = rl4::JointGroup<float>::JointGroup<float>(&JStack_f8,QStack_178.memRes);
  uVar3 = rl4::JointBehaviorFilter::getJointGroupCount(&JStack_128);
  std::
  vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>
  ::_Resize<rl4::JointGroup<float>_>(&QStack_178.jointGroups,(ulonglong)uVar3,pJVar4);
  rl4::JointGroup<float>::~JointGroup<float>(&JStack_f8);
  pJVar2 = QStack_178.jointGroups._Mypair._Myval2._Mylast;
  for (pJVar4 = QStack_178.jointGroups._Mypair._Myval2._Myfirst; pJVar4 != pJVar2;
      pJVar4 = pJVar4 + 1) {
    uVar3 = rl4::JointBehaviorFilter::getLODCount(&JStack_128);
    std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>::
    _Resize<std::_Value_init_tag>(&pJVar4->lods,(ulonglong)uVar3,a_Stack_188);
  }
  rl4::
  QuaternionJointsBuilder<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  ::fillStorage(&QStack_178,&JStack_128);
  rl4::
  QuaternionJointsBuilder<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  ::build(&QStack_178,
          (unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_> *)
          auStack_68);
  rl4::QuaternionJointsEvaluator<float>::Accessor::assertRawDataEqual(pQStack_28,1);
  if (pQStack_28 != (QuaternionJointsEvaluator<float> *)0x0) {
    pQStack_100 = pQStack_28;
    if (plStack_30 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plStack_30 + 0x10))(plStack_30,&pQStack_100);
  }
  if (plStack_30 != (longlong *)0x0) {
    (**(code **)(*plStack_30 + 0x20))(plStack_30,plStack_30 != (longlong *)auStack_68);
    plStack_30 = (longlong *)0x0;
  }
  if (JStack_128.filters._Mypair._Myval2._Myfirst != (FilterType *)0x0) {
    (**(code **)(*(longlong *)
                  CONCAT44(JStack_128.filters._Mypair._Myval1._4_4_,
                           JStack_128.filters._Mypair._Myval1._0_4_) + 0x10))
              ((longlong *)
               CONCAT44(JStack_128.filters._Mypair._Myval1._4_4_,
                        JStack_128.filters._Mypair._Myval1._0_4_),
               JStack_128.filters._Mypair._Myval2._Myfirst,
               ((longlong)JStack_128.filters._Mypair._Myval2._Myend -
                (longlong)JStack_128.filters._Mypair._Myval2._Myfirst >> 1) * 2,8);
    JStack_128.filters._Mypair._Myval2._Myend = (FilterType *)0x0;
    JStack_128.filters._Mypair._Myval2._Myfirst = (FilterType *)0x0;
    JStack_128.filters._Mypair._Myval2._Mylast = (FilterType *)0x0;
  }
  pJVar2 = QStack_178.jointGroups._Mypair._Myval2._Mylast;
  pJVar4 = QStack_178.jointGroups._Mypair._Myval2._Myfirst;
  if (QStack_178.jointGroups._Mypair._Myval2._Myfirst != (JointGroup<float> *)0x0) {
    for (; pJVar4 != pJVar2; pJVar4 = pJVar4 + 1) {
      rl4::JointGroup<float>::~JointGroup<float>(pJVar4);
    }
    (**(code **)(*(undefined **)QStack_178.jointGroups._Mypair._Myval1 + 0x10))
              (QStack_178.jointGroups._Mypair._Myval1,
               QStack_178.jointGroups._Mypair._Myval2._Myfirst,
               (((longlong)QStack_178.jointGroups._Mypair._Myval2._Myend -
                (longlong)QStack_178.jointGroups._Mypair._Myval2._Myfirst) / 0x88) * 0x88,8);
    QStack_178.jointGroups._Mypair._Myval2._Myend = (JointGroup<float> *)0x0;
    QStack_178.jointGroups._Mypair._Myval2._Myfirst = (JointGroup<float> *)0x0;
    QStack_178.jointGroups._Mypair._Myval2._Mylast = (JointGroup<float> *)0x0;
  }
  rl4::JointsBuilder::~JointsBuilder((JointsBuilder *)&QStack_178);
  return;
}

// `scalar_deleting_destructor' @ 14c56e4f0

void * __thiscall
QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::_scalar_deleting_destructor_
          (QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
           *this,uint param_1)

{
  rltests::qs::QuaternionReader::~QuaternionReader((QuaternionReader *)&this->field_0x70);
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)(this + 1));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)&this->field_0x70);
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x10);
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// CreateTest @ 14c56e560

Test * __thiscall
testing::internal::
TestFactoryImpl<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
::CreateTest(TestFactoryImpl<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x90);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &QuaternionJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    rltests::qs::QuaternionReader::QuaternionReader
              ((QuaternionReader *)&this_00[1].gtest_flag_saver_);
    this_00->_padding_ =
         (longlong)
         &
         ___7__QuaternionJointStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___std____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c56e5d0

void * __thiscall
testing::internal::
TestFactoryImpl<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// _Copy @ 14c56e610

_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
::_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create___V___ManagedInstance_V__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__U__VectorizedJointGroupQuaternionCalculationStrategy_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUdegrees_impl_tdm___tdm___0A__rl4___rl4__U__JointGroupQuaternionCalculationStrategy_M_4__impl_pma__QEAA_AV__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__XZ_XPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Move @ 14c56e630

_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
::_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create___V___ManagedInstance_V__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__U__VectorizedJointGroupQuaternionCalculationStrategy_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUdegrees_impl_tdm___tdm___0A__rl4___rl4__U__JointGroupQuaternionCalculationStrategy_M_4__impl_pma__QEAA_AV__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__XZ_XPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Do_call @ 14c56e650

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
::_Do_call(void *this,JointGroupQuaternionCalculationStrategy<float> **param_1)

{
  JointGroupQuaternionCalculationStrategy<float> *pJVar1;
  
  pJVar1 = *param_1;
  (**(code **)*pJVar1)(pJVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00014c56e687. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))
            (*(longlong **)((longlong)this + 8),pJVar1,8);
  return;
}

// _Target_type @ 14c56e6a0

type_info * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_class_std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>*___ptr64)>_>___cdecl_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>*___ptr64)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>(void)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Get @ 14c56e6b0

void * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Delete_this @ 14c56e6c0

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x10);
    return;
  }
  return;
}

// calculate @ 14c56e6e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
rl4::
VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
::calculate(VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
            *this,JointGroup<float> *param_1,ArrayView<float_const_> *param_2,
           ArrayView<float> *param_3,ushort param_4)

{
  ushort *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  uint uVar31;
  T256<trimd::scalar::T128<float>_> *pTVar32;
  T256<trimd::scalar::T128<float>_> *pTVar33;
  float *pfVar34;
  uint uVar35;
  float *pfVar36;
  uint uVar37;
  float *pfVar38;
  ulonglong uVar39;
  float *pfVar40;
  LODRegion *pLVar41;
  ulonglong uVar42;
  longlong lVar43;
  uint uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined1 auStack_1388 [32];
  float local_1368;
  quat<float> local_1360;
  vec<3,tdm::ang<float,tdm::impl::radians>_> local_1350;
  float local_1340;
  float local_133c;
  float local_1338;
  float local_1334;
  float local_1330;
  float local_132c;
  float local_1328;
  float local_1324;
  float local_1320;
  float local_131c;
  float local_1318;
  float local_1314;
  float local_1310;
  float local_130c;
  float local_1308;
  float local_1304;
  float local_1300;
  float local_12fc;
  float local_12f8;
  float local_12f4;
  float local_12f0;
  float local_12ec;
  float local_12e8;
  float local_12e4;
  float local_12e0;
  float local_12dc;
  float local_12d8;
  float local_12d4;
  float local_12d0;
  T256<trimd::scalar::T128<float>_> local_12c8;
  T256<trimd::scalar::T128<float>_> local_12a8;
  T256<trimd::scalar::T128<float>_> local_1288;
  T256<trimd::scalar::T128<float>_> local_1268;
  float *local_1248;
  float *local_1240;
  float *local_1238;
  ushort *local_1230;
  LODRegion *local_1228;
  longlong local_1220;
  undefined8 local_1218;
  float fStack_1210;
  float fStack_120c;
  undefined8 local_1208;
  float fStack_1200;
  float fStack_11fc;
  undefined8 local_11f8;
  undefined8 uStack_11f0;
  undefined8 local_11e8;
  undefined8 uStack_11e0;
  undefined8 local_11d8;
  undefined8 uStack_11d0;
  undefined8 local_11c8;
  undefined8 uStack_11c0;
  T256<trimd::scalar::T128<float>_> local_11b8;
  T256<trimd::scalar::T128<float>_> local_1198;
  T256<trimd::scalar::T128<float>_> local_1178;
  undefined4 local_1158;
  undefined4 local_1154;
  undefined4 local_1150;
  undefined4 local_114c;
  undefined4 local_1148;
  longlong local_1140;
  float local_1138;
  float fStack_1134;
  float fStack_1130;
  float fStack_112c;
  float local_1128;
  float fStack_1124;
  float fStack_1120;
  float fStack_111c;
  T256<trimd::scalar::T128<float>_> local_1118;
  float local_10f8;
  float fStack_10f4;
  float fStack_10f0;
  float fStack_10ec;
  float local_10e8;
  float fStack_10e4;
  float fStack_10e0;
  float fStack_10dc;
  undefined4 local_10d8;
  ArrayView<float> *local_10d0;
  float local_10c8;
  float fStack_10c4;
  float fStack_10c0;
  float fStack_10bc;
  float local_10b8;
  float fStack_10b4;
  float fStack_10b0;
  float fStack_10ac;
  ArrayView<float_const_> *local_10a8;
  float local_10a0;
  float fStack_109c;
  float fStack_1098;
  float fStack_1094;
  float local_1090;
  float fStack_108c;
  float fStack_1088;
  float fStack_1084;
  float local_1080;
  float fStack_107c;
  float fStack_1078;
  float fStack_1074;
  float local_1070;
  float fStack_106c;
  float fStack_1068;
  float fStack_1064;
  float local_1060;
  float fStack_105c;
  float fStack_1058;
  float fStack_1054;
  float local_1050;
  float fStack_104c;
  float fStack_1048;
  float fStack_1044;
  float local_1040;
  float fStack_103c;
  float fStack_1038;
  float fStack_1034;
  float local_1030;
  float fStack_102c;
  float fStack_1028;
  float fStack_1024;
  float local_1020;
  float fStack_101c;
  float fStack_1018;
  float fStack_1014;
  float local_1010;
  float fStack_100c;
  float fStack_1008;
  float fStack_1004;
  T256<trimd::scalar::T128<float>_> local_1000;
  float *local_fe0;
  float local_fd8;
  float fStack_fd4;
  float fStack_fd0;
  float fStack_fcc;
  vec<3,tdm::ang<float,tdm::impl::radians>_> local_fc8;
  vec<3,tdm::ang<float,tdm::impl::radians>_> local_fb8;
  T256<trimd::scalar::T128<float>_> local_fa8;
  longlong local_f88;
  float local_f48;
  float fStack_f44;
  float fStack_f40;
  float fStack_f3c;
  float local_f38;
  float fStack_f34;
  float fStack_f30;
  float fStack_f2c;
  float local_f28;
  float fStack_f24;
  float fStack_f20;
  float fStack_f1c;
  T256<trimd::scalar::T128<float>_> local_ed8;
  T256<trimd::scalar::T128<float>_> local_eb8;
  T256<trimd::scalar::T128<float>_> local_e98;
  T256<trimd::scalar::T128<float>_> local_e78;
  T256<trimd::scalar::T128<float>_> local_e58;
  T256<trimd::scalar::T128<float>_> local_e38;
  T256<trimd::scalar::T128<float>_> local_e18;
  T256<trimd::scalar::T128<float>_> local_df8;
  T256<trimd::scalar::T128<float>_> local_dd8;
  T256<trimd::scalar::T128<float>_> local_db8;
  T256<trimd::scalar::T128<float>_> local_d98;
  T256<trimd::scalar::T128<float>_> local_d78;
  undefined8 local_d58;
  undefined8 uStack_d50;
  undefined8 local_d48;
  undefined8 uStack_d40;
  undefined8 local_d38;
  undefined8 uStack_d30;
  undefined8 local_d28;
  undefined8 uStack_d20;
  float local_d18 [4];
  float local_d08 [2];
  float afStack_d00 [2];
  float local_cf8 [4];
  float local_ce8 [2];
  float afStack_ce0 [2];
  float local_cd8 [4];
  float local_cc8;
  float fStack_cc4;
  float fStack_cc0;
  float fStack_cbc;
  float local_cb8 [4];
  float local_ca8;
  float fStack_ca4;
  float fStack_ca0;
  float fStack_c9c;
  T256<trimd::scalar::T128<float>_> local_c98 [18];
  T256<trimd::scalar::T128<float>_> local_a58;
  T256<trimd::scalar::T128<float>_> local_a38;
  T256<trimd::scalar::T128<float>_> local_a18;
  T256<trimd::scalar::T128<float>_> local_9f8;
  T256<trimd::scalar::T128<float>_> local_9d8;
  T256<trimd::scalar::T128<float>_> local_9b8;
  T256<trimd::scalar::T128<float>_> local_998;
  T256<trimd::scalar::T128<float>_> local_978;
  T256<trimd::scalar::T128<float>_> local_958;
  T256<trimd::scalar::T128<float>_> local_938;
  T256<trimd::scalar::T128<float>_> local_918;
  T256<trimd::scalar::T128<float>_> local_8f8;
  T256<trimd::scalar::T128<float>_> local_8d8;
  T256<trimd::scalar::T128<float>_> local_8b8;
  T256<trimd::scalar::T128<float>_> local_898;
  T256<trimd::scalar::T128<float>_> local_878;
  T256<trimd::scalar::T128<float>_> local_858;
  T256<trimd::scalar::T128<float>_> local_838;
  T256<trimd::scalar::T128<float>_> local_818;
  T256<trimd::scalar::T128<float>_> local_7f8;
  float *local_7d8;
  float afStack_7d0 [6];
  T256<trimd::scalar::T128<float>_> local_7b8;
  T256<trimd::scalar::T128<float>_> local_798;
  T256<trimd::scalar::T128<float>_> local_778;
  T128<float> local_758;
  T128<float> local_748;
  float *local_738;
  float afStack_730 [2];
  T128<float> local_728;
  T128<float> local_718;
  T128<float> local_708;
  T128<float> local_6f8;
  T128<float> local_6e8;
  T128<float> local_6d8;
  T128<float> local_6c8;
  T128<float> local_6b8;
  T128<float> local_6a8;
  float *local_698;
  float afStack_690 [2];
  T128<float> local_688;
  float *local_678;
  float afStack_670 [2];
  T128<float> local_668;
  T128<float> local_658;
  T128<float> local_648;
  T128<float> local_638;
  T128<float> local_628;
  T128<float> local_618;
  T128<float> local_608;
  T128<float> local_5f8;
  T128<float> local_5e8;
  T128<float> local_5d8;
  T128<float> local_5c8;
  T128<float> local_5b8;
  T128<float> local_5a8;
  T128<float> local_598;
  T128<float> local_588;
  T128<float> local_578;
  T128<float> local_568;
  T128<float> local_558;
  T128<float> local_548;
  T128<float> local_538;
  T128<float> local_528;
  T128<float> local_518;
  T128<float> local_508;
  T128<float> local_4f8;
  T128<float> local_4e8;
  T128<float> local_4d8;
  T128<float> local_4c8;
  T128<float> local_4b8;
  T128<float> local_4a8;
  T128<float> local_498;
  T128<float> local_488;
  T128<float> local_478;
  T128<float> local_468;
  T256<trimd::scalar::T128<float>_> local_458;
  T256<trimd::scalar::T128<float>_> local_438;
  T256<trimd::scalar::T128<float>_> local_418;
  T256<trimd::scalar::T128<float>_> local_3f8;
  T256<trimd::scalar::T128<float>_> local_3d8;
  T256<trimd::scalar::T128<float>_> local_3b8;
  T256<trimd::scalar::T128<float>_> local_398;
  T256<trimd::scalar::T128<float>_> local_378;
  T256<trimd::scalar::T128<float>_> local_358;
  T256<trimd::scalar::T128<float>_> local_338;
  T256<trimd::scalar::T128<float>_> local_318;
  T256<trimd::scalar::T128<float>_> local_2f8;
  T256<trimd::scalar::T128<float>_> local_2d8;
  T256<trimd::scalar::T128<float>_> local_2b8;
  T256<trimd::scalar::T128<float>_> local_298;
  T256<trimd::scalar::T128<float>_> local_278;
  T256<trimd::scalar::T128<float>_> local_258;
  T256<trimd::scalar::T128<float>_> local_238;
  T256<trimd::scalar::T128<float>_> local_218;
  T256<trimd::scalar::T128<float>_> local_1f8;
  T256<trimd::scalar::T128<float>_> local_1d8;
  T256<trimd::scalar::T128<float>_> local_1b8;
  T256<trimd::scalar::T128<float>_> local_198;
  T256<trimd::scalar::T128<float>_> local_178;
  T256<trimd::scalar::T128<float>_> local_158;
  T256<trimd::scalar::T128<float>_> local_138;
  T256<trimd::scalar::T128<float>_> local_118;
  T256<trimd::scalar::T128<float>_> local_f8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_1388;
  pfVar34 = (float *)(param_1->outputIndices)._Mypair._Myval2._Myfirst;
  uVar39 = (ulonglong)param_4;
  local_1248 = (param_1->values)._Mypair._Myval2._Myfirst;
  local_1140 = uVar39 * 3;
  local_1228 = (param_1->lods)._Mypair._Myval2._Myfirst;
  local_1230 = (param_1->inputIndices)._Mypair._Myval2._Myfirst;
  uVar42 = (ulonglong)local_1228[uVar39].inputLODs.size;
  local_fe0 = (float *)((longlong)pfVar34 + (ulonglong)local_1228[uVar39].outputLODs.size * 2);
  local_1238 = (float *)((longlong)pfVar34 +
                        (ulonglong)local_1228[uVar39].outputLODs.sizePaddedToLastFullBlock * 2);
  local_f88 = (ulonglong)param_1->colCount << 4;
  lVar43 = (ulonglong)param_1->colCount << 7;
  local_1240 = (float *)((longlong)pfVar34 +
                        (ulonglong)local_1228[uVar39].outputLODs.sizePaddedToSecondLastFullBlock * 2
                        );
  fVar67 = __real_42652ee1;
  local_1220 = lVar43;
  local_10d0 = param_3;
  local_10a8 = param_2;
  if (pfVar34 < local_1240) {
    pfVar36 = local_1248 + 0xe;
    local_1208 = pfVar34;
    do {
      puVar1 = local_1230;
      pfVar38 = param_2->ptr;
      uVar39 = 0;
      fVar69 = 0.0;
      fVar70 = 0.0;
      fVar71 = 0.0;
      fVar72 = 0.0;
      fVar49 = 0.0;
      fVar50 = 0.0;
      fVar51 = 0.0;
      fVar52 = 0.0;
      fVar53 = 0.0;
      fVar54 = 0.0;
      fVar55 = 0.0;
      fVar56 = 0.0;
      fVar57 = 0.0;
      fVar58 = 0.0;
      local_7b8.data1.data._Elems[0] = 0.0;
      local_7b8.data1.data._Elems[1] = 0.0;
      local_7b8.data1.data._Elems[2] = 0.0;
      local_7b8.data1.data._Elems[3] = 0.0;
      local_7b8.data2.data._Elems[0] = 0.0;
      local_7b8.data2.data._Elems[1] = 0.0;
      local_7b8.data2.data._Elems[2] = 0.0;
      local_7b8.data2.data._Elems[3] = 0.0;
      local_7d8 = (float *)0x0;
      afStack_7d0[0] = 0.0;
      afStack_7d0[1] = 0.0;
      afStack_7d0[2] = 0.0;
      afStack_7d0[3] = 0.0;
      afStack_7d0[4] = 0.0;
      afStack_7d0[5] = 0.0;
      local_778.data1.data._Elems[0] = 0.0;
      local_778.data1.data._Elems[1] = 0.0;
      local_778.data1.data._Elems[2] = 0.0;
      local_778.data1.data._Elems[3] = 0.0;
      local_778.data2.data._Elems[0] = 0.0;
      local_778.data2.data._Elems[1] = 0.0;
      local_778.data2.data._Elems[2] = 0.0;
      local_778.data2.data._Elems[3] = 0.0;
      local_7f8.data1.data._Elems[0] = ___xmm_3f8000003f8000003f8000003f800000;
      local_7f8.data1.data._Elems[1] = _UNK_15076b1f4;
      local_7f8.data1.data._Elems[2] = _UNK_15076b1f8;
      local_7f8.data1.data._Elems[3] = _UNK_15076b1fc;
      local_7f8.data2.data._Elems[0] = ___xmm_3f8000003f8000003f8000003f800000;
      local_7f8.data2.data._Elems[1] = _UNK_15076b1f4;
      local_7f8.data2.data._Elems[2] = _UNK_15076b1f8;
      local_7f8.data2.data._Elems[3] = _UNK_15076b1fc;
      fVar59 = 0.0;
      fVar68 = 0.0;
      fVar45 = 0.0;
      fVar46 = 0.0;
      fVar47 = 0.0;
      fVar48 = 0.0;
      fVar60 = _UNK_15076b1f4;
      fVar61 = _UNK_15076b1f8;
      fVar62 = _UNK_15076b1fc;
      fVar63 = ___xmm_3f8000003f8000003f8000003f800000;
      fVar64 = _UNK_15076b1f4;
      fVar65 = _UNK_15076b1f8;
      fVar66 = _UNK_15076b1fc;
      local_1218 = pfVar36;
      uVar29 = local_7b8.data2.data._Elems._0_8_;
      uVar30 = local_7b8.data2.data._Elems._8_8_;
      if (uVar42 != 0) {
        do {
          local_7b8.data2.data._Elems._8_8_ = uVar30;
          local_7b8.data2.data._Elems._0_8_ = uVar29;
          local_1118.data1.data._Elems._0_8_ = *(undefined8 *)(pfVar36 + -0xe);
          local_1118.data1.data._Elems._8_8_ = *(undefined8 *)(pfVar36 + -0xc);
          local_1118.data2.data._Elems._0_8_ = *(undefined8 *)(pfVar36 + -10);
          local_1118.data2.data._Elems._8_8_ = *(undefined8 *)(pfVar36 + -8);
          local_1198.data1.data._Elems._0_8_ = *(undefined8 *)(pfVar36 + -6);
          local_1198.data1.data._Elems._8_8_ = *(undefined8 *)(pfVar36 + -4);
          local_1198.data2.data._Elems._0_8_ = *(undefined8 *)(pfVar36 + -2);
          local_1198.data2.data._Elems._8_8_ = *(undefined8 *)pfVar36;
          local_1178.data1.data._Elems._0_8_ = *(undefined8 *)(pfVar36 + 2);
          local_1178.data1.data._Elems._8_8_ = *(undefined8 *)(pfVar36 + 4);
          local_1178.data2.data._Elems._0_8_ = *(undefined8 *)(pfVar36 + 6);
          local_1178.data2.data._Elems._8_8_ = *(undefined8 *)(pfVar36 + 8);
          local_11b8.data1.data._Elems._0_8_ = *(undefined8 *)(pfVar36 + 10);
          local_11b8.data1.data._Elems._8_8_ = *(undefined8 *)(pfVar36 + 0xc);
          local_11b8.data2.data._Elems._0_8_ = *(undefined8 *)(pfVar36 + 0xe);
          local_11b8.data2.data._Elems._8_8_ = *(undefined8 *)(pfVar36 + 0x10);
          local_1000.data1.data._Elems[0] = pfVar38[puVar1[uVar39]];
          local_d98.data1.data._Elems[0] = ___xmm_bf800000bf800000bf800000bf800000;
          local_d98.data1.data._Elems[1] = _UNK_15076c664;
          local_d98.data1.data._Elems[2] = _UNK_15076c668;
          local_d98.data1.data._Elems[3] = _UNK_15076c66c;
          local_d98.data2.data._Elems[0] = ___xmm_bf800000bf800000bf800000bf800000;
          local_d98.data2.data._Elems[1] = _UNK_15076c664;
          local_d98.data2.data._Elems[2] = _UNK_15076c668;
          local_d98.data2.data._Elems[3] = _UNK_15076c66c;
          local_e58.data1.data._Elems[0] = ___xmm_3f8000003f8000003f8000003f800000;
          local_e58.data1.data._Elems[1] = _UNK_15076b1f4;
          local_e58.data1.data._Elems[2] = _UNK_15076b1f8;
          local_e58.data1.data._Elems[3] = _UNK_15076b1fc;
          local_e58.data2.data._Elems[0] = ___xmm_3f8000003f8000003f8000003f800000;
          local_e58.data2.data._Elems[1] = _UNK_15076b1f4;
          local_e58.data2.data._Elems[2] = _UNK_15076b1f8;
          local_e58.data2.data._Elems[3] = _UNK_15076b1fc;
          local_1000.data1.data._Elems[1] = local_1000.data1.data._Elems[0];
          local_1000.data1.data._Elems[2] = local_1000.data1.data._Elems[0];
          local_1000.data1.data._Elems[3] = local_1000.data1.data._Elems[0];
          local_1000.data2.data._Elems[0] = local_1000.data1.data._Elems[0];
          local_1000.data2.data._Elems[1] = local_1000.data1.data._Elems[0];
          local_1000.data2.data._Elems[2] = local_1000.data1.data._Elems[0];
          local_1000.data2.data._Elems[3] = local_1000.data1.data._Elems[0];
          trimd::fallback::operator-<trimd::scalar::T128<float>_>(&local_a58,&local_e58,&local_1000)
          ;
          local_d78.data1.data._Elems[0] = 0.0;
          local_d78.data1.data._Elems[1] = 0.0;
          local_d78.data1.data._Elems[2] = 0.0;
          local_d78.data1.data._Elems[3] = 0.0;
          local_d78.data2.data._Elems[0] = 0.0;
          local_d78.data2.data._Elems[1] = 0.0;
          local_d78.data2.data._Elems[2] = 0.0;
          local_d78.data2.data._Elems[3] = 0.0;
          trimd::fallback::operator>=<trimd::scalar::T128<float>_>
                    (&local_ed8,&local_11b8,&local_d78);
          pTVar32 = trimd::fallback::operator&<trimd::scalar::T128<float>_>
                              (&local_8f8,&local_e58,&local_ed8);
          pTVar33 = trimd::fallback::andnot<trimd::scalar::T128<float>_>
                              (&local_a18,&local_ed8,&local_d98);
          trimd::fallback::operator|<trimd::scalar::T128<float>_>(&local_a38,pTVar33,pTVar32);
          trimd::fallback::operator*<trimd::scalar::T128<float>_>(local_c98,&local_a38,&local_a58);
          pTVar32 = trimd::fallback::operator*<trimd::scalar::T128<float>_>
                              (&local_998,&local_1118,&local_1000);
          local_1118.data1.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data1).data._Elems;
          local_1118.data1.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data1).data._Elems + 2);
          local_1118.data2.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data2).data._Elems;
          local_1118.data2.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data2).data._Elems + 2);
          pTVar32 = trimd::fallback::operator*<trimd::scalar::T128<float>_>
                              (&local_9b8,&local_1198,&local_1000);
          local_1198.data1.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data1).data._Elems;
          local_1198.data1.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data1).data._Elems + 2);
          local_1198.data2.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data2).data._Elems;
          local_1198.data2.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data2).data._Elems + 2);
          pTVar32 = trimd::fallback::operator*<trimd::scalar::T128<float>_>
                              (&local_9d8,&local_1178,&local_1000);
          local_1178.data1.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data1).data._Elems;
          local_1178.data1.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data1).data._Elems + 2);
          local_1178.data2.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data2).data._Elems;
          local_1178.data2.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data2).data._Elems + 2);
          pTVar32 = trimd::fallback::operator*<trimd::scalar::T128<float>_>
                              (&local_9f8,&local_11b8,&local_1000);
          pTVar32 = trimd::fallback::operator+<trimd::scalar::T128<float>_>
                              (&local_978,pTVar32,local_c98);
          local_11b8.data1.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data1).data._Elems;
          local_11b8.data1.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data1).data._Elems + 2);
          local_11b8.data2.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data2).data._Elems;
          local_11b8.data2.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data2).data._Elems + 2);
          trimd::fallback::operator*<trimd::scalar::T128<float>_>
                    (&local_eb8,&local_1118,&local_1118);
          trimd::fallback::operator*<trimd::scalar::T128<float>_>
                    (&local_e78,&local_1198,&local_1198);
          trimd::fallback::operator*<trimd::scalar::T128<float>_>
                    (&local_e98,&local_1178,&local_1178);
          trimd::fallback::operator*<trimd::scalar::T128<float>_>
                    (&local_e38,&local_11b8,&local_11b8);
          pTVar32 = trimd::fallback::operator+<trimd::scalar::T128<float>_>
                              (&local_898,&local_eb8,&local_e78);
          pTVar32 = trimd::fallback::operator+<trimd::scalar::T128<float>_>
                              (&local_8b8,pTVar32,&local_e98);
          trimd::fallback::operator+<trimd::scalar::T128<float>_>(&local_e18,pTVar32,&local_e38);
          trimd::fallback::rsqrt<trimd::scalar::T128<float>_>(&local_798,&local_e18);
          trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=(&local_1118,&local_798);
          trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=(&local_1198,&local_798);
          trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=(&local_1178,&local_798);
          trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=(&local_11b8,&local_798);
          uVar17 = local_1178.data2.data._Elems._8_8_;
          uVar16 = local_1178.data2.data._Elems._0_8_;
          uVar15 = local_1178.data1.data._Elems._8_8_;
          uVar14 = local_1178.data1.data._Elems._0_8_;
          local_158.data1.data._Elems[0] = local_1178.data1.data._Elems[0];
          local_158.data1.data._Elems[1] = local_1178.data1.data._Elems[1];
          local_158.data1.data._Elems[2] = local_1178.data1.data._Elems[2];
          local_158.data1.data._Elems[3] = local_1178.data1.data._Elems[3];
          local_158.data2.data._Elems[0] = local_1178.data2.data._Elems[0];
          local_158.data2.data._Elems[1] = local_1178.data2.data._Elems[1];
          local_158.data2.data._Elems[2] = local_1178.data2.data._Elems[2];
          local_158.data2.data._Elems[3] = local_1178.data2.data._Elems[3];
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_158,(T256<trimd::scalar::T128<float>_> *)&local_7d8);
          uVar13 = local_1198.data2.data._Elems._8_8_;
          uVar12 = local_1198.data2.data._Elems._0_8_;
          uVar11 = local_1198.data1.data._Elems._8_8_;
          uVar10 = local_1198.data1.data._Elems._0_8_;
          local_518.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data1).data._Elems;
          local_518.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data1).data._Elems + 2);
          local_508.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data2).data._Elems;
          local_508.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data2).data._Elems + 2);
          local_178.data1.data._Elems[0] = local_1198.data1.data._Elems[0];
          local_178.data1.data._Elems[1] = local_1198.data1.data._Elems[1];
          local_178.data1.data._Elems[2] = local_1198.data1.data._Elems[2];
          local_178.data1.data._Elems[3] = local_1198.data1.data._Elems[3];
          local_178.data2.data._Elems[0] = local_1198.data2.data._Elems[0];
          local_178.data2.data._Elems[1] = local_1198.data2.data._Elems[1];
          local_178.data2.data._Elems[2] = local_1198.data2.data._Elems[2];
          local_178.data2.data._Elems[3] = local_1198.data2.data._Elems[3];
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_178,&local_778);
          uVar21 = local_1118.data2.data._Elems._8_8_;
          uVar20 = local_1118.data2.data._Elems._0_8_;
          uVar19 = local_1118.data1.data._Elems._8_8_;
          uVar18 = local_1118.data1.data._Elems._0_8_;
          local_538.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data1).data._Elems;
          local_538.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data1).data._Elems + 2);
          local_528.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data2).data._Elems;
          local_528.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data2).data._Elems + 2);
          local_198.data1.data._Elems[0] = local_1118.data1.data._Elems[0];
          local_198.data1.data._Elems[1] = local_1118.data1.data._Elems[1];
          local_198.data1.data._Elems[2] = local_1118.data1.data._Elems[2];
          local_198.data1.data._Elems[3] = local_1118.data1.data._Elems[3];
          local_198.data2.data._Elems[0] = local_1118.data2.data._Elems[0];
          local_198.data2.data._Elems[1] = local_1118.data2.data._Elems[1];
          local_198.data2.data._Elems[2] = local_1118.data2.data._Elems[2];
          local_198.data2.data._Elems[3] = local_1118.data2.data._Elems[3];
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_198,&local_7f8);
          uVar8 = local_11b8.data2.data._Elems._8_8_;
          uVar6 = local_11b8.data2.data._Elems._0_8_;
          uVar4 = local_11b8.data1.data._Elems._8_8_;
          uVar2 = local_11b8.data1.data._Elems._0_8_;
          local_558.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data1).data._Elems;
          local_558.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data1).data._Elems + 2);
          local_548.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data2).data._Elems;
          local_548.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data2).data._Elems + 2);
          local_218.data1.data._Elems[0] = local_11b8.data1.data._Elems[0];
          local_218.data1.data._Elems[1] = local_11b8.data1.data._Elems[1];
          local_218.data1.data._Elems[2] = local_11b8.data1.data._Elems[2];
          local_218.data1.data._Elems[3] = local_11b8.data1.data._Elems[3];
          local_218.data2.data._Elems[0] = local_11b8.data2.data._Elems[0];
          local_218.data2.data._Elems[1] = local_11b8.data2.data._Elems[1];
          local_218.data2.data._Elems[2] = local_11b8.data2.data._Elems[2];
          local_218.data2.data._Elems[3] = local_11b8.data2.data._Elems[3];
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_218,&local_7b8);
          local_718.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data1).data._Elems;
          local_718.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data1).data._Elems + 2);
          local_708.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data2).data._Elems;
          local_708.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data2).data._Elems + 2);
          trimd::scalar::T128<float>::operator+=(&local_718,&local_558);
          trimd::scalar::T128<float>::operator+=(&local_708,&local_548);
          local_6f8.data._Elems[0] = local_718.data._Elems[0];
          local_6f8.data._Elems[1] = local_718.data._Elems[1];
          local_6f8.data._Elems[2] = local_718.data._Elems[2];
          local_6f8.data._Elems[3] = local_718.data._Elems[3];
          local_6e8.data._Elems[0] = local_708.data._Elems[0];
          local_6e8.data._Elems[1] = local_708.data._Elems[1];
          local_6e8.data._Elems[2] = local_708.data._Elems[2];
          local_6e8.data._Elems[3] = local_708.data._Elems[3];
          trimd::scalar::T128<float>::operator+=(&local_6f8,&local_538);
          trimd::scalar::T128<float>::operator+=(&local_6e8,&local_528);
          local_5f8.data._Elems[0] = local_6f8.data._Elems[0];
          local_5f8.data._Elems[1] = local_6f8.data._Elems[1];
          local_5f8.data._Elems[2] = local_6f8.data._Elems[2];
          local_5f8.data._Elems[3] = local_6f8.data._Elems[3];
          local_5e8.data._Elems[0] = local_6e8.data._Elems[0];
          local_5e8.data._Elems[1] = local_6e8.data._Elems[1];
          local_5e8.data._Elems[2] = local_6e8.data._Elems[2];
          local_5e8.data._Elems[3] = local_6e8.data._Elems[3];
          trimd::scalar::T128<float>::operator-=(&local_5f8,&local_518);
          trimd::scalar::T128<float>::operator-=(&local_5e8,&local_508);
          uVar28 = local_5e8.data._Elems._8_8_;
          uVar27 = local_5e8.data._Elems._0_8_;
          uVar26 = local_5f8.data._Elems._8_8_;
          uVar25 = local_5f8.data._Elems._0_8_;
          uVar9 = local_1178.data2.data._Elems._8_8_;
          uVar7 = local_1178.data2.data._Elems._0_8_;
          uVar5 = local_1178.data1.data._Elems._8_8_;
          uVar3 = local_1178.data1.data._Elems._0_8_;
          uVar29._0_4_ = local_5e8.data._Elems[0];
          uVar29._4_4_ = local_5e8.data._Elems[1];
          uVar30._0_4_ = local_5e8.data._Elems[2];
          uVar30._4_4_ = local_5e8.data._Elems[3];
          fVar69 = local_5f8.data._Elems[0];
          fVar70 = local_5f8.data._Elems[1];
          fVar71 = local_5f8.data._Elems[2];
          fVar72 = local_5f8.data._Elems[3];
          local_fd8 = local_5e8.data._Elems[0];
          fStack_fd4 = local_5e8.data._Elems[1];
          fStack_fd0 = local_5e8.data._Elems[2];
          fStack_fcc = local_5e8.data._Elems[3];
          local_1178.data1.data._Elems[0] = (float)uVar14;
          local_1178.data1.data._Elems[1] = SUB84(uVar14,4);
          local_1b8.data1.data._Elems[0] = local_1178.data1.data._Elems[0];
          local_1b8.data1.data._Elems[1] = local_1178.data1.data._Elems[1];
          local_1178.data1.data._Elems[2] = (float)uVar15;
          local_1178.data1.data._Elems[3] = SUB84(uVar15,4);
          local_1b8.data1.data._Elems[2] = local_1178.data1.data._Elems[2];
          local_1b8.data1.data._Elems[3] = local_1178.data1.data._Elems[3];
          local_1178.data2.data._Elems[0] = (float)uVar16;
          local_1178.data2.data._Elems[1] = SUB84(uVar16,4);
          local_1b8.data2.data._Elems[0] = local_1178.data2.data._Elems[0];
          local_1b8.data2.data._Elems[1] = local_1178.data2.data._Elems[1];
          local_1178.data2.data._Elems[2] = (float)uVar17;
          local_1178.data2.data._Elems[3] = SUB84(uVar17,4);
          local_1b8.data2.data._Elems[2] = local_1178.data2.data._Elems[2];
          local_1b8.data2.data._Elems[3] = local_1178.data2.data._Elems[3];
          local_1178.data1.data._Elems._0_8_ = uVar3;
          local_1178.data1.data._Elems._8_8_ = uVar5;
          local_1178.data2.data._Elems._0_8_ = uVar7;
          local_1178.data2.data._Elems._8_8_ = uVar9;
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_1b8,&local_7b8);
          uVar9 = local_1198.data2.data._Elems._8_8_;
          uVar7 = local_1198.data2.data._Elems._0_8_;
          uVar5 = local_1198.data1.data._Elems._8_8_;
          uVar3 = local_1198.data1.data._Elems._0_8_;
          local_4d8.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data1).data._Elems;
          local_4d8.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data1).data._Elems + 2);
          local_4c8.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data2).data._Elems;
          local_4c8.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data2).data._Elems + 2);
          local_1198.data1.data._Elems[0] = (float)uVar10;
          local_1198.data1.data._Elems[1] = SUB84(uVar10,4);
          local_1d8.data1.data._Elems[0] = local_1198.data1.data._Elems[0];
          local_1d8.data1.data._Elems[1] = local_1198.data1.data._Elems[1];
          local_1198.data1.data._Elems[2] = (float)uVar11;
          local_1198.data1.data._Elems[3] = SUB84(uVar11,4);
          local_1d8.data1.data._Elems[2] = local_1198.data1.data._Elems[2];
          local_1d8.data1.data._Elems[3] = local_1198.data1.data._Elems[3];
          local_1198.data2.data._Elems[0] = (float)uVar12;
          local_1198.data2.data._Elems[1] = SUB84(uVar12,4);
          local_1d8.data2.data._Elems[0] = local_1198.data2.data._Elems[0];
          local_1d8.data2.data._Elems[1] = local_1198.data2.data._Elems[1];
          local_1198.data2.data._Elems[2] = (float)uVar13;
          local_1198.data2.data._Elems[3] = SUB84(uVar13,4);
          local_1d8.data2.data._Elems[2] = local_1198.data2.data._Elems[2];
          local_1d8.data2.data._Elems[3] = local_1198.data2.data._Elems[3];
          local_1198.data1.data._Elems._0_8_ = uVar3;
          local_1198.data1.data._Elems._8_8_ = uVar5;
          local_1198.data2.data._Elems._0_8_ = uVar7;
          local_1198.data2.data._Elems._8_8_ = uVar9;
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_1d8,&local_7f8);
          uVar9 = local_1118.data2.data._Elems._8_8_;
          uVar7 = local_1118.data2.data._Elems._0_8_;
          uVar5 = local_1118.data1.data._Elems._8_8_;
          uVar3 = local_1118.data1.data._Elems._0_8_;
          local_578.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data1).data._Elems;
          local_578.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data1).data._Elems + 2);
          local_568.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data2).data._Elems;
          local_568.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data2).data._Elems + 2);
          local_1118.data1.data._Elems[0] = (float)uVar18;
          local_1118.data1.data._Elems[1] = SUB84(uVar18,4);
          local_1f8.data1.data._Elems[0] = local_1118.data1.data._Elems[0];
          local_1f8.data1.data._Elems[1] = local_1118.data1.data._Elems[1];
          local_1118.data1.data._Elems[2] = (float)uVar19;
          local_1118.data1.data._Elems[3] = SUB84(uVar19,4);
          local_1f8.data1.data._Elems[2] = local_1118.data1.data._Elems[2];
          local_1f8.data1.data._Elems[3] = local_1118.data1.data._Elems[3];
          local_1118.data2.data._Elems[0] = (float)uVar20;
          local_1118.data2.data._Elems[1] = SUB84(uVar20,4);
          local_1f8.data2.data._Elems[0] = local_1118.data2.data._Elems[0];
          local_1f8.data2.data._Elems[1] = local_1118.data2.data._Elems[1];
          local_1118.data2.data._Elems[2] = (float)uVar21;
          local_1118.data2.data._Elems[3] = SUB84(uVar21,4);
          local_1f8.data2.data._Elems[2] = local_1118.data2.data._Elems[2];
          local_1f8.data2.data._Elems[3] = local_1118.data2.data._Elems[3];
          local_1118.data1.data._Elems._0_8_ = uVar3;
          local_1118.data1.data._Elems._8_8_ = uVar5;
          local_1118.data2.data._Elems._0_8_ = uVar7;
          local_1118.data2.data._Elems._8_8_ = uVar9;
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_1f8,&local_778);
          uVar9 = local_11b8.data2.data._Elems._8_8_;
          uVar7 = local_11b8.data2.data._Elems._0_8_;
          uVar5 = local_11b8.data1.data._Elems._8_8_;
          uVar3 = local_11b8.data1.data._Elems._0_8_;
          local_4f8.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data1).data._Elems;
          local_4f8.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data1).data._Elems + 2);
          local_4e8.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data2).data._Elems;
          local_4e8.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data2).data._Elems + 2);
          local_11b8.data1.data._Elems[0] = (float)uVar2;
          local_11b8.data1.data._Elems[1] = SUB84(uVar2,4);
          local_238.data1.data._Elems[0] = local_11b8.data1.data._Elems[0];
          local_238.data1.data._Elems[1] = local_11b8.data1.data._Elems[1];
          local_11b8.data1.data._Elems[2] = (float)uVar4;
          local_11b8.data1.data._Elems[3] = SUB84(uVar4,4);
          local_238.data1.data._Elems[2] = local_11b8.data1.data._Elems[2];
          local_238.data1.data._Elems[3] = local_11b8.data1.data._Elems[3];
          local_11b8.data2.data._Elems[0] = (float)uVar6;
          local_11b8.data2.data._Elems[1] = SUB84(uVar6,4);
          local_238.data2.data._Elems[0] = local_11b8.data2.data._Elems[0];
          local_238.data2.data._Elems[1] = local_11b8.data2.data._Elems[1];
          local_11b8.data2.data._Elems[2] = (float)uVar8;
          local_11b8.data2.data._Elems[3] = SUB84(uVar8,4);
          local_238.data2.data._Elems[2] = local_11b8.data2.data._Elems[2];
          local_238.data2.data._Elems[3] = local_11b8.data2.data._Elems[3];
          local_11b8.data1.data._Elems._0_8_ = uVar3;
          local_11b8.data1.data._Elems._8_8_ = uVar5;
          local_11b8.data2.data._Elems._0_8_ = uVar7;
          local_11b8.data2.data._Elems._8_8_ = uVar9;
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_238,(T256<trimd::scalar::T128<float>_> *)&local_7d8);
          local_698 = *(float **)(pTVar32->data1).data._Elems;
          afStack_690 = *(float (*) [2])((pTVar32->data1).data._Elems + 2);
          local_688.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data2).data._Elems;
          local_688.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data2).data._Elems + 2);
          trimd::scalar::T128<float>::operator-=((T128<float> *)&local_698,&local_4f8);
          trimd::scalar::T128<float>::operator-=(&local_688,&local_4e8);
          local_678 = local_698;
          afStack_670[0] = afStack_690[0];
          afStack_670[1] = afStack_690[1];
          local_668.data._Elems[0] = local_688.data._Elems[0];
          local_668.data._Elems[1] = local_688.data._Elems[1];
          local_668.data._Elems[2] = local_688.data._Elems[2];
          local_668.data._Elems[3] = local_688.data._Elems[3];
          trimd::scalar::T128<float>::operator+=((T128<float> *)&local_678,&local_578);
          trimd::scalar::T128<float>::operator+=(&local_668,&local_568);
          local_738 = local_678;
          afStack_730[0] = afStack_670[0];
          afStack_730[1] = afStack_670[1];
          local_728.data._Elems[0] = local_668.data._Elems[0];
          local_728.data._Elems[1] = local_668.data._Elems[1];
          local_728.data._Elems[2] = local_668.data._Elems[2];
          local_728.data._Elems[3] = local_668.data._Elems[3];
          trimd::scalar::T128<float>::operator+=((T128<float> *)&local_738,&local_4d8);
          trimd::scalar::T128<float>::operator+=(&local_728,&local_4c8);
          uVar9 = local_1178.data2.data._Elems._8_8_;
          uVar7 = local_1178.data2.data._Elems._0_8_;
          uVar5 = local_1178.data1.data._Elems._8_8_;
          uVar3 = local_1178.data1.data._Elems._0_8_;
          local_1208 = local_738;
          fStack_1200 = afStack_730[0];
          fStack_11fc = afStack_730[1];
          local_f48 = local_728.data._Elems[0];
          fStack_f44 = local_728.data._Elems[1];
          fStack_f40 = local_728.data._Elems[2];
          fStack_f3c = local_728.data._Elems[3];
          local_1178.data1.data._Elems[0] = (float)uVar14;
          local_1178.data1.data._Elems[1] = SUB84(uVar14,4);
          local_258.data1.data._Elems[0] = local_1178.data1.data._Elems[0];
          local_258.data1.data._Elems[1] = local_1178.data1.data._Elems[1];
          local_1178.data1.data._Elems[2] = (float)uVar15;
          local_1178.data1.data._Elems[3] = SUB84(uVar15,4);
          local_258.data1.data._Elems[2] = local_1178.data1.data._Elems[2];
          local_258.data1.data._Elems[3] = local_1178.data1.data._Elems[3];
          local_1178.data2.data._Elems[0] = (float)uVar16;
          local_1178.data2.data._Elems[1] = SUB84(uVar16,4);
          local_258.data2.data._Elems[0] = local_1178.data2.data._Elems[0];
          local_258.data2.data._Elems[1] = local_1178.data2.data._Elems[1];
          local_1178.data2.data._Elems[2] = (float)uVar17;
          local_1178.data2.data._Elems[3] = SUB84(uVar17,4);
          local_258.data2.data._Elems[2] = local_1178.data2.data._Elems[2];
          local_258.data2.data._Elems[3] = local_1178.data2.data._Elems[3];
          local_1178.data1.data._Elems._0_8_ = uVar3;
          local_1178.data1.data._Elems._8_8_ = uVar5;
          local_1178.data2.data._Elems._0_8_ = uVar7;
          local_1178.data2.data._Elems._8_8_ = uVar9;
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_258,&local_7f8);
          uVar9 = local_1198.data2.data._Elems._8_8_;
          uVar7 = local_1198.data2.data._Elems._0_8_;
          uVar5 = local_1198.data1.data._Elems._8_8_;
          uVar3 = local_1198.data1.data._Elems._0_8_;
          local_478.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data1).data._Elems;
          local_478.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data1).data._Elems + 2);
          local_468.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data2).data._Elems;
          local_468.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data2).data._Elems + 2);
          local_1198.data1.data._Elems[0] = (float)uVar10;
          local_1198.data1.data._Elems[1] = SUB84(uVar10,4);
          local_278.data1.data._Elems[0] = local_1198.data1.data._Elems[0];
          local_278.data1.data._Elems[1] = local_1198.data1.data._Elems[1];
          local_1198.data1.data._Elems[2] = (float)uVar11;
          local_1198.data1.data._Elems[3] = SUB84(uVar11,4);
          local_278.data1.data._Elems[2] = local_1198.data1.data._Elems[2];
          local_278.data1.data._Elems[3] = local_1198.data1.data._Elems[3];
          local_1198.data2.data._Elems[0] = (float)uVar12;
          local_1198.data2.data._Elems[1] = SUB84(uVar12,4);
          local_278.data2.data._Elems[0] = local_1198.data2.data._Elems[0];
          local_278.data2.data._Elems[1] = local_1198.data2.data._Elems[1];
          local_1198.data2.data._Elems[2] = (float)uVar13;
          local_1198.data2.data._Elems[3] = SUB84(uVar13,4);
          local_278.data2.data._Elems[2] = local_1198.data2.data._Elems[2];
          local_278.data2.data._Elems[3] = local_1198.data2.data._Elems[3];
          local_1198.data1.data._Elems._0_8_ = uVar3;
          local_1198.data1.data._Elems._8_8_ = uVar5;
          local_1198.data2.data._Elems._0_8_ = uVar7;
          local_1198.data2.data._Elems._8_8_ = uVar9;
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_278,&local_7b8);
          uVar9 = local_1118.data2.data._Elems._8_8_;
          uVar7 = local_1118.data2.data._Elems._0_8_;
          uVar5 = local_1118.data1.data._Elems._8_8_;
          uVar3 = local_1118.data1.data._Elems._0_8_;
          local_498.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data1).data._Elems;
          local_498.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data1).data._Elems + 2);
          local_488.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data2).data._Elems;
          local_488.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data2).data._Elems + 2);
          local_1118.data1.data._Elems[0] = (float)uVar18;
          local_1118.data1.data._Elems[1] = SUB84(uVar18,4);
          local_298.data1.data._Elems[0] = local_1118.data1.data._Elems[0];
          local_298.data1.data._Elems[1] = local_1118.data1.data._Elems[1];
          local_1118.data1.data._Elems[2] = (float)uVar19;
          local_1118.data1.data._Elems[3] = SUB84(uVar19,4);
          local_298.data1.data._Elems[2] = local_1118.data1.data._Elems[2];
          local_298.data1.data._Elems[3] = local_1118.data1.data._Elems[3];
          local_1118.data2.data._Elems[0] = (float)uVar20;
          local_1118.data2.data._Elems[1] = SUB84(uVar20,4);
          local_298.data2.data._Elems[0] = local_1118.data2.data._Elems[0];
          local_298.data2.data._Elems[1] = local_1118.data2.data._Elems[1];
          local_1118.data2.data._Elems[2] = (float)uVar21;
          local_1118.data2.data._Elems[3] = SUB84(uVar21,4);
          local_298.data2.data._Elems[2] = local_1118.data2.data._Elems[2];
          local_298.data2.data._Elems[3] = local_1118.data2.data._Elems[3];
          local_1118.data1.data._Elems._0_8_ = uVar3;
          local_1118.data1.data._Elems._8_8_ = uVar5;
          local_1118.data2.data._Elems._0_8_ = uVar7;
          local_1118.data2.data._Elems._8_8_ = uVar9;
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_298,(T256<trimd::scalar::T128<float>_> *)&local_7d8);
          uVar9 = local_11b8.data2.data._Elems._8_8_;
          uVar7 = local_11b8.data2.data._Elems._0_8_;
          uVar5 = local_11b8.data1.data._Elems._8_8_;
          uVar3 = local_11b8.data1.data._Elems._0_8_;
          local_4b8.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data1).data._Elems;
          local_4b8.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data1).data._Elems + 2);
          local_4a8.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data2).data._Elems;
          local_4a8.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data2).data._Elems + 2);
          local_11b8.data1.data._Elems[0] = (float)uVar2;
          local_11b8.data1.data._Elems[1] = SUB84(uVar2,4);
          local_2b8.data1.data._Elems[0] = local_11b8.data1.data._Elems[0];
          local_2b8.data1.data._Elems[1] = local_11b8.data1.data._Elems[1];
          local_11b8.data1.data._Elems[2] = (float)uVar4;
          local_11b8.data1.data._Elems[3] = SUB84(uVar4,4);
          local_2b8.data1.data._Elems[2] = local_11b8.data1.data._Elems[2];
          local_2b8.data1.data._Elems[3] = local_11b8.data1.data._Elems[3];
          local_11b8.data2.data._Elems[0] = (float)uVar6;
          local_11b8.data2.data._Elems[1] = SUB84(uVar6,4);
          local_2b8.data2.data._Elems[0] = local_11b8.data2.data._Elems[0];
          local_2b8.data2.data._Elems[1] = local_11b8.data2.data._Elems[1];
          local_11b8.data2.data._Elems[2] = (float)uVar8;
          local_11b8.data2.data._Elems[3] = SUB84(uVar8,4);
          local_2b8.data2.data._Elems[2] = local_11b8.data2.data._Elems[2];
          local_2b8.data2.data._Elems[3] = local_11b8.data2.data._Elems[3];
          local_11b8.data1.data._Elems._0_8_ = uVar3;
          local_11b8.data1.data._Elems._8_8_ = uVar5;
          local_11b8.data2.data._Elems._0_8_ = uVar7;
          local_11b8.data2.data._Elems._8_8_ = uVar9;
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_2b8,&local_778);
          local_758.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data1).data._Elems;
          local_758.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data1).data._Elems + 2);
          local_748.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data2).data._Elems;
          local_748.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data2).data._Elems + 2);
          trimd::scalar::T128<float>::operator+=(&local_758,&local_4b8);
          trimd::scalar::T128<float>::operator+=(&local_748,&local_4a8);
          local_618.data._Elems[0] = local_758.data._Elems[0];
          local_618.data._Elems[1] = local_758.data._Elems[1];
          local_618.data._Elems[2] = local_758.data._Elems[2];
          local_618.data._Elems[3] = local_758.data._Elems[3];
          local_608.data._Elems[0] = local_748.data._Elems[0];
          local_608.data._Elems[1] = local_748.data._Elems[1];
          local_608.data._Elems[2] = local_748.data._Elems[2];
          local_608.data._Elems[3] = local_748.data._Elems[3];
          trimd::scalar::T128<float>::operator-=(&local_618,&local_498);
          trimd::scalar::T128<float>::operator-=(&local_608,&local_488);
          local_638.data._Elems[0] = local_618.data._Elems[0];
          local_638.data._Elems[1] = local_618.data._Elems[1];
          local_638.data._Elems[2] = local_618.data._Elems[2];
          local_638.data._Elems[3] = local_618.data._Elems[3];
          local_628.data._Elems[0] = local_608.data._Elems[0];
          local_628.data._Elems[1] = local_608.data._Elems[1];
          local_628.data._Elems[2] = local_608.data._Elems[2];
          local_628.data._Elems[3] = local_608.data._Elems[3];
          trimd::scalar::T128<float>::operator+=(&local_638,&local_478);
          trimd::scalar::T128<float>::operator+=(&local_628,&local_468);
          uVar9 = local_1178.data2.data._Elems._8_8_;
          uVar7 = local_1178.data2.data._Elems._0_8_;
          uVar5 = local_1178.data1.data._Elems._8_8_;
          uVar3 = local_1178.data1.data._Elems._0_8_;
          local_f38 = local_638.data._Elems[0];
          fStack_f34 = local_638.data._Elems[1];
          fStack_f30 = local_638.data._Elems[2];
          fStack_f2c = local_638.data._Elems[3];
          local_f28 = local_628.data._Elems[0];
          fStack_f24 = local_628.data._Elems[1];
          fStack_f20 = local_628.data._Elems[2];
          fStack_f1c = local_628.data._Elems[3];
          local_1178.data1.data._Elems[0] = (float)uVar14;
          local_1178.data1.data._Elems[1] = SUB84(uVar14,4);
          local_2d8.data1.data._Elems[0] = local_1178.data1.data._Elems[0];
          local_2d8.data1.data._Elems[1] = local_1178.data1.data._Elems[1];
          local_1178.data1.data._Elems[2] = (float)uVar15;
          local_1178.data1.data._Elems[3] = SUB84(uVar15,4);
          local_2d8.data1.data._Elems[2] = local_1178.data1.data._Elems[2];
          local_2d8.data1.data._Elems[3] = local_1178.data1.data._Elems[3];
          local_1178.data2.data._Elems[0] = (float)uVar16;
          local_1178.data2.data._Elems[1] = SUB84(uVar16,4);
          local_2d8.data2.data._Elems[0] = local_1178.data2.data._Elems[0];
          local_2d8.data2.data._Elems[1] = local_1178.data2.data._Elems[1];
          local_1178.data2.data._Elems[2] = (float)uVar17;
          local_1178.data2.data._Elems[3] = SUB84(uVar17,4);
          local_2d8.data2.data._Elems[2] = local_1178.data2.data._Elems[2];
          local_2d8.data2.data._Elems[3] = local_1178.data2.data._Elems[3];
          local_1178.data1.data._Elems._0_8_ = uVar3;
          local_1178.data1.data._Elems._8_8_ = uVar5;
          local_1178.data2.data._Elems._0_8_ = uVar7;
          local_1178.data2.data._Elems._8_8_ = uVar9;
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_2d8,&local_778);
          uVar9 = local_1198.data2.data._Elems._8_8_;
          uVar7 = local_1198.data2.data._Elems._0_8_;
          uVar5 = local_1198.data1.data._Elems._8_8_;
          uVar3 = local_1198.data1.data._Elems._0_8_;
          local_598.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data1).data._Elems;
          local_598.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data1).data._Elems + 2);
          local_588.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data2).data._Elems;
          local_588.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data2).data._Elems + 2);
          local_1198.data1.data._Elems[0] = (float)uVar10;
          local_1198.data1.data._Elems[1] = SUB84(uVar10,4);
          local_338.data1.data._Elems[0] = local_1198.data1.data._Elems[0];
          local_338.data1.data._Elems[1] = local_1198.data1.data._Elems[1];
          local_1198.data1.data._Elems[2] = (float)uVar11;
          local_1198.data1.data._Elems[3] = SUB84(uVar11,4);
          local_338.data1.data._Elems[2] = local_1198.data1.data._Elems[2];
          local_338.data1.data._Elems[3] = local_1198.data1.data._Elems[3];
          local_1198.data2.data._Elems[0] = (float)uVar12;
          local_1198.data2.data._Elems[1] = SUB84(uVar12,4);
          local_338.data2.data._Elems[0] = local_1198.data2.data._Elems[0];
          local_338.data2.data._Elems[1] = local_1198.data2.data._Elems[1];
          local_1198.data2.data._Elems[2] = (float)uVar13;
          local_1198.data2.data._Elems[3] = SUB84(uVar13,4);
          local_338.data2.data._Elems[2] = local_1198.data2.data._Elems[2];
          local_338.data2.data._Elems[3] = local_1198.data2.data._Elems[3];
          local_1198.data1.data._Elems._0_8_ = uVar3;
          local_1198.data1.data._Elems._8_8_ = uVar5;
          local_1198.data2.data._Elems._0_8_ = uVar7;
          local_1198.data2.data._Elems._8_8_ = uVar9;
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_338,(T256<trimd::scalar::T128<float>_> *)&local_7d8);
          uVar9 = local_1118.data2.data._Elems._8_8_;
          uVar7 = local_1118.data2.data._Elems._0_8_;
          uVar5 = local_1118.data1.data._Elems._8_8_;
          uVar3 = local_1118.data1.data._Elems._0_8_;
          local_5b8.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data1).data._Elems;
          local_5b8.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data1).data._Elems + 2);
          local_5a8.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data2).data._Elems;
          local_5a8.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data2).data._Elems + 2);
          local_1118.data1.data._Elems[0] = (float)uVar18;
          local_1118.data1.data._Elems[1] = SUB84(uVar18,4);
          local_3d8.data1.data._Elems[0] = local_1118.data1.data._Elems[0];
          local_3d8.data1.data._Elems[1] = local_1118.data1.data._Elems[1];
          local_1118.data1.data._Elems[2] = (float)uVar19;
          local_1118.data1.data._Elems[3] = SUB84(uVar19,4);
          local_3d8.data1.data._Elems[2] = local_1118.data1.data._Elems[2];
          local_3d8.data1.data._Elems[3] = local_1118.data1.data._Elems[3];
          local_1118.data2.data._Elems[0] = (float)uVar20;
          local_1118.data2.data._Elems[1] = SUB84(uVar20,4);
          local_3d8.data2.data._Elems[0] = local_1118.data2.data._Elems[0];
          local_3d8.data2.data._Elems[1] = local_1118.data2.data._Elems[1];
          local_1118.data2.data._Elems[2] = (float)uVar21;
          local_1118.data2.data._Elems[3] = SUB84(uVar21,4);
          local_3d8.data2.data._Elems[2] = local_1118.data2.data._Elems[2];
          local_3d8.data2.data._Elems[3] = local_1118.data2.data._Elems[3];
          local_1118.data1.data._Elems._0_8_ = uVar3;
          local_1118.data1.data._Elems._8_8_ = uVar5;
          local_1118.data2.data._Elems._0_8_ = uVar7;
          local_1118.data2.data._Elems._8_8_ = uVar9;
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_3d8,&local_7b8);
          uVar9 = local_11b8.data2.data._Elems._8_8_;
          uVar7 = local_11b8.data2.data._Elems._0_8_;
          uVar5 = local_11b8.data1.data._Elems._8_8_;
          uVar3 = local_11b8.data1.data._Elems._0_8_;
          local_5d8.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data1).data._Elems;
          local_5d8.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data1).data._Elems + 2);
          local_5c8.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data2).data._Elems;
          local_5c8.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data2).data._Elems + 2);
          local_11b8.data1.data._Elems[0] = (float)uVar2;
          local_11b8.data1.data._Elems[1] = SUB84(uVar2,4);
          local_3f8.data1.data._Elems[0] = local_11b8.data1.data._Elems[0];
          local_3f8.data1.data._Elems[1] = local_11b8.data1.data._Elems[1];
          local_11b8.data1.data._Elems[2] = (float)uVar4;
          local_11b8.data1.data._Elems[3] = SUB84(uVar4,4);
          local_3f8.data1.data._Elems[2] = local_11b8.data1.data._Elems[2];
          local_3f8.data1.data._Elems[3] = local_11b8.data1.data._Elems[3];
          local_11b8.data2.data._Elems[0] = (float)uVar6;
          local_11b8.data2.data._Elems[1] = SUB84(uVar6,4);
          local_3f8.data2.data._Elems[0] = local_11b8.data2.data._Elems[0];
          local_3f8.data2.data._Elems[1] = local_11b8.data2.data._Elems[1];
          local_11b8.data2.data._Elems[2] = (float)uVar8;
          local_11b8.data2.data._Elems[3] = SUB84(uVar8,4);
          local_3f8.data2.data._Elems[2] = local_11b8.data2.data._Elems[2];
          local_3f8.data2.data._Elems[3] = local_11b8.data2.data._Elems[3];
          local_11b8.data1.data._Elems._0_8_ = uVar3;
          local_11b8.data1.data._Elems._8_8_ = uVar5;
          local_11b8.data2.data._Elems._0_8_ = uVar7;
          local_11b8.data2.data._Elems._8_8_ = uVar9;
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_3f8,&local_7f8);
          local_658.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data1).data._Elems;
          local_658.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data1).data._Elems + 2);
          local_648.data._Elems._0_8_ = *(undefined8 *)(pTVar32->data2).data._Elems;
          local_648.data._Elems._8_8_ = *(undefined8 *)((pTVar32->data2).data._Elems + 2);
          trimd::scalar::T128<float>::operator-=(&local_658,&local_5d8);
          trimd::scalar::T128<float>::operator-=(&local_648,&local_5c8);
          local_6d8.data._Elems[0] = local_658.data._Elems[0];
          local_6d8.data._Elems[1] = local_658.data._Elems[1];
          local_6d8.data._Elems[2] = local_658.data._Elems[2];
          local_6d8.data._Elems[3] = local_658.data._Elems[3];
          local_6c8.data._Elems[0] = local_648.data._Elems[0];
          local_6c8.data._Elems[1] = local_648.data._Elems[1];
          local_6c8.data._Elems[2] = local_648.data._Elems[2];
          local_6c8.data._Elems[3] = local_648.data._Elems[3];
          trimd::scalar::T128<float>::operator-=(&local_6d8,&local_5b8);
          trimd::scalar::T128<float>::operator-=(&local_6c8,&local_5a8);
          local_6b8.data._Elems[0] = local_6d8.data._Elems[0];
          local_6b8.data._Elems[1] = local_6d8.data._Elems[1];
          local_6b8.data._Elems[2] = local_6d8.data._Elems[2];
          local_6b8.data._Elems[3] = local_6d8.data._Elems[3];
          local_6a8.data._Elems[0] = local_6c8.data._Elems[0];
          local_6a8.data._Elems[1] = local_6c8.data._Elems[1];
          local_6a8.data._Elems[2] = local_6c8.data._Elems[2];
          local_6a8.data._Elems[3] = local_6c8.data._Elems[3];
          trimd::scalar::T128<float>::operator-=(&local_6b8,&local_598);
          trimd::scalar::T128<float>::operator-=(&local_6a8,&local_588);
          uVar5 = local_5e8.data._Elems._8_8_;
          uVar4 = local_5e8.data._Elems._0_8_;
          uVar3 = local_5f8.data._Elems._8_8_;
          uVar2 = local_5f8.data._Elems._0_8_;
          fVar49 = fStack_1200;
          fVar50 = fStack_11fc;
          local_5f8.data._Elems[0] = (float)uVar25;
          local_5f8.data._Elems[1] = SUB84(uVar25,4);
          local_7b8.data1.data._Elems[0] = local_5f8.data._Elems[0];
          local_7b8.data1.data._Elems[1] = local_5f8.data._Elems[1];
          local_5f8.data._Elems[2] = (float)uVar26;
          local_5f8.data._Elems[3] = SUB84(uVar26,4);
          local_7b8.data1.data._Elems[2] = local_5f8.data._Elems[2];
          local_7b8.data1.data._Elems[3] = local_5f8.data._Elems[3];
          local_7d8 = local_1208;
          afStack_7d0[0] = fStack_1200;
          afStack_7d0[1] = fStack_11fc;
          local_5e8.data._Elems[0] = (float)uVar27;
          local_5e8.data._Elems[1] = SUB84(uVar27,4);
          local_7b8.data2.data._Elems[0] = local_5e8.data._Elems[0];
          local_7b8.data2.data._Elems[1] = local_5e8.data._Elems[1];
          local_5e8.data._Elems[2] = (float)uVar28;
          local_5e8.data._Elems[3] = SUB84(uVar28,4);
          local_7b8.data2.data._Elems[2] = local_5e8.data._Elems[2];
          local_7b8.data2.data._Elems[3] = local_5e8.data._Elems[3];
          fVar51 = local_f48;
          fVar52 = fStack_f44;
          fVar53 = fStack_f40;
          fVar54 = fStack_f3c;
          uVar39 = uVar39 + 1;
          pfVar36 = pfVar36 + 0x20;
          local_778.data1.data._Elems[0] = local_f38;
          local_778.data1.data._Elems[1] = fStack_f34;
          local_778.data1.data._Elems[2] = fStack_f30;
          local_778.data1.data._Elems[3] = fStack_f2c;
          fVar55 = local_f28;
          fVar56 = fStack_f24;
          fVar57 = fStack_f20;
          fVar58 = fStack_f1c;
          local_7f8.data1.data._Elems[0] = local_6b8.data._Elems[0];
          local_7f8.data1.data._Elems[1] = local_6b8.data._Elems[1];
          local_7f8.data1.data._Elems[2] = local_6b8.data._Elems[2];
          local_7f8.data1.data._Elems[3] = local_6b8.data._Elems[3];
          local_7f8.data2.data._Elems[0] = local_6a8.data._Elems[0];
          local_7f8.data2.data._Elems[1] = local_6a8.data._Elems[1];
          local_7f8.data2.data._Elems[2] = local_6a8.data._Elems[2];
          local_7f8.data2.data._Elems[3] = local_6a8.data._Elems[3];
          afStack_7d0[2] = local_f48;
          afStack_7d0[3] = fStack_f44;
          afStack_7d0[4] = fStack_f40;
          afStack_7d0[5] = fStack_f3c;
          local_778.data2.data._Elems[0] = local_f28;
          local_778.data2.data._Elems[1] = fStack_f24;
          local_778.data2.data._Elems[2] = fStack_f20;
          local_778.data2.data._Elems[3] = fStack_f1c;
          local_5f8.data._Elems._0_8_ = uVar2;
          local_5f8.data._Elems._8_8_ = uVar3;
          local_5e8.data._Elems._0_8_ = uVar4;
          local_5e8.data._Elems._8_8_ = uVar5;
        } while (uVar39 < uVar42);
        param_2 = local_10a8;
        lVar43 = local_1220;
        fVar59 = local_fd8;
        fVar68 = fStack_fd4;
        fVar45 = fStack_fd0;
        fVar46 = fStack_fcc;
        fVar47 = (float)local_1208;
        fVar48 = local_1208._4_4_;
        fVar60 = local_6b8.data._Elems[1];
        fVar61 = local_6b8.data._Elems[2];
        fVar62 = local_6b8.data._Elems[3];
        fVar63 = local_6a8.data._Elems[0];
        fVar64 = local_6a8.data._Elems[1];
        fVar65 = local_6a8.data._Elems[2];
        fVar66 = local_6a8.data._Elems[3];
        fVar67 = __real_42652ee1;
      }
      fVar24 = local_778.data1.data._Elems[3];
      fVar23 = local_778.data1.data._Elems[2];
      fVar22 = local_778.data1.data._Elems[1];
      pfVar36 = local_1248;
      pfVar40 = local_10d0->ptr;
      local_1360.x = fVar69;
      local_1360.y = fVar47;
      local_1360.z = local_778.data1.data._Elems[0];
      local_1360.w = local_7f8.data1.data._Elems[0];
      local_7f8.data1.data._Elems[1] = fVar60;
      local_7f8.data1.data._Elems[2] = fVar61;
      local_7f8.data1.data._Elems[3] = fVar62;
      local_7f8.data2.data._Elems[0] = fVar63;
      local_7f8.data2.data._Elems[1] = fVar64;
      local_7f8.data2.data._Elems[2] = fVar65;
      local_7f8.data2.data._Elems[3] = fVar66;
      tdm::quat<float>::euler<0>(&local_1360,&local_1350);
      pfVar40[*(ushort *)pfVar34] = local_1350.values[0].value * fVar67;
      pfVar40[*(ushort *)((longlong)pfVar34 + 2)] = local_1350.values[1].value * fVar67;
      pfVar40[*(ushort *)(pfVar34 + 1)] = local_1350.values[2].value * fVar67;
      local_1360.x = fVar70;
      local_1360.y = fVar48;
      local_1360.z = fVar22;
      local_1360.w = fVar60;
      tdm::quat<float>::euler<0>(&local_1360,&local_1350);
      pfVar40[*(ushort *)(pfVar34 + 2)] = local_1350.values[0].value * fVar67;
      pfVar40[*(ushort *)((longlong)pfVar34 + 10)] = local_1350.values[1].value * fVar67;
      pfVar40[*(ushort *)(pfVar34 + 3)] = local_1350.values[2].value * fVar67;
      local_1360.x = fVar71;
      local_1360.y = fVar49;
      local_1360.z = fVar23;
      local_1360.w = fVar61;
      tdm::quat<float>::euler<0>(&local_1360,&local_1350);
      pfVar40[*(ushort *)(pfVar34 + 4)] = local_1350.values[0].value * fVar67;
      pfVar40[*(ushort *)((longlong)pfVar34 + 0x12)] = local_1350.values[1].value * fVar67;
      pfVar40[*(ushort *)(pfVar34 + 5)] = local_1350.values[2].value * fVar67;
      local_1360.x = fVar72;
      local_1360.y = fVar50;
      local_1360.z = fVar24;
      local_1360.w = fVar62;
      tdm::quat<float>::euler<0>(&local_1360,&local_1350);
      pfVar40[*(ushort *)(pfVar34 + 6)] = local_1350.values[0].value * fVar67;
      pfVar40[*(ushort *)((longlong)pfVar34 + 0x1a)] = local_1350.values[1].value * fVar67;
      pfVar40[*(ushort *)(pfVar34 + 7)] = local_1350.values[2].value * fVar67;
      local_1360.x = fVar59;
      local_1360.y = fVar51;
      local_1360.z = fVar55;
      local_1360.w = fVar63;
      tdm::quat<float>::euler<0>(&local_1360,&local_1350);
      pfVar40[*(ushort *)(pfVar34 + 8)] = local_1350.values[0].value * fVar67;
      pfVar40[*(ushort *)((longlong)pfVar34 + 0x22)] = local_1350.values[1].value * fVar67;
      pfVar40[*(ushort *)(pfVar34 + 9)] = local_1350.values[2].value * fVar67;
      local_1360.x = fVar68;
      local_1360.y = fVar52;
      local_1360.z = fVar56;
      local_1360.w = fVar64;
      tdm::quat<float>::euler<0>(&local_1360,&local_1350);
      pfVar40[*(ushort *)(pfVar34 + 10)] = local_1350.values[0].value * fVar67;
      pfVar40[*(ushort *)((longlong)pfVar34 + 0x2a)] = local_1350.values[1].value * fVar67;
      pfVar40[*(ushort *)(pfVar34 + 0xb)] = local_1350.values[2].value * fVar67;
      local_1360.x = fVar45;
      local_1360.y = fVar53;
      local_1360.z = fVar57;
      local_1360.w = fVar65;
      tdm::quat<float>::euler<0>(&local_1360,&local_1350);
      pfVar40[*(ushort *)(pfVar34 + 0xc)] = local_1350.values[0].value * fVar67;
      pfVar40[*(ushort *)((longlong)pfVar34 + 0x32)] = local_1350.values[1].value * fVar67;
      pfVar40[*(ushort *)(pfVar34 + 0xd)] = local_1350.values[2].value * fVar67;
      local_1360.x = fVar46;
      local_1360.y = fVar54;
      local_1360.z = fVar58;
      local_1360.w = fVar66;
      tdm::quat<float>::euler<0>(&local_1360,&local_1350);
      local_1248 = (float *)((longlong)pfVar36 + lVar43);
      pfVar36 = (float *)((longlong)local_1218 + lVar43);
      pfVar40[*(ushort *)(pfVar34 + 0xe)] = local_1350.values[0].value * fVar67;
      pfVar40[*(ushort *)((longlong)pfVar34 + 0x3a)] = local_1350.values[1].value * fVar67;
      pfVar38 = pfVar34 + 0xf;
      pfVar34 = pfVar34 + 0x10;
      pfVar40[*(ushort *)pfVar38] = local_1350.values[2].value * fVar67;
      local_1218 = pfVar36;
    } while (pfVar34 < local_1240);
  }
  fVar49 = __real_3f800000;
  local_1208 = pfVar34;
  if (pfVar34 < local_1238) {
    pfVar34 = local_1248 + 0xe;
    pLVar41 = local_1228;
    fVar50 = ___xmm_3f8000003f8000003f8000003f800000;
    fVar51 = _UNK_15076b1f4;
    fVar52 = _UNK_15076b1f8;
    fVar53 = _UNK_15076b1fc;
    do {
      puVar1 = local_1230;
      pfVar36 = param_2->ptr;
      uVar39 = 0;
      fVar54 = 0.0;
      local_838.data1.data._Elems[0] = 0.0;
      local_838.data1.data._Elems[1] = 0.0;
      local_838.data1.data._Elems[2] = 0.0;
      local_838.data1.data._Elems[3] = 0.0;
      local_838.data2.data._Elems[0] = 0.0;
      local_838.data2.data._Elems[1] = 0.0;
      local_838.data2.data._Elems[2] = 0.0;
      local_838.data2.data._Elems[3] = 0.0;
      local_818.data1.data._Elems[0] = 0.0;
      local_818.data1.data._Elems[1] = 0.0;
      local_818.data1.data._Elems[2] = 0.0;
      local_818.data1.data._Elems[3] = 0.0;
      local_818.data2.data._Elems[0] = 0.0;
      local_818.data2.data._Elems[1] = 0.0;
      local_818.data2.data._Elems[2] = 0.0;
      local_818.data2.data._Elems[3] = 0.0;
      local_878.data1.data._Elems[0] = 0.0;
      local_878.data1.data._Elems[1] = 0.0;
      local_878.data1.data._Elems[2] = 0.0;
      local_878.data1.data._Elems[3] = 0.0;
      local_878.data2.data._Elems[0] = 0.0;
      local_878.data2.data._Elems[1] = 0.0;
      local_878.data2.data._Elems[2] = 0.0;
      local_878.data2.data._Elems[3] = 0.0;
      local_858.data1.data._Elems[0] = fVar50;
      local_858.data1.data._Elems[1] = fVar51;
      local_858.data1.data._Elems[2] = fVar52;
      local_858.data1.data._Elems[3] = fVar53;
      local_858.data2.data._Elems[0] = fVar50;
      local_858.data2.data._Elems[1] = fVar51;
      local_858.data2.data._Elems[2] = fVar52;
      local_858.data2.data._Elems[3] = fVar53;
      fVar55 = 0.0;
      fVar56 = 0.0;
      fVar57 = 0.0;
      fVar58 = 0.0;
      fVar69 = 0.0;
      fVar70 = 0.0;
      fVar71 = 0.0;
      fVar72 = fVar50;
      fVar59 = fVar51;
      fVar68 = fVar52;
      fVar45 = fVar53;
      local_1240 = pfVar34;
      if (uVar42 != 0) {
        do {
          local_1288.data1.data._Elems._0_8_ = *(undefined8 *)(pfVar34 + -0xe);
          local_1288.data1.data._Elems._8_8_ = *(undefined8 *)(pfVar34 + -0xc);
          local_1288.data2.data._Elems._0_8_ = *(undefined8 *)(pfVar34 + -10);
          local_1288.data2.data._Elems._8_8_ = *(undefined8 *)(pfVar34 + -8);
          local_1268.data1.data._Elems._0_8_ = *(undefined8 *)(pfVar34 + -6);
          local_1268.data1.data._Elems._8_8_ = *(undefined8 *)(pfVar34 + -4);
          local_1268.data2.data._Elems._0_8_ = *(undefined8 *)(pfVar34 + -2);
          local_1268.data2.data._Elems._8_8_ = *(undefined8 *)pfVar34;
          local_12a8.data1.data._Elems._0_8_ = *(undefined8 *)(pfVar34 + 2);
          local_12a8.data1.data._Elems._8_8_ = *(undefined8 *)(pfVar34 + 4);
          local_12a8.data2.data._Elems._0_8_ = *(undefined8 *)(pfVar34 + 6);
          local_12a8.data2.data._Elems._8_8_ = *(undefined8 *)(pfVar34 + 8);
          local_12c8.data1.data._Elems._0_8_ = *(undefined8 *)(pfVar34 + 10);
          local_12c8.data1.data._Elems._8_8_ = *(undefined8 *)(pfVar34 + 0xc);
          local_12c8.data2.data._Elems._0_8_ = *(undefined8 *)(pfVar34 + 0xe);
          local_12c8.data2.data._Elems._8_8_ = *(undefined8 *)(pfVar34 + 0x10);
          local_1368 = pfVar36[puVar1[uVar39]];
          fVar49 = fVar49 - local_1368;
          local_df8.data1.data._Elems[0] = ___xmm_bf800000bf800000bf800000bf800000;
          local_df8.data1.data._Elems[1] = _UNK_15076c664;
          local_df8.data1.data._Elems[2] = _UNK_15076c668;
          local_df8.data1.data._Elems[3] = _UNK_15076c66c;
          local_df8.data2.data._Elems[0] = ___xmm_bf800000bf800000bf800000bf800000;
          local_df8.data2.data._Elems[1] = _UNK_15076c664;
          local_df8.data2.data._Elems[2] = _UNK_15076c668;
          local_df8.data2.data._Elems[3] = _UNK_15076c66c;
          local_db8.data1.data._Elems[0] = 0.0;
          local_db8.data1.data._Elems[1] = 0.0;
          local_db8.data1.data._Elems[2] = 0.0;
          local_db8.data1.data._Elems[3] = 0.0;
          local_db8.data2.data._Elems[0] = 0.0;
          local_db8.data2.data._Elems[1] = 0.0;
          local_db8.data2.data._Elems[2] = 0.0;
          local_db8.data2.data._Elems[3] = 0.0;
          local_131c = fVar49;
          local_dd8.data1.data._Elems[0] = fVar72;
          local_dd8.data1.data._Elems[1] = fVar59;
          local_dd8.data1.data._Elems[2] = fVar68;
          local_dd8.data1.data._Elems[3] = fVar45;
          local_dd8.data2.data._Elems[0] = fVar72;
          local_dd8.data2.data._Elems[1] = fVar59;
          local_dd8.data2.data._Elems[2] = fVar68;
          local_dd8.data2.data._Elems[3] = fVar45;
          trimd::fallback::operator>=<trimd::scalar::T128<float>_>
                    (&local_ed8,&local_12c8,&local_db8);
          pTVar32 = trimd::fallback::operator&<trimd::scalar::T128<float>_>
                              (&local_8d8,&local_dd8,&local_ed8);
          pTVar33 = trimd::fallback::andnot<trimd::scalar::T128<float>_>
                              (&local_918,&local_ed8,&local_df8);
          trimd::fallback::operator|<trimd::scalar::T128<float>_>(&local_798,pTVar33,pTVar32);
          local_1070 = local_798.data2.data._Elems[0];
          local_1080 = local_798.data1.data._Elems[0];
          fStack_107c = local_798.data1.data._Elems[1];
          fStack_1078 = local_798.data1.data._Elems[2] * fVar49;
          fStack_1074 = local_798.data1.data._Elems[3] * fVar49;
          fStack_106c = local_798.data2.data._Elems[1] * fVar49;
          fStack_1068 = local_798.data2.data._Elems[2] * fVar49;
          fStack_1064 = local_798.data2.data._Elems[3] * fVar49;
          local_1060 = local_1288.data1.data._Elems[0];
          fStack_105c = local_1288.data1.data._Elems[1];
          local_1288.data1.data._Elems[1] = local_1288.data1.data._Elems[1] * local_1368;
          _local_fd8 = CONCAT44(local_798.data1.data._Elems[1],
                                local_798.data1.data._Elems[1] * fVar49);
          local_1050 = local_1288.data2.data._Elems[0];
          local_1288.data1.data._Elems[0] = local_1288.data1.data._Elems[0] * local_1368;
          fStack_1058 = local_1288.data1.data._Elems[2] * local_1368;
          fStack_1054 = local_1288.data1.data._Elems[3] * local_1368;
          fStack_104c = local_1288.data2.data._Elems[1] * local_1368;
          fStack_1048 = local_1288.data2.data._Elems[2] * local_1368;
          local_1288.data2.data._Elems[0] = local_1288.data2.data._Elems[0] * local_1368;
          fStack_1044 = local_1288.data2.data._Elems[3] * local_1368;
          local_1090 = local_1268.data2.data._Elems[0];
          local_1268.data2.data._Elems[0] = local_1268.data2.data._Elems[0] * local_1368;
          fStack_108c = local_1268.data2.data._Elems[1] * local_1368;
          fStack_1088 = local_1268.data2.data._Elems[2] * local_1368;
          local_10a0 = local_1268.data1.data._Elems[0];
          fStack_109c = local_1268.data1.data._Elems[1];
          fStack_1098 = local_1268.data1.data._Elems[2] * local_1368;
          fStack_1094 = local_1268.data1.data._Elems[3] * local_1368;
          local_1010 = local_12a8.data2.data._Elems[0];
          local_1268.data1.data._Elems[0] = local_1268.data1.data._Elems[0] * local_1368;
          local_1268.data1.data._Elems[1] = local_1268.data1.data._Elems[1] * local_1368;
          fStack_1084 = local_1268.data2.data._Elems[3] * local_1368;
          fStack_100c = local_12a8.data2.data._Elems[1] * local_1368;
          fStack_1008 = local_12a8.data2.data._Elems[2] * local_1368;
          local_12a8.data2.data._Elems[0] = local_12a8.data2.data._Elems[0] * local_1368;
          local_1020 = local_12a8.data1.data._Elems[0];
          fStack_101c = local_12a8.data1.data._Elems[1];
          fStack_1018 = local_12a8.data1.data._Elems[2] * local_1368;
          fStack_1014 = local_12a8.data1.data._Elems[3] * local_1368;
          local_12a8.data1.data._Elems[1] = local_12a8.data1.data._Elems[1] * local_1368;
          fStack_1004 = local_12a8.data2.data._Elems[3] * local_1368;
          local_12a8.data1.data._Elems[0] = local_12a8.data1.data._Elems[0] * local_1368;
          local_1040 = local_12c8.data1.data._Elems[0];
          fStack_103c = local_12c8.data1.data._Elems[1];
          local_1030 = local_12c8.data2.data._Elems[0];
          local_12c8.data2.data._Elems[0] =
               local_12c8.data2.data._Elems[0] * local_1368 +
               local_798.data2.data._Elems[0] * fVar49;
          fStack_1038 = local_12c8.data1.data._Elems[2] * local_1368;
          fStack_1034 = local_12c8.data1.data._Elems[3] * local_1368;
          fStack_102c = local_12c8.data2.data._Elems[1] * local_1368;
          fStack_1028 = local_12c8.data2.data._Elems[2] * local_1368;
          fStack_1024 = local_12c8.data2.data._Elems[3] * local_1368;
          local_12c8.data1.data._Elems[2] = fStack_1038 + fStack_1078;
          local_12c8.data1.data._Elems[3] = fStack_1034 + fStack_1074;
          local_12c8.data1.data._Elems[0] =
               local_1368 * local_12c8.data1.data._Elems[0] +
               local_798.data1.data._Elems[0] * local_131c;
          local_12c8.data1.data._Elems[1] =
               local_12c8.data1.data._Elems[1] * local_1368 +
               local_798.data1.data._Elems[1] * fVar49;
          local_12c8.data2.data._Elems[1] = fStack_102c + fStack_106c;
          local_12c8.data2.data._Elems[2] = fStack_1028 + fStack_1068;
          local_12c8.data2.data._Elems[3] = fStack_1024 + fStack_1064;
          local_1288.data2.data._Elems[2] = fStack_1048;
          local_1288.data2.data._Elems[3] = fStack_1044;
          local_1288.data2.data._Elems[1] = fStack_104c;
          local_1268.data1.data._Elems[2] = fStack_1098;
          local_1268.data1.data._Elems[3] = fStack_1094;
          local_1268.data2.data._Elems[1] = fStack_108c;
          local_1288.data1.data._Elems[2] = fStack_1058;
          local_1288.data1.data._Elems[3] = fStack_1054;
          local_1268.data2.data._Elems[2] = fStack_1088;
          local_1268.data2.data._Elems[3] = fStack_1084;
          local_12a8.data2.data._Elems[1] = fStack_100c;
          local_12a8.data1.data._Elems[2] = fStack_1018;
          local_12a8.data1.data._Elems[3] = fStack_1014;
          local_12a8.data2.data._Elems[2] = fStack_1008;
          local_12a8.data2.data._Elems[3] = fStack_1004;
          trimd::fallback::operator*<trimd::scalar::T128<float>_>
                    (&local_e38,&local_1288,&local_1288);
          trimd::fallback::operator*<trimd::scalar::T128<float>_>
                    (&local_e18,&local_1268,&local_1268);
          trimd::fallback::operator*<trimd::scalar::T128<float>_>
                    (&local_e98,&local_12a8,&local_12a8);
          trimd::fallback::operator*<trimd::scalar::T128<float>_>
                    (&local_eb8,&local_12c8,&local_12c8);
          pTVar32 = trimd::fallback::operator+<trimd::scalar::T128<float>_>
                              (&local_938,&local_e38,&local_e18);
          pTVar32 = trimd::fallback::operator+<trimd::scalar::T128<float>_>
                              (&local_958,pTVar32,&local_e98);
          trimd::fallback::operator+<trimd::scalar::T128<float>_>(&local_e78,pTVar32,&local_eb8);
          trimd::fallback::rsqrt<trimd::scalar::T128<float>_>(&local_fa8,&local_e78);
          local_12f4 = local_1288.data2.data._Elems[0] * local_fa8.data2.data._Elems[0];
          local_1288.data1.data._Elems[0] =
               local_1288.data1.data._Elems[0] * local_fa8.data1.data._Elems[0];
          local_1320 = local_1268.data1.data._Elems[3] * local_fa8.data1.data._Elems[3];
          local_1288.data1.data._Elems[1] =
               local_1288.data1.data._Elems[1] * local_fa8.data1.data._Elems[1];
          local_1308 = local_1268.data2.data._Elems[0] * local_fa8.data2.data._Elems[0];
          local_1288.data1.data._Elems[2] =
               local_1288.data1.data._Elems[2] * local_fa8.data1.data._Elems[2];
          local_1310 = local_1268.data2.data._Elems[1] * local_fa8.data2.data._Elems[1];
          local_1288.data1.data._Elems[3] =
               local_1288.data1.data._Elems[3] * local_fa8.data1.data._Elems[3];
          local_1268.data2.data._Elems[1] = local_1310;
          local_1268.data2.data._Elems[0] = local_1308;
          local_1328 = local_1268.data2.data._Elems[2] * local_fa8.data2.data._Elems[2];
          local_1288.data2.data._Elems[1] =
               local_1288.data2.data._Elems[1] * local_fa8.data2.data._Elems[1];
          local_1288.data2.data._Elems[0] = local_12f4;
          local_1288.data2.data._Elems[2] =
               local_1288.data2.data._Elems[2] * local_fa8.data2.data._Elems[2];
          local_12f0 = local_1268.data1.data._Elems[2] * local_fa8.data1.data._Elems[2];
          local_1304 = local_1268.data2.data._Elems[3] * local_fa8.data2.data._Elems[3];
          local_1288.data2.data._Elems[3] =
               local_1288.data2.data._Elems[3] * local_fa8.data2.data._Elems[3];
          local_1268.data2.data._Elems[3] = local_1304;
          local_1268.data2.data._Elems[2] = local_1328;
          local_12a8.data1.data._Elems[0] =
               local_12a8.data1.data._Elems[0] * local_fa8.data1.data._Elems[0];
          local_1268.data1.data._Elems[0] =
               local_1268.data1.data._Elems[0] * local_fa8.data1.data._Elems[0];
          local_1268.data1.data._Elems[1] =
               local_1268.data1.data._Elems[1] * local_fa8.data1.data._Elems[1];
          local_12a8.data1.data._Elems[1] =
               local_12a8.data1.data._Elems[1] * local_fa8.data1.data._Elems[1];
          local_1268.data1.data._Elems[3] = local_1320;
          local_1268.data1.data._Elems[2] = local_12f0;
          local_130c = local_12a8.data2.data._Elems[1] * local_fa8.data2.data._Elems[1];
          local_12a8.data1.data._Elems[2] =
               local_12a8.data1.data._Elems[2] * local_fa8.data1.data._Elems[2];
          local_132c = local_12a8.data2.data._Elems[2] * local_fa8.data2.data._Elems[2];
          local_12a8.data1.data._Elems[3] =
               local_12a8.data1.data._Elems[3] * local_fa8.data1.data._Elems[3];
          local_1300 = local_12a8.data2.data._Elems[3] * local_fa8.data2.data._Elems[3];
          local_12a8.data2.data._Elems[0] =
               local_12a8.data2.data._Elems[0] * local_fa8.data2.data._Elems[0];
          local_12a8.data2.data._Elems[3] = local_1300;
          local_12a8.data2.data._Elems[2] = local_132c;
          local_12c8.data1.data._Elems[0] =
               local_12c8.data1.data._Elems[0] * local_fa8.data1.data._Elems[0];
          local_12c8.data1.data._Elems[1] =
               local_12c8.data1.data._Elems[1] * local_fa8.data1.data._Elems[1];
          local_12c8.data1.data._Elems[2] =
               local_12c8.data1.data._Elems[2] * local_fa8.data1.data._Elems[2];
          local_12c8.data1.data._Elems[3] =
               local_12c8.data1.data._Elems[3] * local_fa8.data1.data._Elems[3];
          local_12c8.data2.data._Elems[0] =
               local_12c8.data2.data._Elems[0] * local_fa8.data2.data._Elems[0];
          local_12c8.data2.data._Elems[1] =
               local_12c8.data2.data._Elems[1] * local_fa8.data2.data._Elems[1];
          local_12c8.data2.data._Elems[2] =
               local_12c8.data2.data._Elems[2] * local_fa8.data2.data._Elems[2];
          local_12c8.data2.data._Elems[3] =
               local_12c8.data2.data._Elems[3] * local_fa8.data2.data._Elems[3];
          local_12a8.data2.data._Elems[1] = local_130c;
          local_1368 = (local_12c8.data1.data._Elems[0] * local_838.data1.data._Elems[0] +
                        local_1288.data1.data._Elems[0] * local_858.data1.data._Elems[0] +
                       local_1268.data1.data._Elems[0] * local_878.data1.data._Elems[0]) -
                       local_12a8.data1.data._Elems[0] * local_818.data1.data._Elems[0];
          local_1324 = (local_1288.data1.data._Elems[1] * local_858.data1.data._Elems[1] +
                        local_12c8.data1.data._Elems[1] * local_838.data1.data._Elems[1] +
                       local_1268.data1.data._Elems[1] * local_878.data1.data._Elems[1]) -
                       local_12a8.data1.data._Elems[1] * local_818.data1.data._Elems[1];
          local_1330 = (local_1288.data1.data._Elems[2] * local_858.data1.data._Elems[2] +
                        local_12c8.data1.data._Elems[2] * local_838.data1.data._Elems[2] +
                       local_12f0 * local_878.data1.data._Elems[2]) -
                       local_12a8.data1.data._Elems[2] * local_818.data1.data._Elems[2];
          local_1334 = (local_1288.data1.data._Elems[3] * local_858.data1.data._Elems[3] +
                        local_12c8.data1.data._Elems[3] * local_838.data1.data._Elems[3] +
                       local_1320 * local_878.data1.data._Elems[3]) -
                       local_12a8.data1.data._Elems[3] * local_818.data1.data._Elems[3];
          local_131c = (local_12c8.data2.data._Elems[0] * local_838.data2.data._Elems[0] +
                        local_12f4 * local_858.data2.data._Elems[0] +
                       local_1308 * local_878.data2.data._Elems[0]) -
                       local_12a8.data2.data._Elems[0] * local_818.data2.data._Elems[0];
          local_1338 = (local_1288.data2.data._Elems[1] * local_858.data2.data._Elems[1] +
                        local_12c8.data2.data._Elems[1] * local_838.data2.data._Elems[1] +
                       local_1310 * local_878.data2.data._Elems[1]) -
                       local_130c * local_818.data2.data._Elems[1];
          local_133c = (local_1288.data2.data._Elems[2] * local_858.data2.data._Elems[2] +
                        local_12c8.data2.data._Elems[2] * local_838.data2.data._Elems[2] +
                       local_1328 * local_878.data2.data._Elems[2]) -
                       local_132c * local_818.data2.data._Elems[2];
          local_1340 = (local_1288.data2.data._Elems[3] * local_858.data2.data._Elems[3] +
                        local_12c8.data2.data._Elems[3] * local_838.data2.data._Elems[3] +
                       local_1304 * local_878.data2.data._Elems[3]) -
                       local_1300 * local_818.data2.data._Elems[3];
          local_418.data1.data._Elems[0] = local_12a8.data1.data._Elems[0];
          local_418.data1.data._Elems[1] = local_12a8.data1.data._Elems[1];
          local_418.data1.data._Elems[2] = local_12a8.data1.data._Elems[2];
          local_418.data1.data._Elems[3] = local_12a8.data1.data._Elems[3];
          local_418.data2.data._Elems[0] = local_12a8.data2.data._Elems[0];
          local_418.data2.data._Elems[1] = local_130c;
          local_418.data2.data._Elems[2] = local_132c;
          local_418.data2.data._Elems[3] = local_1300;
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_418,&local_838);
          fVar67 = (pTVar32->data1).data._Elems[0];
          fVar49 = (pTVar32->data1).data._Elems[1];
          fVar50 = (pTVar32->data1).data._Elems[2];
          fVar51 = (pTVar32->data1).data._Elems[3];
          fVar52 = (pTVar32->data2).data._Elems[0];
          fVar53 = (pTVar32->data2).data._Elems[1];
          fVar54 = (pTVar32->data2).data._Elems[2];
          fVar55 = (pTVar32->data2).data._Elems[3];
          local_438.data1.data._Elems[0] = local_1268.data1.data._Elems[0];
          local_438.data1.data._Elems[1] = local_1268.data1.data._Elems[1];
          local_438.data1.data._Elems[2] = local_1268.data1.data._Elems[2];
          local_438.data1.data._Elems[3] = local_1268.data1.data._Elems[3];
          local_438.data2.data._Elems[0] = local_1268.data2.data._Elems[0];
          local_438.data2.data._Elems[1] = local_1268.data2.data._Elems[1];
          local_438.data2.data._Elems[2] = local_1268.data2.data._Elems[2];
          local_438.data2.data._Elems[3] = local_1268.data2.data._Elems[3];
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_438,&local_858);
          fVar56 = (pTVar32->data1).data._Elems[0];
          fVar57 = (pTVar32->data1).data._Elems[1];
          fVar58 = (pTVar32->data1).data._Elems[2];
          fVar69 = (pTVar32->data1).data._Elems[3];
          fVar70 = (pTVar32->data2).data._Elems[0];
          fVar71 = (pTVar32->data2).data._Elems[1];
          fVar72 = (pTVar32->data2).data._Elems[2];
          fVar59 = (pTVar32->data2).data._Elems[3];
          local_f8.data1.data._Elems[0] = local_1288.data1.data._Elems[0];
          local_f8.data1.data._Elems[1] = local_1288.data1.data._Elems[1];
          local_f8.data1.data._Elems[2] = local_1288.data1.data._Elems[2];
          local_f8.data1.data._Elems[3] = local_1288.data1.data._Elems[3];
          local_f8.data2.data._Elems[0] = local_1288.data2.data._Elems[0];
          local_f8.data2.data._Elems[1] = local_1288.data2.data._Elems[1];
          local_f8.data2.data._Elems[2] = local_1288.data2.data._Elems[2];
          local_f8.data2.data._Elems[3] = local_1288.data2.data._Elems[3];
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_f8,&local_878);
          fVar68 = (pTVar32->data1).data._Elems[0];
          fVar45 = (pTVar32->data1).data._Elems[1];
          fVar46 = (pTVar32->data1).data._Elems[2];
          fVar47 = (pTVar32->data1).data._Elems[3];
          fVar48 = (pTVar32->data2).data._Elems[0];
          fVar60 = (pTVar32->data2).data._Elems[1];
          fVar61 = (pTVar32->data2).data._Elems[2];
          fVar62 = (pTVar32->data2).data._Elems[3];
          local_458.data2.data._Elems[0] = local_12c8.data2.data._Elems[0];
          local_458.data2.data._Elems[1] = local_12c8.data2.data._Elems[1];
          local_458.data2.data._Elems[2] = local_12c8.data2.data._Elems[2];
          local_458.data2.data._Elems[3] = local_12c8.data2.data._Elems[3];
          local_458.data1.data._Elems[0] = local_12c8.data1.data._Elems[0];
          local_458.data1.data._Elems[1] = local_12c8.data1.data._Elems[1];
          local_458.data1.data._Elems[2] = local_12c8.data1.data._Elems[2];
          local_458.data1.data._Elems[3] = local_12c8.data1.data._Elems[3];
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_458,&local_818);
          local_10f8 = (pTVar32->data1).data._Elems[0];
          local_10e8 = (pTVar32->data2).data._Elems[0];
          fStack_10f4 = (pTVar32->data1).data._Elems[1] - fVar45;
          fStack_10f0 = (pTVar32->data1).data._Elems[2] - fVar46;
          fStack_10ec = (pTVar32->data1).data._Elems[3] - fVar47;
          fStack_10e4 = (pTVar32->data2).data._Elems[1] - fVar60;
          fStack_10e0 = (pTVar32->data2).data._Elems[2] - fVar61;
          fStack_10dc = (pTVar32->data2).data._Elems[3] - fVar62;
          local_12f0 = fVar56 + (local_10f8 - fVar68) + fVar67;
          fStack_fd4 = fVar57;
          local_fd8 = fVar57 + fStack_10f4 + fVar49;
          fStack_fcc = fVar57;
          fStack_fd0 = fVar57;
          fStack_f24 = fVar58;
          local_f28 = fVar58 + fStack_10f0 + fVar50;
          fStack_f1c = fVar58;
          fStack_f20 = fVar58;
          fStack_f34 = fVar69;
          local_f38 = fVar69 + fStack_10ec + fVar51;
          fStack_f2c = fVar69;
          fStack_f30 = fVar69;
          local_1320 = fVar70 + (local_10e8 - fVar48) + fVar52;
          fStack_f44 = fVar71;
          local_f48 = fVar71 + fStack_10e4 + fVar53;
          fStack_f3c = fVar71;
          fStack_f40 = fVar71;
          local_1218 = (float *)CONCAT44(fVar72,fVar72 + fStack_10e0 + fVar54);
          local_118.data1.data._Elems[0] = local_12a8.data1.data._Elems[0];
          local_118.data1.data._Elems[1] = local_12a8.data1.data._Elems[1];
          local_118.data1.data._Elems[2] = local_12a8.data1.data._Elems[2];
          local_118.data1.data._Elems[3] = local_12a8.data1.data._Elems[3];
          local_1198.data1.data._Elems[1] = fVar59;
          local_1198.data1.data._Elems[0] = fVar59 + fStack_10dc + fVar55;
          local_1198.data1.data._Elems[3] = fVar59;
          local_1198.data1.data._Elems[2] = fVar59;
          local_118.data2.data._Elems[0] = local_12a8.data2.data._Elems[0];
          local_118.data2.data._Elems[1] = local_12a8.data2.data._Elems[1];
          local_118.data2.data._Elems[2] = local_12a8.data2.data._Elems[2];
          local_118.data2.data._Elems[3] = local_12a8.data2.data._Elems[3];
          fStack_1210 = fVar72;
          fStack_120c = fVar72;
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_118,&local_858);
          fVar67 = (pTVar32->data1).data._Elems[0];
          fVar49 = (pTVar32->data1).data._Elems[1];
          fVar50 = (pTVar32->data1).data._Elems[2];
          fVar51 = (pTVar32->data1).data._Elems[3];
          fVar52 = (pTVar32->data2).data._Elems[0];
          fVar53 = (pTVar32->data2).data._Elems[1];
          fVar54 = (pTVar32->data2).data._Elems[2];
          fVar55 = (pTVar32->data2).data._Elems[3];
          local_138.data1.data._Elems[0] = local_1268.data1.data._Elems[0];
          local_138.data1.data._Elems[1] = local_1268.data1.data._Elems[1];
          local_138.data1.data._Elems[2] = local_1268.data1.data._Elems[2];
          local_138.data1.data._Elems[3] = local_1268.data1.data._Elems[3];
          local_138.data2.data._Elems[0] = local_1268.data2.data._Elems[0];
          local_138.data2.data._Elems[1] = local_1268.data2.data._Elems[1];
          local_138.data2.data._Elems[2] = local_1268.data2.data._Elems[2];
          local_138.data2.data._Elems[3] = local_1268.data2.data._Elems[3];
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_138,&local_838);
          fVar56 = (pTVar32->data1).data._Elems[0];
          fVar57 = (pTVar32->data1).data._Elems[1];
          fVar58 = (pTVar32->data1).data._Elems[2];
          fVar69 = (pTVar32->data1).data._Elems[3];
          fVar70 = (pTVar32->data2).data._Elems[0];
          fVar71 = (pTVar32->data2).data._Elems[1];
          fVar72 = (pTVar32->data2).data._Elems[2];
          fVar59 = (pTVar32->data2).data._Elems[3];
          local_2f8.data1.data._Elems[0] = local_1288.data1.data._Elems[0];
          local_2f8.data1.data._Elems[1] = local_1288.data1.data._Elems[1];
          local_2f8.data1.data._Elems[2] = local_1288.data1.data._Elems[2];
          local_2f8.data1.data._Elems[3] = local_1288.data1.data._Elems[3];
          local_2f8.data2.data._Elems[0] = local_1288.data2.data._Elems[0];
          local_2f8.data2.data._Elems[1] = local_1288.data2.data._Elems[1];
          local_2f8.data2.data._Elems[2] = local_1288.data2.data._Elems[2];
          local_2f8.data2.data._Elems[3] = local_1288.data2.data._Elems[3];
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_2f8,&local_818);
          fVar68 = (pTVar32->data1).data._Elems[0];
          fVar45 = (pTVar32->data1).data._Elems[1];
          fVar46 = (pTVar32->data1).data._Elems[2];
          fVar47 = (pTVar32->data1).data._Elems[3];
          fVar48 = (pTVar32->data2).data._Elems[0];
          fVar60 = (pTVar32->data2).data._Elems[1];
          fVar61 = (pTVar32->data2).data._Elems[2];
          fVar62 = (pTVar32->data2).data._Elems[3];
          local_318.data1.data._Elems[0] = local_12c8.data1.data._Elems[0];
          local_318.data1.data._Elems[1] = local_12c8.data1.data._Elems[1];
          local_318.data1.data._Elems[2] = local_12c8.data1.data._Elems[2];
          local_318.data1.data._Elems[3] = local_12c8.data1.data._Elems[3];
          local_318.data2.data._Elems[0] = local_12c8.data2.data._Elems[0];
          local_318.data2.data._Elems[1] = local_12c8.data2.data._Elems[1];
          local_318.data2.data._Elems[2] = local_12c8.data2.data._Elems[2];
          local_318.data2.data._Elems[3] = local_12c8.data2.data._Elems[3];
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_318,&local_878);
          local_1138 = (pTVar32->data1).data._Elems[0];
          local_1178.data1.data._Elems[1] = (pTVar32->data1).data._Elems[1];
          pfVar38 = (pTVar32->data1).data._Elems + 2;
          local_1178.data1.data._Elems._8_8_ = *(undefined8 *)pfVar38;
          local_1128 = (pTVar32->data2).data._Elems[0];
          local_11b8.data1.data._Elems[1] = (pTVar32->data2).data._Elems[1];
          pfVar40 = (pTVar32->data2).data._Elems + 2;
          local_11b8.data1.data._Elems._8_8_ = *(undefined8 *)pfVar40;
          fStack_1134 = local_1178.data1.data._Elems[1] + fVar45;
          fStack_1130 = *pfVar38 + fVar46;
          fStack_112c = (pTVar32->data1).data._Elems[3] + fVar47;
          fStack_1124 = local_11b8.data1.data._Elems[1] + fVar60;
          fStack_1120 = *pfVar40 + fVar61;
          fStack_111c = (pTVar32->data2).data._Elems[3] + fVar62;
          local_1178.data1.data._Elems[0] = ((local_1138 + fVar68) - fVar56) + fVar67;
          local_12f4 = (fStack_1134 - fVar57) + fVar49;
          local_1308 = (fStack_1130 - fVar58) + fVar50;
          local_1310 = (fStack_112c - fVar69) + fVar51;
          local_130c = (fStack_1124 - fVar71) + fVar53;
          local_1328 = (fStack_1120 - fVar72) + fVar54;
          local_132c = (fStack_111c - fVar59) + fVar55;
          local_11b8.data1.data._Elems[0] = ((local_1128 + fVar48) - fVar70) + fVar52;
          local_358.data1.data._Elems[0] = local_12a8.data1.data._Elems[0];
          local_358.data1.data._Elems[1] = local_12a8.data1.data._Elems[1];
          local_358.data1.data._Elems[2] = local_12a8.data1.data._Elems[2];
          local_358.data1.data._Elems[3] = local_12a8.data1.data._Elems[3];
          local_358.data2.data._Elems[0] = local_12a8.data2.data._Elems[0];
          local_358.data2.data._Elems[1] = local_12a8.data2.data._Elems[1];
          local_358.data2.data._Elems[2] = local_12a8.data2.data._Elems[2];
          local_358.data2.data._Elems[3] = local_12a8.data2.data._Elems[3];
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_358,&local_878);
          fVar50 = (pTVar32->data1).data._Elems[0];
          fVar51 = (pTVar32->data1).data._Elems[1];
          fVar52 = (pTVar32->data1).data._Elems[2];
          fVar53 = (pTVar32->data1).data._Elems[3];
          fVar67 = (pTVar32->data2).data._Elems[0];
          fVar49 = (pTVar32->data2).data._Elems[1];
          fVar54 = (pTVar32->data2).data._Elems[2];
          fVar55 = (pTVar32->data2).data._Elems[3];
          local_378.data1.data._Elems[0] = local_1268.data1.data._Elems[0];
          local_378.data1.data._Elems[1] = local_1268.data1.data._Elems[1];
          local_378.data1.data._Elems[2] = local_1268.data1.data._Elems[2];
          local_378.data1.data._Elems[3] = local_1268.data1.data._Elems[3];
          local_378.data2.data._Elems[0] = local_1268.data2.data._Elems[0];
          local_378.data2.data._Elems[1] = local_1268.data2.data._Elems[1];
          local_378.data2.data._Elems[2] = local_1268.data2.data._Elems[2];
          local_378.data2.data._Elems[3] = local_1268.data2.data._Elems[3];
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_378,&local_818);
          fVar56 = (pTVar32->data1).data._Elems[0];
          fVar57 = (pTVar32->data1).data._Elems[1];
          fVar58 = (pTVar32->data1).data._Elems[2];
          fVar69 = (pTVar32->data1).data._Elems[3];
          fVar70 = (pTVar32->data2).data._Elems[0];
          fVar71 = (pTVar32->data2).data._Elems[1];
          fVar72 = (pTVar32->data2).data._Elems[2];
          fVar59 = (pTVar32->data2).data._Elems[3];
          local_398.data1.data._Elems[0] = local_1288.data1.data._Elems[0];
          local_398.data1.data._Elems[1] = local_1288.data1.data._Elems[1];
          local_398.data1.data._Elems[2] = local_1288.data1.data._Elems[2];
          local_398.data1.data._Elems[3] = local_1288.data1.data._Elems[3];
          local_398.data2.data._Elems[0] = local_1288.data2.data._Elems[0];
          local_398.data2.data._Elems[1] = local_1288.data2.data._Elems[1];
          local_398.data2.data._Elems[2] = local_1288.data2.data._Elems[2];
          local_398.data2.data._Elems[3] = local_1288.data2.data._Elems[3];
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_398,&local_838);
          fVar68 = (pTVar32->data1).data._Elems[0];
          fVar45 = (pTVar32->data1).data._Elems[1];
          fVar46 = (pTVar32->data1).data._Elems[2];
          fVar47 = (pTVar32->data1).data._Elems[3];
          fVar48 = (pTVar32->data2).data._Elems[0];
          fVar60 = (pTVar32->data2).data._Elems[1];
          fVar61 = (pTVar32->data2).data._Elems[2];
          fVar62 = (pTVar32->data2).data._Elems[3];
          local_3b8.data1.data._Elems[0] = local_12c8.data1.data._Elems[0];
          local_3b8.data1.data._Elems[1] = local_12c8.data1.data._Elems[1];
          local_3b8.data1.data._Elems[2] = local_12c8.data1.data._Elems[2];
          local_3b8.data1.data._Elems[3] = local_12c8.data1.data._Elems[3];
          local_3b8.data2.data._Elems[0] = local_12c8.data2.data._Elems[0];
          local_3b8.data2.data._Elems[1] = local_12c8.data2.data._Elems[1];
          local_3b8.data2.data._Elems[2] = local_12c8.data2.data._Elems[2];
          local_3b8.data2.data._Elems[3] = local_12c8.data2.data._Elems[3];
          pTVar32 = trimd::fallback::T256<trimd::scalar::T128<float>_>::operator*=
                              (&local_3b8,&local_858);
          local_10c8 = (pTVar32->data1).data._Elems[0];
          local_10b8 = (pTVar32->data2).data._Elems[0];
          fStack_10c4 = (pTVar32->data1).data._Elems[1] - fVar45;
          fStack_10c0 = (pTVar32->data1).data._Elems[2] - fVar46;
          fStack_10bc = (pTVar32->data1).data._Elems[3] - fVar47;
          fVar50 = ((local_10c8 - fVar68) - fVar56) - fVar50;
          fStack_10b4 = (pTVar32->data2).data._Elems[1] - fVar60;
          fStack_10b0 = (pTVar32->data2).data._Elems[2] - fVar61;
          fStack_10ac = (pTVar32->data2).data._Elems[3] - fVar62;
          local_858.data2.data._Elems[0] = ((local_10b8 - fVar48) - fVar70) - fVar67;
          fVar51 = (fStack_10c4 - fVar57) - fVar51;
          fVar52 = (fStack_10c0 - fVar58) - fVar52;
          fVar53 = (fStack_10bc - fVar69) - fVar53;
          local_858.data2.data._Elems[1] = (fStack_10b4 - fVar71) - fVar49;
          local_858.data2.data._Elems[2] = (fStack_10b0 - fVar72) - fVar54;
          local_838.data1.data._Elems[1] = local_1324;
          local_838.data1.data._Elems[0] = local_1368;
          local_858.data2.data._Elems[3] = (fStack_10ac - fVar59) - fVar55;
          uVar39 = uVar39 + 1;
          pfVar34 = pfVar34 + 0x20;
          local_818.data1.data._Elems[1] = local_fd8;
          local_818.data1.data._Elems[0] = local_12f0;
          local_818.data1.data._Elems[2] = (float)_local_f28;
          local_818.data1.data._Elems[3] = local_f38;
          local_818.data2.data._Elems[1] = local_f48;
          local_818.data2.data._Elems[0] = local_1320;
          local_818.data2.data._Elems[2] = SUB84(local_1218,0);
          local_818.data2.data._Elems[3] = local_1198.data1.data._Elems[0];
          local_838.data1.data._Elems[3] = local_1334;
          local_838.data1.data._Elems[2] = local_1330;
          local_838.data2.data._Elems[1] = local_1338;
          local_838.data2.data._Elems[0] = local_131c;
          local_838.data2.data._Elems[3] = local_1340;
          local_838.data2.data._Elems[2] = local_133c;
          local_858.data1.data._Elems[0] = fVar50;
          local_858.data1.data._Elems[1] = fVar51;
          local_858.data1.data._Elems[2] = fVar52;
          local_858.data1.data._Elems[3] = fVar53;
          fVar54 = local_1178.data1.data._Elems[0];
          local_878.data1.data._Elems[0] = fVar54;
          local_878.data1.data._Elems[1] = local_12f4;
          local_878.data1.data._Elems[3] = local_1310;
          local_878.data1.data._Elems[2] = local_1308;
          local_878.data2.data._Elems[3] = local_132c;
          local_878.data2.data._Elems[2] = local_1328;
          local_878.data2.data._Elems[1] = local_130c;
          local_878.data2.data._Elems[0] = local_11b8.data1.data._Elems[0];
          pLVar41 = local_1228;
          lVar43 = local_1220;
          fVar55 = local_12f4;
          fVar56 = local_1308;
          fVar57 = local_1310;
          fVar58 = local_11b8.data1.data._Elems[0];
          fVar69 = local_130c;
          fVar70 = local_1328;
          fVar71 = local_132c;
          fVar49 = __real_3f800000;
          fVar67 = __real_42652ee1;
          fVar72 = ___xmm_3f8000003f8000003f8000003f800000;
          fVar59 = _UNK_15076b1f4;
          fVar68 = _UNK_15076b1f8;
          fVar45 = _UNK_15076b1fc;
        } while (uVar39 < uVar42);
      }
      pfVar36 = local_1208;
      local_d18[0] = local_838.data1.data._Elems[0];
      local_d18[1] = local_838.data1.data._Elems[1];
      local_d18[2] = local_838.data1.data._Elems[2];
      local_d18[3] = local_838.data1.data._Elems[3];
      local_d08[0] = local_838.data2.data._Elems[0];
      local_d08[1] = local_838.data2.data._Elems[1];
      afStack_d00[0] = local_838.data2.data._Elems[2];
      afStack_d00[1] = local_838.data2.data._Elems[3];
      local_cf8[0] = local_818.data1.data._Elems[0];
      local_cf8[1] = local_818.data1.data._Elems[1];
      local_cf8[2] = local_818.data1.data._Elems[2];
      local_cf8[3] = local_818.data1.data._Elems[3];
      local_ce8[0] = local_818.data2.data._Elems[0];
      local_ce8[1] = local_818.data2.data._Elems[1];
      afStack_ce0[0] = local_818.data2.data._Elems[2];
      afStack_ce0[1] = local_818.data2.data._Elems[3];
      local_cd8[0] = fVar54;
      local_cd8[1] = fVar55;
      local_cd8[2] = fVar56;
      local_cd8[3] = fVar57;
      local_cc8 = fVar58;
      fStack_cc4 = fVar69;
      fStack_cc0 = fVar70;
      fStack_cbc = fVar71;
      local_cb8[0] = fVar50;
      local_cb8[1] = fVar51;
      local_cb8[2] = fVar52;
      local_cb8[3] = fVar53;
      local_ca8 = local_858.data2.data._Elems[0];
      fStack_ca4 = local_858.data2.data._Elems[1];
      fStack_ca0 = local_858.data2.data._Elems[2];
      fStack_c9c = local_858.data2.data._Elems[3];
      pfVar34 = local_10d0->ptr;
      uVar44 = (&(pLVar41->outputLODs).size)[local_1140 * 2] >> 2 & 7;
      uVar39 = (ulonglong)uVar44;
      local_858.data1.data._Elems[0] = fVar50;
      local_858.data1.data._Elems[1] = fVar51;
      local_858.data1.data._Elems[2] = fVar52;
      local_858.data1.data._Elems[3] = fVar53;
      if (uVar44 != 0) {
        pfVar38 = local_cd8;
        pfVar40 = local_1208 + 1;
        do {
          local_1360.x = pfVar38[-0x10];
          local_1360.y = pfVar38[-8];
          local_1360.z = *pfVar38;
          local_1360.w = pfVar38[8];
          tdm::quat<float>::euler<0>(&local_1360,&local_fb8);
          pfVar38 = pfVar38 + 1;
          pfVar34[*(ushort *)(pfVar40 + -1)] = local_fb8.values[0].value * fVar67;
          pfVar34[*(ushort *)((longlong)pfVar40 + -2)] = local_fb8.values[1].value * fVar67;
          pfVar34[*(ushort *)pfVar40] = local_fb8.values[2].value * fVar67;
          uVar39 = uVar39 - 1;
          param_2 = local_10a8;
          pfVar40 = pfVar40 + 2;
          pLVar41 = local_1228;
        } while (uVar39 != 0);
      }
      local_1208 = pfVar36 + 0x10;
      local_1248 = (float *)((longlong)local_1248 + lVar43);
      pfVar34 = (float *)((longlong)local_1240 + lVar43);
      fVar50 = fVar72;
      fVar51 = fVar59;
      fVar52 = fVar68;
      fVar53 = fVar45;
      local_1240 = pfVar34;
    } while (local_1208 < local_1238);
  }
  puVar1 = local_1230;
  if (local_1208 < local_fe0) {
    local_1238 = (float *)((longlong)local_fe0 - (longlong)local_1208);
    local_1218 = local_1248 + 6;
    do {
      pfVar34 = local_1208;
      fVar67 = __real_42652ee1;
      local_11c8 = CONCAT44(_UNK_15076b1f4,___xmm_3f8000003f8000003f8000003f800000);
      uStack_11c0 = CONCAT44(_UNK_15076b1fc,_UNK_15076b1f8);
      uVar39 = 0;
      local_11f8 = 0;
      uStack_11f0 = 0;
      local_11e8 = 0;
      uStack_11e0 = 0;
      local_11d8 = 0;
      uStack_11d0 = 0;
      if (uVar42 != 0) {
        local_12d8 = 0.0;
        local_12e0 = 0.0;
        local_12e4 = 0.0;
        local_12e8 = 0.0;
        local_1304 = 0.0;
        local_1300 = 0.0;
        local_12d0 = 0.0;
        local_12d4 = 0.0;
        local_133c = 0.0;
        local_1340 = 0.0;
        local_1328 = 0.0;
        local_132c = 0.0;
        local_1330 = _UNK_15076b1fc;
        local_1334 = _UNK_15076b1f8;
        local_1338 = _UNK_15076b1f4;
        local_1314 = ___xmm_3f8000003f8000003f8000003f800000;
        local_10d8 = 0x3f800000;
        local_1158 = 0x3f800000;
        local_1154 = 0x3f800000;
        local_1150 = 0xbf800000;
        local_114c = 0xbf800000;
        local_1148 = 0xbf800000;
        local_1140 = CONCAT44(local_1140._4_4_,0xbf800000);
        pfVar36 = local_1218;
        do {
          uVar44 = 0;
          fVar50 = param_2->ptr[puVar1[uVar39]];
          fVar49 = fVar49 - fVar50;
          local_1318 = fVar50 * *pfVar36;
          if (0.0 <= pfVar36[6]) {
            uVar44 = 0xffffffff;
          }
          local_130c = fVar50 * pfVar36[-4];
          local_1324 = fVar50 * pfVar36[-3];
          uVar37 = 0;
          if (0.0 <= pfVar36[7]) {
            uVar37 = 0xffffffff;
          }
          uVar35 = 0;
          fVar52 = fVar50 * pfVar36[-2];
          fVar53 = fVar50 * pfVar36[-1];
          local_1310 = fVar50 * pfVar36[1];
          fVar51 = fVar50 * pfVar36[2];
          fVar54 = fVar50 * pfVar36[3];
          if (0.0 <= pfVar36[8]) {
            uVar35 = 0xffffffff;
          }
          local_12f0 = fVar50 * pfVar36[-5];
          uVar31 = 0;
          if (0.0 <= pfVar36[9]) {
            uVar31 = 0xffffffff;
          }
          fVar55 = fVar50 * pfVar36[-6];
          fVar56 = fVar50 * pfVar36[4];
          fVar57 = fVar50 * pfVar36[5];
          fVar58 = fVar50 * pfVar36[6] +
                   (float)(~uVar44 & 0xbf800000 | uVar44 & 0x3f800000) * fVar49;
          local_12f4 = pfVar36[7] * fVar50 +
                       (float)(~uVar37 & 0xbf800000 | uVar37 & 0x3f800000) * fVar49;
          local_12f8 = pfVar36[8] * fVar50 +
                       (float)(~uVar35 & 0xbf800000 | uVar35 & 0x3f800000) * fVar49;
          local_12ec = fVar50 * pfVar36[9] +
                       (float)(~uVar31 & 0xbf800000 | uVar31 & 0x3f800000) * fVar49;
          local_1368 = __real_3f800000 /
                       SQRT(fVar58 * fVar58 + fVar51 * fVar51 + fVar52 * fVar52 + fVar55 * fVar55);
          fVar49 = __real_3f800000 /
                   SQRT(local_12f4 * local_12f4 + fVar54 * fVar54 +
                        fVar53 * fVar53 + local_12f0 * local_12f0);
          local_131c = __real_3f800000 /
                       SQRT(local_130c * local_130c + local_1318 * local_1318 +
                            local_12f8 * local_12f8 + fVar56 * fVar56);
          local_1308 = __real_3f800000 /
                       SQRT(local_12ec * local_12ec + fVar57 * fVar57 +
                            local_1310 * local_1310 + local_1324 * local_1324);
          local_12f0 = fVar49 * local_12f0;
          fVar55 = local_1368 * fVar55;
          local_130c = local_131c * local_130c;
          fVar52 = local_1368 * fVar52;
          local_1324 = local_1308 * local_1324;
          local_1230 = (ushort *)CONCAT44(local_1230._4_4_,fVar55);
          local_1318 = local_1318 * local_131c;
          local_12f8 = local_131c * local_12f8;
          fVar53 = fVar49 * fVar53;
          local_1310 = local_1308 * local_1310;
          fVar51 = local_1368 * fVar51;
          local_131c = local_131c * fVar56;
          local_12dc = local_1308 * local_12ec;
          local_12fc = fVar49 * local_12f4;
          local_1308 = local_1308 * fVar57;
          fVar49 = fVar49 * fVar54;
          local_1368 = local_1368 * fVar58;
          local_1220 = CONCAT44(local_1220._4_4_,fVar52);
          local_1240 = (float *)CONCAT44(local_1240._4_4_,fVar53);
          local_1248 = (float *)CONCAT44(local_1248._4_4_,fVar51);
          local_1228 = (LODRegion *)CONCAT44(local_1228._4_4_,fVar49);
          local_1320 = (local_12d4 * local_1368 - local_132c * fVar55) + local_1314 * fVar52 +
                       local_12e8 * fVar51;
          fVar68 = (local_12d0 * local_12fc - local_1328 * local_12f0) + local_1338 * fVar53 +
                   local_12e4 * fVar49;
          fVar59 = (local_1300 * local_12f8 - local_1340 * local_130c) + local_1334 * local_1318 +
                   local_12e0 * local_131c;
          fVar72 = (local_1304 * local_12dc - local_133c * local_1324) + local_1330 * local_1310 +
                   local_12d8 * local_1308;
          fVar71 = ((local_132c * local_1368 + local_12d4 * fVar55) - local_12e8 * fVar52) +
                   local_1314 * fVar51;
          fVar70 = ((local_1328 * local_12fc + local_12d0 * local_12f0) - local_12e4 * fVar53) +
                   local_1338 * fVar49;
          fVar69 = ((local_1340 * local_12f8 + local_1300 * local_130c) - local_12e0 * local_1318) +
                   local_1334 * local_131c;
          fVar58 = ((local_133c * local_12dc + local_1304 * local_1324) - local_12d8 * local_1310) +
                   local_1330 * local_1308;
          fVar57 = ((local_1314 * local_1368 - local_12e8 * fVar55) - local_12d4 * fVar52) -
                   local_132c * fVar51;
          fVar56 = ((local_1338 * local_12fc - local_12e4 * local_12f0) - local_12d0 * fVar53) -
                   local_1328 * fVar49;
          fVar54 = ((local_1334 * local_12f8 - local_12e0 * local_130c) - local_1300 * local_1318) -
                   local_1340 * local_131c;
          fVar50 = ((local_1330 * local_12dc - local_12d8 * local_1324) - local_1304 * local_1310) -
                   local_133c * local_1308;
          local_12e8 = (local_12e8 * local_1368 + local_1314 * fVar55 + local_132c * fVar52) -
                       local_12d4 * fVar51;
          local_12e4 = (local_12e4 * local_12fc + local_1338 * local_12f0 + local_1328 * fVar53) -
                       local_12d0 * fVar49;
          local_11f8 = CONCAT44(local_12e4,local_12e8);
          local_12e0 = (local_12e0 * local_12f8 + local_1334 * local_130c + local_1340 * local_1318)
                       - local_1300 * local_131c;
          local_12d8 = (local_12d8 * local_12dc + local_1330 * local_1324 + local_133c * local_1310)
                       - local_1304 * local_1308;
          uStack_11f0 = CONCAT44(local_12d8,local_12e0);
          uVar39 = uVar39 + 1;
          local_11e8 = CONCAT44(fVar68,local_1320);
          pfVar36 = pfVar36 + 0x10;
          uStack_11e0 = CONCAT44(fVar72,fVar59);
          local_11d8 = CONCAT44(fVar70,fVar71);
          uStack_11d0 = CONCAT44(fVar58,fVar69);
          local_11c8 = CONCAT44(fVar56,fVar57);
          uStack_11c0 = CONCAT44(fVar50,fVar54);
          fVar49 = __real_3f800000;
          local_1340 = fVar69;
          local_133c = fVar58;
          local_1338 = fVar56;
          local_1334 = fVar54;
          local_1330 = fVar50;
          local_132c = fVar71;
          local_1328 = fVar70;
          local_1314 = fVar57;
          local_1304 = fVar72;
          local_1300 = fVar59;
          local_12d4 = local_1320;
          local_12d0 = fVar68;
        } while (uVar39 < uVar42);
      }
      uVar39 = (ulonglong)((longlong)local_1238 >> 1) >> 2;
      local_d58 = local_11f8;
      uStack_d50 = uStack_11f0;
      local_d48 = local_11e8;
      uStack_d40 = uStack_11e0;
      local_d38 = local_11d8;
      uStack_d30 = uStack_11d0;
      local_d28 = local_11c8;
      uStack_d20 = uStack_11c0;
      pfVar36 = local_10d0->ptr;
      if (uVar39 != 0) {
        pfVar38 = (float *)&local_d38;
        pfVar40 = local_1208 + 1;
        do {
          local_1360.x = pfVar38[-8];
          local_1360.y = pfVar38[-4];
          local_1360.z = *pfVar38;
          local_1360.w = pfVar38[4];
          tdm::quat<float>::euler<0>(&local_1360,&local_fc8);
          pfVar38 = pfVar38 + 1;
          pfVar36[*(ushort *)(pfVar40 + -1)] = local_fc8.values[0].value * fVar67;
          pfVar36[*(ushort *)((longlong)pfVar40 + -2)] = local_fc8.values[1].value * fVar67;
          pfVar36[*(ushort *)pfVar40] = local_fc8.values[2].value * fVar67;
          uVar39 = uVar39 - 1;
          pfVar40 = pfVar40 + 2;
        } while (uVar39 != 0);
      }
      local_1208 = pfVar34 + 8;
      local_1238 = (float *)((longlong)local_1238 + -0x20);
      local_1218 = local_1218 + local_f88;
      param_2 = local_10a8;
      fVar49 = __real_3f800000;
    } while (local_1208 < local_fe0);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c571860

void * __thiscall
rl4::
VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
::_scalar_deleting_destructor_
          (VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// _Copy @ 14c571890

_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
::_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create___V___ManagedInstance_V__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__U__VectorizedJointGroupQuaternionCalculationStrategy_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUdegrees_impl_tdm___tdm___0A__rl4___rl4__U__JointGroupQuaternionCalculationStrategy_M_4__impl_pma__QEAA_AV__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__XZ_XPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Move @ 14c5718b0

_Func_base<void,rl4::JointGroupQuaternionCalculationStrategy<float>_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
::_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &
       ___7___Func_impl_no_alloc_V<lambda_1>__1____create___V___ManagedInstance_V__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__U__VectorizedJointGroupQuaternionCalculationStrategy_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUdegrees_impl_tdm___tdm___0A__rl4___rl4__U__JointGroupQuaternionCalculationStrategy_M_4__impl_pma__QEAA_AV__unique_ptr_U__JointGroupQuaternionCalculationStrategy_M_rl4__V__function___A6AXPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___Z_std___std__XZ_XPEAU__JointGroupQuaternionCalculationStrategy_M_rl4___std__6B_
  ;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Do_call @ 14c5718d0

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
::_Do_call(void *this,JointGroupQuaternionCalculationStrategy<float> **param_1)

{
  JointGroupQuaternionCalculationStrategy<float> *pJVar1;
  
  pJVar1 = *param_1;
  (**(code **)*pJVar1)(pJVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00014c571907. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))
            (*(longlong **)((longlong)this + 8),pJVar1,8);
  return;
}

// _Target_type @ 14c571920

type_info * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_class_std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>*___ptr64)>_>___cdecl_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>*___ptr64)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>(void)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// _Get @ 14c571930

void * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Delete_this @ 14c571940

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::JointGroupQuaternionCalculationStrategy<float>_*>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x10);
    return;
  }
  return;
}

// `scalar_deleting_destructor' @ 14c571960

void * __thiscall
`anonymous_namespace'::
QuaternionJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  rltests::qs::QuaternionReader::~QuaternionReader((QuaternionReader *)((longlong)this + 0x70));
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// TestBody @ 14c5719d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
::TestBody(QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
           *this)

{
  undefined1 *puVar1;
  JointGroup<float> *pJVar2;
  ushort uVar3;
  JointGroup<float> *pJVar4;
  undefined1 auStack_1a8 [32];
  _Value_init_tag a_Stack_188 [16];
  QuaternionJointsBuilder<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  QStack_178;
  JointBehaviorFilter JStack_128;
  QuaternionJointsEvaluator<float> *pQStack_100;
  JointGroup<float> JStack_f8;
  undefined1 auStack_68 [56];
  longlong *plStack_30;
  QuaternionJointsEvaluator<float> *pQStack_28;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  QStack_178._padding_ =
       (longlong)
       &
       ___7__QuaternionJointsBuilder_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3__rl4__6B_
  ;
  puVar1 = &this->field_0x10;
  QStack_178.config._11_1_ = JStack_128.filters._Mypair._Myval1._3_1_;
  QStack_178.config.calculationType = SSE;
  QStack_178.config.loadJoints = true;
  QStack_178.config.loadBlendShapes = true;
  QStack_178.config.loadAnimatedMaps = true;
  QStack_178.config.loadMachineLearnedBehavior = true;
  QStack_178.config.loadRBFBehavior = true;
  QStack_178.config.loadTwistSwingBehavior = true;
  QStack_178.config.translationType = Vector;
  QStack_178.config.rotationType = Quaternions;
  QStack_178.config.rotationOrder = XYZ;
  QStack_178.config.scaleType = Vector;
  QStack_178.config.translationPruningThreshold = 0.0;
  QStack_178.config.rotationPruningThreshold = 0.0;
  QStack_178.config.scalePruningThreshold = 0.0;
  QStack_178.memRes = (MemoryResource *)puVar1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  QStack_178.jointGroups._Mypair._Myval2._Myfirst = (JointGroup<float> *)0x0;
  QStack_178.jointGroups._Mypair._Myval2._Mylast = (JointGroup<float> *)0x0;
  QStack_178.jointGroups._Mypair._Myval1 =
       (PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  if (puVar1 != (undefined1 *)0x0) {
    QStack_178.jointGroups._Mypair._Myval1 =
         (PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>)puVar1;
  }
  QStack_178.jointGroups._Mypair._Myval2._Myend = (JointGroup<float> *)0x0;
  QStack_178.rotationUnit = degrees;
  rl4::JointBehaviorFilter::JointBehaviorFilter
            (&JStack_128,(Reader *)&this->field_0x18,(MemoryResource *)puVar1);
  rl4::JointBehaviorFilter::include(&JStack_128,Quaternion);
  pJVar4 = rl4::JointGroup<float>::JointGroup<float>(&JStack_f8,QStack_178.memRes);
  uVar3 = rl4::JointBehaviorFilter::getJointGroupCount(&JStack_128);
  std::
  vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>
  ::_Resize<rl4::JointGroup<float>_>(&QStack_178.jointGroups,(ulonglong)uVar3,pJVar4);
  rl4::JointGroup<float>::~JointGroup<float>(&JStack_f8);
  pJVar2 = QStack_178.jointGroups._Mypair._Myval2._Mylast;
  for (pJVar4 = QStack_178.jointGroups._Mypair._Myval2._Myfirst; pJVar4 != pJVar2;
      pJVar4 = pJVar4 + 1) {
    uVar3 = rl4::JointBehaviorFilter::getLODCount(&JStack_128);
    std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>::
    _Resize<std::_Value_init_tag>(&pJVar4->lods,(ulonglong)uVar3,a_Stack_188);
  }
  rl4::
  QuaternionJointsBuilder<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  ::fillStorage(&QStack_178,&JStack_128);
  rl4::
  QuaternionJointsBuilder<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  ::build(&QStack_178,
          (unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_> *)
          auStack_68);
  rl4::QuaternionJointsEvaluator<float>::Accessor::assertRawDataEqual(pQStack_28,0);
  if (pQStack_28 != (QuaternionJointsEvaluator<float> *)0x0) {
    pQStack_100 = pQStack_28;
    if (plStack_30 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plStack_30 + 0x10))(plStack_30,&pQStack_100);
  }
  if (plStack_30 != (longlong *)0x0) {
    (**(code **)(*plStack_30 + 0x20))(plStack_30,plStack_30 != (longlong *)auStack_68);
    plStack_30 = (longlong *)0x0;
  }
  if (JStack_128.filters._Mypair._Myval2._Myfirst != (FilterType *)0x0) {
    (**(code **)(*(longlong *)
                  CONCAT44(JStack_128.filters._Mypair._Myval1._4_4_,
                           JStack_128.filters._Mypair._Myval1._0_4_) + 0x10))
              ((longlong *)
               CONCAT44(JStack_128.filters._Mypair._Myval1._4_4_,
                        JStack_128.filters._Mypair._Myval1._0_4_),
               JStack_128.filters._Mypair._Myval2._Myfirst,
               ((longlong)JStack_128.filters._Mypair._Myval2._Myend -
                (longlong)JStack_128.filters._Mypair._Myval2._Myfirst >> 1) * 2,8);
    JStack_128.filters._Mypair._Myval2._Myend = (FilterType *)0x0;
    JStack_128.filters._Mypair._Myval2._Myfirst = (FilterType *)0x0;
    JStack_128.filters._Mypair._Myval2._Mylast = (FilterType *)0x0;
  }
  pJVar2 = QStack_178.jointGroups._Mypair._Myval2._Mylast;
  pJVar4 = QStack_178.jointGroups._Mypair._Myval2._Myfirst;
  if (QStack_178.jointGroups._Mypair._Myval2._Myfirst != (JointGroup<float> *)0x0) {
    for (; pJVar4 != pJVar2; pJVar4 = pJVar4 + 1) {
      rl4::JointGroup<float>::~JointGroup<float>(pJVar4);
    }
    (**(code **)(*(undefined **)QStack_178.jointGroups._Mypair._Myval1 + 0x10))
              (QStack_178.jointGroups._Mypair._Myval1,
               QStack_178.jointGroups._Mypair._Myval2._Myfirst,
               (((longlong)QStack_178.jointGroups._Mypair._Myval2._Myend -
                (longlong)QStack_178.jointGroups._Mypair._Myval2._Myfirst) / 0x88) * 0x88,8);
    QStack_178.jointGroups._Mypair._Myval2._Myend = (JointGroup<float> *)0x0;
    QStack_178.jointGroups._Mypair._Myval2._Myfirst = (JointGroup<float> *)0x0;
    QStack_178.jointGroups._Mypair._Myval2._Mylast = (JointGroup<float> *)0x0;
  }
  rl4::JointsBuilder::~JointsBuilder((JointsBuilder *)&QStack_178);
  return;
}

// `scalar_deleting_destructor' @ 14c5719e0

void * __thiscall
QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
::_scalar_deleting_destructor_
          (QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
           *this,uint param_1)

{
  rltests::qs::QuaternionReader::~QuaternionReader((QuaternionReader *)&this->field_0x70);
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)(this + 1));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)&this->field_0x70);
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x10);
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// CreateTest @ 14c571a50

Test * __thiscall
testing::internal::
TestFactoryImpl<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
::CreateTest(TestFactoryImpl<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x90);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &QuaternionJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    rltests::qs::QuaternionReader::QuaternionReader
              ((QuaternionReader *)&this_00[1].gtest_flag_saver_);
    this_00->_padding_ =
         (longlong)
         &
         ___7__QuaternionJointStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_UPassthroughAdapter_rl4___std____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c571ac0

void * __thiscall
testing::internal::
TestFactoryImpl<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c571b00

void * __thiscall
`anonymous_namespace'::
QuaternionJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  rltests::qs::QuaternionReader::~QuaternionReader((QuaternionReader *)((longlong)this + 0x70));
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// TestBody @ 14c571b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::TestBody(QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
           *this)

{
  undefined1 *puVar1;
  JointGroup<float> *pJVar2;
  ushort uVar3;
  JointGroup<float> *pJVar4;
  undefined1 auStack_1a8 [32];
  _Value_init_tag a_Stack_188 [16];
  QuaternionJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128> QStack_178
  ;
  JointBehaviorFilter JStack_128;
  QuaternionJointsEvaluator<float> *pQStack_100;
  JointGroup<float> JStack_f8;
  undefined1 auStack_68 [56];
  longlong *plStack_30;
  QuaternionJointsEvaluator<float> *pQStack_28;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  QStack_178._padding_ =
       (longlong)
       &
       ___7__QuaternionJointsBuilder_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3__rl4__6B_
  ;
  puVar1 = &this->field_0x10;
  QStack_178.config._11_1_ = JStack_128.filters._Mypair._Myval1._3_1_;
  QStack_178.config.calculationType = SSE;
  QStack_178.config.loadJoints = true;
  QStack_178.config.loadBlendShapes = true;
  QStack_178.config.loadAnimatedMaps = true;
  QStack_178.config.loadMachineLearnedBehavior = true;
  QStack_178.config.loadRBFBehavior = true;
  QStack_178.config.loadTwistSwingBehavior = true;
  QStack_178.config.translationType = Vector;
  QStack_178.config.rotationType = EulerAngles;
  QStack_178.config.rotationOrder = XYZ;
  QStack_178.config.scaleType = Vector;
  QStack_178.config.translationPruningThreshold = 0.0;
  QStack_178.config.rotationPruningThreshold = 0.0;
  QStack_178.config.scalePruningThreshold = 0.0;
  QStack_178.memRes = (MemoryResource *)puVar1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  QStack_178.jointGroups._Mypair._Myval2._Myfirst = (JointGroup<float> *)0x0;
  QStack_178.jointGroups._Mypair._Myval2._Mylast = (JointGroup<float> *)0x0;
  QStack_178.jointGroups._Mypair._Myval1 =
       (PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  if (puVar1 != (undefined1 *)0x0) {
    QStack_178.jointGroups._Mypair._Myval1 =
         (PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>)puVar1;
  }
  QStack_178.jointGroups._Mypair._Myval2._Myend = (JointGroup<float> *)0x0;
  QStack_178.rotationUnit = degrees;
  rl4::JointBehaviorFilter::JointBehaviorFilter
            (&JStack_128,(Reader *)&this->field_0x18,(MemoryResource *)puVar1);
  rl4::JointBehaviorFilter::include(&JStack_128,Quaternion);
  pJVar4 = rl4::JointGroup<float>::JointGroup<float>(&JStack_f8,QStack_178.memRes);
  uVar3 = rl4::JointBehaviorFilter::getJointGroupCount(&JStack_128);
  std::
  vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>
  ::_Resize<rl4::JointGroup<float>_>(&QStack_178.jointGroups,(ulonglong)uVar3,pJVar4);
  rl4::JointGroup<float>::~JointGroup<float>(&JStack_f8);
  pJVar2 = QStack_178.jointGroups._Mypair._Myval2._Mylast;
  for (pJVar4 = QStack_178.jointGroups._Mypair._Myval2._Myfirst; pJVar4 != pJVar2;
      pJVar4 = pJVar4 + 1) {
    uVar3 = rl4::JointBehaviorFilter::getLODCount(&JStack_128);
    std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>::
    _Resize<std::_Value_init_tag>(&pJVar4->lods,(ulonglong)uVar3,a_Stack_188);
  }
  rl4::QuaternionJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::
  fillStorage(&QStack_178,&JStack_128);
  rl4::QuaternionJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::
  build(&QStack_178,
        (unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_> *)
        auStack_68);
  rl4::QuaternionJointsEvaluator<float>::Accessor::assertRawDataEqual(pQStack_28,1);
  if (pQStack_28 != (QuaternionJointsEvaluator<float> *)0x0) {
    pQStack_100 = pQStack_28;
    if (plStack_30 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plStack_30 + 0x10))(plStack_30,&pQStack_100);
  }
  if (plStack_30 != (longlong *)0x0) {
    (**(code **)(*plStack_30 + 0x20))(plStack_30,plStack_30 != (longlong *)auStack_68);
    plStack_30 = (longlong *)0x0;
  }
  if (JStack_128.filters._Mypair._Myval2._Myfirst != (FilterType *)0x0) {
    (**(code **)(*(longlong *)
                  CONCAT44(JStack_128.filters._Mypair._Myval1._4_4_,
                           JStack_128.filters._Mypair._Myval1._0_4_) + 0x10))
              ((longlong *)
               CONCAT44(JStack_128.filters._Mypair._Myval1._4_4_,
                        JStack_128.filters._Mypair._Myval1._0_4_),
               JStack_128.filters._Mypair._Myval2._Myfirst,
               ((longlong)JStack_128.filters._Mypair._Myval2._Myend -
                (longlong)JStack_128.filters._Mypair._Myval2._Myfirst >> 1) * 2,8);
    JStack_128.filters._Mypair._Myval2._Myend = (FilterType *)0x0;
    JStack_128.filters._Mypair._Myval2._Myfirst = (FilterType *)0x0;
    JStack_128.filters._Mypair._Myval2._Mylast = (FilterType *)0x0;
  }
  pJVar2 = QStack_178.jointGroups._Mypair._Myval2._Mylast;
  pJVar4 = QStack_178.jointGroups._Mypair._Myval2._Myfirst;
  if (QStack_178.jointGroups._Mypair._Myval2._Myfirst != (JointGroup<float> *)0x0) {
    for (; pJVar4 != pJVar2; pJVar4 = pJVar4 + 1) {
      rl4::JointGroup<float>::~JointGroup<float>(pJVar4);
    }
    (**(code **)(*(undefined **)QStack_178.jointGroups._Mypair._Myval1 + 0x10))
              (QStack_178.jointGroups._Mypair._Myval1,
               QStack_178.jointGroups._Mypair._Myval2._Myfirst,
               (((longlong)QStack_178.jointGroups._Mypair._Myval2._Myend -
                (longlong)QStack_178.jointGroups._Mypair._Myval2._Myfirst) / 0x88) * 0x88,8);
    QStack_178.jointGroups._Mypair._Myval2._Myend = (JointGroup<float> *)0x0;
    QStack_178.jointGroups._Mypair._Myval2._Myfirst = (JointGroup<float> *)0x0;
    QStack_178.jointGroups._Mypair._Myval2._Mylast = (JointGroup<float> *)0x0;
  }
  rl4::JointsBuilder::~JointsBuilder((JointsBuilder *)&QStack_178);
  return;
}

// `scalar_deleting_destructor' @ 14c571b80

void * __thiscall
QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::_scalar_deleting_destructor_
          (QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
           *this,uint param_1)

{
  rltests::qs::QuaternionReader::~QuaternionReader((QuaternionReader *)&this->field_0x70);
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)(this + 1));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)&this->field_0x70);
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x10);
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// CreateTest @ 14c571bf0

Test * __thiscall
testing::internal::
TestFactoryImpl<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
::CreateTest(TestFactoryImpl<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x90);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &QuaternionJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    rltests::qs::QuaternionReader::QuaternionReader
              ((QuaternionReader *)&this_00[1].gtest_flag_saver_);
    this_00->_padding_ =
         (longlong)
         &
         ___7__QuaternionJointStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___std____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c571c60

void * __thiscall
testing::internal::
TestFactoryImpl<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// calculate @ 14c571ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
rl4::
VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
::calculate(VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
            *this,JointGroup<float> *param_1,ArrayView<float_const_> *param_2,
           ArrayView<float> *param_3,ushort param_4)

{
  ushort uVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float *pfVar9;
  float *pfVar10;
  ulonglong uVar11;
  uint uVar12;
  ushort *puVar13;
  float *pfVar14;
  LODRegion *pLVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ushort *puVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 in_XMM4 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar34 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  vec<3,tdm::ang<float,tdm::impl::radians>_> local_418;
  ushort *local_408;
  float *local_400;
  quat<float> local_3f8;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined1 local_3d8 [8];
  float fStack_3d0;
  float fStack_3cc;
  float *local_3c8;
  undefined1 local_3b8 [8];
  undefined8 uStack_3b0;
  longlong local_3a8;
  LODRegion *local_3a0;
  ushort *local_398;
  ArrayView<float> *local_390;
  ushort *local_388;
  ArrayView<float_const_> *local_380;
  undefined1 local_378 [8];
  float fStack_370;
  float fStack_36c;
  undefined1 local_368 [8];
  float fStack_360;
  float fStack_35c;
  undefined1 local_358 [8];
  float fStack_350;
  float fStack_34c;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined1 local_328 [8];
  undefined8 uStack_320;
  undefined1 local_318 [8];
  undefined8 uStack_310;
  undefined1 local_308 [8];
  float fStack_300;
  float fStack_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined1 local_2d8 [8];
  float fStack_2d0;
  float fStack_2cc;
  undefined1 local_2c8 [8];
  float fStack_2c0;
  float fStack_2bc;
  undefined1 local_2b8 [8];
  float fStack_2b0;
  float fStack_2ac;
  undefined1 local_2a8 [8];
  float fStack_2a0;
  float fStack_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278 [8];
  undefined8 uStack_270;
  undefined1 local_268 [8];
  float fStack_260;
  float fStack_25c;
  undefined1 local_258 [8];
  float fStack_250;
  float fStack_24c;
  undefined1 local_248 [8];
  float fStack_240;
  float fStack_23c;
  undefined1 local_238 [8];
  float fStack_230;
  float fStack_22c;
  undefined1 local_228 [8];
  float fStack_220;
  float fStack_21c;
  undefined1 local_218 [8];
  float fStack_210;
  float fStack_20c;
  undefined1 local_208 [8];
  float fStack_200;
  float fStack_1fc;
  undefined1 local_1f8 [8];
  float fStack_1f0;
  float fStack_1ec;
  undefined1 local_1e8 [8];
  float fStack_1e0;
  float fStack_1dc;
  undefined1 local_1d8 [8];
  undefined8 uStack_1d0;
  undefined1 local_1c8 [8];
  float fStack_1c0;
  float fStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168 [4];
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148 [4];
  undefined8 local_138;
  undefined8 uStack_130;
  float local_128 [4];
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108 [4];
  float local_f8 [4];
  float local_e8 [4];
  float local_d8 [44];
  
  local_3a0 = (param_1->lods)._Mypair._Myval2._Myfirst;
  puVar18 = (param_1->outputIndices)._Mypair._Myval2._Myfirst;
  uVar17 = (ulonglong)param_1->colCount;
  local_400 = (param_1->values)._Mypair._Myval2._Myfirst;
  uVar11 = (ulonglong)param_4;
  local_408 = (param_1->inputIndices)._Mypair._Myval2._Myfirst;
  local_3a8 = uVar11 * 3;
  uVar16 = (ulonglong)local_3a0[uVar11].inputLODs.size;
  local_198 = uVar17 << 4;
  local_388 = puVar18 + local_3a0[uVar11].outputLODs.size;
  local_398 = puVar18 + local_3a0[uVar11].outputLODs.sizePaddedToLastFullBlock;
  local_3c8 = (float *)(puVar18 + local_3a0[uVar11].outputLODs.sizePaddedToSecondLastFullBlock);
  fVar47 = __real_42652ee1;
  local_390 = param_3;
  local_380 = param_2;
  if (puVar18 < local_3c8) {
    pfVar14 = param_2->ptr;
    pfVar9 = local_400 + 0x14;
    pfVar2 = param_3->ptr;
    auVar28._0_12_ = ZEXT812(0);
    auVar28._12_4_ = 0;
    fVar49 = ___xmm_3f8000003f8000003f8000003f800000;
    fVar51 = _UNK_15076b1f4;
    fVar53 = _UNK_15076b1f8;
    fVar22 = _UNK_15076b1fc;
    do {
      uVar11 = 0;
      local_178 = 0.0;
      fStack_174 = 0.0;
      fStack_170 = 0.0;
      fStack_16c = 0.0;
      local_168[0] = 0.0;
      local_168[1] = 0.0;
      local_168[2] = 0.0;
      local_168[3] = 0.0;
      fStack_150 = 0.0;
      fStack_14c = 0.0;
      local_148[2] = 0.0;
      local_148[3] = 0.0;
      local_158 = local_178;
      fStack_154 = fStack_174;
      local_148[0] = local_178;
      local_148[1] = fStack_174;
      local_128[0] = fVar49;
      local_128[1] = fVar51;
      local_128[2] = fVar53;
      local_128[3] = fVar22;
      local_118 = fVar49;
      fStack_114 = fVar51;
      fStack_110 = fVar53;
      fStack_10c = fVar22;
      local_188 = 0;
      uStack_180 = 0;
      local_138 = (undefined1  [8])0;
      uStack_130 = 0;
      if (uVar16 != 0) {
        local_348 = CONCAT44(_UNK_15076b1f4,___xmm_3f8000003f8000003f8000003f800000);
        uStack_340 = CONCAT44(_UNK_15076b1fc,_UNK_15076b1f8);
        local_338 = CONCAT44(_UNK_15076b1f4,___xmm_3f8000003f8000003f8000003f800000);
        uStack_330 = CONCAT44(_UNK_15076b1fc,_UNK_15076b1f8);
        local_2f8 = CONCAT44(_UNK_15076b1f4,___xmm_3f8000003f8000003f8000003f800000);
        uStack_2f0 = CONCAT44(_UNK_15076b1fc,_UNK_15076b1f8);
        local_2e8 = CONCAT44(_UNK_15076b1f4,___xmm_3f8000003f8000003f8000003f800000);
        uStack_2e0 = CONCAT44(_UNK_15076b1fc,_UNK_15076b1f8);
        local_298 = CONCAT44(_UNK_15076b1f4,___xmm_3f8000003f8000003f8000003f800000);
        uStack_290 = CONCAT44(_UNK_15076b1fc,_UNK_15076b1f8);
        local_288 = CONCAT44(_UNK_15076b1f4,___xmm_3f8000003f8000003f8000003f800000);
        uStack_280 = CONCAT44(_UNK_15076b1fc,_UNK_15076b1f8);
        local_1b8 = CONCAT44(_UNK_15076b1f4,___xmm_3f8000003f8000003f8000003f800000);
        uStack_1b0 = CONCAT44(_UNK_15076b1fc,_UNK_15076b1f8);
        local_1a8 = CONCAT44(_UNK_15076b1f4,___xmm_3f8000003f8000003f8000003f800000);
        uStack_1a0 = CONCAT44(_UNK_15076b1fc,_UNK_15076b1f8);
        pfVar10 = pfVar9;
        _local_3d8 = auVar28;
        _local_3b8 = auVar28;
        _local_378 = auVar28;
        _local_368 = auVar28;
        _local_358 = auVar28;
        _local_308 = auVar28;
        _local_2d8 = auVar28;
        _local_2c8 = auVar28;
        _local_2b8 = auVar28;
        _local_2a8 = auVar28;
        _local_268 = auVar28;
        _local_258 = auVar28;
        _local_248 = auVar28;
        _local_238 = auVar28;
        _local_228 = auVar28;
        _local_218 = auVar28;
        _local_208 = auVar28;
        _local_1f8 = auVar28;
        _local_1e8 = auVar28;
        _local_1d8 = auVar28;
        _local_1c8 = auVar28;
        do {
          fVar47 = pfVar14[local_408[uVar11]];
          fVar58 = fVar47 * pfVar10[-0x14];
          fVar60 = fVar47 * pfVar10[-0x13];
          fVar62 = fVar47 * pfVar10[-0x12];
          fVar64 = fVar47 * pfVar10[-0x11];
          fVar46 = fVar47 * pfVar10[-0xc];
          fVar48 = fVar47 * pfVar10[-0xb];
          fVar50 = fVar47 * pfVar10[-10];
          fVar52 = fVar47 * pfVar10[-9];
          fVar38 = fVar47 * pfVar10[-4];
          fVar39 = fVar47 * pfVar10[-3];
          fVar40 = fVar47 * pfVar10[-2];
          fVar41 = fVar47 * pfVar10[-1];
          auVar66._0_4_ = fVar47 * pfVar10[-0x10];
          auVar66._4_4_ = fVar47 * pfVar10[-0xf];
          auVar66._8_4_ = fVar47 * pfVar10[-0xe];
          auVar66._12_4_ = fVar47 * pfVar10[-0xd];
          fVar54 = fVar47 * pfVar10[-8];
          fVar55 = fVar47 * pfVar10[-7];
          fVar56 = fVar47 * pfVar10[-6];
          fVar57 = fVar47 * pfVar10[-5];
          fVar42 = fVar47 * *pfVar10;
          fVar43 = fVar47 * pfVar10[1];
          fVar44 = fVar47 * pfVar10[2];
          fVar45 = fVar47 * pfVar10[3];
          fVar29 = (float)(~-(uint)(0.0 <= pfVar10[8]) & ___xmm_bf800000bf800000bf800000bf800000 |
                          -(uint)(0.0 <= pfVar10[8]) & (uint)___xmm_3f8000003f8000003f8000003f800000
                          ) * (___xmm_3f8000003f8000003f8000003f800000 - fVar47) +
                   fVar47 * pfVar10[8];
          fVar30 = (float)(~-(uint)(0.0 <= pfVar10[9]) & _UNK_15076c664 |
                          -(uint)(0.0 <= pfVar10[9]) & (uint)_UNK_15076b1f4) *
                   (_UNK_15076b1f4 - fVar47) + fVar47 * pfVar10[9];
          fVar31 = (float)(~-(uint)(0.0 <= pfVar10[10]) & _UNK_15076c668 |
                          -(uint)(0.0 <= pfVar10[10]) & (uint)_UNK_15076b1f8) *
                   (_UNK_15076b1f8 - fVar47) + fVar47 * pfVar10[10];
          fVar32 = (float)(~-(uint)(0.0 <= pfVar10[0xb]) & _UNK_15076c66c |
                          -(uint)(0.0 <= pfVar10[0xb]) & (uint)_UNK_15076b1fc) *
                   (_UNK_15076b1fc - fVar47) + fVar47 * pfVar10[0xb];
          fVar33 = (float)(~-(uint)(0.0 <= pfVar10[4]) & ___xmm_bf800000bf800000bf800000bf800000 |
                          -(uint)(0.0 <= pfVar10[4]) & (uint)___xmm_3f8000003f8000003f8000003f800000
                          ) * (___xmm_3f8000003f8000003f8000003f800000 - fVar47) +
                   fVar47 * pfVar10[4];
          fVar35 = (float)(~-(uint)(0.0 <= pfVar10[5]) & _UNK_15076c664 |
                          -(uint)(0.0 <= pfVar10[5]) & (uint)_UNK_15076b1f4) *
                   (_UNK_15076b1f4 - fVar47) + fVar47 * pfVar10[5];
          fVar36 = (float)(~-(uint)(0.0 <= pfVar10[6]) & _UNK_15076c668 |
                          -(uint)(0.0 <= pfVar10[6]) & (uint)_UNK_15076b1f8) *
                   (_UNK_15076b1f8 - fVar47) + fVar47 * pfVar10[6];
          fVar37 = (float)(~-(uint)(0.0 <= pfVar10[7]) & _UNK_15076c66c |
                          -(uint)(0.0 <= pfVar10[7]) & (uint)_UNK_15076b1fc) *
                   (_UNK_15076b1fc - fVar47) + fVar47 * pfVar10[7];
          auVar20._0_4_ = fVar42 * fVar42;
          auVar20._4_4_ = fVar43 * fVar43;
          auVar20._8_4_ = fVar44 * fVar44;
          auVar20._12_4_ = fVar45 * fVar45;
          fVar22 = fVar46 * fVar46 + fVar58 * fVar58 + fVar38 * fVar38 + fVar33 * fVar33;
          fVar23 = fVar48 * fVar48 + fVar60 * fVar60 + fVar39 * fVar39 + fVar35 * fVar35;
          fVar24 = fVar50 * fVar50 + fVar62 * fVar62 + fVar40 * fVar40 + fVar36 * fVar36;
          fVar25 = fVar52 * fVar52 + fVar64 * fVar64 + fVar41 * fVar41 + fVar37 * fVar37;
          auVar26._4_4_ = fVar23;
          auVar26._0_4_ = fVar22;
          auVar26._8_4_ = fVar24;
          auVar26._12_4_ = fVar25;
          auVar26 = rsqrtps(in_XMM4,auVar26);
          fVar58 = auVar26._0_4_ * fVar58;
          fVar60 = auVar26._4_4_ * fVar60;
          fVar62 = auVar26._8_4_ * fVar62;
          fVar64 = auVar26._12_4_ * fVar64;
          auVar7._4_4_ = fVar55 * fVar55 + auVar66._4_4_ * auVar66._4_4_ + auVar20._4_4_ +
                         fVar30 * fVar30;
          auVar7._0_4_ = fVar54 * fVar54 + auVar66._0_4_ * auVar66._0_4_ + auVar20._0_4_ +
                         fVar29 * fVar29;
          auVar7._8_4_ = fVar56 * fVar56 + auVar66._8_4_ * auVar66._8_4_ + auVar20._8_4_ +
                         fVar31 * fVar31;
          auVar7._12_4_ =
               fVar57 * fVar57 + auVar66._12_4_ * auVar66._12_4_ + auVar20._12_4_ + fVar32 * fVar32;
          auVar26 = rsqrtps(auVar20,auVar7);
          fVar47 = auVar26._0_4_;
          fVar49 = auVar26._4_4_;
          fVar51 = auVar26._8_4_;
          fVar53 = auVar26._12_4_;
          fVar59 = fVar47 * auVar66._0_4_;
          fVar61 = fVar49 * auVar66._4_4_;
          fVar63 = fVar51 * auVar66._8_4_;
          fVar65 = fVar53 * auVar66._12_4_;
          auVar3._4_4_ = fVar23;
          auVar3._0_4_ = fVar22;
          auVar3._8_4_ = fVar24;
          auVar3._12_4_ = fVar25;
          auVar26 = rsqrtps(auVar66,auVar3);
          fVar42 = fVar47 * fVar42;
          fVar43 = fVar49 * fVar43;
          fVar44 = fVar51 * fVar44;
          fVar45 = fVar53 * fVar45;
          fVar22 = auVar26._0_4_;
          fVar23 = auVar26._4_4_;
          fVar24 = auVar26._8_4_;
          fVar25 = auVar26._12_4_;
          fVar38 = fVar22 * fVar38;
          fVar39 = fVar23 * fVar39;
          fVar40 = fVar24 * fVar40;
          fVar41 = fVar25 * fVar41;
          fVar29 = fVar47 * fVar29;
          fVar30 = fVar49 * fVar30;
          fVar31 = fVar51 * fVar31;
          fVar32 = fVar53 * fVar32;
          fVar46 = fVar22 * fVar46;
          fVar48 = fVar23 * fVar48;
          fVar50 = fVar24 * fVar50;
          fVar52 = fVar25 * fVar52;
          fVar22 = fVar22 * fVar33;
          fVar23 = fVar23 * fVar35;
          fVar24 = fVar24 * fVar36;
          fVar25 = fVar25 * fVar37;
          fVar47 = fVar47 * fVar54;
          fVar49 = fVar49 * fVar55;
          fVar51 = fVar51 * fVar56;
          fVar53 = fVar53 * fVar57;
          local_328._0_4_ = local_1d8._0_4_;
          local_328._4_4_ = local_1d8._4_4_;
          uStack_320._0_4_ = local_1d8._8_4_;
          uStack_320._4_4_ = local_1d8._12_4_;
          local_3e8 = CONCAT44((fVar23 * (float)local_328._4_4_ + fVar60 * local_348._4_4_ +
                               fVar48 * (float)local_358._4_4_) - fVar39 * (float)local_378._4_4_,
                               (fVar22 * (float)local_328._0_4_ + fVar58 * (float)local_348 +
                               fVar46 * (float)local_358._0_4_) - fVar38 * (float)local_378._0_4_);
          uStack_3e0._0_4_ =
               (fVar24 * (float)uStack_320 + fVar62 * (float)uStack_340 + fVar50 * fStack_350) -
               fVar40 * fStack_370;
          uStack_3e0._4_4_ =
               (fVar25 * uStack_320._4_4_ + fVar64 * uStack_340._4_4_ + fVar52 * fStack_34c) -
               fVar41 * fStack_36c;
          local_178 = (fVar29 * (float)local_3d8._0_4_ + fVar59 * (float)local_338 +
                      fVar47 * (float)local_3b8._0_4_) - fVar42 * (float)local_368._0_4_;
          fStack_174 = (fVar30 * (float)local_3d8._4_4_ + fVar61 * local_338._4_4_ +
                       fVar49 * (float)local_3b8._4_4_) - fVar43 * (float)local_368._4_4_;
          fStack_170 = (fVar31 * fStack_3d0 + fVar63 * (float)uStack_330 +
                       fVar51 * (float)uStack_3b0) - fVar44 * fStack_360;
          fStack_16c = (fVar32 * fStack_3cc + fVar65 * uStack_330._4_4_ + fVar53 * uStack_3b0._4_4_)
                       - fVar45 * fStack_35c;
          local_3d8._4_4_ = fStack_174;
          local_3d8._0_4_ = local_178;
          local_168[0] = (fVar22 * (float)local_2b8._0_4_ - fVar58 * (float)local_2d8._0_4_) +
                         fVar46 * (float)local_2f8 + fVar38 * (float)local_328._0_4_;
          local_168[1] = (fVar23 * (float)local_2b8._4_4_ - fVar60 * (float)local_2d8._4_4_) +
                         fVar48 * local_2f8._4_4_ + fVar39 * (float)local_328._4_4_;
          local_168[2] = (fVar24 * fStack_2b0 - fVar62 * fStack_2d0) + fVar50 * (float)uStack_2f0 +
                         fVar40 * (float)uStack_320;
          local_168[3] = (fVar25 * fStack_2ac - fVar64 * fStack_2cc) + fVar52 * uStack_2f0._4_4_ +
                         fVar41 * uStack_320._4_4_;
          local_378._4_4_ = local_168[1];
          local_378._0_4_ = local_168[0];
          fStack_370 = local_168[2];
          fStack_36c = local_168[3];
          local_158 = (fVar29 * (float)local_2a8._0_4_ - fVar59 * (float)local_2c8._0_4_) +
                      fVar47 * (float)local_2e8 + fVar42 * (float)local_308._0_4_;
          fStack_154 = (fVar30 * (float)local_2a8._4_4_ - fVar61 * (float)local_2c8._4_4_) +
                       fVar49 * local_2e8._4_4_ + fVar43 * (float)local_308._4_4_;
          fStack_150 = (fVar31 * fStack_2a0 - fVar63 * fStack_2c0) + fVar51 * (float)uStack_2e0 +
                       fVar44 * fStack_300;
          fStack_14c = (fVar32 * fStack_29c - fVar65 * fStack_2bc) + fVar53 * uStack_2e0._4_4_ +
                       fVar45 * fStack_2fc;
          in_XMM4._0_4_ = fVar58 * (float)local_328._0_4_;
          in_XMM4._4_4_ = fVar60 * (float)local_328._4_4_;
          in_XMM4._8_4_ = fVar62 * (float)uStack_320;
          in_XMM4._12_4_ = fVar64 * uStack_320._4_4_;
          local_368._4_4_ = fStack_154;
          local_368._0_4_ = local_158;
          fStack_360 = fStack_150;
          fStack_35c = fStack_14c;
          local_148[0] = ((fVar22 * (float)local_238._0_4_ + fVar58 * (float)local_258._0_4_) -
                         fVar46 * (float)local_328._0_4_) + fVar38 * (float)local_298;
          local_148[1] = ((fVar23 * (float)local_238._4_4_ + fVar60 * (float)local_258._4_4_) -
                         fVar48 * (float)local_328._4_4_) + fVar39 * local_298._4_4_;
          local_148[2] = ((fVar24 * fStack_230 + fVar62 * fStack_250) - fVar50 * (float)uStack_320)
                         + fVar40 * (float)uStack_290;
          local_148[3] = ((fVar25 * fStack_22c + fVar64 * fStack_24c) - fVar52 * uStack_320._4_4_) +
                         fVar41 * uStack_290._4_4_;
          local_128[0] = ((fVar22 * (float)local_1b8 - in_XMM4._0_4_) -
                         fVar46 * (float)local_1f8._0_4_) - fVar38 * (float)local_218._0_4_;
          local_128[1] = ((fVar23 * local_1b8._4_4_ - in_XMM4._4_4_) -
                         fVar48 * (float)local_1f8._4_4_) - fVar39 * (float)local_218._4_4_;
          local_128[2] = ((fVar24 * (float)uStack_1b0 - in_XMM4._8_4_) - fVar50 * fStack_1f0) -
                         fVar40 * fStack_210;
          local_128[3] = ((fVar25 * uStack_1b0._4_4_ - in_XMM4._12_4_) - fVar52 * fStack_1ec) -
                         fVar41 * fStack_20c;
          local_358._4_4_ = local_148[1];
          local_358._0_4_ = local_148[0];
          fStack_350 = local_148[2];
          fStack_34c = local_148[3];
          local_3b8._0_4_ =
               ((fVar29 * (float)local_228._0_4_ + fVar59 * (float)local_248._0_4_) -
               fVar47 * (float)local_268._0_4_) + fVar42 * (float)local_288;
          local_3b8._4_4_ =
               ((fVar30 * (float)local_228._4_4_ + fVar61 * (float)local_248._4_4_) -
               fVar49 * (float)local_268._4_4_) + fVar43 * local_288._4_4_;
          uStack_3b0._0_4_ =
               ((fVar31 * fStack_220 + fVar63 * fStack_240) - fVar51 * fStack_260) +
               fVar44 * (float)uStack_280;
          uStack_3b0._4_4_ =
               ((fVar32 * fStack_21c + fVar65 * fStack_23c) - fVar53 * fStack_25c) +
               fVar45 * uStack_280._4_4_;
          local_118 = ((fVar29 * (float)local_1a8 - fVar59 * (float)local_1c8._0_4_) -
                      fVar47 * (float)local_1e8._0_4_) - fVar42 * (float)local_208._0_4_;
          fStack_114 = ((fVar30 * local_1a8._4_4_ - fVar61 * (float)local_1c8._4_4_) -
                       fVar49 * (float)local_1e8._4_4_) - fVar43 * (float)local_208._4_4_;
          fStack_110 = ((fVar31 * (float)uStack_1a0 - fVar63 * fStack_1c0) - fVar51 * fStack_1e0) -
                       fVar44 * fStack_200;
          fStack_10c = ((fVar32 * uStack_1a0._4_4_ - fVar65 * fStack_1bc) - fVar53 * fStack_1dc) -
                       fVar45 * fStack_1fc;
          uVar11 = uVar11 + 1;
          pfVar10 = pfVar10 + 0x20;
          local_348 = CONCAT44(local_128[1],local_128[0]);
          uStack_340 = CONCAT44(local_128[3],local_128[2]);
          local_338 = CONCAT44(fStack_114,local_118);
          uStack_330 = CONCAT44(fStack_10c,fStack_110);
          uStack_320 = uStack_3e0;
          local_328 = (undefined1  [8])local_3e8;
          fStack_3d0 = fStack_170;
          fStack_3cc = fStack_16c;
          uStack_310 = uStack_3e0;
          local_318 = (undefined1  [8])local_3e8;
          fStack_300 = fStack_170;
          local_308 = local_3d8;
          fStack_2fc = fStack_16c;
          local_2f8 = CONCAT44(local_128[1],local_128[0]);
          uStack_2f0 = CONCAT44(local_128[3],local_128[2]);
          local_2e8 = CONCAT44(fStack_114,local_118);
          uStack_2e0 = CONCAT44(fStack_10c,fStack_110);
          local_2d8._4_4_ = local_148[1];
          local_2d8._0_4_ = local_148[0];
          fStack_2d0 = local_148[2];
          fStack_2cc = local_148[3];
          local_2c8._4_4_ = local_3b8._4_4_;
          local_2c8._0_4_ = local_3b8._0_4_;
          fStack_2c0 = (float)uStack_3b0;
          fStack_2bc = uStack_3b0._4_4_;
          local_2b8._4_4_ = local_168[1];
          local_2b8._0_4_ = local_168[0];
          fStack_2b0 = local_168[2];
          fStack_2ac = local_168[3];
          local_2a8._4_4_ = fStack_154;
          local_2a8._0_4_ = local_158;
          fStack_2a0 = fStack_150;
          fStack_29c = fStack_14c;
          local_298 = CONCAT44(local_128[1],local_128[0]);
          uStack_290 = CONCAT44(local_128[3],local_128[2]);
          local_288 = CONCAT44(fStack_114,local_118);
          uStack_280 = CONCAT44(fStack_10c,fStack_110);
          uStack_270 = uStack_3e0;
          local_278 = (undefined1  [8])local_3e8;
          fStack_260 = fStack_170;
          local_268 = local_3d8;
          fStack_25c = fStack_16c;
          local_258._4_4_ = local_168[1];
          local_258._0_4_ = local_168[0];
          fStack_250 = local_168[2];
          fStack_24c = local_168[3];
          local_248._4_4_ = fStack_154;
          local_248._0_4_ = local_158;
          fStack_240 = fStack_150;
          fStack_23c = fStack_14c;
          local_238._4_4_ = local_148[1];
          local_238._0_4_ = local_148[0];
          fStack_230 = local_148[2];
          fStack_22c = local_148[3];
          local_228._4_4_ = local_3b8._4_4_;
          local_228._0_4_ = local_3b8._0_4_;
          fStack_220 = (float)uStack_3b0;
          fStack_21c = uStack_3b0._4_4_;
          local_218._4_4_ = local_148[1];
          local_218._0_4_ = local_148[0];
          fStack_210 = local_148[2];
          fStack_20c = local_148[3];
          local_208._4_4_ = local_3b8._4_4_;
          local_208._0_4_ = local_3b8._0_4_;
          fStack_200 = (float)uStack_3b0;
          fStack_1fc = uStack_3b0._4_4_;
          local_1f8._4_4_ = local_168[1];
          local_1f8._0_4_ = local_168[0];
          fStack_1f0 = local_168[2];
          fStack_1ec = local_168[3];
          local_1e8._4_4_ = fStack_154;
          local_1e8._0_4_ = local_158;
          fStack_1e0 = fStack_150;
          fStack_1dc = fStack_14c;
          uStack_1d0 = uStack_3e0;
          local_1d8 = (undefined1  [8])local_3e8;
          fStack_1c0 = fStack_170;
          local_1c8 = local_3d8;
          fStack_1bc = fStack_16c;
          local_1b8 = CONCAT44(local_128[1],local_128[0]);
          uStack_1b0 = CONCAT44(local_128[3],local_128[2]);
          local_1a8 = CONCAT44(fStack_114,local_118);
          uStack_1a0 = CONCAT44(fStack_10c,fStack_110);
        } while (uVar11 < uVar16);
        fVar49 = ___xmm_3f8000003f8000003f8000003f800000;
        fVar51 = _UNK_15076b1f4;
        fVar53 = _UNK_15076b1f8;
        fVar22 = _UNK_15076b1fc;
        fVar47 = __real_42652ee1;
        local_188 = local_3e8;
        uStack_180 = uStack_3e0;
        local_138 = local_3b8;
        uStack_130 = uStack_3b0;
      }
      pfVar10 = local_148;
      lVar19 = 8;
      puVar13 = puVar18 + 2;
      do {
        local_3f8.x = pfVar10[-0x10];
        local_3f8.y = pfVar10[-8];
        local_3f8.z = *pfVar10;
        local_3f8.w = pfVar10[8];
        tdm::quat<float>::euler<0>(&local_3f8,&local_418);
        pfVar10 = pfVar10 + 1;
        pfVar2[puVar13[-2]] = local_418.values[0].value * fVar47;
        pfVar2[puVar13[-1]] = local_418.values[1].value * fVar47;
        pfVar2[*puVar13] = local_418.values[2].value * fVar47;
        lVar19 = lVar19 + -1;
        puVar13 = puVar13 + 4;
      } while (lVar19 != 0);
      puVar18 = puVar18 + 0x20;
      local_400 = local_400 + uVar17 * 0x20;
      pfVar9 = pfVar9 + uVar17 * 0x20;
    } while (puVar18 < local_3c8);
  }
  if (puVar18 < local_398) {
    pfVar14 = local_380->ptr;
    pfVar9 = local_400 + 0x14;
    pfVar2 = local_390->ptr;
    lVar19 = local_3a8;
    pLVar15 = local_3a0;
    do {
      local_178 = 0.0;
      fStack_174 = 0.0;
      fStack_170 = 0.0;
      fStack_16c = 0.0;
      uVar11 = 0;
      local_148[0] = 0.0;
      local_148[1] = 0.0;
      local_148[2] = 0.0;
      local_148[3] = 0.0;
      fVar49 = local_148[0];
      fVar51 = local_148[1];
      fVar53 = local_148[2];
      fVar22 = local_148[3];
      local_118 = ___xmm_3f8000003f8000003f8000003f800000;
      fStack_114 = _UNK_15076b1f4;
      fStack_110 = _UNK_15076b1f8;
      fStack_10c = _UNK_15076b1fc;
      fVar38 = local_148[0];
      fVar23 = local_148[1];
      fVar39 = local_148[2];
      fVar24 = local_148[3];
      local_128[0] = ___xmm_3f8000003f8000003f8000003f800000;
      local_128[1] = _UNK_15076b1f4;
      local_128[2] = _UNK_15076b1f8;
      local_128[3] = _UNK_15076b1fc;
      local_158 = local_178;
      fStack_154 = fStack_174;
      fStack_150 = fStack_170;
      fStack_14c = fStack_16c;
      local_168[0] = local_178;
      local_168[1] = fStack_174;
      local_168[2] = fStack_170;
      local_168[3] = fStack_16c;
      if (uVar16 != 0) {
        local_1e8._4_4_ = _UNK_15076b1f4;
        local_1e8._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
        fStack_1e0 = _UNK_15076b1f8;
        fStack_1dc = _UNK_15076b1fc;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_1b8 = 0;
        uStack_1b0 = 0;
        _local_1c8 = ZEXT816(0);
        _local_1d8 = ZEXT816(0);
        _local_208 = ZEXT816(0);
        _local_218 = ZEXT816(0);
        _local_228 = ZEXT816(0);
        _local_238 = ZEXT816(0);
        _local_268 = ZEXT816(0);
        _local_278 = ZEXT816(0);
        local_288 = 0;
        uStack_280 = 0;
        local_298 = 0;
        uStack_290 = 0;
        _local_2c8 = ZEXT816(0);
        _local_2d8 = ZEXT816(0);
        local_2e8 = 0;
        uStack_2e0 = 0;
        local_2f8 = 0;
        uStack_2f0 = 0;
        _local_308 = ZEXT816(0);
        _local_318 = ZEXT816(0);
        _local_3d8 = ZEXT816(0);
        _local_328 = ZEXT816(0);
        local_338 = 0;
        uStack_330 = 0;
        local_348 = 0;
        uStack_340 = 0;
        _local_358 = ZEXT816(0);
        _local_368 = ZEXT816(0);
        local_1f8._4_4_ = _UNK_15076b1f4;
        local_1f8._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
        fStack_1f0 = _UNK_15076b1f8;
        fStack_1ec = _UNK_15076b1fc;
        local_248._4_4_ = _UNK_15076b1f4;
        local_248._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
        fStack_240 = _UNK_15076b1f8;
        fStack_23c = _UNK_15076b1fc;
        local_258._4_4_ = _UNK_15076b1f4;
        local_258._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
        fStack_250 = _UNK_15076b1f8;
        fStack_24c = _UNK_15076b1fc;
        local_2a8._4_4_ = _UNK_15076b1f4;
        local_2a8._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
        fStack_2a0 = _UNK_15076b1f8;
        fStack_29c = _UNK_15076b1fc;
        local_2b8._4_4_ = _UNK_15076b1f4;
        local_2b8._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
        fStack_2b0 = _UNK_15076b1f8;
        fStack_2ac = _UNK_15076b1fc;
        local_378._4_4_ = _UNK_15076b1f4;
        local_378._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
        fStack_370 = _UNK_15076b1f8;
        fStack_36c = _UNK_15076b1fc;
        local_3b8._4_4_ = _UNK_15076b1f4;
        local_3b8._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
        uStack_3b0._0_4_ = _UNK_15076b1f8;
        uStack_3b0._4_4_ = _UNK_15076b1fc;
        pfVar10 = pfVar9;
        do {
          fVar47 = pfVar14[local_408[uVar11]];
          auVar27._0_4_ = ___xmm_3f8000003f8000003f8000003f800000 - fVar47;
          auVar27._4_4_ = _UNK_15076b1f4 - fVar47;
          auVar27._8_4_ = _UNK_15076b1f8 - fVar47;
          auVar27._12_4_ = _UNK_15076b1fc - fVar47;
          fVar58 = fVar47 * pfVar10[-0x14];
          fVar60 = fVar47 * pfVar10[-0x13];
          fVar62 = fVar47 * pfVar10[-0x12];
          fVar64 = fVar47 * pfVar10[-0x11];
          fVar46 = fVar47 * pfVar10[-0xc];
          fVar48 = fVar47 * pfVar10[-0xb];
          fVar50 = fVar47 * pfVar10[-10];
          fVar52 = fVar47 * pfVar10[-9];
          auVar67._0_4_ = fVar47 * pfVar10[-0x10];
          auVar67._4_4_ = fVar47 * pfVar10[-0xf];
          auVar67._8_4_ = fVar47 * pfVar10[-0xe];
          auVar67._12_4_ = fVar47 * pfVar10[-0xd];
          fVar54 = fVar47 * pfVar10[-4];
          fVar55 = fVar47 * pfVar10[-3];
          fVar56 = fVar47 * pfVar10[-2];
          fVar57 = fVar47 * pfVar10[-1];
          fVar29 = fVar47 * pfVar10[-8];
          fVar30 = fVar47 * pfVar10[-7];
          fVar31 = fVar47 * pfVar10[-6];
          fVar32 = fVar47 * pfVar10[-5];
          fVar42 = fVar47 * *pfVar10;
          fVar43 = fVar47 * pfVar10[1];
          fVar44 = fVar47 * pfVar10[2];
          fVar45 = fVar47 * pfVar10[3];
          fVar33 = (float)(~-(uint)(0.0 <= pfVar10[4]) & ___xmm_bf800000bf800000bf800000bf800000 |
                          (uint)___xmm_3f8000003f8000003f8000003f800000 & -(uint)(0.0 <= pfVar10[4])
                          ) * auVar27._0_4_ + fVar47 * pfVar10[4];
          fVar35 = (float)(~-(uint)(0.0 <= pfVar10[5]) & _UNK_15076c664 |
                          (uint)_UNK_15076b1f4 & -(uint)(0.0 <= pfVar10[5])) * auVar27._4_4_ +
                   fVar47 * pfVar10[5];
          fVar36 = (float)(~-(uint)(0.0 <= pfVar10[6]) & _UNK_15076c668 |
                          (uint)_UNK_15076b1f8 & -(uint)(0.0 <= pfVar10[6])) * auVar27._8_4_ +
                   fVar47 * pfVar10[6];
          fVar37 = (float)(~-(uint)(0.0 <= pfVar10[7]) & _UNK_15076c66c |
                          (uint)_UNK_15076b1fc & -(uint)(0.0 <= pfVar10[7])) * auVar27._12_4_ +
                   fVar47 * pfVar10[7];
          fVar38 = (float)(~-(uint)(0.0 <= pfVar10[8]) & ___xmm_bf800000bf800000bf800000bf800000 |
                          (uint)___xmm_3f8000003f8000003f8000003f800000 & -(uint)(0.0 <= pfVar10[8])
                          ) * auVar27._0_4_ + fVar47 * pfVar10[8];
          fVar23 = (float)(~-(uint)(0.0 <= pfVar10[9]) & _UNK_15076c664 |
                          (uint)_UNK_15076b1f4 & -(uint)(0.0 <= pfVar10[9])) * auVar27._4_4_ +
                   fVar47 * pfVar10[9];
          fVar39 = (float)(~-(uint)(0.0 <= pfVar10[10]) & _UNK_15076c668 |
                          (uint)_UNK_15076b1f8 & -(uint)(0.0 <= pfVar10[10])) * auVar27._8_4_ +
                   fVar47 * pfVar10[10];
          fVar24 = (float)(~-(uint)(0.0 <= pfVar10[0xb]) & _UNK_15076c66c |
                          (uint)_UNK_15076b1fc & -(uint)(0.0 <= pfVar10[0xb])) * auVar27._12_4_ +
                   fVar47 * pfVar10[0xb];
          auVar21._0_4_ = fVar42 * fVar42;
          auVar21._4_4_ = fVar43 * fVar43;
          auVar21._8_4_ = fVar44 * fVar44;
          auVar21._12_4_ = fVar45 * fVar45;
          fVar49 = fVar46 * fVar46 + fVar58 * fVar58 + fVar54 * fVar54 + fVar33 * fVar33;
          fVar51 = fVar48 * fVar48 + fVar60 * fVar60 + fVar55 * fVar55 + fVar35 * fVar35;
          fVar53 = fVar50 * fVar50 + fVar62 * fVar62 + fVar56 * fVar56 + fVar36 * fVar36;
          fVar22 = fVar52 * fVar52 + fVar64 * fVar64 + fVar57 * fVar57 + fVar37 * fVar37;
          auVar4._4_4_ = fVar51;
          auVar4._0_4_ = fVar49;
          auVar4._8_4_ = fVar53;
          auVar4._12_4_ = fVar22;
          auVar28 = rsqrtps(auVar27,auVar4);
          fVar58 = auVar28._0_4_ * fVar58;
          fVar60 = auVar28._4_4_ * fVar60;
          fVar62 = auVar28._8_4_ * fVar62;
          fVar64 = auVar28._12_4_ * fVar64;
          auVar8._4_4_ = fVar30 * fVar30 + auVar67._4_4_ * auVar67._4_4_ + auVar21._4_4_ +
                         fVar23 * fVar23;
          auVar8._0_4_ = fVar29 * fVar29 + auVar67._0_4_ * auVar67._0_4_ + auVar21._0_4_ +
                         fVar38 * fVar38;
          auVar8._8_4_ = fVar31 * fVar31 + auVar67._8_4_ * auVar67._8_4_ + auVar21._8_4_ +
                         fVar39 * fVar39;
          auVar8._12_4_ =
               fVar32 * fVar32 + auVar67._12_4_ * auVar67._12_4_ + auVar21._12_4_ + fVar24 * fVar24;
          auVar28 = rsqrtps(auVar21,auVar8);
          fVar47 = auVar28._0_4_;
          fVar40 = auVar28._4_4_;
          fVar25 = auVar28._8_4_;
          fVar41 = auVar28._12_4_;
          fVar59 = fVar47 * auVar67._0_4_;
          fVar61 = fVar40 * auVar67._4_4_;
          fVar63 = fVar25 * auVar67._8_4_;
          fVar65 = fVar41 * auVar67._12_4_;
          auVar5._4_4_ = fVar51;
          auVar5._0_4_ = fVar49;
          auVar5._8_4_ = fVar53;
          auVar5._12_4_ = fVar22;
          auVar28 = rsqrtps(auVar67,auVar5);
          fVar29 = fVar47 * fVar29;
          fVar30 = fVar40 * fVar30;
          fVar31 = fVar25 * fVar31;
          fVar32 = fVar41 * fVar32;
          fVar49 = auVar28._0_4_;
          fVar51 = auVar28._4_4_;
          fVar53 = auVar28._8_4_;
          fVar22 = auVar28._12_4_;
          fVar42 = fVar47 * fVar42;
          fVar43 = fVar40 * fVar43;
          fVar44 = fVar25 * fVar44;
          fVar45 = fVar41 * fVar45;
          fVar46 = fVar49 * fVar46;
          fVar48 = fVar51 * fVar48;
          fVar50 = fVar53 * fVar50;
          fVar52 = fVar22 * fVar52;
          fVar33 = fVar49 * fVar33;
          fVar35 = fVar51 * fVar35;
          fVar36 = fVar53 * fVar36;
          fVar37 = fVar22 * fVar37;
          fVar49 = fVar49 * fVar54;
          fVar51 = fVar51 * fVar55;
          fVar53 = fVar53 * fVar56;
          fVar22 = fVar22 * fVar57;
          fVar47 = fVar47 * fVar38;
          fVar40 = fVar40 * fVar23;
          fVar25 = fVar25 * fVar39;
          fVar41 = fVar41 * fVar24;
          fVar38 = (fVar33 * (float)local_208._0_4_ + fVar58 * (float)local_1e8._0_4_ +
                   fVar46 * (float)local_1c8._0_4_) - fVar49 * (float)local_1a8;
          fVar23 = (fVar35 * (float)local_208._4_4_ + fVar60 * (float)local_1e8._4_4_ +
                   fVar48 * (float)local_1c8._4_4_) - fVar51 * local_1a8._4_4_;
          fVar39 = (fVar36 * fStack_200 + fVar62 * fStack_1e0 + fVar50 * fStack_1c0) -
                   fVar53 * (float)uStack_1a0;
          fVar24 = (fVar37 * fStack_1fc + fVar64 * fStack_1dc + fVar52 * fStack_1bc) -
                   fVar22 * uStack_1a0._4_4_;
          local_178 = (fVar47 * (float)local_218._0_4_ + fVar59 * (float)local_1f8._0_4_ +
                      fVar29 * (float)local_1d8._0_4_) - fVar42 * (float)local_1b8;
          fStack_174 = (fVar40 * (float)local_218._4_4_ + fVar61 * (float)local_1f8._4_4_ +
                       fVar30 * (float)local_1d8._4_4_) - fVar43 * local_1b8._4_4_;
          fStack_170 = (fVar25 * fStack_210 + fVar63 * fStack_1f0 + fVar31 * (float)uStack_1d0) -
                       fVar44 * (float)uStack_1b0;
          fStack_16c = (fVar41 * fStack_20c + fVar65 * fStack_1ec + fVar32 * uStack_1d0._4_4_) -
                       fVar45 * uStack_1b0._4_4_;
          local_3e8 = CONCAT44(fStack_174,local_178);
          uStack_3e0._0_4_ = fStack_170;
          uStack_3e0._4_4_ = fStack_16c;
          local_168[0] = (fVar33 * (float)local_288 - fVar58 * (float)local_268._0_4_) +
                         fVar46 * (float)local_248._0_4_ + fVar49 * (float)local_228._0_4_;
          local_168[1] = (fVar35 * local_288._4_4_ - fVar60 * (float)local_268._4_4_) +
                         fVar48 * (float)local_248._4_4_ + fVar51 * (float)local_228._4_4_;
          local_168[2] = (fVar36 * (float)uStack_280 - fVar62 * fStack_260) + fVar50 * fStack_240 +
                         fVar53 * fStack_220;
          local_168[3] = (fVar37 * uStack_280._4_4_ - fVar64 * fStack_25c) + fVar52 * fStack_23c +
                         fVar22 * fStack_21c;
          local_1a8 = CONCAT44(local_168[1],local_168[0]);
          uStack_1a0 = CONCAT44(local_168[3],local_168[2]);
          local_158 = (fVar47 * (float)local_298 - fVar59 * (float)local_278._0_4_) +
                      fVar29 * (float)local_258._0_4_ + fVar42 * (float)local_238._0_4_;
          fStack_154 = (fVar40 * local_298._4_4_ - fVar61 * (float)local_278._4_4_) +
                       fVar30 * (float)local_258._4_4_ + fVar43 * (float)local_238._4_4_;
          fStack_150 = (fVar25 * (float)uStack_290 - fVar63 * (float)uStack_270) +
                       fVar31 * fStack_250 + fVar44 * fStack_230;
          fStack_14c = (fVar41 * uStack_290._4_4_ - fVar65 * uStack_270._4_4_) + fVar32 * fStack_24c
                       + fVar45 * fStack_22c;
          local_1b8 = CONCAT44(fStack_154,local_158);
          uStack_1b0 = CONCAT44(fStack_14c,fStack_150);
          local_148[0] = ((fVar33 * (float)local_308._0_4_ + fVar58 * (float)local_2e8) -
                         fVar46 * (float)local_2c8._0_4_) + fVar49 * (float)local_2a8._0_4_;
          local_148[1] = ((fVar35 * (float)local_308._4_4_ + fVar60 * local_2e8._4_4_) -
                         fVar48 * (float)local_2c8._4_4_) + fVar51 * (float)local_2a8._4_4_;
          local_148[2] = ((fVar36 * fStack_300 + fVar62 * (float)uStack_2e0) - fVar50 * fStack_2c0)
                         + fVar53 * fStack_2a0;
          local_148[3] = ((fVar37 * fStack_2fc + fVar64 * uStack_2e0._4_4_) - fVar52 * fStack_2bc) +
                         fVar22 * fStack_29c;
          local_128[0] = ((fVar33 * (float)local_378._0_4_ - fVar58 * (float)local_358._0_4_) -
                         fVar46 * (float)local_338) - fVar49 * (float)local_3d8._0_4_;
          local_128[1] = ((fVar35 * (float)local_378._4_4_ - fVar60 * (float)local_358._4_4_) -
                         fVar48 * local_338._4_4_) - fVar51 * (float)local_3d8._4_4_;
          local_128[2] = ((fVar36 * fStack_370 - fVar62 * fStack_350) - fVar50 * (float)uStack_330)
                         - fVar53 * fStack_3d0;
          local_128[3] = ((fVar37 * fStack_36c - fVar64 * fStack_34c) - fVar52 * uStack_330._4_4_) -
                         fVar22 * fStack_3cc;
          local_1c8._4_4_ = local_148[1];
          local_1c8._0_4_ = local_148[0];
          fStack_1c0 = local_148[2];
          fStack_1bc = local_148[3];
          fVar49 = ((fVar47 * (float)local_318._0_4_ + fVar59 * (float)local_2f8) -
                   fVar29 * (float)local_2d8._0_4_) + fVar42 * (float)local_2b8._0_4_;
          fVar51 = ((fVar40 * (float)local_318._4_4_ + fVar61 * local_2f8._4_4_) -
                   fVar30 * (float)local_2d8._4_4_) + fVar43 * (float)local_2b8._4_4_;
          fVar53 = ((fVar25 * (float)uStack_310 + fVar63 * (float)uStack_2f0) - fVar31 * fStack_2d0)
                   + fVar44 * fStack_2b0;
          fVar22 = ((fVar41 * uStack_310._4_4_ + fVar65 * uStack_2f0._4_4_) - fVar32 * fStack_2cc) +
                   fVar45 * fStack_2ac;
          local_118 = ((fVar47 * (float)local_3b8._0_4_ - fVar59 * (float)local_368._0_4_) -
                      fVar29 * (float)local_348) - fVar42 * (float)local_328._0_4_;
          fStack_114 = ((fVar40 * (float)local_3b8._4_4_ - fVar61 * (float)local_368._4_4_) -
                       fVar30 * local_348._4_4_) - fVar43 * (float)local_328._4_4_;
          fStack_110 = ((fVar25 * (float)uStack_3b0 - fVar63 * fStack_360) -
                       fVar31 * (float)uStack_340) - fVar44 * (float)uStack_320;
          fStack_10c = ((fVar41 * uStack_3b0._4_4_ - fVar65 * fStack_35c) -
                       fVar32 * uStack_340._4_4_) - fVar45 * uStack_320._4_4_;
          local_1d8._4_4_ = fVar51;
          local_1d8._0_4_ = fVar49;
          uStack_1d0._0_4_ = fVar53;
          uStack_1d0._4_4_ = fVar22;
          uVar11 = uVar11 + 1;
          pfVar10 = pfVar10 + 0x20;
          local_1e8._4_4_ = local_128[1];
          local_1e8._0_4_ = local_128[0];
          fStack_1e0 = local_128[2];
          fStack_1dc = local_128[3];
          local_1f8._4_4_ = fStack_114;
          local_1f8._0_4_ = local_118;
          fStack_1f0 = fStack_110;
          fStack_1ec = fStack_10c;
          local_208._4_4_ = fVar23;
          local_208._0_4_ = fVar38;
          fStack_200 = fVar39;
          fStack_1fc = fVar24;
          fStack_210 = fStack_170;
          local_218 = (undefined1  [8])local_3e8;
          fStack_20c = fStack_16c;
          local_228._4_4_ = fVar23;
          local_228._0_4_ = fVar38;
          fStack_220 = fVar39;
          fStack_21c = fVar24;
          fStack_230 = fStack_170;
          local_238 = (undefined1  [8])local_3e8;
          fStack_22c = fStack_16c;
          local_248._4_4_ = local_128[1];
          local_248._0_4_ = local_128[0];
          fStack_240 = local_128[2];
          fStack_23c = local_128[3];
          local_258._4_4_ = fStack_114;
          local_258._0_4_ = local_118;
          fStack_250 = fStack_110;
          fStack_24c = fStack_10c;
          local_268._4_4_ = local_148[1];
          local_268._0_4_ = local_148[0];
          fStack_260 = local_148[2];
          fStack_25c = local_148[3];
          local_278._4_4_ = fVar51;
          local_278._0_4_ = fVar49;
          uStack_270._0_4_ = fVar53;
          uStack_270._4_4_ = fVar22;
          local_288 = CONCAT44(local_168[1],local_168[0]);
          uStack_280 = CONCAT44(local_168[3],local_168[2]);
          local_298 = CONCAT44(fStack_154,local_158);
          uStack_290 = CONCAT44(fStack_14c,fStack_150);
          local_2a8._4_4_ = local_128[1];
          local_2a8._0_4_ = local_128[0];
          fStack_2a0 = local_128[2];
          fStack_29c = local_128[3];
          local_2b8._4_4_ = fStack_114;
          local_2b8._0_4_ = local_118;
          fStack_2b0 = fStack_110;
          fStack_2ac = fStack_10c;
          local_2c8._4_4_ = fVar23;
          local_2c8._0_4_ = fVar38;
          fStack_2c0 = fVar39;
          fStack_2bc = fVar24;
          fStack_2d0 = fStack_170;
          local_2d8 = (undefined1  [8])local_3e8;
          fStack_2cc = fStack_16c;
          local_2e8 = CONCAT44(local_168[1],local_168[0]);
          uStack_2e0 = CONCAT44(local_168[3],local_168[2]);
          local_2f8 = CONCAT44(fStack_154,local_158);
          uStack_2f0 = CONCAT44(fStack_14c,fStack_150);
          local_308._4_4_ = local_148[1];
          local_308._0_4_ = local_148[0];
          fStack_300 = local_148[2];
          fStack_2fc = local_148[3];
          local_318._4_4_ = fVar51;
          local_318._0_4_ = fVar49;
          uStack_310._0_4_ = fVar53;
          uStack_310._4_4_ = fVar22;
          local_3d8._4_4_ = local_148[1];
          local_3d8._0_4_ = local_148[0];
          fStack_3d0 = local_148[2];
          fStack_3cc = local_148[3];
          local_328._4_4_ = fVar51;
          local_328._0_4_ = fVar49;
          uStack_320._0_4_ = fVar53;
          uStack_320._4_4_ = fVar22;
          local_338 = CONCAT44(local_168[1],local_168[0]);
          uStack_330 = CONCAT44(local_168[3],local_168[2]);
          local_348 = CONCAT44(fStack_154,local_158);
          uStack_340 = CONCAT44(fStack_14c,fStack_150);
          local_358._4_4_ = fVar23;
          local_358._0_4_ = fVar38;
          fStack_350 = fVar39;
          fStack_34c = fVar24;
          fStack_360 = fStack_170;
          local_368 = (undefined1  [8])local_3e8;
          fStack_35c = fStack_16c;
          local_378._4_4_ = local_128[1];
          local_378._0_4_ = local_128[0];
          fStack_370 = local_128[2];
          fStack_36c = local_128[3];
          local_3b8._4_4_ = fStack_114;
          local_3b8._0_4_ = local_118;
          uStack_3b0._0_4_ = fStack_110;
          uStack_3b0._4_4_ = fStack_10c;
          fVar47 = __real_42652ee1;
        } while (uVar11 < uVar16);
      }
      local_188 = CONCAT44(fVar23,fVar38);
      uStack_180 = CONCAT44(fVar24,fVar39);
      local_138 = (undefined1  [8])CONCAT44(fVar51,fVar49);
      uStack_130 = CONCAT44(fVar22,fVar53);
      uVar12 = (&(pLVar15->outputLODs).size)[lVar19 * 2] >> 2 & 7;
      uVar11 = (ulonglong)uVar12;
      if (uVar12 != 0) {
        pfVar10 = local_148;
        puVar13 = puVar18 + 2;
        do {
          local_3f8.x = pfVar10[-0x10];
          local_3f8.y = pfVar10[-8];
          local_3f8.z = *pfVar10;
          local_3f8.w = pfVar10[8];
          tdm::quat<float>::euler<0>(&local_3f8,&local_418);
          pfVar10 = pfVar10 + 1;
          pfVar2[puVar13[-2]] = local_418.values[0].value * fVar47;
          pfVar2[puVar13[-1]] = local_418.values[1].value * fVar47;
          pfVar2[*puVar13] = local_418.values[2].value * fVar47;
          uVar11 = uVar11 - 1;
          puVar13 = puVar13 + 4;
          lVar19 = local_3a8;
          pLVar15 = local_3a0;
        } while (uVar11 != 0);
      }
      local_400 = local_400 + uVar17 * 0x20;
      pfVar9 = pfVar9 + uVar17 * 0x20;
      puVar18 = puVar18 + 0x20;
    } while (puVar18 < local_398);
  }
  fVar49 = __real_3f800000;
  if (puVar18 < local_388) {
    pfVar9 = local_400 + 4;
    lVar19 = (longlong)local_388 - (longlong)puVar18;
    auVar34 = ZEXT816(0);
    pfVar14 = local_380->ptr;
    pfVar2 = local_390->ptr;
    fVar51 = __real_3fc90fda;
    local_3c8 = pfVar14;
    do {
      uVar11 = 0;
      fVar53 = 0.0;
      fVar22 = 0.0;
      fVar38 = 0.0;
      fVar23 = 0.0;
      local_f8[0] = 0.0;
      local_f8[1] = 0.0;
      local_f8[2] = 0.0;
      local_f8[3] = 0.0;
      local_e8[0] = 0.0;
      local_e8[1] = 0.0;
      local_e8[2] = 0.0;
      local_e8[3] = 0.0;
      pfVar10 = pfVar9;
      local_108[0] = fVar53;
      local_108[1] = fVar22;
      local_108[2] = fVar38;
      local_108[3] = fVar23;
      local_d8[0] = ___xmm_3f8000003f8000003f8000003f800000;
      local_d8[1] = _UNK_15076b1f4;
      local_d8[2] = _UNK_15076b1f8;
      local_d8[3] = _UNK_15076b1fc;
      if (uVar16 != 0) {
        do {
          puVar13 = local_408 + uVar11;
          uVar11 = uVar11 + 1;
          fVar47 = pfVar14[*puVar13];
          fVar51 = fVar47 * pfVar10[-4];
          fVar39 = fVar47 * pfVar10[-3];
          fVar24 = fVar47 * pfVar10[-2];
          fVar40 = fVar47 * pfVar10[-1];
          fVar25 = fVar47 * *pfVar10;
          fVar41 = fVar47 * pfVar10[1];
          fVar48 = fVar47 * pfVar10[2];
          fVar52 = fVar47 * pfVar10[3];
          fVar60 = fVar47 * pfVar10[4];
          fVar64 = fVar47 * pfVar10[5];
          fVar43 = fVar47 * pfVar10[6];
          fVar45 = fVar47 * pfVar10[7];
          fVar46 = (float)(-(uint)(0.0 <= pfVar10[8]) &
                           (uint)___xmm_3f8000003f8000003f8000003f800000 |
                          ~-(uint)(0.0 <= pfVar10[8]) & ___xmm_bf800000bf800000bf800000bf800000) *
                   (___xmm_3f8000003f8000003f8000003f800000 - fVar47) + fVar47 * pfVar10[8];
          fVar50 = (float)(-(uint)(0.0 <= pfVar10[9]) & (uint)_UNK_15076b1f4 |
                          ~-(uint)(0.0 <= pfVar10[9]) & _UNK_15076c664) * (_UNK_15076b1f4 - fVar47)
                   + fVar47 * pfVar10[9];
          fVar58 = (float)(-(uint)(0.0 <= pfVar10[10]) & (uint)_UNK_15076b1f8 |
                          ~-(uint)(0.0 <= pfVar10[10]) & _UNK_15076c668) * (_UNK_15076b1f8 - fVar47)
                   + fVar47 * pfVar10[10];
          fVar47 = (float)(-(uint)(0.0 <= pfVar10[0xb]) & (uint)_UNK_15076b1fc |
                          ~-(uint)(0.0 <= pfVar10[0xb]) & _UNK_15076c66c) *
                   (_UNK_15076b1fc - fVar47) + fVar47 * pfVar10[0xb];
          auVar6._4_4_ = fVar41 * fVar41 + fVar39 * fVar39 + fVar64 * fVar64 + fVar50 * fVar50;
          auVar6._0_4_ = fVar25 * fVar25 + fVar51 * fVar51 + fVar60 * fVar60 + fVar46 * fVar46;
          auVar6._8_4_ = fVar48 * fVar48 + fVar24 * fVar24 + fVar43 * fVar43 + fVar58 * fVar58;
          auVar6._12_4_ = fVar52 * fVar52 + fVar40 * fVar40 + fVar45 * fVar45 + fVar47 * fVar47;
          auVar28 = rsqrtps(auVar34,auVar6);
          fVar62 = auVar28._0_4_;
          fVar42 = auVar28._4_4_;
          fVar44 = auVar28._8_4_;
          fVar29 = auVar28._12_4_;
          fVar51 = fVar62 * fVar51;
          fVar39 = fVar42 * fVar39;
          fVar24 = fVar44 * fVar24;
          fVar40 = fVar29 * fVar40;
          fVar25 = fVar62 * fVar25;
          fVar41 = fVar42 * fVar41;
          fVar48 = fVar44 * fVar48;
          fVar52 = fVar29 * fVar52;
          fVar60 = fVar62 * fVar60;
          fVar64 = fVar42 * fVar64;
          fVar43 = fVar44 * fVar43;
          fVar45 = fVar29 * fVar45;
          auVar34._0_4_ = fVar62 * fVar46;
          auVar34._4_4_ = fVar42 * fVar50;
          auVar34._8_4_ = fVar44 * fVar58;
          auVar34._12_4_ = fVar29 * fVar47;
          fVar30 = fVar51 * local_f8[0];
          fVar31 = fVar39 * local_f8[1];
          fVar32 = fVar24 * local_f8[2];
          fVar33 = fVar40 * local_f8[3];
          local_108[0] = (auVar34._0_4_ * fVar53 + fVar51 * local_d8[0] + fVar25 * local_e8[0]) -
                         fVar60 * local_f8[0];
          local_108[1] = (auVar34._4_4_ * fVar22 + fVar39 * local_d8[1] + fVar41 * local_e8[1]) -
                         fVar64 * local_f8[1];
          local_108[2] = (auVar34._8_4_ * fVar38 + fVar24 * local_d8[2] + fVar48 * local_e8[2]) -
                         fVar43 * local_f8[2];
          local_108[3] = (auVar34._12_4_ * fVar23 + fVar40 * local_d8[3] + fVar52 * local_e8[3]) -
                         fVar45 * local_f8[3];
          fVar47 = fVar25 * local_f8[0];
          fVar46 = fVar41 * local_f8[1];
          fVar50 = fVar48 * local_f8[2];
          fVar58 = fVar52 * local_f8[3];
          local_f8[0] = (auVar34._0_4_ * local_f8[0] - fVar51 * local_e8[0]) + fVar25 * local_d8[0]
                        + fVar60 * fVar53;
          local_f8[1] = (auVar34._4_4_ * local_f8[1] - fVar39 * local_e8[1]) + fVar41 * local_d8[1]
                        + fVar64 * fVar22;
          local_f8[2] = (auVar34._8_4_ * local_f8[2] - fVar24 * local_e8[2]) + fVar48 * local_d8[2]
                        + fVar43 * fVar38;
          local_f8[3] = (auVar34._12_4_ * local_f8[3] - fVar40 * local_e8[3]) + fVar52 * local_d8[3]
                        + fVar45 * fVar23;
          fVar62 = fVar60 * local_e8[0];
          fVar42 = fVar64 * local_e8[1];
          fVar44 = fVar43 * local_e8[2];
          fVar29 = fVar45 * local_e8[3];
          local_e8[0] = ((fVar30 + auVar34._0_4_ * local_e8[0]) - fVar25 * fVar53) +
                        fVar60 * local_d8[0];
          local_e8[1] = ((fVar31 + auVar34._4_4_ * local_e8[1]) - fVar41 * fVar22) +
                        fVar64 * local_d8[1];
          local_e8[2] = ((fVar32 + auVar34._8_4_ * local_e8[2]) - fVar48 * fVar38) +
                        fVar43 * local_d8[2];
          local_e8[3] = ((fVar33 + auVar34._12_4_ * local_e8[3]) - fVar52 * fVar23) +
                        fVar45 * local_d8[3];
          local_d8[0] = ((local_d8[0] * auVar34._0_4_ - fVar51 * fVar53) - fVar47) - fVar62;
          local_d8[1] = ((local_d8[1] * auVar34._4_4_ - fVar39 * fVar22) - fVar46) - fVar42;
          local_d8[2] = ((local_d8[2] * auVar34._8_4_ - fVar24 * fVar38) - fVar50) - fVar44;
          local_d8[3] = ((local_d8[3] * auVar34._12_4_ - fVar40 * fVar23) - fVar58) - fVar29;
          pfVar10 = pfVar10 + 0x10;
          fVar53 = local_108[0];
          fVar22 = local_108[1];
          fVar38 = local_108[2];
          fVar23 = local_108[3];
        } while (uVar11 < uVar16);
        auVar34 = ZEXT816(0);
        fVar51 = __real_3fc90fda;
        fVar47 = __real_42652ee1;
      }
      uVar11 = (ulonglong)(lVar19 >> 1) >> 2;
      if (uVar11 != 0) {
        puVar13 = puVar18 + 2;
        pfVar10 = local_e8;
        do {
          fVar53 = pfVar10[-8];
          fVar22 = pfVar10[-4];
          fVar38 = *pfVar10;
          fVar23 = pfVar10[4];
          fVar24 = fVar38 + fVar38;
          fVar25 = fVar22 + fVar22;
          fVar46 = (fVar53 + fVar53) * fVar23;
          fVar38 = fVar24 * fVar38;
          fVar41 = fVar25 * fVar23 + fVar53 * fVar24;
          fVar40 = (float)((uint)fVar41 & __xmm_7fffffff7fffffff7fffffff7fffffff);
          fVar39 = fVar49 - fVar40;
          if (fVar49 - fVar40 <= 0.0) {
            fVar39 = 0.0;
          }
          fVar39 = SQRT(fVar39) *
                   (((((((__real_3bda90c5 - fVar40 * ___real_3aa57a2c) * fVar40 - ___real_3c8bfc66)
                        * fVar40 + ___real_3cfd10f8) * fVar40 - ___real_3d4d8392) * fVar40 +
                     ___real_3db63a9e) * fVar40 - ___real_3e5bbfca) * fVar40 + fVar51);
          if (fVar41 < 0.0) {
            fVar39 = fVar39 - fVar51;
          }
          else {
            fVar39 = fVar51 - fVar39;
          }
          if (fVar49 <= fVar40) {
            fVar23 = 0.0;
            fVar46 = fVar46 + fVar22 * fVar24;
          }
          else {
            fVar23 = atan2f(fVar23 * fVar24 - fVar25 * fVar53,fVar49 - (fVar38 + fVar25 * fVar22));
            fVar46 = fVar46 - fVar22 * fVar24;
            fVar38 = fVar25 * fVar22;
          }
          fVar53 = atan2f(fVar46,fVar49 - (fVar38 + (fVar53 + fVar53) * fVar53));
          pfVar10 = pfVar10 + 1;
          pfVar2[puVar13[-2]] = fVar53 * fVar47;
          pfVar2[puVar13[-1]] = fVar39 * fVar47;
          auVar34 = ZEXT416(0);
          uVar1 = *puVar13;
          puVar13 = puVar13 + 4;
          pfVar2[uVar1] = fVar23 * fVar47;
          uVar11 = uVar11 - 1;
          pfVar14 = local_3c8;
        } while (uVar11 != 0);
      }
      puVar18 = puVar18 + 0x10;
      lVar19 = lVar19 + -0x20;
      pfVar9 = pfVar9 + local_198;
    } while (puVar18 < local_388);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c572db0

void * __thiscall
rl4::
VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
::_scalar_deleting_destructor_
          (VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_> @ 14c572de0

vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
* __cdecl testing::internal::
          GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
                    (vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                     *__return_storage_ptr__)

{
  Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
  local_res8;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Myfirst =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mylast =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myend =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
            (local_res8,__return_storage_ptr__,0);
  return __return_storage_ptr__;
}

// GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types1<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_> @ 14c572e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
testing::internal::
GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types1<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
          (Types1<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
           param_1,vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                   *param_2,int param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> **ppbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  void *pvVar3;
  ulonglong uVar4;
  Message *this;
  undefined8 *puVar5;
  void *pvVar6;
  ulong64 uVar7;
  undefined1 auStackY_68 [32];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_38;
  _Bxty local_30;
  ulong64 local_20;
  ulong64 uStack_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  this = (Message *)testing::Message::Message((Message *)&local_38);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((this->ss_)._Mypair._Myval2)->field_0x10,param_3);
  testing::Message::GetString
            (this,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30);
  if (local_38._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar5 = (undefined8 *)
             ((longlong)&(local_38._Myval2)->field_0x0 +
             (longlong)*(int *)(*(longlong *)local_38._Myval2 + 4));
    (**(code **)*puVar5)(puVar5,1);
  }
  pbVar2 = (param_2->_Mypair)._Myval2._Mylast;
  if (pbVar2 == (param_2->_Mypair)._Myval2._Myend) {
    std::
    vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
    ::_Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              (param_2,pbVar2,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30);
  }
  else {
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar2->_Mypair)._Myval2._Mysize = 0;
    (pbVar2->_Mypair)._Myval2._Myres = 0;
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)CONCAT71(local_30._1_7_,local_30._Buf[0]);
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = local_30._8_8_;
    uVar4 = _UNK_15076add8;
    uVar7 = ___xmm_000000000000000f0000000000000000;
    (pbVar2->_Mypair)._Myval2._Mysize = local_20;
    (pbVar2->_Mypair)._Myval2._Myres = uStack_18;
    ppbVar1 = &(param_2->_Mypair)._Myval2._Mylast;
    *ppbVar1 = *ppbVar1 + 1;
    local_20 = uVar7;
    uStack_18 = uVar4;
    local_30._Buf[0] = '\0';
  }
  if (0xf < uStack_18) {
    pvVar3 = (void *)CONCAT71(local_30._1_7_,local_30._Buf[0]);
    uVar7 = uStack_18 + 1;
    pvVar6 = pvVar3;
    if (0xfff < uVar7) {
      pvVar6 = *(void **)((longlong)pvVar3 + -8);
      uVar7 = uStack_18 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar6))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar6,uVar7);
  }
  return;
}

// GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_> @ 14c572f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
testing::internal::
GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
          (Types2<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
           param_1,vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                   *param_2,int param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> **ppbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  void *pvVar3;
  ulonglong uVar4;
  Message *pMVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong64 uVar8;
  undefined1 auStackY_78 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_48;
  _Bxty local_40;
  ulong64 local_30;
  ulong64 uStack_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  pMVar5 = (Message *)testing::Message::Message((Message *)&local_48);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,param_3);
  testing::Message::GetString
            (pMVar5,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40);
  if (local_48._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)local_48._Mypair._Myval2 +
             (longlong)*(int *)(*(longlong *)local_48._Mypair._Myval2 + 4));
    (**(code **)*puVar6)(puVar6,1);
  }
  pbVar2 = (param_2->_Mypair)._Myval2._Mylast;
  if (pbVar2 == (param_2->_Mypair)._Myval2._Myend) {
    std::
    vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
    ::_Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              (param_2,pbVar2,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40);
  }
  else {
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar2->_Mypair)._Myval2._Mysize = 0;
    (pbVar2->_Mypair)._Myval2._Myres = 0;
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)CONCAT71(local_40._1_7_,local_40._Buf[0]);
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = local_40._8_8_;
    uVar4 = _UNK_15076add8;
    uVar8 = ___xmm_000000000000000f0000000000000000;
    (pbVar2->_Mypair)._Myval2._Mysize = local_30;
    (pbVar2->_Mypair)._Myval2._Myres = uStack_28;
    ppbVar1 = &(param_2->_Mypair)._Myval2._Mylast;
    *ppbVar1 = *ppbVar1 + 1;
    local_30 = uVar8;
    uStack_28 = uVar4;
    local_40._Buf[0] = '\0';
  }
  if (0xf < uStack_28) {
    pvVar3 = (void *)CONCAT71(local_40._1_7_,local_40._Buf[0]);
    uVar8 = uStack_28 + 1;
    pvVar7 = pvVar3;
    if (0xfff < uVar8) {
      pvVar7 = *(void **)((longlong)pvVar3 + -8);
      uVar8 = uStack_28 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar7,uVar8);
  }
  pMVar5 = (Message *)testing::Message::Message((Message *)&local_48);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,param_3 + 1);
  testing::Message::GetString
            (pMVar5,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40);
  if (local_48._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_48._Mypair._Myval2 + 4) +
             (longlong)local_48._Mypair._Myval2);
    (**(code **)*puVar6)(puVar6,1);
  }
  pbVar2 = (param_2->_Mypair)._Myval2._Mylast;
  if (pbVar2 == (param_2->_Mypair)._Myval2._Myend) {
    std::
    vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
    ::_Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              (param_2,pbVar2,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40);
  }
  else {
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar2->_Mypair)._Myval2._Mysize = 0;
    (pbVar2->_Mypair)._Myval2._Myres = 0;
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)CONCAT71(local_40._1_7_,local_40._Buf[0]);
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = local_40._8_8_;
    uVar4 = _UNK_15076add8;
    uVar8 = ___xmm_000000000000000f0000000000000000;
    (pbVar2->_Mypair)._Myval2._Mysize = local_30;
    (pbVar2->_Mypair)._Myval2._Myres = uStack_28;
    ppbVar1 = &(param_2->_Mypair)._Myval2._Mylast;
    *ppbVar1 = *ppbVar1 + 1;
    local_30 = uVar8;
    uStack_28 = uVar4;
    local_40._Buf[0] = '\0';
  }
  if (0xf < uStack_28) {
    pvVar3 = (void *)CONCAT71(local_40._1_7_,local_40._Buf[0]);
    uVar8 = uStack_28 + 1;
    pvVar7 = pvVar3;
    if (0xfff < uVar8) {
      pvVar7 = *(void **)((longlong)pvVar3 + -8);
      uVar8 = uStack_28 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar7,uVar8);
  }
  return;
}

// GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types3<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_> @ 14c573180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
testing::internal::
GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types3<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
          (Types3<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
           param_1,vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                   *param_2,int param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> **ppbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  void *pvVar3;
  ulonglong uVar4;
  Message *this;
  undefined8 *puVar5;
  void *pvVar6;
  ulong64 uVar7;
  undefined1 auStackY_78 [32];
  Types2<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
  local_48;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_40;
  _Bxty local_38;
  ulong64 local_28;
  ulong64 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  this = (Message *)testing::Message::Message((Message *)&local_40);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((this->ss_)._Mypair._Myval2)->field_0x10,param_3);
  testing::Message::GetString
            (this,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38);
  if (local_40._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar5 = (undefined8 *)
             ((longlong)&(local_40._Myval2)->field_0x0 +
             (longlong)*(int *)(*(longlong *)local_40._Myval2 + 4));
    (**(code **)*puVar5)(puVar5,1);
  }
  pbVar2 = (param_2->_Mypair)._Myval2._Mylast;
  if (pbVar2 == (param_2->_Mypair)._Myval2._Myend) {
    std::
    vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
    ::_Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              (param_2,pbVar2,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38);
  }
  else {
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar2->_Mypair)._Myval2._Mysize = 0;
    (pbVar2->_Mypair)._Myval2._Myres = 0;
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)CONCAT71(local_38._1_7_,local_38._Buf[0]);
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = local_38._8_8_;
    uVar4 = _UNK_15076add8;
    uVar7 = ___xmm_000000000000000f0000000000000000;
    (pbVar2->_Mypair)._Myval2._Mysize = local_28;
    (pbVar2->_Mypair)._Myval2._Myres = uStack_20;
    ppbVar1 = &(param_2->_Mypair)._Myval2._Mylast;
    *ppbVar1 = *ppbVar1 + 1;
    local_28 = uVar7;
    uStack_20 = uVar4;
    local_38._Buf[0] = '\0';
  }
  if (0xf < uStack_20) {
    pvVar3 = (void *)CONCAT71(local_38._1_7_,local_38._Buf[0]);
    uVar7 = uStack_20 + 1;
    pvVar6 = pvVar3;
    if (0xfff < uVar7) {
      pvVar6 = *(void **)((longlong)pvVar3 + -8);
      uVar7 = uStack_20 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar6))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar6,uVar7);
  }
  GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
            (local_48,param_2,param_3 + 1);
  return;
}

// GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_> @ 14c5732d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
testing::internal::
GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
          (Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
           param_1,vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                   *param_2,int param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> **ppbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  void *pvVar3;
  ulonglong uVar4;
  Message *pMVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong64 uVar8;
  undefined1 auStackY_88 [32];
  Types2<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
  local_58;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_50;
  _Bxty local_48;
  ulong64 local_38;
  ulong64 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_88;
  pMVar5 = (Message *)testing::Message::Message((Message *)&local_50);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,param_3);
  testing::Message::GetString
            (pMVar5,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_48);
  if (local_50._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)local_50._Mypair._Myval2 +
             (longlong)*(int *)(*(longlong *)local_50._Mypair._Myval2 + 4));
    (**(code **)*puVar6)(puVar6,1);
  }
  pbVar2 = (param_2->_Mypair)._Myval2._Mylast;
  if (pbVar2 == (param_2->_Mypair)._Myval2._Myend) {
    std::
    vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
    ::_Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              (param_2,pbVar2,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_48);
  }
  else {
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar2->_Mypair)._Myval2._Mysize = 0;
    (pbVar2->_Mypair)._Myval2._Myres = 0;
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)CONCAT71(local_48._1_7_,local_48._Buf[0]);
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = local_48._8_8_;
    uVar4 = _UNK_15076add8;
    uVar8 = ___xmm_000000000000000f0000000000000000;
    (pbVar2->_Mypair)._Myval2._Mysize = local_38;
    (pbVar2->_Mypair)._Myval2._Myres = uStack_30;
    ppbVar1 = &(param_2->_Mypair)._Myval2._Mylast;
    *ppbVar1 = *ppbVar1 + 1;
    local_38 = uVar8;
    uStack_30 = uVar4;
    local_48._Buf[0] = '\0';
  }
  if (0xf < uStack_30) {
    pvVar3 = (void *)CONCAT71(local_48._1_7_,local_48._Buf[0]);
    uVar8 = uStack_30 + 1;
    pvVar7 = pvVar3;
    if (0xfff < uVar8) {
      pvVar7 = *(void **)((longlong)pvVar3 + -8);
      uVar8 = uStack_30 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar7,uVar8);
  }
  pMVar5 = (Message *)testing::Message::Message((Message *)&local_50);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar5->ss_)._Mypair._Myval2)->field_0x10,param_3 + 1);
  testing::Message::GetString
            (pMVar5,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_48);
  if (local_50._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_50._Mypair._Myval2 + 4) +
             (longlong)local_50._Mypair._Myval2);
    (**(code **)*puVar6)(puVar6,1);
  }
  pbVar2 = (param_2->_Mypair)._Myval2._Mylast;
  if (pbVar2 == (param_2->_Mypair)._Myval2._Myend) {
    std::
    vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
    ::_Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              (param_2,pbVar2,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_48);
  }
  else {
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar2->_Mypair)._Myval2._Mysize = 0;
    (pbVar2->_Mypair)._Myval2._Myres = 0;
    (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)CONCAT71(local_48._1_7_,local_48._Buf[0]);
    *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = local_48._8_8_;
    uVar4 = _UNK_15076add8;
    uVar8 = ___xmm_000000000000000f0000000000000000;
    (pbVar2->_Mypair)._Myval2._Mysize = local_38;
    (pbVar2->_Mypair)._Myval2._Myres = uStack_30;
    ppbVar1 = &(param_2->_Mypair)._Myval2._Mylast;
    *ppbVar1 = *ppbVar1 + 1;
    local_38 = uVar8;
    uStack_30 = uVar4;
    local_48._Buf[0] = '\0';
  }
  if (0xf < uStack_30) {
    pvVar3 = (void *)CONCAT71(local_48._1_7_,local_48._Buf[0]);
    uVar8 = uStack_30 + 1;
    pvVar7 = pvVar3;
    if (0xfff < uVar8) {
      pvVar7 = *(void **)((longlong)pvVar3 + -8);
      uVar8 = uStack_30 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar7,uVar8);
  }
  GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
            (local_58,param_2,param_3 + 2);
  return;
}

// _Test_callable<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>_> @ 14c573500

bool __cdecl
std::
_Test_callable<_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  return true;
}

// _Test_callable<`pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>_> @ 14c573510

bool __cdecl
std::
_Test_callable<_pma::impl::ManagedInstance<std::unique_ptr<rl4::JointGroupQuaternionCalculationStrategy<float>,std::function<void___cdecl(rl4::JointGroupQuaternionCalculationStrategy<float>_*)>_>,rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::JointGroupQuaternionCalculationStrategy<float>_>::create<>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  return true;
}

// buildStorage<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_> @ 14c573520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`anonymous_namespace'::
QuaternionJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::
buildStorage<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
          (void *this)

{
  PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource> PVar1;
  JointGroup<float> *pJVar2;
  ushort uVar3;
  JointGroup<float> *pJVar4;
  undefined1 auStack_1a8 [32];
  _Value_init_tag local_188 [16];
  QuaternionJointsBuilder<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  local_178;
  JointBehaviorFilter local_128;
  QuaternionJointsEvaluator<float> *local_100;
  JointGroup<float> local_f8;
  undefined1 local_68 [56];
  longlong *local_30;
  QuaternionJointsEvaluator<float> *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_178._padding_ =
       (longlong)
       &
       ___7__QuaternionJointsBuilder_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3__rl4__6B_
  ;
  PVar1 = (PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>)
          ((longlong)this + 0x10);
  local_178.config._11_1_ = local_128.filters._Mypair._Myval1._3_1_;
  local_178.config.calculationType = SSE;
  local_178.config.loadJoints = true;
  local_178.config.loadBlendShapes = true;
  local_178.config.loadAnimatedMaps = true;
  local_178.config.loadMachineLearnedBehavior = true;
  local_178.config.loadRBFBehavior = true;
  local_178.config.loadTwistSwingBehavior = true;
  local_178.config.translationType = Vector;
  local_178.config.rotationType = EulerAngles;
  local_178.config.rotationOrder = XYZ;
  local_178.config.scaleType = Vector;
  local_178.config.translationPruningThreshold = 0.0;
  local_178.config.rotationPruningThreshold = 0.0;
  local_178.config.scalePruningThreshold = 0.0;
  local_178.memRes = (MemoryResource *)PVar1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_178.jointGroups._Mypair._Myval2._Myfirst = (JointGroup<float> *)0x0;
  local_178.jointGroups._Mypair._Myval2._Mylast = (JointGroup<float> *)0x0;
  local_178.jointGroups._Mypair._Myval1 =
       (PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  if (PVar1 != (PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>)0x0) {
    local_178.jointGroups._Mypair._Myval1 = PVar1;
  }
  local_178.jointGroups._Mypair._Myval2._Myend = (JointGroup<float> *)0x0;
  local_178.rotationUnit = degrees;
  rl4::JointBehaviorFilter::JointBehaviorFilter
            (&local_128,(Reader *)((longlong)this + 0x18),(MemoryResource *)PVar1);
  rl4::JointBehaviorFilter::include(&local_128,Quaternion);
  pJVar4 = rl4::JointGroup<float>::JointGroup<float>(&local_f8,local_178.memRes);
  uVar3 = rl4::JointBehaviorFilter::getJointGroupCount(&local_128);
  std::
  vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>
  ::_Resize<rl4::JointGroup<float>_>(&local_178.jointGroups,(ulonglong)uVar3,pJVar4);
  rl4::JointGroup<float>::~JointGroup<float>(&local_f8);
  pJVar2 = local_178.jointGroups._Mypair._Myval2._Mylast;
  for (pJVar4 = local_178.jointGroups._Mypair._Myval2._Myfirst; pJVar4 != pJVar2;
      pJVar4 = pJVar4 + 1) {
    uVar3 = rl4::JointBehaviorFilter::getLODCount(&local_128);
    std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>::
    _Resize<std::_Value_init_tag>(&pJVar4->lods,(ulonglong)uVar3,local_188);
  }
  rl4::
  QuaternionJointsBuilder<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  ::fillStorage(&local_178,&local_128);
  rl4::
  QuaternionJointsBuilder<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  ::build(&local_178,
          (unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_> *)
          local_68);
  rl4::QuaternionJointsEvaluator<float>::Accessor::assertRawDataEqual(local_28,1);
  if (local_28 != (QuaternionJointsEvaluator<float> *)0x0) {
    local_100 = local_28;
    if (local_30 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*local_30 + 0x10))(local_30,&local_100);
  }
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x20))(local_30,local_30 != (longlong *)local_68);
    local_30 = (longlong *)0x0;
  }
  if (local_128.filters._Mypair._Myval2._Myfirst != (FilterType *)0x0) {
    (**(code **)(*(longlong *)
                  CONCAT44(local_128.filters._Mypair._Myval1._4_4_,
                           local_128.filters._Mypair._Myval1._0_4_) + 0x10))
              ((longlong *)
               CONCAT44(local_128.filters._Mypair._Myval1._4_4_,
                        local_128.filters._Mypair._Myval1._0_4_),
               local_128.filters._Mypair._Myval2._Myfirst,
               ((longlong)local_128.filters._Mypair._Myval2._Myend -
                (longlong)local_128.filters._Mypair._Myval2._Myfirst >> 1) * 2,8);
    local_128.filters._Mypair._Myval2._Myend = (FilterType *)0x0;
    local_128.filters._Mypair._Myval2._Myfirst = (FilterType *)0x0;
    local_128.filters._Mypair._Myval2._Mylast = (FilterType *)0x0;
  }
  pJVar2 = local_178.jointGroups._Mypair._Myval2._Mylast;
  pJVar4 = local_178.jointGroups._Mypair._Myval2._Myfirst;
  if (local_178.jointGroups._Mypair._Myval2._Myfirst != (JointGroup<float> *)0x0) {
    for (; pJVar4 != pJVar2; pJVar4 = pJVar4 + 1) {
      rl4::JointGroup<float>::~JointGroup<float>(pJVar4);
    }
    (**(code **)((longlong)*(MemoryResource *)local_178.jointGroups._Mypair._Myval1 + 0x10))
              (local_178.jointGroups._Mypair._Myval1,local_178.jointGroups._Mypair._Myval2._Myfirst,
               (((longlong)local_178.jointGroups._Mypair._Myval2._Myend -
                (longlong)local_178.jointGroups._Mypair._Myval2._Myfirst) / 0x88) * 0x88,8);
    local_178.jointGroups._Mypair._Myval2._Myend = (JointGroup<float> *)0x0;
    local_178.jointGroups._Mypair._Myval2._Myfirst = (JointGroup<float> *)0x0;
    local_178.jointGroups._Mypair._Myval2._Mylast = (JointGroup<float> *)0x0;
  }
  rl4::JointsBuilder::~JointsBuilder((JointsBuilder *)&local_178);
  return;
}

// buildStorage<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_> @ 14c573810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`anonymous_namespace'::
QuaternionJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
::
buildStorage<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>
          (void *this)

{
  PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource> PVar1;
  JointGroup<float> *pJVar2;
  ushort uVar3;
  JointGroup<float> *pJVar4;
  undefined1 auStack_1a8 [32];
  _Value_init_tag local_188 [16];
  QuaternionJointsBuilder<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  local_178;
  JointBehaviorFilter local_128;
  QuaternionJointsEvaluator<float> *local_100;
  JointGroup<float> local_f8;
  undefined1 local_68 [56];
  longlong *local_30;
  QuaternionJointsEvaluator<float> *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_178._padding_ =
       (longlong)
       &
       ___7__QuaternionJointsBuilder_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3__rl4__6B_
  ;
  PVar1 = (PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>)
          ((longlong)this + 0x10);
  local_178.config._11_1_ = local_128.filters._Mypair._Myval1._3_1_;
  local_178.config.calculationType = SSE;
  local_178.config.loadJoints = true;
  local_178.config.loadBlendShapes = true;
  local_178.config.loadAnimatedMaps = true;
  local_178.config.loadMachineLearnedBehavior = true;
  local_178.config.loadRBFBehavior = true;
  local_178.config.loadTwistSwingBehavior = true;
  local_178.config.translationType = Vector;
  local_178.config.rotationType = Quaternions;
  local_178.config.rotationOrder = XYZ;
  local_178.config.scaleType = Vector;
  local_178.config.translationPruningThreshold = 0.0;
  local_178.config.rotationPruningThreshold = 0.0;
  local_178.config.scalePruningThreshold = 0.0;
  local_178.memRes = (MemoryResource *)PVar1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_178.jointGroups._Mypair._Myval2._Myfirst = (JointGroup<float> *)0x0;
  local_178.jointGroups._Mypair._Myval2._Mylast = (JointGroup<float> *)0x0;
  local_178.jointGroups._Mypair._Myval1 =
       (PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  if (PVar1 != (PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>)0x0) {
    local_178.jointGroups._Mypair._Myval1 = PVar1;
  }
  local_178.jointGroups._Mypair._Myval2._Myend = (JointGroup<float> *)0x0;
  local_178.rotationUnit = degrees;
  rl4::JointBehaviorFilter::JointBehaviorFilter
            (&local_128,(Reader *)((longlong)this + 0x18),(MemoryResource *)PVar1);
  rl4::JointBehaviorFilter::include(&local_128,Quaternion);
  pJVar4 = rl4::JointGroup<float>::JointGroup<float>(&local_f8,local_178.memRes);
  uVar3 = rl4::JointBehaviorFilter::getJointGroupCount(&local_128);
  std::
  vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>
  ::_Resize<rl4::JointGroup<float>_>(&local_178.jointGroups,(ulonglong)uVar3,pJVar4);
  rl4::JointGroup<float>::~JointGroup<float>(&local_f8);
  pJVar2 = local_178.jointGroups._Mypair._Myval2._Mylast;
  for (pJVar4 = local_178.jointGroups._Mypair._Myval2._Myfirst; pJVar4 != pJVar2;
      pJVar4 = pJVar4 + 1) {
    uVar3 = rl4::JointBehaviorFilter::getLODCount(&local_128);
    std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>::
    _Resize<std::_Value_init_tag>(&pJVar4->lods,(ulonglong)uVar3,local_188);
  }
  rl4::
  QuaternionJointsBuilder<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  ::fillStorage(&local_178,&local_128);
  rl4::
  QuaternionJointsBuilder<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>_>
  ::build(&local_178,
          (unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_> *)
          local_68);
  rl4::QuaternionJointsEvaluator<float>::Accessor::assertRawDataEqual(local_28,0);
  if (local_28 != (QuaternionJointsEvaluator<float> *)0x0) {
    local_100 = local_28;
    if (local_30 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*local_30 + 0x10))(local_30,&local_100);
  }
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x20))(local_30,local_30 != (longlong *)local_68);
    local_30 = (longlong *)0x0;
  }
  if (local_128.filters._Mypair._Myval2._Myfirst != (FilterType *)0x0) {
    (**(code **)(*(longlong *)
                  CONCAT44(local_128.filters._Mypair._Myval1._4_4_,
                           local_128.filters._Mypair._Myval1._0_4_) + 0x10))
              ((longlong *)
               CONCAT44(local_128.filters._Mypair._Myval1._4_4_,
                        local_128.filters._Mypair._Myval1._0_4_),
               local_128.filters._Mypair._Myval2._Myfirst,
               ((longlong)local_128.filters._Mypair._Myval2._Myend -
                (longlong)local_128.filters._Mypair._Myval2._Myfirst >> 1) * 2,8);
    local_128.filters._Mypair._Myval2._Myend = (FilterType *)0x0;
    local_128.filters._Mypair._Myval2._Myfirst = (FilterType *)0x0;
    local_128.filters._Mypair._Myval2._Mylast = (FilterType *)0x0;
  }
  pJVar2 = local_178.jointGroups._Mypair._Myval2._Mylast;
  pJVar4 = local_178.jointGroups._Mypair._Myval2._Myfirst;
  if (local_178.jointGroups._Mypair._Myval2._Myfirst != (JointGroup<float> *)0x0) {
    for (; pJVar4 != pJVar2; pJVar4 = pJVar4 + 1) {
      rl4::JointGroup<float>::~JointGroup<float>(pJVar4);
    }
    (**(code **)((longlong)*(MemoryResource *)local_178.jointGroups._Mypair._Myval1 + 0x10))
              (local_178.jointGroups._Mypair._Myval1,local_178.jointGroups._Mypair._Myval2._Myfirst,
               (((longlong)local_178.jointGroups._Mypair._Myval2._Myend -
                (longlong)local_178.jointGroups._Mypair._Myval2._Myfirst) / 0x88) * 0x88,8);
    local_178.jointGroups._Mypair._Myval2._Myend = (JointGroup<float> *)0x0;
    local_178.jointGroups._Mypair._Myval2._Myfirst = (JointGroup<float> *)0x0;
    local_178.jointGroups._Mypair._Myval2._Mylast = (JointGroup<float> *)0x0;
  }
  rl4::JointsBuilder::~JointsBuilder((JointsBuilder *)&local_178);
  return;
}

// buildStorage<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_> @ 14c573b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`anonymous_namespace'::
QuaternionJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
::
buildStorage<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>
          (void *this)

{
  PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource> PVar1;
  JointGroup<float> *pJVar2;
  ushort uVar3;
  JointGroup<float> *pJVar4;
  undefined1 auStack_1a8 [32];
  _Value_init_tag local_188 [16];
  QuaternionJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128> local_178;
  JointBehaviorFilter local_128;
  QuaternionJointsEvaluator<float> *local_100;
  JointGroup<float> local_f8;
  undefined1 local_68 [56];
  longlong *local_30;
  QuaternionJointsEvaluator<float> *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_178._padding_ =
       (longlong)
       &
       ___7__QuaternionJointsBuilder_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3__rl4__6B_
  ;
  PVar1 = (PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>)
          ((longlong)this + 0x10);
  local_178.config._11_1_ = local_128.filters._Mypair._Myval1._3_1_;
  local_178.config.calculationType = SSE;
  local_178.config.loadJoints = true;
  local_178.config.loadBlendShapes = true;
  local_178.config.loadAnimatedMaps = true;
  local_178.config.loadMachineLearnedBehavior = true;
  local_178.config.loadRBFBehavior = true;
  local_178.config.loadTwistSwingBehavior = true;
  local_178.config.translationType = Vector;
  local_178.config.rotationType = EulerAngles;
  local_178.config.rotationOrder = XYZ;
  local_178.config.scaleType = Vector;
  local_178.config.translationPruningThreshold = 0.0;
  local_178.config.rotationPruningThreshold = 0.0;
  local_178.config.scalePruningThreshold = 0.0;
  local_178.memRes = (MemoryResource *)PVar1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_178.jointGroups._Mypair._Myval2._Myfirst = (JointGroup<float> *)0x0;
  local_178.jointGroups._Mypair._Myval2._Mylast = (JointGroup<float> *)0x0;
  local_178.jointGroups._Mypair._Myval1 =
       (PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  if (PVar1 != (PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>)0x0) {
    local_178.jointGroups._Mypair._Myval1 = PVar1;
  }
  local_178.jointGroups._Mypair._Myval2._Myend = (JointGroup<float> *)0x0;
  local_178.rotationUnit = degrees;
  rl4::JointBehaviorFilter::JointBehaviorFilter
            (&local_128,(Reader *)((longlong)this + 0x18),(MemoryResource *)PVar1);
  rl4::JointBehaviorFilter::include(&local_128,Quaternion);
  pJVar4 = rl4::JointGroup<float>::JointGroup<float>(&local_f8,local_178.memRes);
  uVar3 = rl4::JointBehaviorFilter::getJointGroupCount(&local_128);
  std::
  vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>
  ::_Resize<rl4::JointGroup<float>_>(&local_178.jointGroups,(ulonglong)uVar3,pJVar4);
  rl4::JointGroup<float>::~JointGroup<float>(&local_f8);
  pJVar2 = local_178.jointGroups._Mypair._Myval2._Mylast;
  for (pJVar4 = local_178.jointGroups._Mypair._Myval2._Myfirst; pJVar4 != pJVar2;
      pJVar4 = pJVar4 + 1) {
    uVar3 = rl4::JointBehaviorFilter::getLODCount(&local_128);
    std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>::
    _Resize<std::_Value_init_tag>(&pJVar4->lods,(ulonglong)uVar3,local_188);
  }
  rl4::QuaternionJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::
  fillStorage(&local_178,&local_128);
  rl4::QuaternionJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::
  build(&local_178,
        (unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_> *)
        local_68);
  rl4::QuaternionJointsEvaluator<float>::Accessor::assertRawDataEqual(local_28,1);
  if (local_28 != (QuaternionJointsEvaluator<float> *)0x0) {
    local_100 = local_28;
    if (local_30 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*local_30 + 0x10))(local_30,&local_100);
  }
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x20))(local_30,local_30 != (longlong *)local_68);
    local_30 = (longlong *)0x0;
  }
  if (local_128.filters._Mypair._Myval2._Myfirst != (FilterType *)0x0) {
    (**(code **)(*(longlong *)
                  CONCAT44(local_128.filters._Mypair._Myval1._4_4_,
                           local_128.filters._Mypair._Myval1._0_4_) + 0x10))
              ((longlong *)
               CONCAT44(local_128.filters._Mypair._Myval1._4_4_,
                        local_128.filters._Mypair._Myval1._0_4_),
               local_128.filters._Mypair._Myval2._Myfirst,
               ((longlong)local_128.filters._Mypair._Myval2._Myend -
                (longlong)local_128.filters._Mypair._Myval2._Myfirst >> 1) * 2,8);
    local_128.filters._Mypair._Myval2._Myend = (FilterType *)0x0;
    local_128.filters._Mypair._Myval2._Myfirst = (FilterType *)0x0;
    local_128.filters._Mypair._Myval2._Mylast = (FilterType *)0x0;
  }
  pJVar2 = local_178.jointGroups._Mypair._Myval2._Mylast;
  pJVar4 = local_178.jointGroups._Mypair._Myval2._Myfirst;
  if (local_178.jointGroups._Mypair._Myval2._Myfirst != (JointGroup<float> *)0x0) {
    for (; pJVar4 != pJVar2; pJVar4 = pJVar4 + 1) {
      rl4::JointGroup<float>::~JointGroup<float>(pJVar4);
    }
    (**(code **)((longlong)*(MemoryResource *)local_178.jointGroups._Mypair._Myval1 + 0x10))
              (local_178.jointGroups._Mypair._Myval1,local_178.jointGroups._Mypair._Myval2._Myfirst,
               (((longlong)local_178.jointGroups._Mypair._Myval2._Myend -
                (longlong)local_178.jointGroups._Mypair._Myval2._Myfirst) / 0x88) * 0x88,8);
    local_178.jointGroups._Mypair._Myval2._Myend = (JointGroup<float> *)0x0;
    local_178.jointGroups._Mypair._Myval2._Myfirst = (JointGroup<float> *)0x0;
    local_178.jointGroups._Mypair._Myval2._Mylast = (JointGroup<float> *)0x0;
  }
  rl4::JointsBuilder::~JointsBuilder((JointsBuilder *)&local_178);
  return;
}

// buildStorage<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_> @ 14c573df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`anonymous_namespace'::
QuaternionJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
::
buildStorage<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>
          (void *this)

{
  PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource> PVar1;
  JointGroup<float> *pJVar2;
  ushort uVar3;
  JointGroup<float> *pJVar4;
  undefined1 auStack_1a8 [32];
  _Value_init_tag local_188 [16];
  QuaternionJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128> local_178;
  JointBehaviorFilter local_128;
  QuaternionJointsEvaluator<float> *local_100;
  JointGroup<float> local_f8;
  undefined1 local_68 [56];
  longlong *local_30;
  QuaternionJointsEvaluator<float> *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_178._padding_ =
       (longlong)
       &
       ___7__QuaternionJointsBuilder_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3__rl4__6B_
  ;
  PVar1 = (PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>)
          ((longlong)this + 0x10);
  local_178.config._11_1_ = local_128.filters._Mypair._Myval1._3_1_;
  local_178.config.calculationType = SSE;
  local_178.config.loadJoints = true;
  local_178.config.loadBlendShapes = true;
  local_178.config.loadAnimatedMaps = true;
  local_178.config.loadMachineLearnedBehavior = true;
  local_178.config.loadRBFBehavior = true;
  local_178.config.loadTwistSwingBehavior = true;
  local_178.config.translationType = Vector;
  local_178.config.rotationType = Quaternions;
  local_178.config.rotationOrder = XYZ;
  local_178.config.scaleType = Vector;
  local_178.config.translationPruningThreshold = 0.0;
  local_178.config.rotationPruningThreshold = 0.0;
  local_178.config.scalePruningThreshold = 0.0;
  local_178.memRes = (MemoryResource *)PVar1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::
           PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>'::__l2::
           _dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_178.jointGroups._Mypair._Myval2._Myfirst = (JointGroup<float> *)0x0;
  local_178.jointGroups._Mypair._Myval2._Mylast = (JointGroup<float> *)0x0;
  local_178.jointGroups._Mypair._Myval1 =
       (PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>)
       &`public:___cdecl_pma::impl::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::dmr;
  if (PVar1 != (PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>)0x0) {
    local_178.jointGroups._Mypair._Myval1 = PVar1;
  }
  local_178.jointGroups._Mypair._Myval2._Myend = (JointGroup<float> *)0x0;
  local_178.rotationUnit = degrees;
  rl4::JointBehaviorFilter::JointBehaviorFilter
            (&local_128,(Reader *)((longlong)this + 0x18),(MemoryResource *)PVar1);
  rl4::JointBehaviorFilter::include(&local_128,Quaternion);
  pJVar4 = rl4::JointGroup<float>::JointGroup<float>(&local_f8,local_178.memRes);
  uVar3 = rl4::JointBehaviorFilter::getJointGroupCount(&local_128);
  std::
  vector<rl4::JointGroup<float>,pma::PolyAllocator<rl4::JointGroup<float>,8,pma::DefaultMemoryResource>_>
  ::_Resize<rl4::JointGroup<float>_>(&local_178.jointGroups,(ulonglong)uVar3,pJVar4);
  rl4::JointGroup<float>::~JointGroup<float>(&local_f8);
  pJVar2 = local_178.jointGroups._Mypair._Myval2._Mylast;
  for (pJVar4 = local_178.jointGroups._Mypair._Myval2._Myfirst; pJVar4 != pJVar2;
      pJVar4 = pJVar4 + 1) {
    uVar3 = rl4::JointBehaviorFilter::getLODCount(&local_128);
    std::vector<rl4::LODRegion,pma::PolyAllocator<rl4::LODRegion,8,pma::DefaultMemoryResource>_>::
    _Resize<std::_Value_init_tag>(&pJVar4->lods,(ulonglong)uVar3,local_188);
  }
  rl4::QuaternionJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::
  fillStorage(&local_178,&local_128);
  rl4::QuaternionJointsBuilder<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128>::
  build(&local_178,
        (unique_ptr<rl4::JointsEvaluator,std::function<void___cdecl(rl4::JointsEvaluator_*)>_> *)
        local_68);
  rl4::QuaternionJointsEvaluator<float>::Accessor::assertRawDataEqual(local_28,0);
  if (local_28 != (QuaternionJointsEvaluator<float> *)0x0) {
    local_100 = local_28;
    if (local_30 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*local_30 + 0x10))(local_30,&local_100);
  }
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x20))(local_30,local_30 != (longlong *)local_68);
    local_30 = (longlong *)0x0;
  }
  if (local_128.filters._Mypair._Myval2._Myfirst != (FilterType *)0x0) {
    (**(code **)(*(longlong *)
                  CONCAT44(local_128.filters._Mypair._Myval1._4_4_,
                           local_128.filters._Mypair._Myval1._0_4_) + 0x10))
              ((longlong *)
               CONCAT44(local_128.filters._Mypair._Myval1._4_4_,
                        local_128.filters._Mypair._Myval1._0_4_),
               local_128.filters._Mypair._Myval2._Myfirst,
               ((longlong)local_128.filters._Mypair._Myval2._Myend -
                (longlong)local_128.filters._Mypair._Myval2._Myfirst >> 1) * 2,8);
    local_128.filters._Mypair._Myval2._Myend = (FilterType *)0x0;
    local_128.filters._Mypair._Myval2._Myfirst = (FilterType *)0x0;
    local_128.filters._Mypair._Myval2._Mylast = (FilterType *)0x0;
  }
  pJVar2 = local_178.jointGroups._Mypair._Myval2._Mylast;
  pJVar4 = local_178.jointGroups._Mypair._Myval2._Myfirst;
  if (local_178.jointGroups._Mypair._Myval2._Myfirst != (JointGroup<float> *)0x0) {
    for (; pJVar4 != pJVar2; pJVar4 = pJVar4 + 1) {
      rl4::JointGroup<float>::~JointGroup<float>(pJVar4);
    }
    (**(code **)((longlong)*(MemoryResource *)local_178.jointGroups._Mypair._Myval1 + 0x10))
              (local_178.jointGroups._Mypair._Myval1,local_178.jointGroups._Mypair._Myval2._Myfirst,
               (((longlong)local_178.jointGroups._Mypair._Myval2._Myend -
                (longlong)local_178.jointGroups._Mypair._Myval2._Myfirst) / 0x88) * 0x88,8);
    local_178.jointGroups._Mypair._Myval2._Myend = (JointGroup<float> *)0x0;
    local_178.jointGroups._Mypair._Myval2._Myfirst = (JointGroup<float> *)0x0;
    local_178.jointGroups._Mypair._Myval2._Mylast = (JointGroup<float> *)0x0;
  }
  rl4::JointsBuilder::~JointsBuilder((JointsBuilder *)&local_178);
  return;
}

// GetSetUpCaseOrSuite @ 14c5740e0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
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

// GetSetUpCaseOrSuite @ 14c574180

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
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

// GetSetUpCaseOrSuite @ 14c574220

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
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

// GetSetUpCaseOrSuite @ 14c5742c0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
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

// GetTearDownCaseOrSuite @ 14c574360

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
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

// GetTearDownCaseOrSuite @ 14c574400

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
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

// GetTearDownCaseOrSuite @ 14c5744a0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
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

// GetTearDownCaseOrSuite @ 14c574540

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
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

// Register @ 14c5745e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::QuaternionJointStorageBuilderTest,testing::internal::TemplateSel<QuaternionJointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types1<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
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
              ___7__TestFactoryImpl_V__QuaternionJointStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___std_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
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
             &TypeIdHelper<QuaternionJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
              ::dummy_,(_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c574a72;
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
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c574a72;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c574a72;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c574a72;
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
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c574a72;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c574a72;
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
LAB_14c574a72:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c574ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::QuaternionJointStorageBuilderTest,testing::internal::TemplateSel<QuaternionJointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
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
              ___7__TestFactoryImpl_V__QuaternionJointStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T256_U__T128_M_scalar_trimd___fallback_trimd__U__T128_M_scalar_3_UPassthroughAdapter_rl4___std_____internal_testing__6B_
    ;
  }
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar16,param_2->line);
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var10 = SuiteApiResolver<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
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
             &TypeIdHelper<QuaternionJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>_>_>
              ::dummy_,(_func_void *)p_Var10,(_func_void *)p_Var9,pTVar8);
  if (0xf < uStack_130) {
    uVar20 = uStack_130 + 1;
    pppppppcVar17 = local_148;
    if (0xfff < uVar20) {
      pppppppcVar17 = (char *******)local_148[-1];
      uVar20 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar17)))
      goto LAB_14c574f5f;
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
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar18)) goto LAB_14c574f5f;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c574f5f;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c574f5f;
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
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar18)) goto LAB_14c574f5f;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c574f5f;
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
LAB_14c574f5f:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar19,uVar20);
  }
  bVar7 = TypeParameterizedTest<`anonymous_namespace'::QuaternionJointStorageBuilderTest,testing::internal::TemplateSel<QuaternionJointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types1<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
          ::Register(param_1,param_2,param_3,param_4,param_5 + 1,param_6);
  return bVar7;
}

// Register @ 14c574fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::QuaternionJointStorageBuilderTest,testing::internal::TemplateSel<QuaternionJointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types3<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
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
              ___7__TestFactoryImpl_V__QuaternionJointStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_U__QuaternionsToEulerAngles_U__ang_MUradians_impl_tdm___tdm___0A__rl4___std_____internal_testing__6B_
    ;
  }
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar16,param_2->line);
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var10 = SuiteApiResolver<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
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
             &TypeIdHelper<QuaternionJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
              ::dummy_,(_func_void *)p_Var10,(_func_void *)p_Var9,pTVar8);
  if (0xf < uStack_130) {
    uVar20 = uStack_130 + 1;
    pppppppcVar17 = local_148;
    if (0xfff < uVar20) {
      pppppppcVar17 = (char *******)local_148[-1];
      uVar20 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar17)))
      goto LAB_14c57546f;
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
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar18)) goto LAB_14c57546f;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c57546f;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c57546f;
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
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar18)) goto LAB_14c57546f;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c57546f;
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
LAB_14c57546f:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar19,uVar20);
  }
  bVar7 = TypeParameterizedTest<`anonymous_namespace'::QuaternionJointStorageBuilderTest,testing::internal::TemplateSel<QuaternionJointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types2<std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
          ::Register(param_1,param_2,param_3,param_4,param_5 + 1,param_6);
  return bVar7;
}

// Register @ 14c5754e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::QuaternionJointStorageBuilderTest,testing::internal::TemplateSel<QuaternionJointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types4<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
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
              ___7__TestFactoryImpl_V__QuaternionJointStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T256_UF128_sse_trimd___fallback_trimd__UF128_sse_3_UPassthroughAdapter_rl4___std_____internal_testing__6B_
    ;
  }
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar16,param_2->line);
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var10 = SuiteApiResolver<QuaternionJointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
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
             &TypeIdHelper<QuaternionJointStorageBuilderTest<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::PassthroughAdapter>_>_>
              ::dummy_,(_func_void *)p_Var10,(_func_void *)p_Var9,pTVar8);
  if (0xf < uStack_130) {
    uVar20 = uStack_130 + 1;
    pppppppcVar17 = local_148;
    if (0xfff < uVar20) {
      pppppppcVar17 = (char *******)local_148[-1];
      uVar20 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar17)))
      goto LAB_14c57597f;
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
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar18)) goto LAB_14c57597f;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c57597f;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c57597f;
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
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar18)) goto LAB_14c57597f;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c57597f;
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
LAB_14c57597f:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar19,uVar20);
  }
  bVar7 = TypeParameterizedTest<`anonymous_namespace'::QuaternionJointStorageBuilderTest,testing::internal::TemplateSel<QuaternionJointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types3<std::tuple<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::PassthroughAdapter>,std::tuple<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::radians>,0>_>_>_>
          ::Register(param_1,param_2,param_3,param_4,param_5 + 1,param_6);
  return bVar7;
}

// assertRawDataEqual @ 14c5759f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
rl4::QuaternionJointsEvaluator<float>::Accessor::assertRawDataEqual
          (QuaternionJointsEvaluator<float> *param_1,ulong64 param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  double dVar6;
  ulong64 uVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar9;
  Message *pMVar10;
  AssertHelper *pAVar11;
  longlong lVar12;
  vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_> *pvVar13;
  longlong lVar14;
  void *pvVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  char *pcVar18;
  ulong64 uVar19;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar20;
  ulonglong uVar21;
  JointGroup<float> *pJVar22;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar23;
  uint *puVar24;
  uint *puVar25;
  undefined1 auStackY_198 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_158;
  AssertHelper local_150;
  ulong64 local_148;
  ulong64 local_140;
  AssertionResult local_138;
  ulonglong local_128;
  AssertionResult local_120;
  AssertionResult local_110;
  AssertionResult local_100;
  AssertionResult local_f0;
  AssertionResult local_e0;
  AssertionResult local_d0;
  AssertionResult local_c0;
  JointGroup<float> *local_b0;
  _Bxty local_a8;
  undefined8 local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  ulonglong local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_140 = (longlong)rltests::qs::unoptimized::subMatrices._Mypair._Myval2._Mylast -
              (longlong)rltests::qs::unoptimized::subMatrices._Mypair._Myval2._Myfirst >> 3;
  local_148 = ((longlong)(param_1->jointGroups)._Mypair._Myval2._Mylast -
              (longlong)(param_1->jointGroups)._Mypair._Myval2._Myfirst) / 0x88;
  local_150.data_ = (AssertHelperData *)param_1;
  testing::internal::EqHelper::Compare<unsigned___int64,unsigned___int64,0>
            (&local_138,"result.jointGroups.size()","rltests::qs::unoptimized::subMatrices.size()",
             &local_148,&local_140);
  uVar20._Mypair._Myval2 = local_138.message_._Mypair._Myval2;
  if (local_138.success_ == false) {
    pMVar10 = (Message *)testing::Message::Message((Message *)&local_158);
    if (local_138.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar18 = "";
    }
    else {
      pcVar18 = (char *)local_138.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_138.message_._Mypair._Myval2 + 0x18)) {
        pcVar18 = *(char **)local_138.message_._Mypair._Myval2;
      }
    }
    pAVar11 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_150,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\quaternions\\TestQuaternionStorageBuilder.cpp"
                         ,0x19,pcVar18);
    testing::internal::AssertHelper::operator=(pAVar11,pMVar10);
    testing::internal::AssertHelper::~AssertHelper(&local_150);
    if (local_158._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar17 = (undefined8 *)
                ((longlong)local_158._Mypair._Myval2 +
                (longlong)*(int *)(*(longlong *)local_158._Mypair._Myval2 + 4));
      (**(code **)*puVar17)(puVar17,1);
    }
    if (local_138.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_138.message_._Mypair._Myval2);
      ::operator_delete((void *)local_138.message_._Mypair._Myval2,0x20);
    }
  }
  else {
    if (local_138.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_138.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar20._Mypair._Myval2,0x20);
    }
    dVar6 = __real_3f2a36e2e0000000;
    uVar5 = _UNK_15076add8;
    uVar4 = ___xmm_000000000000000f0000000000000000;
    pJVar22 = (param_1->jointGroups)._Mypair._Myval2._Myfirst;
    lVar12 = (longlong)(param_1->jointGroups)._Mypair._Myval2._Mylast - (longlong)pJVar22;
    uVar23._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )(rltests::qs::optimized::outputIndices._Mypair._Myval2._Myfirst + param_2);
    lVar14 = lVar12 >> 0x3f;
    local_140 = 0;
    local_158._Mypair._Myval2 = uVar23._Mypair._Myval2;
    if (lVar12 / 0x88 + lVar14 != lVar14) {
      do {
        uVar7 = local_140;
        uVar21 = 0;
        pJVar22 = pJVar22 + local_140;
        local_b0 = pJVar22;
        if ((longlong)
            rltests::qs::optimized::floatValues._Mypair._Myval2._Myfirst[local_140]._Mypair._Myval2.
            _Mylast - (longlong)
                      rltests::qs::optimized::floatValues._Mypair._Myval2._Myfirst[local_140].
                      _Mypair._Myval2._Myfirst >> 2 != 0) {
          do {
            testing::internal::DoubleNearPredFormat
                      (&local_138,"jointGroup.values[i]","values[jgi][i]","0.0002f",
                       (double)(pJVar22->values)._Mypair._Myval2._Myfirst[uVar21],
                       (double)rltests::qs::optimized::floatValues._Mypair._Myval2._Myfirst[uVar7].
                               _Mypair._Myval2._Myfirst[uVar21],dVar6);
            uVar20._Mypair._Myval2 = local_138.message_._Mypair._Myval2;
            if (local_138.success_ == false) {
              pMVar10 = (Message *)testing::Message::Message((Message *)&local_158);
              if (local_138.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar18 = "";
              }
              else {
                pcVar18 = (char *)local_138.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_138.message_._Mypair._Myval2 + 0x18)) {
                  pcVar18 = *(char **)local_138.message_._Mypair._Myval2;
                }
              }
              pAVar11 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_150,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\quaternions\\TestQuaternionStorageBuilder.cpp"
                                   ,0x20,pcVar18);
              testing::internal::AssertHelper::operator=(pAVar11,pMVar10);
              testing::internal::AssertHelper::~AssertHelper(&local_150);
              uVar20._Mypair._Myval2 = local_138.message_._Mypair._Myval2;
              if (local_158._Mypair._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar17 = (undefined8 *)
                          ((longlong)local_158._Mypair._Myval2 +
                          (longlong)*(int *)(*(longlong *)local_158._Mypair._Myval2 + 4));
                (**(code **)*puVar17)(puVar17,1);
                uVar20._Mypair._Myval2 = local_138.message_._Mypair._Myval2;
              }
              goto LAB_14c576a25;
            }
            if (local_138.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_138.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar20._Mypair._Myval2,0x20);
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 < (ulonglong)
                            ((longlong)
                             rltests::qs::optimized::floatValues._Mypair._Myval2._Myfirst[uVar7].
                             _Mypair._Myval2._Mylast -
                             (longlong)
                             rltests::qs::optimized::floatValues._Mypair._Myval2._Myfirst[uVar7].
                             _Mypair._Myval2._Myfirst >> 2));
        }
        uVar21 = 0;
        if ((longlong)
            rltests::qs::optimized::inputIndices._Mypair._Myval2._Myfirst[uVar7]._Mypair._Myval2.
            _Mylast - (longlong)
                      rltests::qs::optimized::inputIndices._Mypair._Myval2._Myfirst[uVar7]._Mypair.
                      _Myval2._Myfirst >> 1 != 0) {
          do {
            puVar1 = rltests::qs::optimized::inputIndices._Mypair._Myval2._Myfirst[uVar7]._Mypair.
                     _Myval2._Myfirst + uVar21;
            puVar2 = (pJVar22->inputIndices)._Mypair._Myval2._Myfirst + uVar21;
            if (*puVar2 == *puVar1) {
              testing::AssertionSuccess(&local_120);
            }
            else {
              pbVar8 = testing::internal::
                       FormatForComparisonFailureMessage<unsigned_short,unsigned_short>
                                 ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )&local_88,puVar1,puVar2);
              pbVar9 = testing::internal::
                       FormatForComparisonFailureMessage<unsigned_short,unsigned_short>
                                 ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )&local_a8,puVar2,puVar1);
              testing::internal::EqFailure
                        (&local_120,"jointGroup.inputIndices[i]","inputIndices[jgi][i]",pbVar9,
                         pbVar8,false);
              if (0xf < uStack_90) {
                pvVar3 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
                uVar19 = uStack_90 + 1;
                pvVar15 = pvVar3;
                if (0xfff < uVar19) {
                  pvVar15 = *(void **)((longlong)pvVar3 + -8);
                  uVar19 = uStack_90 + 0x28;
                  if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar15)))
                  goto LAB_14c5765ca;
                }
                ::operator_delete(pvVar15,uVar19);
              }
              local_a8._Buf[0] = '\0';
              local_98 = uVar4;
              uStack_90 = uVar5;
              if (0xf < local_70) {
                uVar19 = local_70 + 1;
                uVar16 = local_88._Ptr;
                if (0xfff < uVar19) {
                  uVar16 = *(undefined8 *)(local_88._Ptr + -8);
                  uVar19 = local_70 + 0x28;
                  if ((char *)0x1f < local_88._Ptr + (-8 - uVar16)) {
LAB_14c5765ca:
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                ::operator_delete((void *)uVar16,uVar19);
              }
            }
            uVar20._Mypair._Myval2 = local_120.message_._Mypair._Myval2;
            if (local_120.success_ == false) {
              pMVar10 = (Message *)testing::Message::Message((Message *)&local_158);
              if (local_120.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar18 = "";
              }
              else {
                pcVar18 = (char *)local_120.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_120.message_._Mypair._Myval2 + 0x18)) {
                  pcVar18 = *(char **)local_120.message_._Mypair._Myval2;
                }
              }
              pAVar11 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_150,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\quaternions\\TestQuaternionStorageBuilder.cpp"
                                   ,0x21,pcVar18);
              testing::internal::AssertHelper::operator=(pAVar11,pMVar10);
              testing::internal::AssertHelper::~AssertHelper(&local_150);
              uVar20._Mypair._Myval2 = local_120.message_._Mypair._Myval2;
              if (local_158._Mypair._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar17 = (undefined8 *)
                          ((longlong)local_158._Mypair._Myval2 +
                          (longlong)*(int *)(*(longlong *)local_158._Mypair._Myval2 + 4));
                (**(code **)*puVar17)(puVar17,1);
                uVar20._Mypair._Myval2 = local_120.message_._Mypair._Myval2;
              }
              goto LAB_14c576a25;
            }
            if (local_120.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_120.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar20._Mypair._Myval2,0x20);
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 < (ulonglong)
                            ((longlong)
                             rltests::qs::optimized::inputIndices._Mypair._Myval2._Myfirst[uVar7].
                             _Mypair._Myval2._Mylast -
                             (longlong)
                             rltests::qs::optimized::inputIndices._Mypair._Myval2._Myfirst[uVar7].
                             _Mypair._Myval2._Myfirst >> 1));
        }
        pvVar13 = ((_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>_>
                    *)&((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                       uVar23._Mypair._Myval2)->field_0x8)->_Myfirst;
        uVar21 = 0;
        if ((longlong)pvVar13[uVar7]._Mypair._Myval2._Mylast -
            (longlong)pvVar13[uVar7]._Mypair._Myval2._Myfirst >> 1 != 0) {
          do {
            puVar1 = pvVar13[uVar7]._Mypair._Myval2._Myfirst + uVar21;
            puVar2 = (pJVar22->outputIndices)._Mypair._Myval2._Myfirst + uVar21;
            if (*puVar2 == *puVar1) {
              testing::AssertionSuccess(&local_110);
            }
            else {
              pbVar8 = testing::internal::
                       FormatForComparisonFailureMessage<unsigned_short,unsigned_short>
                                 ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )&local_88,puVar1,puVar2);
              pbVar9 = testing::internal::
                       FormatForComparisonFailureMessage<unsigned_short,unsigned_short>
                                 ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )&local_a8,puVar2,puVar1);
              testing::internal::EqFailure
                        (&local_110,"jointGroup.outputIndices[i]","outputIndices[jgi][i]",pbVar9,
                         pbVar8,false);
              if (0xf < uStack_90) {
                pvVar3 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
                uVar19 = uStack_90 + 1;
                pvVar15 = pvVar3;
                if (0xfff < uVar19) {
                  pvVar15 = *(void **)((longlong)pvVar3 + -8);
                  uVar19 = uStack_90 + 0x28;
                  if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar15)))
                  goto LAB_14c57666a;
                }
                ::operator_delete(pvVar15,uVar19);
              }
              local_a8._Buf[0] = '\0';
              local_98 = uVar4;
              uStack_90 = uVar5;
              if (0xf < local_70) {
                uVar19 = local_70 + 1;
                uVar16 = local_88._Ptr;
                if (0xfff < uVar19) {
                  uVar16 = *(undefined8 *)(local_88._Ptr + -8);
                  uVar19 = local_70 + 0x28;
                  if ((char *)0x1f < local_88._Ptr + (-8 - uVar16)) {
LAB_14c57666a:
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                ::operator_delete((void *)uVar16,uVar19);
              }
            }
            uVar20._Mypair._Myval2 = local_110.message_._Mypair._Myval2;
            if (local_110.success_ == false) {
              pMVar10 = (Message *)testing::Message::Message((Message *)&local_158);
              if (local_110.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar18 = "";
              }
              else {
                pcVar18 = (char *)local_110.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_110.message_._Mypair._Myval2 + 0x18)) {
                  pcVar18 = *(char **)local_110.message_._Mypair._Myval2;
                }
              }
              pAVar11 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_150,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\quaternions\\TestQuaternionStorageBuilder.cpp"
                                   ,0x22,pcVar18);
              testing::internal::AssertHelper::operator=(pAVar11,pMVar10);
              testing::internal::AssertHelper::~AssertHelper(&local_150);
              uVar20._Mypair._Myval2 = local_110.message_._Mypair._Myval2;
              if (local_158._Mypair._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar17 = (undefined8 *)
                          ((longlong)local_158._Mypair._Myval2 +
                          (longlong)*(int *)(*(longlong *)local_158._Mypair._Myval2 + 4));
                (**(code **)*puVar17)(puVar17,1);
                uVar20._Mypair._Myval2 = local_110.message_._Mypair._Myval2;
              }
              goto LAB_14c576a25;
            }
            if (local_110.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_110.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar20._Mypair._Myval2,0x20);
            }
            pvVar13 = ((_Vector_val<std::_Simple_types<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>_>
                        *)&((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *
                            )uVar23._Mypair._Myval2)->field_0x8)->_Myfirst;
            uVar21 = uVar21 + 1;
          } while (uVar21 < (ulonglong)
                            ((longlong)pvVar13[uVar7]._Mypair._Myval2._Mylast -
                             (longlong)pvVar13[uVar7]._Mypair._Myval2._Myfirst >> 1));
        }
        lVar14 = (longlong)
                 rltests::qs::optimized::lodRegions._Mypair._Myval2._Myfirst[uVar7]._Mypair._Myval2.
                 _Mylast - (longlong)
                           rltests::qs::optimized::lodRegions._Mypair._Myval2._Myfirst[uVar7].
                           _Mypair._Myval2._Myfirst;
        lVar14 = lVar14 / 6 + (lVar14 >> 0x3f);
        local_128 = (lVar14 >> 2) - (lVar14 >> 0x3f);
        local_148 = ((longlong)(pJVar22->lods)._Mypair._Myval2._Mylast -
                    (longlong)(pJVar22->lods)._Mypair._Myval2._Myfirst) / 0x18;
        if (local_148 == local_128) {
          testing::AssertionSuccess(&local_c0);
        }
        else {
          pbVar8 = testing::internal::
                   FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_88,&local_128,&local_148);
          pbVar9 = testing::internal::
                   FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_a8,&local_148,&local_128);
          testing::internal::EqFailure
                    (&local_c0,"jointGroup.lods.size()","lods[jgi].size()",pbVar9,pbVar8,false);
          if (0xf < uStack_90) {
            pvVar3 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
            uVar19 = uStack_90 + 1;
            pvVar15 = pvVar3;
            if (0xfff < uVar19) {
              pvVar15 = *(void **)((longlong)pvVar3 + -8);
              uVar19 = uStack_90 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar15)))
              goto LAB_14c57670a;
            }
            ::operator_delete(pvVar15,uVar19);
          }
          local_a8._Buf[0] = '\0';
          local_98 = uVar4;
          uStack_90 = uVar5;
          if (0xf < local_70) {
            uVar19 = local_70 + 1;
            uVar16 = local_88._Ptr;
            if (0xfff < uVar19) {
              uVar16 = *(undefined8 *)(local_88._Ptr + -8);
              uVar19 = local_70 + 0x28;
              if ((char *)0x1f < local_88._Ptr + (-8 - uVar16)) {
LAB_14c57670a:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar16,uVar19);
          }
        }
        uVar20._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
        if (local_c0.success_ == false) {
          pMVar10 = (Message *)testing::Message::Message((Message *)&local_158);
          if (local_c0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar18 = "";
          }
          else {
            pcVar18 = (char *)local_c0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_c0.message_._Mypair._Myval2 + 0x18)) {
              pcVar18 = *(char **)local_c0.message_._Mypair._Myval2;
            }
          }
          pAVar11 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_150,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\quaternions\\TestQuaternionStorageBuilder.cpp"
                               ,0x23,pcVar18);
          testing::internal::AssertHelper::operator=(pAVar11,pMVar10);
          testing::internal::AssertHelper::~AssertHelper(&local_150);
          uVar20._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
          if (local_158._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar17 = (undefined8 *)
                      ((longlong)local_158._Mypair._Myval2 +
                      (longlong)*(int *)(*(longlong *)local_158._Mypair._Myval2 + 4));
            (**(code **)*puVar17)(puVar17,1);
            uVar20._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
          }
LAB_14c576a25:
          if (uVar20._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            return;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     uVar20._Mypair._Myval2);
          ::operator_delete((void *)uVar20._Mypair._Myval2,0x20);
          return;
        }
        if (local_c0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_c0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar20._Mypair._Myval2,0x20);
        }
        local_148 = 0;
        lVar12 = (longlong)
                 rltests::qs::optimized::lodRegions._Mypair._Myval2._Myfirst[uVar7]._Mypair._Myval2.
                 _Mylast - (longlong)
                           rltests::qs::optimized::lodRegions._Mypair._Myval2._Myfirst[uVar7].
                           _Mypair._Myval2._Myfirst;
        lVar14 = lVar12 >> 0x3f;
        if (lVar12 / 0x18 + lVar14 != lVar14) {
          lVar14 = 0;
          do {
            puVar24 = (uint *)((longlong)
                               &(((pJVar22->lods)._Mypair._Myval2._Myfirst)->inputLODs).size +
                              lVar14);
            puVar25 = (uint *)((longlong)
                               &((rltests::qs::optimized::lodRegions._Mypair._Myval2._Myfirst[uVar7]
                                  ._Mypair._Myval2._Myfirst)->inputLODs).size + lVar14);
            if (*puVar24 == *puVar25) {
              testing::AssertionSuccess(&local_d0);
            }
            else {
              pbVar8 = testing::internal::
                       FormatForComparisonFailureMessage<unsigned_int,unsigned_int>
                                 ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )&local_88,puVar25,puVar24);
              pbVar9 = testing::internal::
                       FormatForComparisonFailureMessage<unsigned_int,unsigned_int>
                                 ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )&local_a8,puVar24,puVar25);
              testing::internal::EqFailure
                        (&local_d0,"resultLOD.inputLODs.size","expectedLOD.inputLODs.size",pbVar9,
                         pbVar8,false);
              if (0xf < uStack_90) {
                pvVar3 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
                uVar19 = uStack_90 + 1;
                pvVar15 = pvVar3;
                if (0xfff < uVar19) {
                  pvVar15 = *(void **)((longlong)pvVar3 + -8);
                  uVar19 = uStack_90 + 0x28;
                  if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar15)))
                  goto LAB_14c576724;
                }
                ::operator_delete(pvVar15,uVar19);
              }
              local_a8._Buf[0] = '\0';
              local_98 = uVar4;
              uStack_90 = uVar5;
              if (0xf < local_70) {
                uVar19 = local_70 + 1;
                uVar16 = local_88._Ptr;
                if (0xfff < uVar19) {
                  uVar16 = *(undefined8 *)(local_88._Ptr + -8);
                  uVar19 = local_70 + 0x28;
                  if ((char *)0x1f < local_88._Ptr + (-8 - uVar16)) {
LAB_14c576724:
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                ::operator_delete((void *)uVar16,uVar19);
              }
            }
            uVar20._Mypair._Myval2 = local_d0.message_._Mypair._Myval2;
            if (local_d0.success_ == false) {
              pMVar10 = (Message *)testing::Message::Message((Message *)&local_158);
              if (local_d0.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar18 = "";
              }
              else {
                pcVar18 = (char *)local_d0.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_d0.message_._Mypair._Myval2 + 0x18)) {
                  pcVar18 = *(char **)local_d0.message_._Mypair._Myval2;
                }
              }
              pAVar11 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_150,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\quaternions\\TestQuaternionStorageBuilder.cpp"
                                   ,0x27,pcVar18);
              testing::internal::AssertHelper::operator=(pAVar11,pMVar10);
              testing::internal::AssertHelper::~AssertHelper(&local_150);
              uVar20._Mypair._Myval2 = local_d0.message_._Mypair._Myval2;
              if (local_158._Mypair._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar17 = (undefined8 *)
                          ((longlong)local_158._Mypair._Myval2 +
                          (longlong)*(int *)(*(longlong *)local_158._Mypair._Myval2 + 4));
                (**(code **)*puVar17)(puVar17,1);
                uVar20._Mypair._Myval2 = local_d0.message_._Mypair._Myval2;
              }
              goto LAB_14c576a25;
            }
            if (local_d0.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_d0.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar20._Mypair._Myval2,0x20);
            }
            if (puVar24[3] == puVar25[3]) {
              testing::AssertionSuccess(&local_e0);
            }
            else {
              pbVar8 = testing::internal::
                       FormatForComparisonFailureMessage<unsigned_int,unsigned_int>
                                 ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )&local_88,puVar25 + 3,puVar24 + 3);
              pbVar9 = testing::internal::
                       FormatForComparisonFailureMessage<unsigned_int,unsigned_int>
                                 ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )&local_a8,puVar24 + 3,puVar25 + 3);
              testing::internal::EqFailure
                        (&local_e0,"resultLOD.outputLODs.size","expectedLOD.outputLODs.size",pbVar9,
                         pbVar8,false);
              if (0xf < uStack_90) {
                pvVar3 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
                uVar19 = uStack_90 + 1;
                pvVar15 = pvVar3;
                if (0xfff < uVar19) {
                  pvVar15 = *(void **)((longlong)pvVar3 + -8);
                  uVar19 = uStack_90 + 0x28;
                  if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar15)))
                  goto LAB_14c57673e;
                }
                ::operator_delete(pvVar15,uVar19);
              }
              local_a8._Buf[0] = '\0';
              local_98 = uVar4;
              uStack_90 = uVar5;
              if (0xf < local_70) {
                uVar19 = local_70 + 1;
                uVar16 = local_88._Ptr;
                if (0xfff < uVar19) {
                  uVar16 = *(undefined8 *)(local_88._Ptr + -8);
                  uVar19 = local_70 + 0x28;
                  if ((char *)0x1f < local_88._Ptr + (-8 - uVar16)) {
LAB_14c57673e:
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                ::operator_delete((void *)uVar16,uVar19);
              }
            }
            uVar20._Mypair._Myval2 = local_e0.message_._Mypair._Myval2;
            if (local_e0.success_ == false) {
              pMVar10 = (Message *)testing::Message::Message((Message *)&local_158);
              if (local_e0.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar18 = "";
              }
              else {
                pcVar18 = (char *)local_e0.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_e0.message_._Mypair._Myval2 + 0x18)) {
                  pcVar18 = *(char **)local_e0.message_._Mypair._Myval2;
                }
              }
              pAVar11 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_150,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\quaternions\\TestQuaternionStorageBuilder.cpp"
                                   ,0x28,pcVar18);
              testing::internal::AssertHelper::operator=(pAVar11,pMVar10);
              testing::internal::AssertHelper::~AssertHelper(&local_150);
              uVar20._Mypair._Myval2 = local_e0.message_._Mypair._Myval2;
              if (local_158._Mypair._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar17 = (undefined8 *)
                          ((longlong)local_158._Mypair._Myval2 +
                          (longlong)*(int *)(*(longlong *)local_158._Mypair._Myval2 + 4));
                (**(code **)*puVar17)(puVar17,1);
                uVar20._Mypair._Myval2 = local_e0.message_._Mypair._Myval2;
              }
              goto LAB_14c576a25;
            }
            if (local_e0.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_e0.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar20._Mypair._Myval2,0x20);
            }
            if (puVar24[4] == puVar25[4]) {
              testing::AssertionSuccess(&local_f0);
            }
            else {
              pbVar8 = testing::internal::
                       FormatForComparisonFailureMessage<unsigned_int,unsigned_int>
                                 ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )&local_88,puVar25 + 4,puVar24 + 4);
              pbVar9 = testing::internal::
                       FormatForComparisonFailureMessage<unsigned_int,unsigned_int>
                                 ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )&local_a8,puVar24 + 4,puVar25 + 4);
              testing::internal::EqFailure
                        (&local_f0,"resultLOD.outputLODs.sizePaddedToLastFullBlock",
                         "expectedLOD.outputLODs.sizePaddedToLastFullBlock",pbVar9,pbVar8,false);
              if (0xf < uStack_90) {
                pvVar3 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
                uVar19 = uStack_90 + 1;
                pvVar15 = pvVar3;
                if (0xfff < uVar19) {
                  pvVar15 = *(void **)((longlong)pvVar3 + -8);
                  uVar19 = uStack_90 + 0x28;
                  if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar15)))
                  goto LAB_14c576758;
                }
                ::operator_delete(pvVar15,uVar19);
              }
              local_a8._Buf[0] = '\0';
              local_98 = uVar4;
              uStack_90 = uVar5;
              if (0xf < local_70) {
                uVar19 = local_70 + 1;
                uVar16 = local_88._Ptr;
                if (0xfff < uVar19) {
                  uVar16 = *(undefined8 *)(local_88._Ptr + -8);
                  uVar19 = local_70 + 0x28;
                  if ((char *)0x1f < local_88._Ptr + (-8 - uVar16)) {
LAB_14c576758:
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                ::operator_delete((void *)uVar16,uVar19);
              }
            }
            uVar20._Mypair._Myval2 = local_f0.message_._Mypair._Myval2;
            if (local_f0.success_ == false) {
              pMVar10 = (Message *)testing::Message::Message((Message *)&local_158);
              if (local_f0.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar18 = "";
              }
              else {
                pcVar18 = (char *)local_f0.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_f0.message_._Mypair._Myval2 + 0x18)) {
                  pcVar18 = *(char **)local_f0.message_._Mypair._Myval2;
                }
              }
              pAVar11 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_150,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\quaternions\\TestQuaternionStorageBuilder.cpp"
                                   ,0x29,pcVar18);
              testing::internal::AssertHelper::operator=(pAVar11,pMVar10);
              testing::internal::AssertHelper::~AssertHelper(&local_150);
              uVar20._Mypair._Myval2 = local_f0.message_._Mypair._Myval2;
              if (local_158._Mypair._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar17 = (undefined8 *)
                          ((longlong)local_158._Mypair._Myval2 +
                          (longlong)*(int *)(*(longlong *)local_158._Mypair._Myval2 + 4));
                (**(code **)*puVar17)(puVar17,1);
                uVar20._Mypair._Myval2 = local_f0.message_._Mypair._Myval2;
              }
              goto LAB_14c576a25;
            }
            if (local_f0.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_f0.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar20._Mypair._Myval2,0x20);
            }
            if (puVar24[5] == puVar25[5]) {
              testing::AssertionSuccess(&local_100);
            }
            else {
              pbVar8 = testing::internal::
                       FormatForComparisonFailureMessage<unsigned_int,unsigned_int>
                                 ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )&local_88,puVar25 + 5,puVar24 + 5);
              pbVar9 = testing::internal::
                       FormatForComparisonFailureMessage<unsigned_int,unsigned_int>
                                 ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )&local_a8,puVar24 + 5,puVar25 + 5);
              testing::internal::EqFailure
                        (&local_100,"resultLOD.outputLODs.sizePaddedToSecondLastFullBlock",
                         "expectedLOD.outputLODs.sizePaddedToSecondLastFullBlock",pbVar9,pbVar8,
                         false);
              if (0xf < uStack_90) {
                pvVar3 = (void *)CONCAT71(local_a8._1_7_,local_a8._Buf[0]);
                uVar19 = uStack_90 + 1;
                pvVar15 = pvVar3;
                if (0xfff < uVar19) {
                  pvVar15 = *(void **)((longlong)pvVar3 + -8);
                  uVar19 = uStack_90 + 0x28;
                  if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar15)))
                  goto LAB_14c576772;
                }
                ::operator_delete(pvVar15,uVar19);
              }
              local_a8._Buf[0] = '\0';
              local_98 = uVar4;
              uStack_90 = uVar5;
              if (0xf < local_70) {
                uVar19 = local_70 + 1;
                uVar16 = local_88._Ptr;
                if (0xfff < uVar19) {
                  uVar16 = *(undefined8 *)(local_88._Ptr + -8);
                  uVar19 = local_70 + 0x28;
                  if ((char *)0x1f < local_88._Ptr + (-8 - uVar16)) {
LAB_14c576772:
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                }
                ::operator_delete((void *)uVar16,uVar19);
              }
            }
            uVar20._Mypair._Myval2 = local_100.message_._Mypair._Myval2;
            if (local_100.success_ == false) {
              pMVar10 = (Message *)testing::Message::Message((Message *)&local_158);
              if (local_100.message_._Mypair._Myval2 ==
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                pcVar18 = "";
              }
              else {
                pcVar18 = (char *)local_100.message_._Mypair._Myval2;
                if (0xf < *(ulong64 *)((longlong)local_100.message_._Mypair._Myval2 + 0x18)) {
                  pcVar18 = *(char **)local_100.message_._Mypair._Myval2;
                }
              }
              pAVar11 = (AssertHelper *)
                        testing::internal::AssertHelper::AssertHelper
                                  (&local_150,kFatalFailure,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\quaternions\\TestQuaternionStorageBuilder.cpp"
                                   ,0x2b,pcVar18);
              testing::internal::AssertHelper::operator=(pAVar11,pMVar10);
              testing::internal::AssertHelper::~AssertHelper(&local_150);
              uVar20._Mypair._Myval2 = local_100.message_._Mypair._Myval2;
              if (local_158._Mypair._Myval2 !=
                  (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                puVar17 = (undefined8 *)
                          ((longlong)local_158._Mypair._Myval2 +
                          (longlong)*(int *)(*(longlong *)local_158._Mypair._Myval2 + 4));
                (**(code **)*puVar17)(puVar17,1);
                uVar20._Mypair._Myval2 = local_100.message_._Mypair._Myval2;
              }
              goto LAB_14c576a25;
            }
            if (local_100.message_._Mypair._Myval2 !=
                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_100.message_._Mypair._Myval2);
              ::operator_delete((void *)uVar20._Mypair._Myval2,0x20);
            }
            lVar14 = lVar14 + 0x18;
            local_148 = local_148 + 1;
            uVar23._Mypair._Myval2 = local_158._Mypair._Myval2;
            pJVar22 = local_b0;
          } while (local_148 <
                   (ulonglong)
                   (((longlong)
                     rltests::qs::optimized::lodRegions._Mypair._Myval2._Myfirst[uVar7]._Mypair.
                     _Myval2._Mylast -
                    (longlong)
                    rltests::qs::optimized::lodRegions._Mypair._Myval2._Myfirst[uVar7]._Mypair.
                    _Myval2._Myfirst) / 0x18));
        }
        local_140 = local_140 + 1;
        pJVar22 = *(JointGroup<float> **)
                   ((longlong)&local_150.data_[1].message._Mypair._Myval2._Bx + 8);
      } while (local_140 <
               (ulonglong)
               ((longlong)(local_150.data_[1].message._Mypair._Myval2._Mysize - (longlong)pJVar22) /
               0x88));
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'dmr'' @ 150451060

void __cdecl
`pma::impl::
PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>
::
PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>'
::__l2::_dynamic_atexit_destructor_for__dmr__(void)

{
  pma::MemoryResource::~MemoryResource
            ((MemoryResource *)
             &`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::scalar::T128<float>_>,trimd::scalar::T128<float>,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr);
  return;
}

// `dynamic_atexit_destructor_for_'dmr'' @ 150451080

void __cdecl
`pma::impl::
PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>
::
PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>'
::__l2::_dynamic_atexit_destructor_for__dmr__(void)

{
  pma::MemoryResource::~MemoryResource
            ((MemoryResource *)
             &`public:___cdecl_pma::impl::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::VectorizedJointGroupQuaternionCalculationStrategy<float,trimd::fallback::T256<trimd::sse::F128>,trimd::sse::F128,rl4::QuaternionsToEulerAngles<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
              ::__l2::dmr);
  return;
}

