// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 76

// `dynamic_initializer_for_'gtest_Block4JointStorageBuilderTest_LayoutOptimization_registered_'' @ 14135b130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
_dynamic_initializer_for__gtest_Block4JointStorageBuilderTest_LayoutOptimization_registered___(void)

{
  ulonglong uVar1;
  ulong64 *puVar2;
  undefined8 uVar3;
  void *pvVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  undefined8 uVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  Message *this;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  void *pvVar13;
  ulong64 uVar14;
  longlong lVar15;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar16;
  ulonglong uVar17;
  undefined1 auStackY_f8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_c8;
  Types4<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>
  local_b0;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_a8;
  _Bxty local_a0;
  ulong64 local_90;
  ulong64 uStack_88;
  _Bxty local_80;
  undefined8 local_70;
  ulonglong uStack_68;
  CodeLocation local_60;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_c8._Mypair._Myval2._Myfirst =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_c8._Mypair._Myval2._Mylast =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_c8._Mypair._Myval2._Myend =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  this = (Message *)testing::Message::Message((Message *)&local_a8);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((this->ss_)._Mypair._Myval2)->field_0x10,0);
  testing::Message::GetString
            (this,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a0);
  if (local_a8._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar10 = (undefined8 *)
              ((longlong)&(local_a8._Myval2)->field_0x0 +
              (longlong)*(int *)(*(longlong *)local_a8._Myval2 + 4));
    (**(code **)*puVar10)(puVar10,1);
  }
  pbVar16 = local_c8._Mypair._Myval2._Mylast;
  if (local_c8._Mypair._Myval2._Mylast == local_c8._Mypair._Myval2._Myend) {
    lVar15 = (longlong)local_c8._Mypair._Myval2._Mylast -
             (longlong)local_c8._Mypair._Myval2._Myfirst >> 5;
    if (lVar15 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      std::
      vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
      ::_Xlength();
    }
    uVar1 = lVar15 + 1;
    uVar11 = (longlong)local_c8._Mypair._Myval2._Myend - (longlong)local_c8._Mypair._Myval2._Myfirst
             >> 5;
    if (0x7ffffffffffffff - (uVar11 >> 1) < uVar11) {
      uVar17 = 0x7ffffffffffffff;
    }
    else {
      uVar11 = (uVar11 >> 1) + uVar11;
      uVar17 = uVar1;
      if (uVar1 <= uVar11) {
        uVar17 = uVar11;
      }
      if (0x7ffffffffffffff < uVar17) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_bad_array_new_length();
      }
    }
    pbVar9 = std::_Allocate<16,std::_Default_allocate_traits>(uVar17 * 0x20);
    pbVar8 = local_c8._Mypair._Myval2._Mylast;
    pbVar9[lVar15]._Mypair._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&pbVar9[lVar15]._Mypair._Myval2._Bx + 8) = 0;
    pbVar9[lVar15]._Mypair._Myval2._Mysize = 0;
    pbVar9[lVar15]._Mypair._Myval2._Myres = 0;
    pbVar12 = pbVar9 + lVar15 + 1;
    pbVar9[lVar15]._Mypair._Myval2._Bx._Ptr = (char *)CONCAT71(local_a0._1_7_,local_a0._Buf[0]);
    *(undefined8 *)((longlong)&pbVar9[lVar15]._Mypair._Myval2._Bx + 8) = local_a0._8_8_;
    uVar11 = _UNK_15076add8;
    uVar7 = ___xmm_000000000000000f0000000000000000;
    puVar2 = &pbVar9[lVar15]._Mypair._Myval2._Mysize;
    *puVar2 = local_90;
    puVar2[1] = uStack_88;
    local_a0._Buf[0] = '\0';
    local_90 = uVar7;
    uStack_88 = uVar11;
    pbVar5 = pbVar9;
    pbVar6 = local_c8._Mypair._Myval2._Myfirst;
    if (pbVar16 == local_c8._Mypair._Myval2._Mylast) {
      for (; pbVar6 != local_c8._Mypair._Myval2._Mylast; pbVar6 = pbVar6 + 1) {
        (pbVar5->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
        *(undefined8 *)((longlong)&(pbVar5->_Mypair)._Myval2._Bx + 8) = 0;
        (pbVar5->_Mypair)._Myval2._Mysize = 0;
        (pbVar5->_Mypair)._Myval2._Myres = 0;
        uVar3 = *(undefined8 *)((longlong)&(pbVar6->_Mypair)._Myval2._Bx + 8);
        (pbVar5->_Mypair)._Myval2._Bx._Ptr = (pbVar6->_Mypair)._Myval2._Bx._Ptr;
        *(undefined8 *)((longlong)&(pbVar5->_Mypair)._Myval2._Bx + 8) = uVar3;
        uVar14 = (pbVar6->_Mypair)._Myval2._Myres;
        (pbVar5->_Mypair)._Myval2._Mysize = (pbVar6->_Mypair)._Myval2._Mysize;
        (pbVar5->_Mypair)._Myval2._Myres = uVar14;
        (pbVar6->_Mypair)._Myval2._Bx._Buf[0] = '\0';
        (pbVar6->_Mypair)._Myval2._Mysize = 0;
        (pbVar6->_Mypair)._Myval2._Myres = 0xf;
        pbVar5 = pbVar5 + 1;
      }
    }
    else {
      for (; pbVar6 != pbVar16; pbVar6 = pbVar6 + 1) {
        (pbVar5->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
        *(undefined8 *)((longlong)&(pbVar5->_Mypair)._Myval2._Bx + 8) = 0;
        (pbVar5->_Mypair)._Myval2._Mysize = 0;
        (pbVar5->_Mypair)._Myval2._Myres = 0;
        uVar3 = *(undefined8 *)((longlong)&(pbVar6->_Mypair)._Myval2._Bx + 8);
        (pbVar5->_Mypair)._Myval2._Bx._Ptr = (pbVar6->_Mypair)._Myval2._Bx._Ptr;
        *(undefined8 *)((longlong)&(pbVar5->_Mypair)._Myval2._Bx + 8) = uVar3;
        uVar14 = (pbVar6->_Mypair)._Myval2._Myres;
        (pbVar5->_Mypair)._Myval2._Mysize = (pbVar6->_Mypair)._Myval2._Mysize;
        (pbVar5->_Mypair)._Myval2._Myres = uVar14;
        (pbVar6->_Mypair)._Myval2._Bx._Buf[0] = '\0';
        (pbVar6->_Mypair)._Myval2._Mysize = 0;
        (pbVar6->_Mypair)._Myval2._Myres = 0xf;
        pbVar5 = pbVar5 + 1;
      }
      for (; pbVar16 != local_c8._Mypair._Myval2._Mylast; pbVar16 = pbVar16 + 1) {
        (pbVar12->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
        *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8) = 0;
        (pbVar12->_Mypair)._Myval2._Mysize = 0;
        (pbVar12->_Mypair)._Myval2._Myres = 0;
        uVar3 = *(undefined8 *)((longlong)&(pbVar16->_Mypair)._Myval2._Bx + 8);
        (pbVar12->_Mypair)._Myval2._Bx._Ptr = (pbVar16->_Mypair)._Myval2._Bx._Ptr;
        *(undefined8 *)((longlong)&(pbVar12->_Mypair)._Myval2._Bx + 8) = uVar3;
        uVar14 = (pbVar16->_Mypair)._Myval2._Myres;
        (pbVar12->_Mypair)._Myval2._Mysize = (pbVar16->_Mypair)._Myval2._Mysize;
        (pbVar12->_Mypair)._Myval2._Myres = uVar14;
        (pbVar16->_Mypair)._Myval2._Bx._Buf[0] = '\0';
        (pbVar16->_Mypair)._Myval2._Mysize = 0;
        (pbVar16->_Mypair)._Myval2._Myres = 0xf;
        pbVar12 = pbVar12 + 1;
      }
    }
    pbVar16 = local_c8._Mypair._Myval2._Myfirst;
    if (local_c8._Mypair._Myval2._Myfirst !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      for (; pbVar16 != pbVar8; pbVar16 = pbVar16 + 1) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (pbVar16);
      }
      uVar14 = (longlong)local_c8._Mypair._Myval2._Myend -
               (longlong)local_c8._Mypair._Myval2._Myfirst & 0xffffffffffffffe0;
      pbVar16 = local_c8._Mypair._Myval2._Myfirst;
      if (0xfff < uVar14) {
        pbVar16 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                  local_c8._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
        uVar14 = uVar14 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_c8._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar16)))
        goto LAB_14135b442;
      }
      operator_delete(pbVar16,uVar14);
    }
    local_c8._Mypair._Myval2._Myend = pbVar9 + uVar17;
    local_c8._Mypair._Myval2._Mylast = pbVar9 + uVar1;
    local_c8._Mypair._Myval2._Myfirst = pbVar9;
  }
  else {
    ((local_c8._Mypair._Myval2._Mylast)->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&((local_c8._Mypair._Myval2._Mylast)->_Mypair)._Myval2._Bx + 8) = 0;
    ((local_c8._Mypair._Myval2._Mylast)->_Mypair)._Myval2._Mysize = 0;
    ((local_c8._Mypair._Myval2._Mylast)->_Mypair)._Myval2._Myres = 0;
    ((local_c8._Mypair._Myval2._Mylast)->_Mypair)._Myval2._Bx._Ptr =
         (char *)CONCAT71(local_a0._1_7_,local_a0._Buf[0]);
    *(undefined8 *)((longlong)&((local_c8._Mypair._Myval2._Mylast)->_Mypair)._Myval2._Bx + 8) =
         local_a0._8_8_;
    uVar1 = _UNK_15076add8;
    uVar7 = ___xmm_000000000000000f0000000000000000;
    ((local_c8._Mypair._Myval2._Mylast)->_Mypair)._Myval2._Mysize = local_90;
    ((local_c8._Mypair._Myval2._Mylast)->_Mypair)._Myval2._Myres = uStack_88;
    local_c8._Mypair._Myval2._Mylast = local_c8._Mypair._Myval2._Mylast + 1;
    local_90 = uVar7;
    uStack_88 = uVar1;
    local_a0._Buf[0] = '\0';
  }
  if (0xf < uStack_88) {
    pvVar4 = (void *)CONCAT71(local_a0._1_7_,local_a0._Buf[0]);
    uVar14 = uStack_88 + 1;
    pvVar13 = pvVar4;
    if (0xfff < uVar14) {
      pvVar13 = *(void **)((longlong)pvVar4 + -8);
      uVar14 = uStack_88 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar13))) {
LAB_14135b442:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pvVar13,uVar14);
  }
  testing::internal::
  GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types4<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>_>
            (local_b0,&local_c8,1);
  local_80._8_8_ = 0;
  local_80._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar7 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_70 = ___xmm_000000000000008f000000000000008b;
  uStack_68 = _UNK_1528810f8;
  *(undefined8 *)local_80._Ptr = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(local_80._Ptr + 8) = uVar7;
  uVar7 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  *(undefined8 *)(local_80._Ptr + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(local_80._Ptr + 0x18) = uVar7;
  uVar7 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(local_80._Ptr + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(local_80._Ptr + 0x28) = uVar7;
  uVar7 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(local_80._Ptr + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(local_80._Ptr + 0x38) = uVar7;
  uVar7 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(local_80._Ptr + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(local_80._Ptr + 0x48) = uVar7;
  uVar7 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(local_80._Ptr + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(local_80._Ptr + 0x58) = uVar7;
  uVar7 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(local_80._Ptr + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(local_80._Ptr + 0x68) = uVar7;
  uVar7 = s_C__Workspace_UnrealEngine_Engin._120_8_;
  *(undefined8 *)(local_80._Ptr + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_8_;
  *(undefined8 *)(local_80._Ptr + 0x78) = uVar7;
  *(undefined8 *)(local_80._Ptr + 0x80) = s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined2 *)(local_80._Ptr + 0x88) = s_C__Workspace_UnrealEngine_Engin._136_2_;
  *(local_80._Ptr + 0x8a) = s_C__Workspace_UnrealEngine_Engin[0x8a];
  *(local_80._Ptr + 0x8b) = '\0';
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (&local_60.file,
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80);
  local_60.line = 0x62;
  gtest_Block4JointStorageBuilderTest_LayoutOptimization_registered_ =
       testing::internal::
       TypeParameterizedTest<`anonymous_namespace'::Block4JointStorageBuilderTest,testing::internal::TemplateSel<Block4JointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types5<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>_>
       ::Register("",&local_60,"Block4JointStorageBuilderTest","LayoutOptimization",0,&local_c8);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (&local_60.file);
  if (0xf < uStack_68) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Deallocate_for_capacity
              ((allocator<char> *)local_80._Buf,local_80._Ptr,uStack_68);
  }
  pbVar5 = local_c8._Mypair._Myval2._Mylast;
  local_80._Ptr = local_80._Ptr & 0xffffffffffffff00;
  local_70 = ___xmm_000000000000000f0000000000000000;
  uStack_68 = _UNK_15076add8;
  pbVar16 = local_c8._Mypair._Myval2._Myfirst;
  if (local_c8._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar16 != pbVar5; pbVar16 = pbVar16 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (pbVar16);
    }
    std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
    deallocate((allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)
               &local_c8,local_c8._Mypair._Myval2._Myfirst,
               (longlong)local_c8._Mypair._Myval2._Myend -
               (longlong)local_c8._Mypair._Myval2._Myfirst >> 5);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c4f8570

void * __thiscall
`anonymous_namespace'::
Block4JointStorageBuilderTest<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  block4::CanonicalReader::~CanonicalReader((CanonicalReader *)((longlong)this + 0x70));
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// TestBody @ 14c4f85e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>
::TestBody(Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>
           *this)

{
  undefined1 *puVar1;
  JointsBuilder JVar2;
  JointGroupLinearCalculationStrategy<float> *pJVar3;
  undefined **ppuVar4;
  undefined1 auStackY_3b8 [32];
  JointsBuilder *pJStack_388;
  Configuration CStack_380;
  JointBehaviorFilter JStack_368;
  unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
  uStack_340;
  undefined1 auStack_2f8 [56];
  _Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *p_Stack_2c0;
  JointsBuilder *pJStack_2b8;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined ***pppuStack_270;
  undefined1 auStack_268 [64];
  JointsBuilder *pJStack_228;
  longlong alStack_218 [7];
  longlong *plStack_1e0;
  JointsBuilder *pJStack_1d8;
  Evaluator<float> EStack_1c8;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  puVar1 = &this->field_0x10;
  CStack_380.loadJoints = true;
  CStack_380.loadBlendShapes = true;
  CStack_380.loadAnimatedMaps = true;
  CStack_380.loadMachineLearnedBehavior = true;
  CStack_380.loadRBFBehavior = true;
  CStack_380.loadTwistSwingBehavior = true;
  CStack_380.translationType = Vector;
  CStack_380.rotationType = Quaternions;
  CStack_380.rotationOrder = XYZ;
  CStack_380.scaleType = Vector;
  CStack_380.translationPruningThreshold = 0.0;
  CStack_380.rotationPruningThreshold = 0.0;
  CStack_380.scalePruningThreshold = 0.0;
  CStack_380.calculationType = SSE;
  rl4::JointsBuilder::create
            ((unique_ptr<rl4::JointsBuilder,std::function<void___cdecl(rl4::JointsBuilder_*)>_> *)
             auStack_268,&CStack_380,(MemoryResource *)puVar1);
  rl4::JointBehaviorFilter::JointBehaviorFilter
            (&JStack_368,(Reader *)&this->field_0x18,(MemoryResource *)puVar1);
  rl4::JointBehaviorFilter::include(&JStack_368,Vector);
  rl4::JointBehaviorFilter::include(&JStack_368,EulerAngles);
  rl4::JointBehaviorFilter::include(&JStack_368,Vector);
  (**(code **)((longlong)*pJStack_228 + 8))(pJStack_228,&JStack_368);
  (**(code **)((longlong)*pJStack_228 + 0x18))(pJStack_228,&JStack_368);
  (**(code **)((longlong)*pJStack_228 + 0x20))(pJStack_228,&JStack_368);
  (**(code **)((longlong)*pJStack_228 + 0x30))(pJStack_228,alStack_218);
  JVar2 = pJStack_1d8[9];
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  ppuVar4 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
             ::__l2::dmr;
  if (puVar1 != (undefined1 *)0x0) {
    ppuVar4 = (undefined **)puVar1;
  }
  pJVar3 = (JointGroupLinearCalculationStrategy<float> *)(**(code **)(*ppuVar4 + 8))(ppuVar4);
  *pJVar3 = (JointGroupLinearCalculationStrategy<float>)
            &
            ___7__VectorizedJointGroupLinearCalculationStrategy_MUF128_sse_trimd__U__EulerAnglesToQuaternions_U__ang_MUdegrees_impl_tdm___tdm___0A__bpcm_rl4___bpcm_rl4__6B_
  ;
  ppuStack_2a8 = &
                 ___7___Func_impl_no_alloc_V<lambda_1>__1____create___V___ManagedInstance_V__unique_ptr_U__JointGroupLinearCalculationStrategy_M_bpcm_rl4__V__function___A6AXPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___Z_std___std__U__VectorizedJointGroupLinearCalculationStrategy_MUF128_sse_trimd__U__EulerAnglesToQuaternions_U__ang_MUdegrees_impl_tdm___tdm___0A__bpcm_rl4___bpcm_rl4__U__JointGroupLinearCalculationStrategy_M_45__impl_pma__QEAA_AV__unique_ptr_U__JointGroupLinearCalculationStrategy_M_bpcm_rl4__V__function___A6AXPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___Z_std___std__XZ_XPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___std__6B_
  ;
  pppuStack_270 = &ppuStack_2a8;
  p_Stack_2c0 = (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0;
  ppuStack_2a0 = ppuVar4;
  p_Stack_2c0 = std::
                _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>,rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*>
                ::_Move(&ppuStack_2a8,auStack_2f8);
  if (pppuStack_270 != (undefined ***)0x0) {
    (*(code *)(*pppuStack_270)[4])(pppuStack_270,pppuStack_270 != &ppuStack_2a8);
  }
  pJStack_2b8 = (JointsBuilder *)0x0;
  std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>::
  function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>
            ((function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)> *)
             &uStack_340,
             (function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)> *)
             auStack_2f8);
  uStack_340._Mypair._Myval2 = pJVar3;
  block4::OptimizedStorage<float>::create
            (&EStack_1c8,&uStack_340,0,Quaternions,(MemoryResource *)puVar1);
  rl4::bpcm::Evaluator<float>::Accessor::assertRawDataEqual((Evaluator<float> *)JVar2,&EStack_1c8);
  rl4::bpcm::Evaluator<float>::Accessor::assertJointGroupsEqual
            ((Evaluator<float> *)JVar2,&EStack_1c8);
  rl4::bpcm::Evaluator<float>::Accessor::assertLODsEqual((Evaluator<float> *)JVar2,&EStack_1c8);
  rl4::bpcm::Evaluator<float>::~Evaluator<float>(&EStack_1c8);
  if (pJStack_2b8 != (JointsBuilder *)0x0) {
    pJStack_388 = pJStack_2b8;
    if (p_Stack_2c0 ==
        (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*p_Stack_2c0 + 0x10))(p_Stack_2c0,&pJStack_388);
  }
  if (p_Stack_2c0 != (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0
     ) {
    (**(code **)((longlong)*p_Stack_2c0 + 0x20))
              (p_Stack_2c0,
               p_Stack_2c0 !=
               (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)
               auStack_2f8);
    p_Stack_2c0 = (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0;
  }
  if (pJStack_1d8 != (JointsBuilder *)0x0) {
    pJStack_388 = pJStack_1d8;
    if (plStack_1e0 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0,&pJStack_388);
  }
  if (plStack_1e0 != (longlong *)0x0) {
    (**(code **)(*plStack_1e0 + 0x20))(plStack_1e0,plStack_1e0 != alStack_218);
    plStack_1e0 = (longlong *)0x0;
  }
  if (JStack_368.filters._Mypair._Myval2._Myfirst != (FilterType *)0x0) {
    (**(code **)(*(longlong *)JStack_368.filters._Mypair._Myval1 + 0x10))
              (JStack_368.filters._Mypair._Myval1,JStack_368.filters._Mypair._Myval2._Myfirst,
               ((longlong)JStack_368.filters._Mypair._Myval2._Myend -
                (longlong)JStack_368.filters._Mypair._Myval2._Myfirst >> 1) * 2,8);
    JStack_368.filters._Mypair._Myval2._Myend = (FilterType *)0x0;
    JStack_368.filters._Mypair._Myval2._Myfirst = (FilterType *)0x0;
    JStack_368.filters._Mypair._Myval2._Mylast = (FilterType *)0x0;
  }
  if (pJStack_228 != (JointsBuilder *)0x0) {
    pJStack_388 = pJStack_228;
    if ((longlong *)auStack_268._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*(longlong *)auStack_268._56_8_ + 0x10))(auStack_268._56_8_,&pJStack_388);
  }
  if ((longlong *)auStack_268._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)auStack_268._56_8_ + 0x20))
              (auStack_268._56_8_,(undefined1 *)auStack_268._56_8_ != auStack_268);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c4f85f0

void * __thiscall
Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>
::_scalar_deleting_destructor_
          (Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>
           *this,uint param_1)

{
  block4::CanonicalReader::~CanonicalReader((CanonicalReader *)&this->field_0x70);
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)(this + 1));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)&this->field_0x70);
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x10);
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// CreateTest @ 14c4f8660

Test * __thiscall
testing::internal::
TestFactoryImpl<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>_>
::CreateTest(TestFactoryImpl<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x90);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &Block4JointStorageBuilderTest<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    block4::CanonicalReader::CanonicalReader((CanonicalReader *)&this_00[1].gtest_flag_saver_);
    this_00->_padding_ =
         (longlong)
         &
         ___7__Block4JointStorageBuilderTest_LayoutOptimization_Test_V__tuple_MUF128_sse_trimd__U__TCalculationType__00__U__EulerAnglesToQuaternions_U__ang_MUdegrees_impl_tdm___tdm___0A__bpcm_rl4___std____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c4f86d0

void * __thiscall
testing::internal::
TestFactoryImpl<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c4f8710

void * __thiscall
`anonymous_namespace'::
Block4JointStorageBuilderTest<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  block4::CanonicalReader::~CanonicalReader((CanonicalReader *)((longlong)this + 0x70));
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// TestBody @ 14c4f8780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>_>
::TestBody(Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>_>
           *this)

{
  undefined1 *puVar1;
  JointsBuilder JVar2;
  JointGroupLinearCalculationStrategy<float> *pJVar3;
  undefined **ppuVar4;
  undefined1 auStackY_3b8 [32];
  JointsBuilder *pJStack_388;
  Configuration CStack_380;
  JointBehaviorFilter JStack_368;
  unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
  uStack_340;
  undefined1 auStack_2f8 [56];
  _Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *p_Stack_2c0;
  JointsBuilder *pJStack_2b8;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined ***pppuStack_270;
  undefined1 auStack_268 [64];
  JointsBuilder *pJStack_228;
  longlong alStack_218 [7];
  longlong *plStack_1e0;
  JointsBuilder *pJStack_1d8;
  Evaluator<float> EStack_1c8;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  puVar1 = &this->field_0x10;
  CStack_380.loadJoints = true;
  CStack_380.loadBlendShapes = true;
  CStack_380.loadAnimatedMaps = true;
  CStack_380.loadMachineLearnedBehavior = true;
  CStack_380.loadRBFBehavior = true;
  CStack_380.loadTwistSwingBehavior = true;
  CStack_380.translationType = Vector;
  CStack_380.rotationType = EulerAngles;
  CStack_380.rotationOrder = XYZ;
  CStack_380.scaleType = Vector;
  CStack_380.translationPruningThreshold = 0.0;
  CStack_380.rotationPruningThreshold = 0.0;
  CStack_380.scalePruningThreshold = 0.0;
  CStack_380.calculationType = SSE;
  rl4::JointsBuilder::create
            ((unique_ptr<rl4::JointsBuilder,std::function<void___cdecl(rl4::JointsBuilder_*)>_> *)
             auStack_268,&CStack_380,(MemoryResource *)puVar1);
  rl4::JointBehaviorFilter::JointBehaviorFilter
            (&JStack_368,(Reader *)&this->field_0x18,(MemoryResource *)puVar1);
  rl4::JointBehaviorFilter::include(&JStack_368,Vector);
  rl4::JointBehaviorFilter::include(&JStack_368,EulerAngles);
  rl4::JointBehaviorFilter::include(&JStack_368,Vector);
  (**(code **)((longlong)*pJStack_228 + 8))(pJStack_228,&JStack_368);
  (**(code **)((longlong)*pJStack_228 + 0x18))(pJStack_228,&JStack_368);
  (**(code **)((longlong)*pJStack_228 + 0x20))(pJStack_228,&JStack_368);
  (**(code **)((longlong)*pJStack_228 + 0x30))(pJStack_228,alStack_218);
  JVar2 = pJStack_1d8[9];
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  ppuVar4 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
             ::__l2::dmr;
  if (puVar1 != (undefined1 *)0x0) {
    ppuVar4 = (undefined **)puVar1;
  }
  pJVar3 = (JointGroupLinearCalculationStrategy<float> *)(**(code **)(*ppuVar4 + 8))(ppuVar4,8,8);
  *pJVar3 = (JointGroupLinearCalculationStrategy<float>)
            &
            ___7__VectorizedJointGroupLinearCalculationStrategy_MUF128_sse_trimd__UNoopAdapter_bpcm_rl4___bpcm_rl4__6B_
  ;
  ppuStack_2a8 = &
                 ___7___Func_impl_no_alloc_V<lambda_1>__1____create___V___ManagedInstance_V__unique_ptr_U__JointGroupLinearCalculationStrategy_M_bpcm_rl4__V__function___A6AXPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___Z_std___std__U__VectorizedJointGroupLinearCalculationStrategy_MUF128_sse_trimd__UNoopAdapter_bpcm_rl4___bpcm_rl4__U__JointGroupLinearCalculationStrategy_M_45__impl_pma__QEAA_AV__unique_ptr_U__JointGroupLinearCalculationStrategy_M_bpcm_rl4__V__function___A6AXPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___Z_std___std__XZ_XPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___std__6B_
  ;
  pppuStack_270 = &ppuStack_2a8;
  p_Stack_2c0 = (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0;
  ppuStack_2a0 = ppuVar4;
  p_Stack_2c0 = std::
                _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>,rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::NoopAdapter>,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*>
                ::_Move(&ppuStack_2a8,auStack_2f8);
  if (pppuStack_270 != (undefined ***)0x0) {
    (*(code *)(*pppuStack_270)[4])(pppuStack_270,pppuStack_270 != &ppuStack_2a8);
  }
  pJStack_2b8 = (JointsBuilder *)0x0;
  std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>::
  function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>
            ((function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)> *)
             &uStack_340,
             (function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)> *)
             auStack_2f8);
  uStack_340._Mypair._Myval2 = pJVar3;
  block4::OptimizedStorage<float>::create
            (&EStack_1c8,&uStack_340,1,EulerAngles,(MemoryResource *)puVar1);
  rl4::bpcm::Evaluator<float>::Accessor::assertRawDataEqual((Evaluator<float> *)JVar2,&EStack_1c8);
  rl4::bpcm::Evaluator<float>::Accessor::assertJointGroupsEqual
            ((Evaluator<float> *)JVar2,&EStack_1c8);
  rl4::bpcm::Evaluator<float>::Accessor::assertLODsEqual((Evaluator<float> *)JVar2,&EStack_1c8);
  rl4::bpcm::Evaluator<float>::~Evaluator<float>(&EStack_1c8);
  if (pJStack_2b8 != (JointsBuilder *)0x0) {
    pJStack_388 = pJStack_2b8;
    if (p_Stack_2c0 ==
        (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*p_Stack_2c0 + 0x10))(p_Stack_2c0,&pJStack_388);
  }
  if (p_Stack_2c0 != (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0
     ) {
    (**(code **)((longlong)*p_Stack_2c0 + 0x20))
              (p_Stack_2c0,
               p_Stack_2c0 !=
               (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)
               auStack_2f8);
    p_Stack_2c0 = (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0;
  }
  if (pJStack_1d8 != (JointsBuilder *)0x0) {
    pJStack_388 = pJStack_1d8;
    if (plStack_1e0 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0,&pJStack_388);
  }
  if (plStack_1e0 != (longlong *)0x0) {
    (**(code **)(*plStack_1e0 + 0x20))(plStack_1e0,plStack_1e0 != alStack_218);
    plStack_1e0 = (longlong *)0x0;
  }
  if (JStack_368.filters._Mypair._Myval2._Myfirst != (FilterType *)0x0) {
    (**(code **)(*(longlong *)JStack_368.filters._Mypair._Myval1 + 0x10))
              (JStack_368.filters._Mypair._Myval1,JStack_368.filters._Mypair._Myval2._Myfirst,
               ((longlong)JStack_368.filters._Mypair._Myval2._Myend -
                (longlong)JStack_368.filters._Mypair._Myval2._Myfirst >> 1) * 2,8);
    JStack_368.filters._Mypair._Myval2._Myend = (FilterType *)0x0;
    JStack_368.filters._Mypair._Myval2._Myfirst = (FilterType *)0x0;
    JStack_368.filters._Mypair._Myval2._Mylast = (FilterType *)0x0;
  }
  if (pJStack_228 != (JointsBuilder *)0x0) {
    pJStack_388 = pJStack_228;
    if ((longlong *)auStack_268._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*(longlong *)auStack_268._56_8_ + 0x10))(auStack_268._56_8_,&pJStack_388);
  }
  if ((longlong *)auStack_268._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)auStack_268._56_8_ + 0x20))
              (auStack_268._56_8_,(undefined1 *)auStack_268._56_8_ != auStack_268);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c4f8790

void * __thiscall
Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>_>
::_scalar_deleting_destructor_
          (Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>_>
           *this,uint param_1)

{
  block4::CanonicalReader::~CanonicalReader((CanonicalReader *)&this->field_0x70);
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)(this + 1));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)&this->field_0x70);
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x10);
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// CreateTest @ 14c4f8800

Test * __thiscall
testing::internal::
TestFactoryImpl<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>_>_>
::CreateTest(TestFactoryImpl<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x90);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &Block4JointStorageBuilderTest<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    block4::CanonicalReader::CanonicalReader((CanonicalReader *)&this_00[1].gtest_flag_saver_);
    this_00->_padding_ =
         (longlong)
         &
         ___7__Block4JointStorageBuilderTest_LayoutOptimization_Test_V__tuple_MUF128_sse_trimd__U__TCalculationType__00__UNoopAdapter_bpcm_rl4___std____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c4f8870

void * __thiscall
testing::internal::
TestFactoryImpl<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c4f88b0

void * __thiscall
`anonymous_namespace'::
Block4JointStorageBuilderTest<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  block4::CanonicalReader::~CanonicalReader((CanonicalReader *)((longlong)this + 0x70));
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// TestBody @ 14c4f8920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>
::TestBody(Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>
           *this)

{
  undefined1 *puVar1;
  JointsBuilder JVar2;
  JointGroupLinearCalculationStrategy<float> *pJVar3;
  undefined **ppuVar4;
  undefined1 auStackY_3b8 [32];
  JointsBuilder *pJStack_388;
  Configuration CStack_380;
  JointBehaviorFilter JStack_368;
  unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
  uStack_340;
  undefined1 auStack_2f8 [56];
  _Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *p_Stack_2c0;
  JointsBuilder *pJStack_2b8;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined ***pppuStack_270;
  undefined1 auStack_268 [64];
  JointsBuilder *pJStack_228;
  longlong alStack_218 [7];
  longlong *plStack_1e0;
  JointsBuilder *pJStack_1d8;
  Evaluator<float> EStack_1c8;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  puVar1 = &this->field_0x10;
  CStack_380.loadJoints = true;
  CStack_380.loadBlendShapes = true;
  CStack_380.loadAnimatedMaps = true;
  CStack_380.loadMachineLearnedBehavior = true;
  CStack_380.loadRBFBehavior = true;
  CStack_380.loadTwistSwingBehavior = true;
  CStack_380.translationType = Vector;
  CStack_380.rotationType = Quaternions;
  CStack_380.rotationOrder = XYZ;
  CStack_380.scaleType = Vector;
  CStack_380.translationPruningThreshold = 0.0;
  CStack_380.rotationPruningThreshold = 0.0;
  CStack_380.scalePruningThreshold = 0.0;
  CStack_380.calculationType = Scalar;
  rl4::JointsBuilder::create
            ((unique_ptr<rl4::JointsBuilder,std::function<void___cdecl(rl4::JointsBuilder_*)>_> *)
             auStack_268,&CStack_380,(MemoryResource *)puVar1);
  rl4::JointBehaviorFilter::JointBehaviorFilter
            (&JStack_368,(Reader *)&this->field_0x18,(MemoryResource *)puVar1);
  rl4::JointBehaviorFilter::include(&JStack_368,Vector);
  rl4::JointBehaviorFilter::include(&JStack_368,EulerAngles);
  rl4::JointBehaviorFilter::include(&JStack_368,Vector);
  (**(code **)((longlong)*pJStack_228 + 8))(pJStack_228,&JStack_368);
  (**(code **)((longlong)*pJStack_228 + 0x18))(pJStack_228,&JStack_368);
  (**(code **)((longlong)*pJStack_228 + 0x20))(pJStack_228,&JStack_368);
  (**(code **)((longlong)*pJStack_228 + 0x30))(pJStack_228,alStack_218);
  JVar2 = pJStack_1d8[9];
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  ppuVar4 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
             ::__l2::dmr;
  if (puVar1 != (undefined1 *)0x0) {
    ppuVar4 = (undefined **)puVar1;
  }
  pJVar3 = (JointGroupLinearCalculationStrategy<float> *)(**(code **)(*ppuVar4 + 8))(ppuVar4);
  *pJVar3 = (JointGroupLinearCalculationStrategy<float>)
            &
            ___7__VectorizedJointGroupLinearCalculationStrategy_MU__T128_M_scalar_trimd__U__EulerAnglesToQuaternions_U__ang_MUdegrees_impl_tdm___tdm___0A__bpcm_rl4___bpcm_rl4__6B_
  ;
  ppuStack_2a8 = &
                 ___7___Func_impl_no_alloc_V<lambda_1>__1____create___V___ManagedInstance_V__unique_ptr_U__JointGroupLinearCalculationStrategy_M_bpcm_rl4__V__function___A6AXPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___Z_std___std__U__VectorizedJointGroupLinearCalculationStrategy_MU__T128_M_scalar_trimd__U__EulerAnglesToQuaternions_U__ang_MUdegrees_impl_tdm___tdm___0A__bpcm_rl4___bpcm_rl4__U__JointGroupLinearCalculationStrategy_M_45__impl_pma__QEAA_AV__unique_ptr_U__JointGroupLinearCalculationStrategy_M_bpcm_rl4__V__function___A6AXPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___Z_std___std__XZ_XPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___std__6B_
  ;
  pppuStack_270 = &ppuStack_2a8;
  p_Stack_2c0 = (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0;
  ppuStack_2a0 = ppuVar4;
  p_Stack_2c0 = std::
                _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>,rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*>
                ::_Move(&ppuStack_2a8,auStack_2f8);
  if (pppuStack_270 != (undefined ***)0x0) {
    (*(code *)(*pppuStack_270)[4])(pppuStack_270,pppuStack_270 != &ppuStack_2a8);
  }
  pJStack_2b8 = (JointsBuilder *)0x0;
  std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>::
  function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>
            ((function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)> *)
             &uStack_340,
             (function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)> *)
             auStack_2f8);
  uStack_340._Mypair._Myval2 = pJVar3;
  block4::OptimizedStorage<float>::create
            (&EStack_1c8,&uStack_340,0,Quaternions,(MemoryResource *)puVar1);
  rl4::bpcm::Evaluator<float>::Accessor::assertRawDataEqual((Evaluator<float> *)JVar2,&EStack_1c8);
  rl4::bpcm::Evaluator<float>::Accessor::assertJointGroupsEqual
            ((Evaluator<float> *)JVar2,&EStack_1c8);
  rl4::bpcm::Evaluator<float>::Accessor::assertLODsEqual((Evaluator<float> *)JVar2,&EStack_1c8);
  rl4::bpcm::Evaluator<float>::~Evaluator<float>(&EStack_1c8);
  if (pJStack_2b8 != (JointsBuilder *)0x0) {
    pJStack_388 = pJStack_2b8;
    if (p_Stack_2c0 ==
        (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*p_Stack_2c0 + 0x10))(p_Stack_2c0,&pJStack_388);
  }
  if (p_Stack_2c0 != (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0
     ) {
    (**(code **)((longlong)*p_Stack_2c0 + 0x20))
              (p_Stack_2c0,
               p_Stack_2c0 !=
               (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)
               auStack_2f8);
    p_Stack_2c0 = (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0;
  }
  if (pJStack_1d8 != (JointsBuilder *)0x0) {
    pJStack_388 = pJStack_1d8;
    if (plStack_1e0 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0,&pJStack_388);
  }
  if (plStack_1e0 != (longlong *)0x0) {
    (**(code **)(*plStack_1e0 + 0x20))(plStack_1e0,plStack_1e0 != alStack_218);
    plStack_1e0 = (longlong *)0x0;
  }
  if (JStack_368.filters._Mypair._Myval2._Myfirst != (FilterType *)0x0) {
    (**(code **)(*(longlong *)JStack_368.filters._Mypair._Myval1 + 0x10))
              (JStack_368.filters._Mypair._Myval1,JStack_368.filters._Mypair._Myval2._Myfirst,
               ((longlong)JStack_368.filters._Mypair._Myval2._Myend -
                (longlong)JStack_368.filters._Mypair._Myval2._Myfirst >> 1) * 2,8);
    JStack_368.filters._Mypair._Myval2._Myend = (FilterType *)0x0;
    JStack_368.filters._Mypair._Myval2._Myfirst = (FilterType *)0x0;
    JStack_368.filters._Mypair._Myval2._Mylast = (FilterType *)0x0;
  }
  if (pJStack_228 != (JointsBuilder *)0x0) {
    pJStack_388 = pJStack_228;
    if ((longlong *)auStack_268._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*(longlong *)auStack_268._56_8_ + 0x10))(auStack_268._56_8_,&pJStack_388);
  }
  if ((longlong *)auStack_268._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)auStack_268._56_8_ + 0x20))
              (auStack_268._56_8_,(undefined1 *)auStack_268._56_8_ != auStack_268);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c4f8930

void * __thiscall
Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>
::_scalar_deleting_destructor_
          (Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>
           *this,uint param_1)

{
  block4::CanonicalReader::~CanonicalReader((CanonicalReader *)&this->field_0x70);
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)(this + 1));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)&this->field_0x70);
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x10);
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// CreateTest @ 14c4f89a0

Test * __thiscall
testing::internal::
TestFactoryImpl<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>_>
::CreateTest(TestFactoryImpl<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x90);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &Block4JointStorageBuilderTest<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    block4::CanonicalReader::CanonicalReader((CanonicalReader *)&this_00[1].gtest_flag_saver_);
    this_00->_padding_ =
         (longlong)
         &
         ___7__Block4JointStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T128_M_scalar_trimd__U__TCalculationType__0A___U__EulerAnglesToQuaternions_U__ang_MUdegrees_impl_tdm___tdm___0A__bpcm_rl4___std____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c4f8a10

void * __thiscall
testing::internal::
TestFactoryImpl<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c4f8a50

void * __thiscall
`anonymous_namespace'::
Block4JointStorageBuilderTest<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  block4::CanonicalReader::~CanonicalReader((CanonicalReader *)((longlong)this + 0x70));
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// TestBody @ 14c4f8ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>_>
::TestBody(Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>_>
           *this)

{
  undefined1 *puVar1;
  JointsBuilder JVar2;
  JointGroupLinearCalculationStrategy<float> *pJVar3;
  undefined **ppuVar4;
  undefined1 auStackY_3b8 [32];
  JointsBuilder *pJStack_388;
  Configuration CStack_380;
  JointBehaviorFilter JStack_368;
  unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
  uStack_340;
  undefined1 auStack_2f8 [56];
  _Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *p_Stack_2c0;
  JointsBuilder *pJStack_2b8;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined ***pppuStack_270;
  undefined1 auStack_268 [64];
  JointsBuilder *pJStack_228;
  longlong alStack_218 [7];
  longlong *plStack_1e0;
  JointsBuilder *pJStack_1d8;
  Evaluator<float> EStack_1c8;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  puVar1 = &this->field_0x10;
  CStack_380.loadJoints = true;
  CStack_380.loadBlendShapes = true;
  CStack_380.loadAnimatedMaps = true;
  CStack_380.loadMachineLearnedBehavior = true;
  CStack_380.loadRBFBehavior = true;
  CStack_380.loadTwistSwingBehavior = true;
  CStack_380.translationType = Vector;
  CStack_380.rotationType = EulerAngles;
  CStack_380.rotationOrder = XYZ;
  CStack_380.scaleType = Vector;
  CStack_380.translationPruningThreshold = 0.0;
  CStack_380.rotationPruningThreshold = 0.0;
  CStack_380.scalePruningThreshold = 0.0;
  CStack_380.calculationType = Scalar;
  rl4::JointsBuilder::create
            ((unique_ptr<rl4::JointsBuilder,std::function<void___cdecl(rl4::JointsBuilder_*)>_> *)
             auStack_268,&CStack_380,(MemoryResource *)puVar1);
  rl4::JointBehaviorFilter::JointBehaviorFilter
            (&JStack_368,(Reader *)&this->field_0x18,(MemoryResource *)puVar1);
  rl4::JointBehaviorFilter::include(&JStack_368,Vector);
  rl4::JointBehaviorFilter::include(&JStack_368,EulerAngles);
  rl4::JointBehaviorFilter::include(&JStack_368,Vector);
  (**(code **)((longlong)*pJStack_228 + 8))(pJStack_228,&JStack_368);
  (**(code **)((longlong)*pJStack_228 + 0x18))(pJStack_228,&JStack_368);
  (**(code **)((longlong)*pJStack_228 + 0x20))(pJStack_228,&JStack_368);
  (**(code **)((longlong)*pJStack_228 + 0x30))(pJStack_228,alStack_218);
  JVar2 = pJStack_1d8[9];
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  ppuVar4 = &`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
             ::__l2::dmr;
  if (puVar1 != (undefined1 *)0x0) {
    ppuVar4 = (undefined **)puVar1;
  }
  pJVar3 = (JointGroupLinearCalculationStrategy<float> *)(**(code **)(*ppuVar4 + 8))(ppuVar4,8,8);
  *pJVar3 = (JointGroupLinearCalculationStrategy<float>)
            &
            ___7__VectorizedJointGroupLinearCalculationStrategy_MU__T128_M_scalar_trimd__UNoopAdapter_bpcm_rl4___bpcm_rl4__6B_
  ;
  ppuStack_2a8 = &
                 ___7___Func_impl_no_alloc_V<lambda_1>__1____create___V___ManagedInstance_V__unique_ptr_U__JointGroupLinearCalculationStrategy_M_bpcm_rl4__V__function___A6AXPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___Z_std___std__U__VectorizedJointGroupLinearCalculationStrategy_MU__T128_M_scalar_trimd__UNoopAdapter_bpcm_rl4___bpcm_rl4__U__JointGroupLinearCalculationStrategy_M_45__impl_pma__QEAA_AV__unique_ptr_U__JointGroupLinearCalculationStrategy_M_bpcm_rl4__V__function___A6AXPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___Z_std___std__XZ_XPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___std__6B_
  ;
  pppuStack_270 = &ppuStack_2a8;
  p_Stack_2c0 = (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0;
  ppuStack_2a0 = ppuVar4;
  p_Stack_2c0 = std::
                _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>,rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::NoopAdapter>,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*>
                ::_Move(&ppuStack_2a8,auStack_2f8);
  if (pppuStack_270 != (undefined ***)0x0) {
    (*(code *)(*pppuStack_270)[4])(pppuStack_270,pppuStack_270 != &ppuStack_2a8);
  }
  pJStack_2b8 = (JointsBuilder *)0x0;
  std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>::
  function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>
            ((function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)> *)
             &uStack_340,
             (function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)> *)
             auStack_2f8);
  uStack_340._Mypair._Myval2 = pJVar3;
  block4::OptimizedStorage<float>::create
            (&EStack_1c8,&uStack_340,1,EulerAngles,(MemoryResource *)puVar1);
  rl4::bpcm::Evaluator<float>::Accessor::assertRawDataEqual((Evaluator<float> *)JVar2,&EStack_1c8);
  rl4::bpcm::Evaluator<float>::Accessor::assertJointGroupsEqual
            ((Evaluator<float> *)JVar2,&EStack_1c8);
  rl4::bpcm::Evaluator<float>::Accessor::assertLODsEqual((Evaluator<float> *)JVar2,&EStack_1c8);
  rl4::bpcm::Evaluator<float>::~Evaluator<float>(&EStack_1c8);
  if (pJStack_2b8 != (JointsBuilder *)0x0) {
    pJStack_388 = pJStack_2b8;
    if (p_Stack_2c0 ==
        (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*p_Stack_2c0 + 0x10))(p_Stack_2c0,&pJStack_388);
  }
  if (p_Stack_2c0 != (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0
     ) {
    (**(code **)((longlong)*p_Stack_2c0 + 0x20))
              (p_Stack_2c0,
               p_Stack_2c0 !=
               (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)
               auStack_2f8);
    p_Stack_2c0 = (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0;
  }
  if (pJStack_1d8 != (JointsBuilder *)0x0) {
    pJStack_388 = pJStack_1d8;
    if (plStack_1e0 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0,&pJStack_388);
  }
  if (plStack_1e0 != (longlong *)0x0) {
    (**(code **)(*plStack_1e0 + 0x20))(plStack_1e0,plStack_1e0 != alStack_218);
    plStack_1e0 = (longlong *)0x0;
  }
  if (JStack_368.filters._Mypair._Myval2._Myfirst != (FilterType *)0x0) {
    (**(code **)(*(longlong *)JStack_368.filters._Mypair._Myval1 + 0x10))
              (JStack_368.filters._Mypair._Myval1,JStack_368.filters._Mypair._Myval2._Myfirst,
               ((longlong)JStack_368.filters._Mypair._Myval2._Myend -
                (longlong)JStack_368.filters._Mypair._Myval2._Myfirst >> 1) * 2,8);
    JStack_368.filters._Mypair._Myval2._Myend = (FilterType *)0x0;
    JStack_368.filters._Mypair._Myval2._Myfirst = (FilterType *)0x0;
    JStack_368.filters._Mypair._Myval2._Mylast = (FilterType *)0x0;
  }
  if (pJStack_228 != (JointsBuilder *)0x0) {
    pJStack_388 = pJStack_228;
    if ((longlong *)auStack_268._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*(longlong *)auStack_268._56_8_ + 0x10))(auStack_268._56_8_,&pJStack_388);
  }
  if ((longlong *)auStack_268._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)auStack_268._56_8_ + 0x20))
              (auStack_268._56_8_,(undefined1 *)auStack_268._56_8_ != auStack_268);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c4f8ad0

void * __thiscall
Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>_>
::_scalar_deleting_destructor_
          (Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>_>
           *this,uint param_1)

{
  block4::CanonicalReader::~CanonicalReader((CanonicalReader *)&this->field_0x70);
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)(this + 1));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)&this->field_0x70);
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x10);
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// CreateTest @ 14c4f8b40

Test * __thiscall
testing::internal::
TestFactoryImpl<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>_>_>
::CreateTest(TestFactoryImpl<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>_>_>
             *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x90);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ =
         (longlong)
         &Block4JointStorageBuilderTest<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    block4::CanonicalReader::CanonicalReader((CanonicalReader *)&this_00[1].gtest_flag_saver_);
    this_00->_padding_ =
         (longlong)
         &
         ___7__Block4JointStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T128_M_scalar_trimd__U__TCalculationType__0A___UNoopAdapter_bpcm_rl4___std____6B_
    ;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c4f8bb0

void * __thiscall
testing::internal::
TestFactoryImpl<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>_>_>
::_scalar_deleting_destructor_
          (TestFactoryImpl<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>_>_>
           )&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c4f8bf0

void * __thiscall
`anonymous_namespace'::Block4JointStorageBuilderTest<std::tuple<>_>::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  block4::CanonicalReader::~CanonicalReader((CanonicalReader *)((longlong)this + 0x70));
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// TestBody @ 14c4f8c60

void __thiscall
Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<>_>::TestBody
          (Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<>_> *this)

{
  return;
}

// `scalar_deleting_destructor' @ 14c4f8c70

void * __thiscall
Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<>_>::_scalar_deleting_destructor_
          (Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<>_> *this,uint param_1)

{
  block4::CanonicalReader::~CanonicalReader((CanonicalReader *)&this->field_0x70);
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)(this + 1));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)&this->field_0x70);
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x10);
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// CreateTest @ 14c4f8ce0

Test * __thiscall
testing::internal::
TestFactoryImpl<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<>_>_>::CreateTest
          (TestFactoryImpl<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<>_>_>
           *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x90);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&Block4JointStorageBuilderTest<std::tuple<>_>::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    block4::CanonicalReader::CanonicalReader((CanonicalReader *)&this_00[1].gtest_flag_saver_);
    this_00->_padding_ =
         (longlong)
         &___7__Block4JointStorageBuilderTest_LayoutOptimization_Test_V__tuple___V_std____6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c4f8d50

void * __thiscall
testing::internal::
TestFactoryImpl<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<>_>_>::
_scalar_deleting_destructor_
          (TestFactoryImpl<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<>_>_>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// CmpHelperEQ<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_> @ 14c4f8d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQ<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
          *param_3,vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
                   *param_4)

{
  ushort *_Buf1;
  ushort *_Buf2;
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong64 uVar5;
  ulonglong _Size;
  undefined1 auStackY_a8 [32];
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  _Buf1 = (param_3->_Mypair)._Myval2._Myfirst;
  _Buf2 = (param_4->_Mypair)._Myval2._Myfirst;
  _Size = (longlong)(param_3->_Mypair)._Myval2._Mylast - (longlong)_Buf1;
  if (((((longlong)(param_4->_Mypair)._Myval2._Mylast - (longlong)_Buf2 ^ _Size) &
       0xfffffffffffffffe) == 0) && (iVar2 = memcmp(_Buf1,_Buf2,_Size), iVar2 == 0)) {
    AssertionSuccess(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  PrintToString<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4);
  PrintToString<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,param_3);
  EqFailure(__return_storage_ptr__,param_1,param_2,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,false);
  if (0xf < uStack_60) {
    pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
    uVar5 = uStack_60 + 1;
    pvVar3 = pvVar1;
    if (0xfff < uVar5) {
      pvVar3 = *(void **)((longlong)pvVar1 + -8);
      uVar5 = uStack_60 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3))) goto LAB_14c4f8eb8;
    }
    ::operator_delete(pvVar3,uVar5);
  }
  local_78._Buf[0] = '\0';
  local_68 = ___xmm_000000000000000f0000000000000000;
  uStack_60 = _UNK_15076add8;
  if (0xf < local_40) {
    uVar5 = local_40 + 1;
    uVar4 = local_58._Ptr;
    if (0xfff < uVar5) {
      uVar4 = *(undefined8 *)(local_58._Ptr + -8);
      uVar5 = local_40 + 0x28;
      if ((char *)0x1f < local_58._Ptr + (-8 - uVar4)) {
LAB_14c4f8eb8:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar4,uVar5);
  }
  return __return_storage_ptr__;
}

// CmpHelperEQ<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_> @ 14c4f8f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQ<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>
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
        if (*(float *)(lVar8 + (longlong)pfVar6) != *pfVar6) goto LAB_14c4f8f81;
        pfVar6 = pfVar6 + 1;
      } while (pfVar6 != pfVar1);
    }
    AssertionSuccess(__return_storage_ptr__);
  }
  else {
LAB_14c4f8f81:
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
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4))) goto LAB_14c4f903d;
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
LAB_14c4f903d:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar5,uVar7);
    }
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_> @ 14c4f9080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQFailure<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
          *param_3,vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
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
  PrintToString<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4);
  PrintToString<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
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
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c4f9168;
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
LAB_14c4f9168:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar3,uVar4);
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_> @ 14c4f91b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQFailure<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *param_3,
          vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *param_4)

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
  PrintToString<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4);
  PrintToString<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>
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
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c4f9298;
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
LAB_14c4f9298:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar3,uVar4);
  }
  return __return_storage_ptr__;
}

// Compare<unsigned_int,unsigned_int,0> @ 14c4f92e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::EqHelper::Compare<unsigned_int,unsigned_int,0>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,uint *param_3,
          uint *param_4)

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
    pbVar2 = FormatForComparisonFailureMessage<unsigned_int,unsigned_int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68
                        ,param_4,param_3);
    pbVar3 = FormatForComparisonFailureMessage<unsigned_int,unsigned_int>
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
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c4f93f2;
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
LAB_14c4f93f2:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar5,uVar6);
    }
  }
  return __return_storage_ptr__;
}

// Compare<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,0> @ 14c4f9440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::EqHelper::
Compare<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,0>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
          *param_3,vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>
                   *param_4)

{
  ushort *_Buf1;
  ushort *_Buf2;
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong64 uVar5;
  ulonglong _Size;
  undefined1 auStackY_a8 [32];
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  _Buf1 = (param_3->_Mypair)._Myval2._Myfirst;
  _Buf2 = (param_4->_Mypair)._Myval2._Myfirst;
  _Size = (longlong)(param_3->_Mypair)._Myval2._Mylast - (longlong)_Buf1;
  if (((((longlong)(param_4->_Mypair)._Myval2._Mylast - (longlong)_Buf2 ^ _Size) &
       0xfffffffffffffffe) == 0) && (iVar2 = memcmp(_Buf1,_Buf2,_Size), iVar2 == 0)) {
    AssertionSuccess(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  PrintToString<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4);
  PrintToString<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,param_3);
  EqFailure(__return_storage_ptr__,param_1,param_2,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,false);
  if (0xf < uStack_60) {
    pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
    uVar5 = uStack_60 + 1;
    pvVar3 = pvVar1;
    if (0xfff < uVar5) {
      pvVar3 = *(void **)((longlong)pvVar1 + -8);
      uVar5 = uStack_60 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3))) goto LAB_14c4f9564;
    }
    ::operator_delete(pvVar3,uVar5);
  }
  local_78._Buf[0] = '\0';
  local_68 = ___xmm_000000000000000f0000000000000000;
  uStack_60 = _UNK_15076add8;
  if (0xf < local_40) {
    uVar5 = local_40 + 1;
    uVar4 = local_58._Ptr;
    if (0xfff < uVar5) {
      uVar4 = *(undefined8 *)(local_58._Ptr + -8);
      uVar5 = local_40 + 0x28;
      if ((char *)0x1f < local_58._Ptr + (-8 - uVar4)) {
LAB_14c4f9564:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar4,uVar5);
  }
  return __return_storage_ptr__;
}

// Compare<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,0> @ 14c4f95b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::EqHelper::
Compare<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,0>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
          *param_3,vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
                   *param_4)

{
  ushort *_Buf1;
  ushort *_Buf2;
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong64 uVar5;
  ulonglong _Size;
  undefined1 auStackY_a8 [32];
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  _Buf1 = (param_3->_Mypair)._Myval2._Myfirst;
  _Buf2 = (param_4->_Mypair)._Myval2._Myfirst;
  _Size = (longlong)(param_3->_Mypair)._Myval2._Mylast - (longlong)_Buf1;
  if (((((longlong)(param_4->_Mypair)._Myval2._Mylast - (longlong)_Buf2 ^ _Size) &
       0xfffffffffffffffe) == 0) && (iVar2 = memcmp(_Buf1,_Buf2,_Size), iVar2 == 0)) {
    AssertionSuccess(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  PrintToString<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4);
  PrintToString<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,param_3);
  EqFailure(__return_storage_ptr__,param_1,param_2,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,false);
  if (0xf < uStack_60) {
    pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
    uVar5 = uStack_60 + 1;
    pvVar3 = pvVar1;
    if (0xfff < uVar5) {
      pvVar3 = *(void **)((longlong)pvVar1 + -8);
      uVar5 = uStack_60 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3))) goto LAB_14c4f96d4;
    }
    ::operator_delete(pvVar3,uVar5);
  }
  local_78._Buf[0] = '\0';
  local_68 = ___xmm_000000000000000f0000000000000000;
  uStack_60 = _UNK_15076add8;
  if (0xf < local_40) {
    uVar5 = local_40 + 1;
    uVar4 = local_58._Ptr;
    if (0xfff < uVar5) {
      uVar4 = *(undefined8 *)(local_58._Ptr + -8);
      uVar5 = local_40 + 0x28;
      if ((char *)0x1f < local_58._Ptr + (-8 - uVar4)) {
LAB_14c4f96d4:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar4,uVar5);
  }
  return __return_storage_ptr__;
}

// DefaultPrintTo<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_> @ 14c4f9720

void __cdecl
testing::internal::
DefaultPrintTo<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
          (WrapPrinterType<0> param_1,
          vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
          *param_2,basic_ostream<char,std::char_traits<char>_> *param_3)

{
  ushort *puVar1;
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
          goto LAB_14c4f978d;
        }
      }
      std::operator<<<std::char_traits<char>_>(param_3,' ');
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_3,*puVar1);
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + 1;
    } while (puVar1 != (param_2->_Mypair)._Myval2._Mylast);
    if (lVar2 != 0) {
LAB_14c4f978d:
      std::operator<<<std::char_traits<char>_>(param_3,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>(param_3,'}');
  return;
}

// DefaultPrintTo<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_> @ 14c4f97d0

void __cdecl
testing::internal::
DefaultPrintTo<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>
          (WrapPrinterType<0> param_1,
          vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *param_2,
          basic_ostream<char,std::char_traits<char>_> *param_3)

{
  float *pfVar1;
  longlong lVar2;
  
  std::operator<<<std::char_traits<char>_>(param_3,'{');
  pfVar1 = (param_2->_Mypair)._Myval2._Myfirst;
  lVar2 = 0;
  if (pfVar1 != (param_2->_Mypair)._Myval2._Mylast) {
    do {
      if (lVar2 != 0) {
        std::operator<<<std::char_traits<char>_>(param_3,',');
        if (lVar2 == 0x20) {
          std::operator<<<std::char_traits<char>_>(param_3," ...");
          goto LAB_14c4f983e;
        }
      }
      std::operator<<<std::char_traits<char>_>(param_3,' ');
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_3,*pfVar1);
      pfVar1 = pfVar1 + 1;
      lVar2 = lVar2 + 1;
    } while (pfVar1 != (param_2->_Mypair)._Myval2._Mylast);
    if (lVar2 != 0) {
LAB_14c4f983e:
      std::operator<<<std::char_traits<char>_>(param_3,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>(param_3,'}');
  return;
}

// FormatForComparisonFailureMessage<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_> @ 14c4f9880

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
          *param_1,vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
                   *param_2)

{
  PrintToString<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FormatForComparisonFailureMessage<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_> @ 14c4f98a0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>,std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *param_1,
          vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *param_2)

{
  PrintToString<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types5<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>_> @ 14c4f98c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
* __cdecl testing::internal::
          GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types5<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>_>
                    (vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                     *__return_storage_ptr__)

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
  Types4<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>
  local_48;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_40;
  _Bxty local_38;
  ulong64 local_28;
  ulong64 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  (__return_storage_ptr__->_Mypair)._Myval2._Myfirst =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mylast =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myend =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  this = (Message *)testing::Message::Message((Message *)&local_40);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((this->ss_)._Mypair._Myval2)->field_0x10,0);
  testing::Message::GetString
            (this,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38);
  if (local_40._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar5 = (undefined8 *)
             ((longlong)&(local_40._Myval2)->field_0x0 +
             (longlong)*(int *)(*(longlong *)local_40._Myval2 + 4));
    (**(code **)*puVar5)(puVar5,1);
  }
  pbVar2 = (__return_storage_ptr__->_Mypair)._Myval2._Mylast;
  if (pbVar2 == (__return_storage_ptr__->_Mypair)._Myval2._Myend) {
    std::
    vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
    ::_Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              (__return_storage_ptr__,pbVar2,
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
    ppbVar1 = &(__return_storage_ptr__->_Mypair)._Myval2._Mylast;
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
  GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types4<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>_>
            (local_48,__return_storage_ptr__,1);
  return __return_storage_ptr__;
}

// GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types2<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>_> @ 14c4f9a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
testing::internal::
GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types2<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>_>
          (Types2<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>
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

// GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types3<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>_> @ 14c4f9c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
testing::internal::
GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types3<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>_>
          (Types3<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>
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
  Types2<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>
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
  GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types2<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>_>
            (local_48,param_2,param_3 + 1);
  return;
}

// GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types4<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>_> @ 14c4f9d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
testing::internal::
GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types4<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>_>
          (Types4<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>
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
  Types2<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>
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
  GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types2<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>_>
            (local_58,param_2,param_3 + 2);
  return;
}

// GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types5<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>_> @ 14c4f9fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
testing::internal::
GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types5<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>_>
          (Types5<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>
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
  Types4<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>
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
  GenerateNamesRecursively<testing::internal::DefaultNameGenerator,testing::internal::Types4<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>_>
            (local_48,param_2,param_3 + 1);
  return;
}

// GetTypeName<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_> @ 14c4fa100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
GetTypeName<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 6;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  *(undefined4 *)&(__return_storage_ptr__->_Mypair)._Myval2._Bx = _s_<type>;
  *(undefined2 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 4) = DAT_1528703b4;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[6] = '\0';
  return __return_storage_ptr__;
}

// GetTypeName<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>_> @ 14c4fa140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
GetTypeName<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 6;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  *(undefined4 *)&(__return_storage_ptr__->_Mypair)._Myval2._Bx = _s_<type>;
  *(undefined2 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 4) = DAT_1528703b4;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[6] = '\0';
  return __return_storage_ptr__;
}

// GetTypeName<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_> @ 14c4fa180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
GetTypeName<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 6;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  *(undefined4 *)&(__return_storage_ptr__->_Mypair)._Myval2._Bx = _s_<type>;
  *(undefined2 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 4) = DAT_1528703b4;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[6] = '\0';
  return __return_storage_ptr__;
}

// GetTypeName<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>_> @ 14c4fa1c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
GetTypeName<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 6;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  *(undefined4 *)&(__return_storage_ptr__->_Mypair)._Myval2._Bx = _s_<type>;
  *(undefined2 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 4) = DAT_1528703b4;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[6] = '\0';
  return __return_storage_ptr__;
}

// PrintTo<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_> @ 14c4fa200

void __cdecl
testing::internal::
PrintTo<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
          (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
           *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  ushort *puVar1;
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
          goto LAB_14c4fa26d;
        }
      }
      std::operator<<<std::char_traits<char>_>(param_2,' ');
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*puVar1);
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + 1;
    } while (puVar1 != (param_1->_Mypair)._Myval2._Mylast);
    if (lVar2 != 0) {
LAB_14c4fa26d:
      std::operator<<<std::char_traits<char>_>(param_2,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>(param_2,'}');
  return;
}

// PrintTo<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_> @ 14c4fa2b0

void __cdecl
testing::internal::
PrintTo<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>
          (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *param_1,
          basic_ostream<char,std::char_traits<char>_> *param_2)

{
  float *pfVar1;
  longlong lVar2;
  
  std::operator<<<std::char_traits<char>_>(param_2,'{');
  pfVar1 = (param_1->_Mypair)._Myval2._Myfirst;
  lVar2 = 0;
  if (pfVar1 != (param_1->_Mypair)._Myval2._Mylast) {
    do {
      if (lVar2 != 0) {
        std::operator<<<std::char_traits<char>_>(param_2,',');
        if (lVar2 == 0x20) {
          std::operator<<<std::char_traits<char>_>(param_2," ...");
          goto LAB_14c4fa31e;
        }
      }
      std::operator<<<std::char_traits<char>_>(param_2,' ');
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*pfVar1);
      pfVar1 = pfVar1 + 1;
      lVar2 = lVar2 + 1;
    } while (pfVar1 != (param_1->_Mypair)._Myval2._Mylast);
    if (lVar2 != 0) {
LAB_14c4fa31e:
      std::operator<<<std::char_traits<char>_>(param_2,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>(param_2,'}');
  return;
}

// PrintToString<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_> @ 14c4fa360

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::
PrintToString<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
          *param_1)

{
  char *pcVar1;
  ushort *puVar2;
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
  puVar2 = (param_1->_Mypair)._Myval2._Myfirst;
  if (puVar2 != (param_1->_Mypair)._Myval2._Mylast) {
    do {
      if (lVar3 != 0) {
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)local_118,',');
        if (lVar3 == 0x20) {
          std::operator<<<std::char_traits<char>_>
                    ((basic_ostream<char,std::char_traits<char>_> *)local_118," ...");
          goto LAB_14c4fa469;
        }
      }
      std::operator<<<std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)local_118,' ');
      std::basic_ostream<char,std::char_traits<char>_>::operator<<
                ((basic_ostream<char,std::char_traits<char>_> *)local_118,*puVar2);
      puVar2 = puVar2 + 1;
      lVar3 = lVar3 + 1;
    } while (puVar2 != (param_1->_Mypair)._Myval2._Mylast);
    if (lVar3 != 0) {
LAB_14c4fa469:
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

// PrintToString<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_> @ 14c4fa5a0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::PrintToString<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *param_1)

{
  char *pcVar1;
  float *pfVar2;
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
  pfVar2 = (param_1->_Mypair)._Myval2._Myfirst;
  if (pfVar2 != (param_1->_Mypair)._Myval2._Mylast) {
    do {
      if (lVar3 != 0) {
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)local_118,',');
        if (lVar3 == 0x20) {
          std::operator<<<std::char_traits<char>_>
                    ((basic_ostream<char,std::char_traits<char>_> *)local_118," ...");
          goto LAB_14c4fa6aa;
        }
      }
      std::operator<<<std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)local_118,' ');
      std::basic_ostream<char,std::char_traits<char>_>::operator<<
                ((basic_ostream<char,std::char_traits<char>_> *)local_118,*pfVar2);
      pfVar2 = pfVar2 + 1;
      lVar3 = lVar3 + 1;
    } while (pfVar2 != (param_1->_Mypair)._Myval2._Mylast);
    if (lVar3 != 0) {
LAB_14c4fa6aa:
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

// UniversalPrint<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_> @ 14c4fa7e0

void __cdecl
testing::internal::
UniversalPrint<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>_>
          (vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>
           *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  ushort *puVar1;
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
          goto LAB_14c4fa84d;
        }
      }
      std::operator<<<std::char_traits<char>_>(param_2,' ');
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*puVar1);
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + 1;
    } while (puVar1 != (param_1->_Mypair)._Myval2._Mylast);
    if (lVar2 != 0) {
LAB_14c4fa84d:
      std::operator<<<std::char_traits<char>_>(param_2,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>(param_2,'}');
  return;
}

// UniversalPrint<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_> @ 14c4fa890

void __cdecl
testing::internal::
UniversalPrint<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>
          (vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_> *param_1,
          basic_ostream<char,std::char_traits<char>_> *param_2)

{
  float *pfVar1;
  longlong lVar2;
  
  std::operator<<<std::char_traits<char>_>(param_2,'{');
  pfVar1 = (param_1->_Mypair)._Myval2._Myfirst;
  lVar2 = 0;
  if (pfVar1 != (param_1->_Mypair)._Myval2._Mylast) {
    do {
      if (lVar2 != 0) {
        std::operator<<<std::char_traits<char>_>(param_2,',');
        if (lVar2 == 0x20) {
          std::operator<<<std::char_traits<char>_>(param_2," ...");
          goto LAB_14c4fa8fe;
        }
      }
      std::operator<<<std::char_traits<char>_>(param_2,' ');
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*pfVar1);
      pfVar1 = pfVar1 + 1;
      lVar2 = lVar2 + 1;
    } while (pfVar1 != (param_1->_Mypair)._Myval2._Mylast);
    if (lVar2 != 0) {
LAB_14c4fa8fe:
      std::operator<<<std::char_traits<char>_>(param_2,' ');
    }
  }
  std::operator<<<std::char_traits<char>_>(param_2,'}');
  return;
}

// buildStorage<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_> @ 14c4fa940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`anonymous_namespace'::
Block4JointStorageBuilderTest<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>
::
buildStorage<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>
          (void *this)

{
  MemoryResource *pMVar1;
  JointsBuilder JVar2;
  JointGroupLinearCalculationStrategy<float> *pJVar3;
  MemoryResource *pMVar4;
  undefined1 auStackY_3b8 [32];
  JointsBuilder *local_388;
  Configuration local_380;
  JointBehaviorFilter local_368;
  unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
  local_340;
  undefined1 local_2f8 [56];
  _Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *local_2c0;
  JointsBuilder *local_2b8;
  undefined **local_2a8;
  MemoryResource *local_2a0;
  undefined ***local_270;
  undefined1 local_268 [64];
  JointsBuilder *local_228;
  longlong local_218 [7];
  longlong *local_1e0;
  JointsBuilder *local_1d8;
  Evaluator<float> local_1c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  pMVar1 = (MemoryResource *)((longlong)this + 0x10);
  local_380.loadJoints = true;
  local_380.loadBlendShapes = true;
  local_380.loadAnimatedMaps = true;
  local_380.loadMachineLearnedBehavior = true;
  local_380.loadRBFBehavior = true;
  local_380.loadTwistSwingBehavior = true;
  local_380.translationType = Vector;
  local_380.rotationType = Quaternions;
  local_380.rotationOrder = XYZ;
  local_380.scaleType = Vector;
  local_380.translationPruningThreshold = 0.0;
  local_380.rotationPruningThreshold = 0.0;
  local_380.scalePruningThreshold = 0.0;
  local_380.calculationType = Scalar;
  rl4::JointsBuilder::create
            ((unique_ptr<rl4::JointsBuilder,std::function<void___cdecl(rl4::JointsBuilder_*)>_> *)
             local_268,&local_380,pMVar1);
  rl4::JointBehaviorFilter::JointBehaviorFilter(&local_368,(Reader *)((longlong)this + 0x18),pMVar1)
  ;
  rl4::JointBehaviorFilter::include(&local_368,Vector);
  rl4::JointBehaviorFilter::include(&local_368,EulerAngles);
  rl4::JointBehaviorFilter::include(&local_368,Vector);
  (**(code **)((longlong)*local_228 + 8))(local_228,&local_368);
  (**(code **)((longlong)*local_228 + 0x18))(local_228,&local_368);
  (**(code **)((longlong)*local_228 + 0x20))(local_228,&local_368);
  (**(code **)((longlong)*local_228 + 0x30))(local_228,local_218);
  JVar2 = local_1d8[9];
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pMVar4 = (MemoryResource *)
           &`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
            ::__l2::dmr;
  if (pMVar1 != (MemoryResource *)0x0) {
    pMVar4 = pMVar1;
  }
  pJVar3 = (JointGroupLinearCalculationStrategy<float> *)
           (**(code **)((longlong)*pMVar4 + 8))(pMVar4);
  *pJVar3 = (JointGroupLinearCalculationStrategy<float>)
            &
            ___7__VectorizedJointGroupLinearCalculationStrategy_MU__T128_M_scalar_trimd__U__EulerAnglesToQuaternions_U__ang_MUdegrees_impl_tdm___tdm___0A__bpcm_rl4___bpcm_rl4__6B_
  ;
  local_2a8 = &
              ___7___Func_impl_no_alloc_V<lambda_1>__1____create___V___ManagedInstance_V__unique_ptr_U__JointGroupLinearCalculationStrategy_M_bpcm_rl4__V__function___A6AXPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___Z_std___std__U__VectorizedJointGroupLinearCalculationStrategy_MU__T128_M_scalar_trimd__U__EulerAnglesToQuaternions_U__ang_MUdegrees_impl_tdm___tdm___0A__bpcm_rl4___bpcm_rl4__U__JointGroupLinearCalculationStrategy_M_45__impl_pma__QEAA_AV__unique_ptr_U__JointGroupLinearCalculationStrategy_M_bpcm_rl4__V__function___A6AXPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___Z_std___std__XZ_XPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___std__6B_
  ;
  local_270 = &local_2a8;
  local_2c0 = (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0;
  local_2a0 = pMVar4;
  local_2c0 = std::
              _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>,rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*>
              ::_Move(&local_2a8,local_2f8);
  if (local_270 != (undefined ***)0x0) {
    (*(code *)(*local_270)[4])(local_270,local_270 != &local_2a8);
  }
  local_2b8 = (JointsBuilder *)0x0;
  std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>::
  function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>
            ((function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)> *)
             &local_340,
             (function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)> *)
             local_2f8);
  local_340._Mypair._Myval2 = pJVar3;
  block4::OptimizedStorage<float>::create(&local_1c8,&local_340,0,Quaternions,pMVar1);
  rl4::bpcm::Evaluator<float>::Accessor::assertRawDataEqual((Evaluator<float> *)JVar2,&local_1c8);
  rl4::bpcm::Evaluator<float>::Accessor::assertJointGroupsEqual
            ((Evaluator<float> *)JVar2,&local_1c8);
  rl4::bpcm::Evaluator<float>::Accessor::assertLODsEqual((Evaluator<float> *)JVar2,&local_1c8);
  rl4::bpcm::Evaluator<float>::~Evaluator<float>(&local_1c8);
  if (local_2b8 != (JointsBuilder *)0x0) {
    local_388 = local_2b8;
    if (local_2c0 == (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0
       ) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*local_2c0 + 0x10))(local_2c0,&local_388);
  }
  if (local_2c0 != (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0)
  {
    (**(code **)((longlong)*local_2c0 + 0x20))
              (local_2c0,
               local_2c0 !=
               (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)local_2f8
              );
    local_2c0 = (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0;
  }
  if (local_1d8 != (JointsBuilder *)0x0) {
    local_388 = local_1d8;
    if (local_1e0 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*local_1e0 + 0x10))(local_1e0,&local_388);
  }
  if (local_1e0 != (longlong *)0x0) {
    (**(code **)(*local_1e0 + 0x20))(local_1e0,local_1e0 != local_218);
    local_1e0 = (longlong *)0x0;
  }
  if (local_368.filters._Mypair._Myval2._Myfirst != (FilterType *)0x0) {
    (**(code **)(*(longlong *)local_368.filters._Mypair._Myval1 + 0x10))
              (local_368.filters._Mypair._Myval1,local_368.filters._Mypair._Myval2._Myfirst,
               ((longlong)local_368.filters._Mypair._Myval2._Myend -
                (longlong)local_368.filters._Mypair._Myval2._Myfirst >> 1) * 2,8);
    local_368.filters._Mypair._Myval2._Myend = (FilterType *)0x0;
    local_368.filters._Mypair._Myval2._Myfirst = (FilterType *)0x0;
    local_368.filters._Mypair._Myval2._Mylast = (FilterType *)0x0;
  }
  if (local_228 != (JointsBuilder *)0x0) {
    local_388 = local_228;
    if ((longlong *)local_268._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*(longlong *)local_268._56_8_ + 0x10))(local_268._56_8_,&local_388);
  }
  if ((longlong *)local_268._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_268._56_8_ + 0x20))
              (local_268._56_8_,(undefined1 *)local_268._56_8_ != local_268);
  }
  return;
}

// buildStorage<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>_> @ 14c4facd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`anonymous_namespace'::
Block4JointStorageBuilderTest<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>_>
::
buildStorage<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>_>
          (void *this)

{
  MemoryResource *pMVar1;
  JointsBuilder JVar2;
  JointGroupLinearCalculationStrategy<float> *pJVar3;
  MemoryResource *pMVar4;
  undefined1 auStackY_3b8 [32];
  JointsBuilder *local_388;
  Configuration local_380;
  JointBehaviorFilter local_368;
  unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
  local_340;
  undefined1 local_2f8 [56];
  _Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *local_2c0;
  JointsBuilder *local_2b8;
  undefined **local_2a8;
  MemoryResource *local_2a0;
  undefined ***local_270;
  undefined1 local_268 [64];
  JointsBuilder *local_228;
  longlong local_218 [7];
  longlong *local_1e0;
  JointsBuilder *local_1d8;
  Evaluator<float> local_1c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  pMVar1 = (MemoryResource *)((longlong)this + 0x10);
  local_380.loadJoints = true;
  local_380.loadBlendShapes = true;
  local_380.loadAnimatedMaps = true;
  local_380.loadMachineLearnedBehavior = true;
  local_380.loadRBFBehavior = true;
  local_380.loadTwistSwingBehavior = true;
  local_380.translationType = Vector;
  local_380.rotationType = EulerAngles;
  local_380.rotationOrder = XYZ;
  local_380.scaleType = Vector;
  local_380.translationPruningThreshold = 0.0;
  local_380.rotationPruningThreshold = 0.0;
  local_380.scalePruningThreshold = 0.0;
  local_380.calculationType = Scalar;
  rl4::JointsBuilder::create
            ((unique_ptr<rl4::JointsBuilder,std::function<void___cdecl(rl4::JointsBuilder_*)>_> *)
             local_268,&local_380,pMVar1);
  rl4::JointBehaviorFilter::JointBehaviorFilter(&local_368,(Reader *)((longlong)this + 0x18),pMVar1)
  ;
  rl4::JointBehaviorFilter::include(&local_368,Vector);
  rl4::JointBehaviorFilter::include(&local_368,EulerAngles);
  rl4::JointBehaviorFilter::include(&local_368,Vector);
  (**(code **)((longlong)*local_228 + 8))(local_228,&local_368);
  (**(code **)((longlong)*local_228 + 0x18))(local_228,&local_368);
  (**(code **)((longlong)*local_228 + 0x20))(local_228,&local_368);
  (**(code **)((longlong)*local_228 + 0x30))(local_228,local_218);
  JVar2 = local_1d8[9];
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pMVar4 = (MemoryResource *)
           &`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
            ::__l2::dmr;
  if (pMVar1 != (MemoryResource *)0x0) {
    pMVar4 = pMVar1;
  }
  pJVar3 = (JointGroupLinearCalculationStrategy<float> *)
           (**(code **)((longlong)*pMVar4 + 8))(pMVar4,8,8);
  *pJVar3 = (JointGroupLinearCalculationStrategy<float>)
            &
            ___7__VectorizedJointGroupLinearCalculationStrategy_MU__T128_M_scalar_trimd__UNoopAdapter_bpcm_rl4___bpcm_rl4__6B_
  ;
  local_2a8 = &
              ___7___Func_impl_no_alloc_V<lambda_1>__1____create___V___ManagedInstance_V__unique_ptr_U__JointGroupLinearCalculationStrategy_M_bpcm_rl4__V__function___A6AXPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___Z_std___std__U__VectorizedJointGroupLinearCalculationStrategy_MU__T128_M_scalar_trimd__UNoopAdapter_bpcm_rl4___bpcm_rl4__U__JointGroupLinearCalculationStrategy_M_45__impl_pma__QEAA_AV__unique_ptr_U__JointGroupLinearCalculationStrategy_M_bpcm_rl4__V__function___A6AXPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___Z_std___std__XZ_XPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___std__6B_
  ;
  local_270 = &local_2a8;
  local_2c0 = (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0;
  local_2a0 = pMVar4;
  local_2c0 = std::
              _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>,rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::scalar::T128<float>,rl4::bpcm::NoopAdapter>,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*>
              ::_Move(&local_2a8,local_2f8);
  if (local_270 != (undefined ***)0x0) {
    (*(code *)(*local_270)[4])(local_270,local_270 != &local_2a8);
  }
  local_2b8 = (JointsBuilder *)0x0;
  std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>::
  function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>
            ((function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)> *)
             &local_340,
             (function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)> *)
             local_2f8);
  local_340._Mypair._Myval2 = pJVar3;
  block4::OptimizedStorage<float>::create(&local_1c8,&local_340,1,EulerAngles,pMVar1);
  rl4::bpcm::Evaluator<float>::Accessor::assertRawDataEqual((Evaluator<float> *)JVar2,&local_1c8);
  rl4::bpcm::Evaluator<float>::Accessor::assertJointGroupsEqual
            ((Evaluator<float> *)JVar2,&local_1c8);
  rl4::bpcm::Evaluator<float>::Accessor::assertLODsEqual((Evaluator<float> *)JVar2,&local_1c8);
  rl4::bpcm::Evaluator<float>::~Evaluator<float>(&local_1c8);
  if (local_2b8 != (JointsBuilder *)0x0) {
    local_388 = local_2b8;
    if (local_2c0 == (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0
       ) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*local_2c0 + 0x10))(local_2c0,&local_388);
  }
  if (local_2c0 != (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0)
  {
    (**(code **)((longlong)*local_2c0 + 0x20))
              (local_2c0,
               local_2c0 !=
               (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)local_2f8
              );
    local_2c0 = (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0;
  }
  if (local_1d8 != (JointsBuilder *)0x0) {
    local_388 = local_1d8;
    if (local_1e0 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*local_1e0 + 0x10))(local_1e0,&local_388);
  }
  if (local_1e0 != (longlong *)0x0) {
    (**(code **)(*local_1e0 + 0x20))(local_1e0,local_1e0 != local_218);
    local_1e0 = (longlong *)0x0;
  }
  if (local_368.filters._Mypair._Myval2._Myfirst != (FilterType *)0x0) {
    (**(code **)(*(longlong *)local_368.filters._Mypair._Myval1 + 0x10))
              (local_368.filters._Mypair._Myval1,local_368.filters._Mypair._Myval2._Myfirst,
               ((longlong)local_368.filters._Mypair._Myval2._Myend -
                (longlong)local_368.filters._Mypair._Myval2._Myfirst >> 1) * 2,8);
    local_368.filters._Mypair._Myval2._Myend = (FilterType *)0x0;
    local_368.filters._Mypair._Myval2._Myfirst = (FilterType *)0x0;
    local_368.filters._Mypair._Myval2._Mylast = (FilterType *)0x0;
  }
  if (local_228 != (JointsBuilder *)0x0) {
    local_388 = local_228;
    if ((longlong *)local_268._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*(longlong *)local_268._56_8_ + 0x10))(local_268._56_8_,&local_388);
  }
  if ((longlong *)local_268._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_268._56_8_ + 0x20))
              (local_268._56_8_,(undefined1 *)local_268._56_8_ != local_268);
  }
  return;
}

// buildStorage<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_> @ 14c4fb060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`anonymous_namespace'::
Block4JointStorageBuilderTest<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>
::
buildStorage<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>
          (void *this)

{
  MemoryResource *pMVar1;
  JointsBuilder JVar2;
  JointGroupLinearCalculationStrategy<float> *pJVar3;
  MemoryResource *pMVar4;
  undefined1 auStackY_3b8 [32];
  JointsBuilder *local_388;
  Configuration local_380;
  JointBehaviorFilter local_368;
  unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
  local_340;
  undefined1 local_2f8 [56];
  _Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *local_2c0;
  JointsBuilder *local_2b8;
  undefined **local_2a8;
  MemoryResource *local_2a0;
  undefined ***local_270;
  undefined1 local_268 [64];
  JointsBuilder *local_228;
  longlong local_218 [7];
  longlong *local_1e0;
  JointsBuilder *local_1d8;
  Evaluator<float> local_1c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  pMVar1 = (MemoryResource *)((longlong)this + 0x10);
  local_380.loadJoints = true;
  local_380.loadBlendShapes = true;
  local_380.loadAnimatedMaps = true;
  local_380.loadMachineLearnedBehavior = true;
  local_380.loadRBFBehavior = true;
  local_380.loadTwistSwingBehavior = true;
  local_380.translationType = Vector;
  local_380.rotationType = Quaternions;
  local_380.rotationOrder = XYZ;
  local_380.scaleType = Vector;
  local_380.translationPruningThreshold = 0.0;
  local_380.rotationPruningThreshold = 0.0;
  local_380.scalePruningThreshold = 0.0;
  local_380.calculationType = SSE;
  rl4::JointsBuilder::create
            ((unique_ptr<rl4::JointsBuilder,std::function<void___cdecl(rl4::JointsBuilder_*)>_> *)
             local_268,&local_380,pMVar1);
  rl4::JointBehaviorFilter::JointBehaviorFilter(&local_368,(Reader *)((longlong)this + 0x18),pMVar1)
  ;
  rl4::JointBehaviorFilter::include(&local_368,Vector);
  rl4::JointBehaviorFilter::include(&local_368,EulerAngles);
  rl4::JointBehaviorFilter::include(&local_368,Vector);
  (**(code **)((longlong)*local_228 + 8))(local_228,&local_368);
  (**(code **)((longlong)*local_228 + 0x18))(local_228,&local_368);
  (**(code **)((longlong)*local_228 + 0x20))(local_228,&local_368);
  (**(code **)((longlong)*local_228 + 0x30))(local_228,local_218);
  JVar2 = local_1d8[9];
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pMVar4 = (MemoryResource *)
           &`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,8,pma::DefaultMemoryResource>(void)___ptr64'
            ::__l2::dmr;
  if (pMVar1 != (MemoryResource *)0x0) {
    pMVar4 = pMVar1;
  }
  pJVar3 = (JointGroupLinearCalculationStrategy<float> *)
           (**(code **)((longlong)*pMVar4 + 8))(pMVar4);
  *pJVar3 = (JointGroupLinearCalculationStrategy<float>)
            &
            ___7__VectorizedJointGroupLinearCalculationStrategy_MUF128_sse_trimd__U__EulerAnglesToQuaternions_U__ang_MUdegrees_impl_tdm___tdm___0A__bpcm_rl4___bpcm_rl4__6B_
  ;
  local_2a8 = &
              ___7___Func_impl_no_alloc_V<lambda_1>__1____create___V___ManagedInstance_V__unique_ptr_U__JointGroupLinearCalculationStrategy_M_bpcm_rl4__V__function___A6AXPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___Z_std___std__U__VectorizedJointGroupLinearCalculationStrategy_MUF128_sse_trimd__U__EulerAnglesToQuaternions_U__ang_MUdegrees_impl_tdm___tdm___0A__bpcm_rl4___bpcm_rl4__U__JointGroupLinearCalculationStrategy_M_45__impl_pma__QEAA_AV__unique_ptr_U__JointGroupLinearCalculationStrategy_M_bpcm_rl4__V__function___A6AXPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___Z_std___std__XZ_XPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___std__6B_
  ;
  local_270 = &local_2a8;
  local_2c0 = (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0;
  local_2a0 = pMVar4;
  local_2c0 = std::
              _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>,rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*>
              ::_Move(&local_2a8,local_2f8);
  if (local_270 != (undefined ***)0x0) {
    (*(code *)(*local_270)[4])(local_270,local_270 != &local_2a8);
  }
  local_2b8 = (JointsBuilder *)0x0;
  std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>::
  function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>
            ((function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)> *)
             &local_340,
             (function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)> *)
             local_2f8);
  local_340._Mypair._Myval2 = pJVar3;
  block4::OptimizedStorage<float>::create(&local_1c8,&local_340,0,Quaternions,pMVar1);
  rl4::bpcm::Evaluator<float>::Accessor::assertRawDataEqual((Evaluator<float> *)JVar2,&local_1c8);
  rl4::bpcm::Evaluator<float>::Accessor::assertJointGroupsEqual
            ((Evaluator<float> *)JVar2,&local_1c8);
  rl4::bpcm::Evaluator<float>::Accessor::assertLODsEqual((Evaluator<float> *)JVar2,&local_1c8);
  rl4::bpcm::Evaluator<float>::~Evaluator<float>(&local_1c8);
  if (local_2b8 != (JointsBuilder *)0x0) {
    local_388 = local_2b8;
    if (local_2c0 == (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0
       ) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*local_2c0 + 0x10))(local_2c0,&local_388);
  }
  if (local_2c0 != (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0)
  {
    (**(code **)((longlong)*local_2c0 + 0x20))
              (local_2c0,
               local_2c0 !=
               (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)local_2f8
              );
    local_2c0 = (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0;
  }
  if (local_1d8 != (JointsBuilder *)0x0) {
    local_388 = local_1d8;
    if (local_1e0 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*local_1e0 + 0x10))(local_1e0,&local_388);
  }
  if (local_1e0 != (longlong *)0x0) {
    (**(code **)(*local_1e0 + 0x20))(local_1e0,local_1e0 != local_218);
    local_1e0 = (longlong *)0x0;
  }
  if (local_368.filters._Mypair._Myval2._Myfirst != (FilterType *)0x0) {
    (**(code **)(*(longlong *)local_368.filters._Mypair._Myval1 + 0x10))
              (local_368.filters._Mypair._Myval1,local_368.filters._Mypair._Myval2._Myfirst,
               ((longlong)local_368.filters._Mypair._Myval2._Myend -
                (longlong)local_368.filters._Mypair._Myval2._Myfirst >> 1) * 2,8);
    local_368.filters._Mypair._Myval2._Myend = (FilterType *)0x0;
    local_368.filters._Mypair._Myval2._Myfirst = (FilterType *)0x0;
    local_368.filters._Mypair._Myval2._Mylast = (FilterType *)0x0;
  }
  if (local_228 != (JointsBuilder *)0x0) {
    local_388 = local_228;
    if ((longlong *)local_268._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*(longlong *)local_268._56_8_ + 0x10))(local_268._56_8_,&local_388);
  }
  if ((longlong *)local_268._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_268._56_8_ + 0x20))
              (local_268._56_8_,(undefined1 *)local_268._56_8_ != local_268);
  }
  return;
}

// buildStorage<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>_> @ 14c4fb3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`anonymous_namespace'::
Block4JointStorageBuilderTest<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>_>
::buildStorage<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>_>
          (void *this)

{
  MemoryResource *pMVar1;
  JointsBuilder JVar2;
  JointGroupLinearCalculationStrategy<float> *pJVar3;
  MemoryResource *pMVar4;
  undefined1 auStackY_3b8 [32];
  JointsBuilder *local_388;
  Configuration local_380;
  JointBehaviorFilter local_368;
  unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>
  local_340;
  undefined1 local_2f8 [56];
  _Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *local_2c0;
  JointsBuilder *local_2b8;
  undefined **local_2a8;
  MemoryResource *local_2a0;
  undefined ***local_270;
  undefined1 local_268 [64];
  JointsBuilder *local_228;
  longlong local_218 [7];
  longlong *local_1e0;
  JointsBuilder *local_1d8;
  Evaluator<float> local_1c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  pMVar1 = (MemoryResource *)((longlong)this + 0x10);
  local_380.loadJoints = true;
  local_380.loadBlendShapes = true;
  local_380.loadAnimatedMaps = true;
  local_380.loadMachineLearnedBehavior = true;
  local_380.loadRBFBehavior = true;
  local_380.loadTwistSwingBehavior = true;
  local_380.translationType = Vector;
  local_380.rotationType = EulerAngles;
  local_380.rotationOrder = XYZ;
  local_380.scaleType = Vector;
  local_380.translationPruningThreshold = 0.0;
  local_380.rotationPruningThreshold = 0.0;
  local_380.scalePruningThreshold = 0.0;
  local_380.calculationType = SSE;
  rl4::JointsBuilder::create
            ((unique_ptr<rl4::JointsBuilder,std::function<void___cdecl(rl4::JointsBuilder_*)>_> *)
             local_268,&local_380,pMVar1);
  rl4::JointBehaviorFilter::JointBehaviorFilter(&local_368,(Reader *)((longlong)this + 0x18),pMVar1)
  ;
  rl4::JointBehaviorFilter::include(&local_368,Vector);
  rl4::JointBehaviorFilter::include(&local_368,EulerAngles);
  rl4::JointBehaviorFilter::include(&local_368,Vector);
  (**(code **)((longlong)*local_228 + 8))(local_228,&local_368);
  (**(code **)((longlong)*local_228 + 0x18))(local_228,&local_368);
  (**(code **)((longlong)*local_228 + 0x20))(local_228,&local_368);
  (**(code **)((longlong)*local_228 + 0x30))(local_228,local_218);
  JVar2 = local_1d8[9];
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`pma::impl::
             PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>
             ::
             PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>'
             ::__l2::_dynamic_atexit_destructor_for__dmr__);
      _Init_thread_footer(&`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pMVar4 = (MemoryResource *)
           &`public:___cdecl_pma::impl::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>::PolyAllocator<rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::NoopAdapter>,8,pma::DefaultMemoryResource>(void)___ptr64'
            ::__l2::dmr;
  if (pMVar1 != (MemoryResource *)0x0) {
    pMVar4 = pMVar1;
  }
  pJVar3 = (JointGroupLinearCalculationStrategy<float> *)
           (**(code **)((longlong)*pMVar4 + 8))(pMVar4,8,8);
  *pJVar3 = (JointGroupLinearCalculationStrategy<float>)
            &
            ___7__VectorizedJointGroupLinearCalculationStrategy_MUF128_sse_trimd__UNoopAdapter_bpcm_rl4___bpcm_rl4__6B_
  ;
  local_2a8 = &
              ___7___Func_impl_no_alloc_V<lambda_1>__1____create___V___ManagedInstance_V__unique_ptr_U__JointGroupLinearCalculationStrategy_M_bpcm_rl4__V__function___A6AXPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___Z_std___std__U__VectorizedJointGroupLinearCalculationStrategy_MUF128_sse_trimd__UNoopAdapter_bpcm_rl4___bpcm_rl4__U__JointGroupLinearCalculationStrategy_M_45__impl_pma__QEAA_AV__unique_ptr_U__JointGroupLinearCalculationStrategy_M_bpcm_rl4__V__function___A6AXPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___Z_std___std__XZ_XPEAU__JointGroupLinearCalculationStrategy_M_bpcm_rl4___std__6B_
  ;
  local_270 = &local_2a8;
  local_2c0 = (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0;
  local_2a0 = pMVar4;
  local_2c0 = std::
              _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<rl4::bpcm::JointGroupLinearCalculationStrategy<float>,std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>_>,rl4::bpcm::VectorizedJointGroupLinearCalculationStrategy<float,trimd::sse::F128,rl4::bpcm::NoopAdapter>,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_>::create<>'::__l2::<lambda_1>,void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*>
              ::_Move(&local_2a8,local_2f8);
  if (local_270 != (undefined ***)0x0) {
    (*(code *)(*local_270)[4])(local_270,local_270 != &local_2a8);
  }
  local_2b8 = (JointsBuilder *)0x0;
  std::function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>::
  function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)>
            ((function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)> *)
             &local_340,
             (function<void___cdecl(rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*)> *)
             local_2f8);
  local_340._Mypair._Myval2 = pJVar3;
  block4::OptimizedStorage<float>::create(&local_1c8,&local_340,1,EulerAngles,pMVar1);
  rl4::bpcm::Evaluator<float>::Accessor::assertRawDataEqual((Evaluator<float> *)JVar2,&local_1c8);
  rl4::bpcm::Evaluator<float>::Accessor::assertJointGroupsEqual
            ((Evaluator<float> *)JVar2,&local_1c8);
  rl4::bpcm::Evaluator<float>::Accessor::assertLODsEqual((Evaluator<float> *)JVar2,&local_1c8);
  rl4::bpcm::Evaluator<float>::~Evaluator<float>(&local_1c8);
  if (local_2b8 != (JointsBuilder *)0x0) {
    local_388 = local_2b8;
    if (local_2c0 == (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0
       ) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)((longlong)*local_2c0 + 0x10))(local_2c0,&local_388);
  }
  if (local_2c0 != (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0)
  {
    (**(code **)((longlong)*local_2c0 + 0x20))
              (local_2c0,
               local_2c0 !=
               (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)local_2f8
              );
    local_2c0 = (_Func_base<void,rl4::bpcm::JointGroupLinearCalculationStrategy<float>_*> *)0x0;
  }
  if (local_1d8 != (JointsBuilder *)0x0) {
    local_388 = local_1d8;
    if (local_1e0 == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*local_1e0 + 0x10))(local_1e0,&local_388);
  }
  if (local_1e0 != (longlong *)0x0) {
    (**(code **)(*local_1e0 + 0x20))(local_1e0,local_1e0 != local_218);
    local_1e0 = (longlong *)0x0;
  }
  if (local_368.filters._Mypair._Myval2._Myfirst != (FilterType *)0x0) {
    (**(code **)(*(longlong *)local_368.filters._Mypair._Myval1 + 0x10))
              (local_368.filters._Mypair._Myval1,local_368.filters._Mypair._Myval2._Myfirst,
               ((longlong)local_368.filters._Mypair._Myval2._Myend -
                (longlong)local_368.filters._Mypair._Myval2._Myfirst >> 1) * 2,8);
    local_368.filters._Mypair._Myval2._Myend = (FilterType *)0x0;
    local_368.filters._Mypair._Myval2._Myfirst = (FilterType *)0x0;
    local_368.filters._Mypair._Myval2._Mylast = (FilterType *)0x0;
  }
  if (local_228 != (JointsBuilder *)0x0) {
    local_388 = local_228;
    if ((longlong *)local_268._56_8_ == (longlong *)0x0) {
      std::_Xbad_function_call();
      return;
    }
    (**(code **)(*(longlong *)local_268._56_8_ + 0x10))(local_268._56_8_,&local_388);
  }
  if ((longlong *)local_268._56_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_268._56_8_ + 0x20))
              (local_268._56_8_,(undefined1 *)local_268._56_8_ != local_268);
  }
  return;
}

// CanonicalReader @ 14c4fb780

CanonicalReader * __thiscall block4::CanonicalReader::CanonicalReader(CanonicalReader *this)

{
  int in_EDX;
  
  if (in_EDX != 0) {
    *(undefined1 **)&this->field_0x8 = &_vbtable__for__dna__RBFBehaviorReader__;
    *(undefined **)&this->field_0x18 = &_vbtable__for__dna__GeometryReader__;
    *(undefined **)&this->field_0x28 = &_vbtable__for__dna__MachineLearnedBehaviorReader__;
    *(undefined **)&this->field_0x38 = &_vbtable__for__dna__JointBehaviorMetadataReader__;
    *(undefined **)&this->field_0x48 = &_vbtable__for__dna__TwistSwingBehaviorReader__;
    *(undefined1 **)&this->field_0x70 = &_vbtable__for__dna__BehaviorReader__;
    *(undefined ***)&this->field_0x58 = &___7DefinitionReader_dna__6B_;
    *(undefined ***)&this->field_0x68 = &dna::BehaviorReader::_vftable__for__dna__BehaviorReader__;
    *(undefined ***)(&this->field_0x70 + *(int *)(*(longlong *)&this->field_0x70 + 4)) =
         &dna::BehaviorReader::_vftable__for__dna__DefinitionReader__;
  }
  *(undefined ***)this = &___7RBFBehaviorReader_dna__6B_;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &dna::RBFBehaviorReader::_vftable__for__dna__DefinitionReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 8)) =
       &dna::RBFBehaviorReader::_vftable__for__dna__BehaviorReader__;
  *(undefined ***)&this->field_0x10 = &dna::GeometryReader::_vftable__for__dna__GeometryReader__;
  *(undefined ***)(&this->field_0x18 + *(int *)(*(longlong *)&this->field_0x18 + 4)) =
       &dna::GeometryReader::_vftable__for__dna__DefinitionReader__;
  *(undefined ***)&this->field_0x20 =
       &dna::MachineLearnedBehaviorReader::_vftable__for__dna__MachineLearnedBehaviorReader__;
  *(undefined ***)(&this->field_0x28 + *(int *)(*(longlong *)&this->field_0x28 + 4)) =
       &dna::MachineLearnedBehaviorReader::_vftable__for__dna__DefinitionReader__;
  *(undefined ***)&this->field_0x30 =
       &dna::JointBehaviorMetadataReader::_vftable__for__dna__JointBehaviorMetadataReader__;
  *(undefined ***)(&this->field_0x38 + *(int *)(*(longlong *)&this->field_0x38 + 4)) =
       &dna::JointBehaviorMetadataReader::_vftable__for__dna__DefinitionReader__;
  *(undefined ***)&this->field_0x40 =
       &dna::TwistSwingBehaviorReader::_vftable__for__dna__TwistSwingBehaviorReader__;
  *(undefined ***)(&this->field_0x48 + *(int *)(*(longlong *)&this->field_0x48 + 4)) =
       &dna::TwistSwingBehaviorReader::_vftable__for__dna__DefinitionReader__;
  *(undefined ***)this = &___7Reader_dna__6B_;
  *(undefined ***)&this->field_0x10 = &dna::Reader::_vftable__for__dna__GeometryReader__;
  *(undefined ***)&this->field_0x20 =
       &dna::Reader::_vftable__for__dna__MachineLearnedBehaviorReader__;
  *(undefined ***)&this->field_0x30 =
       &dna::Reader::_vftable__for__dna__JointBehaviorMetadataReader__;
  *(undefined ***)&this->field_0x40 = &dna::Reader::_vftable__for__dna__TwistSwingBehaviorReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &dna::Reader::_vftable__for__dna__DefinitionReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 8)) =
       &dna::Reader::_vftable__for__dna__BehaviorReader__;
  *(undefined ***)this = &___7FakeReader_dna__6B_;
  *(undefined ***)&this->field_0x10 = &dna::FakeReader::_vftable__for__dna__GeometryReader__;
  *(undefined ***)&this->field_0x20 =
       &dna::FakeReader::_vftable__for__dna__MachineLearnedBehaviorReader__;
  *(undefined ***)&this->field_0x30 =
       &dna::FakeReader::_vftable__for__dna__JointBehaviorMetadataReader__;
  *(undefined ***)&this->field_0x40 =
       &dna::FakeReader::_vftable__for__dna__TwistSwingBehaviorReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &dna::FakeReader::_vftable__for__dna__DefinitionReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 8)) =
       &dna::FakeReader::_vftable__for__dna__BehaviorReader__;
  *(undefined4 *)(&this->field_0x4 + *(int *)(*(longlong *)&this->field_0x8 + 4)) = 0;
  *(undefined4 *)(&this->field_0x4 + *(int *)(*(longlong *)&this->field_0x8 + 8)) = 0;
  *(undefined ***)this = &___7CanonicalReader_block4__6B_;
  *(undefined ***)&this->field_0x10 = &_vftable__for__dna__GeometryReader__;
  *(undefined ***)&this->field_0x20 = &_vftable__for__dna__MachineLearnedBehaviorReader__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__dna__JointBehaviorMetadataReader__;
  *(undefined ***)&this->field_0x40 = &_vftable__for__dna__TwistSwingBehaviorReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 4)) =
       &_vftable__for__dna__DefinitionReader__;
  *(undefined ***)(&this->field_0x8 + *(int *)(*(longlong *)&this->field_0x8 + 8)) =
       &_vftable__for__dna__BehaviorReader__;
  *(undefined4 *)(&this->field_0x4 + *(int *)(*(longlong *)&this->field_0x8 + 4)) = 0;
  *(undefined4 *)(&this->field_0x4 + *(int *)(*(longlong *)&this->field_0x8 + 8)) = 0;
  return this;
}

// GetSetUpCaseOrSuite @ 14c4fba00

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<>_>_>::
GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetSetUpCaseOrSuite @ 14c4fbaa0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>_>
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

// GetSetUpCaseOrSuite @ 14c4fbb40

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>_>_>
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

// GetSetUpCaseOrSuite @ 14c4fbbe0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>_>
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

// GetSetUpCaseOrSuite @ 14c4fbc80

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>_>_>
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

// GetTearDownCaseOrSuite @ 14c4fbd20

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<>_>_>::
GetTearDownCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c4fbdc0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>_>
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

// GetTearDownCaseOrSuite @ 14c4fbe60

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>_>_>
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

// GetTearDownCaseOrSuite @ 14c4fbf00

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>_>
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

// GetTearDownCaseOrSuite @ 14c4fbfa0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>_>_>
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

// Register @ 14c4fc040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::Block4JointStorageBuilderTest,testing::internal::TemplateSel<Block4JointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types1<std::tuple<>_>_>
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
              ___7__TestFactoryImpl_V__Block4JointStorageBuilderTest_LayoutOptimization_Test_V__tuple___V_std_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<>_>_>::
           GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<>_>_>::
           GetSetUpCaseOrSuite((char *)pCVar15,param_2->line);
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
             &TypeIdHelper<Block4JointStorageBuilderTest<std::tuple<>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c4fc4d2;
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
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c4fc4d2;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c4fc4d2;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c4fc4d2;
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
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c4fc4d2;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c4fc4d2;
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
LAB_14c4fc4d2:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

// Register @ 14c4fc520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::Block4JointStorageBuilderTest,testing::internal::TemplateSel<Block4JointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types2<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>_>
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
              ___7__TestFactoryImpl_V__Block4JointStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T128_M_scalar_trimd__U__TCalculationType__0A___U__EulerAnglesToQuaternions_U__ang_MUdegrees_impl_tdm___tdm___0A__bpcm_rl4___std_____internal_testing__6B_
    ;
  }
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar16,param_2->line);
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var10 = SuiteApiResolver<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>_>
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
             &TypeIdHelper<Block4JointStorageBuilderTest<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>_>
              ::dummy_,(_func_void *)p_Var10,(_func_void *)p_Var9,pTVar8);
  if (0xf < uStack_130) {
    uVar20 = uStack_130 + 1;
    pppppppcVar17 = local_148;
    if (0xfff < uVar20) {
      pppppppcVar17 = (char *******)local_148[-1];
      uVar20 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar17)))
      goto LAB_14c4fc9bf;
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
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar18)) goto LAB_14c4fc9bf;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c4fc9bf;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c4fc9bf;
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
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar18)) goto LAB_14c4fc9bf;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c4fc9bf;
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
LAB_14c4fc9bf:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar19,uVar20);
  }
  bVar7 = TypeParameterizedTest<`anonymous_namespace'::Block4JointStorageBuilderTest,testing::internal::TemplateSel<Block4JointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types1<std::tuple<>_>_>
          ::Register(param_1,param_2,param_3,param_4,param_5 + 1,param_6);
  return bVar7;
}

// Register @ 14c4fca30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::Block4JointStorageBuilderTest,testing::internal::TemplateSel<Block4JointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types3<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>_>
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
              ___7__TestFactoryImpl_V__Block4JointStorageBuilderTest_LayoutOptimization_Test_V__tuple_MU__T128_M_scalar_trimd__U__TCalculationType__0A___UNoopAdapter_bpcm_rl4___std_____internal_testing__6B_
    ;
  }
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar16,param_2->line);
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var10 = SuiteApiResolver<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>_>_>
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
             &TypeIdHelper<Block4JointStorageBuilderTest<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>_>_>
              ::dummy_,(_func_void *)p_Var10,(_func_void *)p_Var9,pTVar8);
  if (0xf < uStack_130) {
    uVar20 = uStack_130 + 1;
    pppppppcVar17 = local_148;
    if (0xfff < uVar20) {
      pppppppcVar17 = (char *******)local_148[-1];
      uVar20 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar17)))
      goto LAB_14c4fcecf;
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
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar18)) goto LAB_14c4fcecf;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c4fcecf;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c4fcecf;
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
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar18)) goto LAB_14c4fcecf;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c4fcecf;
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
LAB_14c4fcecf:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar19,uVar20);
  }
  bVar7 = TypeParameterizedTest<`anonymous_namespace'::Block4JointStorageBuilderTest,testing::internal::TemplateSel<Block4JointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types2<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>_>
          ::Register(param_1,param_2,param_3,param_4,param_5 + 1,param_6);
  return bVar7;
}

// Register @ 14c4fcf40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::Block4JointStorageBuilderTest,testing::internal::TemplateSel<Block4JointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types4<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>_>
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
              ___7__TestFactoryImpl_V__Block4JointStorageBuilderTest_LayoutOptimization_Test_V__tuple_MUF128_sse_trimd__U__TCalculationType__00__U__EulerAnglesToQuaternions_U__ang_MUdegrees_impl_tdm___tdm___0A__bpcm_rl4___std_____internal_testing__6B_
    ;
  }
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar16,param_2->line);
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var10 = SuiteApiResolver<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>_>
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
             &TypeIdHelper<Block4JointStorageBuilderTest<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>_>_>
              ::dummy_,(_func_void *)p_Var10,(_func_void *)p_Var9,pTVar8);
  if (0xf < uStack_130) {
    uVar20 = uStack_130 + 1;
    pppppppcVar17 = local_148;
    if (0xfff < uVar20) {
      pppppppcVar17 = (char *******)local_148[-1];
      uVar20 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar17)))
      goto LAB_14c4fd3df;
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
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar18)) goto LAB_14c4fd3df;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c4fd3df;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c4fd3df;
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
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar18)) goto LAB_14c4fd3df;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c4fd3df;
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
LAB_14c4fd3df:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar19,uVar20);
  }
  bVar7 = TypeParameterizedTest<`anonymous_namespace'::Block4JointStorageBuilderTest,testing::internal::TemplateSel<Block4JointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types3<std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>_>
          ::Register(param_1,param_2,param_3,param_4,param_5 + 1,param_6);
  return bVar7;
}

// Register @ 14c4fd450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::Block4JointStorageBuilderTest,testing::internal::TemplateSel<Block4JointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types5<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>_>
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
              ___7__TestFactoryImpl_V__Block4JointStorageBuilderTest_LayoutOptimization_Test_V__tuple_MUF128_sse_trimd__U__TCalculationType__00__UNoopAdapter_bpcm_rl4___std_____internal_testing__6B_
    ;
  }
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>_>_>
           ::GetTearDownCaseOrSuite((char *)pCVar16,param_2->line);
  pCVar16 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar16 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var10 = SuiteApiResolver<Block4JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>_>_>
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
             &TypeIdHelper<Block4JointStorageBuilderTest<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::NoopAdapter>_>_>
              ::dummy_,(_func_void *)p_Var10,(_func_void *)p_Var9,pTVar8);
  if (0xf < uStack_130) {
    uVar20 = uStack_130 + 1;
    pppppppcVar17 = local_148;
    if (0xfff < uVar20) {
      pppppppcVar17 = (char *******)local_148[-1];
      uVar20 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar17)))
      goto LAB_14c4fd8ef;
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
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar18)) goto LAB_14c4fd8ef;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c4fd8ef;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c4fd8ef;
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
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar18)) goto LAB_14c4fd8ef;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar19))) goto LAB_14c4fd8ef;
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
LAB_14c4fd8ef:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar19,uVar20);
  }
  bVar7 = TypeParameterizedTest<`anonymous_namespace'::Block4JointStorageBuilderTest,testing::internal::TemplateSel<Block4JointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types4<std::tuple<float,trimd::sse::F128,TCalculationType<1>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::NoopAdapter>,std::tuple<float,trimd::scalar::T128<float>,TCalculationType<0>,rl4::bpcm::EulerAnglesToQuaternions<tdm::ang<float,tdm::impl::degrees>,0>_>,std::tuple<>_>_>
          ::Register(param_1,param_2,param_3,param_4,param_5 + 1,param_6);
  return bVar7;
}

// assertJointGroupsEqual @ 14c4fd960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
rl4::bpcm::Evaluator<float>::Accessor::assertJointGroupsEqual
          (Evaluator<float> *param_1,Evaluator<float> *param_2)

{
  uint *puVar1;
  void *pvVar2;
  ulonglong uVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  Message *pMVar7;
  AssertHelper *pAVar8;
  longlong lVar9;
  void *pvVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  JointGroup *pJVar17;
  uint *puVar18;
  undefined1 auStackY_168 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_138;
  AssertHelper local_130;
  ulong64 local_128;
  AssertionResult local_120;
  AssertionResult local_110;
  AssertionResult local_100;
  AssertionResult local_f0;
  AssertionResult local_e0;
  AssertionResult local_d0;
  AssertionResult local_c0;
  AssertionResult local_b0;
  _Bxty local_a0;
  undefined8 local_90;
  ulonglong uStack_88;
  _Bxty local_80;
  undefined8 local_70;
  ulonglong uStack_68;
  _Bxty local_60;
  ulonglong local_48;
  ulonglong local_40;
  
  uVar3 = _UNK_15076add8;
  uVar15 = ___xmm_000000000000000f0000000000000000;
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_168;
  lVar16 = (longlong)(param_2->storage).jointGroups._Mypair._Myval2._Mylast -
           (longlong)(param_2->storage).jointGroups._Mypair._Myval2._Myfirst;
  lVar16 = lVar16 / 0x12 + (lVar16 >> 0x3f);
  local_110._0_8_ = (lVar16 >> 1) - (lVar16 >> 0x3f);
  local_128 = ((longlong)(param_1->storage).jointGroups._Mypair._Myval2._Mylast -
              (longlong)(param_1->storage).jointGroups._Mypair._Myval2._Myfirst) / 0x24;
  local_130.data_ = (AssertHelperData *)param_1;
  if (local_128 == local_110._0_8_) {
    testing::AssertionSuccess(&local_120);
  }
  else {
    pbVar5 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a0
                        ,(ulong64 *)&local_110,&local_128);
    pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80
                        ,&local_128,(ulong64 *)&local_110);
    testing::internal::EqFailure
              (&local_120,"result.storage.jointGroups.size()","expected.storage.jointGroups.size()",
               pbVar6,pbVar5,false);
    if (0xf < uStack_68) {
      pvVar2 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
      uVar14 = uStack_68 + 1;
      pvVar10 = pvVar2;
      if (0xfff < uVar14) {
        pvVar10 = *(void **)((longlong)pvVar2 + -8);
        uVar14 = uStack_68 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar10))) goto LAB_14c4fdac9;
      }
      ::operator_delete(pvVar10,uVar14);
    }
    local_80._Buf[0] = '\0';
    local_70 = uVar15;
    uStack_68 = uVar3;
    if (0xf < uStack_88) {
      pvVar2 = (void *)CONCAT71(local_a0._1_7_,local_a0._Buf[0]);
      uVar14 = uStack_88 + 1;
      pvVar10 = pvVar2;
      if (0xfff < uVar14) {
        pvVar10 = *(void **)((longlong)pvVar2 + -8);
        uVar14 = uStack_88 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar10))) {
LAB_14c4fdac9:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pvVar10,uVar14);
    }
  }
  uVar4._Mypair._Myval2 = local_120.message_._Mypair._Myval2;
  if (local_120.success_ == false) {
    pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
    if (local_120.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)local_120.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_120.message_._Mypair._Myval2 + 0x18)) {
        pcVar12 = *(char **)local_120.message_._Mypair._Myval2;
      }
    }
    pAVar8 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_130,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\bpcm\\Assertions.h"
                        ,0x26,pcVar12);
    testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
    testing::internal::AssertHelper::~AssertHelper(&local_130);
    if (local_138._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)local_138._Mypair._Myval2 +
                (longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
    if (local_120.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_120.message_._Mypair._Myval2);
      ::operator_delete((void *)local_120.message_._Mypair._Myval2,0x20);
    }
  }
  else {
    if (local_120.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_120.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    pJVar17 = (param_2->storage).jointGroups._Mypair._Myval2._Myfirst;
    lVar9 = (longlong)(param_2->storage).jointGroups._Mypair._Myval2._Mylast - (longlong)pJVar17;
    local_128 = 0;
    lVar16 = lVar9 >> 0x3f;
    if (lVar9 / 0x24 + lVar16 != lVar16) {
      lVar16 = 0;
      do {
        puVar1 = (uint *)((longlong)&pJVar17->valuesOffset + lVar16);
        puVar18 = (uint *)((longlong)
                           &((param_1->storage).jointGroups._Mypair._Myval2._Myfirst)->valuesOffset
                          + lVar16);
        if (puVar18[1] == puVar1[1]) {
          testing::AssertionSuccess(&local_120);
        }
        else {
          pbVar5 = testing::internal::FormatForComparisonFailureMessage<unsigned_int,unsigned_int>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_60,puVar1 + 1,puVar18 + 1);
          pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned_int,unsigned_int>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_a0,puVar18 + 1,puVar1 + 1);
          testing::internal::EqFailure
                    (&local_120,"jointGroup.inputIndicesOffset",
                     "expectedJointGroup.inputIndicesOffset",pbVar6,pbVar5,false);
          if (0xf < uStack_88) {
            pvVar2 = (void *)CONCAT71(local_a0._1_7_,local_a0._Buf[0]);
            uVar14 = uStack_88 + 1;
            pvVar10 = pvVar2;
            if (0xfff < uVar14) {
              pvVar10 = *(void **)((longlong)pvVar2 + -8);
              uVar14 = uStack_88 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar10)))
              goto LAB_14c4fdfec;
            }
            ::operator_delete(pvVar10,uVar14);
          }
          local_a0._Buf[0] = '\0';
          local_90 = uVar15;
          uStack_88 = uVar3;
          if (0xf < local_48) {
            uVar14 = local_48 + 1;
            uVar11 = local_60._Ptr;
            if (0xfff < uVar14) {
              uVar11 = *(undefined8 *)(local_60._Ptr + -8);
              uVar14 = local_48 + 0x28;
              if ((char *)0x1f < local_60._Ptr + (-8 - uVar11)) {
LAB_14c4fdfec:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar11,uVar14);
          }
        }
        uVar4._Mypair._Myval2 = local_120.message_._Mypair._Myval2;
        if (local_120.success_ == false) {
          pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
          if (local_120.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar12 = "";
          }
          else {
            pcVar12 = (char *)local_120.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_120.message_._Mypair._Myval2 + 0x18)) {
              pcVar12 = *(char **)local_120.message_._Mypair._Myval2;
            }
          }
          pAVar8 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_130,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\bpcm\\Assertions.h"
                              ,0x2a,pcVar12);
          testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
          testing::internal::AssertHelper::~AssertHelper(&local_130);
          uVar15 = local_120.message_._Mypair._Myval2;
          if (local_138._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar13 = (undefined8 *)
                      ((longlong)local_138._Mypair._Myval2 +
                      (longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4));
            (**(code **)*puVar13)(puVar13,1);
            uVar15 = local_120.message_._Mypair._Myval2;
          }
LAB_14c4fe4d7:
          if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)uVar15 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            return;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)uVar15);
          ::operator_delete((void *)uVar15,0x20);
          return;
        }
        if (local_120.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_120.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        if (puVar18[3] == puVar1[3]) {
          testing::AssertionSuccess(&local_110);
        }
        else {
          pbVar5 = testing::internal::FormatForComparisonFailureMessage<unsigned_int,unsigned_int>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_60,puVar1 + 3,puVar18 + 3);
          pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned_int,unsigned_int>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_a0,puVar18 + 3,puVar1 + 3);
          testing::internal::EqFailure
                    (&local_110,"jointGroup.lodsOffset","expectedJointGroup.lodsOffset",pbVar6,
                     pbVar5,false);
          if (0xf < uStack_88) {
            pvVar2 = (void *)CONCAT71(local_a0._1_7_,local_a0._Buf[0]);
            uVar14 = uStack_88 + 1;
            pvVar10 = pvVar2;
            if (0xfff < uVar14) {
              pvVar10 = *(void **)((longlong)pvVar2 + -8);
              uVar14 = uStack_88 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar10)))
              goto LAB_14c4fe006;
            }
            ::operator_delete(pvVar10,uVar14);
          }
          local_a0._Buf[0] = '\0';
          local_90 = uVar15;
          uStack_88 = uVar3;
          if (0xf < local_48) {
            uVar14 = local_48 + 1;
            uVar11 = local_60._Ptr;
            if (0xfff < uVar14) {
              uVar11 = *(undefined8 *)(local_60._Ptr + -8);
              uVar14 = local_48 + 0x28;
              if ((char *)0x1f < local_60._Ptr + (-8 - uVar11)) {
LAB_14c4fe006:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar11,uVar14);
          }
        }
        uVar4._Mypair._Myval2 = local_110.message_._Mypair._Myval2;
        if (local_110.success_ == false) {
          pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
          if (local_110.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar12 = "";
          }
          else {
            pcVar12 = (char *)local_110.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_110.message_._Mypair._Myval2 + 0x18)) {
              pcVar12 = *(char **)local_110.message_._Mypair._Myval2;
            }
          }
          pAVar8 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_130,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\bpcm\\Assertions.h"
                              ,0x2b,pcVar12);
          testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
          testing::internal::AssertHelper::~AssertHelper(&local_130);
          uVar15 = local_110.message_._Mypair._Myval2;
          if (local_138._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar13 = (undefined8 *)
                      ((longlong)local_138._Mypair._Myval2 +
                      (longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4));
            (**(code **)*puVar13)(puVar13,1);
            uVar15 = local_110.message_._Mypair._Myval2;
          }
          goto LAB_14c4fe4d7;
        }
        if (local_110.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_110.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        testing::internal::EqHelper::Compare<unsigned_int,unsigned_int,0>
                  ((AssertionResult *)&local_80,"jointGroup.outputIndicesOffset",
                   "expectedJointGroup.outputIndicesOffset",puVar18 + 2,puVar1 + 2);
        uVar11 = local_80._8_8_;
        if (local_80._Buf[0] == '\0') {
          pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
          if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_80._8_8_ ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar12 = "";
          }
          else {
            pcVar12 = local_80._8_8_;
            if (0xf < *(ulong64 *)(local_80._8_8_ + 0x18)) {
                    /* WARNING: Load size is inaccurate */
              pcVar12 = *local_80._8_8_;
            }
          }
          pAVar8 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_130,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\bpcm\\Assertions.h"
                              ,0x2c,pcVar12);
          testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
          testing::internal::AssertHelper::~AssertHelper(&local_130);
          uVar15 = local_80._8_8_;
          if (local_138._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar13 = (undefined8 *)
                      ((longlong)local_138._Mypair._Myval2 +
                      (longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4));
            (**(code **)*puVar13)(puVar13,1);
            uVar15 = local_80._8_8_;
          }
          goto LAB_14c4fe4d7;
        }
        if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_80._8_8_ !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_80._8_8_);
          ::operator_delete((void *)uVar11,0x20);
        }
        testing::internal::EqHelper::Compare<unsigned_int,unsigned_int,0>
                  (&local_b0,"jointGroup.outputRotationIndicesOffset",
                   "expectedJointGroup.outputRotationIndicesOffset",puVar18 + 4,puVar1 + 4);
        uVar4._Mypair._Myval2 = local_b0.message_._Mypair._Myval2;
        if (local_b0.success_ == false) {
          pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
          if (local_b0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar12 = "";
          }
          else {
            pcVar12 = (char *)local_b0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_b0.message_._Mypair._Myval2 + 0x18)) {
              pcVar12 = *(char **)local_b0.message_._Mypair._Myval2;
            }
          }
          pAVar8 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_130,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\bpcm\\Assertions.h"
                              ,0x2d,pcVar12);
          testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
          testing::internal::AssertHelper::~AssertHelper(&local_130);
          uVar15 = local_b0.message_._Mypair._Myval2;
          if (local_138._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar13 = (undefined8 *)
                      ((longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4) +
                      (longlong)local_138._Mypair._Myval2);
            (**(code **)*puVar13)(puVar13,1);
            uVar15 = local_b0.message_._Mypair._Myval2;
          }
          goto LAB_14c4fe4d7;
        }
        if (local_b0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_b0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        testing::internal::EqHelper::Compare<unsigned_int,unsigned_int,0>
                  (&local_c0,"jointGroup.outputRotationLODsOffset",
                   "expectedJointGroup.outputRotationLODsOffset",puVar18 + 5,puVar1 + 5);
        uVar4._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
        if (local_c0.success_ == false) {
          pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
          if (local_c0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar12 = "";
          }
          else {
            pcVar12 = (char *)local_c0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_c0.message_._Mypair._Myval2 + 0x18)) {
              pcVar12 = *(char **)local_c0.message_._Mypair._Myval2;
            }
          }
          pAVar8 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_130,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\bpcm\\Assertions.h"
                              ,0x2e,pcVar12);
          testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
          testing::internal::AssertHelper::~AssertHelper(&local_130);
          uVar15 = local_c0.message_._Mypair._Myval2;
          if (local_138._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar13 = (undefined8 *)
                      ((longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4) +
                      (longlong)local_138._Mypair._Myval2);
            (**(code **)*puVar13)(puVar13,1);
            uVar15 = local_c0.message_._Mypair._Myval2;
          }
          goto LAB_14c4fe4d7;
        }
        if (local_c0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_c0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        testing::internal::EqHelper::Compare<unsigned_int,unsigned_int,0>
                  (&local_d0,"jointGroup.valuesOffset","expectedJointGroup.valuesOffset",puVar18,
                   puVar1);
        uVar4._Mypair._Myval2 = local_d0.message_._Mypair._Myval2;
        if (local_d0.success_ == false) {
          pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
          if (local_d0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar12 = "";
          }
          else {
            pcVar12 = (char *)local_d0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_d0.message_._Mypair._Myval2 + 0x18)) {
              pcVar12 = *(char **)local_d0.message_._Mypair._Myval2;
            }
          }
          pAVar8 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_130,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\bpcm\\Assertions.h"
                              ,0x2f,pcVar12);
          testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
          testing::internal::AssertHelper::~AssertHelper(&local_130);
          uVar15 = local_d0.message_._Mypair._Myval2;
          if (local_138._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar13 = (undefined8 *)
                      ((longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4) +
                      (longlong)local_138._Mypair._Myval2);
            (**(code **)*puVar13)(puVar13,1);
            uVar15 = local_d0.message_._Mypair._Myval2;
          }
          goto LAB_14c4fe4d7;
        }
        if (local_d0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_d0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        testing::internal::EqHelper::Compare<unsigned_int,unsigned_int,0>
                  (&local_e0,"jointGroup.valuesSize","expectedJointGroup.valuesSize",puVar18 + 6,
                   puVar1 + 6);
        uVar4._Mypair._Myval2 = local_e0.message_._Mypair._Myval2;
        if (local_e0.success_ == false) {
          pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
          if (local_e0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar12 = "";
          }
          else {
            pcVar12 = (char *)local_e0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_e0.message_._Mypair._Myval2 + 0x18)) {
              pcVar12 = *(char **)local_e0.message_._Mypair._Myval2;
            }
          }
          pAVar8 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_130,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\bpcm\\Assertions.h"
                              ,0x30,pcVar12);
          testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
          testing::internal::AssertHelper::~AssertHelper(&local_130);
          uVar15 = local_e0.message_._Mypair._Myval2;
          if (local_138._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar13 = (undefined8 *)
                      ((longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4) +
                      (longlong)local_138._Mypair._Myval2);
            (**(code **)*puVar13)(puVar13,1);
            uVar15 = local_e0.message_._Mypair._Myval2;
          }
          goto LAB_14c4fe4d7;
        }
        if (local_e0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_e0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        testing::internal::EqHelper::Compare<unsigned_int,unsigned_int,0>
                  (&local_f0,"jointGroup.colCount","expectedJointGroup.colCount",puVar18 + 7,
                   puVar1 + 7);
        uVar4._Mypair._Myval2 = local_f0.message_._Mypair._Myval2;
        if (local_f0.success_ == false) {
          pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
          if (local_f0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar12 = "";
          }
          else {
            pcVar12 = (char *)local_f0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_f0.message_._Mypair._Myval2 + 0x18)) {
              pcVar12 = *(char **)local_f0.message_._Mypair._Myval2;
            }
          }
          pAVar8 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_130,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\bpcm\\Assertions.h"
                              ,0x31,pcVar12);
          testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
          testing::internal::AssertHelper::~AssertHelper(&local_130);
          uVar15 = local_f0.message_._Mypair._Myval2;
          if (local_138._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar13 = (undefined8 *)
                      ((longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4) +
                      (longlong)local_138._Mypair._Myval2);
            (**(code **)*puVar13)(puVar13,1);
            uVar15 = local_f0.message_._Mypair._Myval2;
          }
          goto LAB_14c4fe4d7;
        }
        if (local_f0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_f0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        testing::internal::EqHelper::Compare<unsigned_int,unsigned_int,0>
                  (&local_100,"jointGroup.rowCount","expectedJointGroup.rowCount",puVar18 + 8,
                   puVar1 + 8);
        uVar4._Mypair._Myval2 = local_100.message_._Mypair._Myval2;
        if (local_100.success_ == false) {
          pMVar7 = (Message *)testing::Message::Message((Message *)&local_138);
          if (local_100.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar12 = "";
          }
          else {
            pcVar12 = (char *)local_100.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_100.message_._Mypair._Myval2 + 0x18)) {
              pcVar12 = *(char **)local_100.message_._Mypair._Myval2;
            }
          }
          pAVar8 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_130,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\bpcm\\Assertions.h"
                              ,0x32,pcVar12);
          testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
          testing::internal::AssertHelper::~AssertHelper(&local_130);
          uVar15 = local_100.message_._Mypair._Myval2;
          if (local_138._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar13 = (undefined8 *)
                      ((longlong)*(int *)(*(longlong *)local_138._Mypair._Myval2 + 4) +
                      (longlong)local_138._Mypair._Myval2);
            (**(code **)*puVar13)(puVar13,1);
            uVar15 = local_100.message_._Mypair._Myval2;
          }
          goto LAB_14c4fe4d7;
        }
        if (local_100.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_100.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        pJVar17 = (param_2->storage).jointGroups._Mypair._Myval2._Myfirst;
        local_128 = local_128 + 1;
        lVar16 = lVar16 + 0x24;
        param_1 = (Evaluator<float> *)local_130.data_;
      } while (local_128 <
               (ulonglong)
               (((longlong)(param_2->storage).jointGroups._Mypair._Myval2._Mylast -
                (longlong)pJVar17) / 0x24));
    }
  }
  return;
}

// assertLODsEqual @ 14c4fe5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
rl4::bpcm::Evaluator<float>::Accessor::assertLODsEqual
          (Evaluator<float> *param_1,Evaluator<float> *param_2)

{
  uint *puVar1;
  void *pvVar2;
  ulonglong uVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  Message *pMVar7;
  AssertHelper *pAVar8;
  longlong lVar9;
  void *pvVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  LODRegion *pLVar17;
  uint *puVar18;
  undefined1 auStackY_138 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_108;
  AssertHelper local_100;
  ulong64 local_f8;
  AssertionResult local_f0;
  AssertionResult local_e0;
  AssertionResult local_d0;
  AssertionResult local_c0;
  AssertionResult local_b0;
  _Bxty local_a0;
  undefined8 local_90;
  ulonglong uStack_88;
  _Bxty local_80;
  undefined8 local_70;
  ulonglong uStack_68;
  _Bxty local_60;
  ulonglong local_48;
  ulonglong local_40;
  
  uVar3 = _UNK_15076add8;
  uVar15 = ___xmm_000000000000000f0000000000000000;
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_138;
  lVar16 = (longlong)(param_2->storage).lodRegions._Mypair._Myval2._Mylast -
           (longlong)(param_2->storage).lodRegions._Mypair._Myval2._Myfirst;
  lVar16 = lVar16 / 6 + (lVar16 >> 0x3f);
  local_e0._0_8_ = (lVar16 >> 2) - (lVar16 >> 0x3f);
  local_f8 = ((longlong)(param_1->storage).lodRegions._Mypair._Myval2._Mylast -
             (longlong)(param_1->storage).lodRegions._Mypair._Myval2._Myfirst) / 0x18;
  local_108._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )param_2;
  local_100.data_ = (AssertHelperData *)param_1;
  if (local_f8 == local_e0._0_8_) {
    testing::AssertionSuccess(&local_f0);
  }
  else {
    pbVar5 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a0
                        ,(ulong64 *)&local_e0,&local_f8);
    pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned___int64,unsigned___int64>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80
                        ,&local_f8,(ulong64 *)&local_e0);
    testing::internal::EqFailure
              (&local_f0,"result.storage.lodRegions.size()","expected.storage.lodRegions.size()",
               pbVar6,pbVar5,false);
    if (0xf < uStack_68) {
      pvVar2 = (void *)CONCAT71(local_80._1_7_,local_80._Buf[0]);
      uVar14 = uStack_68 + 1;
      pvVar10 = pvVar2;
      if (0xfff < uVar14) {
        pvVar10 = *(void **)((longlong)pvVar2 + -8);
        uVar14 = uStack_68 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar10))) goto LAB_14c4fe73a;
      }
      ::operator_delete(pvVar10,uVar14);
    }
    local_80._Buf[0] = '\0';
    local_70 = uVar15;
    uStack_68 = uVar3;
    if (0xf < uStack_88) {
      pvVar2 = (void *)CONCAT71(local_a0._1_7_,local_a0._Buf[0]);
      uVar14 = uStack_88 + 1;
      pvVar10 = pvVar2;
      if (0xfff < uVar14) {
        pvVar10 = *(void **)((longlong)pvVar2 + -8);
        uVar14 = uStack_88 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar10))) {
LAB_14c4fe73a:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pvVar10,uVar14);
    }
  }
  uVar4._Mypair._Myval2 = local_f0.message_._Mypair._Myval2;
  if (local_f0.success_ == false) {
    pMVar7 = (Message *)testing::Message::Message((Message *)&local_108);
    if (local_f0.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)local_f0.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_f0.message_._Mypair._Myval2 + 0x18)) {
        pcVar12 = *(char **)local_f0.message_._Mypair._Myval2;
      }
    }
    pAVar8 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_100,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\bpcm\\Assertions.h"
                        ,0x37,pcVar12);
    testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
    testing::internal::AssertHelper::~AssertHelper(&local_100);
    if (local_108._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar13 = (undefined8 *)
                ((longlong)local_108._Mypair._Myval2 +
                (longlong)*(int *)(*(longlong *)local_108._Mypair._Myval2 + 4));
      (**(code **)*puVar13)(puVar13,1);
    }
    if (local_f0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_f0.message_._Mypair._Myval2);
      ::operator_delete((void *)local_f0.message_._Mypair._Myval2,0x20);
    }
  }
  else {
    if (local_f0.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_f0.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    pLVar17 = (param_2->storage).lodRegions._Mypair._Myval2._Myfirst;
    lVar9 = (longlong)(param_2->storage).lodRegions._Mypair._Myval2._Mylast - (longlong)pLVar17;
    local_f8 = 0;
    lVar16 = lVar9 >> 0x3f;
    if (lVar9 / 0x18 + lVar16 != lVar16) {
      lVar16 = 0;
      do {
        puVar1 = (uint *)((longlong)&(pLVar17->inputLODs).size + lVar16);
        puVar18 = (uint *)((longlong)
                           &(((param_1->storage).lodRegions._Mypair._Myval2._Myfirst)->inputLODs).
                            size + lVar16);
        if (*puVar18 == *puVar1) {
          testing::AssertionSuccess(&local_f0);
        }
        else {
          pbVar5 = testing::internal::FormatForComparisonFailureMessage<unsigned_int,unsigned_int>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_60,puVar1,puVar18);
          pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned_int,unsigned_int>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_a0,puVar18,puVar1);
          testing::internal::EqFailure
                    (&local_f0,"lodRegion.inputLODs.size","expectedLodRegion.inputLODs.size",pbVar6,
                     pbVar5,false);
          if (0xf < uStack_88) {
            pvVar2 = (void *)CONCAT71(local_a0._1_7_,local_a0._Buf[0]);
            uVar14 = uStack_88 + 1;
            pvVar10 = pvVar2;
            if (0xfff < uVar14) {
              pvVar10 = *(void **)((longlong)pvVar2 + -8);
              uVar14 = uStack_88 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar10)))
              goto LAB_14c4feb74;
            }
            ::operator_delete(pvVar10,uVar14);
          }
          local_a0._Buf[0] = '\0';
          local_90 = uVar15;
          uStack_88 = uVar3;
          if (0xf < local_48) {
            uVar14 = local_48 + 1;
            uVar11 = local_60._Ptr;
            if (0xfff < uVar14) {
              uVar11 = *(undefined8 *)(local_60._Ptr + -8);
              uVar14 = local_48 + 0x28;
              if ((char *)0x1f < local_60._Ptr + (-8 - uVar11)) {
LAB_14c4feb74:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar11,uVar14);
          }
        }
        uVar4._Mypair._Myval2 = local_f0.message_._Mypair._Myval2;
        if (local_f0.success_ == false) {
          pMVar7 = (Message *)testing::Message::Message((Message *)&local_108);
          if (local_f0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar12 = "";
          }
          else {
            pcVar12 = (char *)local_f0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_f0.message_._Mypair._Myval2 + 0x18)) {
              pcVar12 = *(char **)local_f0.message_._Mypair._Myval2;
            }
          }
          pAVar8 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_100,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\bpcm\\Assertions.h"
                              ,0x3b,pcVar12);
          testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
          testing::internal::AssertHelper::~AssertHelper(&local_100);
          uVar15 = local_f0.message_._Mypair._Myval2;
          if (local_108._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar13 = (undefined8 *)
                      ((longlong)local_108._Mypair._Myval2 +
                      (longlong)*(int *)(*(longlong *)local_108._Mypair._Myval2 + 4));
            (**(code **)*puVar13)(puVar13,1);
            uVar15 = local_f0.message_._Mypair._Myval2;
          }
LAB_14c4feecd:
          if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)uVar15 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            return;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)uVar15);
          ::operator_delete((void *)uVar15,0x20);
          return;
        }
        if (local_f0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_f0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        if (puVar18[1] == puVar1[1]) {
          testing::AssertionSuccess(&local_e0);
        }
        else {
          pbVar5 = testing::internal::FormatForComparisonFailureMessage<unsigned_int,unsigned_int>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_60,puVar1 + 1,puVar18 + 1);
          pbVar6 = testing::internal::FormatForComparisonFailureMessage<unsigned_int,unsigned_int>
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_a0,puVar18 + 1,puVar1 + 1);
          testing::internal::EqFailure
                    (&local_e0,"lodRegion.inputLODs.sizeAlignedTo4",
                     "expectedLodRegion.inputLODs.sizeAlignedTo4",pbVar6,pbVar5,false);
          if (0xf < uStack_88) {
            pvVar2 = (void *)CONCAT71(local_a0._1_7_,local_a0._Buf[0]);
            uVar14 = uStack_88 + 1;
            pvVar10 = pvVar2;
            if (0xfff < uVar14) {
              pvVar10 = *(void **)((longlong)pvVar2 + -8);
              uVar14 = uStack_88 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar10)))
              goto LAB_14c4feb8e;
            }
            ::operator_delete(pvVar10,uVar14);
          }
          local_a0._Buf[0] = '\0';
          local_90 = uVar15;
          uStack_88 = uVar3;
          if (0xf < local_48) {
            uVar14 = local_48 + 1;
            uVar11 = local_60._Ptr;
            if (0xfff < uVar14) {
              uVar11 = *(undefined8 *)(local_60._Ptr + -8);
              uVar14 = local_48 + 0x28;
              if ((char *)0x1f < local_60._Ptr + (-8 - uVar11)) {
LAB_14c4feb8e:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar11,uVar14);
          }
        }
        uVar4._Mypair._Myval2 = local_e0.message_._Mypair._Myval2;
        if (local_e0.success_ == false) {
          pMVar7 = (Message *)testing::Message::Message((Message *)&local_108);
          if (local_e0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar12 = "";
          }
          else {
            pcVar12 = (char *)local_e0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_e0.message_._Mypair._Myval2 + 0x18)) {
              pcVar12 = *(char **)local_e0.message_._Mypair._Myval2;
            }
          }
          pAVar8 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_100,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\bpcm\\Assertions.h"
                              ,0x3c,pcVar12);
          testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
          testing::internal::AssertHelper::~AssertHelper(&local_100);
          uVar15 = local_e0.message_._Mypair._Myval2;
          if (local_108._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar13 = (undefined8 *)
                      ((longlong)local_108._Mypair._Myval2 +
                      (longlong)*(int *)(*(longlong *)local_108._Mypair._Myval2 + 4));
            (**(code **)*puVar13)(puVar13,1);
            uVar15 = local_e0.message_._Mypair._Myval2;
          }
          goto LAB_14c4feecd;
        }
        if (local_e0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_e0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        testing::internal::EqHelper::Compare<unsigned_int,unsigned_int,0>
                  ((AssertionResult *)&local_80,"lodRegion.inputLODs.sizeAlignedTo8",
                   "expectedLodRegion.inputLODs.sizeAlignedTo8",puVar18 + 2,puVar1 + 2);
        uVar11 = local_80._8_8_;
        if (local_80._Buf[0] == '\0') {
          pMVar7 = (Message *)testing::Message::Message((Message *)&local_108);
          if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_80._8_8_ ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar12 = "";
          }
          else {
            pcVar12 = local_80._8_8_;
            if (0xf < *(ulong64 *)(local_80._8_8_ + 0x18)) {
                    /* WARNING: Load size is inaccurate */
              pcVar12 = *local_80._8_8_;
            }
          }
          pAVar8 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_100,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\bpcm\\Assertions.h"
                              ,0x3d,pcVar12);
          testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
          testing::internal::AssertHelper::~AssertHelper(&local_100);
          uVar15 = local_80._8_8_;
          if (local_108._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar13 = (undefined8 *)
                      ((longlong)local_108._Mypair._Myval2 +
                      (longlong)*(int *)(*(longlong *)local_108._Mypair._Myval2 + 4));
            (**(code **)*puVar13)(puVar13,1);
            uVar15 = local_80._8_8_;
          }
          goto LAB_14c4feecd;
        }
        if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_80._8_8_ !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_80._8_8_);
          ::operator_delete((void *)uVar11,0x20);
        }
        testing::internal::EqHelper::Compare<unsigned_int,unsigned_int,0>
                  (&local_b0,"lodRegion.outputLODs.size","expectedLodRegion.outputLODs.size",
                   puVar18 + 3,puVar1 + 3);
        uVar4._Mypair._Myval2 = local_b0.message_._Mypair._Myval2;
        if (local_b0.success_ == false) {
          pMVar7 = (Message *)testing::Message::Message((Message *)&local_108);
          if (local_b0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar12 = "";
          }
          else {
            pcVar12 = (char *)local_b0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_b0.message_._Mypair._Myval2 + 0x18)) {
              pcVar12 = *(char **)local_b0.message_._Mypair._Myval2;
            }
          }
          pAVar8 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_100,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\bpcm\\Assertions.h"
                              ,0x3e,pcVar12);
          testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
          testing::internal::AssertHelper::~AssertHelper(&local_100);
          uVar15 = local_b0.message_._Mypair._Myval2;
          if (local_108._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar13 = (undefined8 *)
                      ((longlong)*(int *)(*(longlong *)local_108._Mypair._Myval2 + 4) +
                      (longlong)local_108._Mypair._Myval2);
            (**(code **)*puVar13)(puVar13,1);
            uVar15 = local_b0.message_._Mypair._Myval2;
          }
          goto LAB_14c4feecd;
        }
        if (local_b0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_b0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        testing::internal::EqHelper::Compare<unsigned_int,unsigned_int,0>
                  (&local_c0,"lodRegion.outputLODs.sizePaddedToLastFullBlock",
                   "expectedLodRegion.outputLODs.sizePaddedToLastFullBlock",puVar18 + 4,puVar1 + 4);
        uVar4._Mypair._Myval2 = local_c0.message_._Mypair._Myval2;
        if (local_c0.success_ == false) {
          pMVar7 = (Message *)testing::Message::Message((Message *)&local_108);
          if (local_c0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar12 = "";
          }
          else {
            pcVar12 = (char *)local_c0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_c0.message_._Mypair._Myval2 + 0x18)) {
              pcVar12 = *(char **)local_c0.message_._Mypair._Myval2;
            }
          }
          pAVar8 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_100,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\bpcm\\Assertions.h"
                              ,0x3f,pcVar12);
          testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
          testing::internal::AssertHelper::~AssertHelper(&local_100);
          uVar15 = local_c0.message_._Mypair._Myval2;
          if (local_108._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar13 = (undefined8 *)
                      ((longlong)*(int *)(*(longlong *)local_108._Mypair._Myval2 + 4) +
                      (longlong)local_108._Mypair._Myval2);
            (**(code **)*puVar13)(puVar13,1);
            uVar15 = local_c0.message_._Mypair._Myval2;
          }
          goto LAB_14c4feecd;
        }
        if (local_c0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_c0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        testing::internal::EqHelper::Compare<unsigned_int,unsigned_int,0>
                  (&local_d0,"lodRegion.outputLODs.sizePaddedToSecondLastFullBlock",
                   "expectedLodRegion.outputLODs.sizePaddedToSecondLastFullBlock",puVar18 + 5,
                   puVar1 + 5);
        uVar4._Mypair._Myval2 = local_d0.message_._Mypair._Myval2;
        if (local_d0.success_ == false) {
          pMVar7 = (Message *)testing::Message::Message((Message *)&local_108);
          if (local_d0.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar12 = "";
          }
          else {
            pcVar12 = (char *)local_d0.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_d0.message_._Mypair._Myval2 + 0x18)) {
              pcVar12 = *(char **)local_d0.message_._Mypair._Myval2;
            }
          }
          pAVar8 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_100,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\bpcm\\Assertions.h"
                              ,0x41,pcVar12);
          testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
          testing::internal::AssertHelper::~AssertHelper(&local_100);
          uVar15 = local_d0.message_._Mypair._Myval2;
          if (local_108._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar13 = (undefined8 *)
                      ((longlong)*(int *)(*(longlong *)local_108._Mypair._Myval2 + 4) +
                      (longlong)local_108._Mypair._Myval2);
            (**(code **)*puVar13)(puVar13,1);
            uVar15 = local_d0.message_._Mypair._Myval2;
          }
          goto LAB_14c4feecd;
        }
        if (local_d0.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_d0.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        lVar16 = lVar16 + 0x18;
        local_f8 = local_f8 + 1;
        pLVar17 = ((_Vector_val<std::_Simple_types<rl4::LODRegion>_> *)
                  ((longlong)local_108._Mypair._Myval2 + 0x78))->_Myfirst;
        param_1 = (Evaluator<float> *)local_100.data_;
      } while (local_f8 <
               (ulonglong)
               (((longlong)*(LODRegion **)((longlong)local_108._Mypair._Myval2 + 0x80) -
                (longlong)pLVar17) / 0x18));
    }
  }
  return;
}

// assertRawDataEqual @ 14c4fefd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
rl4::bpcm::Evaluator<float>::Accessor::assertRawDataEqual
          (Evaluator<float> *param_1,Evaluator<float> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  void *pvVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  Message *pMVar5;
  AssertHelper *pAVar6;
  void *pvVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  float *pfVar11;
  ulong64 uVar12;
  longlong lVar13;
  int iVar14;
  undefined1 auStackY_b8 [32];
  AssertionResult local_88;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_78;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_70;
  _Bxty local_68;
  undefined8 local_58;
  ulonglong uStack_50;
  _Bxty local_48;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pfVar1 = (param_1->storage).values._Mypair._Myval2._Mylast;
  pfVar2 = (param_2->storage).values._Mypair._Myval2._Myfirst;
  pfVar11 = (param_1->storage).values._Mypair._Myval2._Myfirst;
  if ((((longlong)(param_2->storage).values._Mypair._Myval2._Mylast - (longlong)pfVar2 ^
       (longlong)pfVar1 - (longlong)pfVar11) & 0xfffffffffffffffcU) == 0) {
    if (pfVar11 != pfVar1) {
      lVar13 = (longlong)pfVar2 - (longlong)pfVar11;
      do {
        if (*(float *)(lVar13 + (longlong)pfVar11) != *pfVar11) goto LAB_14c4ff047;
        pfVar11 = pfVar11 + 1;
      } while (pfVar11 != pfVar1);
    }
    testing::AssertionSuccess(&local_88);
  }
  else {
LAB_14c4ff047:
    testing::
    PrintToString<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_48,
               &(param_2->storage).values);
    testing::
    PrintToString<std::vector<float,pma::PolyAllocator<float,64,pma::AlignedMemoryResource>_>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68,
               &(param_1->storage).values);
    testing::internal::EqFailure
              (&local_88,"result.storage.values","expected.storage.values",
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_48,false);
    if (0xf < uStack_50) {
      pvVar3 = (void *)CONCAT71(local_68._1_7_,local_68._Buf[0]);
      uVar12 = uStack_50 + 1;
      pvVar7 = pvVar3;
      if (0xfff < uVar12) {
        pvVar7 = *(void **)((longlong)pvVar3 + -8);
        uVar12 = uStack_50 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7))) goto LAB_14c4ff104;
      }
      ::operator_delete(pvVar7,uVar12);
    }
    local_68._Buf[0] = '\0';
    local_58 = ___xmm_000000000000000f0000000000000000;
    uStack_50 = _UNK_15076add8;
    if (0xf < local_30) {
      uVar12 = local_30 + 1;
      uVar8 = local_48._Ptr;
      if (0xfff < uVar12) {
        uVar8 = *(undefined8 *)(local_48._Ptr + -8);
        uVar12 = local_30 + 0x28;
        if ((char *)0x1f < local_48._Ptr + (-8 - uVar8)) {
LAB_14c4ff104:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar8,uVar12);
    }
  }
  uVar4._Mypair._Myval2 = local_88.message_._Mypair._Myval2;
  if (local_88.success_ == false) {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_88.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar9 = "";
    }
    else {
      pcVar9 = (char *)local_88.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_88.message_._Mypair._Myval2 + 0x18)) {
        pcVar9 = *(char **)local_88.message_._Mypair._Myval2;
      }
    }
    iVar14 = 0x1e;
LAB_14c4ff3a4:
    pAVar6 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_70,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\bpcm\\Assertions.h"
                        ,iVar14,pcVar9);
    testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_70);
    local_70._Myval2 = local_78._Myval2;
  }
  else {
    if (local_88.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_88.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    testing::internal::EqHelper::
    Compare<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,0>
              (&local_88,"result.storage.inputIndices","expected.storage.inputIndices",
               &(param_1->storage).inputIndices,&(param_2->storage).inputIndices);
    uVar4._Mypair._Myval2 = local_88.message_._Mypair._Myval2;
    if (local_88.success_ == false) {
      pMVar5 = (Message *)testing::Message::Message((Message *)&local_78);
      if (local_88.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar9 = "";
      }
      else {
        pcVar9 = (char *)local_88.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_88.message_._Mypair._Myval2 + 0x18)) {
          pcVar9 = *(char **)local_88.message_._Mypair._Myval2;
          iVar14 = 0x1f;
          goto LAB_14c4ff3a4;
        }
      }
      iVar14 = 0x1f;
      goto LAB_14c4ff3a4;
    }
    if (local_88.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_88.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    testing::internal::EqHelper::
    Compare<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,64,pma::AlignedMemoryResource>_>,0>
              (&local_88,"result.storage.outputIndices","expected.storage.outputIndices",
               &(param_1->storage).outputIndices,&(param_2->storage).outputIndices);
    uVar4._Mypair._Myval2 = local_88.message_._Mypair._Myval2;
    if (local_88.success_ == false) {
      pMVar5 = (Message *)testing::Message::Message((Message *)&local_78);
      if (local_88.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar9 = "";
      }
      else {
        pcVar9 = (char *)local_88.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_88.message_._Mypair._Myval2 + 0x18)) {
          pcVar9 = *(char **)local_88.message_._Mypair._Myval2;
          iVar14 = 0x20;
          goto LAB_14c4ff3a4;
        }
      }
      iVar14 = 0x20;
      goto LAB_14c4ff3a4;
    }
    if (local_88.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_88.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    testing::internal::EqHelper::
    Compare<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,0>
              (&local_88,"result.storage.outputRotationIndices",
               "expected.storage.outputRotationIndices",&(param_1->storage).outputRotationIndices,
               &(param_2->storage).outputRotationIndices);
    uVar4._Mypair._Myval2 = local_88.message_._Mypair._Myval2;
    if (local_88.success_ == false) {
      pMVar5 = (Message *)testing::Message::Message((Message *)&local_78);
      if (local_88.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar9 = "";
      }
      else {
        pcVar9 = (char *)local_88.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_88.message_._Mypair._Myval2 + 0x18)) {
          pcVar9 = *(char **)local_88.message_._Mypair._Myval2;
          iVar14 = 0x21;
          goto LAB_14c4ff3a4;
        }
      }
      iVar14 = 0x21;
      goto LAB_14c4ff3a4;
    }
    if (local_88.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_88.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    testing::internal::EqHelper::
    Compare<std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,std::vector<unsigned_short,pma::PolyAllocator<unsigned_short,8,pma::DefaultMemoryResource>_>,0>
              (&local_88,"result.storage.outputRotationLODs","expected.storage.outputRotationLODs",
               &(param_1->storage).outputRotationLODs,&(param_2->storage).outputRotationLODs);
    if (local_88.success_ != false) goto LAB_14c4ff3ef;
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_70);
    if (local_88.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar9 = "";
    }
    else {
      pcVar9 = (char *)local_88.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_88.message_._Mypair._Myval2 + 0x18)) {
        pcVar9 = *(char **)local_88.message_._Mypair._Myval2;
      }
    }
    pAVar6 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_78,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\bpcm\\Assertions.h"
                        ,0x22,pcVar9);
    testing::internal::AssertHelper::operator=(pAVar6,pMVar5);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_78);
  }
  if (local_70._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar10 = (undefined8 *)
              ((longlong)&(local_70._Myval2)->field_0x0 +
              (longlong)*(int *)(*(longlong *)local_70._Myval2 + 4));
    (**(code **)*puVar10)(puVar10,1);
  }
LAB_14c4ff3ef:
  if (local_88.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_88.message_._Mypair._Myval2);
    ::operator_delete((void *)local_88.message_._Mypair._Myval2,0x20);
  }
  return;
}

// deallocate @ 14c4ff440

void __thiscall
std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::deallocate
          (allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,ulong64 param_2)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  ulong64 uVar2;
  
  uVar2 = param_2 * 0x20;
  pbVar1 = param_1;
  if (0xfff < uVar2) {
    pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             param_1[-1]._Mypair._Myval2._Myres;
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_1 + (-8 - (longlong)pbVar1))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  ::operator_delete(pbVar1,uVar2);
  return;
}

