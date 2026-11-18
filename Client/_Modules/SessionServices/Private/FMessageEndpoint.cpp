// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SessionServices
// Functions: 2

// Send<FTraceControlChannelsSet> @ 148cec160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageEndpoint::Send<FTraceControlChannelsSet>
          (FMessageEndpoint *this,FTraceControlChannelsSet *param_1,FMessageAddress *param_2)

{
  FScriptContainerElement *_Src;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar1;
  UScriptStruct *pUVar2;
  longlong lVar3;
  FDateTime local_res20;
  FTimespan local_58;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_50;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_40;
  TSharedPtr<IMessageAttachment,1> local_30;
  
  local_58.Ticks = 0;
  local_40.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res20.Ticks = 0x2bca2875f4373fff;
  local_40.Array.ArrayNum = 0;
  local_40.Array.ArrayMax = 0;
  pTVar1 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add(&local_40,param_2);
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = (pTVar1->Array).ArrayNum;
  lVar3 = (longlong)local_50.ArrayNum;
  _Src = (pTVar1->Array).AllocatorInstance.Data;
  if (local_50.ArrayNum == 0) {
    local_50.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,local_50.ArrayNum,0,&local_50.AllocatorInstance,local_50.ArrayNum,
               &local_50.ArrayMax);
    memcpy(local_50.AllocatorInstance.Data,_Src,lVar3 << 4);
  }
  local_30.Object = (IMessageAttachment *)0x0;
  local_30.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pUVar2 = FTraceControlChannelsSet::StaticStruct();
  Send(this,param_1,pUVar2,None,&local_30,&local_50,&local_58,&local_res20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.SharedReferenceCount.ReferenceController);
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  if (local_40.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Array.AllocatorInstance.Data);
  }
  return;
}

// SafeRelease @ 148cf6ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FMessageEndpoint::SafeRelease(TSharedPtr<FMessageEndpoint,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FMessageEndpoint *pFVar1;
  TSharedPtr<FMessageEndpoint,1> local_18;
  
  pFVar1 = param_1->Object;
  if (pFVar1 != (FMessageEndpoint *)0x0) {
    lpCriticalSection = &pFVar1->HandlersCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DestructItems<TSharedPtr<IMessageHandler,1>,int>
              ((TSharedPtr<IMessageHandler,1> *)(pFVar1->Handlers).AllocatorInstance.Data,
               (pFVar1->Handlers).ArrayNum);
    (pFVar1->Handlers).ArrayNum = 0;
    if ((pFVar1->Handlers).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(pFVar1->Handlers).AllocatorInstance,0,&(pFVar1->Handlers).ArrayMax);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_18.Object = (FMessageEndpoint *)0x0;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (param_1 != &local_18) {
      param_1->Object = (FMessageEndpoint *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_1->SharedReferenceCount,&local_18.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

