// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OodleNetworkPlugin
// Functions: 3

// CreateComponentInstance @ 14e2923c0

TSharedPtr<HandlerComponent,1> * __thiscall
FOodleComponentModuleInterface::CreateComponentInstance
          (FOodleComponentModuleInterface *this,
          TSharedPtr<HandlerComponent,1> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  OodleNetworkHandlerComponent *this_00;
  FName *pFVar3;
  TSharedPtr<HandlerComponent,1> *pTVar4;
  longlong lVar5;
  TRawPtrProxy<OodleNetworkHandlerComponent> local_res10 [2];
  FName local_res20;
  OodleNetworkHandlerComponent *local_18 [2];
  
  this_00 = ::operator_new(0xa8);
  if (this_00 != (OodleNetworkHandlerComponent *)0x0) {
    pFVar3 = ::FName::FName(&local_res20,L"OodleNetworkHandlerComponent");
    HandlerComponent::HandlerComponent((HandlerComponent *)this_00,*pFVar3);
    this_00->bEnableOodle = false;
    this_00->ServerEnableMode = AlwaysEnabled;
    this_00->_padding_ = (longlong)&___7OodleNetworkHandlerComponent__6B_;
    (this_00->OodleNetworkFaultHandler)._padding_ = (longlong)&___7FOodleNetworkFaultHandler__6B_;
    this_00->InPacketLog = (FPacketCaptureArchive *)0x0;
    this_00->OutPacketLog = (FPacketCaptureArchive *)0x0;
    this_00->bUseDictionaryIfPresent = false;
    this_00->bCaptureMode = false;
    (this_00->NetAnalyticsData).Object = (FOodleNetAnalyticsData *)0x0;
    (this_00->NetAnalyticsData).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this_00->bOodleNetworkAnalytics = false;
    (this_00->ServerDictionary).Object = (FOodleNetworkDictionary *)0x0;
    (this_00->ServerDictionary).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (this_00->ClientDictionary).Object = (FOodleNetworkDictionary *)0x0;
    (this_00->ClientDictionary).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this_00->bInitializedDictionaries = false;
    (this_00->OodleNetworkFaultHandler)._padding_ = 0;
    (this_00->OodleNetworkFaultHandler).FaultRecovery = (FNetConnectionFaultRecoveryBase *)0x0;
    this_00->ClientEnableMode = AlwaysEnabled;
    (this_00->OodleNetworkFaultHandler).CounterIndex = -1;
    HandlerComponent::SetActive((HandlerComponent *)this_00,true);
    local_18[0] = this_00;
    if (((OodleComponentList.AllocatorInstance.Data <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 <
         OodleComponentList.AllocatorInstance.Data + (longlong)OodleComponentList.ArrayMax * 8)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<HandlerComponent,1> *)(*pcVar1)();
      return pTVar4;
    }
    if (OodleComponentList.ArrayNum == OodleComponentList.ArrayMax) {
      OodleComponentList.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&OodleComponentList.AllocatorInstance,&OodleComponentList.ArrayMax);
    }
    lVar5 = (longlong)OodleComponentList.ArrayNum;
    OodleComponentList.ArrayNum = OodleComponentList.ArrayNum + 1;
    *(OodleNetworkHandlerComponent **)(OodleComponentList.AllocatorInstance.Data + lVar5 * 8) =
         local_18[0];
  }
  local_res10[0].Object = this_00;
  TSharedPtr<HandlerComponent,1>::TSharedPtr<HandlerComponent,1><OodleNetworkHandlerComponent>
            (__return_storage_ptr__,local_res10);
  return __return_storage_ptr__;
}

// StartupModule @ 14e292570

void __thiscall FOodleComponentModuleInterface::StartupModule(FOodleComponentModuleInterface *this)

{
  wchar_t *pwVar1;
  FString *pFVar2;
  size_t sVar3;
  FString local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  wchar_t *local_38;
  undefined4 local_30;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined4 local_10;
  
  pwVar1 = FCommandLine::Get();
  bOodleForceEnable = FParse::Param(pwVar1,L"Oodle");
  pFVar2 = FPaths::ProjectSavedDir();
  pwVar1 = L"";
  if ((pFVar2->Data).ArrayNum == 0) {
    local_48.DataPtr = L"";
  }
  else {
    local_48.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  local_48.Size = 0;
  if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
    sVar3 = wcslen(local_48.DataPtr);
    local_48.Size = (int)sVar3;
  }
  local_38 = L"Oodle";
  local_30 = 5;
  FPaths::CombineInternal(&local_68,&local_48,2);
  pFVar2 = FPaths::ConvertRelativePathToFull(&local_58,&local_68);
  if (pFVar2 != &GOodleSaveDir) {
    if (GOodleSaveDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(GOodleSaveDir.Data.AllocatorInstance.Data);
    }
    GOodleSaveDir.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    GOodleSaveDir.Data.ArrayNum = (pFVar2->Data).ArrayNum;
    GOodleSaveDir.Data.ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pFVar2 = FPaths::ProjectContentDir((FString *)&local_48);
  if ((pFVar2->Data).ArrayNum != 0) {
    pwVar1 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  local_28.Size = 0;
  local_28.DataPtr = pwVar1;
  if ((FScriptContainerElement *)pwVar1 != (FScriptContainerElement *)0x0) {
    sVar3 = wcslen(pwVar1);
    local_28.Size = (int)sVar3;
  }
  local_18 = L"Oodle";
  local_10 = 5;
  FPaths::CombineInternal(&local_68,&local_28,2);
  pFVar2 = FPaths::ConvertRelativePathToFull(&local_58,&local_68);
  if (pFVar2 != &GOodleContentDir) {
    if (GOodleContentDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(GOodleContentDir.Data.AllocatorInstance.Data);
    }
    GOodleContentDir.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    GOodleContentDir.Data.ArrayNum = (pFVar2->Data).ArrayNum;
    GOodleContentDir.Data.ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  return;
}

// ShutdownModule @ 14e292760

void __thiscall FOodleComponentModuleInterface::ShutdownModule(FOodleComponentModuleInterface *this)

{
  return;
}

