// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 32

// gtest_registering_dummy_'' @ 14139f990

void __cdecl
`dynamic_initializer_for_'Base64Test_EncodeDecodeSize_Test::gtest_registering_dummy___(void)

{
  Base64Test_EncodeDecodeSize_Test::gtest_registering_dummy_ =
       Base64Test_EncodeDecodeSize_Test::AddToRegistry();
  return;
}

// `dynamic_initializer_for_'gtest_Base64TestBase64Test_dummy_'' @ 14139f9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__gtest_Base64TestBase64Test_dummy___(void)

{
  InstantiationInfo **ppIVar1;
  InstantiationInfo *pIVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  UnitTest *this;
  ParameterizedTestSuiteRegistry *this_00;
  char *pcVar9;
  ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test> *pPVar10;
  void *pvVar11;
  ulong64 uVar12;
  undefined1 auStackY_e8 [32];
  _Bxty local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  char *local_90;
  ulonglong uStack_88;
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
  pcVar9 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar3 = s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_80 = 0x7a;
  *(undefined8 *)pcVar9 = s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar9 + 8) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_78 = 0x7f;
  *(undefined8 *)(pcVar9 + 0x10) = s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar9 + 0x18) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar9 + 0x20) = s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar9 + 0x28) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar9 + 0x30) = s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar9 + 0x38) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar9 + 0x40) = s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar9 + 0x48) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar9 + 0x50) = s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar9 + 0x58) = uVar3;
  uVar3 = s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar9 + 0x60) = s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar9 + 0x68) = uVar3;
  *(undefined8 *)(pcVar9 + 0x70) = s_C__Workspace_UnrealEngine_Engin._112_8_;
  *(undefined2 *)(pcVar9 + 0x78) = s_C__Workspace_UnrealEngine_Engin._120_2_;
  pcVar9[0x7a] = '\0';
  local_b8._8_8_ = 0;
  local_90 = pcVar9;
  local_b8._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_a8 = ___xmm_000000000000007f000000000000007a;
  uStack_a0 = _UNK_152882938;
  uVar3 = *(undefined8 *)(pcVar9 + 8);
  *(undefined8 *)local_b8._Ptr = *(undefined8 *)pcVar9;
  *(undefined8 *)(local_b8._Ptr + 8) = uVar3;
  uVar3 = *(undefined8 *)(pcVar9 + 0x18);
  *(undefined8 *)(local_b8._Ptr + 0x10) = *(undefined8 *)(pcVar9 + 0x10);
  *(undefined8 *)(local_b8._Ptr + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(pcVar9 + 0x28);
  *(undefined8 *)(local_b8._Ptr + 0x20) = *(undefined8 *)(pcVar9 + 0x20);
  *(undefined8 *)(local_b8._Ptr + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(pcVar9 + 0x38);
  *(undefined8 *)(local_b8._Ptr + 0x30) = *(undefined8 *)(pcVar9 + 0x30);
  *(undefined8 *)(local_b8._Ptr + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(pcVar9 + 0x48);
  *(undefined8 *)(local_b8._Ptr + 0x40) = *(undefined8 *)(pcVar9 + 0x40);
  *(undefined8 *)(local_b8._Ptr + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(pcVar9 + 0x58);
  *(undefined8 *)(local_b8._Ptr + 0x50) = *(undefined8 *)(pcVar9 + 0x50);
  *(undefined8 *)(local_b8._Ptr + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(pcVar9 + 0x68);
  *(undefined8 *)(local_b8._Ptr + 0x60) = *(undefined8 *)(pcVar9 + 0x60);
  *(undefined8 *)(local_b8._Ptr + 0x68) = uVar3;
  *(undefined8 *)(local_b8._Ptr + 0x70) = *(undefined8 *)(pcVar9 + 0x70);
  *(undefined2 *)(local_b8._Ptr + 0x78) = *(undefined2 *)(pcVar9 + 0x78);
  *(local_b8._Ptr + 0x7a) = pcVar9[0x7a];
  local_98 = 0x25;
  pPVar10 = testing::internal::ParameterizedTestSuiteRegistry::
            GetTestSuitePatternHolder<_anonymous_namespace_::Base64Test>
                      (this_00,"Base64Test",(CodeLocation *)&local_b8);
  uVar7 = _UNK_15289ea48;
  uVar12 = ___xmm_000000000000000f000000000000000a;
  uVar6 = s_Base64Test._4_4_;
  uVar5 = s_Base64Test._0_4_;
  local_90 = (char *)0x0;
  uStack_88 = (ulonglong)(ushort)s_Base64Test._8_2_;
  uVar8 = uStack_88;
  uStack_88._0_4_ = (uint)(ushort)s_Base64Test._8_2_;
  local_48 = gtest_Base64TestBase64Test_EvalGenerator_;
  local_40 = gtest_Base64TestBase64Test_EvalGenerateName_;
  local_58 = ___xmm_000000000000000f000000000000000a;
  uStack_50 = _UNK_15289ea48;
  local_68._Buf[0] = s_Base64Test[0];
  local_68._Buf[1] = s_Base64Test[1];
  local_68._Buf[2] = s_Base64Test[2];
  local_68._Buf[3] = s_Base64Test[3];
  local_68._Buf[4] = s_Base64Test[4];
  local_68._Buf[5] = s_Base64Test[5];
  local_68._Buf[6] = s_Base64Test[6];
  local_68._Buf[7] = s_Base64Test[7];
  local_68._8_4_ = (uint)uStack_88;
  local_68._12_4_ = 0;
  pIVar2 = (pPVar10->instantiations_)._Mypair._Myval2._Mylast;
  local_38 = 
  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\utils\\TestBase64.cpp"
  ;
  local_30 = 0x25;
  uStack_88 = uVar8;
  if (pIVar2 == (pPVar10->instantiations_)._Mypair._Myval2._Myend) {
    std::
    vector<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::InstantiationInfo,std::allocator<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::InstantiationInfo>_>
    ::
    _Emplace_reallocate<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::InstantiationInfo>
              (&pPVar10->instantiations_,pIVar2,(InstantiationInfo *)&local_68);
  }
  else {
    (pIVar2->name)._Mypair._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pIVar2->name)._Mypair._Myval2._Bx + 8) = 0;
    (pIVar2->name)._Mypair._Myval2._Mysize = 0;
    (pIVar2->name)._Mypair._Myval2._Myres = 0;
    (pIVar2->name)._Mypair._Myval2._Bx._Ptr = (char *)CONCAT44(uVar6,uVar5);
    *(ulonglong *)((longlong)&(pIVar2->name)._Mypair._Myval2._Bx + 8) = (ulonglong)(uint)uStack_88;
    (pIVar2->name)._Mypair._Myval2._Mysize = uVar12;
    (pIVar2->name)._Mypair._Myval2._Myres = uVar7;
    local_58 = 0;
    local_68._0_4_ = uVar5 & 0xffffff00;
    pIVar2->generator = gtest_Base64TestBase64Test_EvalGenerator_;
    pIVar2->name_func = gtest_Base64TestBase64Test_EvalGenerateName_;
    pIVar2->file = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\utils\\TestBase64.cpp"
    ;
    pIVar2->line = 0x25;
    ppIVar1 = &(pPVar10->instantiations_)._Mypair._Myval2._Mylast;
    *ppIVar1 = *ppIVar1 + 1;
  }
  if (0xf < uStack_50) {
    pvVar4 = (void *)CONCAT44(local_68._4_4_,local_68._0_4_);
    uVar12 = uStack_50 + 1;
    pvVar11 = pvVar4;
    if (0xfff < uVar12) {
      pvVar11 = *(void **)((longlong)pvVar4 + -8);
      uVar12 = uStack_50 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar11))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    operator_delete(pvVar11,uVar12);
  }
  gtest_Base64TestBase64Test_dummy_ = 0;
  operator_delete(pcVar9,0x80);
  return;
}

// CreateTest @ 14c620c60

Test * __thiscall
testing::internal::ParameterizedTestFactory<Base64Test_EncodeDecodeSize_Test>::CreateTest
          (ParameterizedTestFactory<Base64Test_EncodeDecodeSize_Test> *this)

{
  Test *this_00;
  
  WithParamInterface<unsigned___int64>::parameter_ = &this->parameter_;
  this_00 = ::operator_new(0x18);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&Base64Test_EncodeDecodeSize_Test::_vftable__for__testing__Test__
    ;
    this_00[1]._padding_ =
         (longlong)
         &Base64Test_EncodeDecodeSize_Test::
          _vftable__for__testing__WithParamInterface<unsigned___int64>__;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c620cc0

void * __thiscall
testing::internal::ParameterizedTestFactory<Base64Test_EncodeDecodeSize_Test>::
_scalar_deleting_destructor_
          (ParameterizedTestFactory<Base64Test_EncodeDecodeSize_Test> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c620d00

void * __thiscall
_anon_EC1D8D27::Base64Test::_scalar_deleting_destructor_(Base64Test *this,uint param_1)

{
  *(undefined ***)&this->field_0x10 = &___7__WithParamInterface__K_testing__6B_;
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// TestBody @ 14c620d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Base64Test_EncodeDecodeSize_Test::TestBody(Base64Test_EncodeDecodeSize_Test *this)

{
  void *pvVar1;
  bool bVar2;
  basic_ostream<char,std::char_traits<char>_> *pbVar3;
  Message *pMVar4;
  AssertHelper *this_00;
  void *pvVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  undefined1 auStackY_a8 [32];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_78;
  AssertHelper local_70;
  AssertionResult local_68;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  bVar2 = testing::internal::IsTrue
                    (testing::WithParamInterface<unsigned___int64>::parameter_ != (ulong64 *)0x0);
  if (!bVar2) {
    testing::internal::GTestLog::GTestLog
              ((GTestLog *)&local_78,GTEST_FATAL,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\gtest.h"
               ,0x741);
    pbVar3 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                        "Condition parameter_ != nullptr failed. ");
    pbVar3 = std::operator<<<std::char_traits<char>_>
                       (pbVar3,"GetParam() can only be called inside a value-parameterized test ");
    std::operator<<<std::char_traits<char>_>
              (pbVar3,"-- did you intend to write TEST_P instead of TEST_F?");
    testing::internal::GTestLog::~GTestLog((GTestLog *)&local_78);
  }
  local_78._Myval2 =
       (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
       (((*testing::WithParamInterface<unsigned___int64>::parameter_ * 4) / 3 + 3 & 0xfffffffc) * 3
       >> 2);
  local_70.data_ =
       (AssertHelperData *)
       (((*testing::WithParamInterface<unsigned___int64>::parameter_ + 2) / 3) * 3);
  if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_70.data_ ==
      local_78._Myval2) {
    testing::AssertionSuccess(&local_68);
  }
  else {
    testing::PrintToString<unsigned___int64>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
               (ulong64 *)&local_78);
    testing::PrintToString<unsigned___int64>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
               (ulong64 *)&local_70);
    testing::internal::EqFailure
              (&local_68,"roundUp(dataSize, 3ul)","decodedSize",
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,false);
    if (0xf < uStack_40) {
      pvVar1 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
      uVar9 = uStack_40 + 1;
      pvVar5 = pvVar1;
      if (0xfff < uVar9) {
        pvVar5 = *(void **)((longlong)pvVar1 + -8);
        uVar9 = uStack_40 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar5))) goto LAB_14c620ef7;
      }
      ::operator_delete(pvVar5,uVar9);
    }
    local_58._Buf[0] = '\0';
    local_48 = ___xmm_000000000000000f0000000000000000;
    uStack_40 = _UNK_15076add8;
    if (0xf < local_20) {
      uVar9 = local_20 + 1;
      uVar6 = local_38._Ptr;
      if (0xfff < uVar9) {
        uVar6 = *(undefined8 *)(local_38._Ptr + -8);
        uVar9 = local_20 + 0x28;
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar6)) {
LAB_14c620ef7:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar6,uVar9);
    }
  }
  if (local_68.success_ == false) {
    pMVar4 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_68.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)local_68.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_68.message_._Mypair._Myval2 + 0x18)) {
        pcVar7 = *(char **)local_68.message_._Mypair._Myval2;
      }
    }
    this_00 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        (&local_70,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tersetests\\utils\\TestBase64.cpp"
                         ,0x22,pcVar7);
    testing::internal::AssertHelper::operator=(this_00,pMVar4);
    testing::internal::AssertHelper::~AssertHelper(&local_70);
    if (local_78._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar8 = (undefined8 *)
               ((longlong)&(local_78._Myval2)->field_0x0 +
               (longlong)*(int *)(*(longlong *)local_78._Myval2 + 4));
      (**(code **)*puVar8)(puVar8,1);
    }
  }
  if (local_68.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_68.message_._Mypair._Myval2);
    ::operator_delete((void *)local_68.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c620fe0

void * __thiscall
Base64Test_EncodeDecodeSize_Test::_scalar_deleting_destructor_
          (Base64Test_EncodeDecodeSize_Test *this,uint param_1)

{
  *(undefined ***)&this->field_0x10 = &___7__WithParamInterface__K_testing__6B_;
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// GetTestSuiteName @ 14c621030

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::GetTestSuiteName
          (ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test> *this)

{
  return &this->test_suite_name_;
}

// GetTestSuiteTypeId @ 14c621040

void * __thiscall
testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::GetTestSuiteTypeId
          (ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test> *this)

{
  return &TypeIdHelper<Base64Test>::dummy_;
}

// RegisterTests @ 14c621050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::RegisterTests
          (ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test> *this)

{
  int *piVar1;
  int iVar2;
  size_t _Size;
  ulonglong uVar3;
  code *pcVar4;
  _Tree_node<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void_*> *p_Var5;
  void *pvVar6;
  longlong lVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test> *pPVar10;
  char cVar11;
  bool bVar12;
  int iVar13;
  undefined4 uVar14;
  _Bxty *p_Var15;
  longlong *plVar16;
  longlong *plVar17;
  ulong64 *puVar18;
  _Bxty *p_Var19;
  basic_ostream<char,std::char_traits<char>_> *pbVar20;
  _Tree_node<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void_*> *p_Var21;
  undefined8 *puVar22;
  TestFactoryBase *pTVar23;
  void *pvVar24;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar25;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar26;
  undefined8 uVar27;
  _Bxty *p_Var28;
  char *pcVar29;
  ulong64 uVar30;
  ulonglong uVar31;
  undefined1 *puVar32;
  char *pcVar33;
  shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
  *psVar34;
  InstantiationInfo *pIVar35;
  ulonglong uVar36;
  ulonglong _Size_00;
  _Bxty *p_Var37;
  undefined1 auStackY_1d8 [32];
  <lambda_1> local_188;
  InstantiationInfo *local_180;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_178;
  _Tree_val<std::_Tree_simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_170;
  char *local_160;
  GTestLog local_158;
  GTestLog local_154;
  GTestLog local_150;
  GTestLog local_14c;
  char *local_148;
  ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test> *local_140;
  shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
  *local_138;
  _func___cdecl_basic_string<char,std::char_traits<char>,std::allocator<char>_>_TestParamInfo<unsigned___int64>_ptr
  *local_130;
  _Bxty *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  TestParamInfo<unsigned___int64> local_100;
  CodeLocation local_f0;
  _Bxty local_c8;
  ulonglong local_b8;
  ulonglong local_b0;
  _Bxty local_a8;
  undefined1 *local_98;
  ulonglong uStack_90;
  _Bxty local_88;
  undefined1 *local_78;
  ulonglong uStack_70;
  _Bxty local_68;
  ulonglong local_50;
  ulonglong local_48;
  
  uVar9 = _UNK_15076add8;
  puVar8 = ___xmm_000000000000000f0000000000000000;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  psVar34 = (this->tests_)._Mypair._Myval2._Myfirst;
  local_140 = this;
  if (psVar34 != (this->tests_)._Mypair._Myval2._Mylast) {
    do {
      if (*(longlong *)&psVar34->field_0x8 != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)&psVar34->field_0x8 + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      pIVar35 = (this->instantiations_)._Mypair._Myval2._Myfirst;
      local_148 = *(char **)psVar34;
      local_118 = *(longlong **)&psVar34->field_0x8;
      local_138 = psVar34;
      if (pIVar35 != (this->instantiations_)._Mypair._Myval2._Mylast) {
        do {
          (*pIVar35->generator)((ParamGenerator<unsigned___int64> *)&local_110);
          local_130 = pIVar35->name_func;
          _Size = (pIVar35->name)._Mypair._Myval2._Mysize;
          local_160 = pIVar35->file;
          iVar2 = pIVar35->line;
          local_98 = (undefined1 *)0x0;
          uStack_90 = 0xf;
          local_a8._8_8_ = 0;
          local_a8._Ptr = (char *)0x0;
          if (_Size != 0) {
            if (_Size == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::_Xlen_string();
            }
            local_180 = pIVar35;
            if (0xf < (pIVar35->name)._Mypair._Myval2._Myres) {
              local_180 = (InstantiationInfo *)(pIVar35->name)._Mypair._Myval2._Bx._Ptr;
            }
            puVar32 = (undefined1 *)(_Size + 1);
            uVar31 = 0xf;
            p_Var15 = &local_88;
            local_88._Ptr = (char *)0x0;
            local_88._8_8_ = 0;
            if (&DAT_0000000f < puVar32) {
              uVar31 = (ulonglong)puVar32 | 0xf;
              if (uVar31 < 0x8000000000000000) {
                if (uVar31 < 0x16) {
                  uVar31 = 0x16;
                }
              }
              else {
                uVar31 = 0x7fffffffffffffff;
              }
              p_Var15 = std::_Allocate<16,std::_Default_allocate_traits>(uVar31 + 1);
              local_88._Ptr = (char *)p_Var15;
            }
            local_78 = puVar32;
            uStack_70 = uVar31;
            memcpy(p_Var15,local_180,_Size);
            p_Var15->_Buf[_Size] = '/';
            puVar32[(longlong)p_Var15->_Buf] = 0;
            if (0xf < uStack_90) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Deallocate_for_capacity((allocator<char> *)local_a8._Buf,local_a8._Ptr,uStack_90);
            }
            local_98 = local_78;
            uStack_90 = uStack_70;
            local_a8._Ptr = local_88._Ptr;
            local_a8._8_8_ = local_88._8_8_;
          }
          uVar30 = *(ulong64 *)(local_148 + 0x10);
          pcVar33 = local_148;
          if (0xf < *(ulonglong *)(local_148 + 0x18)) {
            pcVar33 = *(char **)local_148;
          }
          if (uStack_90 - (longlong)local_98 < uVar30) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8,
                       uVar30,local_188,pcVar33,uVar30);
          }
          else {
            uVar27 = &local_a8;
            if (0xf < uStack_90) {
              uVar27 = local_a8._Ptr;
            }
            puVar32 = local_98 + uVar27;
            local_98 = local_98 + uVar30;
            memmove(puVar32,pcVar33,uVar30);
            puVar32[uVar30] = 0;
          }
          local_180 = (InstantiationInfo *)0x0;
          local_170._Myhead =
               (_Tree_node<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void_*>
                *)0x0;
          local_170._Mysize = 0;
          local_170._Myhead = ::operator_new(0x40);
          (local_170._Myhead)->_Left = local_170._Myhead;
          *(_Tree_node<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void_*>
            **)((longlong)local_170._Myhead + 8) = local_170._Myhead;
          *(_Tree_node<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void_*>
            **)((longlong)local_170._Myhead + 0x10) = local_170._Myhead;
          *(undefined2 *)((longlong)local_170._Myhead + 0x18) = 0x101;
          plVar16 = (longlong *)(**(code **)(*local_110 + 8))();
          local_120 = plVar16;
          while( true ) {
            plVar17 = (longlong *)(**(code **)(*local_110 + 0x10))();
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
            testing::Message::Message((Message *)&local_178);
            puVar18 = (ulong64 *)(**(code **)(*plVar16 + 0x20))(plVar16);
            local_100.param = *puVar18;
            local_100.index = (ulong64)local_180;
            (*local_130)((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_c8,&local_100);
            if (local_b8 == 0) {
LAB_14c62132d:
              bVar12 = false;
            }
            else {
              uVar31 = 0;
              if (local_b8 != 0) {
                p_Var15 = (_Bxty *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
                do {
                  p_Var19 = &local_c8;
                  if (0xf < local_b0) {
                    p_Var19 = p_Var15;
                  }
                  iVar13 = isalnum((int)p_Var19->_Buf[uVar31]);
                  p_Var15 = (_Bxty *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
                  if (iVar13 == 0) {
                    p_Var19 = &local_c8;
                    if (0xf < local_b0) {
                      p_Var19 = p_Var15;
                    }
                    if (p_Var19->_Buf[uVar31] != '_') goto LAB_14c62132d;
                  }
                  uVar31 = uVar31 + 1;
                } while (uVar31 < local_b8);
              }
              bVar12 = true;
            }
            bVar12 = IsTrue(bVar12);
            if (!bVar12) {
              GTestLog::GTestLog(&local_158,GTEST_FATAL,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-param-util.h"
                                 ,0x22d);
              pbVar20 = std::operator<<<std::char_traits<char>_>
                                  ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                                   "Condition IsValidParamName(param_name) failed. ");
              pbVar20 = std::operator<<<std::char_traits<char>_>
                                  (pbVar20,"Parameterized test name \'");
              p_Var15 = &local_c8;
              if (0xf < local_b0) {
                p_Var15 = (_Bxty *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
              }
              pbVar20 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                                  (pbVar20,p_Var15->_Buf,local_b8);
              pbVar20 = std::operator<<<std::char_traits<char>_>(pbVar20,"\' is invalid, in ");
              pbVar20 = std::operator<<<std::char_traits<char>_>(pbVar20,local_160);
              pbVar20 = std::operator<<<std::char_traits<char>_>(pbVar20," line ");
              pbVar20 = (basic_ostream<char,std::char_traits<char>_> *)
                        std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar20,iVar2);
              std::basic_ostream<char,std::char_traits<char>_>::operator<<
                        (pbVar20,std::endl<char,std::char_traits<char>_>);
              GTestLog::~GTestLog(&local_158);
            }
            uVar31 = local_b8;
            p_Var19 = (_Bxty *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
            p_Var15 = *(_Bxty **)((longlong)local_170._Myhead + 8);
            cVar11 = p_Var15->_Buf[0x19];
            p_Var37 = (_Bxty *)local_170._Myhead;
            while (cVar11 == '\0') {
              uVar3 = *(ulonglong *)(p_Var15->_Buf + 0x30);
              pbVar25 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        (p_Var15->_Buf + 0x20);
              p_Var28 = &local_c8;
              if (0xf < local_b0) {
                p_Var28 = p_Var19;
              }
              if (0xf < *(ulonglong *)(p_Var15->_Buf + 0x38)) {
                pbVar25 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          (pbVar25->_Mypair)._Myval2._Bx._Ptr;
              }
              uVar36 = uVar3;
              if (uVar31 < uVar3) {
                uVar36 = uVar31;
              }
              iVar13 = memcmp(pbVar25,p_Var28,uVar36);
              p_Var28 = p_Var15;
              if (iVar13 == 0) {
                if (uVar3 < uVar31) {
LAB_14c6217ce:
                  p_Var15 = (_Bxty *)(p_Var15->_Buf + 0x10);
                  p_Var28 = p_Var37;
                }
              }
              else if (iVar13 < 0) goto LAB_14c6217ce;
              p_Var15 = (_Bxty *)p_Var15->_Ptr;
              p_Var19 = (_Bxty *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
              p_Var37 = p_Var28;
              cVar11 = p_Var15->_Buf[0x19];
            }
            if (p_Var37->_Buf[0x19] == '\0') {
              pbVar25 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        (p_Var37->_Buf + 0x20);
              uVar3 = *(ulonglong *)(p_Var37->_Buf + 0x30);
              if (0xf < *(ulonglong *)(p_Var37->_Buf + 0x38)) {
                pbVar25 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          (pbVar25->_Mypair)._Myval2._Bx._Ptr;
              }
              p_Var15 = &local_c8;
              if (0xf < local_b0) {
                p_Var15 = p_Var19;
              }
              uVar36 = uVar31;
              if (uVar3 < uVar31) {
                uVar36 = uVar3;
              }
              iVar13 = memcmp(p_Var15,pbVar25,uVar36);
              if (iVar13 == 0) {
                if (uVar31 < uVar3) goto LAB_14c6214e7;
              }
              else if (iVar13 < 0) goto LAB_14c6214e7;
              bVar12 = false;
            }
            else {
LAB_14c6214e7:
              bVar12 = true;
            }
            bVar12 = IsTrue(bVar12);
            if (!bVar12) {
              GTestLog::GTestLog(&local_154,GTEST_FATAL,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-param-util.h"
                                 ,0x232);
              pbVar20 = std::operator<<<std::char_traits<char>_>
                                  ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                                   "Condition test_param_names.count(param_name) == 0 failed. ");
              pbVar20 = std::operator<<<std::char_traits<char>_>
                                  (pbVar20,"Duplicate parameterized test name \'");
              p_Var15 = &local_c8;
              if (0xf < local_b0) {
                p_Var15 = (_Bxty *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
              }
              pbVar20 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                                  (pbVar20,p_Var15->_Buf,local_b8);
              pbVar20 = std::operator<<<std::char_traits<char>_>(pbVar20,"\', in ");
              pbVar20 = std::operator<<<std::char_traits<char>_>(pbVar20,local_160);
              pbVar20 = std::operator<<<std::char_traits<char>_>(pbVar20," line ");
              pbVar20 = (basic_ostream<char,std::char_traits<char>_> *)
                        std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar20,iVar2);
              std::basic_ostream<char,std::char_traits<char>_>::operator<<
                        (pbVar20,std::endl<char,std::char_traits<char>_>);
              GTestLog::~GTestLog(&local_154);
            }
            uVar3 = local_b0;
            uVar31 = local_b8;
            uVar14 = 0;
            local_68._Ptr = (char *)local_170._Myhead;
            p_Var15 = *(_Bxty **)((longlong)local_170._Myhead + 8);
            p_Var19 = p_Var15;
            p_Var37 = (_Bxty *)local_170._Myhead;
            if (p_Var15->_Buf[0x19] == '\0') {
              p_Var28 = (_Bxty *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
              do {
                uVar36 = *(ulonglong *)(p_Var15->_Buf + 0x30);
                pbVar25 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          (p_Var15->_Buf + 0x20);
                p_Var19 = &local_c8;
                if (0xf < uVar3) {
                  p_Var19 = p_Var28;
                }
                if (0xf < *(ulonglong *)(p_Var15->_Buf + 0x38)) {
                  pbVar25 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            (pbVar25->_Mypair)._Myval2._Bx._Ptr;
                }
                _Size_00 = uVar36;
                if (uVar31 < uVar36) {
                  _Size_00 = uVar31;
                }
                local_128 = p_Var15;
                iVar13 = memcmp(pbVar25,p_Var19,_Size_00);
                if (iVar13 == 0) {
                  if (uVar36 < uVar31) goto LAB_14c6217ea;
LAB_14c621612:
                  uVar14 = 1;
                  p_Var37 = p_Var15;
                }
                else {
                  if (-1 < iVar13) goto LAB_14c621612;
LAB_14c6217ea:
                  uVar14 = 0;
                  p_Var15 = (_Bxty *)(p_Var15->_Buf + 0x10);
                }
                p_Var15 = (_Bxty *)p_Var15->_Ptr;
                p_Var19 = local_128;
                psVar34 = local_138;
              } while (p_Var15->_Buf[0x19] == '\0');
            }
            uVar27 = local_68._Ptr;
            local_88._8_4_ = uVar14;
            local_88._Ptr = (char *)p_Var19;
            if ((p_Var37->_Buf[0x19] != '\0') ||
               (bVar12 = std::
                         less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                         ::operator()((less<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                                       *)&local_170,
                                      (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                       *)&local_c8,
                                      (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                       *)(p_Var37->_Buf + 0x20)), bVar12)) {
              if (local_170._Mysize == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                std::_Throw_tree_length_error();
              }
              p_Var21 = ::operator_new(0x40);
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              basic_string<char,std::char_traits<char>,std::allocator<char>_>
                        (&p_Var21->_Myval,
                         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_c8);
              p_Var21->_Left =
                   (_Tree_node<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void_*>
                    *)uVar27;
              p_Var21->_Parent =
                   (_Tree_node<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void_*>
                    *)uVar27;
              p_Var21->_Right =
                   (_Tree_node<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void_*>
                    *)uVar27;
              local_68._Ptr = local_88._Ptr;
              local_68._8_8_ = local_88._8_8_;
              p_Var21->_Color = '\0';
              p_Var21->_Isnil = '\0';
              std::
              _Tree_val<std::_Tree_simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
              ::_Insert_node(&local_170,
                             (_Tree_id<std::_Tree_node<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void_*>_*>
                              *)&local_68,p_Var21);
              uVar31 = local_b8;
            }
            pcVar33 = local_148;
            if (*(ulong64 *)(local_148 + 0x30) != 0) {
              pcVar29 = local_148 + 0x20;
              if (0xf < *(ulonglong *)(local_148 + 0x38)) {
                pcVar29 = *(char **)pcVar29;
              }
              std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                        ((basic_ostream<char,std::char_traits<char>_> *)
                         ((longlong)local_178._Mypair._Myval2 + 0x10),pcVar29,
                         *(ulong64 *)(local_148 + 0x30));
              std::operator<<<std::char_traits<char>_>
                        ((basic_ostream<char,std::char_traits<char>_> *)
                         ((longlong)local_178._Mypair._Myval2 + 0x10),"/");
              uVar31 = local_b8;
            }
            p_Var15 = &local_c8;
            if (0xf < local_b0) {
              p_Var15 = (_Bxty *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
            }
            std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                      ((basic_ostream<char,std::char_traits<char>_> *)
                       ((longlong)local_178._Mypair._Myval2 + 0x10),p_Var15->_Buf,uVar31);
            plVar16 = local_120;
            plVar17 = *(longlong **)(pcVar33 + 0x40);
            pcVar4 = *(code **)(*plVar17 + 8);
            puVar22 = (undefined8 *)(**(code **)(*local_120 + 0x20))(local_120);
            pTVar23 = (TestFactoryBase *)(*pcVar4)(plVar17,*puVar22);
            bVar12 = IsTrue(true);
            pcVar33 = local_160;
            if (!bVar12) {
              GTestLog::GTestLog(&local_150,GTEST_FATAL,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                                 ,0x213);
              pbVar20 = std::operator<<<std::char_traits<char>_>
                                  ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                                   "Condition !test_case_fp || !test_suite_fp failed. ");
              pbVar20 = std::operator<<<std::char_traits<char>_>
                                  (pbVar20,
                                   "Test can not provide both TearDownTestSuite and TearDownTestCase, please make sure there is only one present at"
                                  );
              pcVar33 = local_160;
              pbVar20 = std::operator<<<std::char_traits<char>_>(pbVar20,local_160);
              pbVar20 = std::operator<<<std::char_traits<char>_>(pbVar20,":");
              std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar20,iVar2);
              GTestLog::~GTestLog(&local_150);
            }
            bVar12 = IsTrue(true);
            if (!bVar12) {
              GTestLog::GTestLog(&local_14c,GTEST_FATAL,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\GoogleTest\\include\\gtest\\internal\\gtest-internal.h"
                                 ,0x204);
              pbVar20 = std::operator<<<std::char_traits<char>_>
                                  ((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                                   "Condition !test_case_fp || !test_suite_fp failed. ");
              pbVar20 = std::operator<<<std::char_traits<char>_>
                                  (pbVar20,
                                   "Test can not provide both SetUpTestSuite and SetUpTestCase, please make sure there is only one present at "
                                  );
              pbVar20 = std::operator<<<std::char_traits<char>_>(pbVar20,pcVar33);
              pbVar20 = std::operator<<<std::char_traits<char>_>(pbVar20,":");
              std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar20,iVar2);
              GTestLog::~GTestLog(&local_14c);
            }
            pPVar10 = local_140;
            pvVar24 = (void *)(**(code **)(local_140->_padding_ + 0x10))(local_140);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            basic_string<char,std::char_traits<char>,std::allocator<char>_>
                      (&local_f0.file,&(pPVar10->code_location_).file);
            local_f0.line = (pPVar10->code_location_).line;
            puVar18 = (ulong64 *)(**(code **)(*plVar16 + 0x20))(plVar16);
            pbVar25 = PrintToString<unsigned___int64>
                                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &local_68,puVar18);
            if (0xf < (pbVar25->_Mypair)._Myval2._Myres) {
              pbVar25 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        (pbVar25->_Mypair)._Myval2._Bx._Ptr;
            }
            pbVar26 = testing::Message::GetString
                                ((Message *)&local_178,
                                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &local_88);
            if (0xf < (pbVar26->_Mypair)._Myval2._Myres) {
              pbVar26 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        (pbVar26->_Mypair)._Myval2._Bx._Ptr;
            }
            uVar27 = &local_a8;
            if (0xf < uStack_90) {
              uVar27 = local_a8._Ptr;
            }
            MakeAndRegisterTestInfo
                      ((char *)uVar27,(char *)pbVar26,(char *)0x0,(char *)pbVar25,&local_f0,pvVar24,
                       (_func_void *)0x0,(_func_void *)0x0,pTVar23);
            if (0xf < uStack_70) {
              uVar30 = uStack_70 + 1;
              uVar27 = local_88._Ptr;
              if (0xfff < uVar30) {
                uVar27 = *(undefined8 *)(local_88._Ptr + -8);
                uVar30 = uStack_70 + 0x28;
                if ((char *)0x1f < local_88._Ptr + (-8 - uVar27)) goto LAB_14c621bb3;
              }
              ::operator_delete((void *)uVar27,uVar30);
            }
            local_88._Ptr = local_88._Ptr & 0xffffffffffffff00;
            local_78 = puVar8;
            uStack_70 = uVar9;
            if (0xf < local_50) {
              uVar30 = local_50 + 1;
              uVar27 = local_68._Ptr;
              if (0xfff < uVar30) {
                uVar27 = *(undefined8 *)(local_68._Ptr + -8);
                uVar30 = local_50 + 0x28;
                if ((char *)0x1f < local_68._Ptr + (-8 - uVar27)) {
LAB_14c621bb3:
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
              }
              ::operator_delete((void *)uVar27,uVar30);
            }
            if (0xf < local_b0) {
              pvVar6 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
              uVar30 = local_b0 + 1;
              pvVar24 = pvVar6;
              if (0xfff < uVar30) {
                pvVar24 = *(void **)((longlong)pvVar6 + -8);
                uVar30 = local_b0 + 0x28;
                if (0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar24))) {
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
              }
              ::operator_delete(pvVar24,uVar30);
            }
            local_b8 = 0;
            local_b0 = 0xf;
            local_c8._Buf[0] = '\0';
            if (local_178._Mypair._Myval2 !=
                (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              puVar22 = (undefined8 *)
                        ((longlong)local_178._Mypair._Myval2 +
                        (longlong)*(int *)(*(longlong *)local_178._Mypair._Myval2 + 4));
              (**(code **)*puVar22)(puVar22,1);
            }
            (**(code **)(*plVar16 + 0x10))(plVar16);
            local_180 = (InstantiationInfo *)((longlong)local_180 + 1);
          }
          if (plVar16 != (longlong *)0x0) {
            (**(code **)*plVar16)(plVar16,1);
          }
          cVar11 = (*(_Tree_node<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void_*>
                      **)((longlong)local_170._Myhead + 8))->_Isnil;
          p_Var21 = *(_Tree_node<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void_*>
                      **)((longlong)local_170._Myhead + 8);
          while (cVar11 == '\0') {
            std::
            _Tree_val<std::_Tree_simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
            ::
            _Erase_tree<std::allocator<std::_Tree_node<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void_*>_>_>
                      (&local_170,
                       (allocator<std::_Tree_node<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,void_*>_>
                        *)&local_170,p_Var21->_Right);
            p_Var5 = p_Var21->_Left;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      (&p_Var21->_Myval);
            ::operator_delete(p_Var21,0x40);
            p_Var21 = p_Var5;
            cVar11 = p_Var5->_Isnil;
          }
          ::operator_delete(local_170._Myhead,0x40);
          if (0xf < uStack_90) {
            uVar30 = uStack_90 + 1;
            uVar27 = local_a8._Ptr;
            if (0xfff < uVar30) {
              uVar27 = *(undefined8 *)(local_a8._Ptr + -8);
              uVar30 = uStack_90 + 0x28;
              if ((char *)0x1f < local_a8._Ptr + (-8 - uVar27)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar27,uVar30);
          }
          plVar16 = local_108;
          local_98 = (undefined1 *)0x0;
          uStack_90 = 0xf;
          local_a8._Ptr = local_a8._Ptr & 0xffffffffffffff00;
          if (local_108 != (longlong *)0x0) {
            LOCK();
            plVar17 = local_108 + 1;
            lVar7 = *plVar17;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_108)(local_108);
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar16 + 8))(plVar16);
              }
            }
          }
          pIVar35 = pIVar35 + 1;
          this = local_140;
        } while (pIVar35 != (local_140->instantiations_)._Mypair._Myval2._Mylast);
      }
      plVar16 = local_118;
      if (local_118 != (longlong *)0x0) {
        LOCK();
        plVar17 = local_118 + 1;
        lVar7 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_118)(local_118);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar16 + 8))(plVar16);
          }
        }
      }
      psVar34 = psVar34 + 1;
    } while (psVar34 != (this->tests_)._Mypair._Myval2._Mylast);
  }
  return;
}

// `scalar_deleting_destructor'`adjustor{16}'_(unsigned_int)___ptr64 @ 14c621c0c

void [thunk]:`anonymous_namespace'::Base64Test::
     _scalar_deleting_destructor__adjustor_16____unsigned_int____ptr64
               (longlong param_1,uint param_2)

{
  _anon_EC1D8D27::Base64Test::_scalar_deleting_destructor_((Base64Test *)(param_1 + -0x10),param_2);
  return;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14c621c1c

/* [thunk]:public: virtual void * __ptr64 __cdecl Base64Test_EncodeDecodeSize_Test::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
Base64Test_EncodeDecodeSize_Test::_vector_deleting_destructor__adjustor_16__
          (Base64Test_EncodeDecodeSize_Test *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((Base64Test_EncodeDecodeSize_Test *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14c621c30

void * __thiscall
testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::
_scalar_deleting_destructor_
          (ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test> *this,uint param_1)

{
  std::
  vector<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::InstantiationInfo,std::allocator<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::InstantiationInfo>_>
  ::
  ~vector<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::InstantiationInfo,std::allocator<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::InstantiationInfo>_>
            (&this->instantiations_);
  std::
  vector<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::TestInfo>,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::TestInfo>_>_>
  ::
  ~vector<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>_>_>
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

// CreateTestFactory @ 14c621ca0

TestFactoryBase * __thiscall
testing::internal::TestMetaFactory<Base64Test_EncodeDecodeSize_Test>::CreateTestFactory
          (TestMetaFactory<Base64Test_EncodeDecodeSize_Test> *this,ulong64 param_1)

{
  TestFactoryBase *pTVar1;
  
  pTVar1 = ::operator_new(0x10);
  if (pTVar1 != (TestFactoryBase *)0x0) {
    pTVar1[1] = (TestFactoryBase)param_1;
    *pTVar1 = (TestFactoryBase)
              &
              ___7__ParameterizedTestFactory_VBase64Test_EncodeDecodeSize_Test___internal_testing__6B_
    ;
    return pTVar1;
  }
  return (TestFactoryBase *)0x0;
}

// `scalar_deleting_destructor' @ 14c621ce0

void * __thiscall
testing::internal::TestMetaFactory<Base64Test_EncodeDecodeSize_Test>::_scalar_deleting_destructor_
          (TestMetaFactory<Base64Test_EncodeDecodeSize_Test> *this,uint param_1)

{
  *this = (TestMetaFactory<Base64Test_EncodeDecodeSize_Test>)
          &___7__TestMetaFactoryBase__K_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// _Destroy @ 14c621d20

void __thiscall
std::
_Ref_count<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::TestInfo>
::_Destroy(_Ref_count<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
           *this)

{
  TestInfo *this_00;
  TestMetaFactoryBase<unsigned___int64> *pTVar1;
  
  this_00 = this->_Ptr;
  if (this_00 != (TestInfo *)0x0) {
    pTVar1 = (this_00->test_meta_factory)._Mypair._Myval2;
    if (pTVar1 != (TestMetaFactoryBase<unsigned___int64> *)0x0) {
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

// _Delete_this @ 14c621d80

void __thiscall
std::
_Ref_count<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::TestInfo>
::_Delete_this(_Ref_count<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
               *this)

{
  if (this != (_Ref_count<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
               *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014c621d8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x10))(this,1);
    return;
  }
  return;
}

// `scalar_deleting_destructor' @ 14c621da0

void * __thiscall
std::
_Ref_count<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::TestInfo>
::_scalar_deleting_destructor_
          (_Ref_count<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// GetTestSuitePatternHolder<`anonymous_namespace'::Base64Test> @ 14c621dd0

ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test> * __thiscall
testing::internal::ParameterizedTestSuiteRegistry::
GetTestSuitePatternHolder<_anonymous_namespace_::Base64Test>
          (ParameterizedTestSuiteRegistry *this,char *param_1,CodeLocation *param_2)

{
  ParameterizedTestSuiteInfoBase ***pppPVar1;
  ParameterizedTestSuiteInfoBase **ppPVar2;
  int iVar3;
  undefined8 *_Buf1;
  size_t sVar4;
  bool *pbVar5;
  ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test> *pPVar6;
  size_t sVar7;
  CodeLocation *pCVar8;
  ParameterizedTestSuiteInfoBase **ppPVar9;
  ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test> *local_58;
  CodeLocation local_50;
  
  ppPVar9 = (this->test_suite_infos_)._Mypair._Myval2._Myfirst;
  ppPVar2 = (this->test_suite_infos_)._Mypair._Myval2._Mylast;
  do {
    if (ppPVar9 == ppPVar2) {
LAB_14c621e60:
      pPVar6 = ::operator_new(0x80);
      if (pPVar6 == (ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test> *)0x0) {
        pPVar6 = (ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test> *)0x0;
      }
      else {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  (&local_50.file,&param_2->file);
        local_50.line = param_2->line;
        pPVar6->_padding_ = (longlong)&ParameterizedTestSuiteInfo<Base64Test>::_vftable_;
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
             (shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
              *)0x0;
        (pPVar6->tests_)._Mypair._Myval2._Mylast =
             (shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
              *)0x0;
        (pPVar6->tests_)._Mypair._Myval2._Myend =
             (shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
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
LAB_14c621f20:
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
      if (pbVar5 != &TypeIdHelper<Base64Test>::dummy_) {
        pCVar8 = CodeLocation::CodeLocation(&local_50,param_2);
        ReportInvalidTestSuiteType(param_1,pCVar8);
                    /* WARNING: Subroutine does not return */
        posix::Abort();
      }
      pPVar6 = (ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test> *)*ppPVar9;
      if (pPVar6 != (ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test> *)0x0)
      goto LAB_14c621f20;
      goto LAB_14c621e60;
    }
    ppPVar9 = ppPVar9 + 1;
  } while( true );
}

// Values<unsigned_long,unsigned_long,unsigned_long,unsigned_long,unsigned_long,unsigned_long,unsigned_long,unsigned_long,unsigned_long> @ 14c621f70

ValueArray<unsigned_long,unsigned_long,unsigned_long,unsigned_long,unsigned_long,unsigned_long,unsigned_long,unsigned_long,unsigned_long>
* __cdecl testing::
          Values<unsigned_long,unsigned_long,unsigned_long,unsigned_long,unsigned_long,unsigned_long,unsigned_long,unsigned_long,unsigned_long>
                    (ValueArray<unsigned_long,unsigned_long,unsigned_long,unsigned_long,unsigned_long,unsigned_long,unsigned_long,unsigned_long,unsigned_long>
                     *__return_storage_ptr__,ulong param_1,ulong param_2,ulong param_3,ulong param_4
                    ,ulong param_5,ulong param_6,ulong param_7,ulong param_8,ulong param_9)

{
  *(ulong *)&(__return_storage_ptr__->v_).field_0xc = param_4;
  *(ulong *)&(__return_storage_ptr__->v_).field_0x10 = param_5;
  *(ulong *)&(__return_storage_ptr__->v_).field_0x14 = param_6;
  *(ulong *)&(__return_storage_ptr__->v_).field_0x18 = param_7;
  *(ulong *)&(__return_storage_ptr__->v_).field_0x1c = param_8;
  *(ulong *)&(__return_storage_ptr__->v_).field_0x20 = param_9;
  *(ulong *)&__return_storage_ptr__->v_ = param_1;
  *(ulong *)&(__return_storage_ptr__->v_).field_0x4 = param_2;
  *(ulong *)&(__return_storage_ptr__->v_).field_0x8 = param_3;
  return __return_storage_ptr__;
}

// _Destroy_range<std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::TestInfo>_>_> @ 14c621fb0

void __cdecl
std::
_Destroy_range<std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>_>_>
          (shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
           *param_1,
          shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
          *param_2,allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>_>
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

// _Emplace_reallocate<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::InstantiationInfo> @ 14c622030

InstantiationInfo * __thiscall
std::
vector<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::InstantiationInfo,std::allocator<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::InstantiationInfo>_>
::
_Emplace_reallocate<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::InstantiationInfo>
          (vector<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::InstantiationInfo,std::allocator<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::InstantiationInfo>_>
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
    _Uninitialized_move<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::InstantiationInfo_*,std::allocator<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::InstantiationInfo>_>
              (pIVar6,param_1,pIVar4,
               (allocator<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::InstantiationInfo>
                *)this);
    pIVar7 = (this->_Mypair)._Myval2._Mylast;
    pIVar6 = param_1;
    pIVar12 = pIVar11;
  }
  _Uninitialized_move<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::InstantiationInfo_*,std::allocator<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::InstantiationInfo>_>
            (pIVar6,pIVar7,pIVar12,
             (allocator<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::InstantiationInfo>
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

// _Emplace_reallocate<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::TestInfo>_> @ 14c622220

shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
* __thiscall
std::
vector<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::TestInfo>,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::TestInfo>_>_>
::
_Emplace_reallocate<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>_>
          (vector<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>_>_>
           *this,shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
                 *param_1,
          shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
          *param_2)

{
  shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
  *psVar1;
  ulonglong uVar2;
  shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
  *psVar3;
  shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
  *psVar4;
  ulong64 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
  *psVar8;
  ulonglong uVar9;
  shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
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
  psVar10 = (shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
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
    _Uninitialized_move<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>_*,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>_>_>
              (psVar3,param_1,psVar1,
               (allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>_>
                *)this);
    psVar4 = (this->_Mypair)._Myval2._Mylast;
    psVar3 = param_1;
    psVar8 = psVar10 + 1;
  }
  _Uninitialized_move<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>_*,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>_>_>
            (psVar3,psVar4,psVar8,
             (allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>_>
              *)this);
  psVar3 = (this->_Mypair)._Myval2._Myfirst;
  if (psVar3 != (shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
                 *)0x0) {
    _Destroy_range<std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>_>_>
              (psVar3,(this->_Mypair)._Myval2._Mylast,
               (allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>_>
                *)this);
    psVar3 = (this->_Mypair)._Myval2._Myfirst;
    uVar5 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)psVar3 & 0xfffffffffffffff0;
    psVar4 = psVar3;
    if (0xfff < uVar5) {
      psVar4 = *(shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
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

// _Uninitialized_move<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::InstantiationInfo_*,std::allocator<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::InstantiationInfo>_> @ 14c6223c0

InstantiationInfo * __cdecl
std::
_Uninitialized_move<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::InstantiationInfo_*,std::allocator<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::InstantiationInfo>_>
          (InstantiationInfo *param_1,InstantiationInfo *param_2,InstantiationInfo *param_3,
          allocator<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::InstantiationInfo>
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

// _Uninitialized_move<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::TestInfo>_*,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::TestInfo>_>_> @ 14c622450

shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
* __cdecl std::
          _Uninitialized_move<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>_*,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>_>_>
                    (shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
                     *param_1,
                    shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
                    *param_2,shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
                             *param_3,
                    allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>_>
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
    } while ((shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
              *)(lVar1 + (longlong)param_3) != param_2);
  }
  _Destroy_range<std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>_>_>
            (param_3,param_3,param_4);
  return param_3;
}

// ~vector<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::InstantiationInfo,std::allocator<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::InstantiationInfo>_> @ 14c6224c0

void __thiscall
std::
vector<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::InstantiationInfo,std::allocator<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::InstantiationInfo>_>
::
~vector<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::InstantiationInfo,std::allocator<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::InstantiationInfo>_>
          (vector<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::InstantiationInfo,std::allocator<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::InstantiationInfo>_>
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

// ~vector<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::TestInfo>,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::TestInfo>_>_> @ 14c622570

void __thiscall
std::
vector<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::TestInfo>,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::TestInfo>_>_>
::
~vector<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>_>_>
          (vector<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>_>_>
           *this)

{
  shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
  *psVar1;
  shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
  *psVar2;
  ulong64 uVar3;
  
  psVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (psVar1 != (shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
                 *)0x0) {
    _Destroy_range<std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>_>_>
              (psVar1,(this->_Mypair)._Myval2._Mylast,
               (allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>_>
                *)this);
    psVar1 = (this->_Mypair)._Myval2._Myfirst;
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)psVar1 & 0xfffffffffffffff0;
    psVar2 = psVar1;
    if (0xfff < uVar3) {
      psVar2 = *(shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
                 **)&psVar1[-1].field_0x8;
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)psVar1 + (-8 - (longlong)psVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(psVar2,uVar3);
    (this->_Mypair)._Myval2._Myfirst =
         (shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
          *)0x0;
    (this->_Mypair)._Myval2._Mylast =
         (shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
          *)0x0;
    (this->_Mypair)._Myval2._Myend =
         (shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
          *)0x0;
  }
  return;
}

// AddToRegistry @ 14c622600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl Base64Test_EncodeDecodeSize_Test::AddToRegistry(void)

{
  shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
  **ppsVar1;
  int *piVar2;
  int iVar3;
  shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
  *psVar4;
  undefined8 uVar5;
  longlong lVar6;
  UnitTest *this;
  ParameterizedTestSuiteRegistry *this_00;
  char *pcVar7;
  ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test> *pPVar8;
  longlong *plVar9;
  longlong *plVar10;
  char *pcVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_98 [48];
  _Bxty local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_98;
  this = testing::UnitTest::GetInstance();
  this_00 = testing::UnitTest::parameterized_test_registry(this);
  plVar13 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  pcVar7 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar5 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_30 = 0x7a;
  *(undefined8 *)pcVar7 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar7 + 8) = uVar5;
  uVar5 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_28 = 0x7f;
  *(undefined8 *)(pcVar7 + 0x10) = ::s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar7 + 0x18) = uVar5;
  uVar5 = ::s_C__Workspace_UnrealEngine_Engin._40_8_;
  local_68._8_8_ = 0;
  *(undefined8 *)(pcVar7 + 0x20) = ::s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar7 + 0x28) = uVar5;
  uVar5 = ::s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar7 + 0x30) = ::s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar7 + 0x38) = uVar5;
  uVar5 = ::s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar7 + 0x40) = ::s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar7 + 0x48) = uVar5;
  uVar5 = ::s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar7 + 0x50) = ::s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar7 + 0x58) = uVar5;
  uVar5 = ::s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar7 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar7 + 0x68) = uVar5;
  *(undefined8 *)(pcVar7 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_8_;
  *(undefined2 *)(pcVar7 + 0x78) = ::s_C__Workspace_UnrealEngine_Engin._120_2_;
  pcVar7[0x7a] = '\0';
  local_40 = (longlong *)pcVar7;
  local_68._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_58 = ___xmm_000000000000007f000000000000007a;
  uStack_50 = _UNK_152882938;
  uVar5 = *(undefined8 *)(pcVar7 + 8);
  local_48 = 0xe;
  *(undefined8 *)local_68._Ptr = *(undefined8 *)pcVar7;
  *(undefined8 *)(local_68._Ptr + 8) = uVar5;
  uVar5 = *(undefined8 *)(pcVar7 + 0x18);
  *(undefined8 *)(local_68._Ptr + 0x10) = *(undefined8 *)(pcVar7 + 0x10);
  *(undefined8 *)(local_68._Ptr + 0x18) = uVar5;
  uVar5 = *(undefined8 *)(pcVar7 + 0x28);
  *(undefined8 *)(local_68._Ptr + 0x20) = *(undefined8 *)(pcVar7 + 0x20);
  *(undefined8 *)(local_68._Ptr + 0x28) = uVar5;
  uVar5 = *(undefined8 *)(pcVar7 + 0x38);
  *(undefined8 *)(local_68._Ptr + 0x30) = *(undefined8 *)(pcVar7 + 0x30);
  *(undefined8 *)(local_68._Ptr + 0x38) = uVar5;
  uVar5 = *(undefined8 *)(pcVar7 + 0x48);
  *(undefined8 *)(local_68._Ptr + 0x40) = *(undefined8 *)(pcVar7 + 0x40);
  *(undefined8 *)(local_68._Ptr + 0x48) = uVar5;
  uVar5 = *(undefined8 *)(pcVar7 + 0x58);
  *(undefined8 *)(local_68._Ptr + 0x50) = *(undefined8 *)(pcVar7 + 0x50);
  *(undefined8 *)(local_68._Ptr + 0x58) = uVar5;
  uVar5 = *(undefined8 *)(pcVar7 + 0x68);
  *(undefined8 *)(local_68._Ptr + 0x60) = *(undefined8 *)(pcVar7 + 0x60);
  *(undefined8 *)(local_68._Ptr + 0x68) = uVar5;
  *(undefined8 *)(local_68._Ptr + 0x70) = *(undefined8 *)(pcVar7 + 0x70);
  *(undefined2 *)(local_68._Ptr + 0x78) = *(undefined2 *)(pcVar7 + 0x78);
  *(local_68._Ptr + 0x7a) = pcVar7[0x7a];
  pPVar8 = testing::internal::ParameterizedTestSuiteRegistry::
           GetTestSuitePatternHolder<_anonymous_namespace_::Base64Test>
                     (this_00,"Base64Test",(CodeLocation *)&local_68);
  plVar9 = ::operator_new(8);
  plVar12 = plVar13;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)
              &___7__TestMetaFactory_VBase64Test_EncodeDecodeSize_Test___internal_testing__6B_;
    plVar12 = plVar9;
  }
  plVar10 = ::operator_new(0x48);
  plVar9 = plVar13;
  if (plVar10 != (longlong *)0x0) {
    *plVar10 = 0;
    plVar10[1] = 0;
    plVar10[2] = 10;
    plVar10[3] = 0xf;
    *plVar10 = s_Base64Test._0_8_;
    *(undefined2 *)(plVar10 + 1) = s_Base64Test._8_2_;
    *(undefined1 *)((longlong)plVar10 + 10) = 0;
    plVar10[4] = 0;
    plVar10[5] = 0;
    plVar10[6] = 0;
    plVar10[7] = 0;
    pcVar11 = std::_Allocate<16,std::_Default_allocate_traits>(0x20);
    plVar10[4] = (longlong)pcVar11;
    plVar10[6] = 0x10;
    plVar10[7] = 0x1f;
    uVar5 = s_EncodeDecodeSize._8_8_;
    *(undefined8 *)pcVar11 = s_EncodeDecodeSize._0_8_;
    *(undefined8 *)(pcVar11 + 8) = uVar5;
    pcVar11[0x10] = '\0';
    plVar10[8] = (longlong)plVar12;
    plVar9 = plVar10;
  }
  plVar12 = ::operator_new(0x18);
  local_38 = plVar13;
  if (plVar12 != (longlong *)0x0) {
    *(undefined4 *)(plVar12 + 1) = 1;
    *plVar12 = (longlong)
               &std::_Ref_count<testing::internal::ParameterizedTestSuiteInfo<Base64Test>::TestInfo>
                ::_vftable_;
    *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
    plVar12[2] = (longlong)plVar9;
    local_38 = plVar12;
  }
  psVar4 = (pPVar8->tests_)._Mypair._Myval2._Mylast;
  local_40 = plVar9;
  if (psVar4 == (pPVar8->tests_)._Mypair._Myval2._Myend) {
    std::
    vector<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::TestInfo>,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::TestInfo>_>_>
    ::
    _Emplace_reallocate<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>_>
              (&pPVar8->tests_,psVar4,
               (shared_ptr<testing::internal::ParameterizedTestSuiteInfo<_anonymous_namespace_::Base64Test>::TestInfo>
                *)&local_40);
    plVar13 = local_38;
  }
  else {
    *(longlong **)psVar4 = plVar9;
    *(longlong **)&psVar4->field_0x8 = local_38;
    ppsVar1 = &(pPVar8->tests_)._Mypair._Myval2._Mylast;
    *ppsVar1 = *ppsVar1 + 1;
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar13 + 1;
    lVar6 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13);
      }
    }
  }
  ::operator_delete(pcVar7,0x80);
  return 0;
}

// _Xlength @ 14c6228f0

void __cdecl
std::
vector<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::InstantiationInfo,std::allocator<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::InstantiationInfo>_>
::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 14c622910

void __cdecl
std::
vector<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::TestInfo>,std::allocator<std::shared_ptr<testing::internal::ParameterizedTestSuiteInfo<`anonymous_namespace'::Base64Test>::TestInfo>_>_>
::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// gtest_Base64TestBase64Test_EvalGenerateName_ @ 14c622930

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
gtest_Base64TestBase64Test_EvalGenerateName_
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          TestParamInfo<unsigned___int64> *param_1)

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

// gtest_Base64TestBase64Test_EvalGenerator_ @ 14c6229b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ParamGenerator<unsigned___int64> * __cdecl
gtest_Base64TestBase64Test_EvalGenerator_(ParamGenerator<unsigned___int64> *__return_storage_ptr__)

{
  void *_Dst;
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  puVar3 = (undefined8 *)0x0;
  local_70 = 1;
  local_78 = 0;
  local_68 = 2;
  local_60 = 3;
  local_58 = 4;
  local_50 = 5;
  local_48 = 6;
  local_40 = 7;
  local_38 = 8;
  _Dst = std::_Allocate<16,std::_Default_allocate_traits>(0x48);
  memmove(_Dst,&local_78,0x48);
  puVar1 = operator_new(0x20);
  puVar4 = puVar3;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__ValuesInIteratorRangeGenerator__K_internal_testing__6B_;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    pvVar2 = std::_Allocate<16,std::_Default_allocate_traits>(0x48);
    puVar1[1] = pvVar2;
    puVar1[2] = pvVar2;
    puVar1[3] = (longlong)pvVar2 + 0x48;
    pvVar2 = (void *)puVar1[1];
    memmove(pvVar2,_Dst,0x48);
    puVar1[2] = (longlong)pvVar2 + 0x48;
    puVar4 = puVar1;
  }
  *(undefined8 *)&__return_storage_ptr__->impl_ = 0;
  *(undefined8 *)&(__return_storage_ptr__->impl_).field_0x8 = 0;
  puVar1 = operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &___7___Ref_count_V__ParamGeneratorInterface__K_internal_testing___std__6B_;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar4;
    puVar3 = puVar1;
  }
  *(undefined8 **)&__return_storage_ptr__->impl_ = puVar4;
  *(undefined8 **)&(__return_storage_ptr__->impl_).field_0x8 = puVar3;
  if (_Dst != (void *)0x0) {
    operator_delete(_Dst,0x48);
  }
  return __return_storage_ptr__;
}

