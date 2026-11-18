// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 3

// FD3D12CopyScope @ 1459a9220

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12CopyScope * __thiscall
FD3D12CopyScope::FD3D12CopyScope
          (FD3D12CopyScope *this,FD3D12Device *param_1,ED3D12SyncPointType param_2,
          TRefCountPtr<FD3D12SyncPoint> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FD3D12SyncPoint *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FD3D12ContextCommon *pFVar7;
  FD3D12CopyScope *pFVar8;
  
  this->Device = param_1;
  FD3D12SyncPoint::Create((int)this + 8,(wchar_t *)(ulonglong)param_2);
  this->bSyncPointRetrieved = false;
  pFVar7 = FD3D12Device::ObtainContext(param_1,Copy);
  this->Context = (FD3D12ContextCopy *)pFVar7;
  if (param_3->Reference != (FD3D12SyncPoint *)0x0) {
    pFVar2 = (pFVar7->BatchedSyncPoints).ToWait.AllocatorInstance.Data;
    if (((pFVar2 <= param_3) &&
        (param_3 < pFVar2 + (longlong)(pFVar7->BatchedSyncPoints).ToWait.ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FD3D12CopyScope *)(*pcVar4)();
      return pFVar8;
    }
    iVar6 = (pFVar7->BatchedSyncPoints).ToWait.ArrayNum;
    piVar1 = &(pFVar7->BatchedSyncPoints).ToWait.ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&pFVar7->BatchedSyncPoints,piVar1);
    }
    (pFVar7->BatchedSyncPoints).ToWait.ArrayNum = iVar6 + 1;
    pFVar2 = (pFVar7->BatchedSyncPoints).ToWait.AllocatorInstance.Data;
    *(undefined8 *)(pFVar2 + (longlong)iVar6 * 8) = 0;
    pFVar3 = param_3->Reference;
    *(FD3D12SyncPoint **)(pFVar2 + (longlong)iVar6 * 8) = pFVar3;
    if (pFVar3 != (FD3D12SyncPoint *)0x0) {
      LOCK();
      *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
      UNLOCK();
      return this;
    }
  }
  return this;
}

// ~FD3D12CopyScope @ 1459ac6e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12CopyScope::~FD3D12CopyScope(FD3D12CopyScope *this)

{
  longlong *plVar1;
  FD3D12SyncPoint *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  TArray<FD3D12Payload_*,TSizedDefaultAllocator<32>_> local_18;
  
  if (this->bSyncPointRetrieved == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSyncPointRetrieved",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                       ,0x23f,L"The copy sync point must be retrieved before the end of the scope.")
    ;
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FD3D12ContextCommon::SignalSyncPoint
            ((FD3D12ContextCommon *)this->Context,(this->SyncPoint).Reference);
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  FD3D12ContextCommon::Finalize((FD3D12ContextCommon *)this->Context,&local_18);
  FD3D12Device::ReleaseContext(this->Device,(FD3D12ContextCommon *)this->Context);
  FD3D12DynamicRHI::SubmitPayloads(FD3D12DynamicRHI::SingleD3DRHI,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  pFVar2 = (this->SyncPoint).Reference;
  if (pFVar2 != (FD3D12SyncPoint *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001459ac795. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar2->_padding_)(pFVar2,1);
      return;
    }
  }
  return;
}

// GetSyncPoint @ 1459c3600

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12SyncPoint * __thiscall FD3D12CopyScope::GetSyncPoint(FD3D12CopyScope *this)

{
  FD3D12SyncPoint *pFVar1;
  
  pFVar1 = (this->SyncPoint).Reference;
  this->bSyncPointRetrieved = true;
  return pFVar1;
}

