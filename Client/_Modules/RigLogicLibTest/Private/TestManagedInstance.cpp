// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 25

// test_info_'' @ 141326090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ManagedInstanceTest_SharedInstance_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VManagedInstanceTest_SharedInstance_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\utils\\TestManagedInstance.cpp"
                      ,0x3b);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\utils\\TestManagedInstance.cpp"
                      ,0x3b);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x81;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x8f;
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
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._120_8_;
  *(undefined8 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_8_;
  *(undefined8 *)(pcVar6 + 0x78) = uVar1;
  pcVar6[0x80] = ::s_C__Workspace_UnrealEngine_Engin[0x80];
  pcVar6[0x81] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f0000000000000081;
  uStack_40 = _UNK_1528815f8;
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
  *(undefined2 *)(local_58._Ptr + 0x80) = *(undefined2 *)(pcVar6 + 0x80);
  local_38 = 0x3b;
  ManagedInstanceTest_SharedInstance_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ManagedInstanceTest","SharedInstance",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// test_info_'' @ 1413262b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'ManagedInstanceTest_UniqueInstance_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VManagedInstanceTest_UniqueInstance_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\utils\\TestManagedInstance.cpp"
                      ,0x2d);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\utils\\TestManagedInstance.cpp"
                      ,0x2d);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x81;
  *(undefined8 *)pcVar6 = ::s_C__Workspace_UnrealEngine_Engin._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar1;
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._24_8_;
  local_18 = 0x8f;
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
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._120_8_;
  *(undefined8 *)(pcVar6 + 0x70) = ::s_C__Workspace_UnrealEngine_Engin._112_8_;
  *(undefined8 *)(pcVar6 + 0x78) = uVar1;
  pcVar6[0x80] = ::s_C__Workspace_UnrealEngine_Engin[0x80];
  pcVar6[0x81] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f0000000000000081;
  uStack_40 = _UNK_1528815f8;
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
  *(undefined2 *)(local_58._Ptr + 0x80) = *(undefined2 *)(pcVar6 + 0x80);
  local_38 = 0x2d;
  ManagedInstanceTest_UniqueInstance_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("ManagedInstanceTest","UniqueInstance",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// TestBody @ 14c4627b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ManagedInstanceTest_UniqueInstance_Test::TestBody(ManagedInstanceTest_UniqueInstance_Test *this)

{
  void *pvVar1;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar2;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  Message *pMVar6;
  AssertHelper *pAVar7;
  void *pvVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 *puVar11;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  *p_Var12;
  ulong64 uVar13;
  int iVar14;
  undefined1 auStackY_158 [32];
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_128;
  AssertionResult local_120;
  int local_110 [2];
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_108;
  MemoryResource local_100;
  _Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
  local_f8;
  _Bxty local_f0;
  undefined8 local_e0;
  ulonglong uStack_d8;
  _Func_base<void,pmatests::_anonymous_namespace_::BaseType_*> local_c8 [7];
  _Func_base<void,pmatests::_anonymous_namespace_::BaseType_*> *local_90;
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *local_88;
  _Bxty local_78;
  ulonglong local_60;
  undefined **local_58;
  MemoryResource *local_50;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_100 = (MemoryResource)&___7DefaultMemoryResource_pma__6B_;
  local_110[0] = 0;
  local_110[1] = 0;
  testing::AssertionSuccess(&local_120);
  uVar2._Mypair._Myval2 = local_120.message_._Mypair._Myval2;
  if (local_120.success_ == false) {
    pMVar6 = (Message *)testing::Message::Message((Message *)&local_108);
    if (local_120.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar10 = "";
    }
    else {
      pcVar10 = (char *)local_120.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_120.message_._Mypair._Myval2 + 0x18)) {
        pcVar10 = *(char **)local_120.message_._Mypair._Myval2;
      }
    }
    iVar14 = 0x30;
LAB_14c462f24:
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_f8,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\utils\\TestManagedInstance.cpp"
                        ,iVar14,pcVar10);
    testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
    p_Var12 = &local_f8;
LAB_14c462f4f:
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)p_Var12);
LAB_14c462f59:
    if (local_108._Mypair._Myval2 !=
        (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      puVar11 = (undefined8 *)
                ((longlong)
                 &((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
                  local_108._Mypair._Myval2)->field_0x0 +
                (longlong)*(int *)(*(longlong *)local_108._Mypair._Myval2 + 4));
      (**(code **)*puVar11)(puVar11,1);
    }
  }
  else {
    if (local_120.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_120.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    local_128._Myval2 = local_128._Myval2 & 0xffffffff00000000;
    if (local_110[1] == 0) {
      testing::AssertionSuccess(&local_120);
    }
    else {
      pbVar4 = testing::internal::FormatForComparisonFailureMessage<int,int>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_78,(int *)&local_128,local_110 + 1);
      pbVar5 = testing::internal::FormatForComparisonFailureMessage<int,int>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_f0,local_110 + 1,(int *)&local_128);
      testing::internal::EqFailure(&local_120,"stats.destructed","0",pbVar5,pbVar4,false);
      if (0xf < uStack_d8) {
        pvVar1 = (void *)CONCAT71(local_f0._1_7_,local_f0._Buf[0]);
        uVar13 = uStack_d8 + 1;
        pvVar8 = pvVar1;
        if (0xfff < uVar13) {
          pvVar8 = *(void **)((longlong)pvVar1 + -8);
          uVar13 = uStack_d8 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar8))) goto LAB_14c462901;
        }
        ::operator_delete(pvVar8,uVar13);
      }
      local_f0._Buf[0] = '\0';
      local_e0 = ___xmm_000000000000000f0000000000000000;
      uStack_d8 = _UNK_15076add8;
      if (0xf < local_60) {
        uVar13 = local_60 + 1;
        uVar9 = local_78._Ptr;
        if (0xfff < uVar13) {
          uVar9 = *(undefined8 *)(local_78._Ptr + -8);
          uVar13 = local_60 + 0x28;
          if ((char *)0x1f < local_78._Ptr + (-8 - uVar9)) {
LAB_14c462901:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar9,uVar13);
      }
    }
    uVar2._Mypair._Myval2 = local_120.message_._Mypair._Myval2;
    if (local_120.success_ == false) {
      pMVar6 = (Message *)testing::Message::Message((Message *)&local_108);
      if (local_120.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar10 = "";
      }
      else {
        pcVar10 = (char *)local_120.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_120.message_._Mypair._Myval2 + 0x18)) {
          pcVar10 = *(char **)local_120.message_._Mypair._Myval2;
          iVar14 = 0x31;
          goto LAB_14c462f24;
        }
      }
      iVar14 = 0x31;
      goto LAB_14c462f24;
    }
    if (local_120.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_120.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `pma::impl::PolyAllocator<pmatests::ManagableType,8,pma::DefaultMemoryResource>::
        PolyAllocator<pmatests::`anonymous_namespace'::ManagableType,8,pma::DefaultMemoryResource>'
        ::`2'::_TSS0) {
      _Init_thread_header(&`pma::impl::
                           PolyAllocator<pmatests::ManagableType,8,pma::DefaultMemoryResource>::
                           PolyAllocator<pmatests::`anonymous_namespace'::ManagableType,8,pma::DefaultMemoryResource>'
                           ::`2'::_TSS0);
      if (`pma::impl::PolyAllocator<pmatests::ManagableType,8,pma::DefaultMemoryResource>::
          PolyAllocator<pmatests::`anonymous_namespace'::ManagableType,8,pma::DefaultMemoryResource>'
          ::`2'::_TSS0 == -1) {
        atexit(`pma::impl::
               PolyAllocator<pmatests::`anonymous_namespace'::ManagableType,8,pma::DefaultMemoryResource>
               ::
               PolyAllocator<pmatests::`anonymous_namespace'::ManagableType,8,pma::DefaultMemoryResource>'
               ::__l2::_dynamic_atexit_destructor_for__dmr__);
        _Init_thread_footer(&`pma::impl::
                             PolyAllocator<pmatests::ManagableType,8,pma::DefaultMemoryResource>::
                             PolyAllocator<pmatests::`anonymous_namespace'::ManagableType,8,pma::DefaultMemoryResource>'
                             ::`2'::_TSS0);
      }
    }
    pbVar3 = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             (**(code **)((longlong)local_100 + 8))(&local_100,0x10,8);
    *(undefined ***)pbVar3 = &pmatests::ManagableType::_vftable_;
    *(int **)&pbVar3->field_0x8 = local_110;
    local_110[0] = local_110[0] + 1;
    local_58 = &std::
                _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<pmatests::BaseType,std::function<void___cdecl(pmatests::`anonymous_namespace'::BaseType_*)>_>,pmatests::`anonymous_namespace'::ManagableType,pmatests::A0x772c9fe9::BaseType>::create<pmatests::`anonymous_namespace'::Stats_&>'::`2'::<lambda_1>,void,pmatests::A0x772c9fe9::BaseType_*>
                ::_vftable_;
    local_50 = &local_100;
    local_90 = (_Func_base<void,pmatests::_anonymous_namespace_::BaseType_*> *)0x0;
    local_20 = &local_58;
    local_90 = std::
               _Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<pmatests::`anonymous_namespace'::BaseType,std::function<void___cdecl(pmatests::`anonymous_namespace'::BaseType_*)>_>,pmatests::`anonymous_namespace'::ManagableType,pmatests::A0x772c9fe9::BaseType>::create<pmatests::`anonymous_namespace'::Stats_&>'::__l2::<lambda_1>,void,pmatests::A0x772c9fe9::BaseType_*>
               ::_Move(&local_58,local_c8);
    if (local_20 != (undefined ***)0x0) {
      (*(code *)(*local_20)[4])(local_20,local_20 != &local_58);
    }
    local_128._Myval2._0_4_ = 1;
    local_88 = pbVar3;
    if (local_110[0] == 1) {
      testing::AssertionSuccess(&local_120);
    }
    else {
      pbVar4 = testing::internal::FormatForComparisonFailureMessage<int,int>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_78,(int *)&local_128,local_110);
      pbVar5 = testing::internal::FormatForComparisonFailureMessage<int,int>
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_f0,local_110,(int *)&local_128);
      testing::internal::EqFailure(&local_120,"stats.constructed","1",pbVar5,pbVar4,false);
      if (0xf < uStack_d8) {
        pvVar1 = (void *)CONCAT71(local_f0._1_7_,local_f0._Buf[0]);
        uVar13 = uStack_d8 + 1;
        pvVar8 = pvVar1;
        if (0xfff < uVar13) {
          pvVar8 = *(void **)((longlong)pvVar1 + -8);
          uVar13 = uStack_d8 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar8))) goto LAB_14c462ad7;
        }
        ::operator_delete(pvVar8,uVar13);
      }
      local_f0._Buf[0] = '\0';
      local_e0 = ___xmm_000000000000000f0000000000000000;
      uStack_d8 = _UNK_15076add8;
      if (0xf < local_60) {
        uVar13 = local_60 + 1;
        uVar9 = local_78._Ptr;
        if (0xfff < uVar13) {
          uVar9 = *(undefined8 *)(local_78._Ptr + -8);
          uVar13 = local_60 + 0x28;
          if ((char *)0x1f < local_78._Ptr + (-8 - uVar9)) {
LAB_14c462ad7:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)uVar9,uVar13);
      }
    }
    uVar2._Mypair._Myval2 = local_120.message_._Mypair._Myval2;
    if (local_120.success_ == false) {
      pMVar6 = (Message *)testing::Message::Message((Message *)&local_108);
      if (local_120.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar10 = "";
      }
      else {
        pcVar10 = (char *)local_120.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_120.message_._Mypair._Myval2 + 0x18)) {
          pcVar10 = *(char **)local_120.message_._Mypair._Myval2;
        }
      }
      pAVar7 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_f8,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\utils\\TestManagedInstance.cpp"
                          ,0x34,pcVar10);
      testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_f8);
      if (local_108._Mypair._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar11 = (undefined8 *)
                  ((longlong)local_108._Mypair._Myval2 +
                  (longlong)*(int *)(*(longlong *)local_108._Mypair._Myval2 + 4));
        (**(code **)*puVar11)(puVar11,1);
      }
      if (local_120.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_120.message_._Mypair._Myval2);
        ::operator_delete((void *)local_120.message_._Mypair._Myval2,0x20);
      }
      if (local_88 != (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
      {
        local_128._Myval2 = local_88;
        if (local_90 == (_Func_base<void,pmatests::_anonymous_namespace_::BaseType_*> *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        p_Var12 = &local_128;
        local_128._Myval2 = local_88;
LAB_14c462dca:
        (**(code **)((longlong)*local_90 + 0x10))(local_90,p_Var12);
      }
LAB_14c462dd0:
      if (local_90 != (_Func_base<void,pmatests::_anonymous_namespace_::BaseType_*> *)0x0) {
        (**(code **)((longlong)*local_90 + 0x20))(local_90,local_90 != local_c8);
        local_90 = (_Func_base<void,pmatests::_anonymous_namespace_::BaseType_*> *)0x0;
      }
      goto LAB_14c462f91;
    }
    if (local_120.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_120.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    local_128._Myval2 = local_128._Myval2 & 0xffffffff00000000;
    testing::internal::EqHelper::Compare<int,int,0>
              (&local_120,"stats.destructed","0",local_110 + 1,(int *)&local_128);
    uVar2._Mypair._Myval2 = local_120.message_._Mypair._Myval2;
    if (local_120.success_ == false) {
      pMVar6 = (Message *)testing::Message::Message((Message *)&local_128);
      if (local_120.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar10 = "";
      }
      else {
        pcVar10 = (char *)local_120.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_120.message_._Mypair._Myval2 + 0x18)) {
          pcVar10 = *(char **)local_120.message_._Mypair._Myval2;
        }
      }
      pAVar7 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_108,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\utils\\TestManagedInstance.cpp"
                          ,0x35,pcVar10);
      testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_108);
      if (local_128._Myval2 !=
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        puVar11 = (undefined8 *)
                  ((longlong)&(local_128._Myval2)->field_0x0 +
                  (longlong)*(int *)(*(longlong *)local_128._Myval2 + 4));
        (**(code **)*puVar11)(puVar11,1);
      }
      if (local_120.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_120.message_._Mypair._Myval2);
        ::operator_delete((void *)local_120.message_._Mypair._Myval2,0x20);
      }
      if (local_88 != (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0)
      {
        local_f8._Myval2 = local_88;
        if (local_90 == (_Func_base<void,pmatests::_anonymous_namespace_::BaseType_*> *)0x0) {
          std::_Xbad_function_call();
          return;
        }
        p_Var12 = &local_f8;
        goto LAB_14c462dca;
      }
      goto LAB_14c462dd0;
    }
    if (local_120.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_120.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    if (local_88 != (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_128._Myval2 = local_88;
      if (local_90 == (_Func_base<void,pmatests::_anonymous_namespace_::BaseType_*> *)0x0) {
        std::_Xbad_function_call();
        return;
      }
      (**(code **)((longlong)*local_90 + 0x10))(local_90,&local_128);
    }
    if (local_90 != (_Func_base<void,pmatests::_anonymous_namespace_::BaseType_*> *)0x0) {
      (**(code **)((longlong)*local_90 + 0x20))(local_90,local_90 != local_c8);
    }
    local_128._Myval2._0_4_ = 1;
    testing::internal::EqHelper::Compare<int,int,0>
              (&local_120,"stats.constructed","1",local_110,(int *)&local_128);
    uVar2._Mypair._Myval2 = local_120.message_._Mypair._Myval2;
    if (local_120.success_ == false) {
      pMVar6 = (Message *)testing::Message::Message((Message *)&local_128);
      if (local_120.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar10 = "";
      }
      else {
        pcVar10 = (char *)local_120.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_120.message_._Mypair._Myval2 + 0x18)) {
          pcVar10 = *(char **)local_120.message_._Mypair._Myval2;
        }
      }
      pAVar7 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_108,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\utils\\TestManagedInstance.cpp"
                          ,0x37,pcVar10);
      testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_108);
      local_108._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(_Compressed_pair<std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_*,1>
              )local_128._Myval2;
      goto LAB_14c462f59;
    }
    if (local_120.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_120.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar2._Mypair._Myval2,0x20);
    }
    local_128._Myval2._0_4_ = 1;
    testing::internal::EqHelper::Compare<int,int,0>
              (&local_120,"stats.destructed","1",local_110 + 1,(int *)&local_128);
    if (local_120.success_ == false) {
      pMVar6 = (Message *)testing::Message::Message((Message *)&local_108);
      if (local_120.message_._Mypair._Myval2 ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar10 = "";
      }
      else {
        pcVar10 = (char *)local_120.message_._Mypair._Myval2;
        if (0xf < *(ulong64 *)((longlong)local_120.message_._Mypair._Myval2 + 0x18)) {
          pcVar10 = *(char **)local_120.message_._Mypair._Myval2;
        }
      }
      pAVar7 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_128,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\utils\\TestManagedInstance.cpp"
                          ,0x38,pcVar10);
      testing::internal::AssertHelper::operator=(pAVar7,pMVar6);
      p_Var12 = &local_128;
      goto LAB_14c462f4f;
    }
  }
  if (local_120.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_120.message_._Mypair._Myval2);
    ::operator_delete((void *)local_120.message_._Mypair._Myval2,0x20);
  }
LAB_14c462f91:
  pma::MemoryResource::~MemoryResource(&local_100);
  return;
}

// `scalar_deleting_destructor' @ 14c463010

void * __thiscall
ManagedInstanceTest_UniqueInstance_Test::_scalar_deleting_destructor_
          (ManagedInstanceTest_UniqueInstance_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c463050

Test * __thiscall
testing::internal::TestFactoryImpl<ManagedInstanceTest_UniqueInstance_Test>::CreateTest
          (TestFactoryImpl<ManagedInstanceTest_UniqueInstance_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ManagedInstanceTest_UniqueInstance_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c463090

void * __thiscall
testing::internal::TestFactoryImpl<ManagedInstanceTest_UniqueInstance_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ManagedInstanceTest_UniqueInstance_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ManagedInstanceTest_UniqueInstance_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c4630d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ManagedInstanceTest_SharedInstance_Test::TestBody(ManagedInstanceTest_SharedInstance_Test *this)

{
  int *piVar1;
  void *pvVar2;
  longlong lVar3;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  Message *pMVar9;
  AssertHelper *pAVar10;
  void *pvVar11;
  undefined8 uVar12;
  char *pcVar13;
  ulong64 uVar14;
  longlong *plVar15;
  int iVar16;
  undefined1 auStackY_b8 [32];
  AssertHelper local_88;
  AssertionResult local_80;
  unique_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_70;
  int local_68 [2];
  MemoryResource local_60;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  plVar15 = (longlong *)0x0;
  local_60 = (MemoryResource)&___7DefaultMemoryResource_pma__6B_;
  local_68[0] = 0;
  local_68[1] = 0;
  testing::AssertionSuccess(&local_80);
  uVar4._Mypair._Myval2 = local_80.message_._Mypair._Myval2;
  if (local_80.success_ == false) {
    pMVar9 = (Message *)testing::Message::Message((Message *)&local_88);
    if (local_80.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar13 = "";
    }
    else {
      pcVar13 = (char *)local_80.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_80.message_._Mypair._Myval2 + 0x18)) {
        pcVar13 = *(char **)local_80.message_._Mypair._Myval2;
        iVar16 = 0x3e;
        goto LAB_14c4639cb;
      }
    }
    iVar16 = 0x3e;
LAB_14c4639cb:
    pAVar10 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        ((AssertHelper *)&local_70,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\utils\\TestManagedInstance.cpp"
                         ,iVar16,pcVar13);
    testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_70);
    plVar15 = (longlong *)CONCAT44(local_88.data_._4_4_,local_88.data_._0_4_);
    if (plVar15 != (longlong *)0x0) {
      puVar5 = (undefined8 *)((longlong)*(int *)(*plVar15 + 4) + (longlong)plVar15);
      (**(code **)*puVar5)(puVar5,1);
    }
    if (local_80.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_80.message_._Mypair._Myval2);
      ::operator_delete((void *)local_80.message_._Mypair._Myval2,0x20);
    }
    pma::MemoryResource::~MemoryResource(&local_60);
    return;
  }
  if (local_80.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_80.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
  }
  local_88.data_._0_4_ = 0;
  if (local_68[1] == 0) {
    testing::AssertionSuccess(&local_80);
  }
  else {
    pbVar7 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,(int *)&local_88,local_68 + 1);
    pbVar8 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58
                        ,local_68 + 1,(int *)&local_88);
    testing::internal::EqFailure(&local_80,"stats.destructed","0",pbVar8,pbVar7,false);
    if (0xf < uStack_40) {
      pvVar2 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
      uVar14 = uStack_40 + 1;
      pvVar11 = pvVar2;
      if (0xfff < uVar14) {
        pvVar11 = *(void **)((longlong)pvVar2 + -8);
        uVar14 = uStack_40 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar11))) goto LAB_14c463213;
      }
      ::operator_delete(pvVar11,uVar14);
    }
    local_58._Buf[0] = '\0';
    local_48 = ___xmm_000000000000000f0000000000000000;
    uStack_40 = _UNK_15076add8;
    if (0xf < local_20) {
      uVar14 = local_20 + 1;
      uVar12 = local_38._Ptr;
      if (0xfff < uVar14) {
        uVar12 = *(undefined8 *)(local_38._Ptr + -8);
        uVar14 = local_20 + 0x28;
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar12)) {
LAB_14c463213:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar12,uVar14);
    }
  }
  uVar4._Mypair._Myval2 = local_80.message_._Mypair._Myval2;
  if (local_80.success_ == false) {
    pMVar9 = (Message *)testing::Message::Message((Message *)&local_88);
    if (local_80.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar13 = "";
    }
    else {
      pcVar13 = (char *)local_80.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_80.message_._Mypair._Myval2 + 0x18)) {
        pcVar13 = *(char **)local_80.message_._Mypair._Myval2;
      }
    }
    iVar16 = 0x3f;
    goto LAB_14c4639cb;
  }
  if (local_80.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_80.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `pma::impl::PolyAllocator<pmatests::ManagableType,8,pma::DefaultMemoryResource>::
       PolyAllocator<pmatests::`anonymous_namespace'::ManagableType,8,pma::DefaultMemoryResource>'::
       `2'::_TSS0) &&
     (_Init_thread_header(&`pma::impl::
                           PolyAllocator<pmatests::ManagableType,8,pma::DefaultMemoryResource>::
                           PolyAllocator<pmatests::`anonymous_namespace'::ManagableType,8,pma::DefaultMemoryResource>'
                           ::`2'::_TSS0),
     `pma::impl::PolyAllocator<pmatests::ManagableType,8,pma::DefaultMemoryResource>::
     PolyAllocator<pmatests::`anonymous_namespace'::ManagableType,8,pma::DefaultMemoryResource>'::
     `2'::_TSS0 == -1)) {
    atexit(`pma::impl::
           PolyAllocator<pmatests::`anonymous_namespace'::ManagableType,8,pma::DefaultMemoryResource>
           ::
           PolyAllocator<pmatests::`anonymous_namespace'::ManagableType,8,pma::DefaultMemoryResource>'
           ::__l2::_dynamic_atexit_destructor_for__dmr__);
    _Init_thread_footer(&`pma::impl::
                         PolyAllocator<pmatests::ManagableType,8,pma::DefaultMemoryResource>::
                         PolyAllocator<pmatests::`anonymous_namespace'::ManagableType,8,pma::DefaultMemoryResource>'
                         ::`2'::_TSS0);
  }
  puVar5 = (undefined8 *)(**(code **)((longlong)local_60 + 8))(&local_60,0x10,8);
  *puVar5 = &pmatests::ManagableType::_vftable_;
  puVar5[1] = local_68;
  local_68[0] = local_68[0] + 1;
  plVar6 = ::operator_new(0x20);
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)
              &std::
               _Ref_count_resource<pmatests::ManagableType_*,`pma::impl::ManagedInstance<std::shared_ptr<pmatests::`anonymous_namespace'::BaseType>,pmatests::`anonymous_namespace'::ManagableType,pmatests::A0x772c9fe9::BaseType>::create<pmatests::`anonymous_namespace'::Stats_&>'::`2'::<lambda_1>_>
               ::_vftable_;
    plVar6[2] = (longlong)&local_60;
    plVar6[3] = (longlong)puVar5;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    plVar15 = plVar6;
  }
  local_88.data_._0_4_ = 1;
  if (local_68[0] == 1) {
    testing::AssertionSuccess(&local_80);
  }
  else {
    pbVar7 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38
                        ,(int *)&local_88,local_68);
    pbVar8 = testing::internal::FormatForComparisonFailureMessage<int,int>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58
                        ,local_68,(int *)&local_88);
    testing::internal::EqFailure(&local_80,"stats.constructed","1",pbVar8,pbVar7,false);
    if (0xf < uStack_40) {
      pvVar2 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
      uVar14 = uStack_40 + 1;
      pvVar11 = pvVar2;
      if (0xfff < uVar14) {
        pvVar11 = *(void **)((longlong)pvVar2 + -8);
        uVar14 = uStack_40 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar11))) goto LAB_14c4633d0;
      }
      ::operator_delete(pvVar11,uVar14);
    }
    local_58._Buf[0] = '\0';
    local_48 = ___xmm_000000000000000f0000000000000000;
    uStack_40 = _UNK_15076add8;
    if (0xf < local_20) {
      uVar14 = local_20 + 1;
      uVar12 = local_38._Ptr;
      if (0xfff < uVar14) {
        uVar12 = *(undefined8 *)(local_38._Ptr + -8);
        uVar14 = local_20 + 0x28;
        if ((char *)0x1f < local_38._Ptr + (-8 - uVar12)) {
LAB_14c4633d0:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar12,uVar14);
    }
  }
  uVar4._Mypair._Myval2 = local_80.message_._Mypair._Myval2;
  if (local_80.success_ == false) {
    pMVar9 = (Message *)testing::Message::Message((Message *)&local_88);
    if (local_80.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar13 = "";
    }
    else {
      pcVar13 = (char *)local_80.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_80.message_._Mypair._Myval2 + 0x18)) {
        pcVar13 = *(char **)local_80.message_._Mypair._Myval2;
      }
    }
    iVar16 = 0x45;
LAB_14c4638cc:
    pAVar10 = (AssertHelper *)
              testing::internal::AssertHelper::AssertHelper
                        ((AssertHelper *)&local_70,kFatalFailure,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\utils\\TestManagedInstance.cpp"
                         ,iVar16,pcVar13);
    testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_70);
    plVar6 = (longlong *)CONCAT44(local_88.data_._4_4_,local_88.data_._0_4_);
    if (plVar6 != (longlong *)0x0) {
      puVar5 = (undefined8 *)((longlong)*(int *)(*plVar6 + 4) + (longlong)plVar6);
      (**(code **)*puVar5)(puVar5,1);
    }
    if (local_80.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_80.message_._Mypair._Myval2);
      ::operator_delete((void *)local_80.message_._Mypair._Myval2,0x20);
    }
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar15 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar16 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15);
        }
      }
      LOCK();
      plVar6 = plVar15 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar16 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15);
        }
      }
    }
    pma::MemoryResource::~MemoryResource(&local_60);
    return;
  }
  if (local_80.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_80.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
  }
  local_88.data_._0_4_ = 0;
  testing::internal::EqHelper::Compare<int,int,0>
            (&local_80,"stats.destructed","0",local_68 + 1,(int *)&local_88);
  uVar4._Mypair._Myval2 = local_80.message_._Mypair._Myval2;
  if (local_80.success_ == false) {
    pMVar9 = (Message *)testing::Message::Message((Message *)&local_88);
    if (local_80.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar13 = "";
    }
    else {
      pcVar13 = (char *)local_80.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_80.message_._Mypair._Myval2 + 0x18)) {
        pcVar13 = *(char **)local_80.message_._Mypair._Myval2;
        iVar16 = 0x46;
        goto LAB_14c4638cc;
      }
    }
    iVar16 = 0x46;
    goto LAB_14c4638cc;
  }
  if (local_80.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_80.message_._Mypair._Myval2);
    ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar15 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15);
      }
    }
  }
  local_88.data_._0_4_ = 1;
  testing::internal::EqHelper::Compare<int,int,0>
            (&local_80,"stats.constructed","1",local_68,(int *)&local_88);
  uVar4._Mypair._Myval2 = local_80.message_._Mypair._Myval2;
  if (local_80.success_ == false) {
    pMVar9 = (Message *)testing::Message::Message((Message *)&local_88);
    if (local_80.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar13 = "";
    }
    else {
      pcVar13 = (char *)local_80.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_80.message_._Mypair._Myval2 + 0x18)) {
        pcVar13 = *(char **)local_80.message_._Mypair._Myval2;
      }
    }
    iVar16 = 0x48;
  }
  else {
    if (local_80.message_._Mypair._Myval2 !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 local_80.message_._Mypair._Myval2);
      ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
    }
    local_88.data_._0_4_ = 0;
    testing::internal::EqHelper::Compare<int,int,0>
              (&local_80,"stats.destructed","0",local_68 + 1,(int *)&local_88);
    uVar4._Mypair._Myval2 = local_80.message_._Mypair._Myval2;
    if (local_80.success_ != false) {
      if (local_80.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_80.message_._Mypair._Myval2);
        ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
      }
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar15 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15);
          }
        }
      }
      local_88.data_._0_4_ = 1;
      testing::internal::EqHelper::Compare<int,int,0>
                (&local_80,"stats.constructed","1",local_68,(int *)&local_88);
      uVar4._Mypair._Myval2 = local_80.message_._Mypair._Myval2;
      if (local_80.success_ == false) {
        pMVar9 = (Message *)testing::Message::Message((Message *)&local_88);
        if (local_80.message_._Mypair._Myval2 ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar13 = "";
        }
        else {
          pcVar13 = (char *)local_80.message_._Mypair._Myval2;
          if (0xf < *(ulong64 *)((longlong)local_80.message_._Mypair._Myval2 + 0x18)) {
            pcVar13 = *(char **)local_80.message_._Mypair._Myval2;
          }
        }
        pAVar10 = (AssertHelper *)
                  testing::internal::AssertHelper::AssertHelper
                            ((AssertHelper *)&local_70,kFatalFailure,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\utils\\TestManagedInstance.cpp"
                             ,0x4b,pcVar13);
        testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
        testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_70);
        plVar15 = (longlong *)CONCAT44(local_88.data_._4_4_,local_88.data_._0_4_);
        if (plVar15 != (longlong *)0x0) {
          puVar5 = (undefined8 *)((longlong)*(int *)(*plVar15 + 4) + (longlong)plVar15);
          (**(code **)*puVar5)(puVar5,1);
        }
      }
      else {
        if (local_80.message_._Mypair._Myval2 !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_80.message_._Mypair._Myval2);
          ::operator_delete((void *)uVar4._Mypair._Myval2,0x20);
        }
        local_88.data_._0_4_ = 1;
        testing::internal::EqHelper::Compare<int,int,0>
                  (&local_80,"stats.destructed","1",local_68 + 1,(int *)&local_88);
        if (local_80.success_ == false) {
          pMVar9 = (Message *)testing::Message::Message((Message *)&local_70);
          if (local_80.message_._Mypair._Myval2 ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar13 = "";
          }
          else {
            pcVar13 = (char *)local_80.message_._Mypair._Myval2;
            if (0xf < *(ulong64 *)((longlong)local_80.message_._Mypair._Myval2 + 0x18)) {
              pcVar13 = *(char **)local_80.message_._Mypair._Myval2;
            }
          }
          pAVar10 = (AssertHelper *)
                    testing::internal::AssertHelper::AssertHelper
                              (&local_88,kFatalFailure,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\utils\\TestManagedInstance.cpp"
                               ,0x4c,pcVar13);
          testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
          testing::internal::AssertHelper::~AssertHelper(&local_88);
          if (local_70._Mypair._Myval2 !=
              (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            puVar5 = (undefined8 *)
                     ((longlong)*(int *)(*(longlong *)local_70._Mypair._Myval2 + 4) +
                     (longlong)local_70._Mypair._Myval2);
            (**(code **)*puVar5)(puVar5,1);
          }
          if (local_80.message_._Mypair._Myval2 !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_80.message_._Mypair._Myval2);
            ::operator_delete((void *)local_80.message_._Mypair._Myval2,0x20);
          }
          goto LAB_14c46382e;
        }
      }
      if (local_80.message_._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_80.message_._Mypair._Myval2);
        ::operator_delete((void *)local_80.message_._Mypair._Myval2,0x20);
      }
      goto LAB_14c46382e;
    }
    pMVar9 = (Message *)testing::Message::Message((Message *)&local_88);
    if (local_80.message_._Mypair._Myval2 ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar13 = "";
    }
    else {
      pcVar13 = (char *)local_80.message_._Mypair._Myval2;
      if (0xf < *(ulong64 *)((longlong)local_80.message_._Mypair._Myval2 + 0x18)) {
        pcVar13 = *(char **)local_80.message_._Mypair._Myval2;
        iVar16 = 0x49;
        goto LAB_14c463799;
      }
    }
    iVar16 = 0x49;
  }
LAB_14c463799:
  pAVar10 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      ((AssertHelper *)&local_70,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\pmatests\\utils\\TestManagedInstance.cpp"
                       ,iVar16,pcVar13);
  testing::internal::AssertHelper::operator=(pAVar10,pMVar9);
  testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_70);
  plVar6 = (longlong *)CONCAT44(local_88.data_._4_4_,local_88.data_._0_4_);
  if (plVar6 != (longlong *)0x0) {
    puVar5 = (undefined8 *)((longlong)*(int *)(*plVar6 + 4) + (longlong)plVar6);
    (**(code **)*puVar5)(puVar5,1);
  }
  if (local_80.message_._Mypair._Myval2 !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               local_80.message_._Mypair._Myval2);
    ::operator_delete((void *)local_80.message_._Mypair._Myval2,0x20);
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar15 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15);
      }
    }
  }
LAB_14c46382e:
  pma::MemoryResource::~MemoryResource(&local_60);
  return;
}

// `scalar_deleting_destructor' @ 14c463ac0

void * __thiscall
ManagedInstanceTest_SharedInstance_Test::_scalar_deleting_destructor_
          (ManagedInstanceTest_SharedInstance_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c463b00

Test * __thiscall
testing::internal::TestFactoryImpl<ManagedInstanceTest_SharedInstance_Test>::CreateTest
          (TestFactoryImpl<ManagedInstanceTest_SharedInstance_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7ManagedInstanceTest_SharedInstance_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c463b40

void * __thiscall
testing::internal::TestFactoryImpl<ManagedInstanceTest_SharedInstance_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<ManagedInstanceTest_SharedInstance_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<ManagedInstanceTest_SharedInstance_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// ~_Ref_count_resource<pmatests::`anonymous_namespace'::ManagableType_*,`pma::impl::ManagedInstance<std::shared_ptr<pmatests::`anonymous_namespace'::BaseType>,pmatests::`anonymous_namespace'::ManagableType,pmatests::A0x772c9fe9::BaseType>::create<pmatests::`anonymous_namespace'::Stats_&>'::__l2::<lambda_1>_> @ 14c463b80

void __thiscall
std::
_Ref_count_resource<pmatests::`anonymous_namespace'::ManagableType_*,`pma::impl::ManagedInstance<std::shared_ptr<pmatests::`anonymous_namespace'::BaseType>,pmatests::`anonymous_namespace'::ManagableType,pmatests::A0x772c9fe9::BaseType>::create<pmatests::`anonymous_namespace'::Stats_&>'::__l2::<lambda_1>_>
::
~_Ref_count_resource<pmatests::_anonymous_namespace_::ManagableType_*,_pma::impl::ManagedInstance<std::shared_ptr<pmatests::_anonymous_namespace_::BaseType>,pmatests::_anonymous_namespace_::ManagableType,pmatests::A0x772c9fe9::BaseType>::create<pmatests::_anonymous_namespace_::Stats_&>_::__l2::<lambda_1>_>
          (void *this)

{
  return;
}

// ~BaseType @ 14c463b90

void __thiscall pmatests::`anonymous_namespace'::BaseType::~BaseType(void *this)

{
  return;
}

// `scalar_deleting_destructor' @ 14c463ba0

void * __thiscall
std::
_Ref_count_resource<pmatests::`anonymous_namespace'::ManagableType_*,`pma::impl::ManagedInstance<std::shared_ptr<pmatests::`anonymous_namespace'::BaseType>,pmatests::`anonymous_namespace'::ManagableType,pmatests::A0x772c9fe9::BaseType>::create<pmatests::`anonymous_namespace'::Stats_&>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c463bd0

void * __thiscall
pmatests::`anonymous_namespace'::BaseType::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c463c00

void * __thiscall
pmatests::`anonymous_namespace'::ManagableType::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  int *piVar1;
  
  *(undefined ***)this = &pmatests::ManagableType::_vftable_;
  piVar1 = (int *)(*(longlong *)((longlong)this + 8) + 4);
  *piVar1 = *piVar1 + 1;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// _Copy @ 14c463c40

_Func_base<void,pmatests::_anonymous_namespace_::BaseType_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<pmatests::`anonymous_namespace'::BaseType,std::function<void___cdecl(pmatests::`anonymous_namespace'::BaseType_*)>_>,pmatests::`anonymous_namespace'::ManagableType,pmatests::A0x772c9fe9::BaseType>::create<pmatests::`anonymous_namespace'::Stats_&>'::__l2::<lambda_1>,void,pmatests::A0x772c9fe9::BaseType_*>
::_Copy(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<pmatests::BaseType,std::function<void___cdecl(pmatests::`anonymous_namespace'::BaseType_*)>_>,pmatests::`anonymous_namespace'::ManagableType,pmatests::A0x772c9fe9::BaseType>::create<pmatests::`anonymous_namespace'::Stats_&>'::`2'::<lambda_1>,void,pmatests::A0x772c9fe9::BaseType_*>
        ::_vftable_;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Delete_this @ 14c463c60

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<pmatests::`anonymous_namespace'::BaseType,std::function<void___cdecl(pmatests::`anonymous_namespace'::BaseType_*)>_>,pmatests::`anonymous_namespace'::ManagableType,pmatests::A0x772c9fe9::BaseType>::create<pmatests::`anonymous_namespace'::Stats_&>'::__l2::<lambda_1>,void,pmatests::A0x772c9fe9::BaseType_*>
::_Delete_this(void *this,bool param_1)

{
  if (param_1) {
    ::operator_delete(this,0x10);
    return;
  }
  return;
}

// _Delete_this @ 14c463c80

void __thiscall
std::
_Ref_count_resource<pmatests::`anonymous_namespace'::ManagableType_*,`pma::impl::ManagedInstance<std::shared_ptr<pmatests::`anonymous_namespace'::BaseType>,pmatests::`anonymous_namespace'::ManagableType,pmatests::A0x772c9fe9::BaseType>::create<pmatests::`anonymous_namespace'::Stats_&>'::__l2::<lambda_1>_>
::_Delete_this(void *this)

{
  if (this != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014c463c8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x10))(this,1);
    return;
  }
  return;
}

// _Destroy @ 14c463ca0

void __thiscall
std::
_Ref_count_resource<pmatests::`anonymous_namespace'::ManagableType_*,`pma::impl::ManagedInstance<std::shared_ptr<pmatests::`anonymous_namespace'::BaseType>,pmatests::`anonymous_namespace'::ManagableType,pmatests::A0x772c9fe9::BaseType>::create<pmatests::`anonymous_namespace'::Stats_&>'::__l2::<lambda_1>_>
::_Destroy(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x18);
  (**(code **)*puVar1)(puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00014c463cdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))
            (*(longlong **)((longlong)this + 0x10),puVar1,0x10,8);
  return;
}

// _Do_call @ 14c463cf0

void __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<pmatests::`anonymous_namespace'::BaseType,std::function<void___cdecl(pmatests::`anonymous_namespace'::BaseType_*)>_>,pmatests::`anonymous_namespace'::ManagableType,pmatests::A0x772c9fe9::BaseType>::create<pmatests::`anonymous_namespace'::Stats_&>'::__l2::<lambda_1>,void,pmatests::A0x772c9fe9::BaseType_*>
::_Do_call(void *this,BaseType **param_1)

{
  BaseType *pBVar1;
  
  pBVar1 = *param_1;
  (**(code **)*pBVar1)(pBVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00014c463d2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))
            (*(longlong **)((longlong)this + 8),pBVar1,0x10,8);
  return;
}

// _Get @ 14c463d40

void * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<pmatests::`anonymous_namespace'::BaseType,std::function<void___cdecl(pmatests::`anonymous_namespace'::BaseType_*)>_>,pmatests::`anonymous_namespace'::ManagableType,pmatests::A0x772c9fe9::BaseType>::create<pmatests::`anonymous_namespace'::Stats_&>'::__l2::<lambda_1>,void,pmatests::A0x772c9fe9::BaseType_*>
::_Get(void *this)

{
  return (void *)((longlong)this + 8);
}

// _Get_deleter @ 14c463d50

void * __thiscall
std::
_Ref_count_resource<pmatests::`anonymous_namespace'::ManagableType_*,`pma::impl::ManagedInstance<std::shared_ptr<pmatests::`anonymous_namespace'::BaseType>,pmatests::`anonymous_namespace'::ManagableType,pmatests::A0x772c9fe9::BaseType>::create<pmatests::`anonymous_namespace'::Stats_&>'::__l2::<lambda_1>_>
::_Get_deleter(void *this,type_info *param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = __std_type_info_compare(&param_1->_Data);
  pvVar2 = (void *)0x0;
  if (iVar1 == 0) {
    pvVar2 = (void *)((longlong)this + 0x10);
  }
  return pvVar2;
}

// _Move @ 14c463d90

_Func_base<void,pmatests::_anonymous_namespace_::BaseType_*> * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<pmatests::`anonymous_namespace'::BaseType,std::function<void___cdecl(pmatests::`anonymous_namespace'::BaseType_*)>_>,pmatests::`anonymous_namespace'::ManagableType,pmatests::A0x772c9fe9::BaseType>::create<pmatests::`anonymous_namespace'::Stats_&>'::__l2::<lambda_1>,void,pmatests::A0x772c9fe9::BaseType_*>
::_Move(void *this,void *param_1)

{
  *(undefined ***)param_1 =
       &_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<pmatests::BaseType,std::function<void___cdecl(pmatests::`anonymous_namespace'::BaseType_*)>_>,pmatests::`anonymous_namespace'::ManagableType,pmatests::A0x772c9fe9::BaseType>::create<pmatests::`anonymous_namespace'::Stats_&>'::`2'::<lambda_1>,void,pmatests::A0x772c9fe9::BaseType_*>
        ::_vftable_;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1;
}

// _Target_type @ 14c463db0

type_info * __thiscall
std::
_Func_impl_no_alloc<`pma::impl::ManagedInstance<std::unique_ptr<pmatests::`anonymous_namespace'::BaseType,std::function<void___cdecl(pmatests::`anonymous_namespace'::BaseType_*)>_>,pmatests::`anonymous_namespace'::ManagableType,pmatests::A0x772c9fe9::BaseType>::create<pmatests::`anonymous_namespace'::Stats_&>'::__l2::<lambda_1>,void,pmatests::A0x772c9fe9::BaseType_*>
::_Target_type(void *this)

{
  return (type_info *)
         &`public:_class_std::unique_ptr<pmatests::_anon_772C9FE9::BaseType,std::function<void___cdecl(pmatests::_anon_772C9FE9::BaseType*___ptr64)>_>___cdecl_pma::impl::ManagedInstance<std::unique_ptr<pmatests::_anon_772C9FE9::BaseType,std::function<void___cdecl(pmatests::_anon_772C9FE9::BaseType*___ptr64)>_>,pmatests::_anon_772C9FE9::ManagableType,pmatests::_anon_772C9FE9::BaseType>::create<pmatests::_anon_772C9FE9::Stats&___ptr64>(pmatests::_anon_772C9FE9::Stats&___ptr64)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}

// `dynamic_atexit_destructor_for_'dmr'' @ 15044df80

void __cdecl
`pma::impl::
PolyAllocator<pmatests::`anonymous_namespace'::ManagableType,8,pma::DefaultMemoryResource>::
PolyAllocator<pmatests::`anonymous_namespace'::ManagableType,8,pma::DefaultMemoryResource>'::__l2::
_dynamic_atexit_destructor_for__dmr__(void)

{
  pma::MemoryResource::~MemoryResource
            ((MemoryResource *)
             &PolyAllocator<pmatests::ManagableType,8,pma::DefaultMemoryResource>::
              PolyAllocator<pmatests::`anonymous_namespace'::ManagableType,8,pma::DefaultMemoryResource>'
              ::`2'::dmr);
  return;
}

