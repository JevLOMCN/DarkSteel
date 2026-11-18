// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 39

// test_info_'' @ 1412a3fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'av::TestStringView_CompareWithStringView_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VTestStringView_CompareWithStringView_Test_av___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\arrayviewtests\\TestStringView.cpp"
                      ,9);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\arrayviewtests\\TestStringView.cpp"
                      ,9);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7c;
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
  pcVar6[0x7c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007c;
  uStack_40 = _UNK_152873298;
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
  *(undefined8 *)(local_58._Ptr + 0x70) = *(undefined8 *)(pcVar6 + 0x70);
  *(undefined4 *)(local_58._Ptr + 0x78) = *(undefined4 *)(pcVar6 + 0x78);
  *(local_58._Ptr + 0x7c) = pcVar6[0x7c];
  local_38 = 9;
  av::TestStringView_CompareWithStringView_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("TestStringView","CompareWithStringView",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// test_info_'' @ 1412a41d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'av::TestStringView_CompareWithString_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VTestStringView_CompareWithString_Test_av___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\arrayviewtests\\TestStringView.cpp"
                      ,0x15);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\arrayviewtests\\TestStringView.cpp"
                      ,0x15);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x7c;
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
  pcVar6[0x7c] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x80);
  local_48 = ___xmm_000000000000007f000000000000007c;
  uStack_40 = _UNK_152873298;
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
  *(undefined8 *)(local_58._Ptr + 0x70) = *(undefined8 *)(pcVar6 + 0x70);
  *(undefined4 *)(local_58._Ptr + 0x78) = *(undefined4 *)(pcVar6 + 0x78);
  *(local_58._Ptr + 0x7c) = pcVar6[0x7c];
  local_38 = 0x15;
  av::TestStringView_CompareWithString_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("TestStringView","CompareWithString",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x80);
  return;
}

// TestBody @ 14c30b420

void __thiscall
av::TestStringView_CompareWithStringView_Test::TestBody
          (TestStringView_CompareWithStringView_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  int iVar2;
  Message *pMVar3;
  AssertHelper *pAVar4;
  undefined8 *puVar5;
  char *pcVar6;
  AssertHelper local_res10;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_res18 [2];
  char *local_38;
  size_t local_30;
  char *local_28;
  size_t local_20;
  AssertionResult local_18;
  
  local_20 = 3;
  local_28 = "lhs";
  local_30 = 3;
  local_38 = "rhs";
  testing::AssertionSuccess(&local_18);
  if (local_18.success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar6 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_res10,kNonFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\arrayviewtests\\TestStringView.cpp"
                        ,0x11,pcVar6);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
    testing::internal::AssertHelper::~AssertHelper(&local_res10);
    if (local_res18[0]._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar5 = (undefined8 *)
               ((longlong)&(local_res18[0]._Myval2)->field_0x0 +
               (longlong)*(int *)(*(longlong *)local_res18[0]._Myval2 + 4));
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  uVar1._Mypair._Myval2 = local_18.message_._Mypair._Myval2;
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
  }
  if (local_20 == local_30) {
    if (local_28 != local_38) {
      iVar2 = memcmp(local_28,local_38,local_20);
      if (iVar2 != 0) goto LAB_14c30b54b;
    }
    testing::internal::CmpHelperOpFailure<av::StringView,av::StringView>
              (&local_18,"sv1","sv3",(StringView *)&local_28,(StringView *)&local_38,"!=");
  }
  else {
LAB_14c30b54b:
    testing::AssertionSuccess(&local_18);
  }
  if (local_18.success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)local_res18);
    if (local_18.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)local_18.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_18.message_._Mypair._Myval2 + 0x18)) {
        pcVar6 = *(char **)local_18.message_._Mypair._Myval2;
      }
    }
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_res10,kNonFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\arrayviewtests\\TestStringView.cpp"
                        ,0x12,pcVar6);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
    testing::internal::AssertHelper::~AssertHelper(&local_res10);
    if (local_res18[0]._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar5 = (undefined8 *)
               ((longlong)&(local_res18[0]._Myval2)->field_0x0 +
               (longlong)*(int *)(*(longlong *)local_res18[0]._Myval2 + 4));
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if (local_18.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_18.message_._Mypair._Myval2);
    ::operator_delete((void *)local_18.message_._Mypair._Myval2,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c30b610

void * __thiscall
av::TestStringView_CompareWithStringView_Test::_scalar_deleting_destructor_
          (TestStringView_CompareWithStringView_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c30b650

Test * __thiscall
testing::internal::TestFactoryImpl<av::TestStringView_CompareWithStringView_Test>::CreateTest
          (TestFactoryImpl<av::TestStringView_CompareWithStringView_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7TestStringView_CompareWithStringView_Test_av__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c30b690

void * __thiscall
testing::internal::TestFactoryImpl<av::TestStringView_CompareWithStringView_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<av::TestStringView_CompareWithStringView_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<av::TestStringView_CompareWithStringView_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c30b6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
av::TestStringView_CompareWithString_Test::TestBody(TestStringView_CompareWithString_Test *this)

{
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar1;
  int iVar2;
  Message *pMVar3;
  AssertHelper *pAVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  ulong64 uVar8;
  undefined1 auStackY_b8 [32];
  AssertionResult local_88;
  AssertHelper local_78;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_70;
  char *local_68;
  size_t local_60;
  _Bxty local_58;
  size_t local_48;
  ulonglong uStack_40;
  _Bxty local_38;
  size_t local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_60 = 3;
  local_38._8_8_ = 0;
  local_58._8_8_ = 0;
  local_68 = "lhs";
  local_28 = ___xmm_000000000000000f0000000000000003;
  uStack_20 = _UNK_152873288;
  local_38._3_5_ = 0;
  local_38._0_3_ = s_lhs._0_3_;
  local_48 = ___xmm_000000000000000f0000000000000003;
  uStack_40 = _UNK_152873288;
  local_58._3_5_ = 0;
  local_58._0_3_ = s_rhs._0_3_;
  testing::internal::
  CmpHelperEQ<av::StringView,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
            (&local_88,"sv","rhs1",(StringView *)&local_68,
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38);
  if (local_88.success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_70);
    if (local_88.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)local_88.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_88.message_._Mypair._Myval2 + 0x18)) {
        pcVar6 = *(char **)local_88.message_._Mypair._Myval2;
      }
    }
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       (&local_78,kNonFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\arrayviewtests\\TestStringView.cpp"
                        ,0x1b,pcVar6);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
    testing::internal::AssertHelper::~AssertHelper(&local_78);
    if (local_70._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar5 = (undefined8 *)
               ((longlong)&(local_70._Myval2)->field_0x0 +
               (longlong)*(int *)(*(longlong *)local_70._Myval2 + 4));
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  uVar1._Mypair._Myval2 = local_88.message_._Mypair._Myval2;
  if (local_88.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_88.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
  }
  testing::internal::
  CmpHelperEQ<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,av::StringView>
            (&local_88,"rhs1","sv",
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
             (StringView *)&local_68);
  if (local_88.success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_88.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)local_88.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_88.message_._Mypair._Myval2 + 0x18)) {
        pcVar6 = *(char **)local_88.message_._Mypair._Myval2;
      }
    }
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_70,kNonFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\arrayviewtests\\TestStringView.cpp"
                        ,0x1c,pcVar6);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_70);
    if (local_78.data_ != (AssertHelperData *)0x0) {
      puVar5 = (undefined8 *)
               ((longlong)&(local_78.data_)->type +
               (longlong)*(int *)(*(longlong *)local_78.data_ + 4));
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  uVar1._Mypair._Myval2 = local_88.message_._Mypair._Myval2;
  if (local_88.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_88.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
  }
  if (local_60 == local_48) {
    uVar7 = &local_58;
    if (0xf < uStack_40) {
      uVar7 = local_58._Ptr;
    }
    if ((local_60 != local_48) || (iVar2 = memcmp(local_68,(void *)uVar7,local_60), iVar2 != 0))
    goto LAB_14c30b94d;
    testing::internal::
    CmpHelperOpFailure<av::StringView,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              (&local_88,"sv","rhs2",(StringView *)&local_68,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,"!=");
  }
  else {
LAB_14c30b94d:
    testing::AssertionSuccess(&local_88);
  }
  if (local_88.success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_88.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)local_88.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_88.message_._Mypair._Myval2 + 0x18)) {
        pcVar6 = *(char **)local_88.message_._Mypair._Myval2;
      }
    }
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_70,kNonFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\arrayviewtests\\TestStringView.cpp"
                        ,0x1e,pcVar6);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_70);
    if (local_78.data_ != (AssertHelperData *)0x0) {
      puVar5 = (undefined8 *)
               ((longlong)&(local_78.data_)->type +
               (longlong)*(int *)(*(longlong *)local_78.data_ + 4));
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  uVar1._Mypair._Myval2 = local_88.message_._Mypair._Myval2;
  if (local_88.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_88.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar1._Mypair._Myval2,0x20);
  }
  if (local_60 == local_48) {
    uVar7 = &local_58;
    if (0xf < uStack_40) {
      uVar7 = local_58._Ptr;
    }
    if ((local_60 != local_48) || (iVar2 = memcmp(local_68,(void *)uVar7,local_60), iVar2 != 0))
    goto LAB_14c30ba62;
    testing::internal::
    CmpHelperOpFailure<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,av::StringView>
              (&local_88,"rhs2","sv",
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
               (StringView *)&local_68,"!=");
  }
  else {
LAB_14c30ba62:
    testing::AssertionSuccess(&local_88);
  }
  if (local_88.success_ == false) {
    pMVar3 = (Message *)testing::Message::Message((Message *)&local_78);
    if (local_88.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)local_88.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_88.message_._Mypair._Myval2 + 0x18)) {
        pcVar6 = *(char **)local_88.message_._Mypair._Myval2;
      }
    }
    pAVar4 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_70,kNonFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\arrayviewtests\\TestStringView.cpp"
                        ,0x1f,pcVar6);
    testing::internal::AssertHelper::operator=(pAVar4,pMVar3);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_70);
    if (local_78.data_ != (AssertHelperData *)0x0) {
      puVar5 = (undefined8 *)
               ((longlong)&(local_78.data_)->type +
               (longlong)*(int *)(*(longlong *)local_78.data_ + 4));
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if (local_88.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_88.message_._Mypair._Myval2);
    ::operator_delete((void *)local_88.message_._Mypair._Myval2,0x20);
  }
  if (0xf < uStack_40) {
    uVar8 = uStack_40 + 1;
    uVar7 = local_58._Ptr;
    if (0xfff < uVar8) {
      uVar7 = *(undefined8 *)(local_58._Ptr + -8);
      uVar8 = uStack_40 + 0x28;
      if ((char *)0x1f < local_58._Ptr + (-8 - uVar7)) goto LAB_14c30bb82;
    }
    ::operator_delete((void *)uVar7,uVar8);
  }
  local_58._Ptr = local_58._Ptr & 0xffffffffffffff00;
  local_48 = ___xmm_000000000000000f0000000000000000;
  uStack_40 = _UNK_15076add8;
  if (0xf < uStack_20) {
    uVar8 = uStack_20 + 1;
    uVar7 = local_38._Ptr;
    if (0xfff < uVar8) {
      uVar7 = *(undefined8 *)(local_38._Ptr + -8);
      uVar8 = uStack_20 + 0x28;
      if ((char *)0x1f < local_38._Ptr + (-8 - uVar7)) {
LAB_14c30bb82:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar7,uVar8);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c30bbd0

void * __thiscall
av::TestStringView_CompareWithString_Test::_scalar_deleting_destructor_
          (TestStringView_CompareWithString_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c30bc10

Test * __thiscall
testing::internal::TestFactoryImpl<av::TestStringView_CompareWithString_Test>::CreateTest
          (TestFactoryImpl<av::TestStringView_CompareWithString_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7TestStringView_CompareWithString_Test_av__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c30bc50

void * __thiscall
testing::internal::TestFactoryImpl<av::TestStringView_CompareWithString_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<av::TestStringView_CompareWithString_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<av::TestStringView_CompareWithString_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// StringView> @ 14c30bc90

basic_ostream<char,std::char_traits<char>_> * __cdecl
testing::internal2::operator<<<char,std::char_traits<char>,av::StringView>
          (basic_ostream<char,std::char_traits<char>_> *param_1,StringView *param_2)

{
  PrintBytesInObjectTo((uchar *)param_2,0x10,param_1);
  return param_1;
}

// operator==<char_const_,char_const_> @ 14c30bcc0

bool __cdecl
av::operator==<char_const_,char_const_>
          (ArrayView<char_const_> *param_1,ArrayView<char_const_> *param_2)

{
  int iVar1;
  
  if (param_1->sz != param_2->sz) {
    return false;
  }
  if (param_1->ptr == param_2->ptr) {
    return true;
  }
  iVar1 = memcmp(param_1->ptr,param_2->ptr,param_1->sz);
  return iVar1 == 0;
}

// operator==<char_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14c30bd00

bool __cdecl
av::operator==<char_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (ArrayView<char_const_> *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  size_t sVar1;
  size_t _Size;
  int iVar2;
  
  sVar1 = (param_2->_Mypair)._Myval2._Mysize;
  _Size = param_1->sz;
  if (_Size == sVar1) {
    if (0xf < (param_2->_Mypair)._Myval2._Myres) {
      param_2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_2->_Mypair)._Myval2._Bx._Ptr;
    }
    if (_Size == sVar1) {
      iVar2 = memcmp(param_1->ptr,param_2,_Size);
      return iVar2 == 0;
    }
  }
  return false;
}

// operator==<char_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14c30bd60

bool __cdecl
av::operator==<char_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          ArrayView<char_const_> *param_2)

{
  size_t sVar1;
  size_t _Size;
  int iVar2;
  
  sVar1 = (param_1->_Mypair)._Myval2._Mysize;
  _Size = param_2->sz;
  if (_Size == sVar1) {
    if (0xf < (param_1->_Mypair)._Myval2._Myres) {
      param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_1->_Mypair)._Myval2._Bx._Ptr;
    }
    if (_Size == sVar1) {
      iVar2 = memcmp(param_2->ptr,param_1,_Size);
      return iVar2 == 0;
    }
  }
  return false;
}

// operator!=<char_const_,char_const_> @ 14c30bdc0

bool __cdecl
av::operator!=<char_const_,char_const_>
          (ArrayView<char_const_> *param_1,ArrayView<char_const_> *param_2)

{
  int iVar1;
  
  if (param_1->sz != param_2->sz) {
    return true;
  }
  if (param_1->ptr == param_2->ptr) {
    return false;
  }
  iVar1 = memcmp(param_1->ptr,param_2->ptr,param_1->sz);
  return iVar1 != 0;
}

// operator!=<char_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14c30be10

bool __cdecl
av::operator!=<char_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (ArrayView<char_const_> *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  size_t sVar1;
  size_t _Size;
  int iVar2;
  
  sVar1 = (param_2->_Mypair)._Myval2._Mysize;
  _Size = param_1->sz;
  if (_Size == sVar1) {
    if (0xf < (param_2->_Mypair)._Myval2._Myres) {
      param_2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_2->_Mypair)._Myval2._Bx._Ptr;
    }
    if (_Size == sVar1) {
      iVar2 = memcmp(param_1->ptr,param_2,_Size);
      return iVar2 != 0;
    }
  }
  return true;
}

// operator!=<char_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14c30be70

bool __cdecl
av::operator!=<char_const_,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          ArrayView<char_const_> *param_2)

{
  size_t sVar1;
  size_t _Size;
  int iVar2;
  
  sVar1 = (param_1->_Mypair)._Myval2._Mysize;
  _Size = param_2->sz;
  if (_Size == sVar1) {
    if (0xf < (param_1->_Mypair)._Myval2._Myres) {
      param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_1->_Mypair)._Myval2._Bx._Ptr;
    }
    if (_Size == sVar1) {
      iVar2 = memcmp(param_2->ptr,param_1,_Size);
      return iVar2 != 0;
    }
  }
  return true;
}

// CmpHelperEQ<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,av::StringView> @ 14c30bed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQ<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,av::StringView>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3,
          StringView *param_4)

{
  size_t sVar1;
  size_t _Size;
  void *pvVar2;
  int iVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong64 uVar7;
  undefined1 auStackY_a8 [32];
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  sVar1 = (param_3->_Mypair)._Myval2._Mysize;
  _Size = *(size_t *)&param_4->field_0x8;
  if (_Size == sVar1) {
    pbVar4 = param_3;
    if (0xf < (param_3->_Mypair)._Myval2._Myres) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_3->_Mypair)._Myval2._Bx._Ptr;
    }
    if ((_Size == sVar1) && (iVar3 = memcmp(*(void **)param_4,pbVar4,_Size), iVar3 == 0)) {
      AssertionSuccess(__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  PrintToString<av::StringView>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4);
  pbVar4 = FormatForComparisonFailureMessage<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,av::StringView>
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
                      param_3,param_4);
  EqFailure(__return_storage_ptr__,param_1,param_2,pbVar4,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,false);
  if (0xf < uStack_60) {
    pvVar2 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
    uVar7 = uStack_60 + 1;
    pvVar5 = pvVar2;
    if (0xfff < uVar7) {
      pvVar5 = *(void **)((longlong)pvVar2 + -8);
      uVar7 = uStack_60 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5))) goto LAB_14c30c004;
    }
    ::operator_delete(pvVar5,uVar7);
  }
  local_78._Buf[0] = '\0';
  local_68 = ___xmm_000000000000000f0000000000000000;
  uStack_60 = _UNK_15076add8;
  if (0xf < local_40) {
    uVar7 = local_40 + 1;
    uVar6 = local_58._Ptr;
    if (0xfff < uVar7) {
      uVar6 = *(undefined8 *)(local_58._Ptr + -8);
      uVar7 = local_40 + 0x28;
      if ((char *)0x1f < local_58._Ptr + (-8 - uVar6)) {
LAB_14c30c004:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar6,uVar7);
  }
  return __return_storage_ptr__;
}

// CmpHelperEQ<av::StringView,av::StringView> @ 14c30c050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQ<av::StringView,av::StringView>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,StringView *param_3,
          StringView *param_4)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong64 uVar5;
  undefined1 auStackY_a8 [32];
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (*(size_t *)&param_3->field_0x8 == *(size_t *)&param_4->field_0x8) {
    if (*(void **)param_3 != *(void **)param_4) {
      iVar2 = memcmp(*(void **)param_3,*(void **)param_4,*(size_t *)&param_3->field_0x8);
      if (iVar2 != 0) goto LAB_14c30c0ac;
    }
    AssertionSuccess(__return_storage_ptr__);
  }
  else {
LAB_14c30c0ac:
    PrintToString<av::StringView>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4)
    ;
    PrintToString<av::StringView>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,param_3)
    ;
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
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3))) goto LAB_14c30c168;
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
LAB_14c30c168:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar4,uVar5);
    }
  }
  return __return_storage_ptr__;
}

// CmpHelperEQ<av::StringView,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14c30c1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQ<av::StringView,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,StringView *param_3,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_4)

{
  size_t _Size;
  size_t sVar1;
  void *pvVar2;
  int iVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong64 uVar7;
  undefined1 auStackY_a8 [32];
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  _Size = *(size_t *)&param_3->field_0x8;
  sVar1 = (param_4->_Mypair)._Myval2._Mysize;
  if (_Size == sVar1) {
    pbVar4 = param_4;
    if (0xf < (param_4->_Mypair)._Myval2._Myres) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_4->_Mypair)._Myval2._Bx._Ptr;
    }
    if ((_Size == sVar1) && (iVar3 = memcmp(*(void **)param_3,pbVar4,_Size), iVar3 == 0)) {
      AssertionSuccess(__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  pbVar4 = FormatForComparisonFailureMessage<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,av::StringView>
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                      param_4,param_3);
  PrintToString<av::StringView>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,param_3);
  EqFailure(__return_storage_ptr__,param_1,param_2,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,pbVar4,
            false);
  if (0xf < uStack_60) {
    pvVar2 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
    uVar7 = uStack_60 + 1;
    pvVar5 = pvVar2;
    if (0xfff < uVar7) {
      pvVar5 = *(void **)((longlong)pvVar2 + -8);
      uVar7 = uStack_60 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5))) goto LAB_14c30c2e4;
    }
    ::operator_delete(pvVar5,uVar7);
  }
  local_78._Buf[0] = '\0';
  local_68 = ___xmm_000000000000000f0000000000000000;
  uStack_60 = _UNK_15076add8;
  if (0xf < local_40) {
    uVar7 = local_40 + 1;
    uVar6 = local_58._Ptr;
    if (0xfff < uVar7) {
      uVar6 = *(undefined8 *)(local_58._Ptr + -8);
      uVar7 = local_40 + 0x28;
      if ((char *)0x1f < local_58._Ptr + (-8 - uVar6)) {
LAB_14c30c2e4:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar6,uVar7);
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,av::StringView> @ 14c30c330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQFailure<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,av::StringView>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3,
          StringView *param_4)

{
  void *pvVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong64 uVar5;
  undefined1 auStackY_a8 [32];
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  PrintToString<av::StringView>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4);
  pbVar2 = FormatForComparisonFailureMessage<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,av::StringView>
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
                      param_3,param_4);
  EqFailure(__return_storage_ptr__,param_1,param_2,pbVar2,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,false);
  if (0xf < uStack_60) {
    pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
    uVar5 = uStack_60 + 1;
    pvVar3 = pvVar1;
    if (0xfff < uVar5) {
      pvVar3 = *(void **)((longlong)pvVar1 + -8);
      uVar5 = uStack_60 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3))) goto LAB_14c30c41e;
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
LAB_14c30c41e:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar4,uVar5);
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<av::StringView,av::StringView> @ 14c30c470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQFailure<av::StringView,av::StringView>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,StringView *param_3,
          StringView *param_4)

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
  PrintToString<av::StringView>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,param_4);
  PrintToString<av::StringView>
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
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c30c558;
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
LAB_14c30c558:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar3,uVar4);
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<av::StringView,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14c30c5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQFailure<av::StringView,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,StringView *param_3,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_4)

{
  void *pvVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong64 uVar5;
  undefined1 auStackY_a8 [32];
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  _Bxty local_58;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pbVar2 = FormatForComparisonFailureMessage<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,av::StringView>
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                      param_4,param_3);
  PrintToString<av::StringView>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,param_3);
  EqFailure(__return_storage_ptr__,param_1,param_2,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,pbVar2,
            false);
  if (0xf < uStack_60) {
    pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
    uVar5 = uStack_60 + 1;
    pvVar3 = pvVar1;
    if (0xfff < uVar5) {
      pvVar3 = *(void **)((longlong)pvVar1 + -8);
      uVar5 = uStack_60 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3))) goto LAB_14c30c68b;
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
LAB_14c30c68b:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar4,uVar5);
  }
  return __return_storage_ptr__;
}

// CmpHelperNE<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,av::StringView> @ 14c30c6d0

AssertionResult * __cdecl
testing::internal::
CmpHelperNE<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,av::StringView>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3,
          StringView *param_4)

{
  size_t sVar1;
  size_t _Size;
  int iVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Buf2;
  
  sVar1 = (param_3->_Mypair)._Myval2._Mysize;
  _Size = *(size_t *)&param_4->field_0x8;
  if (_Size == sVar1) {
    _Buf2 = param_3;
    if (0xf < (param_3->_Mypair)._Myval2._Myres) {
      _Buf2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_3->_Mypair)._Myval2._Bx._Ptr;
    }
    if ((_Size == sVar1) && (iVar2 = memcmp(*(void **)param_4,_Buf2,_Size), iVar2 == 0)) {
      CmpHelperOpFailure<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,av::StringView>
                (__return_storage_ptr__,param_1,param_2,param_3,param_4,"!=");
      return __return_storage_ptr__;
    }
  }
  AssertionSuccess(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// CmpHelperNE<av::StringView,av::StringView> @ 14c30c790

AssertionResult * __cdecl
testing::internal::CmpHelperNE<av::StringView,av::StringView>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,StringView *param_3,
          StringView *param_4)

{
  int iVar1;
  
  if (*(size_t *)&param_3->field_0x8 == *(size_t *)&param_4->field_0x8) {
    if (*(void **)param_3 != *(void **)param_4) {
      iVar1 = memcmp(*(void **)param_3,*(void **)param_4,*(size_t *)&param_3->field_0x8);
      if (iVar1 != 0) goto LAB_14c30c7fd;
    }
    CmpHelperOpFailure<av::StringView,av::StringView>
              (__return_storage_ptr__,param_1,param_2,param_3,param_4,"!=");
  }
  else {
LAB_14c30c7fd:
    AssertionSuccess(__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// CmpHelperNE<av::StringView,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14c30c830

AssertionResult * __cdecl
testing::internal::
CmpHelperNE<av::StringView,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,StringView *param_3,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_4)

{
  size_t _Size;
  size_t sVar1;
  int iVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Buf2;
  
  _Size = *(size_t *)&param_3->field_0x8;
  sVar1 = (param_4->_Mypair)._Myval2._Mysize;
  if (_Size == sVar1) {
    _Buf2 = param_4;
    if (0xf < (param_4->_Mypair)._Myval2._Myres) {
      _Buf2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_4->_Mypair)._Myval2._Bx._Ptr;
    }
    if ((_Size == sVar1) && (iVar2 = memcmp(*(void **)param_3,_Buf2,_Size), iVar2 == 0)) {
      CmpHelperOpFailure<av::StringView,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                (__return_storage_ptr__,param_1,param_2,param_3,param_4,"!=");
      return __return_storage_ptr__;
    }
  }
  AssertionSuccess(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// CmpHelperOpFailure<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,av::StringView> @ 14c30c8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperOpFailure<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,av::StringView>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3,
          StringView *param_4,char *param_5)

{
  void *pvVar1;
  StringView *pSVar2;
  AssertionResult *pAVar3;
  Message *pMVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined8 *puVar6;
  void *pvVar7;
  char *pcVar8;
  ulong64 uVar9;
  undefined1 auStackY_f8 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_c8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_c0;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_b8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_b0;
  StringView *local_a8;
  AssertionResult local_a0;
  _Bxty local_90;
  undefined8 local_80;
  ulonglong uStack_78;
  _Bxty local_70;
  undefined8 local_60;
  ulonglong uStack_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_a8 = param_4;
  local_b0._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )param_3;
  pAVar3 = AssertionFailure(&local_a0);
  pMVar4 = (Message *)testing::Message::Message((Message *)&local_c0);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar4->ss_)._Mypair._Myval2)->field_0x10,"Expected: (");
  AssertionResult::AppendMessage(pAVar3,pMVar4);
  if (local_c0._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_c0._Mypair._Myval2 + 4) +
             (longlong)local_c0._Mypair._Myval2);
    (**(code **)*puVar6)(puVar6,1);
  }
  pMVar4 = (Message *)testing::Message::Message((Message *)&local_c0);
  pcVar8 = "(null)";
  if (param_1 != (char *)0x0) {
    pcVar8 = param_1;
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar4->ss_)._Mypair._Myval2)->field_0x10,pcVar8);
  AssertionResult::AppendMessage(pAVar3,pMVar4);
  if (local_c0._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)local_c0._Mypair._Myval2 +
             (longlong)*(int *)(*(longlong *)local_c0._Mypair._Myval2 + 4));
    (**(code **)*puVar6)(puVar6,1);
  }
  pMVar4 = (Message *)testing::Message::Message((Message *)&local_b8);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar4->ss_)._Mypair._Myval2)->field_0x10,") ");
  AssertionResult::AppendMessage(pAVar3,pMVar4);
  if (local_b8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_b8._Mypair._Myval2 + 4) +
             (longlong)local_b8._Mypair._Myval2);
    (**(code **)*puVar6)(puVar6,1);
  }
  pMVar4 = (Message *)testing::Message::Message((Message *)&local_b8);
  pcVar8 = "(null)";
  if (param_5 != (char *)0x0) {
    pcVar8 = param_5;
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar4->ss_)._Mypair._Myval2)->field_0x10,pcVar8);
  AssertionResult::AppendMessage(pAVar3,pMVar4);
  if (local_b8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)local_b8._Mypair._Myval2 +
             (longlong)*(int *)(*(longlong *)local_b8._Mypair._Myval2 + 4));
    (**(code **)*puVar6)(puVar6,1);
  }
  pMVar4 = (Message *)testing::Message::Message((Message *)&local_c8);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar4->ss_)._Mypair._Myval2)->field_0x10," (");
  AssertionResult::AppendMessage(pAVar3,pMVar4);
  if (local_c8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_c8._Mypair._Myval2 + 4) +
             (longlong)local_c8._Mypair._Myval2);
    (**(code **)*puVar6)(puVar6,1);
  }
  pMVar4 = (Message *)testing::Message::Message((Message *)&local_c8);
  pcVar8 = "(null)";
  if (param_2 != (char *)0x0) {
    pcVar8 = param_2;
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar4->ss_)._Mypair._Myval2)->field_0x10,pcVar8);
  AssertionResult::AppendMessage(pAVar3,pMVar4);
  if (local_c8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)local_c8._Mypair._Myval2 +
             (longlong)*(int *)(*(longlong *)local_c8._Mypair._Myval2 + 4));
    (**(code **)*puVar6)(puVar6,1);
  }
  pMVar4 = (Message *)testing::Message::Message((Message *)&local_c8);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar4->ss_)._Mypair._Myval2)->field_0x10,"), actual: ");
  AssertionResult::AppendMessage(pAVar3,pMVar4);
  if (local_c8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_c8._Mypair._Myval2 + 4) +
             (longlong)local_c8._Mypair._Myval2);
    (**(code **)*puVar6)(puVar6,1);
  }
  pSVar2 = local_a8;
  pbVar5 = FormatForComparisonFailureMessage<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,av::StringView>
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_70,
                      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                      local_b0._Mypair._Myval2,local_a8);
  pAVar3 = AssertionResult::operator<<<std::basic_string<char,std::char_traits<char>,std::
           allocator<char>_>_>(pAVar3,pbVar5);
  pMVar4 = (Message *)testing::Message::Message((Message *)&local_b0);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar4->ss_)._Mypair._Myval2)->field_0x10," vs ");
  AssertionResult::AppendMessage(pAVar3,pMVar4);
  if (local_b0._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)local_b0._Mypair._Myval2 +
             (longlong)*(int *)(*(longlong *)local_b0._Mypair._Myval2 + 4));
    (**(code **)*puVar6)(puVar6,1);
  }
  PrintToString<av::StringView>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_90,pSVar2);
  pAVar3 = AssertionResult::operator<<<std::basic_string<char,std::char_traits<char>,std::
           allocator<char>_>_>(pAVar3,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                       *)&local_90);
  AssertionResult::AssertionResult(__return_storage_ptr__,pAVar3);
  if (0xf < uStack_78) {
    pvVar1 = (void *)CONCAT71(local_90._1_7_,local_90._Buf[0]);
    uVar9 = uStack_78 + 1;
    pvVar7 = pvVar1;
    if (0xfff < uVar9) {
      pvVar7 = *(void **)((longlong)pvVar1 + -8);
      uVar9 = uStack_78 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar7))) goto LAB_14c30cc43;
    }
    ::operator_delete(pvVar7,uVar9);
  }
  local_90._Buf[0] = '\0';
  local_80 = ___xmm_000000000000000f0000000000000000;
  uStack_78 = _UNK_15076add8;
  if (0xf < uStack_58) {
    pvVar1 = (void *)CONCAT71(local_70._1_7_,local_70._Buf[0]);
    uVar9 = uStack_58 + 1;
    pvVar7 = pvVar1;
    if (0xfff < uVar9) {
      pvVar7 = *(void **)((longlong)pvVar1 + -8);
      uVar9 = uStack_58 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar7))) {
LAB_14c30cc43:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar7,uVar9);
  }
  local_70._Buf[0] = '\0';
  local_60 = ___xmm_000000000000000f0000000000000000;
  uStack_58 = _UNK_15076add8;
  if (local_a0.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_a0.message_._Mypair._Myval2);
    ::operator_delete((void *)local_a0.message_._Mypair._Myval2,0x20);
  }
  return __return_storage_ptr__;
}

// CmpHelperOpFailure<av::StringView,av::StringView> @ 14c30ccc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperOpFailure<av::StringView,av::StringView>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,StringView *param_3,
          StringView *param_4,char *param_5)

{
  void *pvVar1;
  AssertionResult *pAVar2;
  Message *pMVar3;
  undefined8 *puVar4;
  void *pvVar5;
  char *pcVar6;
  ulong64 uVar7;
  undefined1 auStackY_f8 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_c8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_c0;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_b8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_b0;
  StringView *local_a8;
  AssertionResult local_a0;
  _Bxty local_90;
  undefined8 local_80;
  ulonglong uStack_78;
  _Bxty local_70;
  undefined8 local_60;
  ulonglong uStack_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_a8 = param_4;
  local_b0._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )param_3;
  pAVar2 = AssertionFailure(&local_a0);
  pMVar3 = (Message *)testing::Message::Message((Message *)&local_c0);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar3->ss_)._Mypair._Myval2)->field_0x10,"Expected: (");
  AssertionResult::AppendMessage(pAVar2,pMVar3);
  if (local_c0._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_c0._Mypair._Myval2 + 4) +
             (longlong)local_c0._Mypair._Myval2);
    (**(code **)*puVar4)(puVar4,1);
  }
  pMVar3 = (Message *)testing::Message::Message((Message *)&local_c0);
  pcVar6 = "(null)";
  if (param_1 != (char *)0x0) {
    pcVar6 = param_1;
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar3->ss_)._Mypair._Myval2)->field_0x10,pcVar6);
  AssertionResult::AppendMessage(pAVar2,pMVar3);
  if (local_c0._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)local_c0._Mypair._Myval2 +
             (longlong)*(int *)(*(longlong *)local_c0._Mypair._Myval2 + 4));
    (**(code **)*puVar4)(puVar4,1);
  }
  pMVar3 = (Message *)testing::Message::Message((Message *)&local_b8);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar3->ss_)._Mypair._Myval2)->field_0x10,") ");
  AssertionResult::AppendMessage(pAVar2,pMVar3);
  if (local_b8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_b8._Mypair._Myval2 + 4) +
             (longlong)local_b8._Mypair._Myval2);
    (**(code **)*puVar4)(puVar4,1);
  }
  pMVar3 = (Message *)testing::Message::Message((Message *)&local_b8);
  pcVar6 = "(null)";
  if (param_5 != (char *)0x0) {
    pcVar6 = param_5;
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar3->ss_)._Mypair._Myval2)->field_0x10,pcVar6);
  AssertionResult::AppendMessage(pAVar2,pMVar3);
  if (local_b8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)local_b8._Mypair._Myval2 +
             (longlong)*(int *)(*(longlong *)local_b8._Mypair._Myval2 + 4));
    (**(code **)*puVar4)(puVar4,1);
  }
  pMVar3 = (Message *)testing::Message::Message((Message *)&local_c8);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar3->ss_)._Mypair._Myval2)->field_0x10," (");
  AssertionResult::AppendMessage(pAVar2,pMVar3);
  if (local_c8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_c8._Mypair._Myval2 + 4) +
             (longlong)local_c8._Mypair._Myval2);
    (**(code **)*puVar4)(puVar4,1);
  }
  pMVar3 = (Message *)testing::Message::Message((Message *)&local_c8);
  pcVar6 = "(null)";
  if (param_2 != (char *)0x0) {
    pcVar6 = param_2;
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar3->ss_)._Mypair._Myval2)->field_0x10,pcVar6);
  AssertionResult::AppendMessage(pAVar2,pMVar3);
  if (local_c8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)local_c8._Mypair._Myval2 +
             (longlong)*(int *)(*(longlong *)local_c8._Mypair._Myval2 + 4));
    (**(code **)*puVar4)(puVar4,1);
  }
  pMVar3 = (Message *)testing::Message::Message((Message *)&local_c8);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar3->ss_)._Mypair._Myval2)->field_0x10,"), actual: ");
  AssertionResult::AppendMessage(pAVar2,pMVar3);
  if (local_c8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_c8._Mypair._Myval2 + 4) +
             (longlong)local_c8._Mypair._Myval2);
    (**(code **)*puVar4)(puVar4,1);
  }
  PrintToString<av::StringView>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_70,
             (StringView *)local_b0._Mypair._Myval2);
  pAVar2 = AssertionResult::operator<<<std::basic_string<char,std::char_traits<char>,std::
           allocator<char>_>_>(pAVar2,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                       *)&local_70);
  pMVar3 = (Message *)testing::Message::Message((Message *)&local_b0);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar3->ss_)._Mypair._Myval2)->field_0x10," vs ");
  AssertionResult::AppendMessage(pAVar2,pMVar3);
  if (local_b0._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar4 = (undefined8 *)
             ((longlong)local_b0._Mypair._Myval2 +
             (longlong)*(int *)(*(longlong *)local_b0._Mypair._Myval2 + 4));
    (**(code **)*puVar4)(puVar4,1);
  }
  PrintToString<av::StringView>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_90,local_a8);
  pAVar2 = AssertionResult::operator<<<std::basic_string<char,std::char_traits<char>,std::
           allocator<char>_>_>(pAVar2,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                       *)&local_90);
  AssertionResult::AssertionResult(__return_storage_ptr__,pAVar2);
  if (0xf < uStack_78) {
    pvVar1 = (void *)CONCAT71(local_90._1_7_,local_90._Buf[0]);
    uVar7 = uStack_78 + 1;
    pvVar5 = pvVar1;
    if (0xfff < uVar7) {
      pvVar5 = *(void **)((longlong)pvVar1 + -8);
      uVar7 = uStack_78 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar5))) goto LAB_14c30d00e;
    }
    ::operator_delete(pvVar5,uVar7);
  }
  local_90._Buf[0] = '\0';
  local_80 = ___xmm_000000000000000f0000000000000000;
  uStack_78 = _UNK_15076add8;
  if (0xf < uStack_58) {
    pvVar1 = (void *)CONCAT71(local_70._1_7_,local_70._Buf[0]);
    uVar7 = uStack_58 + 1;
    pvVar5 = pvVar1;
    if (0xfff < uVar7) {
      pvVar5 = *(void **)((longlong)pvVar1 + -8);
      uVar7 = uStack_58 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar5))) {
LAB_14c30d00e:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar5,uVar7);
  }
  local_70._Buf[0] = '\0';
  local_60 = ___xmm_000000000000000f0000000000000000;
  uStack_58 = _UNK_15076add8;
  if (local_a0.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_a0.message_._Mypair._Myval2);
    ::operator_delete((void *)local_a0.message_._Mypair._Myval2,0x20);
  }
  return __return_storage_ptr__;
}

// CmpHelperOpFailure<av::StringView,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14c30d090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperOpFailure<av::StringView,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,StringView *param_3,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_4,char *param_5)

{
  void *pvVar1;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  AssertionResult *pAVar3;
  Message *pMVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  undefined8 *puVar6;
  void *pvVar7;
  char *pcVar8;
  ulong64 uVar9;
  undefined1 auStackY_f8 [32];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_c8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_c0;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_b8;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_b0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_a8;
  AssertionResult local_a0;
  _Bxty local_90;
  undefined8 local_80;
  ulonglong uStack_78;
  _Bxty local_70;
  undefined8 local_60;
  ulonglong uStack_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_a8 = param_4;
  local_b0._Mypair._Myval2 =
       (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
        )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )param_3;
  pAVar3 = AssertionFailure(&local_a0);
  pMVar4 = (Message *)testing::Message::Message((Message *)&local_c0);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar4->ss_)._Mypair._Myval2)->field_0x10,"Expected: (");
  AssertionResult::AppendMessage(pAVar3,pMVar4);
  if (local_c0._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_c0._Mypair._Myval2 + 4) +
             (longlong)local_c0._Mypair._Myval2);
    (**(code **)*puVar6)(puVar6,1);
  }
  pMVar4 = (Message *)testing::Message::Message((Message *)&local_c0);
  pcVar8 = "(null)";
  if (param_1 != (char *)0x0) {
    pcVar8 = param_1;
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar4->ss_)._Mypair._Myval2)->field_0x10,pcVar8);
  AssertionResult::AppendMessage(pAVar3,pMVar4);
  if (local_c0._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)local_c0._Mypair._Myval2 +
             (longlong)*(int *)(*(longlong *)local_c0._Mypair._Myval2 + 4));
    (**(code **)*puVar6)(puVar6,1);
  }
  pMVar4 = (Message *)testing::Message::Message((Message *)&local_b8);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar4->ss_)._Mypair._Myval2)->field_0x10,") ");
  AssertionResult::AppendMessage(pAVar3,pMVar4);
  if (local_b8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_b8._Mypair._Myval2 + 4) +
             (longlong)local_b8._Mypair._Myval2);
    (**(code **)*puVar6)(puVar6,1);
  }
  pMVar4 = (Message *)testing::Message::Message((Message *)&local_b8);
  pcVar8 = "(null)";
  if (param_5 != (char *)0x0) {
    pcVar8 = param_5;
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar4->ss_)._Mypair._Myval2)->field_0x10,pcVar8);
  AssertionResult::AppendMessage(pAVar3,pMVar4);
  if (local_b8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)local_b8._Mypair._Myval2 +
             (longlong)*(int *)(*(longlong *)local_b8._Mypair._Myval2 + 4));
    (**(code **)*puVar6)(puVar6,1);
  }
  pMVar4 = (Message *)testing::Message::Message((Message *)&local_c8);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar4->ss_)._Mypair._Myval2)->field_0x10," (");
  AssertionResult::AppendMessage(pAVar3,pMVar4);
  if (local_c8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_c8._Mypair._Myval2 + 4) +
             (longlong)local_c8._Mypair._Myval2);
    (**(code **)*puVar6)(puVar6,1);
  }
  pMVar4 = (Message *)testing::Message::Message((Message *)&local_c8);
  pcVar8 = "(null)";
  if (param_2 != (char *)0x0) {
    pcVar8 = param_2;
  }
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar4->ss_)._Mypair._Myval2)->field_0x10,pcVar8);
  AssertionResult::AppendMessage(pAVar3,pMVar4);
  if (local_c8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)local_c8._Mypair._Myval2 +
             (longlong)*(int *)(*(longlong *)local_c8._Mypair._Myval2 + 4));
    (**(code **)*puVar6)(puVar6,1);
  }
  pMVar4 = (Message *)testing::Message::Message((Message *)&local_c8);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar4->ss_)._Mypair._Myval2)->field_0x10,"), actual: ");
  AssertionResult::AppendMessage(pAVar3,pMVar4);
  if (local_c8._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(*(longlong *)local_c8._Mypair._Myval2 + 4) +
             (longlong)local_c8._Mypair._Myval2);
    (**(code **)*puVar6)(puVar6,1);
  }
  uVar2._Mypair._Myval2 = local_b0._Mypair._Myval2;
  PrintToString<av::StringView>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_90,
             (StringView *)local_b0._Mypair._Myval2);
  pAVar3 = AssertionResult::operator<<<std::basic_string<char,std::char_traits<char>,std::
           allocator<char>_>_>(pAVar3,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                       *)&local_90);
  pMVar4 = (Message *)testing::Message::Message((Message *)&local_b0);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)
             &((pMVar4->ss_)._Mypair._Myval2)->field_0x10," vs ");
  AssertionResult::AppendMessage(pAVar3,pMVar4);
  if (local_b0._Mypair._Myval2 !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar6 = (undefined8 *)
             ((longlong)local_b0._Mypair._Myval2 +
             (longlong)*(int *)(*(longlong *)local_b0._Mypair._Myval2 + 4));
    (**(code **)*puVar6)(puVar6,1);
  }
  pbVar5 = FormatForComparisonFailureMessage<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,av::StringView>
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_70,
                      local_a8,(StringView *)uVar2._Mypair._Myval2);
  pAVar3 = AssertionResult::operator<<<std::basic_string<char,std::char_traits<char>,std::
           allocator<char>_>_>(pAVar3,pbVar5);
  AssertionResult::AssertionResult(__return_storage_ptr__,pAVar3);
  if (0xf < uStack_58) {
    pvVar1 = (void *)CONCAT71(local_70._1_7_,local_70._Buf[0]);
    uVar9 = uStack_58 + 1;
    pvVar7 = pvVar1;
    if (0xfff < uVar9) {
      pvVar7 = *(void **)((longlong)pvVar1 + -8);
      uVar9 = uStack_58 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar7))) goto LAB_14c30d3e3;
    }
    ::operator_delete(pvVar7,uVar9);
  }
  local_70._Buf[0] = '\0';
  local_60 = ___xmm_000000000000000f0000000000000000;
  uStack_58 = _UNK_15076add8;
  if (0xf < uStack_78) {
    pvVar1 = (void *)CONCAT71(local_90._1_7_,local_90._Buf[0]);
    uVar9 = uStack_78 + 1;
    pvVar7 = pvVar1;
    if (0xfff < uVar9) {
      pvVar7 = *(void **)((longlong)pvVar1 + -8);
      uVar9 = uStack_78 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar7))) {
LAB_14c30d3e3:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pvVar7,uVar9);
  }
  local_90._Buf[0] = '\0';
  local_80 = ___xmm_000000000000000f0000000000000000;
  uStack_78 = _UNK_15076add8;
  if (local_a0.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_a0.message_._Mypair._Myval2);
    ::operator_delete((void *)local_a0.message_._Mypair._Myval2,0x20);
  }
  return __return_storage_ptr__;
}

// DefaultPrintNonContainerTo<av::StringView> @ 14c30d460

void __cdecl
testing_internal::DefaultPrintNonContainerTo<av::StringView>
          (StringView *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  testing::internal2::PrintBytesInObjectTo((uchar *)param_1,0x10,param_2);
  return;
}

// DefaultPrintTo<av::StringView> @ 14c30d480

void __cdecl
testing::internal::DefaultPrintTo<av::StringView>
          (WrapPrinterType<3> param_1,StringView *param_2,
          basic_ostream<char,std::char_traits<char>_> *param_3)

{
  internal2::PrintBytesInObjectTo((uchar *)param_2,0x10,param_3);
  return;
}

// FormatForComparisonFailureMessage<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,av::StringView> @ 14c30d4a0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,av::StringView>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          StringView *param_2)

{
  char *pcVar1;
  char *pcVar2;
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
  PrintStringTo(param_1,(basic_ostream<char,std::char_traits<char>_> *)local_118);
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  if ((((byte)local_a0 & 0x22) == 2) || (pcVar2 = *local_d0, pcVar2 == (char *)0x0)) {
    if (((local_a0 & 4) == 0) && (*local_d8 != (char *)0x0)) {
      pcVar1 = *local_f8;
      pcVar2 = *local_d8 + ((longlong)*local_c0 - (longlong)pcVar1);
    }
    else {
      pcVar2 = (char *)0x0;
      pcVar1 = (char *)0x0;
    }
  }
  else {
    if (pcVar2 < local_a8) {
      pcVar2 = local_a8;
    }
    pcVar1 = *local_f0;
    pcVar2 = pcVar2 + -(longlong)pcVar1;
  }
  if (pcVar1 != (char *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (__return_storage_ptr__,pcVar1,(ulong64)pcVar2);
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

// FormatForComparisonFailureMessage<av::StringView,av::StringView> @ 14c30d650

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::FormatForComparisonFailureMessage<av::StringView,av::StringView>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          StringView *param_1,StringView *param_2)

{
  PrintToString<av::StringView>(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FormatForComparisonFailureMessage<av::StringView,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14c30d670

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<av::StringView,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          StringView *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  PrintToString<av::StringView>(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// PrintTo<av::StringView> @ 14c30d690

void __cdecl
testing::internal::PrintTo<av::StringView>
          (StringView *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  internal2::PrintBytesInObjectTo((uchar *)param_1,0x10,param_2);
  return;
}

// PrintToString<av::StringView> @ 14c30d6b0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::PrintToString<av::StringView>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          StringView *param_1)

{
  char *pcVar1;
  char *pcVar2;
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
  internal2::PrintBytesInObjectTo
            ((uchar *)param_1,0x10,(basic_ostream<char,std::char_traits<char>_> *)local_118);
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  if ((((byte)local_a0 & 0x22) == 2) || (pcVar2 = *local_d0, pcVar2 == (char *)0x0)) {
    if (((local_a0 & 4) == 0) && (*local_d8 != (char *)0x0)) {
      pcVar1 = *local_f8;
      pcVar2 = *local_d8 + ((longlong)*local_c0 - (longlong)pcVar1);
    }
    else {
      pcVar2 = (char *)0x0;
      pcVar1 = (char *)0x0;
    }
  }
  else {
    if (pcVar2 < local_a8) {
      pcVar2 = local_a8;
    }
    pcVar1 = *local_f0;
    pcVar2 = pcVar2 + -(longlong)pcVar1;
  }
  if (pcVar1 != (char *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (__return_storage_ptr__,pcVar1,(ulong64)pcVar2);
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

// UniversalPrint<av::StringView> @ 14c30d860

void __cdecl
testing::internal::UniversalPrint<av::StringView>
          (StringView *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  internal2::PrintBytesInObjectTo((uchar *)param_1,0x10,param_2);
  return;
}

// GetSetUpCaseOrSuite @ 14c30d880

_func___cdecl_void * __cdecl
testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite(char *param_1,int param_2)

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

// GetTearDownCaseOrSuite @ 14c30d920

_func___cdecl_void * __cdecl
testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
          (char *param_1,int param_2)

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

