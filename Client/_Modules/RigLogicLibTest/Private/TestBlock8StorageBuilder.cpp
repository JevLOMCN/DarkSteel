// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 10

// `dynamic_initializer_for_'gtest_Block8JointStorageBuilderTest_LayoutOptimization_registered_'' @ 14135cca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
_dynamic_initializer_for__gtest_Block8JointStorageBuilderTest_LayoutOptimization_registered___(void)

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
  undefined1 auStackY_e8 [32];
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_b8;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_a0;
  _Bxty local_98;
  ulong64 local_88;
  ulong64 uStack_80;
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  CodeLocation local_58;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_b8._Mypair._Myval2._Myfirst =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_b8._Mypair._Myval2._Mylast =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_b8._Mypair._Myval2._Myend =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  this = (Message *)testing::Message::Message((Message *)&local_a0);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((this->ss_)._Mypair._Myval2)->field_0x10,0);
  testing::Message::GetString
            (this,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98);
  if (local_a0._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar10 = (undefined8 *)
              ((longlong)&(local_a0._Myval2)->field_0x0 +
              (longlong)*(int *)(*(longlong *)local_a0._Myval2 + 4));
    (**(code **)*puVar10)(puVar10,1);
  }
  pbVar16 = local_b8._Mypair._Myval2._Mylast;
  if (local_b8._Mypair._Myval2._Mylast == local_b8._Mypair._Myval2._Myend) {
    lVar15 = (longlong)local_b8._Mypair._Myval2._Mylast -
             (longlong)local_b8._Mypair._Myval2._Myfirst >> 5;
    if (lVar15 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      std::
      vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
      ::_Xlength();
    }
    uVar1 = lVar15 + 1;
    uVar11 = (longlong)local_b8._Mypair._Myval2._Myend - (longlong)local_b8._Mypair._Myval2._Myfirst
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
    pbVar8 = local_b8._Mypair._Myval2._Mylast;
    pbVar9[lVar15]._Mypair._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&pbVar9[lVar15]._Mypair._Myval2._Bx + 8) = 0;
    pbVar9[lVar15]._Mypair._Myval2._Mysize = 0;
    pbVar9[lVar15]._Mypair._Myval2._Myres = 0;
    pbVar12 = pbVar9 + lVar15 + 1;
    pbVar9[lVar15]._Mypair._Myval2._Bx._Ptr = (char *)CONCAT71(local_98._1_7_,local_98._Buf[0]);
    *(undefined8 *)((longlong)&pbVar9[lVar15]._Mypair._Myval2._Bx + 8) = local_98._8_8_;
    uVar11 = _UNK_15076add8;
    uVar7 = ___xmm_000000000000000f0000000000000000;
    puVar2 = &pbVar9[lVar15]._Mypair._Myval2._Mysize;
    *puVar2 = local_88;
    puVar2[1] = uStack_80;
    local_98._Buf[0] = '\0';
    local_88 = uVar7;
    uStack_80 = uVar11;
    pbVar5 = pbVar9;
    pbVar6 = local_b8._Mypair._Myval2._Myfirst;
    if (pbVar16 == local_b8._Mypair._Myval2._Mylast) {
      for (; pbVar6 != local_b8._Mypair._Myval2._Mylast; pbVar6 = pbVar6 + 1) {
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
      for (; pbVar16 != local_b8._Mypair._Myval2._Mylast; pbVar16 = pbVar16 + 1) {
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
    pbVar16 = local_b8._Mypair._Myval2._Myfirst;
    if (local_b8._Mypair._Myval2._Myfirst !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      for (; pbVar16 != pbVar8; pbVar16 = pbVar16 + 1) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (pbVar16);
      }
      uVar14 = (longlong)local_b8._Mypair._Myval2._Myend -
               (longlong)local_b8._Mypair._Myval2._Myfirst & 0xffffffffffffffe0;
      pbVar16 = local_b8._Mypair._Myval2._Myfirst;
      if (0xfff < uVar14) {
        pbVar16 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                  local_b8._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
        uVar14 = uVar14 + 0x27;
        if (0x1f < (ulonglong)
                   ((longlong)local_b8._Mypair._Myval2._Myfirst + (-8 - (longlong)pbVar16)))
        goto LAB_14135cfb2;
      }
      operator_delete(pbVar16,uVar14);
    }
    local_b8._Mypair._Myval2._Myend = pbVar9 + uVar17;
    local_b8._Mypair._Myval2._Mylast = pbVar9 + uVar1;
    local_b8._Mypair._Myval2._Myfirst = pbVar9;
  }
  else {
    ((local_b8._Mypair._Myval2._Mylast)->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&((local_b8._Mypair._Myval2._Mylast)->_Mypair)._Myval2._Bx + 8) = 0;
    ((local_b8._Mypair._Myval2._Mylast)->_Mypair)._Myval2._Mysize = 0;
    ((local_b8._Mypair._Myval2._Mylast)->_Mypair)._Myval2._Myres = 0;
    ((local_b8._Mypair._Myval2._Mylast)->_Mypair)._Myval2._Bx._Ptr =
         (char *)CONCAT71(local_98._1_7_,local_98._Buf[0]);
    *(undefined8 *)((longlong)&((local_b8._Mypair._Myval2._Mylast)->_Mypair)._Myval2._Bx + 8) =
         local_98._8_8_;
    uVar1 = _UNK_15076add8;
    uVar7 = ___xmm_000000000000000f0000000000000000;
    ((local_b8._Mypair._Myval2._Mylast)->_Mypair)._Myval2._Mysize = local_88;
    ((local_b8._Mypair._Myval2._Mylast)->_Mypair)._Myval2._Myres = uStack_80;
    local_b8._Mypair._Myval2._Mylast = local_b8._Mypair._Myval2._Mylast + 1;
    local_88 = uVar7;
    uStack_80 = uVar1;
    local_98._Buf[0] = '\0';
  }
  if (0xf < uStack_80) {
    pvVar4 = (void *)CONCAT71(local_98._1_7_,local_98._Buf[0]);
    uVar14 = uStack_80 + 1;
    pvVar13 = pvVar4;
    if (0xfff < uVar14) {
      pvVar13 = *(void **)((longlong)pvVar4 + -8);
      uVar14 = uStack_80 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar13))) {
LAB_14135cfb2:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pvVar13,uVar14);
  }
  local_78._8_8_ = 0;
  local_78._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar7 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_68 = ___xmm_000000000000008f000000000000008b;
  uStack_60 = _UNK_1528810f8;
  *(undefined8 *)local_78._Ptr = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(local_78._Ptr + 8) = uVar7;
  uVar7 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  *(undefined8 *)(local_78._Ptr + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(local_78._Ptr + 0x18) = uVar7;
  uVar7 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(local_78._Ptr + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(local_78._Ptr + 0x28) = uVar7;
  uVar7 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(local_78._Ptr + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(local_78._Ptr + 0x38) = uVar7;
  uVar7 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(local_78._Ptr + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(local_78._Ptr + 0x48) = uVar7;
  uVar7 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(local_78._Ptr + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(local_78._Ptr + 0x58) = uVar7;
  uVar7 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(local_78._Ptr + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(local_78._Ptr + 0x68) = uVar7;
  uVar7 = s_C__Workspace_UnrealEngine_Engin._120_8_;
  *(undefined8 *)(local_78._Ptr + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_8_;
  *(undefined8 *)(local_78._Ptr + 0x78) = uVar7;
  *(undefined8 *)(local_78._Ptr + 0x80) = s_C__Workspace_UnrealEngine_Engin._128_8_;
  *(undefined2 *)(local_78._Ptr + 0x88) = s_C__Workspace_UnrealEngine_Engin._136_2_;
  *(local_78._Ptr + 0x8a) = s_C__Workspace_UnrealEngine_Engin[0x8a];
  *(local_78._Ptr + 0x8b) = '\0';
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (&local_58.file,
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78);
  local_58.line = 0x59;
  gtest_Block8JointStorageBuilderTest_LayoutOptimization_registered_ =
       testing::internal::
       TypeParameterizedTest<`anonymous_namespace'::Block8JointStorageBuilderTest,testing::internal::TemplateSel<Block8JointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types1<std::tuple<>_>_>
       ::Register("",&local_58,"Block8JointStorageBuilderTest","LayoutOptimization",0,&local_b8);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (&local_58.file);
  if (0xf < uStack_60) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Deallocate_for_capacity
              ((allocator<char> *)local_78._Buf,local_78._Ptr,uStack_60);
  }
  pbVar5 = local_b8._Mypair._Myval2._Mylast;
  local_78._Ptr = local_78._Ptr & 0xffffffffffffff00;
  local_68 = ___xmm_000000000000000f0000000000000000;
  uStack_60 = _UNK_15076add8;
  pbVar16 = local_b8._Mypair._Myval2._Myfirst;
  if (local_b8._Mypair._Myval2._Myfirst !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    for (; pbVar16 != pbVar5; pbVar16 = pbVar16 + 1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (pbVar16);
    }
    std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
    deallocate((allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)
               &local_b8,local_b8._Mypair._Myval2._Myfirst,
               (longlong)local_b8._Mypair._Myval2._Myend -
               (longlong)local_b8._Mypair._Myval2._Myfirst >> 5);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c562690

void * __thiscall
`anonymous_namespace'::Block8JointStorageBuilderTest<std::tuple<>_>::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  block8::CanonicalReader::~CanonicalReader((CanonicalReader *)((longlong)this + 0x70));
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)((longlong)this + 0x90));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)((longlong)this + 0x70));
  pma::MemoryResource::~MemoryResource((MemoryResource *)((longlong)this + 0x10));
  testing::Test::~Test(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// TestBody @ 14c562700

void __thiscall
Block8JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<>_>::TestBody
          (Block8JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<>_> *this)

{
  return;
}

// `scalar_deleting_destructor' @ 14c562710

void * __thiscall
Block8JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<>_>::_scalar_deleting_destructor_
          (Block8JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<>_> *this,uint param_1)

{
  block8::CanonicalReader::~CanonicalReader((CanonicalReader *)&this->field_0x70);
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)(this + 1));
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)&this->field_0x70);
  pma::MemoryResource::~MemoryResource((MemoryResource *)&this->field_0x10);
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// CreateTest @ 14c562780

Test * __thiscall
testing::internal::
TestFactoryImpl<Block8JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<>_>_>::CreateTest
          (TestFactoryImpl<Block8JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<>_>_>
           *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x90);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&Block8JointStorageBuilderTest<std::tuple<>_>::_vftable_;
    this_00[1]._padding_ = (longlong)&pma::AlignedMemoryResource::_vftable_;
    this_00[2]._padding_ =
         (longlong)&block8::CanonicalReader::_vbtable__for__dna__RBFBehaviorReader__;
    this_00[3]._padding_ = (longlong)&block8::CanonicalReader::_vbtable__for__dna__GeometryReader__;
    this_00[4]._padding_ =
         (longlong)&block8::CanonicalReader::_vbtable__for__dna__MachineLearnedBehaviorReader__;
    this_00[5]._padding_ =
         (longlong)&block8::CanonicalReader::_vbtable__for__dna__JointBehaviorMetadataReader__;
    this_00[6]._padding_ =
         (longlong)&block8::CanonicalReader::_vbtable__for__dna__TwistSwingBehaviorReader__;
    this_00[8].gtest_flag_saver_._Mypair._Myval2 =
         (GTestFlagSaver *)&block8::CanonicalReader::_vbtable__for__dna__BehaviorReader__;
    this_00[7]._padding_ = (longlong)&___7DefinitionReader_dna__6B_;
    this_00[8]._padding_ = (longlong)&dna::BehaviorReader::_vftable__for__dna__BehaviorReader__;
    *(undefined ***)
     ((longlong)&this_00[8].gtest_flag_saver_._Mypair._Myval2 +
     (longlong)*(int *)(this_00[8].gtest_flag_saver_._Mypair._Myval2 + 4)) =
         &dna::BehaviorReader::_vftable__for__dna__DefinitionReader__;
    this_00[1].gtest_flag_saver_._Mypair._Myval2 = (GTestFlagSaver *)&___7RBFBehaviorReader_dna__6B_
    ;
    *(undefined ***)((longlong)&this_00[2]._padding_ + (longlong)*(int *)(this_00[2]._padding_ + 4))
         = &dna::RBFBehaviorReader::_vftable__for__dna__DefinitionReader__;
    *(undefined ***)((longlong)&this_00[2]._padding_ + (longlong)*(int *)(this_00[2]._padding_ + 8))
         = &dna::RBFBehaviorReader::_vftable__for__dna__BehaviorReader__;
    this_00[2].gtest_flag_saver_._Mypair._Myval2 =
         (GTestFlagSaver *)&dna::GeometryReader::_vftable__for__dna__GeometryReader__;
    *(undefined ***)((longlong)&this_00[3]._padding_ + (longlong)*(int *)(this_00[3]._padding_ + 4))
         = &dna::GeometryReader::_vftable__for__dna__DefinitionReader__;
    this_00[3].gtest_flag_saver_._Mypair._Myval2 =
         (GTestFlagSaver *)
         &dna::MachineLearnedBehaviorReader::_vftable__for__dna__MachineLearnedBehaviorReader__;
    *(undefined ***)((longlong)&this_00[4]._padding_ + (longlong)*(int *)(this_00[4]._padding_ + 4))
         = &dna::MachineLearnedBehaviorReader::_vftable__for__dna__DefinitionReader__;
    this_00[4].gtest_flag_saver_._Mypair._Myval2 =
         (GTestFlagSaver *)
         &dna::JointBehaviorMetadataReader::_vftable__for__dna__JointBehaviorMetadataReader__;
    *(undefined ***)((longlong)&this_00[5]._padding_ + (longlong)*(int *)(this_00[5]._padding_ + 4))
         = &dna::JointBehaviorMetadataReader::_vftable__for__dna__DefinitionReader__;
    this_00[5].gtest_flag_saver_._Mypair._Myval2 =
         (GTestFlagSaver *)
         &dna::TwistSwingBehaviorReader::_vftable__for__dna__TwistSwingBehaviorReader__;
    *(undefined ***)((longlong)&this_00[6]._padding_ + (longlong)*(int *)(this_00[6]._padding_ + 4))
         = &dna::TwistSwingBehaviorReader::_vftable__for__dna__DefinitionReader__;
    this_00[1].gtest_flag_saver_._Mypair._Myval2 = (GTestFlagSaver *)&___7Reader_dna__6B_;
    this_00[2].gtest_flag_saver_._Mypair._Myval2 =
         (GTestFlagSaver *)&dna::Reader::_vftable__for__dna__GeometryReader__;
    this_00[3].gtest_flag_saver_._Mypair._Myval2 =
         (GTestFlagSaver *)&dna::Reader::_vftable__for__dna__MachineLearnedBehaviorReader__;
    this_00[4].gtest_flag_saver_._Mypair._Myval2 =
         (GTestFlagSaver *)&dna::Reader::_vftable__for__dna__JointBehaviorMetadataReader__;
    this_00[5].gtest_flag_saver_._Mypair._Myval2 =
         (GTestFlagSaver *)&dna::Reader::_vftable__for__dna__TwistSwingBehaviorReader__;
    *(undefined ***)((longlong)&this_00[2]._padding_ + (longlong)*(int *)(this_00[2]._padding_ + 4))
         = &dna::Reader::_vftable__for__dna__DefinitionReader__;
    *(undefined ***)((longlong)&this_00[2]._padding_ + (longlong)*(int *)(this_00[2]._padding_ + 8))
         = &dna::Reader::_vftable__for__dna__BehaviorReader__;
    this_00[1].gtest_flag_saver_._Mypair._Myval2 = (GTestFlagSaver *)&___7FakeReader_dna__6B_;
    this_00[2].gtest_flag_saver_._Mypair._Myval2 =
         (GTestFlagSaver *)&dna::FakeReader::_vftable__for__dna__GeometryReader__;
    this_00[3].gtest_flag_saver_._Mypair._Myval2 =
         (GTestFlagSaver *)&dna::FakeReader::_vftable__for__dna__MachineLearnedBehaviorReader__;
    this_00[4].gtest_flag_saver_._Mypair._Myval2 =
         (GTestFlagSaver *)&dna::FakeReader::_vftable__for__dna__JointBehaviorMetadataReader__;
    this_00[5].gtest_flag_saver_._Mypair._Myval2 =
         (GTestFlagSaver *)&dna::FakeReader::_vftable__for__dna__TwistSwingBehaviorReader__;
    *(undefined ***)((longlong)&this_00[2]._padding_ + (longlong)*(int *)(this_00[2]._padding_ + 4))
         = &dna::FakeReader::_vftable__for__dna__DefinitionReader__;
    *(undefined ***)((longlong)&this_00[2]._padding_ + (longlong)*(int *)(this_00[2]._padding_ + 8))
         = &dna::FakeReader::_vftable__for__dna__BehaviorReader__;
    *(undefined4 *)
     ((longlong)&this_00[1].gtest_flag_saver_._Mypair._Myval2 +
     (longlong)*(int *)(this_00[2]._padding_ + 4) + 4) = 0;
    *(undefined4 *)
     ((longlong)&this_00[1].gtest_flag_saver_._Mypair._Myval2 +
     (longlong)*(int *)(this_00[2]._padding_ + 8) + 4) = 0;
    this_00[1].gtest_flag_saver_._Mypair._Myval2 =
         (GTestFlagSaver *)&___7CanonicalReader_block8__6B_;
    this_00[2].gtest_flag_saver_._Mypair._Myval2 =
         (GTestFlagSaver *)&block8::CanonicalReader::_vftable__for__dna__GeometryReader__;
    this_00[3].gtest_flag_saver_._Mypair._Myval2 =
         (GTestFlagSaver *)
         &block8::CanonicalReader::_vftable__for__dna__MachineLearnedBehaviorReader__;
    this_00[4].gtest_flag_saver_._Mypair._Myval2 =
         (GTestFlagSaver *)
         &block8::CanonicalReader::_vftable__for__dna__JointBehaviorMetadataReader__;
    this_00[5].gtest_flag_saver_._Mypair._Myval2 =
         (GTestFlagSaver *)&block8::CanonicalReader::_vftable__for__dna__TwistSwingBehaviorReader__;
    *(undefined ***)((longlong)&this_00[2]._padding_ + (longlong)*(int *)(this_00[2]._padding_ + 4))
         = &block8::CanonicalReader::_vftable__for__dna__DefinitionReader__;
    *(undefined ***)((longlong)&this_00[2]._padding_ + (longlong)*(int *)(this_00[2]._padding_ + 8))
         = &block8::CanonicalReader::_vftable__for__dna__BehaviorReader__;
    *(undefined4 *)
     ((longlong)&this_00[1].gtest_flag_saver_._Mypair._Myval2 +
     (longlong)*(int *)(this_00[2]._padding_ + 4) + 4) = 0;
    *(undefined4 *)
     ((longlong)&this_00[1].gtest_flag_saver_._Mypair._Myval2 +
     (longlong)*(int *)(this_00[2]._padding_ + 8) + 4) = 0;
    this_00->_padding_ =
         (longlong)
         &___7__Block8JointStorageBuilderTest_LayoutOptimization_Test_V__tuple___V_std____6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c562a60

void * __thiscall
testing::internal::
TestFactoryImpl<Block8JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<>_>_>::
_scalar_deleting_destructor_
          (TestFactoryImpl<Block8JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<>_>_>
           *this,uint param_1)

{
  *this = (TestFactoryImpl<Block8JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<>_>_>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<std::tuple<>_>_> @ 14c562aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
* __cdecl testing::internal::
          GenerateNames<testing::internal::DefaultNameGenerator,testing::internal::Types1<std::tuple<>_>_>
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
  undefined1 auStackY_68 [32];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_38;
  _Bxty local_30;
  ulong64 local_20;
  ulong64 uStack_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  (__return_storage_ptr__->_Mypair)._Myval2._Myfirst =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mylast =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myend =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  this = (Message *)testing::Message::Message((Message *)&local_38);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((this->ss_)._Mypair._Myval2)->field_0x10,0);
  testing::Message::GetString
            (this,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30);
  if (local_38._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar5 = (undefined8 *)
             ((longlong)&(local_38._Myval2)->field_0x0 +
             (longlong)*(int *)(*(longlong *)local_38._Myval2 + 4));
    (**(code **)*puVar5)(puVar5,1);
  }
  pbVar2 = (__return_storage_ptr__->_Mypair)._Myval2._Mylast;
  if (pbVar2 == (__return_storage_ptr__->_Mypair)._Myval2._Myend) {
    std::
    vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
    ::_Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              (__return_storage_ptr__,pbVar2,
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
    ppbVar1 = &(__return_storage_ptr__->_Mypair)._Myval2._Mylast;
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
  return __return_storage_ptr__;
}

// GetSetUpCaseOrSuite @ 14c562be0

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<Block8JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<>_>_>::
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

// GetTearDownCaseOrSuite @ 14c562c80

_func___cdecl_void * __cdecl
testing::internal::
SuiteApiResolver<Block8JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<>_>_>::
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

// Register @ 14c562d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
testing::internal::
TypeParameterizedTest<`anonymous_namespace'::Block8JointStorageBuilderTest,testing::internal::TemplateSel<Block8JointStorageBuilderTest_LayoutOptimization_Test>,testing::internal::Types1<std::tuple<>_>_>
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
              ___7__TestFactoryImpl_V__Block8JointStorageBuilderTest_LayoutOptimization_Test_V__tuple___V_std_____internal_testing__6B_
    ;
  }
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var8 = SuiteApiResolver<Block8JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<>_>_>::
           GetTearDownCaseOrSuite((char *)pCVar15,param_2->line);
  pCVar15 = param_2;
  if (0xf < (param_2->file)._Mypair._Myval2._Myres) {
    pCVar15 = (CodeLocation *)(param_2->file)._Mypair._Myval2._Bx._Ptr;
  }
  p_Var9 = SuiteApiResolver<Block8JointStorageBuilderTest_LayoutOptimization_Test<std::tuple<>_>_>::
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
             &TypeIdHelper<Block8JointStorageBuilderTest<std::tuple<>_>_>::dummy_,
             (_func_void *)p_Var9,(_func_void *)p_Var8,pTVar7);
  if (0xf < uStack_130) {
    uVar19 = uStack_130 + 1;
    pppppppcVar16 = local_148;
    if (0xfff < uVar19) {
      pppppppcVar16 = (char *******)local_148[-1];
      uVar19 = uStack_130 + 0x28;
      if ((char *)0x1f < (char *)((longlong)local_148 + (-8 - (longlong)pppppppcVar16)))
      goto LAB_14c5631b2;
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
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar17)) goto LAB_14c5631b2;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c5631b2;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c5631b2;
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
      if ((char *)0x1f < local_108._Ptr + (-8 - uVar17)) goto LAB_14c5631b2;
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
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))) goto LAB_14c5631b2;
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
LAB_14c5631b2:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar18,uVar19);
  }
  return true;
}

