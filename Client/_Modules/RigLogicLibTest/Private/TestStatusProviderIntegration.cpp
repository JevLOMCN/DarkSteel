// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 29

// test_info_'' @ 141377a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'StatusProviderIntegrationTest_SetAndCheckStatus_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VStatusProviderIntegrationTest_SetAndCheckStatus_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\sctests\\TestStatusProviderIntegration.cpp"
                      ,0xd);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\sctests\\TestStatusProviderIntegration.cpp"
                      ,0xd);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x84;
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
  *(undefined4 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_4_;
  pcVar6[0x84] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f0000000000000084;
  uStack_40 = _UNK_152881918;
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
  *(undefined4 *)(local_58._Ptr + 0x80) = *(undefined4 *)(pcVar6 + 0x80);
  *(local_58._Ptr + 0x84) = pcVar6[0x84];
  local_38 = 0xd;
  StatusProviderIntegrationTest_SetAndCheckStatus_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("StatusProviderIntegrationTest","SetAndCheckStatus",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// test_info_'' @ 141377c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'StatusProviderIntegrationTest_UsePreSetHook_Test::test_info___(void)

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
              ___7__TestFactoryImpl_VStatusProviderIntegrationTest_UsePreSetHook_Test___internal_testing__6B_
    ;
  }
  p_Var3 = testing::internal::SuiteApiResolver<testing::Test>::GetTearDownCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\sctests\\TestStatusProviderIntegration.cpp"
                      ,0x24);
  p_Var4 = testing::internal::SuiteApiResolver<testing::Test>::GetSetUpCaseOrSuite
                     ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\sctests\\TestStatusProviderIntegration.cpp"
                      ,0x24);
  pvVar5 = testing::internal::GetTestTypeId();
  local_28 = 0;
  pcVar6 = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  uVar1 = ::s_C__Workspace_UnrealEngine_Engin._8_8_;
  local_20 = 0x84;
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
  *(undefined4 *)(pcVar6 + 0x80) = ::s_C__Workspace_UnrealEngine_Engin._128_4_;
  pcVar6[0x84] = '\0';
  local_58._8_8_ = 0;
  local_30 = pcVar6;
  local_58._Ptr = std::_Allocate<16,std::_Default_allocate_traits>(0x90);
  local_48 = ___xmm_000000000000008f0000000000000084;
  uStack_40 = _UNK_152881918;
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
  *(undefined4 *)(local_58._Ptr + 0x80) = *(undefined4 *)(pcVar6 + 0x80);
  *(local_58._Ptr + 0x84) = pcVar6[0x84];
  local_38 = 0x24;
  StatusProviderIntegrationTest_UsePreSetHook_Test::test_info_ =
       testing::internal::MakeAndRegisterTestInfo
                 ("StatusProviderIntegrationTest","UsePreSetHook",(char *)0x0,(char *)0x0,
                  (CodeLocation *)&local_58,pvVar5,(_func_void *)p_Var4,(_func_void *)p_Var3,pTVar2)
  ;
  ::operator_delete(pcVar6,0x90);
  return;
}

// TestBody @ 14c5a47f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
StatusProviderIntegrationTest_SetAndCheckStatus_Test::TestBody
          (StatusProviderIntegrationTest_SetAndCheckStatus_Test *this)

{
  void *pvVar1;
  bool bVar2;
  StatusCode *pSVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  Message *pMVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  AssertHelper *pAVar7;
  undefined8 uVar8;
  void *pvVar9;
  char *pcVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [32];
  initializer_list<sc::StatusCode> local_78;
  StatusCode local_68;
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_98._4_12_ = (undefined1  [12])NotOk._4_12_;
  local_98._0_4_ = NotOk.code;
  local_78._First = (StatusCode *)local_98;
  local_78._Last = (StatusCode *)(local_98 + 0x10);
  sc::StatusProvider::StatusProvider((StatusProvider *)(local_98 + 0x10),&local_78);
  bVar2 = sc::Status::isOk();
  local_98[0] = bVar2;
  local_98._8_8_ = 0;
  if (bVar2) {
    local_98._4_4_ = NotOk._4_4_;
    local_98._8_8_ = NotOk.message;
    local_98._0_4_ = NotOk.code;
    sc::StatusProvider::set((StatusCode *)local_98);
    bVar2 = sc::Status::isOk();
    local_98._1_7_ = local_98._1_7_;
    local_98[0] = !bVar2;
    local_98._8_8_ = 0;
    if (!bVar2) {
      pSVar3 = sc::Status::get(&local_68);
      local_78._First = *(StatusCode **)pSVar3;
      local_78._Last = (StatusCode *)pSVar3->message;
      if (pSVar3->code == NotOk.code) {
        testing::AssertionSuccess((AssertionResult *)local_98);
      }
      else {
        pbVar6 = testing::internal::FormatForComparisonFailureMessage<sc::StatusCode,sc::StatusCode>
                           ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_38,&NotOk,(StatusCode *)&local_78);
        pbVar4 = testing::internal::FormatForComparisonFailureMessage<sc::StatusCode,sc::StatusCode>
                           ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            &local_58,(StatusCode *)&local_78,&NotOk);
        testing::internal::EqFailure
                  ((AssertionResult *)local_98,"sc::Status::get()","NotOk",pbVar4,pbVar6,false);
        if (0xf < uStack_40) {
          pvVar1 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
          uVar12 = uStack_40 + 1;
          pvVar9 = pvVar1;
          if (0xfff < uVar12) {
            pvVar9 = *(void **)((longlong)pvVar1 + -8);
            uVar12 = uStack_40 + 0x28;
            if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar9))) goto LAB_14c5a496e;
          }
          ::operator_delete(pvVar9,uVar12);
        }
        local_58._Buf[0] = '\0';
        local_48 = ___xmm_000000000000000f0000000000000000;
        uStack_40 = _UNK_15076add8;
        if (0xf < local_20) {
          uVar12 = local_20 + 1;
          uVar8 = local_38._Ptr;
          if (0xfff < uVar12) {
            uVar8 = *(undefined8 *)(local_38._Ptr + -8);
            uVar12 = local_20 + 0x28;
            if ((char *)0x1f < local_38._Ptr + (-8 - uVar8)) {
LAB_14c5a496e:
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)uVar8,uVar12);
        }
      }
      if (local_98[0] == '\0') {
        pMVar5 = (Message *)testing::Message::Message((Message *)&local_68);
        if ((char *)local_98._8_8_ == (char *)0x0) {
          pcVar10 = "";
        }
        else {
          pcVar10 = (char *)local_98._8_8_;
          if (0xf < *(ulonglong *)(local_98._8_8_ + 0x18)) {
            pcVar10 = *(char **)local_98._8_8_;
          }
        }
        pAVar7 = (AssertHelper *)
                 testing::internal::AssertHelper::AssertHelper
                           ((AssertHelper *)&local_78,kFatalFailure,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\sctests\\TestStatusProviderIntegration.cpp"
                            ,0x12,pcVar10);
        testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
        testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_78);
        goto LAB_14c5a4c8e;
      }
      uVar8 = local_98._8_8_;
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98._8_8_ !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98._8_8_
                  );
        ::operator_delete((void *)uVar8,0x20);
      }
      sc::StatusProvider::reset();
      bVar2 = sc::Status::isOk();
      local_98[0] = bVar2;
      local_98._8_8_ = 0;
      if (bVar2) {
        return;
      }
      pMVar5 = (Message *)testing::Message::Message((Message *)&local_78);
      pbVar6 = testing::internal::GetBoolAssertionFailureMessage
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_58,(AssertionResult *)local_98,"sc::Status::isOk()","false","true")
      ;
      if (0xf < (pbVar6->_Mypair)._Myval2._Myres) {
        pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (pbVar6->_Mypair)._Myval2._Bx._Ptr;
      }
      pAVar7 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_68,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\sctests\\TestStatusProviderIntegration.cpp"
                          ,0x14,(char *)pbVar6);
      testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_68);
      local_68._0_8_ = local_78._First;
      if (0xf < uStack_40) {
        pvVar1 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
        uVar12 = uStack_40 + 1;
        pvVar9 = pvVar1;
        if (0xfff < uVar12) {
          pvVar9 = *(void **)((longlong)pvVar1 + -8);
          uVar12 = uStack_40 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar9))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(pvVar9,uVar12);
        local_68._0_8_ = local_78._First;
      }
    }
    else {
      pMVar5 = (Message *)testing::Message::Message((Message *)&local_68);
      pbVar6 = testing::internal::GetBoolAssertionFailureMessage
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_58,(AssertionResult *)local_98,"sc::Status::isOk()","true","false")
      ;
      if (0xf < (pbVar6->_Mypair)._Myval2._Myres) {
        pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (pbVar6->_Mypair)._Myval2._Bx._Ptr;
      }
      pAVar7 = (AssertHelper *)
               testing::internal::AssertHelper::AssertHelper
                         ((AssertHelper *)&local_78,kFatalFailure,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\sctests\\TestStatusProviderIntegration.cpp"
                          ,0x11,(char *)pbVar6);
      testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_78);
      if (0xf < uStack_40) {
        pvVar1 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
        uVar12 = uStack_40 + 1;
        pvVar9 = pvVar1;
        if (0xfff < uVar12) {
          uVar12 = uStack_40 + 0x28;
          pvVar9 = *(void **)((longlong)pvVar1 + -8);
          if (0x1f < (ulonglong)
                     ((longlong)pvVar1 + (-8 - (longlong)*(void **)((longlong)pvVar1 + -8)))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        goto LAB_14c5a4c74;
      }
    }
  }
  else {
    pMVar5 = (Message *)testing::Message::Message((Message *)&local_68);
    pbVar6 = testing::internal::GetBoolAssertionFailureMessage
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58
                        ,(AssertionResult *)local_98,"sc::Status::isOk()","false","true");
    if (0xf < (pbVar6->_Mypair)._Myval2._Myres) {
      pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar6->_Mypair)._Myval2._Bx._Ptr;
    }
    pAVar7 = (AssertHelper *)
             testing::internal::AssertHelper::AssertHelper
                       ((AssertHelper *)&local_78,kFatalFailure,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\sctests\\TestStatusProviderIntegration.cpp"
                        ,0xf,(char *)pbVar6);
    testing::internal::AssertHelper::operator=(pAVar7,pMVar5);
    testing::internal::AssertHelper::~AssertHelper((AssertHelper *)&local_78);
    if (0xf < uStack_40) {
      pvVar1 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
      uVar12 = uStack_40 + 1;
      pvVar9 = pvVar1;
      if (0xfff < uVar12) {
        pvVar9 = *(void **)((longlong)pvVar1 + -8);
        uVar12 = uStack_40 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar9))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
LAB_14c5a4c74:
      ::operator_delete(pvVar9,uVar12);
    }
  }
  local_48 = ___xmm_000000000000000f0000000000000000;
  uStack_40 = _UNK_15076add8;
  local_58._Buf[0] = '\0';
LAB_14c5a4c8e:
  if ((AssertHelperData *)local_68._0_8_ != (AssertHelperData *)0x0) {
    puVar11 = (undefined8 *)
              ((longlong)&((AssertHelperData *)local_68._0_8_)->type +
              (longlong)*(int *)(*(longlong *)local_68._0_8_ + 4));
    (**(code **)*puVar11)(puVar11,1);
  }
  uVar8 = local_98._8_8_;
  if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98._8_8_ !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_98._8_8_);
    ::operator_delete((void *)uVar8,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5a4cf0

void * __thiscall
StatusProviderIntegrationTest_SetAndCheckStatus_Test::_scalar_deleting_destructor_
          (StatusProviderIntegrationTest_SetAndCheckStatus_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5a4d30

Test * __thiscall
testing::internal::TestFactoryImpl<StatusProviderIntegrationTest_SetAndCheckStatus_Test>::CreateTest
          (TestFactoryImpl<StatusProviderIntegrationTest_SetAndCheckStatus_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7StatusProviderIntegrationTest_SetAndCheckStatus_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5a4d70

void * __thiscall
testing::internal::TestFactoryImpl<StatusProviderIntegrationTest_SetAndCheckStatus_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<StatusProviderIntegrationTest_SetAndCheckStatus_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<StatusProviderIntegrationTest_SetAndCheckStatus_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TestBody @ 14c5a4db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
StatusProviderIntegrationTest_UsePreSetHook_Test::TestBody
          (StatusProviderIntegrationTest_UsePreSetHook_Test *this)

{
  _Bxty _Var1;
  void *pvVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  undefined8 uVar5;
  int iVar6;
  _func___cdecl_char_ptr_StatusCode_ulong64_char_ptr *p_Var7;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar8;
  StatusCode *pSVar9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar11;
  Message *pMVar12;
  AssertHelper *pAVar13;
  void *pvVar14;
  char *pcVar15;
  undefined8 *puVar16;
  ulong64 uVar17;
  undefined1 auStackY_2c8 [32];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  StatusCode local_278;
  undefined1 local_268 [16];
  ulong64 local_258;
  ulonglong uStack_250;
  _Bxty local_248;
  ulong64 local_238;
  ulonglong uStack_230;
  char local_228 [512];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  local_298._4_12_ = (undefined1  [12])WithData._4_12_;
  local_298._0_4_ = WithData.code;
  local_268._0_8_ = local_298;
  local_268._8_8_ = local_288;
  sc::StatusProvider::StatusProvider
            ((StatusProvider *)(local_288 + 8),(initializer_list<sc::StatusCode> *)local_268);
  local_288._0_8_ = (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_268._0_8_ = sc::Status::getHook();
  if ((StatusCode *)local_268._0_8_ == (StatusCode *)0x0) {
    testing::AssertionSuccess((AssertionResult *)local_298);
  }
  else {
    testing::internal::
    CmpHelperEQFailure<char_const_*_(__cdecl*)(sc::StatusCode,unsigned___int64,char_const_*),std::nullptr_t>
              ((AssertionResult *)local_298,"sc::Status::getHook()","nullptr",
               (_func___cdecl_char_ptr_StatusCode_ulong64_char_ptr **)local_268,(void **)local_288);
  }
  if ((bool)local_298[0] == false) {
    pMVar12 = (Message *)testing::Message::Message((Message *)local_288);
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_298._8_8_ ==
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pcVar15 = "";
    }
    else {
      pcVar15 = (char *)local_298._8_8_;
      if (0xf < *(ulong64 *)(local_298._8_8_ + 0x18)) {
        pcVar15 = *(char **)local_298._8_8_;
      }
    }
    iVar6 = 0x26;
  }
  else {
    uVar5 = local_298._8_8_;
    if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_298._8_8_ !=
        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_298._8_8_)
      ;
      ::operator_delete((void *)uVar5,0x20);
    }
    sc::Status::setHook(translate);
    p_Var7 = sc::Status::getHook();
    auVar4 = (undefined1  [12])WithData._4_12_;
    local_298._1_7_ = local_298._1_7_;
    local_298[0] = p_Var7 == translate;
    local_298._8_8_ = 0;
    if (p_Var7 != translate) {
      pMVar12 = (Message *)testing::Message::Message((Message *)local_288);
      pbVar10 = testing::internal::GetBoolAssertionFailureMessage
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_248,(AssertionResult *)local_298,
                           "sc::Status::getHook() == translate","false","true");
      if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
        pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                  (pbVar10->_Mypair)._Myval2._Bx._Ptr;
      }
      pAVar13 = (AssertHelper *)
                testing::internal::AssertHelper::AssertHelper
                          ((AssertHelper *)local_268,kFatalFailure,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\sctests\\TestStatusProviderIntegration.cpp"
                           ,0x28,(char *)pbVar10);
      testing::internal::AssertHelper::operator=(pAVar13,pMVar12);
      testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_268);
      if (0xf < uStack_230) {
        pvVar2 = (void *)CONCAT71(local_248._1_7_,local_248._Buf[0]);
        uVar17 = uStack_230 + 1;
        pvVar14 = pvVar2;
        if (0xfff < uVar17) {
          pvVar14 = *(void **)((longlong)pvVar2 + -8);
          uVar17 = uStack_230 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar14))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(pvVar14,uVar17);
      }
      local_238 = ___xmm_000000000000000f0000000000000000;
      uStack_230 = _UNK_15076add8;
      local_248._Buf[0] = '\0';
      goto LAB_14c5a5446;
    }
    _Var1._4_12_ = (undefined1  [12])WithData._4_12_;
    _Var1._0_4_ = WithData.code;
    local_298 = (undefined1  [16])_Var1;
    memset(local_228,0,0x200);
    local_268 = (undefined1  [16])_Var1;
    uVar8._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
          )sc::StatusProvider::execHook((StatusCode *)local_268,0,auVar4._4_8_);
    uVar5 = local_298._0_8_;
    local_298._8_8_ = uVar8._Mypair._Myval2;
    local_268._0_8_ = local_298._0_8_;
    local_268._8_8_ = uVar8._Mypair._Myval2;
    sc::StatusProvider::execHook((StatusCode *)local_268,2,"arg to be translated");
    iVar6 = snprintf((char *)0x0,0,(char *)uVar8._Mypair._Myval2);
    local_268._8_8_ = uVar8._Mypair._Myval2;
    local_268._0_8_ = uVar5;
    sc::StatusProvider::execHook((StatusCode *)local_268,2,"arg to be translated");
    uVar17 = 0x200;
    if ((ulonglong)(longlong)(iVar6 + 1) < 0x200) {
      uVar17 = (longlong)(iVar6 + 1);
    }
    snprintf(local_228,uVar17,(char *)uVar8._Mypair._Myval2);
    local_298._8_8_ = local_228;
    sc::StatusProvider::execSet((StatusCode *)local_298);
    pSVar9 = sc::Status::get((StatusCode *)local_298);
    local_278.code = pSVar9->code;
    local_278._4_4_ = *(undefined4 *)&pSVar9->field_0x4;
    local_278.message = pSVar9->message;
    if (pSVar9->code == WithData.code) {
      testing::AssertionSuccess((AssertionResult *)local_298);
    }
    else {
      pbVar10 = testing::internal::FormatForComparisonFailureMessage<sc::StatusCode,sc::StatusCode>
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_248,&WithData,&local_278);
      pbVar11 = testing::internal::FormatForComparisonFailureMessage<sc::StatusCode,sc::StatusCode>
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           local_268,&local_278,&WithData);
      testing::internal::EqFailure
                ((AssertionResult *)local_298,"status","WithData",pbVar11,pbVar10,false);
      if (0xf < uStack_250) {
        uVar17 = uStack_250 + 1;
        pSVar9 = (StatusCode *)local_268._0_8_;
        if (0xfff < uVar17) {
          pSVar9 = *(StatusCode **)(local_268._0_8_ + -8);
          uVar17 = uStack_250 + 0x28;
          if ((char *)0x1f < (char *)(local_268._0_8_ + (-8 - (longlong)pSVar9)))
          goto LAB_14c5a50ab;
        }
        ::operator_delete(pSVar9,uVar17);
      }
      auVar3[0xf] = 0;
      auVar3._0_15_ = local_268._1_15_;
      local_268 = auVar3 << 8;
      local_258 = ___xmm_000000000000000f0000000000000000;
      uStack_250 = _UNK_15076add8;
      if (0xf < uStack_230) {
        pvVar2 = (void *)CONCAT71(local_248._1_7_,local_248._Buf[0]);
        uVar17 = uStack_230 + 1;
        pvVar14 = pvVar2;
        if (0xfff < uVar17) {
          pvVar14 = *(void **)((longlong)pvVar2 + -8);
          uVar17 = uStack_230 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar14))) {
LAB_14c5a50ab:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(pvVar14,uVar17);
      }
    }
    if ((bool)local_298[0] == false) {
      pMVar12 = (Message *)testing::Message::Message((Message *)local_288);
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_298._8_8_ ==
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        pcVar15 = "";
      }
      else {
        pcVar15 = (char *)local_298._8_8_;
        if (0xf < *(ulong64 *)(local_298._8_8_ + 0x18)) {
          pcVar15 = *(char **)local_298._8_8_;
          iVar6 = 0x2c;
          goto LAB_14c5a5416;
        }
      }
      iVar6 = 0x2c;
    }
    else {
      uVar5 = local_298._8_8_;
      if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_298._8_8_ !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   local_298._8_8_);
        ::operator_delete((void *)uVar5,0x20);
      }
      testing::internal::CmpHelperSTREQ
                ((AssertionResult *)local_298,"status.message",
                 "\"Translated message 42 with translated args i18n arg\"",local_278.message,
                 "Translated message 42 with translated args i18n arg");
      if ((bool)local_298[0] == false) {
        pMVar12 = (Message *)testing::Message::Message((Message *)local_288);
        if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_298._8_8_ ==
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          pcVar15 = "";
        }
        else {
          pcVar15 = (char *)local_298._8_8_;
          if (0xf < *(ulong64 *)(local_298._8_8_ + 0x18)) {
            pcVar15 = *(char **)local_298._8_8_;
            iVar6 = 0x2d;
            goto LAB_14c5a5416;
          }
        }
        iVar6 = 0x2d;
      }
      else {
        uVar5 = local_298._8_8_;
        if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_298._8_8_ !=
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     local_298._8_8_);
          ::operator_delete((void *)uVar5,0x20);
        }
        local_298._0_4_ = NotOk.code;
        local_298._4_4_ = NotOk._4_4_;
        local_298._8_8_ = NotOk.message;
        sc::StatusProvider::set((StatusCode *)local_298);
        pSVar9 = sc::Status::get((StatusCode *)local_298);
        local_278.code = pSVar9->code;
        local_278._4_4_ = *(undefined4 *)&pSVar9->field_0x4;
        local_278.message = pSVar9->message;
        testing::internal::EqHelper::Compare<sc::StatusCode,sc::StatusCode,0>
                  ((AssertionResult *)local_298,"status","NotOk",&local_278,&NotOk);
        if ((bool)local_298[0] == false) {
          pMVar12 = (Message *)testing::Message::Message((Message *)local_288);
          if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_298._8_8_ ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar15 = "";
          }
          else {
            pcVar15 = (char *)local_298._8_8_;
            if (0xf < *(ulong64 *)(local_298._8_8_ + 0x18)) {
              pcVar15 = *(char **)local_298._8_8_;
              iVar6 = 0x31;
              goto LAB_14c5a5416;
            }
          }
          iVar6 = 0x31;
        }
        else {
          uVar5 = local_298._8_8_;
          if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_298._8_8_ !=
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       local_298._8_8_);
            ::operator_delete((void *)uVar5,0x20);
          }
          testing::internal::CmpHelperSTREQ
                    ((AssertionResult *)local_298,"status.message","\"Translated not ok\"",
                     local_278.message,"Translated not ok");
          if ((bool)local_298[0] != false) {
            uVar5 = local_298._8_8_;
            if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_298._8_8_
                != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         local_298._8_8_);
              ::operator_delete((void *)uVar5,0x20);
            }
            sc::Status::setHook((_func___cdecl_char_ptr_StatusCode_ulong64_char_ptr *)0x0);
            return;
          }
          pMVar12 = (Message *)testing::Message::Message((Message *)local_288);
          if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_298._8_8_ ==
              (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
            pcVar15 = "";
          }
          else {
            pcVar15 = (char *)local_298._8_8_;
            if (0xf < *(ulonglong *)(local_298._8_8_ + 0x18)) {
              pcVar15 = *(char **)local_298._8_8_;
              iVar6 = 0x32;
              goto LAB_14c5a5416;
            }
          }
          iVar6 = 0x32;
        }
      }
    }
  }
LAB_14c5a5416:
  pAVar13 = (AssertHelper *)
            testing::internal::AssertHelper::AssertHelper
                      ((AssertHelper *)local_268,kFatalFailure,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicLibTest\\Private\\sctests\\TestStatusProviderIntegration.cpp"
                       ,iVar6,pcVar15);
  testing::internal::AssertHelper::operator=(pAVar13,pMVar12);
  testing::internal::AssertHelper::~AssertHelper((AssertHelper *)local_268);
LAB_14c5a5446:
  if ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)local_288._0_8_ !=
      (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    puVar16 = (undefined8 *)
              ((longlong)(longlong *)local_288._0_8_ +
              (longlong)*(int *)(*(longlong *)local_288._0_8_ + 4));
    (**(code **)*puVar16)(puVar16,1);
  }
  uVar5 = local_298._8_8_;
  if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_298._8_8_ !=
      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_298._8_8_);
    ::operator_delete((void *)uVar5,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c5a54c0

void * __thiscall
StatusProviderIntegrationTest_UsePreSetHook_Test::_scalar_deleting_destructor_
          (StatusProviderIntegrationTest_UsePreSetHook_Test *this,uint param_1)

{
  testing::Test::~Test((Test *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CreateTest @ 14c5a5500

Test * __thiscall
testing::internal::TestFactoryImpl<StatusProviderIntegrationTest_UsePreSetHook_Test>::CreateTest
          (TestFactoryImpl<StatusProviderIntegrationTest_UsePreSetHook_Test> *this)

{
  Test *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (Test *)0x0) {
    testing::Test::Test(this_00);
    this_00->_padding_ = (longlong)&___7StatusProviderIntegrationTest_UsePreSetHook_Test__6B_;
    return this_00;
  }
  return (Test *)0x0;
}

// `scalar_deleting_destructor' @ 14c5a5540

void * __thiscall
testing::internal::TestFactoryImpl<StatusProviderIntegrationTest_UsePreSetHook_Test>::
_scalar_deleting_destructor_
          (TestFactoryImpl<StatusProviderIntegrationTest_UsePreSetHook_Test> *this,uint param_1)

{
  *this = (TestFactoryImpl<StatusProviderIntegrationTest_UsePreSetHook_Test>)
          &___7TestFactoryBase_internal_testing__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// StatusCode> @ 14c5a5580

basic_ostream<char,std::char_traits<char>_> * __cdecl
testing::internal2::operator<<<char,std::char_traits<char>,sc::StatusCode>
          (basic_ostream<char,std::char_traits<char>_> *param_1,StatusCode *param_2)

{
  PrintBytesInObjectTo((uchar *)param_2,0x10,param_1);
  return param_1;
}

// CmpHelperEQ<char_const_*_(__cdecl*)(sc::StatusCode,unsigned___int64,char_const_*),std::nullptr_t> @ 14c5a55b0

AssertionResult * __cdecl
testing::internal::
CmpHelperEQ<char_const_*_(__cdecl*)(sc::StatusCode,unsigned___int64,char_const_*),std::nullptr_t>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          _func___cdecl_char_ptr_StatusCode_ulong64_char_ptr **param_3,void **param_4)

{
                    /* WARNING: Load size is inaccurate */
  if (*param_3 == *param_4) {
    AssertionSuccess(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  CmpHelperEQFailure<char_const_*_(__cdecl*)(sc::StatusCode,unsigned___int64,char_const_*),std::nullptr_t>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// CmpHelperEQ<sc::StatusCode,sc::StatusCode> @ 14c5a5600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQ<sc::StatusCode,sc::StatusCode>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,StatusCode *param_3,
          StatusCode *param_4)

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
  if (param_3->code == param_4->code) {
    AssertionSuccess(__return_storage_ptr__);
  }
  else {
    pbVar2 = FormatForComparisonFailureMessage<sc::StatusCode,sc::StatusCode>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68
                        ,param_4,param_3);
    pbVar3 = FormatForComparisonFailureMessage<sc::StatusCode,sc::StatusCode>
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
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c5a5715;
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
LAB_14c5a5715:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar5,uVar6);
    }
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<char_const_*_(__cdecl*)(sc::StatusCode,unsigned___int64,char_const_*),std::nullptr_t> @ 14c5a5760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::
CmpHelperEQFailure<char_const_*_(__cdecl*)(sc::StatusCode,unsigned___int64,char_const_*),std::nullptr_t>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,
          _func___cdecl_char_ptr_StatusCode_ulong64_char_ptr **param_3,void **param_4)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong64 uVar5;
  char *pcVar6;
  undefined1 auStackY_1e8 [32];
  int iStack_19c;
  undefined1 local_198 [16];
  undefined1 local_188 [8];
  undefined1 local_180 [24];
  char **local_168;
  char **local_160;
  char **local_148;
  char **local_140;
  int *local_130;
  char *local_118;
  uint local_110;
  basic_ios<char,std::char_traits<char>_> local_100;
  _Bxty local_98;
  undefined8 local_88;
  ulonglong uStack_80;
  _Bxty local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_198._0_8_ =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
        _vbtable__for__std__basic_istream<char,std::char_traits<char>_>__;
  local_188 = (undefined1  [8])
              &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
               _vbtable__for__std__basic_ostream<char,std::char_traits<char>_>__;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(&local_100);
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)local_198,
             (basic_streambuf<char,std::char_traits<char>_> *)local_180);
  *(undefined ***)(local_198 + *(int *)(local_198._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_19c + (longlong)*(int *)(local_198._0_8_ + 4)) =
       *(int *)(local_198._0_8_ + 4) + -0x98;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_180);
  local_118 = (char *)0x0;
  local_180._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  local_110 = 0;
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_188,"(nullptr)");
  local_98._8_8_ = 0;
  local_98._Ptr = (char *)0x0;
  local_88 = ___xmm_000000000000000f0000000000000000;
  uStack_80 = _UNK_15076add8;
  if ((((byte)local_110 & 0x22) == 2) || (pcVar6 = *local_140, pcVar6 == (char *)0x0)) {
    if (((local_110 & 4) == 0) && (*local_148 != (char *)0x0)) {
      pcVar4 = *local_168;
      pcVar6 = *local_148 + ((longlong)*local_130 - (longlong)pcVar4);
    }
    else {
      pcVar6 = (char *)0x0;
      pcVar4 = (char *)0x0;
    }
  }
  else {
    if (pcVar6 < local_118) {
      pcVar6 = local_118;
    }
    pcVar4 = *local_160;
    pcVar6 = pcVar6 + -(longlong)pcVar4;
  }
  if (pcVar4 != (char *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98,pcVar4,
               (ulong64)pcVar6);
  }
  *(undefined ***)(local_198 + *(int *)(local_198._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_19c + (longlong)*(int *)(local_198._0_8_ + 4)) =
       *(int *)(local_198._0_8_ + 4) + -0x98;
  local_180._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)local_180);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_180);
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(local_180 + 8));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_100)
  ;
  PrintToString<char_const_*_(__cdecl*)(sc::StatusCode,unsigned___int64,char_const_*)>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,param_3);
  EqFailure(__return_storage_ptr__,param_1,param_2,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78,
            (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98,false);
  if (0xf < uStack_60) {
    pvVar1 = (void *)CONCAT71(local_78._1_7_,local_78._Buf[0]);
    uVar5 = uStack_60 + 1;
    pvVar2 = pvVar1;
    if (0xfff < uVar5) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar5 = uStack_60 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) goto LAB_14c5a59ad;
    }
    ::operator_delete(pvVar2,uVar5);
  }
  local_78._Buf[0] = '\0';
  local_68 = ___xmm_000000000000000f0000000000000000;
  uStack_60 = _UNK_15076add8;
  if (0xf < uStack_80) {
    uVar5 = uStack_80 + 1;
    uVar3 = local_98._Ptr;
    if (0xfff < uVar5) {
      uVar3 = *(undefined8 *)(local_98._Ptr + -8);
      uVar5 = uStack_80 + 0x28;
      if ((char *)0x1f < local_98._Ptr + (-8 - uVar3)) {
LAB_14c5a59ad:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar3,uVar5);
  }
  return __return_storage_ptr__;
}

// CmpHelperEQFailure<sc::StatusCode,sc::StatusCode> @ 14c5a5a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::CmpHelperEQFailure<sc::StatusCode,sc::StatusCode>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,StatusCode *param_3,
          StatusCode *param_4)

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
  pbVar2 = FormatForComparisonFailureMessage<sc::StatusCode,sc::StatusCode>
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68,
                      param_4,param_3);
  pbVar3 = FormatForComparisonFailureMessage<sc::StatusCode,sc::StatusCode>
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_88,
                      param_3,param_4);
  EqFailure(__return_storage_ptr__,param_1,param_2,pbVar3,pbVar2,false);
  if (0xf < uStack_70) {
    pvVar1 = (void *)CONCAT71(local_88._1_7_,local_88._Buf[0]);
    uVar6 = uStack_70 + 1;
    pvVar4 = pvVar1;
    if (0xfff < uVar6) {
      pvVar4 = *(void **)((longlong)pvVar1 + -8);
      uVar6 = uStack_70 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c5a5af1;
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
LAB_14c5a5af1:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar5,uVar6);
  }
  return __return_storage_ptr__;
}

// Compare<sc::StatusCode,sc::StatusCode,0> @ 14c5a5b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AssertionResult * __cdecl
testing::internal::EqHelper::Compare<sc::StatusCode,sc::StatusCode,0>
          (AssertionResult *__return_storage_ptr__,char *param_1,char *param_2,StatusCode *param_3,
          StatusCode *param_4)

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
  if (param_3->code == param_4->code) {
    AssertionSuccess(__return_storage_ptr__);
  }
  else {
    pbVar2 = FormatForComparisonFailureMessage<sc::StatusCode,sc::StatusCode>
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68
                        ,param_4,param_3);
    pbVar3 = FormatForComparisonFailureMessage<sc::StatusCode,sc::StatusCode>
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
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) goto LAB_14c5a5c52;
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
LAB_14c5a5c52:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar5,uVar6);
    }
  }
  return __return_storage_ptr__;
}

// DefaultPrintNonContainerTo<sc::StatusCode> @ 14c5a5ca0

void __cdecl
testing_internal::DefaultPrintNonContainerTo<sc::StatusCode>
          (StatusCode *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  testing::internal2::PrintBytesInObjectTo((uchar *)param_1,0x10,param_2);
  return;
}

// DefaultPrintTo<char_const_*___cdecl(sc::StatusCode,unsigned___int64,char_const_*)> @ 14c5a5cc0

void __cdecl
testing::internal::
DefaultPrintTo<char_const_*___cdecl(sc::StatusCode,unsigned___int64,char_const_*)>
          (WrapPrinterType<2> param_1,_func___cdecl_char_ptr_StatusCode_ulong64_char_ptr *param_2,
          basic_ostream<char,std::char_traits<char>_> *param_3)

{
  if (param_2 == (_func___cdecl_char_ptr_StatusCode_ulong64_char_ptr *)0x0) {
    std::operator<<<std::char_traits<char>_>(param_3,"NULL");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c5a5cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_3,param_2);
  return;
}

// DefaultPrintTo<sc::StatusCode> @ 14c5a5cf0

void __cdecl
testing::internal::DefaultPrintTo<sc::StatusCode>
          (WrapPrinterType<3> param_1,StatusCode *param_2,
          basic_ostream<char,std::char_traits<char>_> *param_3)

{
  internal2::PrintBytesInObjectTo((uchar *)param_2,0x10,param_3);
  return;
}

// FormatForComparisonFailureMessage<std::nullptr_t,char_const_*_(__cdecl*)(sc::StatusCode,unsigned___int64,char_const_*)> @ 14c5a5d10

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<std::nullptr_t,char_const_*_(__cdecl*)(sc::StatusCode,unsigned___int64,char_const_*)>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          void **param_1,_func___cdecl_char_ptr_StatusCode_ulong64_char_ptr **param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iStack_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [8];
  undefined1 local_100 [24];
  char **local_e8;
  char **local_e0;
  char **local_c8;
  char **local_c0;
  int *local_b0;
  char *local_98;
  uint local_90;
  basic_ios<char,std::char_traits<char>_> local_80;
  
  local_118._0_8_ =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
        _vbtable__for__std__basic_istream<char,std::char_traits<char>_>__;
  local_108 = (undefined1  [8])
              &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
               _vbtable__for__std__basic_ostream<char,std::char_traits<char>_>__;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(&local_80);
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)local_118,
             (basic_streambuf<char,std::char_traits<char>_> *)local_100);
  *(undefined ***)(local_118 + *(int *)(local_118._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118._0_8_ + 4)) =
       *(int *)(local_118._0_8_ + 4) + -0x98;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_100);
  local_98 = (char *)0x0;
  local_100._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  local_90 = 0;
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_108,"(nullptr)");
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  if ((((byte)local_90 & 0x22) == 2) || (pcVar2 = *local_c0, pcVar2 == (char *)0x0)) {
    if (((local_90 & 4) == 0) && (*local_c8 != (char *)0x0)) {
      pcVar1 = *local_e8;
      pcVar2 = *local_c8 + ((longlong)*local_b0 - (longlong)pcVar1);
    }
    else {
      pcVar2 = (char *)0x0;
      pcVar1 = (char *)0x0;
    }
  }
  else {
    if (pcVar2 < local_98) {
      pcVar2 = local_98;
    }
    pcVar1 = *local_e0;
    pcVar2 = pcVar2 + -(longlong)pcVar1;
  }
  if (pcVar1 != (char *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (__return_storage_ptr__,pcVar1,(ulong64)pcVar2);
  }
  *(undefined ***)(local_118 + *(int *)(local_118._0_8_ + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118._0_8_ + 4)) =
       *(int *)(local_118._0_8_ + 4) + -0x98;
  local_100._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)local_100);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_100);
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(local_100 + 8));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_80);
  return __return_storage_ptr__;
}

// FormatForComparisonFailureMessage<char_const_*_(__cdecl*)(sc::StatusCode,unsigned___int64,char_const_*),std::nullptr_t> @ 14c5a5ec0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::
FormatForComparisonFailureMessage<char_const_*_(__cdecl*)(sc::StatusCode,unsigned___int64,char_const_*),std::nullptr_t>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          _func___cdecl_char_ptr_StatusCode_ulong64_char_ptr **param_1,void **param_2)

{
  PrintToString<char_const_*_(__cdecl*)(sc::StatusCode,unsigned___int64,char_const_*)>
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FormatForComparisonFailureMessage<sc::StatusCode,sc::StatusCode> @ 14c5a5ee0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::internal::FormatForComparisonFailureMessage<sc::StatusCode,sc::StatusCode>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          StatusCode *param_1,StatusCode *param_2)

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

// PrintTo<char_const_*_(__cdecl*)(sc::StatusCode,unsigned___int64,char_const_*)> @ 14c5a6090

void __cdecl
testing::internal::PrintTo<char_const_*_(__cdecl*)(sc::StatusCode,unsigned___int64,char_const_*)>
          (_func___cdecl_char_ptr_StatusCode_ulong64_char_ptr **param_1,
          basic_ostream<char,std::char_traits<char>_> *param_2)

{
  if (*param_1 == (_func___cdecl_char_ptr_StatusCode_ulong64_char_ptr *)0x0) {
    std::operator<<<std::char_traits<char>_>(param_2,"NULL");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c5a60aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*param_1);
  return;
}

// PrintTo<sc::StatusCode> @ 14c5a60c0

void __cdecl
testing::internal::PrintTo<sc::StatusCode>
          (StatusCode *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  internal2::PrintBytesInObjectTo((uchar *)param_1,0x10,param_2);
  return;
}

// PrintToString<char_const_*_(__cdecl*)(sc::StatusCode,unsigned___int64,char_const_*)> @ 14c5a60e0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::PrintToString<char_const_*_(__cdecl*)(sc::StatusCode,unsigned___int64,char_const_*)>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          _func___cdecl_char_ptr_StatusCode_ulong64_char_ptr **param_1)

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
  local_110._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  local_a8 = (char *)0x0;
  local_a0 = 0;
  if (*param_1 == (_func___cdecl_char_ptr_StatusCode_ulong64_char_ptr *)0x0) {
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)local_118,"NULL");
  }
  else {
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)local_118,*param_1);
  }
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

// PrintToString<sc::StatusCode> @ 14c5a62a0

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
testing::PrintToString<sc::StatusCode>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          StatusCode *param_1)

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

// UniversalPrint<char_const_*_(__cdecl*)(sc::StatusCode,unsigned___int64,char_const_*)> @ 14c5a6450

void __cdecl
testing::internal::
UniversalPrint<char_const_*_(__cdecl*)(sc::StatusCode,unsigned___int64,char_const_*)>
          (_func___cdecl_char_ptr_StatusCode_ulong64_char_ptr **param_1,
          basic_ostream<char,std::char_traits<char>_> *param_2)

{
  if (*param_1 == (_func___cdecl_char_ptr_StatusCode_ulong64_char_ptr *)0x0) {
    std::operator<<<std::char_traits<char>_>(param_2,"NULL");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c5a646a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,*param_1);
  return;
}

// UniversalPrint<sc::StatusCode> @ 14c5a6480

void __cdecl
testing::internal::UniversalPrint<sc::StatusCode>
          (StatusCode *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  internal2::PrintBytesInObjectTo((uchar *)param_1,0x10,param_2);
  return;
}

// translate @ 14c5a64a0

char * __cdecl translate(StatusCode *param_1,ulong64 param_2,char *param_3)

{
  if (param_1->code != WithData.code) {
    if (param_1->code == NotOk.code) {
      param_3 = "Translated not ok";
    }
    return param_3;
  }
  if (param_2 == 0) {
    return "Translated message %zu with translated args %s";
  }
  if (param_2 == 2) {
    param_3 = "i18n arg";
  }
  return param_3;
}

