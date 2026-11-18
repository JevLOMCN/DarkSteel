// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 37

// test_info_'' @ 141340a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'ScalarJointsFactoryTest_NeutralJointsAreCopied_Test::test_info___(void)

{
  undefined8 uVar1;
  TestFactoryBase *pTVar2;
  _func___cdecl_void *p_Var3;
  _func___cdecl_void *p_Var4;
  void *pvVar5;
  char *pcVar6;
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
              ___7__TestFactoryImpl_VScalarJointsFactoryTest_NeutralJointsAreCopied_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\TestJointsFactory.cpp"
                      ,0xd);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\TestJointsFactory.cpp"
                      ,0xd);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7f;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x7f;
  *(undefined8 *)(pcVar6 + 0x10) = ::s_C__Workspace_UnrealEngine_Engin._16_8_;
  *(undefined8 *)(pcVar6 + 0x18) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._40_8_;
  *(undefined8 *)(pcVar6 + 0x20) = ::s_C__Workspace_UnrealEngine_Engin._32_8_;
  *(undefined8 *)(pcVar6 + 0x28) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._56_8_;
  *(undefined8 *)(pcVar6 + 0x30) = ::s_C__Workspace_UnrealEngine_Engin._48_8_;
  *(undefined8 *)(pcVar6 + 0x38) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._72_8_;
  *(undefined8 *)(pcVar6 + 0x40) = ::s_C__Workspace_UnrealEngine_Engin._64_8_;
  *(undefined8 *)(pcVar6 + 0x48) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._88_8_;
  *(undefined8 *)(pcVar6 + 0x50) = ::s_C__Workspace_UnrealEngine_Engin._80_8_;
  *(undefined8 *)(pcVar6 + 0x58) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._104_8_;
  *(undefined8 *)(pcVar6 + 0x60) = ::s_C__Workspace_UnrealEngine_Engin._96_8_;
  *(undefined8 *)(pcVar6 + 0x68) = uVar1;
  *(undefined8 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_8_;
  *(undefined4 *)(pcVar6 + 0x78) = ::s_C__Workspace_UnrealEngine_Engin._120_4_;
  *(undefined2 *)(pcVar6 + 0x7c) = ::s_C__Workspace_UnrealEngine_Engin._124_2_;
  pcVar6[0x7e] = ::s_C__Workspace_UnrealEngine_Engin[0x7e];
  pcVar6[0x7f] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007f;
  uStack_40 = _UNK_1528844b8;
  uVar1 = *(undefined8 *)(pcVar6 + 8);
  *(undefined8 *)local_58._Ptr = *(undefined8 *)pcVar6;
  *(undefined8 *)(local_58._Ptr + 8) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x18);
  *(undefined8 *)(local_58._Ptr + 0x10) = *(undefined8 *)(pcVar6 + 0x10);
  *(undefined8 *)(local_58._Ptr + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x28);
  *(undefined8 *)(local_58._Ptr + 0x20) = *(undefined8 *)(pcVar6 + 0x20);
  *(undefined8 *)(local_58._Ptr + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x38);
  *(undefined8 *)(local_58._Ptr + 0x30) = *(undefined8 *)(pcVar6 + 0x30);
  *(undefined8 *)(local_58._Ptr + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x48);
  *(undefined8 *)(local_58._Ptr + 0x40) = *(undefined8 *)(pcVar6 + 0x40);
  *(undefined8 *)(local_58._Ptr + 0x48) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x58);
  *(undefined8 *)(local_58._Ptr + 0x50) = *(undefined8 *)(pcVar6 + 0x50);
  *(undefined8 *)(local_58._Ptr + 0x58) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x68);
  *(undefined8 *)(local_58._Ptr + 0x60) = *(undefined8 *)(pcVar6 + 0x60);
  *(undefined8 *)(local_58._Ptr + 0x68) = uVar1;
  uVar1 = *(undefined8 *)(pcVar6 + 0x78);
  *(undefined8 *)(local_58._Ptr + 0x70) = *(undefined8 *)(pcVar6 + 0x70);
  *(undefined8 *)(local_58._Ptr + 0x78) = uVar1;
  local_38 = 0xd;
  ScalarJointsFactoryTest_NeutralJointsAreCopied_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ScalarJointsFactoryTest","NeutralJointsAreCopied",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// TestBody @ 14c4791d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ScalarJointsFactoryTest_NeutralJointsAreCopied_Test::TestBody
          (ScalarJointsFactoryTest_NeutralJointsAreCopied_Test *this)

{
  void *pvVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  ArrayView<float_const_> *pAVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  Message *pMVar8;
  AssertHelper *this_00;
  void *pvVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  float *pfVar14;
  ulonglong uVar15;
  float *pfVar16;
  undefined1 auStackY_288 [32];
  MemoryResource local_258;
  undefined1 local_250 [9];
  undefined4 local_247;
  undefined4 local_243;
  undefined2 local_23f;
  undefined8 local_23c;
  undefined4 local_234;
  AssertionResult local_230;
  ArrayView<float_const_> local_220;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_210;
  undefined **local_208;
  undefined1 *local_200;
  undefined **local_1f8;
  undefined *local_1f0;
  undefined **local_1e8;
  undefined *local_1e0;
  undefined **local_1d8;
  undefined *local_1d0;
  undefined **local_1c8;
  undefined *local_1c0;
  undefined4 local_1b4;
  undefined1 local_1b0 [24];
  undefined1 *local_198;
  undefined1 local_190 [8];
  float local_188 [20];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 local_118 [56];
  longlong *local_e0;
  Controls *local_d8;
  undefined1 local_c8 [56];
  longlong *local_90;
  Controls *local_88;
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_288;
  uVar15 = 0;
  local_247 = 0x1010101;
  local_1b4 = 0;
  local_258 = (MemoryResource)&pma::AlignedMemoryResource::_vftable_;
  local_1b0._12_4_ = 0;
  local_200 = &block4::CanonicalReader::_vbtable__for__dna__RBFBehaviorReader__;
  local_243 = 0x3030101;
  local_1f0 = &block4::CanonicalReader::_vbtable__for__dna__GeometryReader__;
  local_23f = 0x300;
  local_1e0 = &block4::CanonicalReader::_vbtable__for__dna__MachineLearnedBehaviorReader__;
  local_23c = 0;
  local_1d0 = &block4::CanonicalReader::_vbtable__for__dna__JointBehaviorMetadataReader__;
  local_1c0 = &block4::CanonicalReader::_vbtable__for__dna__TwistSwingBehaviorReader__;
  local_198 = &block4::CanonicalReader::_vbtable__for__dna__BehaviorReader__;
  local_208 = &___7CanonicalReader_block4__6B_;
  local_1f8 = &block4::CanonicalReader::_vftable__for__dna__GeometryReader__;
  local_1e8 = &block4::CanonicalReader::_vftable__for__dna__MachineLearnedBehaviorReader__;
  local_1d8 = &block4::CanonicalReader::_vftable__for__dna__JointBehaviorMetadataReader__;
  local_1c8 = &block4::CanonicalReader::_vftable__for__dna__TwistSwingBehaviorReader__;
  local_1b0._0_8_ = &block4::CanonicalReader::_vftable__for__dna__DefinitionReader__;
  local_1b0._16_8_ = &block4::CanonicalReader::_vftable__for__dna__BehaviorReader__;
  local_234 = 0;
  local_250[8] = 0;
  rl4::ControlsFactory::create
            ((unique_ptr<rl4::Controls,std::function<void___cdecl(rl4::Controls_*)>_> *)local_c8,
             (Configuration *)(local_250 + 8),(Reader *)&local_208,&local_258);
  rl4::JointsFactory::create
            ((unique_ptr<rl4::Joints,std::function<void___cdecl(rl4::Joints_*)>_> *)local_118,
             (Configuration *)(local_250 + 8),(Reader *)&local_208,local_88,&local_258);
  uVar3 = _UNK_15076add8;
  uVar2 = ___xmm_000000000000000f0000000000000000;
  local_188[0] = (float)___xmm_40400000400000003f80000000000000;
  local_188[1] = (float)_UNK_15076be04;
  local_188[2] = (float)_UNK_15076be08;
  local_188[3] = (float)_UNK_15076be0c;
  local_188[4] = (float)___xmm_3f8000003f80000040a0000040800000;
  local_188[5] = (float)_UNK_1528844c4;
  local_188[6] = (float)_UNK_1528844c8;
  local_188[7] = (float)_UNK_1528844cc;
  local_188[8] = (float)___xmm_4100000040e0000040c000003f800000;
  local_188[9] = (float)_UNK_1528844e4;
  local_188[10] = (float)_UNK_1528844e8;
  local_188[0xb] = (float)_UNK_1528844ec;
  local_188[0xc] = (float)___xmm_3f800000413000004120000041100000;
  local_188[0xd] = (float)_UNK_1528844d4;
  local_188[0xe] = (float)_UNK_1528844d8;
  local_188[0xf] = (float)_UNK_1528844dc;
  local_188[0x10] = (float)___xmm_41500000414000003f8000003f800000;
  local_188[0x11] = (float)_UNK_1528844f4;
  local_188[0x12] = (float)_UNK_1528844f8;
  local_188[0x13] = (float)_UNK_1528844fc;
  local_138 = ___xmm_41880000418000004170000041600000;
  uStack_130 = _UNK_152884508;
  local_128 = 0x3f800000;
  local_124 = 0x3f800000;
  local_120 = 0x3f800000;
  do {
    pAVar5 = rl4::Joints::getNeutralValues((Joints *)local_d8,&local_220);
    pfVar16 = (float *)((longlong)local_188 + uVar15);
    pfVar14 = (float *)((longlong)pAVar5->ptr + uVar15);
    if (*pfVar16 == *pfVar14) {
      testing::AssertionSuccess(&local_230);
    }
    else {
      pbVar6 = testing::internal::FormatForComparisonFailureMessage<float,float>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_58,pfVar16,pfVar14);
      pbVar7 = testing::internal::FormatForComparisonFailureMessage<float,float>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_78,pfVar14,pfVar16);
      testing::internal::EqFailure
                (&local_230,"joints->getNeutralValues()[i]","expected[i]",pbVar7,pbVar6,false);
      if (0xf < uStack_60) {
        pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
        uVar13 = uStack_60 + 1;
        pvVar9 = pvVar1;
        if (0xfff < uVar13) {
          pvVar9 = *(void **)((longlong)pvVar1 + -8);
          uVar13 = uStack_60 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar9))) goto LAB_14c47954a;
        }
        ::operator_delete(pvVar9,uVar13);
      }
      local_78._Buf[0] = '\0';
      local_68 = uVar2;
      uStack_60 = uVar3;
      if (0xf < local_40) {
        uVar13 = local_40 + 1;
        uVar10 = local_58._Ptr;
        if (0xfff < uVar13) {
          uVar10 = *(undefined8 *)(local_58._Ptr + -8);
          uVar13 = local_40 + 0x28;
          if ((char *)0x1f < local_58._Ptr + (-8 - uVar10)) {
LAB_14c47954a:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar10,uVar13);
      }
    }
    uVar4._Mypair._Myval2 = local_230.message_._Mypair._Myval2;
    if (local_230.success_ == false) {
      pMVar8 = (Message *)testing::Message::Message((Message *)&local_210);
      if (local_230.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar11 = "";
      }
      else {
        pcVar11 = (char *)local_230.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_230.message_._Mypair._Myval2 + 0x18)) {
          pcVar11 = *(char **)local_230.message_._Mypair._Myval2;
        }
      }
      this_00 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          ((AssertHelper *)local_250,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\rltests\\joints\\TestJointsFactory.cpp"
                           ,0x19,pcVar11);
      testing::internal::AssertHelper::operator=(this_00,pMVar8);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_250);
      if (local_210._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar12 = (undefined8 *)
                  ((longlong)&(local_210._Myval2)->field_0x0 +
                  (longlong)*(int *)(*(longlong *)local_210._Myval2 + 4));
        (**(code **)*puVar12)(puVar12,1);
      }
      if (local_230.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_230.message_._Mypair._Myval2);
        ::operator_delete((void *)local_230.message_._Mypair._Myval2,0x20);
      }
      if (local_d8 != (Controls *)0x0) {
        local_220.ptr = (float *)local_d8;
        if (local_e0 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        (**(code **)(*local_e0 + 0x10))(local_e0,&local_220);
      }
      if (local_e0 != (longlong *)0x0) {
        (**(code **)(*local_e0 + 0x20))(local_e0,local_e0 != (longlong *)local_118);
        local_e0 = (longlong *)0x0;
      }
      if (local_88 == (Controls *)0x0) goto LAB_14c479678;
      local_220.ptr = (float *)local_88;
      if (local_90 == (longlong *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      pAVar5 = &local_220;
      goto LAB_14c479672;
    }
    if (local_230.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_230.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    uVar15 = uVar15 + 4;
    if (0x6b < uVar15) {
      if (local_d8 != (Controls *)0x0) {
        local_250._0_8_ = local_d8;
        if (local_e0 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        (**(code **)(*local_e0 + 0x10))(local_e0,local_250);
      }
      if (local_e0 != (longlong *)0x0) {
        (**(code **)(*local_e0 + 0x20))(local_e0,local_e0 != (longlong *)local_118);
        local_e0 = (longlong *)0x0;
      }
      if (local_88 != (Controls *)0x0) {
        local_250._0_8_ = local_88;
        if (local_90 == (longlong *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        pAVar5 = (ArrayView<float_const_> *)local_250;
LAB_14c479672:
        (**(code **)(*local_90 + 0x10))(local_90,pAVar5);
      }
LAB_14c479678:
      if (local_90 != (longlong *)0x0) {
        (**(code **)(*local_90 + 0x20))(local_90,local_90 != (longlong *)local_c8);
        local_90 = (longlong *)0x0;
      }
      block4::CanonicalReader::~CanonicalReader((CanonicalReader *)local_1b0);
      dna::BehaviorReader::~BehaviorReader((BehaviorReader *)local_190);
      dna::DefinitionReader::~DefinitionReader((DefinitionReader *)local_1b0);
      pma::MemoryResource::~MemoryResource(&local_258);
      return;
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 14c479720

void * __thiscall
ScalarJointsFactoryTest_NeutralJointsAreCopied_Test::_scalar_deleting_destructor_
          (ScalarJointsFactoryTest_NeutralJointsAreCopied_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c479760

Test * __thiscall
testing::internal::TestFactoryImpl<ScalarJointsFactoryTest_NeutralJointsAreCopied_Test>::CreateTest
          (TestFactoryImpl<ScalarJointsFactoryTest_NeutralJointsAreCopied_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ScalarJointsFactoryTest_NeutralJointsAreCopied_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c4797a0

void * __thiscall
testing::internal::TestFactoryImpl<ScalarJointsFactoryTest_NeutralJointsAreCopied_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ScalarJointsFactoryTest_NeutralJointsAreCopied_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ScalarJointsFactoryTest_NeutralJointsAreCopied_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `vector_deleting_destructor'`vtordisp{4294967292,0}' @ 14c4797d4

/* [thunk]:public: virtual void * __ptr64 __cdecl block4::CanonicalReader::`vector deleting
   destructor'`vtordisp{4294967292,0}' (unsigned int) __ptr64 */

void * __thiscall
block4::CanonicalReader::_vector_deleting_destructor__vtordisp_4294967292_0__
          (CanonicalReader *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((CanonicalReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14c4797f0

void * __thiscall
block4::CanonicalReader::_scalar_deleting_destructor_(CanonicalReader *this,uint param_1)

{
  ~CanonicalReader(this);
  dna::BehaviorReader::~BehaviorReader((BehaviorReader *)&this->field_0x20);
  dna::DefinitionReader::~DefinitionReader((DefinitionReader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(&this[-1].field_0x20,0x78);
  }
  return &this[-1].field_0x20;
}

// getJointColumnCount`vtordisp{4294967292,0}' @ 14c479848

/* [thunk]:public: virtual unsigned short __cdecl
   block4::CanonicalReader::getJointColumnCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
block4::CanonicalReader::getJointColumnCount_vtordisp_4294967292_0__(CanonicalReader *this)

{
  ushort uVar1;
  
  uVar1 = getJointColumnCount((CanonicalReader *)
                              ((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getJointColumnCount @ 14c479860

ushort __thiscall block4::CanonicalReader::getJointColumnCount(CanonicalReader *this)

{
  return (ushort)unoptimized::dimensions.cols;
}

// getJointCount`vtordisp{4294967292,0}' @ 14c479870

/* [thunk]:public: virtual unsigned short __cdecl
   block4::CanonicalReader::getJointCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
block4::CanonicalReader::getJointCount_vtordisp_4294967292_0__(CanonicalReader *this)

{
  ushort uVar1;
  
  uVar1 = getJointCount((CanonicalReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74)
                       );
  return uVar1;
}

// getJointCount @ 14c479890

ushort __thiscall block4::CanonicalReader::getJointCount(CanonicalReader *this)

{
  return (ushort)((longlong)unoptimized::neutralJointTranslationXs._Mypair._Myval2._Mylast -
                  (longlong)unoptimized::neutralJointTranslationXs._Mypair._Myval2._Myfirst >> 2);
}

// getJointGroupCount`vtordisp{4294967292,0}' @ 14c4798ac

/* [thunk]:public: virtual unsigned short __cdecl
   block4::CanonicalReader::getJointGroupCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
block4::CanonicalReader::getJointGroupCount_vtordisp_4294967292_0__(CanonicalReader *this)

{
  ushort uVar1;
  
  uVar1 = getJointGroupCount((CanonicalReader *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getJointGroupCount @ 14c4798c0

ushort __thiscall block4::CanonicalReader::getJointGroupCount(CanonicalReader *this)

{
  return (ushort)((longlong)unoptimized::values._Mypair._Myval2._Mylast -
                  (longlong)unoptimized::values._Mypair._Myval2._Myfirst >> 5);
}

// getJointGroupInputIndices`vtordisp{4294967292,0}' @ 14c4798dc

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   block4::CanonicalReader::getJointGroupInputIndices`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
block4::CanonicalReader::getJointGroupInputIndices_vtordisp_4294967292_0__
          (CanonicalReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getJointGroupInputIndices
                     ((CanonicalReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__,param_1);
  return pAVar1;
}

// getJointGroupInputIndices @ 14c4798f0

ArrayView<unsigned_short_const_> * __thiscall
block4::CanonicalReader::getJointGroupInputIndices
          (CanonicalReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = unoptimized::inputIndices._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2._Myfirst;
  puVar2 = unoptimized::inputIndices._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2._Mylast;
  __return_storage_ptr__->ptr = puVar1;
  __return_storage_ptr__->sz = (longlong)puVar2 - (longlong)puVar1 >> 1;
  return __return_storage_ptr__;
}

// getJointGroupLODs`vtordisp{4294967292,0}' @ 14c479920

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   block4::CanonicalReader::getJointGroupLODs`vtordisp{4294967292,0}' (unsigned short)const __ptr64
    */

ArrayView<unsigned_short_const_> * __thiscall
block4::CanonicalReader::getJointGroupLODs_vtordisp_4294967292_0__
          (CanonicalReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getJointGroupLODs((CanonicalReader *)
                             ((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                             __return_storage_ptr__,param_1);
  return pAVar1;
}

// getJointGroupLODs @ 14c479940

ArrayView<unsigned_short_const_> * __thiscall
block4::CanonicalReader::getJointGroupLODs
          (CanonicalReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = unoptimized::lods._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2._Myfirst;
  puVar2 = unoptimized::lods._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2._Mylast;
  __return_storage_ptr__->ptr = puVar1;
  __return_storage_ptr__->sz = (longlong)puVar2 - (longlong)puVar1 >> 1;
  return __return_storage_ptr__;
}

// getJointGroupOutputIndices`vtordisp{4294967292,0}' @ 14c479970

/* [thunk]:public: virtual class av::ArrayView<unsigned short const > __cdecl
   block4::CanonicalReader::getJointGroupOutputIndices`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

ArrayView<unsigned_short_const_> * __thiscall
block4::CanonicalReader::getJointGroupOutputIndices_vtordisp_4294967292_0__
          (CanonicalReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ArrayView<unsigned_short_const_> *pAVar1;
  
  pAVar1 = getJointGroupOutputIndices
                     ((CanonicalReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__,param_1);
  return pAVar1;
}

// getJointGroupOutputIndices @ 14c479990

ArrayView<unsigned_short_const_> * __thiscall
block4::CanonicalReader::getJointGroupOutputIndices
          (CanonicalReader *this,ArrayView<unsigned_short_const_> *__return_storage_ptr__,
          ushort param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = unoptimized::outputIndices._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2._Myfirst;
  puVar2 = unoptimized::outputIndices._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2._Mylast;
  __return_storage_ptr__->ptr = puVar1;
  __return_storage_ptr__->sz = (longlong)puVar2 - (longlong)puVar1 >> 1;
  return __return_storage_ptr__;
}

// getJointGroupValues`vtordisp{4294967292,0}' @ 14c4799c0

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   block4::CanonicalReader::getJointGroupValues`vtordisp{4294967292,0}' (unsigned short)const
   __ptr64 */

ArrayView<float_const_> * __thiscall
block4::CanonicalReader::getJointGroupValues_vtordisp_4294967292_0__
          (CanonicalReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getJointGroupValues((CanonicalReader *)
                               ((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                               __return_storage_ptr__,param_1);
  return pAVar1;
}

// getJointGroupValues @ 14c4799e0

ArrayView<float_const_> * __thiscall
block4::CanonicalReader::getJointGroupValues
          (CanonicalReader *this,ArrayView<float_const_> *__return_storage_ptr__,ushort param_1)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = unoptimized::values._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2._Myfirst;
  pfVar2 = unoptimized::values._Mypair._Myval2._Myfirst[param_1]._Mypair._Myval2._Mylast;
  __return_storage_ptr__->ptr = pfVar1;
  __return_storage_ptr__->sz = (longlong)pfVar2 - (longlong)pfVar1 >> 2;
  return __return_storage_ptr__;
}

// getJointRowCount`vtordisp{4294967292,0}' @ 14c479a14

/* [thunk]:public: virtual unsigned short __cdecl
   block4::CanonicalReader::getJointRowCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
block4::CanonicalReader::getJointRowCount_vtordisp_4294967292_0__(CanonicalReader *this)

{
  ushort uVar1;
  
  uVar1 = getJointRowCount((CanonicalReader *)
                           ((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getJointRowCount @ 14c479a30

ushort __thiscall block4::CanonicalReader::getJointRowCount(CanonicalReader *this)

{
  return (ushort)unoptimized::dimensions.rows;
}

// getLODCount`vtordisp{4294967292,0}' @ 14c479a40

/* [thunk]:public: virtual unsigned short __cdecl
   block4::CanonicalReader::getLODCount`vtordisp{4294967292,0}' (void)const __ptr64 */

ushort __thiscall
block4::CanonicalReader::getLODCount_vtordisp_4294967292_0__(CanonicalReader *this)

{
  ushort uVar1;
  
  uVar1 = getLODCount((CanonicalReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74));
  return uVar1;
}

// getLODCount @ 14c479a60

ushort __thiscall block4::CanonicalReader::getLODCount(CanonicalReader *this)

{
  return unoptimized::lodCount;
}

// getNeutralJointRotationXs`vtordisp{4294967292,0}' @ 14c479a70

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   block4::CanonicalReader::getNeutralJointRotationXs`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
block4::CanonicalReader::getNeutralJointRotationXs_vtordisp_4294967292_0__
          (CanonicalReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getNeutralJointRotationXs
                     ((CanonicalReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getNeutralJointRotationXs @ 14c479a90

ArrayView<float_const_> * __thiscall
block4::CanonicalReader::getNeutralJointRotationXs
          (CanonicalReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = (longlong)unoptimized::neutralJointRotationXs._Mypair._Myval2._Mylast -
          (longlong)unoptimized::neutralJointRotationXs._Mypair._Myval2._Myfirst;
  __return_storage_ptr__->ptr = unoptimized::neutralJointRotationXs._Mypair._Myval2._Myfirst;
  __return_storage_ptr__->sz = lVar1 >> 2;
  return __return_storage_ptr__;
}

// getNeutralJointRotationYs`vtordisp{4294967292,0}' @ 14c479ab8

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   block4::CanonicalReader::getNeutralJointRotationYs`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
block4::CanonicalReader::getNeutralJointRotationYs_vtordisp_4294967292_0__
          (CanonicalReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getNeutralJointRotationYs
                     ((CanonicalReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getNeutralJointRotationYs @ 14c479ad0

ArrayView<float_const_> * __thiscall
block4::CanonicalReader::getNeutralJointRotationYs
          (CanonicalReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = (longlong)unoptimized::neutralJointRotationYs._Mypair._Myval2._Mylast -
          (longlong)unoptimized::neutralJointRotationYs._Mypair._Myval2._Myfirst;
  __return_storage_ptr__->ptr = unoptimized::neutralJointRotationYs._Mypair._Myval2._Myfirst;
  __return_storage_ptr__->sz = lVar1 >> 2;
  return __return_storage_ptr__;
}

// getNeutralJointRotationZs`vtordisp{4294967292,0}' @ 14c479af8

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   block4::CanonicalReader::getNeutralJointRotationZs`vtordisp{4294967292,0}' (void)const __ptr64 */

ArrayView<float_const_> * __thiscall
block4::CanonicalReader::getNeutralJointRotationZs_vtordisp_4294967292_0__
          (CanonicalReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getNeutralJointRotationZs
                     ((CanonicalReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getNeutralJointRotationZs @ 14c479b10

ArrayView<float_const_> * __thiscall
block4::CanonicalReader::getNeutralJointRotationZs
          (CanonicalReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = (longlong)unoptimized::neutralJointRotationZs._Mypair._Myval2._Mylast -
          (longlong)unoptimized::neutralJointRotationZs._Mypair._Myval2._Myfirst;
  __return_storage_ptr__->ptr = unoptimized::neutralJointRotationZs._Mypair._Myval2._Myfirst;
  __return_storage_ptr__->sz = lVar1 >> 2;
  return __return_storage_ptr__;
}

// getNeutralJointTranslationXs`vtordisp{4294967292,0}' @ 14c479b38

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   block4::CanonicalReader::getNeutralJointTranslationXs`vtordisp{4294967292,0}' (void)const __ptr64
    */

ArrayView<float_const_> * __thiscall
block4::CanonicalReader::getNeutralJointTranslationXs_vtordisp_4294967292_0__
          (CanonicalReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getNeutralJointTranslationXs
                     ((CanonicalReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getNeutralJointTranslationXs @ 14c479b50

ArrayView<float_const_> * __thiscall
block4::CanonicalReader::getNeutralJointTranslationXs
          (CanonicalReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = (longlong)unoptimized::neutralJointTranslationXs._Mypair._Myval2._Mylast -
          (longlong)unoptimized::neutralJointTranslationXs._Mypair._Myval2._Myfirst;
  __return_storage_ptr__->ptr = unoptimized::neutralJointTranslationXs._Mypair._Myval2._Myfirst;
  __return_storage_ptr__->sz = lVar1 >> 2;
  return __return_storage_ptr__;
}

// getNeutralJointTranslationYs`vtordisp{4294967292,0}' @ 14c479b78

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   block4::CanonicalReader::getNeutralJointTranslationYs`vtordisp{4294967292,0}' (void)const __ptr64
    */

ArrayView<float_const_> * __thiscall
block4::CanonicalReader::getNeutralJointTranslationYs_vtordisp_4294967292_0__
          (CanonicalReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getNeutralJointTranslationYs
                     ((CanonicalReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getNeutralJointTranslationYs @ 14c479b90

ArrayView<float_const_> * __thiscall
block4::CanonicalReader::getNeutralJointTranslationYs
          (CanonicalReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = (longlong)unoptimized::neutralJointTranslationYs._Mypair._Myval2._Mylast -
          (longlong)unoptimized::neutralJointTranslationYs._Mypair._Myval2._Myfirst;
  __return_storage_ptr__->ptr = unoptimized::neutralJointTranslationYs._Mypair._Myval2._Myfirst;
  __return_storage_ptr__->sz = lVar1 >> 2;
  return __return_storage_ptr__;
}

// getNeutralJointTranslationZs`vtordisp{4294967292,0}' @ 14c479bb8

/* [thunk]:public: virtual class av::ArrayView<float const > __cdecl
   block4::CanonicalReader::getNeutralJointTranslationZs`vtordisp{4294967292,0}' (void)const __ptr64
    */

ArrayView<float_const_> * __thiscall
block4::CanonicalReader::getNeutralJointTranslationZs_vtordisp_4294967292_0__
          (CanonicalReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  ArrayView<float_const_> *pAVar1;
  
  pAVar1 = getNeutralJointTranslationZs
                     ((CanonicalReader *)((longlong)this - (longlong)*(int *)&this[-1].field_0x74),
                      __return_storage_ptr__);
  return pAVar1;
}

// getNeutralJointTranslationZs @ 14c479bd0

ArrayView<float_const_> * __thiscall
block4::CanonicalReader::getNeutralJointTranslationZs
          (CanonicalReader *this,ArrayView<float_const_> *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = (longlong)unoptimized::neutralJointTranslationZs._Mypair._Myval2._Mylast -
          (longlong)unoptimized::neutralJointTranslationZs._Mypair._Myval2._Myfirst;
  __return_storage_ptr__->ptr = unoptimized::neutralJointTranslationZs._Mypair._Myval2._Myfirst;
  __return_storage_ptr__->sz = lVar1 >> 2;
  return __return_storage_ptr__;
}

