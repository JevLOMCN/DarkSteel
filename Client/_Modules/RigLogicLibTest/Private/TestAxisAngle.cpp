// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 17

// test_info_'' @ 141379770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'TestAxisAngle_ConvertXYZ2AxisAngleAndRotate_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VTestAxisAngle_ConvertXYZ2AxisAngleAndRotate_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestAxisAngle.cpp"
                      ,8);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestAxisAngle.cpp"
                      ,8);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x75;
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
  *(undefined4 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_4_;
  pcVar6[0x74] = ::s_C__Workspace_UnrealEngine_Engin[0x74];
  pcVar6[0x75] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000075;
  uStack_40 = _UNK_152880de8;
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
  *(undefined4 *)(local_58._Ptr + 0x70) = *(undefined4 *)(pcVar6 + 0x70);
  *(undefined2 *)(local_58._Ptr + 0x74) = *(undefined2 *)(pcVar6 + 0x74);
  local_38 = 8;
  TestAxisAngle_ConvertXYZ2AxisAngleAndRotate_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("TestAxisAngle","ConvertXYZ2AxisAngleAndRotate",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 141379980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'TestAxisAngle_ConvertXYZVector2AxisAngleAndRotate_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VTestAxisAngle_ConvertXYZVector2AxisAngleAndRotate_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestAxisAngle.cpp"
                      ,0x14);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestAxisAngle.cpp"
                      ,0x14);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x75;
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
  *(undefined4 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_4_;
  pcVar6[0x74] = ::s_C__Workspace_UnrealEngine_Engin[0x74];
  pcVar6[0x75] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f0000000000000075;
  uStack_40 = _UNK_152880de8;
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
  *(undefined4 *)(local_58._Ptr + 0x70) = *(undefined4 *)(pcVar6 + 0x70);
  *(undefined2 *)(local_58._Ptr + 0x74) = *(undefined2 *)(pcVar6 + 0x74);
  local_38 = 0x14;
  TestAxisAngle_ConvertXYZVector2AxisAngleAndRotate_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("TestAxisAngle","ConvertXYZVector2AxisAngleAndRotate",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// TestBody @ 14c5a7bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TestAxisAngle_ConvertXYZ2AxisAngleAndRotate_Test::TestBody
          (TestAxisAngle_ConvertXYZ2AxisAngleAndRotate_Test *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  longlong *plVar4;
  double dVar5;
  mat<4,4,float> *pmVar6;
  Message *pMVar7;
  AssertHelper *pAVar8;
  ulonglong uVar9;
  char *pcVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStackY_168 [32];
  AssertHelper local_128;
  axis_angle<float> local_120;
  Message local_110;
  undefined4 local_108 [4];
  mat<4,4,float> local_f8;
  float local_b8 [16];
  mat<4,4,float> local_78;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  uVar14 = 0;
  local_f8.values[0].values[0] = 1.0;
  local_f8.values[0].values[1] = 0.0;
  local_f8.values[0].values[2] = 0.0;
  local_f8.values[0].values[3] = 0.0;
  local_f8.values[1].values[0] = 0.0;
  local_f8.values[1].values[2] = 0.0;
  local_f8.values[1].values[3] = 0.0;
  local_f8.values[2].values[0] = 0.0;
  local_f8.values[2].values[1] = 0.0;
  local_f8.values[2].values[3] = 0.0;
  local_f8.values[3].values[0] = 0.0;
  local_f8.values[3].values[1] = 0.0;
  local_f8.values[3].values[2] = 0.0;
  local_110.ss_._Mypair._Myval2._0_4_ = 0;
  local_f8.values[1].values[1] = 1.0;
  local_f8.values[2].values[2] = 1.0;
  local_f8.values[3].values[3] = 1.0;
  local_108[0] = 0x3f060a92;
  local_128.data_._0_4_ = 0.7853982;
  tdm::axis_angle<float>::axis_angle<float>
            (&local_120,(ang<float,tdm::impl::radians>)SUB84(&local_128,0),
             (ang<float,tdm::impl::radians>)SUB84(&local_110,0),
             (ang<float,tdm::impl::radians>)SUB84(local_108,0),right);
  local_128.data_._0_4_ = local_120.angle.value;
  pmVar6 = tdm::projective::rotate<float>
                     (&local_78,&local_f8,&local_120.axis,
                      (ang<float,tdm::impl::radians>)SUB84(&local_128,0),right);
  uVar1 = *(undefined8 *)pmVar6->values[0].values;
  uVar2 = *(undefined8 *)(pmVar6->values[0].values + 2);
  local_f8.values[0].values[0] = (float)uVar1;
  local_f8.values[0].values[1] = (float)((ulonglong)uVar1 >> 0x20);
  local_f8.values[0].values[2] = (float)uVar2;
  local_f8.values[0].values[3] = (float)((ulonglong)uVar2 >> 0x20);
  uVar1 = *(undefined8 *)pmVar6->values[1].values;
  local_f8.values[1].values[0] = (float)uVar1;
  local_f8.values[1].values[1] = (float)((ulonglong)uVar1 >> 0x20);
  local_f8.values[1].values._8_8_ = *(undefined8 *)(pmVar6->values[1].values + 2);
  uVar1 = *(undefined8 *)(pmVar6->values[2].values + 2);
  local_f8.values[2].values._0_8_ = *(undefined8 *)pmVar6->values[2].values;
  local_f8.values[2].values[2] = (float)uVar1;
  local_f8.values[2].values[3] = (float)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)pmVar6->values[3].values;
  uVar2 = *(undefined8 *)(pmVar6->values[3].values + 2);
  local_b8[0] = 0.0;
  local_b8[1] = 0.0;
  local_b8[2] = 0.0;
  local_b8[3] = 0.0;
  local_f8.values[3].values[0] = (float)uVar1;
  local_f8.values[3].values[1] = (float)((ulonglong)uVar1 >> 0x20);
  local_f8.values[3].values[2] = (float)uVar2;
  local_f8.values[3].values[3] = (float)((ulonglong)uVar2 >> 0x20);
  local_b8[4] = 0.0;
  local_b8[5] = 0.0;
  local_b8[6] = 0.0;
  local_b8[7] = 0.0;
  local_b8[0xc] = 0.0;
  local_b8[0xd] = 0.0;
  local_b8[0xe] = 0.0;
  local_b8[0xf] = 0.0;
  local_b8[8] = 0.0;
  local_b8[9] = 0.0;
  local_b8[10] = 0.0;
  local_b8[0xb] = 0.0;
  local_78.values[1].values[0] = ___xmm_000000003f3504f73f1cc469beb504e6;
  local_78.values[1].values[1] = _UNK_152895494;
  local_78.values[1].values[2] = _UNK_152895498;
  local_78.values[1].values[3] = _UNK_15289549c;
  local_78.values[0].values[0] = ___xmm_00000000000000003f0000003f5db3d0;
  local_78.values[0].values[1] = _UNK_152895484;
  local_78.values[0].values[2] = _UNK_152895488;
  local_78.values[0].values[3] = _UNK_15289548c;
  local_78.values[3].values[0] = ___xmm_3f800000000000000000000000000000;
  local_78.values[3].values[1] = _UNK_150689644;
  local_78.values[3].values[2] = _UNK_150689648;
  local_78.values[3].values[3] = _UNK_15068964c;
  local_78.values[2].values[0] = ___xmm_000000003f3504f7bf1cc4693eb504e6;
  local_78.values[2].values[1] = _UNK_1528954a4;
  local_78.values[2].values[2] = _UNK_1528954a8;
  local_78.values[2].values[3] = _UNK_1528954ac;
  uVar9 = uVar14;
  do {
    *(undefined4 *)((longlong)local_b8 + uVar9) =
         *(undefined4 *)((longlong)local_78.values[0].values + uVar9);
    *(undefined4 *)((longlong)local_b8 + uVar9 + 4) =
         *(undefined4 *)((longlong)local_78.values[0].values + uVar9 + 4);
    *(undefined4 *)((longlong)local_b8 + uVar9 + 8) =
         *(undefined4 *)((longlong)local_78.values[0].values + uVar9 + 8);
    *(undefined4 *)((longlong)local_b8 + uVar9 + 0xc) =
         *(undefined4 *)((longlong)local_78.values[0].values + uVar9 + 0xc);
    uVar9 = uVar9 + 0x10;
  } while (uVar9 != 0x40);
  testing::AssertionSuccess((AssertionResult *)&local_120);
  if (local_120.axis.values[0]._0_1_ == '\0') {
    pMVar7 = (Message *)testing::Message::Message(&local_110);
    pcVar10 = (char *)CONCAT44(local_120.angle.value,local_120.axis.values[2]);
    if (pcVar10 == (char *)0x0) {
      pcVar10 = "";
    }
    else if (0xf < *(ulonglong *)(pcVar10 + 0x18)) {
      pcVar10 = *(char **)pcVar10;
    }
    pAVar8 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_128,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestAxisAngle.cpp"
                        ,0x11,pcVar10);
    testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
    testing::internal::AssertHelper::~AssertHelper(&local_128);
    plVar4 = (longlong *)
             CONCAT44(local_110.ss_._Mypair._Myval2._4_4_,local_110.ss_._Mypair._Myval2._0_4_);
    if (plVar4 != (longlong *)0x0) {
      puVar11 = (undefined8 *)((longlong)*(int *)(*plVar4 + 4) + (longlong)plVar4);
      (**(code **)*puVar11)(puVar11,1);
    }
    pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             CONCAT44(local_120.angle.value,local_120.axis.values[2]);
    if (pbVar3 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar3)
      ;
      ::operator_delete(pbVar3,0x20);
    }
  }
  else {
    pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             CONCAT44(local_120.angle.value,local_120.axis.values[2]);
    if (pbVar3 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar3)
      ;
      ::operator_delete(pbVar3,0x20);
    }
    testing::AssertionSuccess((AssertionResult *)&local_120);
    if (local_120.axis.values[0]._0_1_ == '\0') {
      pMVar7 = (Message *)testing::Message::Message(&local_110);
      pcVar10 = (char *)CONCAT44(local_120.angle.value,local_120.axis.values[2]);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = "";
      }
      else if (0xf < *(ulonglong *)(pcVar10 + 0x18)) {
        pcVar10 = *(char **)pcVar10;
      }
      pAVar8 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_128,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestAxisAngle.cpp"
                          ,0x11,pcVar10);
      testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
      testing::internal::AssertHelper::~AssertHelper(&local_128);
      plVar4 = (longlong *)
               CONCAT44(local_110.ss_._Mypair._Myval2._4_4_,local_110.ss_._Mypair._Myval2._0_4_);
      if (plVar4 != (longlong *)0x0) {
        puVar11 = (undefined8 *)((longlong)*(int *)(*plVar4 + 4) + (longlong)plVar4);
        (**(code **)*puVar11)(puVar11,1);
      }
      pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               CONCAT44(local_120.angle.value,local_120.axis.values[2]);
      if (pbVar3 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (pbVar3);
        ::operator_delete(pbVar3,0x20);
      }
    }
    else {
      pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               CONCAT44(local_120.angle.value,local_120.axis.values[2]);
      uVar9 = uVar14;
      uVar12 = uVar14;
      dVar5 = __real_3f1a36e2e0000000;
      uVar13 = uVar14;
      if (pbVar3 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (pbVar3);
        ::operator_delete(pbVar3,0x20);
        dVar5 = __real_3f1a36e2e0000000;
      }
      do {
        testing::internal::DoubleNearPredFormat
                  ((AssertionResult *)&local_120,"m[ri][ci]","expected[ri][ci]","0.0001f",
                   (double)*(float *)((longlong)local_f8.values[0].values + uVar9),
                   (double)*(float *)((longlong)local_b8 + uVar9),dVar5);
        if (local_120.axis.values[0]._0_1_ == '\0') {
          pMVar7 = (Message *)testing::Message::Message(&local_110);
          pcVar10 = (char *)CONCAT44(local_120.angle.value,local_120.axis.values[2]);
          if (pcVar10 == (char *)0x0) {
            pcVar10 = "";
          }
          else if (0xf < *(ulonglong *)(pcVar10 + 0x18)) {
            pcVar10 = *(char **)pcVar10;
          }
          pAVar8 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_128,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestAxisAngle.cpp"
                              ,0x11,pcVar10);
          testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
          testing::internal::AssertHelper::~AssertHelper(&local_128);
          plVar4 = (longlong *)
                   CONCAT44(local_110.ss_._Mypair._Myval2._4_4_,local_110.ss_._Mypair._Myval2._0_4_)
          ;
          if (plVar4 != (longlong *)0x0) {
            puVar11 = (undefined8 *)((longlong)*(int *)(*plVar4 + 4) + (longlong)plVar4);
            (**(code **)*puVar11)(puVar11,1);
          }
          pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   CONCAT44(local_120.angle.value,local_120.axis.values[2]);
          if (pbVar3 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            return;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (pbVar3);
          ::operator_delete(pbVar3,0x20);
          return;
        }
        pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 CONCAT44(local_120.angle.value,local_120.axis.values[2]);
        if (pbVar3 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (pbVar3);
          ::operator_delete(pbVar3,0x20);
        }
        uVar12 = uVar12 + 1;
        uVar9 = uVar9 + 4;
      } while ((uVar12 < 4) ||
              (uVar9 = uVar13 + 0x10, uVar12 = uVar14, uVar13 = uVar9, uVar9 < 0x40));
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5a80c0

void * __thiscall
TestAxisAngle_ConvertXYZ2AxisAngleAndRotate_Test::_scalar_deleting_destructor_
          (TestAxisAngle_ConvertXYZ2AxisAngleAndRotate_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5a8100

Test * __thiscall
testing::internal::TestFactoryImpl<TestAxisAngle_ConvertXYZ2AxisAngleAndRotate_Test>::CreateTest
          (TestFactoryImpl<TestAxisAngle_ConvertXYZ2AxisAngleAndRotate_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7TestAxisAngle_ConvertXYZ2AxisAngleAndRotate_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5a8140

void * __thiscall
testing::internal::TestFactoryImpl<TestAxisAngle_ConvertXYZ2AxisAngleAndRotate_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<TestAxisAngle_ConvertXYZ2AxisAngleAndRotate_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<TestAxisAngle_ConvertXYZ2AxisAngleAndRotate_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5a8180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TestAxisAngle_ConvertXYZVector2AxisAngleAndRotate_Test::TestBody
          (TestAxisAngle_ConvertXYZVector2AxisAngleAndRotate_Test *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  longlong *plVar4;
  double dVar5;
  mat<4,4,float> *pmVar6;
  Message *pMVar7;
  AssertHelper *pAVar8;
  ulonglong uVar9;
  char *pcVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStackY_168 [32];
  AssertHelper local_128;
  axis_angle<float> local_120;
  Message local_110;
  undefined4 local_108 [4];
  mat<4,4,float> local_f8;
  float local_b8 [16];
  mat<4,4,float> local_78;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  uVar14 = 0;
  local_f8.values[0].values[0] = 1.0;
  local_f8.values[0].values[1] = 0.0;
  local_f8.values[0].values[2] = 0.0;
  local_f8.values[0].values[3] = 0.0;
  local_f8.values[1].values[0] = 0.0;
  local_f8.values[1].values[2] = 0.0;
  local_f8.values[1].values[3] = 0.0;
  local_f8.values[2].values[0] = 0.0;
  local_f8.values[2].values[1] = 0.0;
  local_f8.values[2].values[3] = 0.0;
  local_f8.values[3].values[0] = 0.0;
  local_f8.values[3].values[1] = 0.0;
  local_f8.values[3].values[2] = 0.0;
  local_110.ss_._Mypair._Myval2._0_4_ = 0;
  local_f8.values[1].values[1] = 1.0;
  local_f8.values[2].values[2] = 1.0;
  local_f8.values[3].values[3] = 1.0;
  local_108[0] = 0x3f060a92;
  local_128.data_._0_4_ = 0.7853982;
  tdm::axis_angle<float>::axis_angle<float>
            (&local_120,(ang<float,tdm::impl::radians>)SUB84(&local_128,0),
             (ang<float,tdm::impl::radians>)SUB84(&local_110,0),
             (ang<float,tdm::impl::radians>)SUB84(local_108,0),right);
  local_128.data_._0_4_ = local_120.angle.value;
  pmVar6 = tdm::projective::rotate<float>
                     (&local_78,&local_f8,&local_120.axis,
                      (ang<float,tdm::impl::radians>)SUB84(&local_128,0),right);
  uVar1 = *(undefined8 *)pmVar6->values[0].values;
  uVar2 = *(undefined8 *)(pmVar6->values[0].values + 2);
  local_f8.values[0].values[0] = (float)uVar1;
  local_f8.values[0].values[1] = (float)((ulonglong)uVar1 >> 0x20);
  local_f8.values[0].values[2] = (float)uVar2;
  local_f8.values[0].values[3] = (float)((ulonglong)uVar2 >> 0x20);
  uVar1 = *(undefined8 *)pmVar6->values[1].values;
  local_f8.values[1].values[0] = (float)uVar1;
  local_f8.values[1].values[1] = (float)((ulonglong)uVar1 >> 0x20);
  local_f8.values[1].values._8_8_ = *(undefined8 *)(pmVar6->values[1].values + 2);
  uVar1 = *(undefined8 *)(pmVar6->values[2].values + 2);
  local_f8.values[2].values._0_8_ = *(undefined8 *)pmVar6->values[2].values;
  local_f8.values[2].values[2] = (float)uVar1;
  local_f8.values[2].values[3] = (float)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)pmVar6->values[3].values;
  uVar2 = *(undefined8 *)(pmVar6->values[3].values + 2);
  local_b8[0] = 0.0;
  local_b8[1] = 0.0;
  local_b8[2] = 0.0;
  local_b8[3] = 0.0;
  local_f8.values[3].values[0] = (float)uVar1;
  local_f8.values[3].values[1] = (float)((ulonglong)uVar1 >> 0x20);
  local_f8.values[3].values[2] = (float)uVar2;
  local_f8.values[3].values[3] = (float)((ulonglong)uVar2 >> 0x20);
  local_b8[4] = 0.0;
  local_b8[5] = 0.0;
  local_b8[6] = 0.0;
  local_b8[7] = 0.0;
  local_b8[0xc] = 0.0;
  local_b8[0xd] = 0.0;
  local_b8[0xe] = 0.0;
  local_b8[0xf] = 0.0;
  local_b8[8] = 0.0;
  local_b8[9] = 0.0;
  local_b8[10] = 0.0;
  local_b8[0xb] = 0.0;
  local_78.values[1].values[0] = ___xmm_000000003f3504f73f1cc469beb504e6;
  local_78.values[1].values[1] = _UNK_152895494;
  local_78.values[1].values[2] = _UNK_152895498;
  local_78.values[1].values[3] = _UNK_15289549c;
  local_78.values[0].values[0] = ___xmm_00000000000000003f0000003f5db3d0;
  local_78.values[0].values[1] = _UNK_152895484;
  local_78.values[0].values[2] = _UNK_152895488;
  local_78.values[0].values[3] = _UNK_15289548c;
  local_78.values[3].values[0] = ___xmm_3f800000000000000000000000000000;
  local_78.values[3].values[1] = _UNK_150689644;
  local_78.values[3].values[2] = _UNK_150689648;
  local_78.values[3].values[3] = _UNK_15068964c;
  local_78.values[2].values[0] = ___xmm_000000003f3504f7bf1cc4693eb504e6;
  local_78.values[2].values[1] = _UNK_1528954a4;
  local_78.values[2].values[2] = _UNK_1528954a8;
  local_78.values[2].values[3] = _UNK_1528954ac;
  uVar9 = uVar14;
  do {
    *(undefined4 *)((longlong)local_b8 + uVar9) =
         *(undefined4 *)((longlong)local_78.values[0].values + uVar9);
    *(undefined4 *)((longlong)local_b8 + uVar9 + 4) =
         *(undefined4 *)((longlong)local_78.values[0].values + uVar9 + 4);
    *(undefined4 *)((longlong)local_b8 + uVar9 + 8) =
         *(undefined4 *)((longlong)local_78.values[0].values + uVar9 + 8);
    *(undefined4 *)((longlong)local_b8 + uVar9 + 0xc) =
         *(undefined4 *)((longlong)local_78.values[0].values + uVar9 + 0xc);
    uVar9 = uVar9 + 0x10;
  } while (uVar9 != 0x40);
  testing::AssertionSuccess((AssertionResult *)&local_120);
  if (local_120.axis.values[0]._0_1_ == '\0') {
    pMVar7 = (Message *)testing::Message::Message(&local_110);
    pcVar10 = (char *)CONCAT44(local_120.angle.value,local_120.axis.values[2]);
    if (pcVar10 == (char *)0x0) {
      pcVar10 = "";
    }
    else if (0xf < *(ulonglong *)(pcVar10 + 0x18)) {
      pcVar10 = *(char **)pcVar10;
    }
    pAVar8 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_128,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestAxisAngle.cpp"
                        ,0x1d,pcVar10);
    testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
    testing::internal::AssertHelper::~AssertHelper(&local_128);
    plVar4 = (longlong *)
             CONCAT44(local_110.ss_._Mypair._Myval2._4_4_,local_110.ss_._Mypair._Myval2._0_4_);
    if (plVar4 != (longlong *)0x0) {
      puVar11 = (undefined8 *)((longlong)*(int *)(*plVar4 + 4) + (longlong)plVar4);
      (**(code **)*puVar11)(puVar11,1);
    }
    pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             CONCAT44(local_120.angle.value,local_120.axis.values[2]);
    if (pbVar3 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar3)
      ;
      ::operator_delete(pbVar3,0x20);
    }
  }
  else {
    pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             CONCAT44(local_120.angle.value,local_120.axis.values[2]);
    if (pbVar3 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(pbVar3)
      ;
      ::operator_delete(pbVar3,0x20);
    }
    testing::AssertionSuccess((AssertionResult *)&local_120);
    if (local_120.axis.values[0]._0_1_ == '\0') {
      pMVar7 = (Message *)testing::Message::Message(&local_110);
      pcVar10 = (char *)CONCAT44(local_120.angle.value,local_120.axis.values[2]);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = "";
      }
      else if (0xf < *(ulonglong *)(pcVar10 + 0x18)) {
        pcVar10 = *(char **)pcVar10;
      }
      pAVar8 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         (&local_128,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestAxisAngle.cpp"
                          ,0x1d,pcVar10);
      testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
      testing::internal::AssertHelper::~AssertHelper(&local_128);
      plVar4 = (longlong *)
               CONCAT44(local_110.ss_._Mypair._Myval2._4_4_,local_110.ss_._Mypair._Myval2._0_4_);
      if (plVar4 != (longlong *)0x0) {
        puVar11 = (undefined8 *)((longlong)*(int *)(*plVar4 + 4) + (longlong)plVar4);
        (**(code **)*puVar11)(puVar11,1);
      }
      pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               CONCAT44(local_120.angle.value,local_120.axis.values[2]);
      if (pbVar3 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (pbVar3);
        ::operator_delete(pbVar3,0x20);
      }
    }
    else {
      pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               CONCAT44(local_120.angle.value,local_120.axis.values[2]);
      uVar9 = uVar14;
      uVar12 = uVar14;
      dVar5 = __real_3f1a36e2e0000000;
      uVar13 = uVar14;
      if (pbVar3 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (pbVar3);
        ::operator_delete(pbVar3,0x20);
        dVar5 = __real_3f1a36e2e0000000;
      }
      do {
        testing::internal::DoubleNearPredFormat
                  ((AssertionResult *)&local_120,"m[ri][ci]","expected[ri][ci]","0.0001f",
                   (double)*(float *)((longlong)local_f8.values[0].values + uVar9),
                   (double)*(float *)((longlong)local_b8 + uVar9),dVar5);
        if (local_120.axis.values[0]._0_1_ == '\0') {
          pMVar7 = (Message *)testing::Message::Message(&local_110);
          pcVar10 = (char *)CONCAT44(local_120.angle.value,local_120.axis.values[2]);
          if (pcVar10 == (char *)0x0) {
            pcVar10 = "";
          }
          else if (0xf < *(ulonglong *)(pcVar10 + 0x18)) {
            pcVar10 = *(char **)pcVar10;
          }
          pAVar8 = (AssertHelper *)
                   testing::internal::AssertHelper::AssertHelper
                             (&local_128,kFatalFailure,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\tdmtests\\TestAxisAngle.cpp"
                              ,0x1d,pcVar10);
          testing::internal::AssertHelper::operator=(pAVar8,pMVar7);
          testing::internal::AssertHelper::~AssertHelper(&local_128);
          plVar4 = (longlong *)
                   CONCAT44(local_110.ss_._Mypair._Myval2._4_4_,local_110.ss_._Mypair._Myval2._0_4_)
          ;
          if (plVar4 != (longlong *)0x0) {
            puVar11 = (undefined8 *)((longlong)*(int *)(*plVar4 + 4) + (longlong)plVar4);
            (**(code **)*puVar11)(puVar11,1);
          }
          pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   CONCAT44(local_120.angle.value,local_120.axis.values[2]);
          if (pbVar3 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            return;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (pbVar3);
          ::operator_delete(pbVar3,0x20);
          return;
        }
        pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 CONCAT44(local_120.angle.value,local_120.axis.values[2]);
        if (pbVar3 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (pbVar3);
          ::operator_delete(pbVar3,0x20);
        }
        uVar12 = uVar12 + 1;
        uVar9 = uVar9 + 4;
      } while ((uVar12 < 4) ||
              (uVar9 = uVar13 + 0x10, uVar12 = uVar14, uVar13 = uVar9, uVar9 < 0x40));
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5a8650

void * __thiscall
TestAxisAngle_ConvertXYZVector2AxisAngleAndRotate_Test::_scalar_deleting_destructor_
          (TestAxisAngle_ConvertXYZVector2AxisAngleAndRotate_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5a8690

Test * __thiscall
testing::internal::TestFactoryImpl<TestAxisAngle_ConvertXYZVector2AxisAngleAndRotate_Test>::
CreateTest(TestFactoryImpl<TestAxisAngle_ConvertXYZVector2AxisAngleAndRotate_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7TestAxisAngle_ConvertXYZVector2AxisAngleAndRotate_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5a86d0

void * __thiscall
testing::internal::TestFactoryImpl<TestAxisAngle_ConvertXYZVector2AxisAngleAndRotate_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<TestAxisAngle_ConvertXYZVector2AxisAngleAndRotate_Test> *this,
          uint param_1)

{
  *this = (TestFactoryImpl<TestAxisAngle_ConvertXYZVector2AxisAngleAndRotate_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// mat<4,4,float><float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,0> @ 14c5a8710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

mat<4,4,float> * __thiscall
tdm::mat<4,4,float>::
mat<4,4,float><float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,0>
          (mat<4,4,float> *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6,float param_7,float param_8,float param_9,float param_10,
          float param_11,float param_12,float param_13,float param_14,float param_15,float param_16)

{
  float *pfVar1;
  longlong lVar2;
  float afStack_5c [7];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)(afStack_5c + 1);
  afStack_5c[1] = param_1;
  this->values[0].values[0] = 0.0;
  this->values[0].values[1] = 0.0;
  this->values[0].values[2] = 0.0;
  this->values[0].values[3] = 0.0;
  this->values[1].values[0] = 0.0;
  this->values[1].values[1] = 0.0;
  this->values[1].values[2] = 0.0;
  this->values[1].values[3] = 0.0;
  afStack_5c[5] = param_5;
  pfVar1 = this->values[0].values + 1;
  local_40 = param_7;
  local_38 = param_9;
  lVar2 = 4;
  local_30 = param_11;
  this->values[2].values[0] = 0.0;
  this->values[2].values[1] = 0.0;
  this->values[2].values[2] = 0.0;
  this->values[2].values[3] = 0.0;
  this->values[3].values[0] = 0.0;
  this->values[3].values[1] = 0.0;
  this->values[3].values[2] = 0.0;
  this->values[3].values[3] = 0.0;
  afStack_5c[4] = param_4;
  afStack_5c[6] = param_6;
  local_3c = param_8;
  local_34 = param_10;
  local_2c = param_12;
  local_24 = param_14;
  local_28 = param_13;
  local_1c = param_16;
  afStack_5c[2] = param_2;
  afStack_5c[3] = param_3;
  local_20 = param_15;
  do {
    ((vec<4,float> *)(pfVar1 + -1))->values[0] =
         *(float *)((longlong)afStack_5c + -(longlong)this + (longlong)pfVar1);
    *pfVar1 = *(float *)((longlong)afStack_5c + -(longlong)this + 4U + (longlong)pfVar1);
    pfVar1[1] = *(float *)((longlong)afStack_5c + (8U - (longlong)this) + (longlong)pfVar1);
    pfVar1[2] = *(float *)((longlong)afStack_5c + (0xcU - (longlong)this) + (longlong)pfVar1);
    pfVar1 = pfVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return this;
}

// operator*<4,4,4,float> @ 14c5a8880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

mat<4,4,float> * __cdecl
tdm::operator*<4,4,4,float>
          (mat<4,4,float> *__return_storage_ptr__,mat<4,4,float> *param_1,mat<4,4,float> *param_2)

{
  vec<4,float> *pvVar1;
  vec<4,float> *pvVar2;
  vec<4,float> *pvVar3;
  vec<4,float> *pvVar4;
  longlong lVar5;
  vec<4,float> *pvVar6;
  vec<4,float> *pvVar7;
  longlong lVar8;
  float fVar9;
  undefined8 local_30;
  undefined8 uStack_28;
  
  __return_storage_ptr__->values[0].values[0] = 0.0;
  __return_storage_ptr__->values[0].values[1] = 0.0;
  __return_storage_ptr__->values[0].values[2] = 0.0;
  __return_storage_ptr__->values[0].values[3] = 0.0;
  __return_storage_ptr__->values[1].values[0] = 0.0;
  __return_storage_ptr__->values[1].values[1] = 0.0;
  __return_storage_ptr__->values[1].values[2] = 0.0;
  __return_storage_ptr__->values[1].values[3] = 0.0;
  __return_storage_ptr__->values[2].values[0] = 0.0;
  __return_storage_ptr__->values[2].values[1] = 0.0;
  __return_storage_ptr__->values[2].values[2] = 0.0;
  __return_storage_ptr__->values[2].values[3] = 0.0;
  lVar8 = 4;
  __return_storage_ptr__->values[3].values[0] = 0.0;
  __return_storage_ptr__->values[3].values[1] = 0.0;
  __return_storage_ptr__->values[3].values[2] = 0.0;
  __return_storage_ptr__->values[3].values[3] = 0.0;
  pvVar7 = __return_storage_ptr__->values;
  do {
    lVar5 = 0;
    uStack_28._4_4_ = 0.0;
    uStack_28._0_4_ = 0.0;
    local_30._4_4_ = 0.0;
    local_30._0_4_ = 0.0;
    pvVar6 = param_2->values;
    do {
      fVar9 = *(float *)((longlong)pvVar7 +
                        (longlong)param_1 + (lVar5 * 4 - (longlong)__return_storage_ptr__));
      if (fVar9 == 0.0) {
        fVar9 = 0.0;
      }
      pvVar1 = (vec<4,float> *)pvVar6->values;
      pvVar2 = (vec<4,float> *)pvVar6->values;
      pvVar3 = (vec<4,float> *)pvVar6->values;
      pvVar4 = (vec<4,float> *)pvVar6->values;
      lVar5 = lVar5 + 1;
      pvVar6 = pvVar6 + 1;
      local_30._0_4_ = (float)local_30 + pvVar1->values[0] * fVar9;
      local_30._4_4_ = local_30._4_4_ + pvVar2->values[1] * fVar9;
      uStack_28._0_4_ = (float)uStack_28 + pvVar3->values[2] * fVar9;
      uStack_28._4_4_ = uStack_28._4_4_ + pvVar4->values[3] * fVar9;
    } while (lVar5 != 4);
    *(undefined8 *)((vec<4,float> *)pvVar7->values)->values = local_30;
    *(undefined8 *)(((vec<4,float> *)pvVar7->values)->values + 2) = uStack_28;
    pvVar7 = pvVar7 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return __return_storage_ptr__;
}

// __builtin_array_init_helper<tdm::vec<3,float>_> @ 14c5a89d0

void __cdecl __builtin_array_init_helper<tdm::vec<3,float>_>(vec<3,float> *param_1,ulong64 param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,param_2 * 0xc);
    return;
  }
  return;
}

// __builtin_array_init_helper<tdm::vec<4,float>_> @ 14c5a89f0

void __cdecl __builtin_array_init_helper<tdm::vec<4,float>_>(vec<4,float> *param_1,ulong64 param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,param_2 << 4);
    return;
  }
  return;
}

// rotate<float> @ 14c5a8a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

mat<4,4,float> * __cdecl
tdm::projective::rotate<float>
          (mat<4,4,float> *__return_storage_ptr__,mat<4,4,float> *param_1,vec<3,float> *param_2,
          ang<float,tdm::impl::radians> param_3,handedness param_4)

{
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStackY_1a8 [32];
  mat<4,4,float> local_f8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  __libm_sse2_sincosf_();
  fVar2 = extraout_XMM0_Da * (float)(int)param_4;
  fVar8 = __real_3f800000 - extraout_XMM0_Db;
  fVar7 = (float)*(undefined8 *)param_2->values;
  fVar6 = (float)((ulonglong)*(undefined8 *)param_2->values >> 0x20);
  fVar1 = param_2->values[2];
  fVar5 = __real_3f800000 / SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar1 * fVar1);
  fVar7 = fVar5 * fVar7;
  fVar6 = fVar5 * fVar6;
  fVar5 = fVar5 * fVar1;
  fVar3 = fVar6 * fVar7 * fVar8;
  fVar4 = fVar5 * fVar6 * fVar8;
  fVar1 = fVar5 * fVar7 * fVar8;
  mat<4,4,float>::
  mat<4,4,float><float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,0>
            (&local_f8,fVar7 * fVar7 * fVar8 + extraout_XMM0_Db,fVar3 - fVar5 * fVar2,
             fVar1 + fVar6 * fVar2,0.0,fVar3 + fVar5 * fVar2,
             fVar6 * fVar6 * fVar8 + extraout_XMM0_Db,fVar4 - fVar7 * fVar2,0.0,
             fVar1 - fVar6 * fVar2,fVar4 + fVar7 * fVar2,fVar5 * fVar5 * fVar8 + extraout_XMM0_Db,
             0.0,0.0,0.0,0.0,__real_3f800000);
  operator*<4,4,4,float>(__return_storage_ptr__,param_1,&local_f8);
  return __return_storage_ptr__;
}

// axis_angle<float> @ 14c5a8c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

axis_angle<float> * __thiscall
tdm::axis_angle<float>::axis_angle<float>
          (axis_angle<float> *this,ang<float,tdm::impl::radians> param_1,
          ang<float,tdm::impl::radians> param_2,ang<float,tdm::impl::radians> param_3,
          handedness param_4)

{
  mat<4,4,float> *pmVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar5;
  float extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  float fVar6;
  undefined1 auStack_1c8 [32];
  mat<4,4,float> local_1a8;
  mat<4,4,float> local_168;
  mat<4,4,float> local_128;
  mat<4,4,float> local_e8;
  mat<4,4,float> local_a8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  (this->axis).values[0] = 0.0;
  (this->axis).values[1] = 0.0;
  *(undefined8 *)((this->axis).values + 2) = 0;
  __libm_sse2_sincosf4_();
  fVar6 = (float)(int)param_4;
  __libm_sse2_sincosf_();
  local_128.values[0].values[1] = extraout_XMM0_Da_00 * fVar6;
  local_168.values[0].values[1] = 0.0;
  local_168.values[0].values[2] = 0.0;
  local_168.values[2].values[1] =
       (float)((uint)(extraout_XMM0_Da * fVar6) ^ __xmm_80000000800000008000000080000000);
  local_128.values[1].values[0] =
       (float)((uint)local_128.values[0].values[1] ^ __xmm_80000000800000008000000080000000);
  local_1a8.values[0].values[2] =
       (float)((uint)(extraout_XMM0_Dc * fVar6) ^ __xmm_80000000800000008000000080000000);
  local_168.values[0].values[3] = 0.0;
  local_168.values[1].values[0] = 0.0;
  local_168.values[1].values[3] = 0.0;
  local_168.values[2].values[0] = 0.0;
  local_168.values[2].values[3] = 0.0;
  local_168.values[3].values[0] = 0.0;
  local_168.values[3].values[1] = 0.0;
  local_168.values[3].values[2] = 0.0;
  local_168.values[0].values[0] = 1.0;
  local_168.values[3].values[3] = 1.0;
  local_1a8.values[0].values[1] = 0.0;
  local_1a8.values[0].values[0] = (float)extraout_XMM0_Dd;
  local_1a8.values[0].values[3] = 0.0;
  local_1a8.values[1].values[0] = 0.0;
  local_1a8.values[1].values[2] = 0.0;
  local_1a8.values[1].values[3] = 0.0;
  local_1a8.values[2].values[1] = 0.0;
  local_1a8.values[2].values[3] = 0.0;
  local_1a8.values[3].values[0] = 0.0;
  local_1a8.values[3].values[1] = 0.0;
  local_1a8.values[3].values[2] = 0.0;
  local_1a8.values[1].values[1] = 1.0;
  local_1a8.values[3].values[3] = 1.0;
  local_128.values[0].values[2] = 0.0;
  local_128.values[0].values[3] = 0.0;
  local_128.values[1].values[2] = 0.0;
  local_128.values[1].values[3] = 0.0;
  local_128.values[2].values[0] = 0.0;
  local_128.values[2].values[1] = 0.0;
  local_128.values[2].values[3] = 0.0;
  local_128.values[3].values[0] = 0.0;
  local_128.values[3].values[1] = 0.0;
  local_128.values[3].values[2] = 0.0;
  local_128.values[2].values[2] = 1.0;
  local_128.values[3].values[3] = 1.0;
  local_1a8.values[2].values[0] = extraout_XMM0_Dc * fVar6;
  local_168.values[1].values[2] = extraout_XMM0_Da * fVar6;
  pmVar1 = operator*<4,4,4,float>(&local_a8,&local_168,&local_1a8);
  operator*<4,4,4,float>(&local_e8,pmVar1,&local_128);
  fVar6 = __real_3f000000;
  local_1a8.values[0].values[0] = 0.0;
  local_1a8.values[0].values[1] = 0.0;
  local_1a8.values[0].values[2] = 0.0;
  local_1a8.values[0].values[3] = 0.0;
  local_1a8.values[2].values[0] = 0.0;
  lVar4 = 3;
  local_1a8.values[1].values[0] = 0.0;
  local_1a8.values[1].values[1] = 0.0;
  local_1a8.values[1].values[2] = 0.0;
  local_1a8.values[1].values[3] = 0.0;
  pfVar2 = local_1a8.values[0].values + 1;
  pfVar3 = local_e8.values[0].values + 2;
  do {
    ((vec<4,float> *)(pfVar2 + -1))->values[0] = ((vec<4,float> *)(pfVar3 + -2))->values[0];
    *pfVar2 = pfVar3[-1];
    pfVar2[1] = *pfVar3;
    lVar4 = lVar4 + -1;
    pfVar2 = pfVar2 + 3;
    pfVar3 = pfVar3 + 4;
  } while (lVar4 != 0);
  fVar5 = acosf(((local_1a8.values[1].values[0] + local_1a8.values[0].values[0] +
                 local_1a8.values[2].values[0]) - __real_3f800000) * __real_3f000000);
  (this->angle).value = fVar5;
  fVar5 = sinf(fVar5);
  fVar6 = fVar6 / fVar5;
  (this->axis).values[0] = (local_e8.values[2].values[1] - local_e8.values[1].values[2]) * fVar6;
  (this->axis).values[1] = (local_e8.values[0].values[2] - local_e8.values[2].values[0]) * fVar6;
  (this->axis).values[2] = (local_e8.values[1].values[0] - local_e8.values[0].values[1]) * fVar6;
  return this;
}

// vec<4,float> @ 14c5a8f20

vec<4,float> * __thiscall tdm::vec<4,float>::vec<4,float>(vec<4,float> *this)

{
  this->values[0] = 0.0;
  this->values[1] = 0.0;
  this->values[2] = 0.0;
  this->values[3] = 0.0;
  return this;
}

