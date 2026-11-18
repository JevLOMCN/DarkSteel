// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsET
// Functions: 121

// IsUserLoggingOutProperty'' @ 140f4d170

void __cdecl
`dynamic_initializer_for_'FAnalyticsSessionSummaryManager::IsUserLoggingOutProperty__(void)

{
  ::FString::FString(&FAnalyticsSessionSummaryManager::IsUserLoggingOutProperty.Key,
                     L"IsUserLoggingOut");
  atexit(`dynamic_atexit_destructor_for_'FAnalyticsSessionSummaryManager::IsUserLoggingOutProperty__
        );
  return;
}

// ShutdownTypeCodeProperty'' @ 140f4d1a0

void __cdecl
`dynamic_initializer_for_'FAnalyticsSessionSummaryManager::ShutdownTypeCodeProperty__(void)

{
  ::FString::FString(&FAnalyticsSessionSummaryManager::ShutdownTypeCodeProperty.Key,
                     L"ShutdownTypeCode");
  atexit(`dynamic_atexit_destructor_for_'FAnalyticsSessionSummaryManager::ShutdownTypeCodeProperty__
        );
  return;
}

// `dynamic_initializer_for_'CVarDefaultUserAgentCommentsEnabled'' @ 140f4d1d0

void __cdecl
AnalyticsProviderETCvars::_dynamic_initializer_for__CVarDefaultUserAgentCommentsEnabled__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarDefaultUserAgentCommentsEnabled,L"AnalyticsET.UserAgentCommentsEnabled",local_res8
             ,L"Whether comments are supported in the analytics user agent string",0x2000);
  atexit(_dynamic_atexit_destructor_for__CVarDefaultUserAgentCommentsEnabled__);
  return;
}

// `dynamic_initializer_for_'CvarPayloadFlushTimeSecForWarning'' @ 140f4d220

void __cdecl EventCacheStatic::_dynamic_initializer_for__CvarPayloadFlushTimeSecForWarning__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CvarPayloadFlushTimeSecForWarning,L"AnalyticsET.PayloadFlushTimeSecForWarning",
             &PayloadFlushTimeSecForWarning,
             L"Time in seconds that flushing an EventCache payload can take before it will trigger a warning message, listing the events in the payload. This is intended to be used to investigate spammy or slow telemetry."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CvarPayloadFlushTimeSecForWarning__);
  return;
}

// `dynamic_initializer_for_'CvarPayloadPercentageOfMaxForWarning'' @ 140f4d270

void __cdecl
EventCacheStatic::_dynamic_initializer_for__CvarPayloadPercentageOfMaxForWarning__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CvarPayloadPercentageOfMaxForWarning,L"AnalyticsET.PayloadPercentageOfMaxForWarning",
             &PayloadPercentageOfMaxForWarning,
             L"Percentage of the maximum payload for an EventCache that will trigger a warning message, listing the events in the payload. This is intended to be used to investigate spammy or slow telemetry."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CvarPayloadPercentageOfMaxForWarning__);
  return;
}

// `dynamic_initializer_for_'CvarPreventMultipleFlushesInOneFrame'' @ 140f4d2c0

void __cdecl
AnalyticsProviderETCvars::_dynamic_initializer_for__CvarPreventMultipleFlushesInOneFrame__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CvarPreventMultipleFlushesInOneFrame,L"AnalyticsET.PreventMultipleFlushesInOneFrame",
             &PreventMultipleFlushesInOneFrame,
             L"When true, prevents more than one AnalyticsProviderET instance from flushing in the same frame, allowing the flush and HTTP cost to be amortized."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CvarPreventMultipleFlushesInOneFrame__);
  return;
}

// `dynamic_initializer_for_'DelayedSend'' @ 140f4d310

void __cdecl AnalyticsManagerProperties::_dynamic_initializer_for__DelayedSend__(void)

{
  ::FString::FString(&DelayedSend.Key,L"DelayedSend");
  atexit(_dynamic_atexit_destructor_for__DelayedSend__);
  return;
}

// `dynamic_initializer_for_'ErrorNamespace'' @ 140f4d340

void __cdecl EHttpResponseCodes::_dynamic_initializer_for__ErrorNamespace__(void)

{
  ::FString::FString(&ErrorNamespace,L"errors.com.epicgames.httpresponse");
  atexit(_dynamic_atexit_destructor_for__ErrorNamespace__);
  return;
}

// `dynamic_initializer_for_'FAnalyticsProviderETEventCacheTestAutomationTestInstance'' @ 140f4d370

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FAnalyticsProviderETEventCacheTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FAnalyticsProviderETEventCacheTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FAnalyticsProviderETEventCacheTestAutomationTestInstance,
             &local_18,false);
  FAnalyticsProviderETEventCacheTestAutomationTestInstance._0_8_ =
       &___7FAnalyticsProviderETEventCacheTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FAnalyticsProviderETEventCacheTestAutomationTestInstance__)
  ;
  return;
}

// `dynamic_initializer_for_'FAnalyticsSessionSummaryManagerAutomationTestAutomationTestInstance'' @ 140f4d3d0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FAnalyticsSessionSummaryManagerAutomationTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FAnalyticsSessionSummaryManagerAutomationTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FAnalyticsSessionSummaryManagerAutomationTestAutomationTestInstance,&local_18,false);
  FAnalyticsSessionSummaryManagerAutomationTestAutomationTestInstance._0_8_ =
       &___7FAnalyticsSessionSummaryManagerAutomationTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FAnalyticsSessionSummaryManagerAutomationTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'HttpVersion'' @ 140f4d430

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'InternalPropertyPrefix'' @ 140f4d450

void __cdecl AnalyticsManagerProperties::_dynamic_initializer_for__InternalPropertyPrefix__(void)

{
  ::FString::FString(&InternalPropertyPrefix,L"Internal.");
  atexit(_dynamic_atexit_destructor_for__InternalPropertyPrefix__);
  return;
}

// `dynamic_initializer_for_'InternalSessionAppId'' @ 140f4d480

void __cdecl AnalyticsManagerProperties::_dynamic_initializer_for__InternalSessionAppId__(void)

{
  ::FString::FString(&InternalSessionAppId.Key,L"Internal.AppId");
  atexit(_dynamic_atexit_destructor_for__InternalSessionAppId__);
  return;
}

// `dynamic_initializer_for_'InternalSessionAppVersion'' @ 140f4d4b0

void __cdecl AnalyticsManagerProperties::_dynamic_initializer_for__InternalSessionAppVersion__(void)

{
  ::FString::FString(&InternalSessionAppVersion.Key,L"Internal.AppVersion");
  atexit(_dynamic_atexit_destructor_for__InternalSessionAppVersion__);
  return;
}

// `dynamic_initializer_for_'InternalSessionId'' @ 140f4d4e0

void __cdecl AnalyticsManagerProperties::_dynamic_initializer_for__InternalSessionId__(void)

{
  ::FString::FString(&InternalSessionId.Key,L"Internal.SessionId");
  atexit(_dynamic_atexit_destructor_for__InternalSessionId__);
  return;
}

// `dynamic_initializer_for_'InternalSessionUserId'' @ 140f4d510

void __cdecl AnalyticsManagerProperties::_dynamic_initializer_for__InternalSessionUserId__(void)

{
  ::FString::FString(&InternalSessionUserId.Key,L"Internal.UserId");
  atexit(_dynamic_atexit_destructor_for__InternalSessionUserId__);
  return;
}

// `dynamic_initializer_for_'InternalWasProcessed'' @ 140f4d540

void __cdecl AnalyticsManagerProperties::_dynamic_initializer_for__InternalWasProcessed__(void)

{
  ::FString::FString(&InternalWasProcessed.Key,L"Internal.WasProcessed");
  atexit(_dynamic_atexit_destructor_for__InternalWasProcessed__);
  return;
}

// `dynamic_initializer_for_'LogAnalyticsSessionSummary'' @ 140f4d570

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAnalyticsSessionSummary__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAnalyticsSessionSummary,L"LogAnalyticsSessionSummary",Verbose,
             All);
  atexit(_dynamic_atexit_destructor_for__LogAnalyticsSessionSummary__);
  return;
}

// `dynamic_initializer_for_'LogAnalyticsSessionSummarySender'' @ 140f4d5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAnalyticsSessionSummarySender__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAnalyticsSessionSummarySender,
             L"LogAnalyticsSessionSummarySender",Verbose,All);
  atexit(_dynamic_atexit_destructor_for__LogAnalyticsSessionSummarySender__);
  return;
}

// `dynamic_initializer_for_'MissingDataFrom'' @ 140f4d5f0

void __cdecl AnalyticsManagerProperties::_dynamic_initializer_for__MissingDataFrom__(void)

{
  ::FString::FString(&MissingDataFrom.Key,L"MissingDataFrom");
  atexit(_dynamic_atexit_destructor_for__MissingDataFrom__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAnalyticsET'' @ 140f4d620

void __cdecl _dynamic_initializer_for__ModuleRegistrantAnalyticsET__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AnalyticsET";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AnalyticsET",0xb);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAnalyticsET>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'OrphanSessionCheckPeriod'' @ 140f4d670

void __cdecl AnalyticsSessionUtils::_dynamic_initializer_for__OrphanSessionCheckPeriod__(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = __real_41e65a0bc0100000;
  auVar1 = roundpd(auVar1,auVar1,1);
  OrphanSessionCheckPeriod.Ticks = (longlong)auVar1._0_8_;
  return;
}

// `dynamic_initializer_for_'OrphanSessionsOwnerCriticalSectionName'' @ 140f4d6a0

void __cdecl
AnalyticsSessionUtils::_dynamic_initializer_for__OrphanSessionsOwnerCriticalSectionName__(void)

{
  ::FString::FString(&OrphanSessionsOwnerCriticalSectionName,
                     L"UE_AnalyticsSessionSummaryManager_OrphanOwner");
  atexit(_dynamic_atexit_destructor_for__OrphanSessionsOwnerCriticalSectionName__);
  return;
}

// `dynamic_initializer_for_'OrphanSessionsOwnerFilename'' @ 140f4d6d0

void __cdecl AnalyticsSessionUtils::_dynamic_initializer_for__OrphanSessionsOwnerFilename__(void)

{
  ::FString::FString(&OrphanSessionsOwnerFilename,L"8E1D46DBC38F4A789939D781E1B91520");
  atexit(_dynamic_atexit_destructor_for__OrphanSessionsOwnerFilename__);
  return;
}

// `dynamic_initializer_for_'ProcessGroupDeathGracePeriod'' @ 140f4d700

void __cdecl AnalyticsSessionUtils::_dynamic_initializer_for__ProcessGroupDeathGracePeriod__(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = __real_4220c388d0010000;
  auVar1 = roundpd(auVar1,auVar1,1);
  ProcessGroupDeathGracePeriod.Ticks = (longlong)auVar1._0_8_;
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 140f4d730

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'ReservedKeys'' @ 140f4d750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl AnalyticsManagerProperties::_dynamic_initializer_for__ReservedKeys__(void)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType FVar2;
  int iVar3;
  longlong lVar4;
  FString *pFVar5;
  undefined1 auStackY_a8 [32];
  initializer_list<FString> local_68;
  FString local_58;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  FString local_18;
  
  FVar2.Data = ShutdownType.Key.Data.AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(__security_cookie.value ^ (ulonglong)auStackY_a8);
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = ShutdownType.Key.Data.ArrayNum;
  local_58.Data.ArrayNum = iVar3;
  if (iVar3 == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,(ForAnyElementType *)&local_58,iVar3,&local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,FVar2.Data,(longlong)iVar3 * 2);
  }
  FVar2.Data = DelayedSend.Key.Data.AllocatorInstance.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  iVar3 = DelayedSend.Key.Data.ArrayNum;
  local_40 = iVar3;
  if (iVar3 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,&local_48,iVar3,&local_3c);
    memcpy(local_48.Data,FVar2.Data,(longlong)iVar3 * 2);
  }
  FVar2.Data = SentFrom.Key.Data.AllocatorInstance.Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  iVar3 = SentFrom.Key.Data.ArrayNum;
  local_30 = iVar3;
  if (iVar3 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,&local_38,iVar3,&local_2c);
    memcpy(local_38.Data,FVar2.Data,(longlong)iVar3 * 2);
  }
  FVar2.Data = MissingDataFrom.Key.Data.AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  iVar3 = MissingDataFrom.Key.Data.ArrayNum;
  local_20 = iVar3;
  if (iVar3 == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,&local_28,iVar3,&local_1c);
    memcpy(local_28.Data,FVar2.Data,(longlong)iVar3 * 2);
  }
  local_68._First = &local_58;
  local_68._Last = &local_18;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>(&ReservedKeys,&local_68);
  pFVar5 = &local_18;
  lVar4 = 4;
  do {
    pFVar1 = pFVar5[-1].Data.AllocatorInstance.Data;
    pFVar5 = pFVar5 + -1;
    lVar4 = lVar4 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar4 != 0);
  atexit(_dynamic_atexit_destructor_for__ReservedKeys__);
  return;
}

// `dynamic_initializer_for_'SentFrom'' @ 140f4d970

void __cdecl AnalyticsManagerProperties::_dynamic_initializer_for__SentFrom__(void)

{
  ::FString::FString(&SentFrom.Key,L"SentFrom");
  atexit(_dynamic_atexit_destructor_for__SentFrom__);
  return;
}

// `dynamic_initializer_for_'SessionId'' @ 140f4d9a0

void __cdecl AnalyticsManagerProperties::_dynamic_initializer_for__SessionId__(void)

{
  ::FString::FString(&SessionId.Key,L"SessionId");
  atexit(_dynamic_atexit_destructor_for__SessionId__);
  return;
}

// `dynamic_initializer_for_'ShutdownType'' @ 140f4d9d0

void __cdecl AnalyticsManagerProperties::_dynamic_initializer_for__ShutdownType__(void)

{
  ::FString::FString(&ShutdownType.Key,L"ShutdownType");
  atexit(_dynamic_atexit_destructor_for__ShutdownType__);
  return;
}

// `dynamic_initializer_for_'UnixSocketPath'' @ 140f4da00

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// `scalar_deleting_destructor' @ 14318c180

void * __thiscall
IAnalyticsProviderModule::_scalar_deleting_destructor_(IAnalyticsProviderModule *this,uint param_1)

{
  *this = (IAnalyticsProviderModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14318cb50

void * __thiscall FAnalyticsET::_scalar_deleting_destructor_(FAnalyticsET *this,uint param_1)

{
  *this = (FAnalyticsET)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14318d940

void * __thiscall
FAnalyticsProviderETEventCacheTest::_scalar_deleting_destructor_
          (FAnalyticsProviderETEventCacheTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14318f150

void * __thiscall
FAnalyticsSessionSummaryManagerAutomationTest::_scalar_deleting_destructor_
          (FAnalyticsSessionSummaryManagerAutomationTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// <lambda_invoker_cdecl> @ 14318f190

bool __cdecl
`AnalyticsSessionUtils::TryAcquiringOrphanGroupsOwnership'::__l11::<lambda_1>::
<lambda_invoker_cdecl>(uint *param_1,int *param_2)

{
  bool bVar1;
  
  if ((param_1 != (uint *)0x0) && (*param_1 != 0)) {
    bVar1 = FWindowsPlatformProcess::IsApplicationRunning(*param_1);
    if (bVar1) {
      return false;
    }
  }
  return true;
}

// Accumulate<int,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>,`EventCacheStatic::ComputeAttributeSize'::__l2::<lambda_1>_> @ 14318fac0

int __cdecl
Algo::
Accumulate<int,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>,_EventCacheStatic::ComputeAttributeSize_::__l2::<lambda_1>_>
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          <lambda_1> param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x30;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnalyticsEventAttribute_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (pFVar5 == pFVar6) break;
    iVar4 = *(int *)(pFVar5 + 8) + -1;
    if (*(int *)(pFVar5 + 8) == 0) {
      iVar4 = 0;
    }
    iVar3 = 2;
    if (*(int *)(pFVar5 + 0x2c) == 4) {
      iVar3 = 0;
    }
    iVar2 = *(int *)(pFVar5 + 0x18) + -1 + iVar4 + iVar3;
    if (*(int *)(pFVar5 + 0x18) == 0) {
      iVar2 = iVar4 + iVar3;
    }
    param_2 = param_2 + 4 + iVar2;
    pFVar5 = pFVar5 + 0x30;
  }
  return param_2;
}

// AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,int> @ 14318fb70

void __cdecl
ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,int>
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1,wchar_t **param_2,
          int *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  FAnalyticsEventAttribute *this;
  FString local_28;
  FString local_18;
  
  pFVar3 = ::FString::FString(&local_18,*param_2);
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_28.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this = (FAnalyticsEventAttribute *)(pFVar1 + (longlong)iVar2 * 0x30);
  local_28.Data.ArrayNum = (pFVar3->Data).ArrayNum;
  local_28.Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  pFVar3 = FAnalyticsEventAttribute::CheckName(this,&local_28);
  (this->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.ArrayNum = (pFVar3->Data).ArrayNum;
  (this->AttrName).Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&this->AttrValueString,L"%d");
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = JsonFragment;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned_int> @ 14318fc70

void __cdecl
ImplMakeAnalyticsEventAttributeArray::
AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned_int>
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1,wchar_t **param_2,
          uint *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  FAnalyticsEventAttribute *this;
  FString local_28;
  FString local_18;
  
  pFVar3 = ::FString::FString(&local_18,*param_2);
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_28.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this = (FAnalyticsEventAttribute *)(pFVar1 + (longlong)iVar2 * 0x30);
  local_28.Data.ArrayNum = (pFVar3->Data).ArrayNum;
  local_28.Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  pFVar3 = FAnalyticsEventAttribute::CheckName(this,&local_28);
  (this->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.ArrayNum = (pFVar3->Data).ArrayNum;
  (this->AttrName).Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&this->AttrValueString,L"%u");
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = JsonFragment;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,float> @ 14318fd70

void __cdecl
ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,float>
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1,wchar_t **param_2,
          float *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  FAnalyticsEventAttribute *this;
  FString local_28;
  FString local_18;
  
  pFVar3 = ::FString::FString(&local_18,*param_2);
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_28.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this = (FAnalyticsEventAttribute *)(pFVar1 + (longlong)iVar2 * 0x30);
  local_28.Data.ArrayNum = (pFVar3->Data).ArrayNum;
  local_28.Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  pFVar3 = FAnalyticsEventAttribute::CheckName(this,&local_28);
  (this->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.ArrayNum = (pFVar3->Data).ArrayNum;
  (this->AttrName).Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  AnalyticsConversionToString(&this->AttrValueString,*param_3);
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = JsonFragment;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,double> @ 14318fe70

void __cdecl
ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,double>
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1,wchar_t **param_2,
          double *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  FAnalyticsEventAttribute *this;
  FString local_28;
  FString local_18;
  
  pFVar3 = ::FString::FString(&local_18,*param_2);
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_28.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this = (FAnalyticsEventAttribute *)(pFVar1 + (longlong)iVar2 * 0x30);
  local_28.Data.ArrayNum = (pFVar3->Data).ArrayNum;
  local_28.Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  pFVar3 = FAnalyticsEventAttribute::CheckName(this,&local_28);
  (this->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.ArrayNum = (pFVar3->Data).ArrayNum;
  (this->AttrName).Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  AnalyticsConversionToString(&this->AttrValueString,*param_3);
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = JsonFragment;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,wchar_t_const_*> @ 14318ff70

void __cdecl
ImplMakeAnalyticsEventAttributeArray::
AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,wchar_t_const_*>
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1,wchar_t **param_2,
          wchar_t **param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  FAnalyticsEventAttribute *this;
  FString local_28;
  FString local_18;
  
  pFVar3 = ::FString::FString(&local_18,*param_2);
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_28.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this = (FAnalyticsEventAttribute *)(pFVar1 + (longlong)iVar2 * 0x30);
  local_28.Data.ArrayNum = (pFVar3->Data).ArrayNum;
  local_28.Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  pFVar3 = FAnalyticsEventAttribute::CheckName(this,&local_28);
  (this->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.ArrayNum = (pFVar3->Data).ArrayNum;
  (this->AttrName).Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  ::FString::FString(&this->AttrValueString,*param_3);
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = String;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,FJsonFragment> @ 143190070

void __cdecl
ImplMakeAnalyticsEventAttributeArray::
AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,FJsonFragment>
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1,wchar_t **param_2,
          FJsonFragment *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  FAnalyticsEventAttribute *this;
  FString local_28;
  FString local_18;
  
  pFVar3 = ::FString::FString(&local_18,*param_2);
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_28.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this = (FAnalyticsEventAttribute *)(pFVar1 + (longlong)iVar2 * 0x30);
  local_28.Data.ArrayNum = (pFVar3->Data).ArrayNum;
  local_28.Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  pFVar3 = FAnalyticsEventAttribute::CheckName(this,&local_28);
  (this->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pwVar4 = L"null";
  (this->AttrName).Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.ArrayNum = (pFVar3->Data).ArrayNum;
  (this->AttrName).Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  if (1 < (param_3->FragmentString).Data.ArrayNum) {
    pwVar4 = (wchar_t *)(param_3->FragmentString).Data.AllocatorInstance.Data;
  }
  ::FString::FString(&this->AttrValueString,pwVar4);
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = JsonFragment;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,FJsonNull> @ 143190180

void __cdecl
ImplMakeAnalyticsEventAttributeArray::
AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,FJsonNull>
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1,wchar_t **param_2,
          FJsonNull *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  FAnalyticsEventAttribute *this;
  FString local_28;
  FString local_18;
  
  pFVar3 = ::FString::FString(&local_18,*param_2);
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_28.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this = (FAnalyticsEventAttribute *)(pFVar1 + (longlong)iVar2 * 0x30);
  local_28.Data.ArrayNum = (pFVar3->Data).ArrayNum;
  local_28.Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  pFVar3 = FAnalyticsEventAttribute::CheckName(this,&local_28);
  (this->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.ArrayNum = (pFVar3->Data).ArrayNum;
  (this->AttrName).Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  ::FString::FString(&this->AttrValueString,L"null");
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = JsonFragment;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,FString> @ 143190270

void __cdecl
ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,FString>
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1,wchar_t **param_2,
          FString *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  FAnalyticsEventAttribute *this;
  FString local_28;
  FString local_18;
  
  pFVar3 = ::FString::FString(&local_18,*param_2);
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_28.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this = (FAnalyticsEventAttribute *)(pFVar1 + (longlong)iVar2 * 0x30);
  local_28.Data.ArrayNum = (pFVar3->Data).ArrayNum;
  local_28.Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  pFVar3 = FAnalyticsEventAttribute::CheckName(this,&local_28);
  (this->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.ArrayNum = (pFVar3->Data).ArrayNum;
  (this->AttrName).Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  ::FString::FString(&this->AttrValueString,param_3);
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = String;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,__int64> @ 143190370

void __cdecl
ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,__int64>
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1,wchar_t **param_2,
          long64 *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  FAnalyticsEventAttribute *this;
  FString local_28;
  FString local_18;
  
  pFVar3 = ::FString::FString(&local_18,*param_2);
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_28.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this = (FAnalyticsEventAttribute *)(pFVar1 + (longlong)iVar2 * 0x30);
  local_28.Data.ArrayNum = (pFVar3->Data).ArrayNum;
  local_28.Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  pFVar3 = FAnalyticsEventAttribute::CheckName(this,&local_28);
  (this->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.ArrayNum = (pFVar3->Data).ArrayNum;
  (this->AttrName).Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&this->AttrValueString,L"%lld");
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = JsonFragment;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned___int64> @ 143190470

void __cdecl
ImplMakeAnalyticsEventAttributeArray::
AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned___int64>
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1,wchar_t **param_2,
          ulong64 *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  FAnalyticsEventAttribute *this;
  FString local_28;
  FString local_18;
  
  pFVar3 = ::FString::FString(&local_18,*param_2);
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_28.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this = (FAnalyticsEventAttribute *)(pFVar1 + (longlong)iVar2 * 0x30);
  local_28.Data.ArrayNum = (pFVar3->Data).ArrayNum;
  local_28.Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  pFVar3 = FAnalyticsEventAttribute::CheckName(this,&local_28);
  (this->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.ArrayNum = (pFVar3->Data).ArrayNum;
  (this->AttrName).Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&this->AttrValueString,L"%llu");
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = JsonFragment;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,bool> @ 143190570

void __cdecl
ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,bool>
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1,wchar_t **param_2,
          bool *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  FAnalyticsEventAttribute *this;
  FString local_28;
  FString local_18;
  
  pFVar3 = ::FString::FString(&local_18,*param_2);
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_28.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this = (FAnalyticsEventAttribute *)(pFVar1 + (longlong)iVar2 * 0x30);
  local_28.Data.ArrayNum = (pFVar3->Data).ArrayNum;
  local_28.Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  pFVar3 = FAnalyticsEventAttribute::CheckName(this,&local_28);
  (this->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pwVar4 = L"true";
  (this->AttrName).Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.ArrayNum = (pFVar3->Data).ArrayNum;
  (this->AttrName).Data.ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  if (*param_3 == false) {
    pwVar4 = L"false";
  }
  ::FString::FString(&this->AttrValueString,pwVar4);
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = JsonFragment;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AppendEscapeJsonString<TStringBuilderWithBuffer<wchar_t,512>_> @ 143190680

TStringBuilderWithBuffer<wchar_t,512> * __cdecl
AppendEscapeJsonString<TStringBuilderWithBuffer<wchar_t,512>_>
          (TStringBuilderWithBuffer<wchar_t,512> *param_1,FString *param_2)

{
  ushort uVar1;
  void *pvVar2;
  undefined *puVar3;
  wchar_t *pwVar4;
  
  pvVar2 = (void *)param_1->_padding_;
  if ((ulonglong)param_1->_padding_ < (longlong)pvVar2 + 2U) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)param_1,1);
    pvVar2 = (void *)param_1->_padding_;
  }
  pvVar2 = FGenericPlatformString::Memcpy(pvVar2,L"\"",2);
  param_1->_padding_ = (longlong)pvVar2 + 2;
  if ((param_2->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  uVar1 = *pwVar4;
  do {
    if (uVar1 == 0) {
      if ((ulonglong)param_1->_padding_ < param_1->_padding_ + 2U) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)param_1,1);
      }
      pvVar2 = FGenericPlatformString::Memcpy((void *)param_1->_padding_,L"\"",2);
      param_1->_padding_ = (longlong)pvVar2 + 2;
      return param_1;
    }
    switch(uVar1) {
    case 8:
      if ((ulonglong)param_1->_padding_ < param_1->_padding_ + 4U) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)param_1,2);
      }
      puVar3 = &u__b;
      break;
    case 9:
      if ((ulonglong)param_1->_padding_ < param_1->_padding_ + 4U) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)param_1,2);
      }
      puVar3 = &u__t;
      break;
    case 10:
      if ((ulonglong)param_1->_padding_ < param_1->_padding_ + 4U) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)param_1,2);
      }
      puVar3 = &u__n;
      break;
    default:
      if (uVar1 < 0x20) {
        TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)param_1,L"\\u%04x");
      }
      else {
        if ((ulonglong)param_1->_padding_ < param_1->_padding_ + 2U) {
          TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)param_1,1);
        }
        *(ushort *)param_1->_padding_ = uVar1;
        param_1->_padding_ = param_1->_padding_ + 2;
      }
      goto LAB_143190887;
    case 0xc:
      if ((ulonglong)param_1->_padding_ < param_1->_padding_ + 4U) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)param_1,2);
      }
      puVar3 = &u__f;
      break;
    case 0xd:
      if ((ulonglong)param_1->_padding_ < param_1->_padding_ + 4U) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)param_1,2);
      }
      puVar3 = &u__r;
      break;
    case 0x22:
      if ((ulonglong)param_1->_padding_ < param_1->_padding_ + 4U) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)param_1,2);
      }
      puVar3 = &u___;
      break;
    case 0x5c:
      if ((ulonglong)param_1->_padding_ < param_1->_padding_ + 4U) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)param_1,2);
      }
      puVar3 = &u___;
    }
    pvVar2 = FGenericPlatformString::Memcpy((void *)param_1->_padding_,puVar3,4);
    param_1->_padding_ = (longlong)pvVar2 + 4;
LAB_143190887:
    uVar1 = *(ushort *)((longlong)pwVar4 + 2);
    pwVar4 = (wchar_t *)((longlong)pwVar4 + 2);
  } while( true );
}

// DestructItems<FAnalyticsProviderETEventCache::FAnalyticsEventEntry,int> @ 143190bd0

void __cdecl
DestructItems<FAnalyticsProviderETEventCache::FAnalyticsEventEntry,int>
          (FAnalyticsEventEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->EventName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FAnalyticsSessionSummaryManager::FPropertyFileInfo,int> @ 143190c10

void __cdecl
DestructItems<FAnalyticsSessionSummaryManager::FPropertyFileInfo,int>
          (FPropertyFileInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->ProcessName;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int> @ 143190c60

void __cdecl
DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TFunction<void___cdecl(FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&,bool)>,int> @ 143190ca0

void __cdecl
DestructItems<TFunction<void___cdecl(FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&,bool)>,int>
          (TFunction<void___cdecl(FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&,bool)>
           *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x10;
    do {
      if (plVar2[-2] != 0) {
        plVar1 = (longlong *)plVar2[3];
        if ((longlong *)plVar2[3] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TWeakPtr<IAnalyticsPropertyStore,1>,int> @ 143190cf0

void __cdecl
DestructItems<TWeakPtr<IAnalyticsPropertyStore,1>,int>
          (TWeakPtr<IAnalyticsPropertyStore,1> *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &param_1->WeakReferenceCount;
    do {
      pTVar3 = pFVar4->ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
      pFVar4 = pFVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// HeapSortInternal<FAnalyticsEventAttribute,int,FIdentityFunctor,TDereferenceWrapper<FAnalyticsEventAttribute,`FAnalyticsSessionSummarySender::SendSessionSummary'::__l2::<lambda_1>_>_> @ 143191850

void __cdecl
AlgoImpl::
HeapSortInternal<FAnalyticsEventAttribute,int,FIdentityFunctor,TDereferenceWrapper<FAnalyticsEventAttribute,_FAnalyticsSessionSummarySender::SendSessionSummary_::__l2::<lambda_1>_>_>
          (FAnalyticsEventAttribute *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FAnalyticsEventAttribute,_public:_virtual_bool___cdecl_FAnalyticsSessionSummarySender::SendSessionSummary(FString_const_&,FString_const_&,FString_const_&,FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&)_::_2_::<lambda_1>_>
          param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  undefined3 uVar8;
  AttrTypeEnum AVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined3 uVar13;
  AttrTypeEnum AVar14;
  int iVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  int iVar21;
  FAnalyticsEventAttribute *pFVar22;
  FAnalyticsEventAttribute *pFVar23;
  longlong lVar24;
  int iVar25;
  FAnalyticsEventAttribute *pFVar26;
  <lambda_1> *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar16) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<FAnalyticsEventAttribute,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FAnalyticsEventAttribute,_FAnalyticsSessionSummarySender::SendSessionSummary_::__l2::<lambda_1>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<FAnalyticsEventAttribute,_public:_virtual_bool___cdecl_FAnalyticsSessionSummarySender::SendSessionSummary(FString_const_&,FString_const_&,FString_const_&,FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&)_::_2_::<lambda_1>_>
              *)&local_res20);
  iVar25 = param_2 + -1;
  lVar24 = (longlong)iVar25;
  if (0 < iVar25) {
    pFVar26 = param_1 + lVar24;
    do {
      iVar18 = (pFVar26->AttrName).Data.ArrayNum;
      iVar21 = (pFVar26->AttrName).Data.ArrayMax;
      pFVar5 = (param_1->AttrName).Data.AllocatorInstance.Data;
      iVar4 = (param_1->AttrName).Data.ArrayNum;
      iVar17 = (param_1->AttrName).Data.ArrayMax;
      pFVar6 = (param_1->AttrValueString).Data.AllocatorInstance.Data;
      iVar10 = (param_1->AttrValueString).Data.ArrayNum;
      iVar11 = (param_1->AttrValueString).Data.ArrayMax;
      dVar7 = param_1->AttrValueNumber;
      bVar12 = param_1->AttrValueBool;
      uVar13 = *(undefined3 *)&param_1->field_0x29;
      AVar14 = param_1->AttrType;
      (param_1->AttrName).Data.AllocatorInstance.Data =
           (pFVar26->AttrName).Data.AllocatorInstance.Data;
      (param_1->AttrName).Data.ArrayNum = iVar18;
      (param_1->AttrName).Data.ArrayMax = iVar21;
      iVar18 = (pFVar26->AttrValueString).Data.ArrayNum;
      iVar21 = (pFVar26->AttrValueString).Data.ArrayMax;
      (param_1->AttrValueString).Data.AllocatorInstance.Data =
           (pFVar26->AttrValueString).Data.AllocatorInstance.Data;
      (param_1->AttrValueString).Data.ArrayNum = iVar18;
      (param_1->AttrValueString).Data.ArrayMax = iVar21;
      bVar16 = pFVar26->AttrValueBool;
      uVar8 = *(undefined3 *)&pFVar26->field_0x29;
      AVar9 = pFVar26->AttrType;
      param_1->AttrValueNumber = pFVar26->AttrValueNumber;
      param_1->AttrValueBool = bVar16;
      *(undefined3 *)&param_1->field_0x29 = uVar8;
      param_1->AttrType = AVar9;
      (pFVar26->AttrName).Data.AllocatorInstance.Data = pFVar5;
      (pFVar26->AttrName).Data.ArrayNum = iVar4;
      (pFVar26->AttrName).Data.ArrayMax = iVar17;
      (pFVar26->AttrValueString).Data.AllocatorInstance.Data = pFVar6;
      (pFVar26->AttrValueString).Data.ArrayNum = iVar10;
      (pFVar26->AttrValueString).Data.ArrayMax = iVar11;
      pFVar26->AttrValueNumber = dVar7;
      pFVar26->AttrValueBool = bVar12;
      *(undefined3 *)&pFVar26->field_0x29 = uVar13;
      pFVar26->AttrType = AVar14;
      iVar18 = 0;
      if (1 < iVar25) {
        do {
          iVar4 = iVar18 * 2;
          iVar21 = iVar4 + 1;
          if (iVar4 + 2 < iVar25) {
            lVar1 = (longlong)iVar4 + 1;
            lVar2 = (longlong)iVar4 + 2;
            if (param_1[lVar1].AttrName.Data.ArrayNum == 0) {
              pwVar20 = L"";
            }
            else {
              pwVar20 = (wchar_t *)param_1[lVar1].AttrName.Data.AllocatorInstance.Data;
            }
            if (param_1[lVar2].AttrName.Data.ArrayNum == 0) {
              pwVar19 = L"";
            }
            else {
              pwVar19 = (wchar_t *)param_1[lVar2].AttrName.Data.AllocatorInstance.Data;
            }
            iVar17 = FGenericPlatformStricmp::Stricmp(pwVar19,pwVar20);
            if (iVar17 < 0) {
              iVar21 = iVar4;
            }
            iVar21 = iVar21 + 1;
          }
          pFVar23 = param_1 + iVar18;
          pFVar22 = param_1 + iVar21;
          if ((pFVar22->AttrName).Data.ArrayNum == 0) {
            pwVar20 = L"";
          }
          else {
            pwVar20 = (wchar_t *)(pFVar22->AttrName).Data.AllocatorInstance.Data;
          }
          if ((pFVar23->AttrName).Data.ArrayNum == 0) {
            pwVar19 = L"";
          }
          else {
            pwVar19 = (wchar_t *)(pFVar23->AttrName).Data.AllocatorInstance.Data;
          }
          iVar18 = FGenericPlatformStricmp::Stricmp(pwVar19,pwVar20);
          if (-1 < iVar18) break;
          iVar18 = (pFVar22->AttrName).Data.ArrayNum;
          iVar4 = (pFVar22->AttrName).Data.ArrayMax;
          pFVar5 = (pFVar23->AttrName).Data.AllocatorInstance.Data;
          iVar17 = (pFVar23->AttrName).Data.ArrayNum;
          iVar10 = (pFVar23->AttrName).Data.ArrayMax;
          pFVar6 = (pFVar23->AttrValueString).Data.AllocatorInstance.Data;
          iVar11 = (pFVar23->AttrValueString).Data.ArrayNum;
          iVar15 = (pFVar23->AttrValueString).Data.ArrayMax;
          dVar7 = pFVar23->AttrValueNumber;
          bVar12 = pFVar23->AttrValueBool;
          uVar13 = *(undefined3 *)&pFVar23->field_0x29;
          AVar14 = pFVar23->AttrType;
          (pFVar23->AttrName).Data.AllocatorInstance.Data =
               (pFVar22->AttrName).Data.AllocatorInstance.Data;
          (pFVar23->AttrName).Data.ArrayNum = iVar18;
          (pFVar23->AttrName).Data.ArrayMax = iVar4;
          iVar18 = (pFVar22->AttrValueString).Data.ArrayNum;
          iVar4 = (pFVar22->AttrValueString).Data.ArrayMax;
          (pFVar23->AttrValueString).Data.AllocatorInstance.Data =
               (pFVar22->AttrValueString).Data.AllocatorInstance.Data;
          (pFVar23->AttrValueString).Data.ArrayNum = iVar18;
          (pFVar23->AttrValueString).Data.ArrayMax = iVar4;
          bVar16 = pFVar22->AttrValueBool;
          uVar8 = *(undefined3 *)&pFVar22->field_0x29;
          AVar9 = pFVar22->AttrType;
          pFVar23->AttrValueNumber = pFVar22->AttrValueNumber;
          pFVar23->AttrValueBool = bVar16;
          *(undefined3 *)&pFVar23->field_0x29 = uVar8;
          pFVar23->AttrType = AVar9;
          (pFVar22->AttrName).Data.AllocatorInstance.Data = pFVar5;
          (pFVar22->AttrName).Data.ArrayNum = iVar17;
          (pFVar22->AttrName).Data.ArrayMax = iVar10;
          (pFVar22->AttrValueString).Data.AllocatorInstance.Data = pFVar6;
          (pFVar22->AttrValueString).Data.ArrayNum = iVar11;
          (pFVar22->AttrValueString).Data.ArrayMax = iVar15;
          pFVar22->AttrValueNumber = dVar7;
          pFVar22->AttrValueBool = bVar12;
          *(undefined3 *)&pFVar22->field_0x29 = uVar13;
          pFVar22->AttrType = AVar14;
          iVar18 = iVar21;
        } while (iVar21 * 2 + 1 < iVar25);
      }
      iVar25 = iVar25 + -1;
      lVar24 = lVar24 + -1;
      pFVar26 = pFVar26 + -1;
    } while (0 < lVar24);
  }
  return;
}

// HeapifyInternal<FAnalyticsEventAttribute,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FAnalyticsEventAttribute,`FAnalyticsSessionSummarySender::SendSessionSummary'::__l2::<lambda_1>_>_>_> @ 143191a40

void __cdecl
AlgoImpl::
HeapifyInternal<FAnalyticsEventAttribute,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FAnalyticsEventAttribute,_FAnalyticsSessionSummarySender::SendSessionSummary_::__l2::<lambda_1>_>_>_>
          (FAnalyticsEventAttribute *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<FAnalyticsEventAttribute,_public:_virtual_bool___cdecl_FAnalyticsSessionSummarySender::SendSessionSummary(FString_const_&,FString_const_&,FString_const_&,FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&)_::_2_::<lambda_1>_>_>
          param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  undefined3 uVar8;
  AttrTypeEnum AVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined3 uVar15;
  AttrTypeEnum AVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  wchar_t *pwVar21;
  wchar_t *pwVar22;
  int iVar23;
  FAnalyticsEventAttribute *pFVar24;
  FAnalyticsEventAttribute *pFVar25;
  int iVar26;
  
  if (param_2 < 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar17) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar18 = (param_2 + -2) / 2;
  iVar20 = iVar18 * 2 + 1;
  iVar4 = iVar20;
  iVar26 = iVar18;
  do {
    while (param_2 <= iVar20) {
LAB_143191ba7:
      if (iVar26 == 0) {
        return;
      }
      iVar18 = iVar26 + -1;
      iVar20 = iVar4 + -2;
      iVar4 = iVar20;
      iVar26 = iVar18;
    }
    iVar20 = iVar18 * 2;
    iVar23 = iVar20 + 1;
    if (iVar20 + 2 < param_2) {
      lVar1 = (longlong)iVar20 + 1;
      lVar2 = (longlong)iVar20 + 2;
      if (param_1[lVar1].AttrName.Data.ArrayNum == 0) {
        pwVar22 = L"";
      }
      else {
        pwVar22 = (wchar_t *)param_1[lVar1].AttrName.Data.AllocatorInstance.Data;
      }
      if (param_1[lVar2].AttrName.Data.ArrayNum == 0) {
        pwVar21 = L"";
      }
      else {
        pwVar21 = (wchar_t *)param_1[lVar2].AttrName.Data.AllocatorInstance.Data;
      }
      iVar19 = FGenericPlatformStricmp::Stricmp(pwVar21,pwVar22);
      if (iVar19 < 0) {
        iVar23 = iVar20;
      }
      iVar23 = iVar23 + 1;
    }
    pFVar25 = param_1 + iVar18;
    pFVar24 = param_1 + iVar23;
    if ((pFVar24->AttrName).Data.ArrayNum == 0) {
      pwVar22 = L"";
    }
    else {
      pwVar22 = (wchar_t *)(pFVar24->AttrName).Data.AllocatorInstance.Data;
    }
    if ((pFVar25->AttrName).Data.ArrayNum == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = (wchar_t *)(pFVar25->AttrName).Data.AllocatorInstance.Data;
    }
    iVar20 = FGenericPlatformStricmp::Stricmp(pwVar21,pwVar22);
    if (-1 < iVar20) goto LAB_143191ba7;
    iVar18 = (pFVar24->AttrName).Data.ArrayNum;
    iVar19 = (pFVar24->AttrName).Data.ArrayMax;
    iVar20 = iVar23 * 2 + 1;
    pFVar5 = (pFVar25->AttrName).Data.AllocatorInstance.Data;
    iVar10 = (pFVar25->AttrName).Data.ArrayNum;
    iVar11 = (pFVar25->AttrName).Data.ArrayMax;
    pFVar6 = (pFVar25->AttrValueString).Data.AllocatorInstance.Data;
    iVar12 = (pFVar25->AttrValueString).Data.ArrayNum;
    iVar13 = (pFVar25->AttrValueString).Data.ArrayMax;
    dVar7 = pFVar25->AttrValueNumber;
    bVar14 = pFVar25->AttrValueBool;
    uVar15 = *(undefined3 *)&pFVar25->field_0x29;
    AVar16 = pFVar25->AttrType;
    (pFVar25->AttrName).Data.AllocatorInstance.Data =
         (pFVar24->AttrName).Data.AllocatorInstance.Data;
    (pFVar25->AttrName).Data.ArrayNum = iVar18;
    (pFVar25->AttrName).Data.ArrayMax = iVar19;
    iVar18 = (pFVar24->AttrValueString).Data.ArrayNum;
    iVar19 = (pFVar24->AttrValueString).Data.ArrayMax;
    (pFVar25->AttrValueString).Data.AllocatorInstance.Data =
         (pFVar24->AttrValueString).Data.AllocatorInstance.Data;
    (pFVar25->AttrValueString).Data.ArrayNum = iVar18;
    (pFVar25->AttrValueString).Data.ArrayMax = iVar19;
    bVar17 = pFVar24->AttrValueBool;
    uVar8 = *(undefined3 *)&pFVar24->field_0x29;
    AVar9 = pFVar24->AttrType;
    pFVar25->AttrValueNumber = pFVar24->AttrValueNumber;
    pFVar25->AttrValueBool = bVar17;
    *(undefined3 *)&pFVar25->field_0x29 = uVar8;
    pFVar25->AttrType = AVar9;
    (pFVar24->AttrName).Data.AllocatorInstance.Data = pFVar5;
    (pFVar24->AttrName).Data.ArrayNum = iVar10;
    (pFVar24->AttrName).Data.ArrayMax = iVar11;
    (pFVar24->AttrValueString).Data.AllocatorInstance.Data = pFVar6;
    (pFVar24->AttrValueString).Data.ArrayNum = iVar12;
    (pFVar24->AttrValueString).Data.ArrayMax = iVar13;
    pFVar24->AttrValueNumber = dVar7;
    pFVar24->AttrValueBool = bVar14;
    *(undefined3 *)&pFVar24->field_0x29 = uVar15;
    pFVar24->AttrType = AVar16;
    iVar18 = iVar23;
  } while( true );
}

// IntroSortInternal<FAnalyticsEventAttribute,int,FIdentityFunctor,TDereferenceWrapper<FAnalyticsEventAttribute,`FAnalyticsSessionSummarySender::SendSessionSummary'::__l2::<lambda_1>_>_> @ 143191be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FAnalyticsEventAttribute,int,FIdentityFunctor,TDereferenceWrapper<FAnalyticsEventAttribute,_FAnalyticsSessionSummarySender::SendSessionSummary_::__l2::<lambda_1>_>_>
          (FAnalyticsEventAttribute *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FAnalyticsEventAttribute,_public:_virtual_bool___cdecl_FAnalyticsSessionSummarySender::SendSessionSummary(FString_const_&,FString_const_&,FString_const_&,FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&)_::_2_::<lambda_1>_>
          param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined3 uVar10;
  AttrTypeEnum AVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  undefined3 uVar17;
  AttrTypeEnum AVar18;
  wchar_t *pwVar19;
  longlong lVar20;
  int iVar21;
  wchar_t *pwVar22;
  FAnalyticsEventAttribute *pFVar23;
  FAnalyticsEventAttribute *pFVar24;
  int iVar25;
  FAnalyticsEventAttribute **ppFVar26;
  FAnalyticsEventAttribute *pFVar27;
  FAnalyticsEventAttribute *pFVar28;
  FAnalyticsEventAttribute *pFVar29;
  FAnalyticsEventAttribute *pFVar30;
  float fVar31;
  undefined1 auStack_388 [48];
  FAnalyticsEventAttribute *local_358;
  FAnalyticsEventAttribute *local_348;
  FAnalyticsEventAttribute *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar31 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar31;
    memset(local_330,0,0x2e8);
    ppFVar26 = &local_348;
    do {
      pFVar23 = ppFVar26[1];
      pFVar30 = *ppFVar26;
      local_358 = ppFVar26[2];
      iVar21 = (int)(((longlong)pFVar23 - (longlong)pFVar30) / 0x30) + 1;
      pFVar29 = pFVar30;
      iVar25 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_143191cc0:
        if (8 < iVar21) {
          iVar7 = (pFVar29->AttrName).Data.ArrayNum;
          iVar8 = (pFVar29->AttrName).Data.ArrayMax;
          pFVar27 = pFVar23 + 1;
          pFVar30 = pFVar29 + iVar21 / 2;
          pFVar1 = (pFVar30->AttrName).Data.AllocatorInstance.Data;
          iVar12 = (pFVar30->AttrName).Data.ArrayNum;
          iVar13 = (pFVar30->AttrName).Data.ArrayMax;
          pFVar2 = (pFVar30->AttrValueString).Data.AllocatorInstance.Data;
          iVar14 = (pFVar30->AttrValueString).Data.ArrayNum;
          iVar15 = (pFVar30->AttrValueString).Data.ArrayMax;
          dVar3 = pFVar30->AttrValueNumber;
          bVar16 = pFVar30->AttrValueBool;
          uVar17 = *(undefined3 *)&pFVar30->field_0x29;
          AVar18 = pFVar30->AttrType;
          (pFVar30->AttrName).Data.AllocatorInstance.Data =
               (pFVar29->AttrName).Data.AllocatorInstance.Data;
          (pFVar30->AttrName).Data.ArrayNum = iVar7;
          (pFVar30->AttrName).Data.ArrayMax = iVar8;
          iVar21 = (pFVar29->AttrValueString).Data.ArrayNum;
          iVar7 = (pFVar29->AttrValueString).Data.ArrayMax;
          (pFVar30->AttrValueString).Data.AllocatorInstance.Data =
               (pFVar29->AttrValueString).Data.AllocatorInstance.Data;
          (pFVar30->AttrValueString).Data.ArrayNum = iVar21;
          (pFVar30->AttrValueString).Data.ArrayMax = iVar7;
          bVar9 = pFVar29->AttrValueBool;
          uVar10 = *(undefined3 *)&pFVar29->field_0x29;
          AVar11 = pFVar29->AttrType;
          pFVar30->AttrValueNumber = pFVar29->AttrValueNumber;
          pFVar30->AttrValueBool = bVar9;
          *(undefined3 *)&pFVar30->field_0x29 = uVar10;
          pFVar30->AttrType = AVar11;
          (pFVar29->AttrName).Data.AllocatorInstance.Data = pFVar1;
          (pFVar29->AttrName).Data.ArrayNum = iVar12;
          (pFVar29->AttrName).Data.ArrayMax = iVar13;
          (pFVar29->AttrValueString).Data.AllocatorInstance.Data = pFVar2;
          (pFVar29->AttrValueString).Data.ArrayNum = iVar14;
          (pFVar29->AttrValueString).Data.ArrayMax = iVar15;
          pFVar29->AttrValueNumber = dVar3;
          pFVar29->AttrValueBool = bVar16;
          *(undefined3 *)&pFVar29->field_0x29 = uVar17;
          pFVar29->AttrType = AVar18;
          pFVar30 = pFVar29;
LAB_143191d17:
          pFVar24 = pFVar30;
          pFVar30 = pFVar24 + 1;
          if (pFVar30 <= pFVar23) goto code_r0x000143191d20;
          goto LAB_143191d51;
        }
        for (; pFVar30 = pFVar29, pFVar27 = pFVar29, pFVar29 < pFVar23; pFVar23 = pFVar23 + -1) {
          while (pFVar24 = pFVar30, pFVar30 = pFVar27 + 1, pFVar30 <= pFVar23) {
            if (pFVar27[1].AttrName.Data.ArrayNum == 0) {
              pwVar22 = L"";
            }
            else {
              pwVar22 = (wchar_t *)(pFVar30->AttrName).Data.AllocatorInstance.Data;
            }
            if ((pFVar24->AttrName).Data.ArrayNum == 0) {
              pwVar19 = L"";
            }
            else {
              pwVar19 = (wchar_t *)(pFVar24->AttrName).Data.AllocatorInstance.Data;
            }
            iVar25 = FGenericPlatformStricmp::Stricmp(pwVar19,pwVar22);
            pFVar27 = pFVar30;
            if (-1 < iVar25) {
              pFVar30 = pFVar24;
            }
          }
          pFVar1 = (pFVar24->AttrName).Data.AllocatorInstance.Data;
          iVar7 = (pFVar24->AttrName).Data.ArrayNum;
          iVar8 = (pFVar24->AttrName).Data.ArrayMax;
          pFVar2 = (pFVar24->AttrValueString).Data.AllocatorInstance.Data;
          iVar12 = (pFVar24->AttrValueString).Data.ArrayNum;
          iVar13 = (pFVar24->AttrValueString).Data.ArrayMax;
          dVar3 = pFVar24->AttrValueNumber;
          bVar16 = pFVar24->AttrValueBool;
          uVar17 = *(undefined3 *)&pFVar24->field_0x29;
          AVar18 = pFVar24->AttrType;
          iVar25 = (pFVar23->AttrName).Data.ArrayNum;
          iVar21 = (pFVar23->AttrName).Data.ArrayMax;
          (pFVar24->AttrName).Data.AllocatorInstance.Data =
               (pFVar23->AttrName).Data.AllocatorInstance.Data;
          (pFVar24->AttrName).Data.ArrayNum = iVar25;
          (pFVar24->AttrName).Data.ArrayMax = iVar21;
          iVar25 = (pFVar23->AttrValueString).Data.ArrayNum;
          iVar21 = (pFVar23->AttrValueString).Data.ArrayMax;
          (pFVar24->AttrValueString).Data.AllocatorInstance.Data =
               (pFVar23->AttrValueString).Data.AllocatorInstance.Data;
          (pFVar24->AttrValueString).Data.ArrayNum = iVar25;
          (pFVar24->AttrValueString).Data.ArrayMax = iVar21;
          bVar9 = pFVar23->AttrValueBool;
          uVar10 = *(undefined3 *)&pFVar23->field_0x29;
          AVar11 = pFVar23->AttrType;
          pFVar24->AttrValueNumber = pFVar23->AttrValueNumber;
          pFVar24->AttrValueBool = bVar9;
          *(undefined3 *)&pFVar24->field_0x29 = uVar10;
          pFVar24->AttrType = AVar11;
          (pFVar23->AttrName).Data.AllocatorInstance.Data = pFVar1;
          (pFVar23->AttrName).Data.ArrayNum = iVar7;
          (pFVar23->AttrName).Data.ArrayMax = iVar8;
          (pFVar23->AttrValueString).Data.AllocatorInstance.Data = pFVar2;
          (pFVar23->AttrValueString).Data.ArrayNum = iVar12;
          (pFVar23->AttrValueString).Data.ArrayMax = iVar13;
          pFVar23->AttrValueNumber = dVar3;
          pFVar23->AttrValueBool = bVar16;
          *(undefined3 *)&pFVar23->field_0x29 = uVar17;
          pFVar23->AttrType = AVar18;
        }
        goto LAB_143191ed0;
      }
LAB_143191eb7:
      HeapSortInternal<FAnalyticsEventAttribute,int,FIdentityFunctor,TDereferenceWrapper<FAnalyticsEventAttribute,_FAnalyticsSessionSummarySender::SendSessionSummary_::__l2::<lambda_1>_>_>
                (pFVar30,iVar21,param_3,param_4);
LAB_143191ed0:
      ppFVar26 = ppFVar26 + -3;
    } while (&local_348 <= ppFVar26);
  }
  return;
code_r0x000143191d20:
  if (pFVar24[1].AttrName.Data.ArrayNum == 0) {
    pwVar22 = L"";
  }
  else {
    pwVar22 = (wchar_t *)(pFVar30->AttrName).Data.AllocatorInstance.Data;
  }
  if ((pFVar29->AttrName).Data.ArrayNum == 0) {
    pwVar19 = L"";
  }
  else {
    pwVar19 = (wchar_t *)(pFVar29->AttrName).Data.AllocatorInstance.Data;
  }
  iVar21 = FGenericPlatformStricmp::Stricmp(pwVar19,pwVar22);
  if (-1 < iVar21) goto LAB_143191d17;
LAB_143191d51:
  do {
    pFVar28 = pFVar27;
    pFVar27 = pFVar28 + -1;
    if (pFVar27 <= pFVar29) break;
    if ((pFVar29->AttrName).Data.ArrayNum == 0) {
      pwVar22 = L"";
    }
    else {
      pwVar22 = (wchar_t *)(pFVar29->AttrName).Data.AllocatorInstance.Data;
    }
    if (pFVar28[-1].AttrName.Data.ArrayNum == 0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = (wchar_t *)(pFVar27->AttrName).Data.AllocatorInstance.Data;
    }
    iVar21 = FGenericPlatformStricmp::Stricmp(pwVar19,pwVar22);
  } while (-1 < iVar21);
  pFVar1 = (pFVar27->AttrName).Data.AllocatorInstance.Data;
  uVar4 = pFVar28[-1].AttrName.Data.ArrayNum;
  uVar5 = pFVar28[-1].AttrName.Data.ArrayMax;
  if (pFVar30 <= pFVar27) {
    pFVar2 = (pFVar30->AttrName).Data.AllocatorInstance.Data;
    iVar8 = pFVar24[1].AttrName.Data.ArrayNum;
    iVar12 = pFVar24[1].AttrName.Data.ArrayMax;
    pFVar6 = pFVar24[1].AttrValueString.Data.AllocatorInstance.Data;
    iVar13 = pFVar24[1].AttrValueString.Data.ArrayNum;
    iVar14 = pFVar24[1].AttrValueString.Data.ArrayMax;
    dVar3 = pFVar24[1].AttrValueNumber;
    bVar16 = pFVar24[1].AttrValueBool;
    uVar17 = *(undefined3 *)&pFVar24[1].field_0x29;
    AVar18 = pFVar24[1].AttrType;
    (pFVar30->AttrName).Data.AllocatorInstance.Data = pFVar1;
    pFVar24[1].AttrName.Data.ArrayNum = uVar4;
    pFVar24[1].AttrName.Data.ArrayMax = uVar5;
    iVar21 = pFVar28[-1].AttrValueString.Data.ArrayNum;
    iVar7 = pFVar28[-1].AttrValueString.Data.ArrayMax;
    pFVar24[1].AttrValueString.Data.AllocatorInstance.Data =
         pFVar28[-1].AttrValueString.Data.AllocatorInstance.Data;
    pFVar24[1].AttrValueString.Data.ArrayNum = iVar21;
    pFVar24[1].AttrValueString.Data.ArrayMax = iVar7;
    bVar9 = pFVar28[-1].AttrValueBool;
    uVar10 = *(undefined3 *)&pFVar28[-1].field_0x29;
    AVar11 = pFVar28[-1].AttrType;
    pFVar24[1].AttrValueNumber = pFVar28[-1].AttrValueNumber;
    pFVar24[1].AttrValueBool = bVar9;
    *(undefined3 *)&pFVar24[1].field_0x29 = uVar10;
    pFVar24[1].AttrType = AVar11;
    (pFVar27->AttrName).Data.AllocatorInstance.Data = pFVar2;
    pFVar28[-1].AttrName.Data.ArrayNum = iVar8;
    pFVar28[-1].AttrName.Data.ArrayMax = iVar12;
    pFVar28[-1].AttrValueString.Data.AllocatorInstance.Data = pFVar6;
    pFVar28[-1].AttrValueString.Data.ArrayNum = iVar13;
    pFVar28[-1].AttrValueString.Data.ArrayMax = iVar14;
    pFVar28[-1].AttrValueNumber = dVar3;
    pFVar28[-1].AttrValueBool = bVar16;
    *(undefined3 *)&pFVar28[-1].field_0x29 = uVar17;
    pFVar28[-1].AttrType = AVar18;
    goto LAB_143191d17;
  }
  pFVar2 = (pFVar29->AttrName).Data.AllocatorInstance.Data;
  iVar8 = (pFVar29->AttrName).Data.ArrayNum;
  iVar12 = (pFVar29->AttrName).Data.ArrayMax;
  pFVar6 = (pFVar29->AttrValueString).Data.AllocatorInstance.Data;
  iVar13 = (pFVar29->AttrValueString).Data.ArrayNum;
  iVar14 = (pFVar29->AttrValueString).Data.ArrayMax;
  dVar3 = pFVar29->AttrValueNumber;
  bVar16 = pFVar29->AttrValueBool;
  uVar17 = *(undefined3 *)&pFVar29->field_0x29;
  AVar18 = pFVar29->AttrType;
  lVar20 = (longlong)pFVar27 + (-0x30 - (longlong)pFVar29);
  iVar25 = iVar25 + -1;
  lVar20 = lVar20 / 6 + (lVar20 >> 0x3f);
  (pFVar29->AttrName).Data.AllocatorInstance.Data = pFVar1;
  (pFVar29->AttrName).Data.ArrayNum = uVar4;
  (pFVar29->AttrName).Data.ArrayMax = uVar5;
  iVar21 = pFVar28[-1].AttrValueString.Data.ArrayNum;
  iVar7 = pFVar28[-1].AttrValueString.Data.ArrayMax;
  (pFVar29->AttrValueString).Data.AllocatorInstance.Data =
       pFVar28[-1].AttrValueString.Data.AllocatorInstance.Data;
  (pFVar29->AttrValueString).Data.ArrayNum = iVar21;
  (pFVar29->AttrValueString).Data.ArrayMax = iVar7;
  bVar9 = pFVar28[-1].AttrValueBool;
  uVar10 = *(undefined3 *)&pFVar28[-1].field_0x29;
  AVar11 = pFVar28[-1].AttrType;
  pFVar29->AttrValueNumber = pFVar28[-1].AttrValueNumber;
  pFVar29->AttrValueBool = bVar9;
  *(undefined3 *)&pFVar29->field_0x29 = uVar10;
  pFVar29->AttrType = AVar11;
  (pFVar27->AttrName).Data.AllocatorInstance.Data = pFVar2;
  pFVar28[-1].AttrName.Data.ArrayNum = iVar8;
  pFVar28[-1].AttrName.Data.ArrayMax = iVar12;
  pFVar28[-1].AttrValueString.Data.AllocatorInstance.Data = pFVar6;
  pFVar28[-1].AttrValueString.Data.ArrayNum = iVar13;
  pFVar28[-1].AttrValueString.Data.ArrayMax = iVar14;
  pFVar28[-1].AttrValueNumber = dVar3;
  pFVar28[-1].AttrValueBool = bVar16;
  *(undefined3 *)&pFVar28[-1].field_0x29 = uVar17;
  pFVar28[-1].AttrType = AVar18;
  if ((lVar20 >> 3) - (lVar20 >> 0x3f) < ((longlong)pFVar23 - (longlong)pFVar30) / 0x30) {
    if (pFVar30 < pFVar23) {
      *ppFVar26 = pFVar30;
      ppFVar26[1] = pFVar23;
      *(int *)(ppFVar26 + 2) = iVar25;
      ppFVar26 = ppFVar26 + 3;
    }
    if (pFVar27 <= pFVar29 + 1) goto LAB_143191ed0;
    pFVar23 = pFVar28 + -2;
    pFVar30 = pFVar29;
  }
  else {
    if (pFVar29 + 1 < pFVar27) {
      *ppFVar26 = pFVar29;
      ppFVar26[1] = pFVar28 + -2;
      *(int *)(ppFVar26 + 2) = iVar25;
      ppFVar26 = ppFVar26 + 3;
    }
    if (pFVar23 <= pFVar30) goto LAB_143191ed0;
  }
  iVar21 = (int)(((longlong)pFVar23 - (longlong)pFVar30) / 0x30) + 1;
  pFVar29 = pFVar30;
  if (iVar25 == 0) goto LAB_143191eb7;
  goto LAB_143191cc0;
}

// MakeShared<FDummyAnalyticsSummarySender,1> @ 143191fd0

TSharedRef<FDummyAnalyticsSummarySender,1> * __cdecl
MakeShared<FDummyAnalyticsSummarySender,1>
          (TSharedRef<FDummyAnalyticsSummarySender,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FDummyAnalyticsSummarySender,1> *pTVar4;
  
  pTVar3 = operator_new(0x70);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FDummyAnalyticsSummarySender *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDummyAnalyticsSummarySender___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)&pTVar3[1].SharedReferenceCount.field_0x1 = 0;
    *(undefined2 *)&pTVar3[1].WeakReferenceCount.field_0x1 = 0;
    pTVar3[1].WeakReferenceCount.field_0x3 = 0;
    pTVar3[1]._padding_ = (longlong)&___7FDummyAnalyticsSummarySender__6B_;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar3[1].SharedReferenceCount = 0;
    __return_storage_ptr__->Object = (FDummyAnalyticsSummarySender *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FDummyAnalyticsSummarySender *)(pTVar3 + 1) == (FDummyAnalyticsSummarySender *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FDummyAnalyticsSummarySender,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// ~TFunction_OwnedObject<`AnalyticsSessionUtils::ReleaseOrphanGroupsOwnership'::__l11::<lambda_1>,0,0> @ 143193aa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AnalyticsSessionUtils::ReleaseOrphanGroupsOwnership'::__l11::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_AnalyticsSessionUtils::ReleaseOrphanGroupsOwnership_::__l11::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AnalyticsSessionUtils::ReleaseOrphanGroupsOwnership'::`11'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FAnalyticsSessionSummaryManager::AggregateSummaries'::__l9::<lambda_2>,0,1> @ 143193ac0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnalyticsSessionSummaryManager::AggregateSummaries'::__l9::<lambda_2>,0,1>::
~TFunction_OwnedObject<_FAnalyticsSessionSummaryManager::AggregateSummaries_::__l9::<lambda_2>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAnalyticsSessionSummaryManager::AggregateSummaries'::`9'::<lambda_2>,0,1>
        ::_vftable_;
  return;
}

// `vector_deleting_destructor'`adjustor{24}' @ 143194c28

/* [thunk]:public: virtual void * __ptr64 __cdecl FAnalyticsProviderET::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
FAnalyticsProviderET::_vector_deleting_destructor__adjustor_24__
          (FAnalyticsProviderET *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FAnalyticsProviderET *)&this[-1].OnAnalyticsEventQueuedDelegate.field_0x10,
                      param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 143194c40

void * __thiscall
TBaseSPMethodDelegateInstance<0,FAnalyticsProviderET,1,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FAnalyticsProviderET,1,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143194ca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(unsigned_int_const_*,int_const_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(unsigned_int_const_*,int_const_&),0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6A_NPEBIAEBH_Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143194ce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AnalyticsSessionUtils::ReleaseOrphanGroupsOwnership'::__l11::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`AnalyticsSessionUtils::ReleaseOrphanGroupsOwnership'::`11'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143194d20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnalyticsSessionSummaryManager::AggregateSummaries'::__l9::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAnalyticsSessionSummaryManager::AggregateSummaries'::`9'::<lambda_2>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143194d60

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FHttpRetrySystem::FRetryDomains,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FHttpRetrySystem::FRetryDomains,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143194da0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAnalyticsPropertyStore,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FAnalyticsPropertyStore,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x218);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143194de0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAnalyticsProviderET,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FAnalyticsProviderET,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143194e20

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAnalyticsProviderETEventCache,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FAnalyticsProviderETEventCache,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143194e60

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDummyAnalyticsSummarySender,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FDummyAnalyticsSummarySender,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143194ea0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FHttpRetrySystem::FManager,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FHttpRetrySystem::FManager,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143194ee0

void * __thiscall
FAnalyticsPerfTracker::_scalar_deleting_destructor_(FAnalyticsPerfTracker *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->RunID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CL).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StartDate).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FOutputDeviceFile::~FOutputDeviceFile(&this->LogFile);
  FTSTickerObjectBase::~FTSTickerObjectBase((FTSTickerObjectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x8f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143194f60

void * __thiscall
FAnalyticsProviderET::_scalar_deleting_destructor_(FAnalyticsProviderET *this,uint param_1)

{
  ~FAnalyticsProviderET(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143194fa0

void * __thiscall
FAnalyticsSessionSummarySender::_scalar_deleting_destructor_
          (FAnalyticsSessionSummarySender *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->ShouldEmitPropFunc != 0) {
    plVar1 = *(longlong **)&(this->ShouldEmitPropFunc).field_0x28;
    plVar2 = (longlong *)&(this->ShouldEmitPropFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143195000

void * __thiscall
FDummyAnalyticsSummarySender::_scalar_deleting_destructor_
          (FDummyAnalyticsSummarySender *this,uint param_1)

{
  ~FDummyAnalyticsSummarySender(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143195040

void * __thiscall
IAnalyticsProvider::_scalar_deleting_destructor_(IAnalyticsProvider *this,uint param_1)

{
  *this = (IAnalyticsProvider)&___7IAnalyticsProvider__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143195080

void * __thiscall
IAnalyticsProviderET::_scalar_deleting_destructor_(IAnalyticsProviderET *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)(this->UnsafeDefaultAttributes).AllocatorInstance.Data,
             (this->UnsafeDefaultAttributes).ArrayNum);
  pFVar1 = (this->UnsafeDefaultAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IAnalyticsProvider__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431950e0

void * __thiscall
IAnalyticsSessionSummarySender::_scalar_deleting_destructor_
          (IAnalyticsSessionSummarySender *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// AggregateAttributes @ 1431959c0

void __cdecl
AggregateAttributes(TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1,
                   TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  iVar1 = param_2->ArrayNum;
  pFVar7 = (param_2->AllocatorInstance).Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x30;
LAB_1431959f3:
  if (param_2->ArrayNum != iVar1) {
    local_res10[0] = 0;
    `TCheckedPointerIterator<FAnalyticsEventAttribute_const_,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_res10);
  }
  if (pFVar7 == pFVar8) {
    return;
  }
  iVar4 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar4 * 0x30;
  do {
    if (param_1->ArrayNum != iVar4) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FAnalyticsEventAttribute,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar5 == pFVar6) {
      pFVar5 = (param_1->AllocatorInstance).Data;
      if ((pFVar5 <= pFVar7) && (pFVar7 < pFVar5 + (longlong)param_1->ArrayMax * 0x30)) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = param_1->ArrayNum;
      if (iVar4 == param_1->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar4 + 1;
      pFVar5 = (param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x30;
      FString::FString((FString *)pFVar5,(FString *)pFVar7);
      FString::FString((FString *)(pFVar5 + 0x10),(FString *)(pFVar7 + 0x10));
      *(undefined8 *)&pFVar5[0x20].field_0x0 = *(undefined8 *)&pFVar7[0x20].field_0x0;
      pFVar5[0x28] = pFVar7[0x28];
      *(undefined4 *)(pFVar5 + 0x2c) = *(undefined4 *)(pFVar7 + 0x2c);
      goto LAB_143195b5d;
    }
    iVar3 = *(int *)(pFVar7 + 8);
    if (iVar3 == *(int *)(pFVar5 + 8)) {
      if (iVar3 < 2) break;
      iVar3 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)&pFVar7->field_0x0,*(wchar_t **)&pFVar5->field_0x0);
      bVar9 = iVar3 == 0;
    }
    else {
      bVar9 = iVar3 + *(int *)(pFVar5 + 8) == 1;
    }
    if (bVar9) break;
    pFVar5 = pFVar5 + 0x30;
  } while( true );
  if (pFVar7 == pFVar5) {
LAB_143195b5d:
    pFVar7 = pFVar7 + 0x30;
  }
  else {
    pFVar6 = pFVar7 + 0x20;
    pFVar7 = pFVar7 + 0x30;
    *(double *)&pFVar5[0x20].field_0x0 =
         *(double *)&pFVar6->field_0x0 + *(double *)&pFVar5[0x20].field_0x0;
  }
  goto LAB_1431959f3;
}

// AnalyticsConversionToString @ 1431969c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FString * __cdecl AnalyticsConversionToString(FString *__return_storage_ptr__,float param_1)

{
  int iVar1;
  
  iVar1 = _finite((double)param_1);
  if (iVar1 == 0) {
    FString::FString(__return_storage_ptr__,"null");
    return __return_storage_ptr__;
  }
  if ((param_1 <= __real_58635fa9) && (___real_d8635fa9 <= param_1)) {
    FString::SanitizeFloat(__return_storage_ptr__,(double)param_1,1);
    return __return_storage_ptr__;
  }
  FString::PrintfImpl(__return_storage_ptr__,L"%.9e");
  return __return_storage_ptr__;
}

// AppendString @ 143196a80

void __cdecl
EventCacheStatic::AppendString
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,wchar_t *param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uchar *puVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  
  fVar4 = __real_40000000;
  fVar3 = __real_3f800000;
  uVar11 = param_1->ArrayNum;
  piVar1 = &param_1->ArrayNum;
  fVar15 = __real_3e800000;
  while( true ) {
    iVar7 = *piVar1;
    fVar14 = (float)param_3 * fVar15;
    if ((float)param_3 * fVar15 <= fVar3) {
      fVar14 = fVar3;
    }
    uVar10 = (int)fVar14 + param_3 + uVar11;
    if (iVar7 < (int)uVar10) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar10 - iVar7,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
    }
    else {
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
      }
      if ((int)uVar10 < iVar7) {
        uVar12 = iVar7 - uVar10;
        if (((int)(uVar12 | uVar10) < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (uVar12 != 0) {
          pFVar9 = (param_1->AllocatorInstance).Data + (int)uVar10;
          iVar7 = (*piVar1 - uVar10) - uVar12;
          if (iVar7 != 0) {
            memmove(pFVar9,pFVar9 + (int)uVar12,(longlong)iVar7);
          }
          *piVar1 = *piVar1 - uVar12;
        }
      }
    }
    uVar12 = ~uVar11 >> 0x1f;
    uVar10 = 0;
    if ((int)uVar11 < *piVar1) {
      uVar10 = uVar12;
    }
    if ((uVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    puVar8 = UE::Core::Private::Convert
                       ((uchar *)((param_1->AllocatorInstance).Data + (int)uVar11),
                        (int)fVar14 + param_3,param_2,param_3);
    if (puVar8 != (uchar *)0x0) break;
    fVar15 = fVar15 + fVar15;
    if (fVar4 <= fVar15) {
      iVar6 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_2,param_3);
      iVar7 = *piVar1;
      uVar10 = iVar6 + uVar11;
      if (iVar7 < (int)uVar10) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar10 - iVar7,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
      }
      else {
        if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
        }
        if ((int)uVar10 < iVar7) {
          uVar13 = iVar7 - uVar10;
          if (((int)(uVar13 | uVar10) < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (uVar13 != 0) {
            pFVar9 = (param_1->AllocatorInstance).Data + (int)uVar10;
            iVar7 = (*piVar1 - uVar10) - uVar13;
            if (iVar7 != 0) {
              memmove(pFVar9,pFVar9 + (int)uVar13,(longlong)iVar7);
            }
            *piVar1 = *piVar1 - uVar13;
          }
        }
      }
      uVar10 = 0;
      if ((int)uVar11 < *piVar1) {
        uVar10 = uVar12;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UE::Core::Private::Convert
                ((uchar *)((param_1->AllocatorInstance).Data + (int)uVar11),iVar6,param_2,param_3);
      return;
    }
  }
  uVar10 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar10 = uVar12;
  }
  if ((uVar10 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar7 = *piVar1;
  uVar11 = (((int)puVar8 - uVar11) - *(int *)&(param_1->AllocatorInstance).Data) + uVar11;
  if (iVar7 < (int)uVar11) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,uVar11 - iVar7,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
    memset((param_1->AllocatorInstance).Data + iVar6,0,(longlong)(int)(uVar11 - iVar7));
    return;
  }
  if (-1 < (int)uVar11) {
    if (iVar7 <= (int)uVar11) {
      return;
    }
    uVar10 = iVar7 - uVar11;
    if (((int)(uVar10 | uVar11) < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar10 == 0) {
      return;
    }
    pFVar9 = (param_1->AllocatorInstance).Data + (int)uVar11;
    iVar7 = (*piVar1 - uVar10) - uVar11;
    if (iVar7 != 0) {
      memmove(pFVar9,pFVar9 + (int)uVar10,(longlong)iVar7);
    }
    *piVar1 = *piVar1 - uVar10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
}

// ComputeAttributeSize @ 1431975e0

int __cdecl
EventCacheStatic::ComputeAttributeSize
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  iVar7 = 0;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x30;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnalyticsEventAttribute_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    iVar4 = *(int *)(pFVar5 + 8) + -1;
    if (*(int *)(pFVar5 + 8) == 0) {
      iVar4 = 0;
    }
    iVar3 = 2;
    if (*(int *)(pFVar5 + 0x2c) == 4) {
      iVar3 = 0;
    }
    iVar2 = *(int *)(pFVar5 + 0x18) + -1 + iVar4 + iVar3;
    if (*(int *)(pFVar5 + 0x18) == 0) {
      iVar2 = iVar4 + iVar3;
    }
    iVar7 = iVar7 + 4 + iVar2;
    pFVar5 = pFVar5 + 0x30;
  }
  return iVar7;
}

// GetAnalyticsPerfTracker @ 14319d300

FAnalyticsPerfTracker * __cdecl GetAnalyticsPerfTracker(void)

{
  code *pcVar1;
  bool bVar2;
  FAnalyticsPerfTracker *pFVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TLazySingleton<struct_FAnalyticsPerfTracker>&___ptr64___cdecl_TLazySingleton<FAnalyticsPerfTracker>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<struct_FAnalyticsPerfTracker>&___ptr64___cdecl_TLazySingleton<FAnalyticsPerfTracker>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<struct_FAnalyticsPerfTracker>&___ptr64___cdecl_TLazySingleton<FAnalyticsPerfTracker>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FAnalyticsPerfTracker::FAnalyticsPerfTracker
              ((FAnalyticsPerfTracker *)
               &`private:_static_class_TLazySingleton<struct_FAnalyticsPerfTracker>&___ptr64___cdecl_TLazySingleton<FAnalyticsPerfTracker>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                ::__l2::Singleton);
    DAT_1550660d0 =
         &`private:_static_class_TLazySingleton<struct_FAnalyticsPerfTracker>&___ptr64___cdecl_TLazySingleton<FAnalyticsPerfTracker>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    atexit(`TLazySingleton<FAnalyticsPerfTracker>::GetLazy'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&`private:_static_class_TLazySingleton<struct_FAnalyticsPerfTracker>&___ptr64___cdecl_TLazySingleton<FAnalyticsPerfTracker>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (((FAnalyticsPerfTracker *)DAT_1550660d0 == (FAnalyticsPerfTracker *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FAnalyticsPerfTracker *)(*pcVar1)();
    return pFVar3;
  }
  return (FAnalyticsPerfTracker *)DAT_1550660d0;
}

// GetAnalyticsPropertyFilenamePattern @ 14319d3c0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FRegexPattern * __cdecl
AnalyticsSessionUtils::GetAnalyticsPropertyFilenamePattern(FRegexPattern *__return_storage_ptr__)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"(^[0-9A-Za-z]+)_([0-9]+)_([0-9]+)(_[0-9]+)?_(.*)");
  FRegexPattern::FRegexPattern(__return_storage_ptr__,&local_18,None);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDefaultSavedDir @ 14319d7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl AnalyticsSessionUtils::GetDefaultSavedDir(FString *__return_storage_ptr__)

{
  FString *pFVar1;
  size_t sVar2;
  wchar_t *_Str;
  undefined1 auStack_88 [32];
  FString local_68;
  TStringView<wchar_t> local_58;
  FScriptContainerElement *local_48;
  int local_40;
  wchar_t *local_38;
  undefined4 local_30;
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar1 = FApp::GetEpicProductIdentifier(&local_68);
  if ((pFVar1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  local_58.DataPtr = FWindowsPlatformProcess::UserSettingsDir();
  local_40 = 0;
  local_58.Size = local_40;
  if (local_58.DataPtr != (wchar_t *)0x0) {
    sVar2 = wcslen(local_58.DataPtr);
    local_58.Size = (int)sVar2;
  }
  local_48 = (FScriptContainerElement *)_Str;
  if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) {
    sVar2 = wcslen(_Str);
    local_40 = (int)sVar2;
  }
  local_38 = L"Common";
  local_30 = 6;
  local_28 = L"Analytics";
  local_20 = 9;
  FPaths::CombineInternal(__return_storage_ptr__,&local_58,4);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// InitializePayloadBuffer @ 14319dda0

void __cdecl
EventCacheStatic::InitializePayloadBuffer
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar8 = (uint)((double)param_2 * __real_3ff3333333333333);
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar8,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  pcVar4 = PayloadTemplate;
  if (PayloadTemplate == (char *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0xd,&param_1->AllocatorInstance,&param_1->ArrayNum,piVar1);
  pFVar2 = (param_1->AllocatorInstance).Data;
  lVar7 = (longlong)iVar6;
  *(undefined8 *)(pFVar2 + lVar7) = *(undefined8 *)pcVar4;
  *(undefined4 *)(pFVar2 + lVar7 + 8) = *(undefined4 *)(pcVar4 + 8);
  pFVar2[lVar7 + 0xc] = *(FScriptContainerElement *)(pcVar4 + 0xc);
  return;
}

// IsReserved @ 14319dec0

bool __cdecl AnalyticsManagerProperties::IsReserved(FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  iVar3 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    (&ReservedKeys,uVar2,param_1);
  return iVar3 != -1;
}

// LexToString @ 14319df40

wchar_t * __cdecl LexToString(EAnalyticsSessionShutdownType param_1)

{
  switch(param_1) {
  case Shutdown:
    return L"Shutdown";
  case Terminated:
    return L"Terminated";
  case Debugged:
    return L"Debugger";
  case Crashed:
    return L"Crashed";
  case Abnormal:
    return L"AbnormalShutdown";
  default:
    return L"Unknown";
  }
}

// ReleaseOrphanGroupsOwnership @ 1431a2000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AnalyticsSessionUtils::ReleaseOrphanGroupsOwnership(FString *param_1,FString *param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  EStatusCode EVar5;
  IFileManager *pIVar6;
  undefined ***pppuVar7;
  ForAnyElementType FVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *_Src;
  undefined1 auStackY_2d8 [32];
  FString local_298;
  FWindowsSystemWideMutex local_288;
  FTimespan local_280;
  code *local_278 [2];
  undefined **local_268;
  uint local_260;
  undefined ***local_250;
  FAnalyticsPropertyStore local_248;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  iVar1 = (param_1->Data).ArrayNum;
  iVar9 = OrphanSessionsOwnerFilename.Data.ArrayNum + -1;
  if (OrphanSessionsOwnerFilename.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  local_298.Data.ArrayNum = iVar1;
  if ((iVar1 == 0) && (iVar9 != -1)) {
    _Src = (param_1->Data).AllocatorInstance.Data;
    iVar4 = iVar9 + 2;
LAB_1431a207c:
    local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar4 == 0) {
      local_298.Data.ArrayMax = 0;
      goto LAB_1431a20d1;
    }
  }
  else {
    _Src = (param_1->Data).AllocatorInstance.Data;
    iVar4 = iVar9 + 1;
    if (iVar1 == 0) goto LAB_1431a207c;
  }
  local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar10 = iVar1 + iVar4;
  if ((int)uVar10 < iVar1) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar10,0,(ForAnyElementType *)&local_298,iVar1,&local_298.Data.ArrayMax);
  if (iVar1 != 0) {
    memcpy(local_298.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
  }
LAB_1431a20d1:
  ::FString::PathAppend
            (&local_298,(wchar_t *)OrphanSessionsOwnerFilename.Data.AllocatorInstance.Data,iVar9);
  pIVar6 = IFileManager::Get();
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_298.Data.ArrayNum != 0) {
    FVar8.Data = local_298.Data.AllocatorInstance.Data;
  }
  cVar2 = (**(code **)((longlong)*pIVar6 + 0x50))(pIVar6,FVar8.Data);
  if (cVar2 != '\0') {
    UE::FWindowsSystemWideMutex::FWindowsSystemWideMutex
              (&local_288,&OrphanSessionsOwnerCriticalSectionName,(FTimespan)0x0);
    bVar3 = UE::FWindowsSystemWideMutex::IsValid(&local_288);
    if (bVar3) {
      FAnalyticsPropertyStore::FAnalyticsPropertyStore(&local_248);
      bVar3 = FAnalyticsPropertyStore::Load(&local_248,&local_298);
      if (bVar3) {
        local_250 = (undefined ***)0x0;
        local_268 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`AnalyticsSessionUtils::ReleaseOrphanGroupsOwnership'::`11'::<lambda_1>,0,0>
                     ::_vftable_;
        local_278[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`AnalyticsSessionUtils::ReleaseOrphanGroupsOwnership'::__l11::<lambda_1>,bool,unsigned_int_const_*,unsigned_int_const_&>
                       ::Call;
        local_260 = param_3;
        EVar5 = FAnalyticsPropertyStore::Set
                          (&local_248,param_2,0,
                           (TFunction<bool___cdecl(unsigned_int_const_*,unsigned_int_const_&)> *)
                           local_278);
        if (local_278[0] != (code *)0x0) {
          pppuVar7 = &local_268;
          if (local_250 != (undefined ***)0x0) {
            pppuVar7 = local_250;
          }
          (*(code *)(*pppuVar7)[2])();
        }
        if (EVar5 == Success) {
          local_280.Ticks = 0x7fffffffffffffff;
          FAnalyticsPropertyStore::Flush(&local_248,false,&local_280);
        }
      }
      FAnalyticsPropertyStore::~FAnalyticsPropertyStore(&local_248);
    }
    UE::FWindowsSystemWideMutex::~FWindowsSystemWideMutex(&local_288);
  }
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  return;
}

// SetAnayticsETPerfTrackingRunID @ 1431a3360

void __cdecl SetAnayticsETPerfTrackingRunID(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FAnalyticsPerfTracker *pFVar2;
  FDateTime this;
  FString *pFVar3;
  FString *pFVar4;
  FString local_18;
  
  pFVar2 = GetAnalyticsPerfTracker();
  if (pFVar2->bEnabled != false) {
    FString::operator=(&pFVar2->RunID,param_1);
    this = FDateTime::UtcNow();
    pFVar3 = FDateTime::ToIso8601((FDateTime *)this.Ticks,&local_18);
    pFVar4 = &pFVar2->StartDate;
    if (pFVar4 != pFVar3) {
      pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar4->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar2->StartDate).Data.ArrayNum = (pFVar3->Data).ArrayNum;
      (pFVar2->StartDate).Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// TearDownAnalyticsPerfTracker @ 1431a5ce0

void __cdecl TearDownAnalyticsPerfTracker(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLazySingleton<struct_FAnalyticsPerfTracker>&___ptr64___cdecl_TLazySingleton<FAnalyticsPerfTracker>::GetLazy(void_(__cdecl*)(void*___ptr64))'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<struct_FAnalyticsPerfTracker>&___ptr64___cdecl_TLazySingleton<FAnalyticsPerfTracker>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<struct_FAnalyticsPerfTracker>&___ptr64___cdecl_TLazySingleton<FAnalyticsPerfTracker>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      DAT_1550660d0 = (undefined8 *)0x0;
      atexit(`TLazySingleton<FAnalyticsPerfTracker>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<struct_FAnalyticsPerfTracker>&___ptr64___cdecl_TLazySingleton<FAnalyticsPerfTracker>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (DAT_1550660d0 != (undefined8 *)0x0) {
    (**(code **)*DAT_1550660d0)(DAT_1550660d0,0);
    DAT_1550660d0 = (undefined8 *)0x0;
  }
  return;
}

// TryAcquiringOrphanGroupsOwnership @ 1431a6af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
AnalyticsSessionUtils::TryAcquiringOrphanGroupsOwnership
          (FString *param_1,FString *param_2,uint param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  EStatusCode EVar5;
  IFileManager *pIVar6;
  undefined ***pppuVar7;
  ForAnyElementType FVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *_Src;
  bool bVar11;
  undefined1 auStackY_2e8 [32];
  FString local_2a8;
  FWindowsSystemWideMutex local_298;
  FTimespan local_290;
  code *local_288 [2];
  undefined **local_278;
  code *local_270;
  undefined ***local_260;
  FAnalyticsPropertyStore local_258;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  FAnalyticsPropertyStore::FAnalyticsPropertyStore(&local_258);
  iVar1 = (param_1->Data).ArrayNum;
  iVar9 = OrphanSessionsOwnerFilename.Data.ArrayNum + -1;
  if (OrphanSessionsOwnerFilename.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  local_2a8.Data.ArrayNum = iVar1;
  if ((iVar1 == 0) && (iVar9 != -1)) {
    _Src = (param_1->Data).AllocatorInstance.Data;
    iVar4 = iVar9 + 2;
LAB_1431a6b71:
    local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar4 != 0) goto LAB_1431a6b7b;
    local_2a8.Data.ArrayMax = 0;
  }
  else {
    _Src = (param_1->Data).AllocatorInstance.Data;
    iVar4 = iVar9 + 1;
    if (iVar1 == 0) goto LAB_1431a6b71;
LAB_1431a6b7b:
    local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar10 = iVar1 + iVar4;
    if ((int)uVar10 < iVar1) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar10,0,(ForAnyElementType *)&local_2a8,iVar1,&local_2a8.Data.ArrayMax);
    if (iVar1 != 0) {
      memcpy(local_2a8.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
    }
  }
  ::FString::PathAppend
            (&local_2a8,(wchar_t *)OrphanSessionsOwnerFilename.Data.AllocatorInstance.Data,iVar9);
  bVar11 = false;
  UE::FWindowsSystemWideMutex::FWindowsSystemWideMutex
            (&local_298,&OrphanSessionsOwnerCriticalSectionName,(FTimespan)0x0);
  bVar2 = UE::FWindowsSystemWideMutex::IsValid(&local_298);
  if (bVar2) {
    pIVar6 = IFileManager::Get();
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_2a8.Data.ArrayNum != 0) {
      FVar8.Data = local_2a8.Data.AllocatorInstance.Data;
    }
    cVar3 = (**(code **)((longlong)*pIVar6 + 0x50))(pIVar6,FVar8.Data);
    if (cVar3 == '\0') {
      bVar2 = FAnalyticsPropertyStore::Create(&local_258,&local_2a8,0x400);
      if (!bVar2) goto LAB_1431a6d16;
      EVar5 = FAnalyticsPropertyStore::Set(&local_258,param_2,param_3);
    }
    else {
      bVar2 = FAnalyticsPropertyStore::Load(&local_258,&local_2a8);
      if (!bVar2) {
        pIVar6 = IFileManager::Get();
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_2a8.Data.ArrayNum != 0) {
          FVar8.Data = local_2a8.Data.AllocatorInstance.Data;
        }
        (**(code **)((longlong)*pIVar6 + 0x38))(pIVar6,FVar8.Data,0,0);
        goto LAB_1431a6d16;
      }
      local_260 = (undefined ***)0x0;
      local_278 = &___7__TFunction_OwnedObject_P6A_NPEBIAEBH_Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_270 = `AnalyticsSessionUtils::TryAcquiringOrphanGroupsOwnership'::__l11::<lambda_1>::
                  <lambda_invoker_cdecl>;
      local_288[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<bool_(__cdecl*)(unsigned_int_const_*,int_const_&),bool,unsigned_int_const_*,unsigned_int_const_&>
                     ::Call;
      EVar5 = FAnalyticsPropertyStore::Set
                        (&local_258,param_2,param_3,
                         (TFunction<bool___cdecl(unsigned_int_const_*,unsigned_int_const_&)> *)
                         local_288);
      if (local_288[0] != (code *)0x0) {
        pppuVar7 = &local_278;
        if (local_260 != (undefined ***)0x0) {
          pppuVar7 = local_260;
        }
        (*(code *)(*pppuVar7)[2])();
      }
    }
    bVar11 = EVar5 == Success;
    if (bVar11) {
      local_290.Ticks = 0x7fffffffffffffff;
      FAnalyticsPropertyStore::Flush(&local_258,false,&local_290);
    }
  }
LAB_1431a6d16:
  UE::FWindowsSystemWideMutex::~FWindowsSystemWideMutex(&local_298);
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  FAnalyticsPropertyStore::~FAnalyticsPropertyStore(&local_258);
  return bVar11;
}

// IMPLEMENT_MODULE_AnalyticsET @ 1431a7840

void __cdecl IMPLEMENT_MODULE_AnalyticsET(void)

{
  return;
}

// IsUserLoggingOutProperty'' @ 150360960

void __cdecl
`dynamic_atexit_destructor_for_'FAnalyticsSessionSummaryManager::IsUserLoggingOutProperty__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FAnalyticsSessionSummaryManager::IsUserLoggingOutProperty.Key.Data.AllocatorInstance.
               Data;
  if (FAnalyticsSessionSummaryManager::IsUserLoggingOutProperty.Key.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FAnalyticsSessionSummaryManager::IsUserLoggingOutProperty.Key.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// ShutdownTypeCodeProperty'' @ 150360980

void __cdecl
`dynamic_atexit_destructor_for_'FAnalyticsSessionSummaryManager::ShutdownTypeCodeProperty__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FAnalyticsSessionSummaryManager::ShutdownTypeCodeProperty.Key.Data.AllocatorInstance.
               Data;
  if (FAnalyticsSessionSummaryManager::ShutdownTypeCodeProperty.Key.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FAnalyticsSessionSummaryManager::ShutdownTypeCodeProperty.Key.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'AllowedPlatformComments'' @ 1503609a0

void __cdecl
`FAnalyticsUserAgentCache::UpdateUserAgent'::__l2::
_dynamic_atexit_destructor_for__AllowedPlatformComments__(void)

{
  `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
  AllowedPlatformComments.HashSize = 0;
  if (`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
      AllowedPlatformComments.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                          ::__l2::AllowedPlatformComments.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2
              ::AllowedPlatformComments.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'AllowedProjectComments'' @ 1503609e0

void __cdecl
`FAnalyticsUserAgentCache::UpdateUserAgent'::__l2::
_dynamic_atexit_destructor_for__AllowedProjectComments__(void)

{
  `private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
  AllowedProjectComments.HashSize = 0;
  if (`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2::
      AllowedProjectComments.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'
                          ::__l2::AllowedProjectComments.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&`private:_void___cdecl_FAnalyticsUserAgentCache::UpdateUserAgent(void)___ptr64'::__l2
              ::AllowedProjectComments.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDefaultUserAgentCommentsEnabled'' @ 150360a20

void __cdecl
AnalyticsProviderETCvars::_dynamic_atexit_destructor_for__CVarDefaultUserAgentCommentsEnabled__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDefaultUserAgentCommentsEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CvarPayloadFlushTimeSecForWarning'' @ 150360a40

void __cdecl
EventCacheStatic::_dynamic_atexit_destructor_for__CvarPayloadFlushTimeSecForWarning__(void)

{
  CvarPayloadFlushTimeSecForWarning._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CvarPayloadFlushTimeSecForWarning);
  return;
}

// `dynamic_atexit_destructor_for_'CvarPayloadPercentageOfMaxForWarning'' @ 150360a60

void __cdecl
EventCacheStatic::_dynamic_atexit_destructor_for__CvarPayloadPercentageOfMaxForWarning__(void)

{
  CvarPayloadPercentageOfMaxForWarning._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CvarPayloadPercentageOfMaxForWarning);
  return;
}

// `dynamic_atexit_destructor_for_'CvarPreventMultipleFlushesInOneFrame'' @ 150360a80

void __cdecl
AnalyticsProviderETCvars::_dynamic_atexit_destructor_for__CvarPreventMultipleFlushesInOneFrame__
          (void)

{
  CvarPreventMultipleFlushesInOneFrame._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CvarPreventMultipleFlushesInOneFrame);
  return;
}

// `dynamic_atexit_destructor_for_'DelayedSend'' @ 150360aa0

void __cdecl AnalyticsManagerProperties::_dynamic_atexit_destructor_for__DelayedSend__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DelayedSend.Key.Data.AllocatorInstance.Data;
  if (DelayedSend.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DelayedSend.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ErrorNamespace'' @ 150360ac0

void __cdecl EHttpResponseCodes::_dynamic_atexit_destructor_for__ErrorNamespace__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ErrorNamespace.Data.AllocatorInstance.Data;
  if (ErrorNamespace.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ErrorNamespace.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'FAnalyticsProviderETEventCacheTestAutomationTestInstance'' @ 150360ae0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FAnalyticsProviderETEventCacheTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FAnalyticsProviderETEventCacheTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FAnalyticsSessionSummaryManagerAutomationTestAutomationTestInstance'' @ 150360b00

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FAnalyticsSessionSummaryManagerAutomationTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FAnalyticsSessionSummaryManagerAutomationTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'InternalPropertyPrefix'' @ 150360b20

void __cdecl
AnalyticsManagerProperties::_dynamic_atexit_destructor_for__InternalPropertyPrefix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = InternalPropertyPrefix.Data.AllocatorInstance.Data;
  if (InternalPropertyPrefix.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (InternalPropertyPrefix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'InternalSessionAppId'' @ 150360b40

void __cdecl
AnalyticsManagerProperties::_dynamic_atexit_destructor_for__InternalSessionAppId__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = InternalSessionAppId.Key.Data.AllocatorInstance.Data;
  if (InternalSessionAppId.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (InternalSessionAppId.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'InternalSessionAppVersion'' @ 150360b60

void __cdecl
AnalyticsManagerProperties::_dynamic_atexit_destructor_for__InternalSessionAppVersion__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = InternalSessionAppVersion.Key.Data.AllocatorInstance.Data;
  if (InternalSessionAppVersion.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (InternalSessionAppVersion.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'InternalSessionId'' @ 150360b80

void __cdecl AnalyticsManagerProperties::_dynamic_atexit_destructor_for__InternalSessionId__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = InternalSessionId.Key.Data.AllocatorInstance.Data;
  if (InternalSessionId.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (InternalSessionId.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'InternalSessionUserId'' @ 150360ba0

void __cdecl
AnalyticsManagerProperties::_dynamic_atexit_destructor_for__InternalSessionUserId__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = InternalSessionUserId.Key.Data.AllocatorInstance.Data;
  if (InternalSessionUserId.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (InternalSessionUserId.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'InternalWasProcessed'' @ 150360bc0

void __cdecl
AnalyticsManagerProperties::_dynamic_atexit_destructor_for__InternalWasProcessed__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = InternalWasProcessed.Key.Data.AllocatorInstance.Data;
  if (InternalWasProcessed.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (InternalWasProcessed.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogAnalyticsSessionSummary'' @ 150360be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAnalyticsSessionSummary__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAnalyticsSessionSummary);
  return;
}

// `dynamic_atexit_destructor_for_'LogAnalyticsSessionSummarySender'' @ 150360c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAnalyticsSessionSummarySender__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAnalyticsSessionSummarySender);
  return;
}

// `dynamic_atexit_destructor_for_'MissingDataFrom'' @ 150360c20

void __cdecl AnalyticsManagerProperties::_dynamic_atexit_destructor_for__MissingDataFrom__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MissingDataFrom.Key.Data.AllocatorInstance.Data;
  if (MissingDataFrom.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (MissingDataFrom.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'OrphanSessionsOwnerCriticalSectionName'' @ 150360c40

void __cdecl
AnalyticsSessionUtils::_dynamic_atexit_destructor_for__OrphanSessionsOwnerCriticalSectionName__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OrphanSessionsOwnerCriticalSectionName.Data.AllocatorInstance.Data;
  if (OrphanSessionsOwnerCriticalSectionName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (OrphanSessionsOwnerCriticalSectionName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'OrphanSessionsOwnerFilename'' @ 150360c60

void __cdecl
AnalyticsSessionUtils::_dynamic_atexit_destructor_for__OrphanSessionsOwnerFilename__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OrphanSessionsOwnerFilename.Data.AllocatorInstance.Data;
  if (OrphanSessionsOwnerFilename.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OrphanSessionsOwnerFilename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ReservedKeys'' @ 150360c80

void __cdecl AnalyticsManagerProperties::_dynamic_atexit_destructor_for__ReservedKeys__(void)

{
  ReservedKeys.HashSize = 0;
  if (ReservedKeys.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)ReservedKeys.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&ReservedKeys.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'SentFrom'' @ 150360cc0

void __cdecl AnalyticsManagerProperties::_dynamic_atexit_destructor_for__SentFrom__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SentFrom.Key.Data.AllocatorInstance.Data;
  if (SentFrom.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SentFrom.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SessionId'' @ 150360ce0

void __cdecl AnalyticsManagerProperties::_dynamic_atexit_destructor_for__SessionId__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SessionId.Key.Data.AllocatorInstance.Data;
  if (SessionId.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SessionId.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ShutdownType'' @ 150360d00

void __cdecl AnalyticsManagerProperties::_dynamic_atexit_destructor_for__ShutdownType__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ShutdownType.Key.Data.AllocatorInstance.Data;
  if (ShutdownType.Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ShutdownType.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 150360d20

void __cdecl
`TLazySingleton<FAnalyticsPerfTracker>::GetLazy'::__l2::_dynamic_atexit_destructor_for__Singleton__
          (void)

{
  if (DAT_1550660d0 != (undefined8 *)0x0) {
    (**(code **)*DAT_1550660d0)(DAT_1550660d0,0);
    DAT_1550660d0 = (undefined8 *)0x0;
  }
  return;
}

