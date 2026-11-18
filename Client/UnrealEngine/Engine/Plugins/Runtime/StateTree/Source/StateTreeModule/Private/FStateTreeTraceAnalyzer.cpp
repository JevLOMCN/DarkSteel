// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 6

// FStateTreeTraceAnalyzer @ 14d4b1e80

FStateTreeTraceAnalyzer * __thiscall
FStateTreeTraceAnalyzer::FStateTreeTraceAnalyzer
          (FStateTreeTraceAnalyzer *this,IAnalysisSession *param_1,FStateTreeTraceProvider *param_2)

{
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FStateTreeTraceAnalyzer__6B_;
  this->Provider = param_2;
  this->WorldTime = 0.0;
  return this;
}

// OnAnalysisBegin @ 14d4c5540

void __thiscall
FStateTreeTraceAnalyzer::OnAnalysisBegin(FStateTreeTraceAnalyzer *this,FOnAnalysisContext *param_1)

{
  FInterfaceBuilder *pFVar1;
  
  pFVar1 = param_1->InterfaceBuilder;
  (**(code **)*pFVar1)(pFVar1,1,"StateTreeDebugger","AssetDebugIdEvent",0);
  (**(code **)*pFVar1)(pFVar1,0,"StateTreeDebugger","WorldTimestampEvent",0);
  (**(code **)*pFVar1)(pFVar1,2,"StateTreeDebugger","InstanceEvent",0);
  (**(code **)*pFVar1)(pFVar1,3,"StateTreeDebugger","InstanceFrameEvent",0);
  (**(code **)*pFVar1)(pFVar1,4,"StateTreeDebugger","PhaseEvent",0);
  (**(code **)*pFVar1)(pFVar1,5,"StateTreeDebugger","LogEvent",0);
  (**(code **)*pFVar1)(pFVar1,6,"StateTreeDebugger","StateEvent",0);
  (**(code **)*pFVar1)(pFVar1,7,"StateTreeDebugger","TaskEvent",0);
  (**(code **)*pFVar1)(pFVar1,8,"StateTreeDebugger","EvaluatorEvent",0);
  (**(code **)*pFVar1)(pFVar1,9,"StateTreeDebugger","TransitionEvent",0);
  (**(code **)*pFVar1)(pFVar1,10,"StateTreeDebugger","ConditionEvent",0);
  (**(code **)*pFVar1)(pFVar1,0xb,"StateTreeDebugger","ActiveStatesEvent",0);
  return;
}

// OnAnalysisEnd @ 14d4c58a0

void __thiscall FStateTreeTraceAnalyzer::OnAnalysisEnd(FStateTreeTraceAnalyzer *this)

{
  return;
}

// OnEvent @ 14d4c5990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FStateTreeTraceAnalyzer::OnEvent
          (FStateTreeTraceAnalyzer *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  int iVar1;
  int *piVar2;
  FStateTreeIndex16 FVar3;
  FScriptContainerElement *pFVar4;
  ushort *puVar5;
  FStateTreeTraceProvider *pFVar6;
  FWeakObjectPtr FVar7;
  FEventTime *pFVar8;
  code *pcVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  FAssetActiveStates *pFVar12;
  void *pvVar13;
  EStateTreeTraceEventType EVar14;
  EStateTreeTransitionSourceType EVar15;
  bool bVar16;
  undefined1 uVar17;
  ushort uVar18;
  FStateTreeStateHandle FVar19;
  FStateTreeIndex16 FVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  size_t sVar24;
  UClass *pUVar25;
  UObject *pUVar26;
  TArrayView<unsigned_char_const_,int> *pTVar27;
  double *pdVar28;
  FStateTreeTransitionSource *pFVar29;
  TArrayView<unsigned_short_const_,int> *pTVar30;
  longlong lVar31;
  ulong64 uVar32;
  FStateTreeInstanceDebugId FVar33;
  FStateTreeInstanceDebugId FVar34;
  FStateTreeInstanceDebugId FVar35;
  FStateTreeInstanceDebugId FVar36;
  FStateTreeInstanceDebugId FVar37;
  FStateTreeInstanceDebugId FVar38;
  FStateTreeInstanceDebugId FVar39;
  FStateTreeInstanceDebugId FVar40;
  EStateTreeTransitionPriority EVar41;
  ulonglong uVar42;
  longlong lVar43;
  IAnalysisSession *pIVar44;
  FStateTreeInstanceDebugId FVar45;
  FWeakObjectPtr *pFVar46;
  FStateTreeTraceProvider *this_00;
  ForAnyElementType FVar47;
  FWeakObjectPtr *pFVar48;
  double dVar49;
  double dVar50;
  ushort local_res10 [4];
  undefined1 auStackY_988 [32];
  schar local_938;
  FGCScopeGuard local_937;
  schar local_936;
  schar local_935;
  schar local_934;
  schar local_933;
  schar local_932 [10];
  FWeakObjectPtr local_928;
  FStateTreeTraceProvider *local_920;
  double local_918;
  undefined1 uStack_910;
  undefined7 uStack_90f;
  ForAnyElementType local_908;
  EStateTreeTransitionSourceType EStack_900;
  undefined1 uStack_8ff;
  undefined1 uStack_8fe;
  undefined1 uStack_8fd;
  undefined1 uStack_8fc;
  undefined1 uStack_8fb;
  EStateTreeTransitionPriority EStack_8fa;
  undefined1 uStack_8f9;
  ForAnyElementType local_8f8;
  int local_8f0;
  int local_8ec;
  double local_8e8;
  undefined1 uStack_8e0;
  undefined4 uStack_8df;
  undefined2 uStack_8db;
  undefined1 uStack_8d9;
  FWeakObjectPtr FStack_8d8;
  FStateTreeInstanceDebugId local_8d0;
  FLLMScope local_8c8 [2];
  FWeakObjectPtr local_8c0;
  longlong local_8b8;
  ForAnyElementType local_8b0;
  int local_8a8;
  int local_8a4;
  FString local_8a0;
  FOnEventContext *local_890;
  FWeakObjectPtr local_888;
  FStateTreeTraceProvider *local_880;
  FWeakObjectPtr local_878;
  FWeakObjectPtr local_870;
  FString local_868;
  FString local_858;
  FString local_848;
  FString local_838;
  FString local_828;
  FString local_818;
  FString local_808;
  FString local_7f8;
  FString local_7e8;
  FString local_7d8;
  FString local_7c8;
  FString local_7b8;
  double local_7a8;
  EStateTreeTraceEventType EStack_7a0;
  undefined7 uStack_79f;
  ushort local_798;
  undefined6 uStack_796;
  FString local_790;
  FString local_780;
  FString local_770;
  double local_758;
  EStateTreeTraceEventType EStack_750;
  undefined7 uStack_74f;
  ushort local_748;
  undefined6 uStack_746;
  FString local_740;
  FString local_730;
  FString local_720;
  double local_708;
  EStateTreeTraceEventType EStack_700;
  undefined7 uStack_6ff;
  ushort local_6f8;
  undefined6 uStack_6f6;
  FString local_6f0;
  FString local_6e0;
  FString local_6d0;
  undefined1 local_6c0;
  FWeakObjectPtr local_6b8;
  undefined4 local_6b0;
  double local_6a8;
  undefined1 uStack_6a0;
  undefined7 uStack_69f;
  undefined1 local_698;
  FString local_690;
  FMemScope local_680;
  IAnalysisSession *local_678;
  UObject *local_670;
  FStateTreeInstanceDebugId local_668;
  UObject *local_660;
  ushort *local_658;
  UObject *local_650;
  FScriptContainerElement *local_648;
  int iStack_640;
  undefined4 uStack_63c;
  TStringView<wchar_t> local_638;
  TArrayView<unsigned_char_const_,int> local_628;
  TArrayView<unsigned_char_const_,int> local_618;
  TArrayView<unsigned_char_const_,int> local_608;
  TWeakObjectPtr<UStateTree_const_,FWeakObjectPtr> local_5f8;
  TArrayView<unsigned_char_const_,int> local_5f0;
  TArrayView<unsigned_char_const_,int> local_5e0;
  TArrayView<unsigned_char_const_,int> local_5d0;
  FStateTreeTransitionSource local_5c0;
  TArrayView<unsigned_short_const_,int> local_5b0;
  TArrayView<unsigned_short_const_,int> local_5a0;
  FMemoryReaderView local_588;
  FMemoryReaderView local_4d8;
  FMemoryReaderView local_428;
  TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
  local_378;
  undefined1 local_320 [40];
  FString local_2f8;
  FString local_2e8;
  undefined1 local_2d8;
  byte local_2d0;
  undefined1 local_2c8 [40];
  FString local_2a0;
  FString local_290;
  byte local_278;
  undefined1 local_270 [40];
  FString local_248;
  FString local_238;
  byte local_220;
  TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
  local_218;
  TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
  local_1c0;
  TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
  local_168;
  undefined1 local_110 [80];
  byte local_c0;
  TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
  local_b8;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_988;
  local_res10[0] = param_1;
  local_920 = (FStateTreeTraceProvider *)this;
  local_890 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name38,L"Insights/FStateTreeAnalyzer");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_8c8,LLMScope_Name38,false,None,Default,true);
  FMemScope::FMemScope(&local_680,&LLMScope_Name38,true);
  pIVar44 = this->Session;
  local_678 = pIVar44;
  (**(code **)((longlong)*pIVar44 + 0xa0))(pIVar44);
  this_00 = (FStateTreeTraceProvider *)param_3->EventData;
  local_880 = this_00;
  switch(local_res10[0]) {
  case 0:
    pdVar28 = UE::Trace::IAnalyzer::FEventData::GetValueImpl
                        ((FEventData *)this_00,"WorldTime",&local_938);
    if (pdVar28 == (double *)0x0) {
switchD_14d4c5ac6_caseD_f9:
      this->WorldTime = 0.0;
    }
    else {
      switch(local_938) {
      case '\x01':
        this->WorldTime = (double)(int)*(char *)pdVar28;
        break;
      case '\x02':
        this->WorldTime = (double)(int)*(short *)pdVar28;
        break;
      case '\x04':
        this->WorldTime = (double)(int)*(float *)pdVar28;
        break;
      case '\b':
        this->WorldTime = (double)(longlong)*pdVar28;
        break;
      case -8:
        this->WorldTime = *pdVar28;
        break;
      default:
        goto switchD_14d4c5ac6_caseD_f9;
      case -4:
        this->WorldTime = (double)*(float *)pdVar28;
      }
    }
    break;
  case 1:
    local_868.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_868.Data.ArrayNum = 0;
    local_868.Data.ArrayMax = 0;
    local_8a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_8a0.Data.ArrayNum = 0;
    local_8a0.Data.ArrayMax = 0;
    UE::Trace::IAnalyzer::FEventData::GetString((FEventData *)this_00,"TreeName",&local_868);
    UE::Trace::IAnalyzer::FEventData::GetString((FEventData *)this_00,"TreePath",&local_8a0);
    local_870.ObjectIndex = 0;
    local_870.ObjectSerialNumber = 0;
    FGCScopeGuard::FGCScopeGuard(&local_937);
    iStack_640 = 0;
    if (local_8a0.Data.ArrayNum == 0) {
      local_648 = (FScriptContainerElement *)0x15060d16c;
LAB_14d4c5bbc:
      sVar24 = wcslen((wchar_t *)local_648);
      iStack_640 = (int)sVar24;
    }
    else {
      local_648 = local_8a0.Data.AllocatorInstance.Data;
      if (local_8a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14d4c5bbc;
    }
    pUVar25 = UStateTree::StaticClass();
    local_638._12_4_ = uStack_63c;
    local_638.Size = iStack_640;
    local_638.DataPtr = (wchar_t *)local_648;
    local_670 = StaticFindObject(pUVar25,(UObject *)0x0,&local_638,None);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_670 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_670);
    }
    FWeakObjectPtr::operator=(&local_870,(FObjectPtr)&local_670);
    FGCScopeGuard::~FGCScopeGuard(&local_937);
    pUVar26 = FWeakObjectPtr::Get(&local_870);
    if (pUVar26 == (UObject *)0x0) {
      if (2 < (byte)LogStateTree._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
      }
    }
    else {
      uVar22 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                         ((FEventData *)this_00,"CompiledDataHash",0);
      if (*(uint *)&pUVar26[1].field_0x8 == uVar22) {
        pFVar6 = this->Provider;
        FVar20.Value = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>
                                 ((FEventData *)this_00,"AssetDebugId",0);
        if (((FVar20.Value != 0xffff) ||
            (bVar16 = `FStateTreeTraceProvider::AppendAssetDebugId'::__l3::<lambda_1>::operator()
                                (local_932 + 2), bVar16)) &&
           (bVar16 = FStateTreeTraceProvider::GetAssetFromDebugId(pFVar6,FVar20,&local_5f8), !bVar16
           )) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar26);
          }
          local_878.ObjectIndex = 0;
          local_878.ObjectSerialNumber = 0;
          local_650 = pUVar26;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar26);
          }
          FWeakObjectPtr::operator=(&local_878,(FObjectPtr)&local_650);
          piVar2 = &(pFVar6->StateTreeAssets).ArrayMax;
          local_6b8 = local_878;
          iVar23 = (pFVar6->StateTreeAssets).ArrayNum;
          local_6b0 = CONCAT22(local_6b0._2_2_,FVar20.Value);
          if (iVar23 == *piVar2) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&(pFVar6->StateTreeAssets).AllocatorInstance,piVar2);
          }
          (pFVar6->StateTreeAssets).ArrayNum = iVar23 + 1;
          pFVar4 = (pFVar6->StateTreeAssets).AllocatorInstance.Data;
          *(FWeakObjectPtr *)(pFVar4 + (longlong)iVar23 * 0xc) = local_6b8;
          *(undefined4 *)(pFVar4 + (longlong)iVar23 * 0xc + 8) = local_6b0;
        }
      }
      else if (2 < (byte)LogStateTree._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
      }
    }
    if (local_8a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8a0.Data.AllocatorInstance.Data);
    }
    if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_868.Data.AllocatorInstance.Data);
    }
    break;
  case 2:
    local_848.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_848.Data.ArrayNum = 0;
    local_848.Data.ArrayMax = 0;
    UE::Trace::IAnalyzer::FEventData::GetString((FEventData *)this_00,"InstanceName",&local_848);
    pFVar6 = this->Provider;
    EVar14 = UE::Trace::IAnalyzer::FEventData::GetValue<enum_EStateTreeTraceEventType>
                       ((FEventData *)this_00,"EventType",Unset);
    pFVar8 = param_3->EventTime;
    dVar50 = *(double *)&(local_920->InstanceIdToDebuggerEntryTimelines).field_0x8;
    uVar32 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                       ((FEventData *)this_00,"Cycle",0);
    dVar49 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar8,uVar32);
    FVar47.Data = (FScriptContainerElement *)L"";
    if (local_848.Data.ArrayNum != 0) {
      FVar47.Data = local_848.Data.AllocatorInstance.Data;
    }
    uVar22 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                       ((FEventData *)this_00,"InstanceSerial",0);
    uVar21 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                       ((FEventData *)this_00,"InstanceId",0);
    FVar45.SerialNumber = uVar22;
    FVar45.Id = uVar21;
    FVar20.Value = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>
                             ((FEventData *)this_00,"AssetDebugId",0);
    FStateTreeTraceProvider::AppendInstanceEvent
              (pFVar6,FVar20,FVar45,(wchar_t *)FVar47.Data,dVar49,dVar50,EVar14);
    if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_848.Data.AllocatorInstance.Data);
    }
    break;
  case 3:
    pFVar6 = this->Provider;
    local_888.ObjectIndex = 0;
    local_888.ObjectSerialNumber = 0;
    FVar20.Value = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>
                             ((FEventData *)this_00,"AssetDebugId",0);
    bVar16 = FStateTreeTraceProvider::GetAssetFromDebugId
                       (pFVar6,FVar20,(TWeakObjectPtr<UStateTree_const_,FWeakObjectPtr> *)&local_888
                       );
    if (bVar16) {
      local_660 = FWeakObjectPtr::Get(&local_888);
      local_8e8 = this->WorldTime;
      uStack_8e0 = 5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_660 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_660);
      }
      FStack_8d8.ObjectIndex._0_1_ = 0;
      FStack_8d8.ObjectIndex._1_1_ = 0;
      FStack_8d8.ObjectIndex._2_2_ = 0;
      FStack_8d8.ObjectSerialNumber._0_1_ = 0;
      FStack_8d8.ObjectSerialNumber._1_2_ = 0;
      FStack_8d8.ObjectSerialNumber._3_1_ = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_660 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_660);
      }
      FWeakObjectPtr::operator=(&FStack_8d8,(FObjectPtr)&local_660);
      local_b8._padding_ = CONCAT17(uStack_8d9,CONCAT25(uStack_8db,CONCAT41(uStack_8df,uStack_8e0)))
      ;
      pFVar6 = this->Provider;
      local_b8._padding_ =
           CONCAT17(FStack_8d8.ObjectSerialNumber._3_1_,
                    CONCAT25(FStack_8d8.ObjectSerialNumber._1_2_,
                             CONCAT14((undefined1)FStack_8d8.ObjectSerialNumber,
                                      CONCAT22(FStack_8d8.ObjectIndex._2_2_,
                                               CONCAT11(FStack_8d8.ObjectIndex._1_1_,
                                                        (undefined1)FStack_8d8.ObjectIndex)))));
      pFVar8 = param_3->EventTime;
      local_b8._padding_ = (longlong)local_8e8;
      local_b8.TypeIndex = 10;
      uVar32 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                         ((FEventData *)this_00,"Cycle",0);
      dVar50 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar8,uVar32);
      uVar22 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                         ((FEventData *)this_00,"InstanceSerial",0);
      uVar21 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                         ((FEventData *)this_00,"InstanceId",0);
      FVar33.SerialNumber = uVar22;
      FVar33.Id = uVar21;
      FStateTreeTraceProvider::AppendEvent(pFVar6,FVar33,dVar50,&local_b8);
      uVar42 = (ulonglong)local_b8.TypeIndex;
      if ((10 < uVar42) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar16)) {
        pcVar9 = (code *)swi(3);
        uVar17 = (*pcVar9)();
        return (bool)uVar17;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar42])(&local_b8);
    }
    else if (1 < (byte)LogStateTree._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
    }
    break;
  case 4:
    uVar18 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>
                       ((FEventData *)this_00,"StateIndex",0);
    EVar14 = UE::Trace::IAnalyzer::FEventData::GetValue<enum_EStateTreeTraceEventType>
                       ((FEventData *)this_00,"EventType",Unset);
    pdVar28 = UE::Trace::IAnalyzer::FEventData::GetValueImpl
                        ((FEventData *)this_00,"Phase",&local_936);
    if (pdVar28 == (double *)0x0) {
switchD_14d4c60ba_caseD_f9:
      local_378._padding_._0_1_ = 0;
    }
    else {
      switch(local_936) {
      case '\x01':
      case '\x02':
      case '\x04':
      case '\b':
        local_378._padding_._0_1_ = *(undefined1 *)pdVar28;
        break;
      case -8:
        local_378._padding_._0_1_ = (undefined1)(int)*pdVar28;
        break;
      default:
        goto switchD_14d4c60ba_caseD_f9;
      case -4:
        local_378._padding_._0_1_ = (undefined1)(int)*(float *)pdVar28;
      }
    }
    local_378._padding_ = (longlong)this->WorldTime;
    pFVar6 = this->Provider;
    local_378._padding_._1_4_ = uStack_8df;
    local_378._padding_._5_2_ = uStack_8db;
    local_378._padding_._7_1_ = uStack_8d9;
    local_378._padding_._1_4_ =
         CONCAT13((undefined1)FStack_8d8.ObjectSerialNumber,
                  CONCAT21(uVar18,FStack_8d8.ObjectIndex._1_1_));
    pFVar8 = param_3->EventTime;
    local_378._padding_._5_2_ = FStack_8d8.ObjectSerialNumber._1_2_;
    local_378._padding_._7_1_ = FStack_8d8.ObjectSerialNumber._3_1_;
    local_378.TypeIndex = 0;
    FStack_8d8.ObjectIndex._2_2_ = uVar18;
    local_378._padding_._0_1_ = EVar14;
    uVar32 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                       ((FEventData *)this_00,"Cycle",0);
    dVar50 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar8,uVar32);
    uVar22 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                       ((FEventData *)this_00,"InstanceSerial",0);
    uVar21 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                       ((FEventData *)this_00,"InstanceId",0);
    FVar34.SerialNumber = uVar22;
    FVar34.Id = uVar21;
    FStateTreeTraceProvider::AppendEvent(pFVar6,FVar34,dVar50,&local_378);
    uVar42 = (ulonglong)local_378.TypeIndex;
    if ((10 < uVar42) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      uVar17 = (*pcVar9)();
      return (bool)uVar17;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar42] !=
        UE::Core::Private::TDestructorCaller<FStateTreeTracePhaseEvent>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar42])(&local_378);
    }
    break;
  case 5:
    local_838.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_838.Data.ArrayNum = 0;
    local_838.Data.ArrayMax = 0;
    UE::Trace::IAnalyzer::FEventData::GetString((FEventData *)this_00,"Message",&local_838);
    pdVar28 = UE::Trace::IAnalyzer::FEventData::GetValueImpl
                        ((FEventData *)this_00,"Verbosity",&local_935);
    FVar47.Data = local_838.Data.AllocatorInstance.Data;
    if (pdVar28 == (double *)0x0) {
switchD_14d4c624b_caseD_f9:
      local_698 = 0;
    }
    else {
      switch(local_935) {
      case '\x01':
      case '\x02':
      case '\x04':
      case '\b':
        local_698 = *(undefined1 *)pdVar28;
        break;
      case -8:
        local_698 = (undefined1)(int)*pdVar28;
        break;
      default:
        goto switchD_14d4c624b_caseD_f9;
      case -4:
        local_698 = (undefined1)(int)*(float *)pdVar28;
      }
    }
    lVar43 = (longlong)local_838.Data.ArrayNum;
    local_6a8 = this->WorldTime;
    uStack_6a0 = 0;
    local_690.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_690.Data.ArrayNum = local_838.Data.ArrayNum;
    if (local_838.Data.ArrayNum == 0) {
      local_690.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_838.Data.ArrayNum,0,(ForAnyElementType *)&local_690,
                 local_838.Data.ArrayNum,&local_690.Data.ArrayMax);
      memcpy(local_690.Data.AllocatorInstance.Data,FVar47.Data,lVar43 * 2);
    }
    local_110._8_8_ = CONCAT71(uStack_69f,uStack_6a0);
    pFVar6 = this->Provider;
    local_110._0_8_ = local_6a8;
    local_110[0x10] = local_698;
    ::FString::FString((FString *)(local_110 + 0x18),&local_690);
    pFVar8 = param_3->EventTime;
    local_c0 = 1;
    uVar32 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                       ((FEventData *)this_00,"Cycle",0);
    dVar50 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar8,uVar32);
    uVar22 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                       ((FEventData *)this_00,"InstanceSerial",0);
    uVar21 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                       ((FEventData *)this_00,"InstanceId",0);
    FVar35.SerialNumber = uVar22;
    FVar35.Id = uVar21;
    FStateTreeTraceProvider::AppendEvent
              (pFVar6,FVar35,dVar50,
               (TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
                *)local_110);
    uVar42 = (ulonglong)local_c0;
    if ((10 < uVar42) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      uVar17 = (*pcVar9)();
      return (bool)uVar17;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar42] ==
        UE::Core::Private::TDestructorCaller<FStateTreeTraceLogEvent>::Destruct) {
      if ((void *)local_110._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_110._24_8_);
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar42])(local_110);
    }
    if (local_690.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_690.Data.AllocatorInstance.Data);
    }
    if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_838.Data.AllocatorInstance.Data);
    }
    break;
  case 6:
    EVar14 = UE::Trace::IAnalyzer::FEventData::GetValue<enum_EStateTreeTraceEventType>
                       ((FEventData *)this_00,"EventType",Unset);
    uVar18 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>
                       ((FEventData *)this_00,"StateIndex",0);
    local_1c0._padding_ = (longlong)this->WorldTime;
    pFVar6 = this->Provider;
    FStack_8d8.ObjectIndex._0_1_ = (undefined1)uVar18;
    FStack_8d8.ObjectIndex._1_1_ = (undefined1)(uVar18 >> 8);
    local_1c0._padding_._1_4_ =
         CONCAT13((undefined1)FStack_8d8.ObjectSerialNumber,
                  CONCAT21(FStack_8d8.ObjectIndex._2_2_,FStack_8d8.ObjectIndex._1_1_));
    local_1c0._padding_._5_2_ = uStack_8db;
    local_1c0._padding_._1_4_ = uStack_8df;
    local_1c0._padding_._7_1_ = uStack_8d9;
    local_1c0._padding_._0_1_ = (undefined1)FStack_8d8.ObjectIndex;
    local_1c0._padding_._5_2_ = FStack_8d8.ObjectSerialNumber._1_2_;
    pFVar8 = param_3->EventTime;
    local_1c0._padding_._7_1_ = FStack_8d8.ObjectSerialNumber._3_1_;
    local_1c0.TypeIndex = 4;
    local_1c0._padding_._0_1_ = EVar14;
    uVar32 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                       ((FEventData *)this_00,"Cycle",0);
    dVar50 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar8,uVar32);
    uVar22 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                       ((FEventData *)this_00,"InstanceSerial",0);
    uVar21 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                       ((FEventData *)this_00,"InstanceId",0);
    FVar36.SerialNumber = uVar22;
    FVar36.Id = uVar21;
    FStateTreeTraceProvider::AppendEvent(pFVar6,FVar36,dVar50,&local_1c0);
    uVar42 = (ulonglong)local_1c0.TypeIndex;
    if ((10 < uVar42) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      uVar17 = (*pcVar9)();
      return (bool)uVar17;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar42] !=
        UE::Core::Private::TDestructorCaller<FStateTreeTraceStateEvent>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar42])(&local_1c0);
    }
    break;
  case 7:
    local_818.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_818.Data.ArrayNum = 0;
    local_818.Data.ArrayMax = 0;
    local_858.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_858.Data.ArrayNum = 0;
    local_858.Data.ArrayMax = 0;
    local_828.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_828.Data.ArrayNum = 0;
    local_828.Data.ArrayMax = 0;
    pTVar27 = UE::Trace::IAnalyzer::FEventData::GetArrayView<unsigned_char>
                        ((FEventData *)this_00,&local_5f0,"DataView");
    local_628.DataPtr = pTVar27->DataPtr;
    local_628.ArrayNum = pTVar27->ArrayNum;
    local_628._12_4_ = *(undefined4 *)&pTVar27->field_0xc;
    FMemoryReaderView::FMemoryReaderView(&local_4d8,&local_628,false);
    ::operator<<((FArchive *)&local_4d8,&local_818);
    ::operator<<((FArchive *)&local_4d8,&local_858);
    ::operator<<((FArchive *)&local_4d8,&local_828);
    pdVar28 = UE::Trace::IAnalyzer::FEventData::GetValueImpl
                        ((FEventData *)this_00,"Status",&local_934);
    if (pdVar28 == (double *)0x0) {
switchD_14d4c65fe_caseD_f9:
      uVar17 = 0;
    }
    else {
      switch(local_934) {
      case '\x01':
      case '\x02':
      case '\x04':
      case '\b':
        uVar17 = *(undefined1 *)pdVar28;
        break;
      case -8:
        uVar17 = (undefined1)(int)*pdVar28;
        break;
      default:
        goto switchD_14d4c65fe_caseD_f9;
      case -4:
        uVar17 = (undefined1)(int)*(float *)pdVar28;
      }
    }
    EVar14 = UE::Trace::IAnalyzer::FEventData::GetValue<enum_EStateTreeTraceEventType>
                       ((FEventData *)this_00,"EventType",Unset);
    local_6f8 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>
                          ((FEventData *)this_00,"NodeIndex",0);
    FVar47.Data = local_818.Data.AllocatorInstance.Data;
    local_708 = this->WorldTime;
    lVar43 = (longlong)local_818.Data.ArrayNum;
    local_6f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6f0.Data.ArrayNum = local_818.Data.ArrayNum;
    EStack_700 = EVar14;
    if (local_818.Data.ArrayNum == 0) {
      local_6f0.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_818.Data.ArrayNum,0,(ForAnyElementType *)&local_6f0,
                 local_818.Data.ArrayNum,&local_6f0.Data.ArrayMax);
      memcpy(local_6f0.Data.AllocatorInstance.Data,FVar47.Data,lVar43 * 2);
    }
    FVar47.Data = local_858.Data.AllocatorInstance.Data;
    lVar43 = (longlong)local_858.Data.ArrayNum;
    local_6e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6e0.Data.ArrayNum = local_858.Data.ArrayNum;
    if (local_858.Data.ArrayNum == 0) {
      local_6e0.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_858.Data.ArrayNum,0,(ForAnyElementType *)&local_6e0,
                 local_858.Data.ArrayNum,&local_6e0.Data.ArrayMax);
      memcpy(local_6e0.Data.AllocatorInstance.Data,FVar47.Data,lVar43 * 2);
    }
    FVar47.Data = local_828.Data.AllocatorInstance.Data;
    lVar43 = (longlong)local_828.Data.ArrayNum;
    local_6d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6d0.Data.ArrayNum = local_828.Data.ArrayNum;
    if (local_828.Data.ArrayNum == 0) {
      local_6d0.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_828.Data.ArrayNum,0,(ForAnyElementType *)&local_6d0,
                 local_828.Data.ArrayNum,&local_6d0.Data.ArrayMax);
      memcpy(local_6d0.Data.AllocatorInstance.Data,FVar47.Data,lVar43 * 2);
    }
    local_320._8_8_ = CONCAT71(uStack_6ff,EStack_700);
    local_320._16_8_ = CONCAT62(uStack_6f6,local_6f8);
    pFVar6 = this->Provider;
    local_320._0_8_ = local_708;
    local_6c0 = uVar17;
    ::FString::FString((FString *)(local_320 + 0x18),&local_6f0);
    ::FString::FString(&local_2f8,&local_6e0);
    ::FString::FString(&local_2e8,&local_6d0);
    local_2d8 = local_6c0;
    local_2d0 = 5;
    pFVar8 = local_890->EventTime;
    uVar32 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                       ((FEventData *)this_00,"Cycle",0);
    dVar50 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar8,uVar32);
    uVar22 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                       ((FEventData *)this_00,"InstanceSerial",0);
    uVar21 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                       ((FEventData *)this_00,"InstanceId",0);
    FVar37.SerialNumber = uVar22;
    FVar37.Id = uVar21;
    FStateTreeTraceProvider::AppendEvent
              (pFVar6,FVar37,dVar50,
               (TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
                *)local_320);
    uVar42 = (ulonglong)local_2d0;
    if ((10 < uVar42) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      uVar17 = (*pcVar9)();
      return (bool)uVar17;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar42] ==
        UE::Core::Private::TDestructorCaller<FStateTreeTraceTaskEvent>::Destruct) {
      if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
      }
      if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
      }
      if ((void *)local_320._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_320._24_8_);
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar42])(local_320);
    }
    if (local_6d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6d0.Data.AllocatorInstance.Data);
    }
    if (local_6e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6e0.Data.AllocatorInstance.Data);
    }
    if (local_6f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6f0.Data.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_4d8);
    if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_828.Data.AllocatorInstance.Data);
    }
    if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_858.Data.AllocatorInstance.Data);
    }
    if (local_818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_818.Data.AllocatorInstance.Data);
    }
    break;
  case 8:
    local_7e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_7e8.Data.ArrayNum = 0;
    local_7e8.Data.ArrayMax = 0;
    local_7f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_7f8.Data.ArrayNum = 0;
    local_7f8.Data.ArrayMax = 0;
    local_808.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_808.Data.ArrayNum = 0;
    local_808.Data.ArrayMax = 0;
    pTVar27 = UE::Trace::IAnalyzer::FEventData::GetArrayView<unsigned_char>
                        ((FEventData *)this_00,&local_5e0,"DataView");
    local_618.DataPtr = pTVar27->DataPtr;
    local_618.ArrayNum = pTVar27->ArrayNum;
    local_618._12_4_ = *(undefined4 *)&pTVar27->field_0xc;
    FMemoryReaderView::FMemoryReaderView(&local_428,&local_618,false);
    ::operator<<((FArchive *)&local_428,&local_7e8);
    ::operator<<((FArchive *)&local_428,&local_7f8);
    ::operator<<((FArchive *)&local_428,&local_808);
    EVar14 = UE::Trace::IAnalyzer::FEventData::GetValue<enum_EStateTreeTraceEventType>
                       ((FEventData *)this_00,"EventType",Unset);
    local_798 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>
                          ((FEventData *)this_00,"NodeIndex",0);
    FVar47.Data = local_7e8.Data.AllocatorInstance.Data;
    local_7a8 = this->WorldTime;
    lVar43 = (longlong)local_7e8.Data.ArrayNum;
    local_790.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_790.Data.ArrayNum = local_7e8.Data.ArrayNum;
    EStack_7a0 = EVar14;
    if (local_7e8.Data.ArrayNum == 0) {
      local_790.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_7e8.Data.ArrayNum,0,(ForAnyElementType *)&local_790,
                 local_7e8.Data.ArrayNum,&local_790.Data.ArrayMax);
      memcpy(local_790.Data.AllocatorInstance.Data,FVar47.Data,lVar43 * 2);
    }
    FVar47.Data = local_7f8.Data.AllocatorInstance.Data;
    lVar43 = (longlong)local_7f8.Data.ArrayNum;
    local_780.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_780.Data.ArrayNum = local_7f8.Data.ArrayNum;
    if (local_7f8.Data.ArrayNum == 0) {
      local_780.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_7f8.Data.ArrayNum,0,(ForAnyElementType *)&local_780,
                 local_7f8.Data.ArrayNum,&local_780.Data.ArrayMax);
      memcpy(local_780.Data.AllocatorInstance.Data,FVar47.Data,lVar43 * 2);
    }
    FVar47.Data = local_808.Data.AllocatorInstance.Data;
    lVar43 = (longlong)local_808.Data.ArrayNum;
    local_770.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_770.Data.ArrayNum = local_808.Data.ArrayNum;
    if (local_808.Data.ArrayNum == 0) {
      local_770.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_808.Data.ArrayNum,0,(ForAnyElementType *)&local_770,
                 local_808.Data.ArrayNum,&local_770.Data.ArrayMax);
      memcpy(local_770.Data.AllocatorInstance.Data,FVar47.Data,lVar43 * 2);
    }
    local_270._8_8_ = CONCAT71(uStack_79f,EStack_7a0);
    local_270._16_8_ = CONCAT62(uStack_796,local_798);
    pFVar6 = this->Provider;
    local_270._0_8_ = local_7a8;
    ::FString::FString((FString *)(local_270 + 0x18),&local_790);
    ::FString::FString(&local_248,&local_780);
    ::FString::FString(&local_238,&local_770);
    pFVar8 = param_3->EventTime;
    local_220 = 6;
    uVar32 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                       ((FEventData *)this_00,"Cycle",0);
    dVar50 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar8,uVar32);
    uVar22 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                       ((FEventData *)this_00,"InstanceSerial",0);
    uVar21 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                       ((FEventData *)this_00,"InstanceId",0);
    FVar38.SerialNumber = uVar22;
    FVar38.Id = uVar21;
    FStateTreeTraceProvider::AppendEvent
              (pFVar6,FVar38,dVar50,
               (TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
                *)local_270);
    uVar42 = (ulonglong)local_220;
    if ((10 < uVar42) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      uVar17 = (*pcVar9)();
      return (bool)uVar17;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar42] ==
        UE::Core::Private::TDestructorCaller<FStateTreeTraceEvaluatorEvent>::Destruct) {
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      if ((void *)local_270._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_270._24_8_);
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar42])(local_270);
    }
    if (local_770.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_770.Data.AllocatorInstance.Data);
    }
    if (local_780.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_780.Data.AllocatorInstance.Data);
    }
    if (local_790.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_790.Data.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_428);
    if (local_808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_808.Data.AllocatorInstance.Data);
    }
    if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
    }
    if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
    }
    break;
  case 9:
    EVar14 = UE::Trace::IAnalyzer::FEventData::GetValue<enum_EStateTreeTraceEventType>
                       ((FEventData *)this_00,"EventType",Unset);
    pdVar28 = UE::Trace::IAnalyzer::FEventData::GetValueImpl
                        ((FEventData *)this_00,"Priority",&local_933);
    if (pdVar28 == (double *)0x0) {
switchD_14d4c7185_caseD_f9:
      EVar41 = None;
    }
    else {
      switch(local_933) {
      case '\x01':
      case '\x02':
      case '\x04':
      case '\b':
        EVar41 = *(EStateTreeTransitionPriority *)pdVar28;
        break;
      case -8:
        EVar41 = (EStateTreeTransitionPriority)(int)*pdVar28;
        break;
      default:
        goto switchD_14d4c7185_caseD_f9;
      case -4:
        EVar41 = (EStateTreeTransitionPriority)(int)*(float *)pdVar28;
      }
    }
    FVar19.Index = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>
                             ((FEventData *)this_00,"TargetStateIndex",0);
    FVar20.Value = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>
                             ((FEventData *)this_00,"TransitionIndex",0);
    pdVar28 = UE::Trace::IAnalyzer::FEventData::GetValueImpl
                        ((FEventData *)this_00,"SourceType",local_932);
    if (pdVar28 == (double *)0x0) {
switchD_14d4c7200_caseD_f9:
      EVar15 = Unset;
    }
    else {
      switch(local_932[0]) {
      case '\x01':
      case '\x02':
      case '\x04':
      case '\b':
        EVar15 = *(EStateTreeTransitionSourceType *)pdVar28;
        break;
      case -8:
        EVar15 = (EStateTreeTransitionSourceType)(int)*pdVar28;
        break;
      default:
        goto switchD_14d4c7200_caseD_f9;
      case -4:
        EVar15 = (EStateTreeTransitionSourceType)(int)*(float *)pdVar28;
      }
    }
    pFVar29 = FStateTreeTransitionSource::FStateTreeTransitionSource
                        (&local_5c0,(UStateTree *)0x0,EVar15,FVar20,FVar19,EVar41);
    local_168._padding_ = (longlong)this->WorldTime;
    pFVar6 = this->Provider;
    local_908.Data._0_1_ = (undefined1)(pFVar29->Asset).WeakPtr.ObjectIndex;
    puVar10 = (undefined8 *)((longlong)&(pFVar29->Asset).WeakPtr.ObjectIndex + 1);
    local_908.Data._1_1_ = *(undefined1 *)puVar10;
    local_908.Data._2_1_ = *(undefined1 *)((longlong)&(pFVar29->Asset).WeakPtr.ObjectIndex + 2);
    local_908.Data._3_1_ = *(undefined1 *)((longlong)&(pFVar29->Asset).WeakPtr.ObjectIndex + 3);
    local_908.Data._4_1_ = (undefined1)(pFVar29->Asset).WeakPtr.ObjectSerialNumber;
    local_908.Data._5_1_ =
         *(undefined1 *)((longlong)&(pFVar29->Asset).WeakPtr.ObjectSerialNumber + 1);
    local_908.Data._6_1_ =
         *(undefined1 *)((longlong)&(pFVar29->Asset).WeakPtr.ObjectSerialNumber + 2);
    local_908.Data._7_1_ =
         *(undefined1 *)((longlong)&(pFVar29->Asset).WeakPtr.ObjectSerialNumber + 3);
    EStack_900 = pFVar29->SourceType;
    local_168._17_8_ = *puVar10;
    uStack_8ff = pFVar29->field_0x9;
    uStack_8fe = (undefined1)(pFVar29->TransitionIndex).Value;
    uStack_8fd = *(undefined1 *)((longlong)&(pFVar29->TransitionIndex).Value + 1);
    uStack_8fc = (undefined1)(pFVar29->TargetState).Index;
    local_168._padding_._1_4_ = *(undefined4 *)&pFVar29->field_0x9;
    puVar11 = (undefined2 *)((longlong)&(pFVar29->TargetState).Index + 1);
    uStack_8fb = *(undefined1 *)puVar11;
    EStack_8fa = pFVar29->Priority;
    local_168._padding_._5_2_ = *puVar11;
    uStack_8f9 = pFVar29->field_0xf;
    pFVar8 = local_890->EventTime;
    local_168._padding_._0_1_ = local_908.Data._0_1_;
    local_168._padding_._1_7_ = uStack_90f;
    local_168.TypeIndex = 7;
    local_168._padding_._0_1_ = EVar14;
    local_168._padding_._7_1_ = uStack_8f9;
    uVar32 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                       ((FEventData *)this_00,"Cycle",0);
    dVar50 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar8,uVar32);
    uVar22 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                       ((FEventData *)this_00,"InstanceSerial",0);
    uVar21 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                       ((FEventData *)this_00,"InstanceId",0);
    FVar40.SerialNumber = uVar22;
    FVar40.Id = uVar21;
    FStateTreeTraceProvider::AppendEvent(pFVar6,FVar40,dVar50,&local_168);
    uVar42 = (ulonglong)local_168.TypeIndex;
    if ((10 < uVar42) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      uVar17 = (*pcVar9)();
      return (bool)uVar17;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar42] !=
        UE::Core::Private::TDestructorCaller<FStateTreeTraceTransitionEvent>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar42])(&local_168);
    }
    break;
  case 10:
    local_7b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_7b8.Data.ArrayNum = 0;
    local_7b8.Data.ArrayMax = 0;
    local_7c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_7c8.Data.ArrayNum = 0;
    local_7c8.Data.ArrayMax = 0;
    local_7d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_7d8.Data.ArrayNum = 0;
    local_7d8.Data.ArrayMax = 0;
    pTVar27 = UE::Trace::IAnalyzer::FEventData::GetArrayView<unsigned_char>
                        ((FEventData *)this_00,&local_5d0,"DataView");
    local_608.DataPtr = pTVar27->DataPtr;
    local_608.ArrayNum = pTVar27->ArrayNum;
    local_608._12_4_ = *(undefined4 *)&pTVar27->field_0xc;
    FMemoryReaderView::FMemoryReaderView(&local_588,&local_608,false);
    ::operator<<((FArchive *)&local_588,&local_7b8);
    ::operator<<((FArchive *)&local_588,&local_7c8);
    ::operator<<((FArchive *)&local_588,&local_7d8);
    EVar14 = UE::Trace::IAnalyzer::FEventData::GetValue<enum_EStateTreeTraceEventType>
                       ((FEventData *)this_00,"EventType",Unset);
    local_748 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>
                          ((FEventData *)this_00,"NodeIndex",0);
    FVar47.Data = local_7b8.Data.AllocatorInstance.Data;
    local_758 = this->WorldTime;
    lVar43 = (longlong)local_7b8.Data.ArrayNum;
    local_740.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_740.Data.ArrayNum = local_7b8.Data.ArrayNum;
    EStack_750 = EVar14;
    if (local_7b8.Data.ArrayNum == 0) {
      local_740.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_7b8.Data.ArrayNum,0,(ForAnyElementType *)&local_740,
                 local_7b8.Data.ArrayNum,&local_740.Data.ArrayMax);
      memcpy(local_740.Data.AllocatorInstance.Data,FVar47.Data,lVar43 * 2);
    }
    FVar47.Data = local_7c8.Data.AllocatorInstance.Data;
    lVar43 = (longlong)local_7c8.Data.ArrayNum;
    local_730.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_730.Data.ArrayNum = local_7c8.Data.ArrayNum;
    if (local_7c8.Data.ArrayNum == 0) {
      local_730.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_7c8.Data.ArrayNum,0,(ForAnyElementType *)&local_730,
                 local_7c8.Data.ArrayNum,&local_730.Data.ArrayMax);
      memcpy(local_730.Data.AllocatorInstance.Data,FVar47.Data,lVar43 * 2);
    }
    FVar47.Data = local_7d8.Data.AllocatorInstance.Data;
    lVar43 = (longlong)local_7d8.Data.ArrayNum;
    local_720.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_720.Data.ArrayNum = local_7d8.Data.ArrayNum;
    if (local_7d8.Data.ArrayNum == 0) {
      local_720.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_7d8.Data.ArrayNum,0,(ForAnyElementType *)&local_720,
                 local_7d8.Data.ArrayNum,&local_720.Data.ArrayMax);
      memcpy(local_720.Data.AllocatorInstance.Data,FVar47.Data,lVar43 * 2);
    }
    local_2c8._8_8_ = CONCAT71(uStack_74f,EStack_750);
    local_2c8._16_8_ = CONCAT62(uStack_746,local_748);
    pFVar6 = this->Provider;
    local_2c8._0_8_ = local_758;
    ::FString::FString((FString *)(local_2c8 + 0x18),&local_740);
    ::FString::FString(&local_2a0,&local_730);
    ::FString::FString(&local_290,&local_720);
    pFVar8 = param_3->EventTime;
    local_278 = 8;
    uVar32 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                       ((FEventData *)this_00,"Cycle",0);
    dVar50 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar8,uVar32);
    uVar22 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                       ((FEventData *)this_00,"InstanceSerial",0);
    uVar21 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                       ((FEventData *)this_00,"InstanceId",0);
    FVar39.SerialNumber = uVar22;
    FVar39.Id = uVar21;
    FStateTreeTraceProvider::AppendEvent
              (pFVar6,FVar39,dVar50,
               (TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
                *)local_2c8);
    uVar42 = (ulonglong)local_278;
    if ((10 < uVar42) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      uVar17 = (*pcVar9)();
      return (bool)uVar17;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar42] ==
        UE::Core::Private::TDestructorCaller<FStateTreeTraceConditionEvent>::Destruct) {
      if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.Data.AllocatorInstance.Data);
      }
      if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
      }
      if ((void *)local_2c8._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_2c8._24_8_);
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar42])(local_2c8);
    }
    if (local_720.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_720.Data.AllocatorInstance.Data);
    }
    if (local_730.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_730.Data.AllocatorInstance.Data);
    }
    if (local_740.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_740.Data.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_588);
    if (local_7d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7d8.Data.AllocatorInstance.Data);
    }
    if (local_7c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7c8.Data.AllocatorInstance.Data);
    }
    if (local_7b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7b8.Data.AllocatorInstance.Data);
    }
    break;
  case 0xb:
    local_918 = this->WorldTime;
    pFVar46 = (FWeakObjectPtr *)0x0;
    local_908.Data._0_1_ = 0;
    local_908.Data._1_1_ = 0;
    local_908.Data._2_1_ = 0;
    local_908.Data._3_1_ = 0;
    local_908.Data._4_1_ = 0;
    local_908.Data._5_1_ = 0;
    local_908.Data._6_1_ = 0;
    local_908.Data._7_1_ = 0;
    EStack_900 = Unset;
    uStack_8ff = 0;
    uStack_8fe = 0;
    uStack_8fd = 0;
    uStack_8fc = 0;
    uStack_8fb = 0;
    EStack_8fa = None;
    uStack_8f9 = 0;
    uStack_910 = 0;
    pTVar30 = UE::Trace::IAnalyzer::FEventData::GetArrayView<unsigned_short>
                        ((FEventData *)this_00,&local_5b0,"ActiveStates");
    local_8f8.Data = (FScriptContainerElement *)0x0;
    iVar23 = pTVar30->ArrayNum;
    puVar5 = pTVar30->DataPtr;
    local_8f0 = iVar23;
    if (iVar23 == 0) {
      local_8ec = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar23,0,&local_8f8,iVar23,&local_8ec);
      ConstructItems<FStateTreeStateHandle,unsigned_short,int>(local_8f8.Data,puVar5,iVar23);
    }
    pTVar30 = UE::Trace::IAnalyzer::FEventData::GetArrayView<unsigned_short>
                        ((FEventData *)this_00,&local_5a0,"AssetDebugIds");
    local_8b0.Data = (FScriptContainerElement *)0x0;
    local_8a8 = pTVar30->ArrayNum;
    lVar43 = (longlong)local_8a8;
    puVar5 = pTVar30->DataPtr;
    if (local_8a8 == 0) {
      local_8a4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_8a8,0,&local_8b0,local_8a8,&local_8a4);
      memcpy(local_8b0.Data,puVar5,lVar43 * 2);
    }
    if (local_8f0 == local_8a8) {
LAB_14d4c745a:
      uVar22 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                         ((FEventData *)this_00,"InstanceSerial",0);
      local_8d0.Id = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                               ((FEventData *)this_00,"InstanceId",0);
      pFVar6 = local_920;
      local_8d0.SerialNumber = uVar22;
      FVar39 = local_8d0;
      local_8c0.ObjectIndex = 0;
      local_8c0.ObjectSerialNumber = 0;
      if (local_8f0 == 0) {
        pFVar6 = this->Provider;
        local_668 = local_8d0;
        local_920 = pFVar6;
        local_8d0 = (FStateTreeInstanceDebugId)
                    TMapBase<FStateTreeInstanceDebugId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,unsigned_int,0>_>
                    ::Find((TMapBase<FStateTreeInstanceDebugId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,unsigned_int,0>_>
                            *)&pFVar6->InstanceIdToDebuggerEntryTimelines,&local_668);
        if (local_8d0 != (FStateTreeInstanceDebugId)0x0) {
          if (((pFVar6->Descriptors).ArrayNum != (pFVar6->EventsTimelines).ArrayNum) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Descriptors.Num() == EventsTimelines.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeTraceProvider.cpp"
                                  ,0xa7,L""), bVar16)) {
            pcVar9 = (code *)swi(3);
            uVar17 = (*pcVar9)();
            return (bool)uVar17;
          }
          uVar22 = *(uint *)local_8d0;
          local_928.ObjectIndex = uVar22;
          uVar21 = 0;
          if ((int)uVar22 < (pFVar6->Descriptors).ArrayNum) {
            uVar21 = ~uVar22 >> 0x1f;
          }
          if (uVar21 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar9 = (code *)swi(3);
              uVar17 = (*pcVar9)();
              return (bool)uVar17;
            }
            uVar22 = local_928.ObjectIndex;
          }
          iVar23 = CONCAT13(uStack_8fd,CONCAT12(uStack_8fe,CONCAT11(uStack_8ff,EStack_900)));
          FVar7 = *(FWeakObjectPtr *)
                   (*(longlong *)
                     ((local_920->Descriptors).AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10
                     ) + 0x30);
          local_8c0 = FVar7;
          if (iVar23 == CONCAT13(uStack_8f9,CONCAT12(EStack_8fa,CONCAT11(uStack_8fb,uStack_8fc)))) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&local_908,(int *)&uStack_8fc);
          }
          iVar1 = iVar23 + 1;
          lVar31 = (longlong)iVar23;
          EStack_900 = (EStateTreeTransitionSourceType)iVar1;
          uStack_8ff = (undefined1)((uint)iVar1 >> 8);
          uStack_8fe = (undefined1)((uint)iVar1 >> 0x10);
          uStack_8fd = (undefined1)((uint)iVar1 >> 0x18);
          lVar43 = CONCAT17(local_908.Data._7_1_,
                            CONCAT16(local_908.Data._6_1_,
                                     CONCAT15(local_908.Data._5_1_,
                                              CONCAT14(local_908.Data._4_1_,
                                                       CONCAT13(local_908.Data._3_1_,
                                                                CONCAT12(local_908.Data._2_1_,
                                                                         CONCAT11(local_908.Data.
                                                                                  _1_1_,local_908.
                                                                                        Data._0_1_))
                                                               )))));
          *(undefined8 *)(lVar43 + 8 + lVar31 * 0x18) = 0;
          *(undefined8 *)(lVar43 + 0x10 + lVar31 * 0x18) = 0;
          *(FWeakObjectPtr *)(lVar43 + lVar31 * 0x18) = FVar7;
        }
      }
      else {
        this = (FStateTreeTraceAnalyzer *)local_920;
        if (0 < local_8f0) {
          local_8b8 = 0;
          FVar20.Value = 0xffff;
          pFVar48 = pFVar46;
          do {
            uVar21 = (uint)pFVar48;
            local_928.ObjectIndex = ~uVar21 >> 0x1f;
            uVar22 = 0;
            if ((int)uVar21 < local_8a8) {
              uVar22 = ~uVar21 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar9 = (code *)swi(3);
              uVar17 = (*pcVar9)();
              return (bool)uVar17;
            }
            FVar3.Value = *(ushort *)(local_8b0.Data + local_8b8);
            if (FVar3.Value == FVar20.Value) {
LAB_14d4c768d:
              if ((pFVar46 == (FWeakObjectPtr *)0x0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("AssetActiveStates != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeTraceAnalyzer.cpp"
                                      ,0x108,L""), bVar16)) {
                pcVar9 = (code *)swi(3);
                uVar17 = (*pcVar9)();
                return (bool)uVar17;
              }
              uVar22 = 0;
              if ((int)uVar21 < local_8f0) {
                uVar22 = local_928.ObjectIndex;
              }
              if ((uVar22 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar9 = (code *)swi(3);
                uVar17 = (*pcVar9)();
                return (bool)uVar17;
              }
              local_928 = (FWeakObjectPtr)(local_8b8 + (longlong)local_8f8.Data);
              if ((((ulonglong)pFVar46[1] <= (ulonglong)local_928) &&
                  ((ulonglong)local_928 <
                   (ulonglong)((longlong)pFVar46[1] + (longlong)pFVar46[2].ObjectSerialNumber * 2)))
                 && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar16)) {
                pcVar9 = (code *)swi(3);
                uVar17 = (*pcVar9)();
                return (bool)uVar17;
              }
              iVar23 = pFVar46[2].ObjectIndex;
              if (iVar23 == pFVar46[2].ObjectSerialNumber) {
                iVar23 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x202,(ForAnyElementType *)(pFVar46 + 1),
                                    &pFVar46[2].ObjectSerialNumber);
              }
              pFVar46[2].ObjectIndex = iVar23 + 1;
              *(undefined2 *)((longlong)pFVar46[1] + (longlong)iVar23 * 2) =
                   *(undefined2 *)local_928;
            }
            else {
              bVar16 = FStateTreeTraceProvider::GetAssetFromDebugId
                                 (*(FStateTreeTraceProvider **)
                                   &pFVar6->InstanceIdToDebuggerEntryTimelines,FVar3,
                                  (TWeakObjectPtr<UStateTree_const_,FWeakObjectPtr> *)&local_8c0);
              if (bVar16) {
                iVar23 = CONCAT13(uStack_8fd,CONCAT12(uStack_8fe,CONCAT11(uStack_8ff,EStack_900)));
                if (iVar23 == CONCAT13(uStack_8f9,
                                       CONCAT12(EStack_8fa,CONCAT11(uStack_8fb,uStack_8fc)))) {
                  iVar23 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x818,&local_908,(int *)&uStack_8fc);
                }
                iVar1 = iVar23 + 1;
                EStack_900 = (EStateTreeTransitionSourceType)iVar1;
                uStack_8ff = (undefined1)((uint)iVar1 >> 8);
                uStack_8fe = (undefined1)((uint)iVar1 >> 0x10);
                uStack_8fd = (undefined1)((uint)iVar1 >> 0x18);
                lVar31 = (longlong)iVar23;
                lVar43 = CONCAT17(local_908.Data._7_1_,
                                  CONCAT16(local_908.Data._6_1_,
                                           CONCAT15(local_908.Data._5_1_,
                                                    CONCAT14(local_908.Data._4_1_,
                                                             CONCAT13(local_908.Data._3_1_,
                                                                      CONCAT12(local_908.Data._2_1_,
                                                                               CONCAT11(local_908.
                                                                                        Data._1_1_,
                                                                                        local_908.
                                                                                        Data._0_1_))
                                                                     )))));
                *(undefined8 *)(lVar43 + 8 + lVar31 * 0x18) = 0;
                *(undefined8 *)(lVar43 + 0x10 + lVar31 * 0x18) = 0;
                pFVar46 = (FWeakObjectPtr *)(lVar43 + lVar31 * 0x18);
                *pFVar46 = local_8c0;
                FVar20.Value = FVar3.Value;
                goto LAB_14d4c768d;
              }
              if (1 < (byte)LogStateTree._0_1_) {
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
              }
            }
            local_8b8 = local_8b8 + 2;
            pFVar48 = (FWeakObjectPtr *)(ulonglong)(uVar21 + 1);
            pIVar44 = local_678;
            FVar39 = local_8d0;
            this_00 = local_880;
            this = (FStateTreeTraceAnalyzer *)local_920;
          } while ((int)(uVar21 + 1) < local_8f0);
        }
      }
      local_880 = *(FStateTreeTraceProvider **)
                   &((FStateTreeTraceProvider *)this)->InstanceIdToDebuggerEntryTimelines;
      iVar23 = CONCAT13(uStack_8fd,CONCAT12(uStack_8fe,CONCAT11(uStack_8ff,EStack_900)));
      pFVar12 = (FAssetActiveStates *)
                CONCAT17(local_908.Data._7_1_,
                         CONCAT16(local_908.Data._6_1_,
                                  CONCAT15(local_908.Data._5_1_,
                                           CONCAT14(local_908.Data._4_1_,
                                                    CONCAT13(local_908.Data._3_1_,
                                                             CONCAT12(local_908.Data._2_1_,
                                                                      CONCAT11(local_908.Data._1_1_,
                                                                               local_908.Data._0_1_)
                                                                     ))))));
      local_218._padding_ = 0;
      local_218._padding_ = CONCAT71(uStack_90f,uStack_910);
      local_218._padding_ = (longlong)local_918;
      local_218._padding_._0_4_ = iVar23;
      if (iVar23 == 0) {
        local_218._padding_._4_4_ = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar23,0,(ForAnyElementType *)&local_218._padding_,iVar23,
                   (int *)((longlong)&local_218._padding_ + 4));
        ConstructItems<FStateTreeTraceActiveStates::FAssetActiveStates,FStateTreeTraceActiveStates::FAssetActiveStates,int>
                  ((void *)local_218._padding_,pFVar12,iVar23);
      }
      local_218.TypeIndex = 9;
      pFVar8 = local_890->EventTime;
      uVar32 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>
                         ((FEventData *)this_00,"Cycle",0);
      dVar50 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(pFVar8,uVar32);
      FStateTreeTraceProvider::AppendEvent(local_880,FVar39,dVar50,&local_218);
      uVar42 = (ulonglong)local_218.TypeIndex;
      if ((10 < uVar42) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar16)) {
        pcVar9 = (code *)swi(3);
        uVar17 = (*pcVar9)();
        return (bool)uVar17;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar42])(&local_218);
    }
    else {
      local_932[1] = 0;
      bVar16 = `FStateTreeTraceAnalyzer::OnEvent'::__l87::<lambda_1>::operator()(local_932 + 1);
      if (bVar16) goto LAB_14d4c745a;
    }
    if (local_8b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8b0.Data);
    }
    if (local_8f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8f8.Data);
    }
    DestructItems<FStateTreeTraceActiveStates::FAssetActiveStates,int>
              ((FAssetActiveStates *)
               CONCAT17(local_908.Data._7_1_,
                        CONCAT16(local_908.Data._6_1_,
                                 CONCAT15(local_908.Data._5_1_,
                                          CONCAT14(local_908.Data._4_1_,
                                                   CONCAT13(local_908.Data._3_1_,
                                                            CONCAT12(local_908.Data._2_1_,
                                                                     CONCAT11(local_908.Data._1_1_,
                                                                              local_908.Data._0_1_))
                                                           ))))),
               CONCAT13(uStack_8fd,CONCAT12(uStack_8fe,CONCAT11(uStack_8ff,EStack_900))));
    pvVar13 = (void *)CONCAT17(local_908.Data._7_1_,
                               CONCAT16(local_908.Data._6_1_,
                                        CONCAT15(local_908.Data._5_1_,
                                                 CONCAT14(local_908.Data._4_1_,
                                                          CONCAT13(local_908.Data._3_1_,
                                                                   CONCAT12(local_908.Data._2_1_,
                                                                            CONCAT11(local_908.Data.
                                                                                     _1_1_,local_908
                                                  .Data._0_1_)))))));
    if (pvVar13 != (void *)0x0) {
      FMemory::Free(pvVar13);
    }
    break;
  default:
    local_658 = local_res10;
    `FStateTreeTraceAnalyzer::OnEvent'::__l4::<lambda_2>::operator()(&local_658);
  }
  (**(code **)((longlong)*pIVar44 + 0xa8))(pIVar44);
  FMemScope::~FMemScope(&local_680);
  FLLMScope::~FLLMScope(local_8c8);
  return true;
}

// operator() @ 15057e000

bool __thiscall `FStateTreeTraceAnalyzer::OnEvent'::__l87::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4623429962253205731>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4623429962253205731>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15057e310

bool __thiscall `FStateTreeTraceAnalyzer::OnEvent'::__l4::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4623429962253205780>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4623429962253205780>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

