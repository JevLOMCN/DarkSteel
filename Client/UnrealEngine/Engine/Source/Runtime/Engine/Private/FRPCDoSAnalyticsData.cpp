// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FireEvent_ServerRPCDoSEscalation @ 1473fd090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FRPCDoSAnalyticsData::FireEvent_ServerRPCDoSEscalation
          (FRPCDoSAnalyticsData *this,int param_1,FString *param_2,int param_3,double param_4,
          FString *param_5,FString *param_6,TArray<FName,TSizedDefaultAllocator<32>_> *param_7,
          double param_8)

{
  FName *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  FString *pFVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  UWorld *pUVar11;
  FCPUTime FVar12;
  void *pvVar13;
  FString *pFVar14;
  size_t sVar15;
  uint uVar16;
  longlong *plVar17;
  ulong64 uVar18;
  wchar_t *_Str;
  FName *this_00;
  longlong *plVar19;
  undefined1 auStackY_1118 [32];
  uchar local_10e8 [8];
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_10e0;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_10d0;
  int local_10c0 [2];
  int local_10b8 [2];
  UWorld *local_10b0;
  wchar_t *local_10a8;
  longlong *local_10a0;
  FString local_1090;
  TStringBuilderBase<wchar_t> local_1078;
  wchar_t local_1058 [2048];
  ulonglong local_58 [3];
  
  pFVar6 = param_6;
  pFVar14 = param_5;
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_1118;
  plVar19 = *(longlong **)&this->field_0x18;
  if (*plVar19 != 0) {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_10c0[0] = param_1;
    local_10b8[0] = param_3;
    local_10a0 = plVar19;
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FString::FString(&EZEventName,L"Core.ServerRPCDoSEscalation");
      atexit(`FRPCDoSAnalyticsData::FireEvent_ServerRPCDoSEscalation'::__l5::
             _dynamic_atexit_destructor_for__EZEventName__);
      _Init_thread_footer(&::_TSS0);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FString::FString(&EZAttrib_AnalyticsSeverityIndex,L"AnalyticsSeverityIndex");
      atexit(`FRPCDoSAnalyticsData::FireEvent_ServerRPCDoSEscalation'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_AnalyticsSeverityIndex__);
      _Init_thread_footer(&::_TSS1);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      ::FString::FString(&EZAttrib_AnalyticsSeverityCategory,L"AnalyticsSeverityCategory");
      atexit(`FRPCDoSAnalyticsData::FireEvent_ServerRPCDoSEscalation'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_AnalyticsSeverityCategory__);
      _Init_thread_footer(&::_TSS2);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
      ::FString::FString(&EZAttrib_WorstCountPerSec,L"WorstCountPerSec");
      atexit(`FRPCDoSAnalyticsData::FireEvent_ServerRPCDoSEscalation'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_WorstCountPerSec__);
      _Init_thread_footer(&::_TSS3);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
      ::FString::FString(&EZAttrib_WorstTimePerSec,L"WorstTimePerSec");
      atexit(`FRPCDoSAnalyticsData::FireEvent_ServerRPCDoSEscalation'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_WorstTimePerSec__);
      _Init_thread_footer(&::_TSS4);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
      ::FString::FString(&EZAttrib_PlayerIP,L"PlayerIP");
      atexit(`FRPCDoSAnalyticsData::FireEvent_ServerRPCDoSEscalation'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_PlayerIP__);
      _Init_thread_footer(&::_TSS5);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
      ::FString::FString(&EZAttrib_PlayerUID,L"PlayerUID");
      atexit(`FRPCDoSAnalyticsData::FireEvent_ServerRPCDoSEscalation'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_PlayerUID__);
      _Init_thread_footer(&::_TSS6);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS7) && (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
      ::FString::FString(&EZAttrib_GameThreadCPU,L"GameThreadCPU");
      atexit(`FRPCDoSAnalyticsData::FireEvent_ServerRPCDoSEscalation'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_GameThreadCPU__);
      _Init_thread_footer(&::_TSS7);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS8) && (_Init_thread_header(&::_TSS8), ::_TSS8 == -1)) {
      ::FString::FString(&EZAttrib_RPCGroup,L"RPCGroup");
      atexit(`FRPCDoSAnalyticsData::FireEvent_ServerRPCDoSEscalation'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_RPCGroup__);
      _Init_thread_footer(&::_TSS8);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS9) && (_Init_thread_header(&::_TSS9), ::_TSS9 == -1)) {
      ::FString::FString(&EZAttrib_RPCGroupTime,L"RPCGroupTime");
      atexit(`FRPCDoSAnalyticsData::FireEvent_ServerRPCDoSEscalation'::__l5::
             _dynamic_atexit_destructor_for__EZAttrib_RPCGroupTime__);
      _Init_thread_footer(&::_TSS9);
    }
    pUVar11 = (UWorld *)0x0;
    if (*(void **)&this->WorldFunc != (void *)0x0) {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->WorldFunc);
      pcVar4 = *(code **)&this->WorldFunc;
      plVar5 = *(longlong **)&(this->WorldFunc).field_0x28;
      plVar17 = (longlong *)&(this->WorldFunc).field_0x10;
      if (plVar5 != (longlong *)0x0) {
        plVar17 = plVar5;
      }
      uVar10 = (**(code **)(*plVar17 + 8))();
      pUVar11 = (UWorld *)(*pcVar4)(uVar10);
    }
    local_10b0 = pUVar11;
    FVar12 = FWindowsPlatformTime::GetThreadCPUTime();
    uVar16 = (uint)*(float *)((longlong)FVar12 + 4);
    if ((byte)((char)uVar16 - 10U) < 0x51) {
      local_10e8[0] = (char)((uVar16 & 0xff) / 10) * '\n';
    }
    else {
      local_10e8[0] = (char)((uVar16 & 0xff) / 5) * '\x05';
    }
    local_10e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_10e0.ArrayMax = 0;
    DestructItems<FAnalyticsEventAttribute,int>((FAnalyticsEventAttribute *)0x0,0);
    local_10e0.ArrayNum = 0;
    if (local_10e0.ArrayMax != 7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,7,&local_10e0.AllocatorInstance,0,&local_10e0.ArrayMax);
    }
    ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,int>
              (&local_10e0,&EZAttrib_AnalyticsSeverityIndex,local_10c0);
    ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,FString>
              (&local_10e0,&EZAttrib_AnalyticsSeverityCategory,param_2);
    ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,int>
              (&local_10e0,&EZAttrib_WorstCountPerSec,local_10b8);
    ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,double>
              (&local_10e0,&EZAttrib_WorstTimePerSec,&param_4);
    ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,FString>
              (&local_10e0,&EZAttrib_PlayerIP,pFVar14);
    ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,FString>
              (&local_10e0,&EZAttrib_PlayerUID,pFVar6);
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,FString,unsigned_char>
              (&local_10e0,&EZAttrib_GameThreadCPU,local_10e8);
    pTVar7 = param_7;
    iVar2 = param_7->ArrayNum;
    if (0 < iVar2) {
      this_00 = (FName *)(param_7->AllocatorInstance).Data;
      local_1078.Base = local_1058;
      local_1078.CurPos = local_1058;
      local_1078.End = (wchar_t *)local_58;
      pFVar1 = this_00 + iVar2;
      local_1078.bIsDynamic = false;
      local_1078.bIsExternal = false;
      while( true ) {
        if (pTVar7->ArrayNum != iVar2) {
          local_10e8[1] = 0;
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_10e8 + 1);
        }
        if (this_00 == pFVar1) break;
        if (0 < (int)((longlong)local_1078.CurPos - (longlong)local_1078.Base >> 1)) {
          if (local_1078.End < local_1078.CurPos + 2) {
            TStringBuilderBase<wchar_t>::Extend(&local_1078,2);
          }
          pvVar13 = FGenericPlatformString::Memcpy(local_1078.CurPos,L", ",4);
          local_1078.CurPos = (wchar_t *)((longlong)pvVar13 + 4);
        }
        pFVar14 = ::FName::ToString(this_00,&local_1090);
        if ((pFVar14->Data).ArrayNum == 0) {
          _Str = L"";
LAB_1473fd3e3:
          sVar15 = wcslen(_Str);
          iVar9 = (int)sVar15;
        }
        else {
          _Str = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
          iVar9 = 0;
          if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) goto LAB_1473fd3e3;
        }
        uVar18 = (ulong64)iVar9;
        if (local_1078.End < local_1078.CurPos + uVar18) {
          TStringBuilderBase<wchar_t>::Extend(&local_1078,uVar18);
        }
        if (iVar9 != 0) {
          pvVar13 = FGenericPlatformString::Memcpy(local_1078.CurPos,_Str,uVar18 * 2);
          local_1078.CurPos = (wchar_t *)((longlong)pvVar13 + uVar18 * 2);
        }
        if (local_1090.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1090.Data.AllocatorInstance.Data);
        }
        this_00 = this_00 + 1;
      }
      if (local_1078.End < local_1078.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_1078,1);
      }
      *local_1078.CurPos = L'\0';
      local_10a8 = local_1078.Base;
      local_10d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_10d0.ArrayMax = 0;
      DestructItems<FAnalyticsEventAttribute,int>((FAnalyticsEventAttribute *)0x0,0);
      local_10d0.ArrayNum = 0;
      if (local_10d0.ArrayMax != 2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,2,&local_10d0.AllocatorInstance,0,&local_10d0.ArrayMax);
      }
      ImplMakeAnalyticsEventAttributeArray::
      AddElement<TSizedDefaultAllocator<32>,FString,wchar_t_const_*>
                (&local_10d0,&EZAttrib_RPCGroup,&local_10a8);
      ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,double>
                (&local_10d0,&EZAttrib_RPCGroupTime,&param_8);
      iVar2 = local_10d0.ArrayNum;
      if (local_10d0.ArrayNum != 0) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x30,8,local_10d0.ArrayNum,&local_10e0.AllocatorInstance,
                           &local_10e0.ArrayNum,&local_10e0.ArrayMax);
        ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>
                  (local_10e0.AllocatorInstance.Data + (longlong)iVar9 * 0x30,
                   (FAnalyticsEventAttribute *)local_10d0.AllocatorInstance.Data,iVar2);
      }
      DestructItems<FAnalyticsEventAttribute,int>
                ((FAnalyticsEventAttribute *)local_10d0.AllocatorInstance.Data,local_10d0.ArrayNum);
      if ((FAnalyticsEventAttribute *)local_10d0.AllocatorInstance.Data !=
          (FAnalyticsEventAttribute *)0x0) {
        FMemory::Free(local_10d0.AllocatorInstance.Data);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1078);
      pUVar11 = local_10b0;
      plVar19 = local_10a0;
    }
    TMulticastDelegate<void___cdecl(UWorld_*,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&GModifyRPCDoSEscalationAnalytics,pUVar11,&local_10e0);
    if ((*plVar19 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(*(longlong *)*plVar19 + 0x80))((longlong *)*plVar19,&EZEventName,&local_10e0);
    DestructItems<FAnalyticsEventAttribute,int>
              ((FAnalyticsEventAttribute *)local_10e0.AllocatorInstance.Data,local_10e0.ArrayNum);
    if ((FAnalyticsEventAttribute *)local_10e0.AllocatorInstance.Data !=
        (FAnalyticsEventAttribute *)0x0) {
      FMemory::Free(local_10e0.AllocatorInstance.Data);
    }
  }
  return;
}

// SendAnalytics @ 1474144c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FRPCDoSAnalyticsData::SendAnalytics(FRPCDoSAnalyticsData *this)

{
  undefined1 *this_00;
  FScriptContainerElement *pFVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  FName *pFVar6;
  longlong lVar7;
  bool bVar8;
  double dVar9;
  TConsoleVariableData<int> *pTVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  URPCDoSDetectionConfig *pUVar18;
  FString *pFVar19;
  size_t sVar20;
  UWorld *pUVar21;
  wchar_t *pwVar22;
  longlong *plVar23;
  uchar uVar24;
  FScriptContainerElement *pFVar25;
  TSharedPtr<FRPCAnalytics,1> *pTVar26;
  wchar_t *pwVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  code *pcVar32;
  ulonglong uVar33;
  FRPCDoSAnalyticsData *pFVar34;
  longlong lVar35;
  undefined1 auStackY_c18 [32];
  TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> local_bb8;
  ForAnyElementType local_b78;
  undefined8 local_b70;
  undefined4 local_b68 [2];
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> local_b60;
  TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> local_b48;
  undefined2 local_b08 [4];
  undefined2 local_b00 [4];
  undefined2 local_af8 [4];
  undefined2 local_af0 [4];
  undefined2 local_ae8 [4];
  undefined2 local_ae0 [4];
  undefined2 local_ad8 [4];
  undefined2 local_ad0 [4];
  undefined2 local_ac8 [4];
  undefined2 local_ac0 [4];
  undefined2 local_ab8 [4];
  undefined2 local_ab0 [4];
  undefined2 local_aa8 [4];
  undefined2 local_aa0 [4];
  undefined2 local_a98 [4];
  undefined2 local_a90 [4];
  undefined2 local_a88 [8];
  TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> local_a78;
  FRPCDoSAnalyticsData *local_a38;
  FString local_a30;
  FString local_a20;
  FString local_a10;
  longlong local_a00;
  FJsonFragment local_9f8;
  FJsonFragment local_9e8;
  FJsonFragment local_9d8;
  FString local_9c8;
  FString local_9b8;
  FString local_9a8;
  FString local_998;
  longlong *local_988;
  FRPCDoSAnalyticsVars local_978;
  FName local_8f8;
  uint uStack_8f0;
  undefined4 uStack_8ec;
  TStringView<wchar_t> local_8e8;
  FName local_8d8;
  uint uStack_8d0;
  undefined4 uStack_8cc;
  TStringView<wchar_t> local_8c8;
  wchar_t *local_8b8;
  int iStack_8b0;
  undefined4 uStack_8ac;
  TStringView<wchar_t> local_8a8;
  FScriptContainerElement *local_898;
  uint uStack_890;
  undefined4 uStack_88c;
  FScriptContainerElement *local_888;
  uint uStack_880;
  undefined4 uStack_87c;
  wchar_t *local_878;
  int iStack_870;
  undefined4 uStack_86c;
  FScriptContainerElement *local_868;
  int iStack_860;
  undefined4 uStack_85c;
  TStringView<wchar_t> local_858;
  FName local_848;
  int iStack_840;
  undefined4 uStack_83c;
  TStringView<wchar_t> local_838;
  FName local_828;
  uint uStack_820;
  undefined4 uStack_81c;
  TStringView<wchar_t> local_818;
  FScriptContainerElement *local_808;
  int iStack_800;
  undefined4 uStack_7fc;
  TStringView<wchar_t> local_7f8;
  wchar_t *local_7e8;
  uint uStack_7e0;
  undefined4 uStack_7dc;
  TStringView<wchar_t> local_7d8;
  FScriptContainerElement *local_7c8;
  int iStack_7c0;
  undefined4 uStack_7bc;
  TStringView<wchar_t> local_7b8;
  wchar_t *local_7a8;
  uint uStack_7a0;
  undefined4 uStack_79c;
  TStringView<wchar_t> local_798;
  FScriptContainerElement *local_788;
  int iStack_780;
  undefined4 uStack_77c;
  TStringView<wchar_t> local_778;
  FScriptContainerElement *local_768;
  uint uStack_760;
  undefined4 uStack_75c;
  TStringView<wchar_t> local_758;
  wchar_t *local_748;
  uint uStack_740;
  undefined4 uStack_73c;
  TStringView<wchar_t> local_738;
  FScriptContainerElement *local_728;
  uint uStack_720;
  undefined4 uStack_71c;
  TStringView<wchar_t> local_718;
  FScriptContainerElement *local_708;
  uint uStack_700;
  undefined4 uStack_6fc;
  TStringView<wchar_t> local_6f8;
  wchar_t *local_6e8;
  uint uStack_6e0;
  undefined4 uStack_6dc;
  TStringView<wchar_t> local_6d8;
  FScriptContainerElement *local_6c8;
  uint uStack_6c0;
  undefined4 uStack_6bc;
  TStringView<wchar_t> local_6b8;
  FScriptContainerElement *local_6a8;
  uint uStack_6a0;
  undefined4 uStack_69c;
  FScriptContainerElement *local_698;
  uint uStack_690;
  undefined4 uStack_68c;
  longlong local_688;
  int local_680;
  longlong local_678;
  undefined1 local_670;
  longlong local_668;
  undefined4 local_660;
  undefined1 local_65c;
  undefined4 local_658;
  FString local_650;
  FString local_640;
  TStringView<wchar_t> local_628;
  FString local_618;
  TStringView<wchar_t> local_608;
  TStringView<wchar_t> local_5f8;
  TStringView<wchar_t> local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  TStringView<wchar_t> local_5a8;
  TStringBuilderBase<wchar_t> local_598;
  wchar_t local_578 [32];
  TStringBuilderBase<wchar_t> local_538;
  wchar_t local_518 [32];
  TStringBuilderBase<wchar_t> local_4d8;
  wchar_t local_4b8 [32];
  TStringBuilderBase<wchar_t> local_478;
  wchar_t local_458 [512];
  ulonglong local_58 [6];
  
  pTVar10 = CVarRPCDoSAnalyticsMaxRPCs.Ref;
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_c18;
  local_978.PlayerIP.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_978.PlayerIP.Data.ArrayNum = 0;
  local_978.PlayerIP.Data.ArrayMax = 0;
  local_978.PlayerUID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_978.PlayerUID.Data.ArrayNum = 0;
  local_978.PlayerUID.Data.ArrayMax = 0;
  local_978.MaxSeverityIndex = 0;
  local_978.MaxSeverityCategory.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_978.MaxSeverityCategory.Data.ArrayNum = 0;
  local_978.MaxSeverityCategory.Data.ArrayMax = 0;
  local_978.MaxAnalyticsSeverityIndex = 0;
  local_978.MaxAnalyticsSeverityCategory.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_978.MaxAnalyticsSeverityCategory.Data.ArrayNum = 0;
  local_978.MaxAnalyticsSeverityCategory.Data.ArrayMax = 0;
  local_978.RPCTrackingAnalytics.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_978.RPCTrackingAnalytics.ArrayNum = 0;
  local_978.RPCTrackingAnalytics.ArrayMax = 0;
  local_a38 = this;
  bVar13 = IsInParallelGameThread();
  if (bVar13) {
LAB_14741456e:
    lVar35 = 0;
  }
  else {
    bVar13 = IsInGameThread();
    lVar35 = 4;
    if (bVar13) goto LAB_14741456e;
  }
  local_978.MaxRPCAnalytics = *(int *)((longlong)pTVar10->ShadowedValue + lVar35);
  plVar4 = *(longlong **)&this->field_0x18;
  local_978.MaxPlayerSeverity.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_978.MaxPlayerSeverity.ArrayNum = 0;
  local_978.MaxPlayerSeverity.ArrayMax = 0;
  local_988 = plVar4;
  bVar13 = FRPCDoSAnalyticsVars::operator==((FRPCDoSAnalyticsVars *)&this->field_0x20,&local_978);
  if ((bVar13) || (*plVar4 == 0)) goto LAB_147417b45;
  pUVar18 = URPCDoSDetectionConfig::Get(*(FName *)(*(longlong *)&this->field_0x18 + 0x10));
  if (pUVar18 == (URPCDoSDetectionConfig *)0x0) {
LAB_147414616:
    bVar13 = false;
  }
  else {
    uVar16 = rand();
    bVar13 = true;
    if (pUVar18->RPCAnalyticsOverrideChance <= (double)((float)(uVar16 & 0x7fff) * __real_38000100))
    goto LAB_147414616;
  }
  dVar9 = __real_3f1a36e2eb1c432d;
  uVar16 = *(int *)&this->field_0x78 - 1;
  local_b78.Data = (FScriptContainerElement *)0x0;
  local_b70 = 0;
  if (-1 < (int)uVar16) {
    this_00 = &this->field_0x70;
    lVar35 = (longlong)(int)uVar16 << 4;
    do {
      uVar29 = 0;
      if ((int)uVar16 < *(int *)&this->field_0x78) {
        uVar29 = ~uVar16 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      plVar4 = *(longlong **)(lVar35 + *(longlong *)this_00);
      if ((((10 < (int)plVar4[1]) || (dVar9 < (double)plVar4[2])) || (dVar9 < (double)plVar4[4])) ||
         ((10 < (int)plVar4[5] || (0 < (int)plVar4[6])))) {
        if (pUVar18 != (URPCDoSDetectionConfig *)0x0) {
          local_688 = *plVar4;
          local_678 = plVar4[2];
          local_670 = (undefined1)plVar4[3];
          local_660 = (undefined4)plVar4[5];
          local_65c = *(undefined1 *)((longlong)plVar4 + 0x2c);
          local_668 = plVar4[4];
          local_658 = (undefined4)plVar4[6];
          local_680 = (int)plVar4[1];
          ::FString::FString(&local_650,(FString *)(plVar4 + 7));
          ::FString::FString(&local_640,(FString *)(plVar4 + 9));
          pFVar25 = (pUVar18->RPCAnalyticsThresholds).AllocatorInstance.Data;
          pFVar1 = pFVar25 + (longlong)(pUVar18->RPCAnalyticsThresholds).ArrayNum * 0x18;
          for (; pFVar25 != pFVar1; pFVar25 = pFVar25 + 0x18) {
            if (*(longlong *)pFVar25 == local_688) {
              if (local_640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_640.Data.AllocatorInstance.Data);
              }
              if (local_650.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_650.Data.AllocatorInstance.Data);
              }
              if (*(int *)(pFVar25 + 8) == -1) {
                if (*(double *)(pFVar25 + 0x10) == 0.0) goto LAB_1474147a9;
LAB_14741486d:
                bVar14 = false;
              }
              else {
                if ((int)plVar4[1] <= *(int *)(pFVar25 + 8)) goto LAB_14741486d;
                bVar14 = true;
              }
              if ((*(double *)(pFVar25 + 0x10) == 0.0) ||
                 ((double)plVar4[2] <= *(double *)(pFVar25 + 0x10))) {
                bVar8 = false;
              }
              else {
                bVar8 = true;
              }
              if ((bVar14) || (bVar8)) goto LAB_1474147a9;
              uVar29 = 0;
              if ((int)uVar16 < *(int *)&local_a38->field_0x78) {
                uVar29 = ~uVar16 >> 0x1f;
              }
              if ((uVar29 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar32 = (code *)swi(3);
                (*pcVar32)();
                return;
              }
              pTVar26 = (TSharedPtr<FRPCAnalytics,1> *)(*(longlong *)this_00 + lVar35);
              if (((local_b78.Data <= pTVar26) &&
                  (pTVar26 < (TSharedPtr<FRPCAnalytics,1> *)
                             (local_b78.Data + (longlong)local_b70._4_4_ * 0x10))) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar14)) {
                pcVar32 = (code *)swi(3);
                (*pcVar32)();
                return;
              }
              iVar17 = (int)local_b70;
              if ((int)local_b70 == local_b70._4_4_) {
                iVar17 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_b78,(int *)((longlong)&local_b70 + 4));
              }
              local_b70 = CONCAT44(local_b70._4_4_,iVar17 + 1);
              *(FRPCAnalytics **)&local_b78.Data[(longlong)iVar17 * 0x10].field_0x0 =
                   pTVar26->Object;
              pTVar5 = (pTVar26->SharedReferenceCount).ReferenceController;
              *(TReferenceControllerBase<1> **)(local_b78.Data + (longlong)iVar17 * 0x10 + 8) =
                   pTVar5;
              if (pTVar5 == (TReferenceControllerBase<1> *)0x0) goto LAB_1474149b3;
              LOCK();
              pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
              UNLOCK();
              TArray<TSharedPtr<FRPCAnalytics,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                        ((TArray<TSharedPtr<FRPCAnalytics,1>,TSizedDefaultAllocator<32>_> *)this_00,
                         uVar16,No);
              goto LAB_1474147a9;
            }
          }
          if (local_640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_640.Data.AllocatorInstance.Data);
          }
          if (local_650.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_650.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
LAB_1474149b3:
        TArray<TSharedPtr<FRPCAnalytics,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                  ((TArray<TSharedPtr<FRPCAnalytics,1>,TSizedDefaultAllocator<32>_> *)this_00,uVar16
                   ,No);
      }
LAB_1474147a9:
      lVar35 = lVar35 + -0x10;
      uVar16 = uVar16 - 1;
      this = local_a38;
    } while (-1 < (int)uVar16);
  }
  uVar30 = 0;
  if ((((4 < (byte)LogNet._0_1_) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
       4 < (byte)LogNet._0_1_)) &&
      ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
       4 < (byte)LogNet._0_1_ &&
       ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
        4 < (byte)LogNet._0_1_ &&
        (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
        4 < (byte)LogNet._0_1_)))))) &&
     (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
     4 < (byte)LogNet._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
  }
  uVar16 = 0;
  uVar31 = uVar30;
  uVar33 = uVar30;
  if (0 < *(int *)&this->field_0x78) {
    do {
      uVar28 = (uint)uVar33;
      uVar29 = uVar16;
      if ((int)uVar28 < *(int *)&this->field_0x78) {
        uVar29 = ~uVar28 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      pFVar6 = *(FName **)(uVar31 + *(longlong *)&this->field_0x70);
      if ((4 < (byte)LogNet._0_1_) &&
         (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
         4 < (byte)LogNet._0_1_)) {
        ::FName::ToString(pFVar6,&local_5d8);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u______Name___s_1516ad840,
                   (FLogCategoryBase *)&LogNet);
        if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
        }
        if (((((4 < (byte)LogNet._0_1_) &&
              (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
              4 < (byte)LogNet._0_1_)) &&
             (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
             4 < (byte)LogNet._0_1_)) &&
            (((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
              4 < (byte)LogNet._0_1_ &&
              (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
              4 < (byte)LogNet._0_1_)) &&
             ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
              4 < (byte)LogNet._0_1_ &&
              ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
               4 < (byte)LogNet._0_1_ &&
               (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
               4 < (byte)LogNet._0_1_)))))))) &&
           (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
           4 < (byte)LogNet._0_1_)) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        }
      }
      uVar31 = uVar31 + 0x10;
      uVar33 = (ulonglong)(uVar28 + 1);
    } while ((int)(uVar28 + 1) < *(int *)&this->field_0x78);
  }
  if (4 < (byte)LogNet._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
  }
  uVar31 = uVar30;
  uVar33 = uVar30;
  if (0 < (int)local_b70) {
    do {
      uVar28 = (uint)uVar33;
      uVar29 = uVar16;
      if ((int)uVar28 < (int)local_b70) {
        uVar29 = ~uVar28 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      pFVar6 = *(FName **)(local_b78.Data + uVar31);
      if ((4 < (byte)LogNet._0_1_) &&
         (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
         4 < (byte)LogNet._0_1_)) {
        ::FName::ToString(pFVar6,&local_5c8);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
        }
        if ((((((4 < (byte)LogNet._0_1_) &&
               (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
               4 < (byte)LogNet._0_1_)) &&
              (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
              4 < (byte)LogNet._0_1_)) &&
             ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
              4 < (byte)LogNet._0_1_ &&
              (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
              4 < (byte)LogNet._0_1_)))) &&
            (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
            4 < (byte)LogNet._0_1_)) &&
           (((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
             4 < (byte)LogNet._0_1_ &&
             (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
             4 < (byte)LogNet._0_1_)) &&
            (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
            4 < (byte)LogNet._0_1_)))) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        }
      }
      uVar31 = uVar31 + 0x10;
      uVar33 = (ulonglong)(uVar28 + 1);
    } while ((int)(uVar28 + 1) < (int)local_b70);
  }
  if (4 < (byte)LogNet._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
  }
  if (0 < *(int *)&this->field_0x90) {
    do {
      uVar28 = (uint)uVar30;
      uVar29 = uVar16;
      if ((int)uVar28 < *(int *)&this->field_0x90) {
        uVar29 = ~uVar28 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      if ((((4 < (byte)LogNet._0_1_) &&
           (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
           4 < (byte)LogNet._0_1_)) &&
          (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
          4 < (byte)LogNet._0_1_)) &&
         (((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
           4 < (byte)LogNet._0_1_ &&
           (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
           4 < (byte)LogNet._0_1_)) &&
          ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
           4 < (byte)LogNet._0_1_ &&
           (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
           4 < (byte)LogNet._0_1_)))))) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      uVar30 = (ulonglong)(uVar28 + 1);
    } while ((int)(uVar28 + 1) < *(int *)&this->field_0x90);
  }
  local_a00 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  piVar2 = (int *)(local_a00 + 0x9d4c);
  if ((*(int *)(local_a00 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&EZEventName,L"Core.ServerRPCDoS");
    atexit(`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
           _dynamic_atexit_destructor_for__EZEventName__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar2 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FString::FString(&EZAttrib_MaxSeverityIndex,L"MaxSeverityIndex");
    atexit(`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
           _dynamic_atexit_destructor_for__EZAttrib_MaxSeverityIndex__);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar2 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FString::FString(&EZAttrib_MaxSeverityCategory,L"MaxSeverityCategory");
    atexit(`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
           _dynamic_atexit_destructor_for__EZAttrib_MaxSeverityCategory__);
    _Init_thread_footer(&::_TSS2);
  }
  if ((*(int *)(local_a00 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    ::FString::FString(&EZAttrib_MaxAnalyticsSeverityIndex,L"MaxAnalyticsSeverityIndex");
    atexit(`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
           _dynamic_atexit_destructor_for__EZAttrib_MaxAnalyticsSeverityIndex__);
    _Init_thread_footer(&::_TSS3);
  }
  lVar35 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar35 + 0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    ::FString::FString(&EZAttrib_MaxAnalyticsSeverityCategory,L"MaxAnalyticsSeverityCategory");
    atexit(`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
           _dynamic_atexit_destructor_for__EZAttrib_MaxAnalyticsSeverityCategory__);
    _Init_thread_footer(&::_TSS4);
  }
  if ((*(int *)(lVar35 + 0x9d4c) < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
    ::FString::FString(&EZAttrib_RPCs,L"RPCs");
    atexit(`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
           _dynamic_atexit_destructor_for__EZAttrib_RPCs__);
    _Init_thread_footer(&::_TSS5);
  }
  if ((*(int *)(lVar35 + 0x9d4c) < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
    ::FString::FString(&EZAttrib_FilteredRPCs,L"FilteredRPCs");
    atexit(`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
           _dynamic_atexit_destructor_for__EZAttrib_FilteredRPCs__);
    _Init_thread_footer(&::_TSS6);
  }
  lVar35 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar35 + 0x9d4c) < ::_TSS7) && (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
    ::FString::FString(&EZAttrib_RPCName,L"RPCName");
    atexit(`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
           _dynamic_atexit_destructor_for__EZAttrib_RPCName__);
    _Init_thread_footer(&::_TSS7);
  }
  if ((*(int *)(lVar35 + 0x9d4c) < ::_TSS8) && (_Init_thread_header(&::_TSS8), ::_TSS8 == -1)) {
    ::FString::FString(&EZAttrib_MaxCountPerSec,L"MaxCountPerSec");
    atexit(`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
           _dynamic_atexit_destructor_for__EZAttrib_MaxCountPerSec__);
    _Init_thread_footer(&::_TSS8);
  }
  if ((*(int *)(lVar35 + 0x9d4c) < ::_TSS9) && (_Init_thread_header(&::_TSS9), ::_TSS9 == -1)) {
    ::FString::FString(&EZAttrib_MaxTimePerSec,L"MaxTimePerSec");
    atexit(`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
           _dynamic_atexit_destructor_for__EZAttrib_MaxTimePerSec__);
    _Init_thread_footer(&::_TSS9);
  }
  lVar35 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar35 + 0x9d4c) < ::_TSS10) && (_Init_thread_header(&::_TSS10), ::_TSS10 == -1)) {
    ::FString::FString(&EZAttrib_MaxTimeGameThreadCPU,L"MaxTimeGameThreadCPU");
    atexit(`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
           _dynamic_atexit_destructor_for__EZAttrib_MaxTimeGameThreadCPU__);
    _Init_thread_footer(&::_TSS10);
  }
  if ((*(int *)(lVar35 + 0x9d4c) < ::_TSS11) && (_Init_thread_header(&::_TSS11), ::_TSS11 == -1)) {
    ::FString::FString(&EZAttrib_MaxSinglePacketRPCTime,L"MaxSinglePacketRPCTime");
    atexit(`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
           _dynamic_atexit_destructor_for__EZAttrib_MaxSinglePacketRPCTime__);
    _Init_thread_footer(&::_TSS11);
  }
  if ((*(int *)(lVar35 + 0x9d4c) < ::_TSS12) && (_Init_thread_header(&::_TSS12), ::_TSS12 == -1)) {
    ::FString::FString(&EZAttrib_SinglePacketRPCCount,L"SinglePacketRPCCount");
    atexit(`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
           _dynamic_atexit_destructor_for__EZAttrib_SinglePacketRPCCount__);
    _Init_thread_footer(&::_TSS12);
  }
  lVar35 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar35 + 0x9d4c) < ::_TSS13) && (_Init_thread_header(&::_TSS13), ::_TSS13 == -1)) {
    ::FString::FString(&EZAttrib_SinglePacketGameThreadCPU,L"SinglePacketGameThreadCPU");
    atexit(`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
           _dynamic_atexit_destructor_for__EZAttrib_SinglePacketGameThreadCPU__);
    _Init_thread_footer(&::_TSS13);
  }
  if ((*(int *)(lVar35 + 0x9d4c) < ::_TSS14) && (_Init_thread_header(&::_TSS14), ::_TSS14 == -1)) {
    ::FString::FString(&EZAttrib_BlockedCount,L"BlockedCount");
    atexit(`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
           _dynamic_atexit_destructor_for__EZAttrib_BlockedCount__);
    _Init_thread_footer(&::_TSS14);
  }
  if ((*(int *)(lVar35 + 0x9d4c) < ::_TSS15) && (_Init_thread_header(&::_TSS15), ::_TSS15 == -1)) {
    ::FString::FString(&EZAttrib_PlayerIP,L"PlayerIP");
    atexit(`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
           _dynamic_atexit_destructor_for__EZAttrib_PlayerIP__);
    _Init_thread_footer(&::_TSS15);
  }
  lVar35 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar35 + 0x9d4c) < _TSS16) && (_Init_thread_header(&_TSS16), _TSS16 == -1)) {
    ::FString::FString(&EZAttrib_PlayerUID,L"PlayerUID");
    atexit(`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
           _dynamic_atexit_destructor_for__EZAttrib_PlayerUID__);
    _Init_thread_footer(&_TSS16);
  }
  if ((*(int *)(lVar35 + 0x9d4c) < _TSS17) && (_Init_thread_header(&_TSS17), _TSS17 == -1)) {
    ::FString::FString(&EZAttrib_MaxPlayerSeverity,L"MaxPlayerSeverity");
    atexit(`FRPCDoSAnalyticsData::SendAnalytics'::__l5::
           _dynamic_atexit_destructor_for__EZAttrib_MaxPlayerSeverity__);
    _Init_thread_footer(&_TSS17);
  }
  uVar31 = 0;
  local_a20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a20.Data.ArrayNum = 0;
  local_a20.Data.ArrayMax = 0;
  TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::
  TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>(&local_a78,&local_a20,0);
  local_a78._padding_ =
       (longlong)&`FRPCDoSAnalyticsData::SendAnalytics'::`5'::FAnalyticsJsonWriter::_vftable_;
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_a78);
  pFVar34 = local_a38;
  uVar30 = uVar31;
  if (0 < *(int *)&local_a38->field_0x78) {
    do {
      uVar29 = (uint)uVar31;
      uVar16 = 0;
      if ((int)uVar29 < *(int *)&pFVar34->field_0x78) {
        uVar16 = ~uVar29 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      pFVar6 = *(FName **)(uVar30 + *(longlong *)&pFVar34->field_0x70);
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_a78);
      pFVar19 = ::FName::ToString(pFVar6,&local_5b8);
      uVar28 = 0;
      uVar16 = uVar28;
      if ((int)((int)local_a78._padding_ - 1U) < (int)local_a78._padding_) {
        uVar16 = ~((int)local_a78._padding_ - 1U) >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      if ((*(int *)(local_a78._padding_ + (longlong)((int)local_a78._padding_ + -1) * 4) != 6) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Stack.Top() == EJson::Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                              ,0x110,L""), bVar14)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_a78,
                 &EZAttrib_RPCName);
      local_6c8 = (pFVar19->Data).AllocatorInstance.Data;
      iVar17 = (pFVar19->Data).ArrayNum;
      uStack_6c0 = iVar17 - 1;
      if (iVar17 == 0) {
        uStack_6c0 = uVar28;
      }
      local_6b8._12_4_ = uStack_6bc;
      local_6b8.Size = uStack_6c0;
      local_6b8.DataPtr = (wchar_t *)local_6c8;
      if (*(code **)(local_a78._padding_ + 0x28) ==
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue) {
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_a78,&local_6b8
                  );
      }
      else {
        (**(code **)(local_a78._padding_ + 0x28))();
      }
      local_a78._padding_._0_4_ = 7;
      if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
      WriteValue<int_const_&,FString_const_&>
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_a78,
                 &EZAttrib_MaxCountPerSec,(int *)(pFVar6 + 1));
      uVar16 = uVar28;
      if ((int)((int)local_a78._padding_ - 1U) < (int)local_a78._padding_) {
        uVar16 = ~((int)local_a78._padding_ - 1U) >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      if ((*(int *)(local_a78._padding_ + (longlong)((int)local_a78._padding_ + -1) * 4) != 6) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Stack.Top() == EJson::Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                              ,0x110,L""), bVar14)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_a78,
                 &EZAttrib_MaxTimePerSec);
      lVar35 = local_a78._padding_;
      ::FString::PrintfImpl(&local_9c8,L"%.17g");
      local_6a8 = local_9c8.Data.AllocatorInstance.Data;
      uStack_6a0 = local_9c8.Data.ArrayNum - 1;
      if (local_9c8.Data.ArrayNum == 0) {
        uStack_6a0 = uVar28;
      }
      local_5a8._12_4_ = uStack_69c;
      local_5a8.Size = uStack_6a0;
      local_5a8.DataPtr = (wchar_t *)local_9c8.Data.AllocatorInstance.Data;
      TJsonPrintPolicy<wchar_t>::WriteString((FArchive *)lVar35,&local_5a8);
      if (local_9c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9c8.Data.AllocatorInstance.Data);
      }
      local_a78._padding_._0_4_ = 8;
      bVar3 = (byte)pFVar6[3].ComparisonIndex.Value;
      if ((byte)(bVar3 - 10) < 0x51) {
        uVar24 = (bVar3 / 10) * '\n';
      }
      else {
        uVar24 = (bVar3 / 5) * '\x05';
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValue<FString_const_&>
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_a78,
                 &EZAttrib_MaxTimeGameThreadCPU,uVar24);
      uVar28 = 0;
      uVar16 = uVar28;
      if ((int)((int)local_a78._padding_ - 1U) < (int)local_a78._padding_) {
        uVar16 = ~((int)local_a78._padding_ - 1U) >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      if ((*(int *)(local_a78._padding_ + (longlong)((int)local_a78._padding_ + -1) * 4) != 6) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Stack.Top() == EJson::Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                              ,0x110,L""), bVar14)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_a78,
                 &EZAttrib_MaxSinglePacketRPCTime);
      lVar35 = local_a78._padding_;
      ::FString::PrintfImpl(&local_9b8,L"%.17g");
      local_698 = local_9b8.Data.AllocatorInstance.Data;
      uStack_690 = local_9b8.Data.ArrayNum - 1;
      if (local_9b8.Data.ArrayNum == 0) {
        uStack_690 = uVar28;
      }
      local_628._12_4_ = uStack_68c;
      local_628.Size = uStack_690;
      local_628.DataPtr = (wchar_t *)local_9b8.Data.AllocatorInstance.Data;
      TJsonPrintPolicy<wchar_t>::WriteString((FArchive *)lVar35,&local_628);
      if (local_9b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9b8.Data.AllocatorInstance.Data);
      }
      local_a78._padding_._0_4_ = 8;
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
      WriteValue<int_const_&,FString_const_&>
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_a78,
                 &EZAttrib_SinglePacketRPCCount,(int *)(pFVar6 + 5));
      bVar3 = (byte)pFVar6[5].Number;
      if ((byte)(bVar3 - 10) < 0x51) {
        uVar24 = (bVar3 / 10) * '\n';
      }
      else {
        uVar24 = (bVar3 / 5) * '\x05';
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValue<FString_const_&>
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_a78,
                 &EZAttrib_SinglePacketGameThreadCPU,uVar24);
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
      WriteValue<int_const_&,FString_const_&>
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_a78,
                 &EZAttrib_BlockedCount,(int *)(pFVar6 + 6));
      uVar16 = uVar28;
      if ((int)((int)local_a78._padding_ - 1U) < (int)local_a78._padding_) {
        uVar16 = ~((int)local_a78._padding_ - 1U) >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      if ((*(int *)(local_a78._padding_ + (longlong)((int)local_a78._padding_ + -1) * 4) != 6) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Stack.Top() == EJson::Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                              ,0x110,L""), bVar14)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_a78,
                 &EZAttrib_PlayerIP);
      local_8f8 = pFVar6[7];
      uVar16 = pFVar6[8].ComparisonIndex.Value;
      uStack_8f0 = uVar16 - 1;
      if (uVar16 == 0) {
        uStack_8f0 = 0;
      }
      local_8e8._12_4_ = uStack_8ec;
      local_8e8.Size = uStack_8f0;
      local_8e8.DataPtr = (wchar_t *)local_8f8;
      if (*(code **)(local_a78._padding_ + 0x28) ==
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue) {
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_a78,&local_8e8
                  );
      }
      else {
        (**(code **)(local_a78._padding_ + 0x28))();
      }
      local_a78._padding_._0_4_ = 7;
      uVar16 = 0;
      if ((int)((int)local_a78._padding_ - 1U) < (int)local_a78._padding_) {
        uVar16 = ~((int)local_a78._padding_ - 1U) >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      if ((*(int *)(local_a78._padding_ + (longlong)((int)local_a78._padding_ + -1) * 4) != 6) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Stack.Top() == EJson::Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                              ,0x110,L""), bVar14)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_a78,
                 &EZAttrib_PlayerUID);
      local_8d8 = pFVar6[9];
      uVar16 = pFVar6[10].ComparisonIndex.Value;
      uStack_8d0 = uVar16 - 1;
      if (uVar16 == 0) {
        uStack_8d0 = uVar28;
      }
      local_8c8._12_4_ = uStack_8cc;
      local_8c8.Size = uStack_8d0;
      local_8c8.DataPtr = (wchar_t *)local_8d8;
      if (*(code **)(local_a78._padding_ + 0x28) ==
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue) {
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_a78,&local_8c8
                  );
      }
      else {
        (**(code **)(local_a78._padding_ + 0x28))();
      }
      local_a78._padding_._0_4_ = 7;
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_a78);
      uVar31 = (ulonglong)(uVar29 + 1);
      uVar30 = uVar30 + 0x10;
    } while ((int)(uVar29 + 1) < *(int *)&pFVar34->field_0x78);
  }
  uVar30 = 0;
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayEnd
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_a78);
  TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::Close(&local_a78);
  local_a30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a30.Data.ArrayNum = 0;
  local_a30.Data.ArrayMax = 0;
  TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::
  TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>(&local_b48,&local_a30,0);
  local_b48._padding_ =
       (longlong)&`FRPCDoSAnalyticsData::SendAnalytics'::`5'::FAnalyticsJsonWriter::_vftable_;
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_b48);
  if ((bVar13) && (uVar31 = uVar30, 0 < (int)local_b70)) {
    do {
      uVar28 = (uint)uVar30;
      uVar29 = 0;
      uVar16 = uVar29;
      if ((int)uVar28 < (int)local_b70) {
        uVar16 = ~uVar28 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      pFVar6 = *(FName **)(local_b78.Data + uVar31);
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_b48);
      local_478.Base = local_458;
      local_478.bIsDynamic = false;
      local_478.bIsExternal = false;
      local_478.CurPos = local_458;
      local_478.End = (wchar_t *)local_58;
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_478,L"(*) ",4);
      pFVar19 = ::FName::ToString(pFVar6,&local_618);
      if ((pFVar19->Data).ArrayNum == 0) {
        pwVar27 = L"";
LAB_14741604f:
        sVar20 = wcslen(pwVar27);
        uVar29 = (uint)sVar20;
      }
      else {
        pwVar27 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
        if ((FScriptContainerElement *)pwVar27 != (FScriptContainerElement *)0x0)
        goto LAB_14741604f;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_478,pwVar27,uVar29);
      if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_618.Data.AllocatorInstance.Data);
      }
      if (local_478.End < local_478.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_478,1);
      }
      pwVar27 = local_478.Base;
      *local_478.CurPos = L'\0';
      uVar16 = 0;
      if ((int)((int)local_b48._padding_ - 1U) < (int)local_b48._padding_) {
        uVar16 = ~((int)local_b48._padding_ - 1U) >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      if ((*(int *)(local_b48._padding_ + (longlong)((int)local_b48._padding_ + -1) * 4) != 6) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Stack.Top() == EJson::Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                              ,0x110,L""), bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_b48,
                 &EZAttrib_RPCName);
      local_8b8 = pwVar27;
      pcVar32 = *(code **)(local_b48._padding_ + 0x28);
      iVar17 = 0;
      if (pwVar27 != (wchar_t *)0x0) {
        sVar20 = wcslen(pwVar27);
        iVar17 = (int)sVar20;
      }
      local_8a8._12_4_ = uStack_8ac;
      local_8a8.Size = iVar17;
      local_8a8.DataPtr = local_8b8;
      iStack_8b0 = iVar17;
      if (pcVar32 == TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue) {
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_b48,&local_8a8
                  );
      }
      else {
        (*pcVar32)();
      }
      local_b48._padding_._0_4_ = 7;
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
      WriteValue<int_const_&,FString_const_&>
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_b48,
                 &EZAttrib_MaxCountPerSec,(int *)(pFVar6 + 1));
      uVar29 = 0;
      uVar16 = uVar29;
      if ((int)((int)local_b48._padding_ - 1U) < (int)local_b48._padding_) {
        uVar16 = ~((int)local_b48._padding_ - 1U) >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      if ((*(int *)(local_b48._padding_ + (longlong)((int)local_b48._padding_ + -1) * 4) != 6) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Stack.Top() == EJson::Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                              ,0x110,L""), bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_b48,
                 &EZAttrib_MaxTimePerSec);
      lVar35 = local_b48._padding_;
      ::FString::PrintfImpl(&local_9a8,L"%.17g");
      local_898 = local_9a8.Data.AllocatorInstance.Data;
      uStack_890 = local_9a8.Data.ArrayNum - 1;
      if (local_9a8.Data.ArrayNum == 0) {
        uStack_890 = uVar29;
      }
      local_608._12_4_ = uStack_88c;
      local_608.Size = uStack_890;
      local_608.DataPtr = (wchar_t *)local_9a8.Data.AllocatorInstance.Data;
      TJsonPrintPolicy<wchar_t>::WriteString((FArchive *)lVar35,&local_608);
      if (local_9a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9a8.Data.AllocatorInstance.Data);
      }
      local_b48._padding_._0_4_ = 8;
      bVar3 = (byte)pFVar6[3].ComparisonIndex.Value;
      if ((byte)(bVar3 - 10) < 0x51) {
        uVar24 = (bVar3 / 10) * '\n';
      }
      else {
        uVar24 = (bVar3 / 5) * '\x05';
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValue<FString_const_&>
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_b48,
                 &EZAttrib_MaxTimeGameThreadCPU,uVar24);
      uVar16 = uVar29;
      if ((int)((int)local_b48._padding_ - 1U) < (int)local_b48._padding_) {
        uVar16 = ~((int)local_b48._padding_ - 1U) >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      if ((*(int *)(local_b48._padding_ + (longlong)((int)local_b48._padding_ + -1) * 4) != 6) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Stack.Top() == EJson::Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                              ,0x110,L""), bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_b48,
                 &EZAttrib_MaxSinglePacketRPCTime);
      lVar35 = local_b48._padding_;
      ::FString::PrintfImpl(&local_998,L"%.17g");
      local_888 = local_998.Data.AllocatorInstance.Data;
      uStack_880 = local_998.Data.ArrayNum - 1;
      if (local_998.Data.ArrayNum == 0) {
        uStack_880 = uVar29;
      }
      local_5f8._12_4_ = uStack_87c;
      local_5f8.Size = uStack_880;
      local_5f8.DataPtr = (wchar_t *)local_998.Data.AllocatorInstance.Data;
      TJsonPrintPolicy<wchar_t>::WriteString((FArchive *)lVar35,&local_5f8);
      if (local_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_998.Data.AllocatorInstance.Data);
      }
      local_b48._padding_._0_4_ = 8;
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
      WriteValue<int_const_&,FString_const_&>
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_b48,
                 &EZAttrib_SinglePacketRPCCount,(int *)(pFVar6 + 5));
      bVar3 = (byte)pFVar6[5].Number;
      if ((byte)(bVar3 - 10) < 0x51) {
        uVar24 = (bVar3 / 10) * '\n';
      }
      else {
        uVar24 = (bVar3 / 5) * '\x05';
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValue<FString_const_&>
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_b48,
                 &EZAttrib_SinglePacketGameThreadCPU,uVar24);
      uVar29 = 0;
      uVar16 = uVar29;
      if ((int)((int)local_b48._padding_ - 1U) < (int)local_b48._padding_) {
        uVar16 = ~((int)local_b48._padding_ - 1U) >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      if ((*(int *)(local_b48._padding_ + (longlong)((int)local_b48._padding_ + -1) * 4) != 6) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Stack.Top() == EJson::Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                              ,0x110,L""), bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_b48,
                 &EZAttrib_BlockedCount);
      local_598.Base = local_578;
      local_598.CurPos = local_578;
      local_598.bIsDynamic = false;
      local_598.bIsExternal = false;
      local_598.End = (wchar_t *)&local_538;
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_598,L"%lld");
      local_878 = local_598.Base;
      iStack_870 = (int)((longlong)local_598.CurPos - (longlong)local_598.Base >> 1);
      local_5e8._12_4_ = uStack_86c;
      local_5e8.Size = iStack_870;
      local_5e8.DataPtr = local_598.Base;
      TJsonPrintPolicy<wchar_t>::WriteString((FArchive *)local_b48._padding_,&local_5e8);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_598);
      local_b48._padding_._0_4_ = 8;
      uVar16 = uVar29;
      if ((int)((int)local_b48._padding_ - 1U) < (int)local_b48._padding_) {
        uVar16 = ~((int)local_b48._padding_ - 1U) >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      if ((*(int *)(local_b48._padding_ + (longlong)((int)local_b48._padding_ + -1) * 4) != 6) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Stack.Top() == EJson::Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                              ,0x110,L""), bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      if ((0xc < (uint)local_b48._padding_) ||
         ((0x1017U >> ((uint)local_b48._padding_ & 0x1f) & 1) == 0)) {
        local_b08[0] = 0x2c;
        (**(code **)(*(longlong *)local_b48._padding_ + 0x188))(local_b48._padding_,local_b08,2);
        local_b48._padding_._0_4_ = 1;
      }
      local_868 = EZAttrib_PlayerIP.Data.AllocatorInstance.Data;
      iStack_860 = EZAttrib_PlayerIP.Data.ArrayNum + -1;
      if (EZAttrib_PlayerIP.Data.ArrayNum == 0) {
        iStack_860 = 0;
      }
      local_858._12_4_ = uStack_85c;
      local_858.Size = iStack_860;
      local_858.DataPtr = (wchar_t *)EZAttrib_PlayerIP.Data.AllocatorInstance.Data;
      if (*(code **)(local_b48._padding_ + 0x28) ==
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue) {
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_b48,&local_858
                  );
      }
      else {
        (**(code **)(local_b48._padding_ + 0x28))();
      }
      local_b00[0] = 0x3a;
      (**(code **)(*(longlong *)local_b48._padding_ + 0x188))(local_b48._padding_,local_b00,2);
      local_b48._padding_._0_4_ = 0xc;
      local_848 = pFVar6[7];
      uVar16 = pFVar6[8].ComparisonIndex.Value;
      iStack_840 = uVar16 - 1;
      if (uVar16 == 0) {
        iStack_840 = 0;
      }
      local_838._12_4_ = uStack_83c;
      local_838.Size = iStack_840;
      local_838.DataPtr = (wchar_t *)local_848;
      if (*(code **)(local_b48._padding_ + 0x28) ==
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue) {
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_b48,&local_838
                  );
      }
      else {
        (**(code **)(local_b48._padding_ + 0x28))();
      }
      local_b48._padding_._0_4_ = 7;
      uVar16 = uVar29;
      if ((int)((int)local_b48._padding_ - 1U) < (int)local_b48._padding_) {
        uVar16 = ~((int)local_b48._padding_ - 1U) >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      if ((*(int *)(local_b48._padding_ + (longlong)((int)local_b48._padding_ + -1) * 4) != 6) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Stack.Top() == EJson::Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                              ,0x110,L""), bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_b48,
                 &EZAttrib_PlayerUID);
      local_828 = pFVar6[9];
      uVar16 = pFVar6[10].ComparisonIndex.Value;
      uStack_820 = uVar16 - 1;
      if (uVar16 == 0) {
        uStack_820 = uVar29;
      }
      local_818._12_4_ = uStack_81c;
      local_818.Size = uStack_820;
      local_818.DataPtr = (wchar_t *)local_828;
      if (*(code **)(local_b48._padding_ + 0x28) ==
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue) {
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_b48,&local_818
                  );
      }
      else {
        (**(code **)(local_b48._padding_ + 0x28))();
      }
      local_b48._padding_._0_4_ = 7;
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_b48);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_478);
      uVar30 = (ulonglong)(uVar28 + 1);
      pFVar34 = local_a38;
      uVar31 = uVar31 + 0x10;
    } while ((int)(uVar28 + 1) < (int)local_b70);
  }
  lVar35 = 0;
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayEnd
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_b48);
  TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::Close(&local_b48);
  local_a10.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a10.Data.ArrayNum = 0;
  local_a10.Data.ArrayMax = 0;
  TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::
  TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>(&local_bb8,&local_a10,0);
  local_bb8._padding_ =
       (longlong)&`FRPCDoSAnalyticsData::SendAnalytics'::`5'::FAnalyticsJsonWriter::_vftable_;
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_bb8);
  uVar16 = 0;
  if (0 < *(int *)&pFVar34->field_0x90) {
    do {
      pwVar27 = (wchar_t *)0x0;
      uVar28 = 0;
      uVar29 = uVar28;
      if ((int)uVar16 < *(int *)&pFVar34->field_0x90) {
        uVar29 = ~uVar16 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      lVar7 = *(longlong *)&pFVar34->field_0x88;
      if (0 < (int)(uint)local_bb8._padding_) {
        uVar29 = uVar28;
        if ((int)((uint)local_bb8._padding_ - 1) < (int)(uint)local_bb8._padding_) {
          uVar29 = ~((uint)local_bb8._padding_ - 1) >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar32 = (code *)swi(3);
          (*pcVar32)();
          return;
        }
        if ((((*(int *)(local_bb8._padding_ + (longlong)(int)((uint)local_bb8._padding_ - 1) * 4) !=
               5) && ((uint)local_bb8._padding_ != 0xc)) && ((uint)local_bb8._padding_ != 6)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("CanWriteObjectWithoutIdentifier()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0x6f,L""), bVar13)) {
          pcVar32 = (code *)swi(3);
          (*pcVar32)();
          return;
        }
      }
      if ((0xc < (uint)local_bb8._padding_) ||
         ((0x1017U >> ((uint)local_bb8._padding_ & 0x1f) & 1) == 0)) {
        local_af8[0] = 0x2c;
        (**(code **)(*(longlong *)local_bb8._padding_ + 0x188))(local_bb8._padding_,local_af8,2);
        local_bb8._padding_._0_4_ = 1;
      }
      local_af0[0] = 0x7b;
      (**(code **)(*(longlong *)local_bb8._padding_ + 0x188))(local_bb8._padding_,local_af0,2);
      local_bb8._padding_._4_4_ = local_bb8._padding_._4_4_ + 1;
      local_b68[0] = 6;
      if ((((ulonglong)local_bb8._padding_ <= local_b68) &&
          (local_b68 <
           (undefined4 *)(local_bb8._padding_ + (longlong)(int)local_bb8._padding_._4_4_ * 4))) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      if ((uint)local_bb8._padding_ == local_bb8._padding_._4_4_) {
        local_bb8._padding_._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,(ForAnyElementType *)&local_bb8._padding_,
                        (int *)((longlong)&local_bb8._padding_ + 4));
      }
      iVar17 = (uint)local_bb8._padding_ + 1;
      *(undefined4 *)(local_bb8._padding_ + (longlong)(int)(uint)local_bb8._padding_ * 4) =
           local_b68[0];
      local_bb8._padding_._0_4_ = 2;
      uVar29 = uVar28;
      if ((int)(uint)local_bb8._padding_ < iVar17) {
        uVar29 = ~(uint)local_bb8._padding_ >> 0x1f;
      }
      local_bb8._padding_._0_4_ = iVar17;
      if ((uVar29 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      if ((*(int *)(local_bb8._padding_ + (longlong)(int)((uint)local_bb8._padding_ + -1) * 4) != 6)
         && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                ("Stack.Top() == EJson::Object",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                 ,0x110,L""), bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      if ((0xc < (uint)local_bb8._padding_) ||
         ((0x1017U >> ((uint)local_bb8._padding_ & 0x1f) & 1) == 0)) {
        local_ae8[0] = 0x2c;
        (**(code **)(*(longlong *)local_bb8._padding_ + 0x188))(local_bb8._padding_,local_ae8,2);
        local_bb8._padding_._0_4_ = 1;
      }
      local_808 = EZAttrib_PlayerIP.Data.AllocatorInstance.Data;
      pwVar22 = (wchar_t *)(ulonglong)(EZAttrib_PlayerIP.Data.ArrayNum - 1);
      if (EZAttrib_PlayerIP.Data.ArrayNum == 0) {
        pwVar22 = pwVar27;
      }
      iStack_800 = (int)pwVar22;
      local_7f8._12_4_ = uStack_7fc;
      local_7f8.Size = iStack_800;
      local_7f8.DataPtr = (wchar_t *)EZAttrib_PlayerIP.Data.AllocatorInstance.Data;
      if (*(code **)(local_bb8._padding_ + 0x28) ==
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue) {
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_bb8,&local_7f8
                  );
      }
      else {
        (**(code **)(local_bb8._padding_ + 0x28))();
      }
      local_ae0[0] = 0x3a;
      (**(code **)(*(longlong *)local_bb8._padding_ + 0x188))(local_bb8._padding_,local_ae0,2);
      local_bb8._padding_._0_4_ = 0xc;
      local_7e8 = *(wchar_t **)(lVar35 + lVar7);
      iVar17 = *(int *)(lVar35 + 8 + lVar7);
      uStack_7e0 = iVar17 - 1;
      if (iVar17 == 0) {
        uStack_7e0 = uVar28;
      }
      local_7d8._12_4_ = uStack_7dc;
      local_7d8.Size = uStack_7e0;
      local_7d8.DataPtr = local_7e8;
      if (*(code **)(local_bb8._padding_ + 0x28) ==
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue) {
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_bb8,&local_7d8
                  );
      }
      else {
        (**(code **)(local_bb8._padding_ + 0x28))();
      }
      local_bb8._padding_._0_4_ = 7;
      uVar29 = uVar28;
      if ((int)((uint)local_bb8._padding_ - 1) < (int)(uint)local_bb8._padding_) {
        uVar29 = ~((uint)local_bb8._padding_ - 1) >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      if ((*(int *)(local_bb8._padding_ + (longlong)(int)((uint)local_bb8._padding_ + -1) * 4) != 6)
         && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                ("Stack.Top() == EJson::Object",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                 ,0x110,L""), bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      if ((0xc < (uint)local_bb8._padding_) ||
         ((0x1017U >> ((uint)local_bb8._padding_ & 0x1f) & 1) == 0)) {
        local_ad8[0] = 0x2c;
        (**(code **)(*(longlong *)local_bb8._padding_ + 0x188))(local_bb8._padding_,local_ad8,2);
        local_bb8._padding_._0_4_ = 1;
      }
      local_7c8 = EZAttrib_PlayerUID.Data.AllocatorInstance.Data;
      pwVar22 = (wchar_t *)(ulonglong)(EZAttrib_PlayerUID.Data.ArrayNum - 1);
      if (EZAttrib_PlayerUID.Data.ArrayNum == 0) {
        pwVar22 = pwVar27;
      }
      iStack_7c0 = (int)pwVar22;
      local_7b8._12_4_ = uStack_7bc;
      local_7b8.Size = iStack_7c0;
      local_7b8.DataPtr = (wchar_t *)EZAttrib_PlayerUID.Data.AllocatorInstance.Data;
      if (*(code **)(local_bb8._padding_ + 0x28) ==
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue) {
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_bb8,&local_7b8
                  );
      }
      else {
        (**(code **)(local_bb8._padding_ + 0x28))();
      }
      local_ad0[0] = 0x3a;
      (**(code **)(*(longlong *)local_bb8._padding_ + 0x188))(local_bb8._padding_,local_ad0,2);
      local_bb8._padding_._0_4_ = 0xc;
      local_7a8 = *(wchar_t **)(lVar35 + 0x10 + lVar7);
      iVar17 = *(int *)(lVar35 + 0x18 + lVar7);
      uStack_7a0 = iVar17 - 1;
      if (iVar17 == 0) {
        uStack_7a0 = uVar28;
      }
      local_798._12_4_ = uStack_79c;
      local_798.Size = uStack_7a0;
      local_798.DataPtr = local_7a8;
      if (*(code **)(local_bb8._padding_ + 0x28) ==
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue) {
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_bb8,&local_798
                  );
      }
      else {
        (**(code **)(local_bb8._padding_ + 0x28))();
      }
      local_bb8._padding_._0_4_ = 7;
      uVar29 = uVar28;
      if ((int)((uint)local_bb8._padding_ - 1) < (int)(uint)local_bb8._padding_) {
        uVar29 = ~((uint)local_bb8._padding_ - 1) >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      if ((*(int *)(local_bb8._padding_ + (longlong)(int)((uint)local_bb8._padding_ + -1) * 4) != 6)
         && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                ("Stack.Top() == EJson::Object",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                 ,0x110,L""), bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      if ((0xc < (uint)local_bb8._padding_) ||
         ((0x1017U >> ((uint)local_bb8._padding_ & 0x1f) & 1) == 0)) {
        local_ac8[0] = 0x2c;
        (**(code **)(*(longlong *)local_bb8._padding_ + 0x188))(local_bb8._padding_,local_ac8,2);
        local_bb8._padding_._0_4_ = 1;
      }
      local_788 = EZAttrib_MaxSeverityIndex.Data.AllocatorInstance.Data;
      pwVar22 = (wchar_t *)(ulonglong)(EZAttrib_MaxSeverityIndex.Data.ArrayNum - 1);
      if (EZAttrib_MaxSeverityIndex.Data.ArrayNum == 0) {
        pwVar22 = pwVar27;
      }
      iStack_780 = (int)pwVar22;
      local_778._12_4_ = uStack_77c;
      local_778.Size = iStack_780;
      local_778.DataPtr = (wchar_t *)EZAttrib_MaxSeverityIndex.Data.AllocatorInstance.Data;
      if (*(code **)(local_bb8._padding_ + 0x28) ==
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue) {
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_bb8,&local_778
                  );
      }
      else {
        (**(code **)(local_bb8._padding_ + 0x28))();
      }
      local_ac0[0] = 0x3a;
      (**(code **)(*(longlong *)local_bb8._padding_ + 0x188))(local_bb8._padding_,local_ac0,2);
      local_538.Base = local_518;
      local_bb8._padding_._0_4_ = 0xc;
      local_538.CurPos = local_518;
      local_538.bIsDynamic = false;
      local_538.bIsExternal = false;
      local_538.End = (wchar_t *)&local_4d8;
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_538,L"%lld");
      lVar11 = local_bb8._padding_;
      uVar29 = (uint)((longlong)local_538.CurPos - (longlong)local_538.Base >> 1);
      if (local_538.Base == (wchar_t *)0x0) {
        pcVar32 = *(code **)(*(longlong *)local_bb8._padding_ + 0x188);
      }
      else {
        uVar28 = uVar29;
        if ((0 < (int)uVar29) && (local_538.Base[(longlong)(int)uVar29 + -1] == L'\0')) {
          uVar28 = uVar29 - 1;
        }
        pcVar32 = *(code **)(*(longlong *)local_bb8._padding_ + 0x188);
        pwVar27 = local_538.Base;
        if (uVar28 == 0xffffffff) {
          sVar20 = wcslen(local_538.Base);
          uVar28 = (uint)sVar20;
        }
      }
      (*pcVar32)(lVar11,pwVar27,(longlong)(int)uVar28 * 2);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_538);
      uVar28 = 0;
      local_bb8._padding_._0_4_ = 8;
      uVar29 = uVar28;
      if ((int)((uint)local_bb8._padding_ - 1) < (int)(uint)local_bb8._padding_) {
        uVar29 = ~((uint)local_bb8._padding_ - 1) >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      if ((*(int *)(local_bb8._padding_ + (longlong)(int)((uint)local_bb8._padding_ + -1) * 4) != 6)
         && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                ("Stack.Top() == EJson::Object",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                 ,0x110,L""), bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      if ((0xc < (uint)local_bb8._padding_) ||
         ((0x1017U >> ((uint)local_bb8._padding_ & 0x1f) & 1) == 0)) {
        local_ab8[0] = 0x2c;
        (**(code **)(*(longlong *)local_bb8._padding_ + 0x188))(local_bb8._padding_,local_ab8,2);
        local_bb8._padding_._0_4_ = 1;
      }
      local_768 = EZAttrib_MaxSeverityCategory.Data.AllocatorInstance.Data;
      uStack_760 = EZAttrib_MaxSeverityCategory.Data.ArrayNum - 1;
      if (EZAttrib_MaxSeverityCategory.Data.ArrayNum == 0) {
        uStack_760 = uVar28;
      }
      local_758._12_4_ = uStack_75c;
      local_758.Size = uStack_760;
      local_758.DataPtr = (wchar_t *)EZAttrib_MaxSeverityCategory.Data.AllocatorInstance.Data;
      if (*(code **)(local_bb8._padding_ + 0x28) ==
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue) {
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_bb8,&local_758
                  );
      }
      else {
        (**(code **)(local_bb8._padding_ + 0x28))();
      }
      local_ab0[0] = 0x3a;
      (**(code **)(*(longlong *)local_bb8._padding_ + 0x188))(local_bb8._padding_,local_ab0,2);
      local_bb8._padding_._0_4_ = 0xc;
      local_748 = *(wchar_t **)(lVar35 + 0x28 + lVar7);
      iVar17 = *(int *)(lVar35 + 0x30 + lVar7);
      uStack_740 = iVar17 - 1;
      if (iVar17 == 0) {
        uStack_740 = uVar28;
      }
      local_738._12_4_ = uStack_73c;
      local_738.Size = uStack_740;
      local_738.DataPtr = local_748;
      if (*(code **)(local_bb8._padding_ + 0x28) ==
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue) {
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_bb8,&local_738
                  );
      }
      else {
        (**(code **)(local_bb8._padding_ + 0x28))();
      }
      local_bb8._padding_._0_4_ = 7;
      uVar29 = uVar28;
      if ((int)((uint)local_bb8._padding_ - 1) < (int)(uint)local_bb8._padding_) {
        uVar29 = ~((uint)local_bb8._padding_ - 1) >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      if ((*(int *)(local_bb8._padding_ + (longlong)(int)((uint)local_bb8._padding_ + -1) * 4) != 6)
         && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                ("Stack.Top() == EJson::Object",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                 ,0x110,L""), bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      if ((0xc < (uint)local_bb8._padding_) ||
         ((0x1017U >> ((uint)local_bb8._padding_ & 0x1f) & 1) == 0)) {
        local_aa8[0] = 0x2c;
        (**(code **)(*(longlong *)local_bb8._padding_ + 0x188))(local_bb8._padding_,local_aa8,2);
        local_bb8._padding_._0_4_ = 1;
      }
      local_728 = EZAttrib_MaxAnalyticsSeverityIndex.Data.AllocatorInstance.Data;
      uStack_720 = EZAttrib_MaxAnalyticsSeverityIndex.Data.ArrayNum - 1;
      if (EZAttrib_MaxAnalyticsSeverityIndex.Data.ArrayNum == 0) {
        uStack_720 = uVar28;
      }
      local_718._12_4_ = uStack_71c;
      local_718.Size = uStack_720;
      local_718.DataPtr = (wchar_t *)EZAttrib_MaxAnalyticsSeverityIndex.Data.AllocatorInstance.Data;
      if (*(code **)(local_bb8._padding_ + 0x28) ==
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue) {
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_bb8,&local_718
                  );
      }
      else {
        (**(code **)(local_bb8._padding_ + 0x28))();
      }
      local_aa0[0] = 0x3a;
      (**(code **)(*(longlong *)local_bb8._padding_ + 0x188))(local_bb8._padding_,local_aa0,2);
      local_4d8.Base = local_4b8;
      local_bb8._padding_._0_4_ = 0xc;
      local_4d8.CurPos = local_4b8;
      local_4d8.bIsDynamic = false;
      local_4d8.bIsExternal = false;
      local_4d8.End = (wchar_t *)&local_478;
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_4d8,L"%lld");
      pwVar27 = local_4d8.Base;
      lVar11 = local_bb8._padding_;
      iVar17 = (int)((longlong)local_4d8.CurPos - (longlong)local_4d8.Base >> 1);
      if (local_4d8.Base == (wchar_t *)0x0) {
        pwVar27 = (wchar_t *)0x0;
        iVar17 = 0;
        pcVar32 = *(code **)(*(longlong *)local_bb8._padding_ + 0x188);
      }
      else {
        if ((0 < iVar17) && (local_4d8.Base[(longlong)iVar17 + -1] == L'\0')) {
          iVar17 = iVar17 + -1;
        }
        pcVar32 = *(code **)(*(longlong *)local_bb8._padding_ + 0x188);
        if (iVar17 == -1) {
          sVar20 = wcslen(local_4d8.Base);
          iVar17 = (int)sVar20;
        }
      }
      (*pcVar32)(lVar11,pwVar27,(longlong)iVar17 * 2);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_4d8);
      local_bb8._padding_._0_4_ = 8;
      uVar29 = 0;
      if ((int)((uint)local_bb8._padding_ - 1) < (int)(uint)local_bb8._padding_) {
        uVar29 = ~((uint)local_bb8._padding_ - 1) >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      if ((*(int *)(local_bb8._padding_ + (longlong)(int)((uint)local_bb8._padding_ + -1) * 4) != 6)
         && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                ("Stack.Top() == EJson::Object",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                 ,0x110,L""), bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      if ((0xc < (uint)local_bb8._padding_) ||
         ((0x1017U >> ((uint)local_bb8._padding_ & 0x1f) & 1) == 0)) {
        local_a98[0] = 0x2c;
        (**(code **)(*(longlong *)local_bb8._padding_ + 0x188))(local_bb8._padding_,local_a98,2);
        local_bb8._padding_._0_4_ = 1;
      }
      local_708 = EZAttrib_MaxAnalyticsSeverityCategory.Data.AllocatorInstance.Data;
      uStack_700 = EZAttrib_MaxAnalyticsSeverityCategory.Data.ArrayNum - 1;
      if (EZAttrib_MaxAnalyticsSeverityCategory.Data.ArrayNum == 0) {
        uStack_700 = 0;
      }
      local_6f8._12_4_ = uStack_6fc;
      local_6f8.Size = uStack_700;
      local_6f8.DataPtr =
           (wchar_t *)EZAttrib_MaxAnalyticsSeverityCategory.Data.AllocatorInstance.Data;
      if (*(code **)(local_bb8._padding_ + 0x28) ==
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue) {
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_bb8,&local_6f8
                  );
      }
      else {
        (**(code **)(local_bb8._padding_ + 0x28))();
      }
      local_a90[0] = 0x3a;
      (**(code **)(*(longlong *)local_bb8._padding_ + 0x188))(local_bb8._padding_,local_a90,2);
      local_bb8._padding_._0_4_ = 0xc;
      local_6e8 = *(wchar_t **)(lVar35 + 0x40 + lVar7);
      iVar17 = *(int *)(lVar35 + 0x48 + lVar7);
      uStack_6e0 = iVar17 - 1;
      if (iVar17 == 0) {
        uStack_6e0 = 0;
      }
      local_6d8._12_4_ = uStack_6dc;
      local_6d8.Size = uStack_6e0;
      local_6d8.DataPtr = local_6e8;
      if (*(code **)(local_bb8._padding_ + 0x28) ==
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue) {
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteStringValue
                  ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_bb8,&local_6d8
                  );
      }
      else {
        (**(code **)(local_bb8._padding_ + 0x28))();
      }
      local_bb8._padding_._0_4_ = 7;
      uVar29 = 0;
      if ((int)((uint)local_bb8._padding_ - 1) < (int)(uint)local_bb8._padding_) {
        uVar29 = ~((uint)local_bb8._padding_ - 1) >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      if ((*(int *)(local_bb8._padding_ + (longlong)(int)((uint)local_bb8._padding_ + -1) * 4) != 6)
         && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                ("Stack.Top() == EJson::Object",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                 ,0x8e,L""), bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      local_bb8._padding_._4_4_ = local_bb8._padding_._4_4_ + -1;
      local_a88[0] = 0x7d;
      (**(code **)(*(longlong *)local_bb8._padding_ + 0x188))(local_bb8._padding_,local_a88,2);
      if (((int)(uint)local_bb8._padding_ < 1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar32 = (code *)swi(3);
        (*pcVar32)();
        return;
      }
      iVar17 = ~((uint)local_bb8._padding_ - 1) + (uint)local_bb8._padding_;
      if (iVar17 != 0) {
        memmove((undefined4 *)
                (local_bb8._padding_ + (longlong)(int)((uint)local_bb8._padding_ - 1) * 4),
                (undefined4 *)
                (local_bb8._padding_ + (longlong)(int)((uint)local_bb8._padding_ - 1) * 4) + 1,
                (longlong)iVar17 << 2);
      }
      local_bb8._padding_._0_4_ = (uint)local_bb8._padding_ - 1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(ForAnyElementType *)&local_bb8._padding_,(uint)local_bb8._padding_,
                 (int *)((longlong)&local_bb8._padding_ + 4));
      uVar16 = uVar16 + 1;
      local_bb8._padding_._0_4_ = 3;
      lVar35 = lVar35 + 0x50;
    } while ((int)uVar16 < *(int *)&pFVar34->field_0x90);
  }
  pUVar21 = (UWorld *)0x0;
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayEnd
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)&local_bb8);
  TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::Close(&local_bb8);
  if (*(void **)&pFVar34->WorldFunc != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&pFVar34->WorldFunc);
    pcVar32 = *(code **)&pFVar34->WorldFunc;
    plVar4 = *(longlong **)&(pFVar34->WorldFunc).field_0x28;
    plVar23 = (longlong *)&(pFVar34->WorldFunc).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar23 = plVar4;
    }
    (**(code **)(*plVar23 + 8))();
    pUVar21 = (UWorld *)(*pcVar32)();
  }
  local_9d8.FragmentString.Data.AllocatorInstance.Data = local_a10.Data.AllocatorInstance.Data;
  local_9d8.FragmentString.Data.ArrayNum = local_a10.Data.ArrayNum;
  local_9d8.FragmentString.Data.ArrayMax = local_a10.Data.ArrayMax;
  local_9e8.FragmentString.Data.AllocatorInstance.Data = local_a30.Data.AllocatorInstance.Data;
  local_9e8.FragmentString.Data.ArrayNum = local_a30.Data.ArrayNum;
  local_9e8.FragmentString.Data.ArrayMax = local_a30.Data.ArrayMax;
  local_9f8.FragmentString.Data.AllocatorInstance.Data = local_a20.Data.AllocatorInstance.Data;
  local_9f8.FragmentString.Data.ArrayNum = local_a20.Data.ArrayNum;
  local_9f8.FragmentString.Data.ArrayMax = local_a20.Data.ArrayMax;
  local_a20.Data.ArrayNum = 0;
  local_a20.Data.ArrayMax = 0;
  local_a10.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a10.Data.ArrayNum = 0;
  local_a10.Data.ArrayMax = 0;
  local_a30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a30.Data.ArrayNum = 0;
  local_a30.Data.ArrayMax = 0;
  local_a20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b60.ArrayMax = 0;
  DestructItems<FAnalyticsEventAttribute,int>((FAnalyticsEventAttribute *)0x0,0);
  local_b60.ArrayNum = 0;
  if (local_b60.ArrayMax != 7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,7,&local_b60.AllocatorInstance,0,&local_b60.ArrayMax);
  }
  ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,int>
            (&local_b60,&EZAttrib_MaxSeverityIndex,(int *)&pFVar34->field_0x40);
  ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,FString>
            (&local_b60,&EZAttrib_MaxSeverityCategory,(FString *)&pFVar34->field_0x48);
  ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,int>
            (&local_b60,&EZAttrib_MaxAnalyticsSeverityIndex,(int *)&pFVar34->field_0x58);
  ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,FString>
            (&local_b60,&EZAttrib_MaxAnalyticsSeverityCategory,(FString *)&pFVar34->field_0x60);
  ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,FJsonFragment>
            (&local_b60,&EZAttrib_RPCs,&local_9f8);
  ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,FJsonFragment>
            (&local_b60,&EZAttrib_FilteredRPCs,&local_9e8);
  ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,FJsonFragment>
            (&local_b60,&EZAttrib_MaxPlayerSeverity,&local_9d8);
  if (local_9f8.FragmentString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9f8.FragmentString.Data.AllocatorInstance.Data);
  }
  if (local_9e8.FragmentString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9e8.FragmentString.Data.AllocatorInstance.Data);
  }
  if (local_9d8.FragmentString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9d8.FragmentString.Data.AllocatorInstance.Data);
  }
  TMulticastDelegate<void___cdecl(UWorld_*,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&GModifyRPCDoSAnalytics,pUVar21,&local_b60);
  plVar4 = local_988;
  if ((*local_988 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar32 = (code *)swi(3);
    (*pcVar32)();
    return;
  }
  (**(code **)(*(longlong *)*plVar4 + 0x80))((longlong *)*plVar4,&EZEventName,&local_b60);
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_b60.AllocatorInstance.Data,local_b60.ArrayNum);
  if ((FAnalyticsEventAttribute *)local_b60.AllocatorInstance.Data !=
      (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_b60.AllocatorInstance.Data);
  }
  local_bb8._padding_ = (longlong)&___7__TJsonStringWriter_U__TCondensedJsonPrintPolicy__W____6B_;
  cVar15 = (**(code **)(*(longlong *)local_bb8._padding_ + 0x210))();
  if ((cVar15 == '\0') &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("this->Stream->Close()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                          ,0x2ef,L""), bVar13)) {
    pcVar32 = (code *)swi(3);
    (*pcVar32)();
    return;
  }
  if ((longlong *)local_bb8._padding_ != (longlong *)0x0) {
    (*(code *)**(undefined8 **)local_bb8._padding_)(local_bb8._padding_,1);
  }
  if (local_bb8.Bytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bb8.Bytes.AllocatorInstance.Data);
  }
  local_bb8._padding_ = (longlong)&___7__TJsonWriter__WU__TCondensedJsonPrintPolicy__W____6B_;
  if ((undefined4 *)local_bb8._padding_ != (undefined4 *)0x0) {
    FMemory::Free((void *)local_bb8._padding_);
  }
  if (local_a10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a10.Data.AllocatorInstance.Data);
  }
  local_b48._padding_ = (longlong)&___7__TJsonStringWriter_U__TCondensedJsonPrintPolicy__W____6B_;
  cVar15 = (**(code **)(*(longlong *)local_b48._padding_ + 0x210))();
  if ((cVar15 == '\0') &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("this->Stream->Close()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                          ,0x2ef,L""), bVar13)) {
    pcVar32 = (code *)swi(3);
    (*pcVar32)();
    return;
  }
  if ((FArchive *)local_b48._padding_ != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)local_b48._padding_)(local_b48._padding_,1);
  }
  if (local_b48.Bytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b48.Bytes.AllocatorInstance.Data);
  }
  local_b48._padding_ = (longlong)&___7__TJsonWriter__WU__TCondensedJsonPrintPolicy__W____6B_;
  if ((void *)local_b48._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b48._padding_);
  }
  if (local_a30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a30.Data.AllocatorInstance.Data);
  }
  local_a78._padding_ = (longlong)&___7__TJsonStringWriter_U__TCondensedJsonPrintPolicy__W____6B_;
  cVar15 = (**(code **)(*(longlong *)local_a78._padding_ + 0x210))();
  if ((cVar15 == '\0') &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("this->Stream->Close()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                          ,0x2ef,L""), bVar13)) {
    pcVar32 = (code *)swi(3);
    (*pcVar32)();
    return;
  }
  if ((FArchive *)local_a78._padding_ != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)local_a78._padding_)(local_a78._padding_,1);
  }
  if (local_a78.Bytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a78.Bytes.AllocatorInstance.Data);
  }
  local_a78._padding_ = (longlong)&___7__TJsonWriter__WU__TCondensedJsonPrintPolicy__W____6B_;
  if ((void *)local_a78._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_a78._padding_);
  }
  if (local_a20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a20.Data.AllocatorInstance.Data);
  }
  DestructItems<TSharedPtr<FRPCAnalytics,1>,int>
            ((TSharedPtr<FRPCAnalytics,1> *)local_b78.Data,(int)local_b70);
  if ((TSharedPtr<FRPCAnalytics,1> *)local_b78.Data != (TSharedPtr<FRPCAnalytics,1> *)0x0) {
    FMemory::Free(local_b78.Data);
  }
LAB_147417b45:
  FVar12.Data = local_978.MaxPlayerSeverity.AllocatorInstance.Data;
  DestructItems<FMaxRPCDoSEscalation,int>
            ((FMaxRPCDoSEscalation *)local_978.MaxPlayerSeverity.AllocatorInstance.Data,
             local_978.MaxPlayerSeverity.ArrayNum);
  if ((FMaxRPCDoSEscalation *)FVar12.Data != (FMaxRPCDoSEscalation *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  FVar12.Data = local_978.RPCTrackingAnalytics.AllocatorInstance.Data;
  DestructItems<TSharedPtr<FRPCAnalytics,1>,int>
            ((TSharedPtr<FRPCAnalytics,1> *)local_978.RPCTrackingAnalytics.AllocatorInstance.Data,
             local_978.RPCTrackingAnalytics.ArrayNum);
  if ((TSharedPtr<FRPCAnalytics,1> *)FVar12.Data != (TSharedPtr<FRPCAnalytics,1> *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  if (local_978.MaxAnalyticsSeverityCategory.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_978.MaxAnalyticsSeverityCategory.Data.AllocatorInstance.Data);
  }
  if (local_978.MaxSeverityCategory.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_978.MaxSeverityCategory.Data.AllocatorInstance.Data);
  }
  if (local_978.PlayerUID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_978.PlayerUID.Data.AllocatorInstance.Data);
  }
  if (local_978.PlayerIP.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_978.PlayerIP.Data.AllocatorInstance.Data);
  }
  return;
}

