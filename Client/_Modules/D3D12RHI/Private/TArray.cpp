// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 38

// Append<TRefCountPtr<FD3D12SyncPoint>,TSizedDefaultAllocator<32>_> @ 1459a1500

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
TArray<TRefCountPtr<FD3D12SyncPoint>,TSizedDefaultAllocator<32>_>::
Append<TRefCountPtr<FD3D12SyncPoint>,TSizedDefaultAllocator<32>_>
          (TArray<TRefCountPtr<FD3D12SyncPoint>,TSizedDefaultAllocator<32>_> *this,
          TArray<TRefCountPtr<FD3D12SyncPoint>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    ConstructItems<TRefCountPtr<FD3D12SyncPoint>,TRefCountPtr<FD3D12SyncPoint>,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 8,
               (TRefCountPtr<FD3D12SyncPoint> *)(param_1->AllocatorInstance).Data,iVar1);
  }
  return;
}

// ~TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_> @ 1459aaf40

void __thiscall
TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_>::
~TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_>
          (TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FD3D12UnorderedAccessView_*,TSizedDefaultAllocator<32>_> @ 1459aaf60

void __thiscall
TArray<FD3D12UnorderedAccessView_*,TSizedDefaultAllocator<32>_>::
~TArray<FD3D12UnorderedAccessView_*,TSizedDefaultAllocator<32>_>
          (TArray<FD3D12UnorderedAccessView_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// Pop @ 1459c9110

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FGpuHeapData * __thiscall
TArray<FD3D12BindlessResourceManager::FGpuHeapData,TSizedDefaultAllocator<32>_>::Pop
          (TArray<FD3D12BindlessResourceManager::FGpuHeapData,TSizedDefaultAllocator<32>_> *this,
          FGpuHeapData *__return_storage_ptr__,EAllowShrinking param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  undefined8 *puVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FGpuHeapData *pFVar10;
  longlong lVar11;
  
  if (this->ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FGpuHeapData *)(*pcVar7)();
      return pFVar10;
    }
  }
  lVar11 = (longlong)this->ArrayNum;
  pFVar3 = (this->AllocatorInstance).Data;
  (__return_storage_ptr__->GpuHeap).Reference = (FD3D12DescriptorHeap *)0x0;
  (__return_storage_ptr__->GpuHeap).Reference =
       *(FD3D12DescriptorHeap **)(pFVar3 + lVar11 * 0x28 + -0x28);
  *(undefined8 *)(pFVar3 + lVar11 * 0x28 + -0x28) = 0;
  (__return_storage_ptr__->UpdatedHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UpdatedHandles).AllocatorInstance.Data =
       *(FScriptContainerElement **)(pFVar3 + lVar11 * 0x28 + -0x20);
  *(undefined8 *)(pFVar3 + lVar11 * 0x28 + -0x20) = 0;
  (__return_storage_ptr__->UpdatedHandles).ArrayNum = *(int *)(pFVar3 + lVar11 * 0x28 + -0x18);
  (__return_storage_ptr__->UpdatedHandles).ArrayMax = *(int *)(pFVar3 + lVar11 * 0x28 + -0x14);
  *(undefined8 *)(pFVar3 + lVar11 * 0x28 + -0x18) = 0;
  __return_storage_ptr__->bInUse = (bool)pFVar3[lVar11 * 0x28 + -0x10];
  __return_storage_ptr__->LastUsedGarbageCollectCycle = *(ulong64 *)(pFVar3 + lVar11 * 0x28 + -8);
  iVar9 = this->ArrayNum;
  pFVar4 = (this->AllocatorInstance).Data;
  pFVar3 = pFVar4 + (longlong)iVar9 * 0x28;
  pvVar5 = *(void **)(pFVar4 + (longlong)iVar9 * 0x28 + -0x20);
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  puVar6 = *(undefined8 **)(pFVar3 + -0x28);
  if (puVar6 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar6 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
  iVar9 = this->ArrayNum - iVar9;
  if (iVar9 != 0) {
    memmove(pFVar3 + -0x28,pFVar3,(longlong)iVar9 * 0x28);
  }
  iVar9 = this->ArrayNum + -1;
  this->ArrayNum = iVar9;
  if (param_1 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,&this->AllocatorInstance,iVar9,&this->ArrayMax);
  }
  return __return_storage_ptr__;
}

// RemoveAt @ 1459d57c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FD3D12FastAllocatorPage_*,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FD3D12FastAllocatorPage_*,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar4 << 3);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 1459d5890

void __thiscall
TArray<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<FD3D12SegListAllocator::FRetiredBlock,TSizedDefaultAllocator<32>_>,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1459d5910

void __thiscall
TArray<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *_Dst;
  
  _Dst = (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x50);
  DestructItems<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x50);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 1459d5990

void __thiscall
TArray<FD3D12BindlessResourceManager::FGpuHeapData,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FD3D12BindlessResourceManager::FGpuHeapData,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  int iVar4;
  
  pFVar2 = (this->AllocatorInstance).Data;
  if (*(void **)(pFVar2 + (longlong)param_1 * 0x28 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar2 + (longlong)param_1 * 0x28 + 8));
  }
  puVar3 = *(undefined8 **)(pFVar2 + (longlong)param_1 * 0x28);
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  iVar4 = ~param_1 + this->ArrayNum;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove(pFVar2 + (longlong)param_1 * 0x28,pFVar2 + (longlong)(this->ArrayNum - iVar4) * 0x28,
            (longlong)iVar4 * 0x28);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 1459d5a50

void __thiscall
TArray<TRefCountPtr<FD3D12SegHeap>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TRefCountPtr<FD3D12SegHeap>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  int iVar4;
  
  pFVar2 = (this->AllocatorInstance).Data;
  puVar3 = *(undefined8 **)(pFVar2 + (longlong)param_1 * 8);
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  iVar4 = ~param_1 + this->ArrayNum;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove(pFVar2 + (longlong)param_1 * 8,pFVar2 + (longlong)(this->ArrayNum - iVar4) * 8,
            (longlong)iVar4 << 3);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// operator=<FRHITransientAliasingInfo_const_,int> @ 1459e1340

TArray<FRHITransientAliasingInfo,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
* __thiscall
TArray<FRHITransientAliasingInfo,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
::operator=<FRHITransientAliasingInfo_const_,int>
          (TArray<FRHITransientAliasingInfo,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
           *this,TArrayView<FRHITransientAliasingInfo_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FRHITransientAliasingInfo *_Src;
  TArray<FRHITransientAliasingInfo,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar3;
  TArray<FRHITransientAliasingInfo,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *_Dst;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 4;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<FRHITransientAliasingInfo>_>
            (0x20,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  pTVar3 = (TArray<FRHITransientAliasingInfo,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
            *)(this->AllocatorInstance).SecondaryData.Data;
  _Dst = this;
  if (pTVar3 != (TArray<FRHITransientAliasingInfo,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                 *)0x0) {
    _Dst = pTVar3;
  }
  if (iVar2 != 0) {
    memcpy(_Dst,_Src,(longlong)iVar2 << 5);
  }
  return this;
}

// operator=<FRHITransitionInfo_const_,int> @ 1459e13f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TArray<FRHITransitionInfo,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
* __thiscall
TArray<FRHITransitionInfo,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
::operator=<FRHITransitionInfo_const_,int>
          (TArray<FRHITransitionInfo,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
           *this,TArrayView<FRHITransitionInfo_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FRHITransitionInfo *pFVar3;
  TArray<FRHITransitionInfo,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar4;
  TArray<FRHITransitionInfo,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar5;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pFVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 4;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<FRHITransitionInfo>_>
            (0x30,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  pTVar4 = (TArray<FRHITransitionInfo,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
            *)(this->AllocatorInstance).SecondaryData.Data;
  pTVar5 = this;
  if (pTVar4 != (TArray<FRHITransitionInfo,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                 *)0x0) {
    pTVar5 = pTVar4;
  }
  ConstructItems<FRHITransitionInfo,FRHITransitionInfo,int>(pTVar5,pFVar3,iVar2);
  return this;
}

// TArray<FD3D12Resource_const_*,TSizedDefaultAllocator<32>_> @ 1459ecee0

TArray<FD3D12Resource_const_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FD3D12Resource_const_*,TSizedDefaultAllocator<32>_>::
TArray<FD3D12Resource_const_*,TSizedDefaultAllocator<32>_>
          (TArray<FD3D12Resource_const_*,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// TArray<FD3D12HitGroupSystemParameters,TSizedDefaultAllocator<32>_> @ 1459ecf00

TArray<FD3D12HitGroupSystemParameters,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FD3D12HitGroupSystemParameters,TSizedDefaultAllocator<32>_>::
TArray<FD3D12HitGroupSystemParameters,TSizedDefaultAllocator<32>_>
          (TArray<FD3D12HitGroupSystemParameters,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// TArray<TSharedPtr<FD3D12ShaderResourceView,1>,TSizedDefaultAllocator<32>_> @ 1459ecf40

TArray<TSharedPtr<FD3D12ShaderResourceView,1>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TSharedPtr<FD3D12ShaderResourceView,1>,TSizedDefaultAllocator<32>_>::
TArray<TSharedPtr<FD3D12ShaderResourceView,1>,TSizedDefaultAllocator<32>_>
          (TArray<TSharedPtr<FD3D12ShaderResourceView,1>,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<FD3D12Resource_const_*,TSizedDefaultAllocator<32>_> @ 1459f6060

void __thiscall
TArray<FD3D12Resource_const_*,TSizedDefaultAllocator<32>_>::
~TArray<FD3D12Resource_const_*,TSizedDefaultAllocator<32>_>
          (TArray<FD3D12Resource_const_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FD3D12HitGroupSystemParameters,TSizedDefaultAllocator<32>_> @ 1459f6080

void __thiscall
TArray<FD3D12HitGroupSystemParameters,TSizedDefaultAllocator<32>_>::
~TArray<FD3D12HitGroupSystemParameters,TSizedDefaultAllocator<32>_>
          (TArray<FD3D12HitGroupSystemParameters,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<TSharedPtr<FD3D12ShaderResourceView,1>,TSizedDefaultAllocator<32>_> @ 1459f60c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
TArray<TSharedPtr<FD3D12ShaderResourceView,1>,TSizedDefaultAllocator<32>_>::
~TArray<TSharedPtr<FD3D12ShaderResourceView,1>,TSizedDefaultAllocator<32>_>
          (TArray<TSharedPtr<FD3D12ShaderResourceView,1>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<FD3D12ShaderResourceView,1>,int>
            ((TSharedPtr<FD3D12ShaderResourceView,1> *)(this->AllocatorInstance).Data,this->ArrayNum
            );
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// RemoveAtImpl @ 145a2d230

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
TArray<FD3D12RayTracingShaderBindingTableInternal::FRecordData,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<FD3D12RayTracingShaderBindingTableInternal::FRecordData,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  FRecordData *_Dst;
  
  _Dst = (FRecordData *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x78);
  DestructItems<FD3D12RayTracingShaderBindingTableInternal::FRecordData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x78);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 145a2d2a0

void __thiscall
TArray<FD3D12ExplicitDescriptorCache::FWorkerThreadData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FD3D12ExplicitDescriptorCache::FWorkerThreadData,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FWorkerThreadData *_Dst;
  
  _Dst = (FWorkerThreadData *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x80);
  DestructItems<FD3D12ExplicitDescriptorCache::FWorkerThreadData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 7);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 145a2d320

void __thiscall
TArray<FString,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>::RemoveAtImpl
          (TArray<FString,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,int param_2)

{
  ForElementType<FString> FVar1;
  int iVar2;
  FString *_Dst;
  ForElementType<FString> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FString>)this;
  if (FVar1 != (ForElementType<FString>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (FString *)((longlong)param_1 * 0x10 + (longlong)FVar3);
  DestructItems<FString,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 145a301c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FString,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<FString,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FString> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
                      (0x10,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar3 = (this->AllocatorInstance).SecondaryData;
    if (FVar3 != (ForElementType<FString>)0x0) {
      this = (TArray<FString,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_> *)FVar3;
    }
    memset((void *)((longlong)iVar6 * 0x10 + (longlong)this),0,(longlong)(param_1 - iVar2) << 4);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar7 = iVar2 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((uVar7 != 0) && (RemoveAtImpl(this,param_1,uVar7), param_2 == Default)) {
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
                  (0x10,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNumUninitialized @ 145a30300

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<D3D12_CPU_DESCRIPTOR_HANDLE,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<D3D12_CPU_DESCRIPTOR_HANDLE,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 145a30430

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<D3D12_RAYTRACING_GEOMETRY_DESC,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
SetNumUninitialized(TArray<D3D12_RAYTRACING_GEOMETRY_DESC,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                    *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC> FVar6;
  uint uVar7;
  void *_Dst;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>_>
              (0x38,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>)this;
        if (FVar2 != (ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>)0x0) {
          FVar6 = FVar2;
        }
        _Dst = (void *)((longlong)param_1 * 0x38 + (longlong)FVar6);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar7 * 0x38 + (longlong)_Dst),(longlong)iVar5 * 0x38
                 );
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_RAYTRACING_GEOMETRY_DESC>_>
                    (0x38,8,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 145a30570

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FD3D12ShaderIdentifier,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<FD3D12ShaderIdentifier,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 0x20,(longlong)iVar4 << 5);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 145a306a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_char,TMemoryImageAllocator<64>_>::SetNumZeroed
          (TArray<unsigned_char,TMemoryImageAllocator<64>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<64>::ForAnyElementType>
                      (1,1,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar6 = this->AllocatorInstance;
    if (((ulonglong)FVar6 & 1) != 0) {
      FVar6 = (ForAnyElementType)
              ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
    }
    memset((void *)((longlong)iVar4 + (longlong)FVar6),0,(longlong)(param_1 - iVar5));
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar7 != 0) {
        FVar6 = this->AllocatorInstance;
        if (((ulonglong)FVar6 & 1) != 0) {
          FVar6 = (ForAnyElementType)
                  ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
        }
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove((void *)((longlong)FVar6 + (longlong)param_1),
                  (void *)((longlong)(int)uVar7 + (longlong)FVar6 + (longlong)param_1),
                  (longlong)iVar5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<64>::ForAnyElementType>
                    (1,1,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// Append<TArrayView<FD3D12ResidencyHandle_*_const,int>_&> @ 145a38310

void __thiscall
TArray<FD3D12ResidencyHandle_*,TSizedDefaultAllocator<32>_>::
Append<TArrayView<FD3D12ResidencyHandle_*_const,int>_&>
          (TArray<FD3D12ResidencyHandle_*,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FD3D12ResidencyHandle_*_const,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (iVar1 == 0) {
    return;
  }
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data + (longlong)iVar4 * 8,param_1->DataPtr,(longlong)iVar1 << 3)
  ;
  return;
}

// Append<FD3D12QueryLocation,TSizedDefaultAllocator<32>_> @ 145a383b0

void __thiscall
TArray<FD3D12QueryLocation,TSizedDefaultAllocator<32>_>::
Append<FD3D12QueryLocation,TSizedDefaultAllocator<32>_>
          (TArray<FD3D12QueryLocation,TSizedDefaultAllocator<32>_> *this,
          TArray<FD3D12QueryLocation,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memmove((this->AllocatorInstance).Data + (longlong)iVar4 * 0x18,
            (param_1->AllocatorInstance).Data,(longlong)iVar1 * 0x18);
    param_1->ArrayNum = 0;
  }
  return;
}

// operator= @ 145a49070

TArray<D3D12_INPUT_ELEMENT_DESC,TFixedAllocator<17>_> * __thiscall
TArray<D3D12_INPUT_ELEMENT_DESC,TFixedAllocator<17>_>::operator=
          (TArray<D3D12_INPUT_ELEMENT_DESC,TFixedAllocator<17>_> *this,
          TArray<D3D12_INPUT_ELEMENT_DESC,TFixedAllocator<17>_> *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (this != param_1) {
    piVar1 = &this->ArrayMax;
    iVar2 = param_1->ArrayNum;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0x11;
      return this;
    }
    UE::Core::Private::
    ReallocForCopy<0,TFixedAllocator<17>::ForElementType<D3D12_INPUT_ELEMENT_DESC>_>
              (0x20,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    if (iVar2 != 0) {
      memcpy(this,param_1,(longlong)iVar2 << 5);
    }
  }
  return this;
}

// AddZeroed_GetRef @ 145a515d0

CD3DX12_ROOT_PARAMETER1 * __thiscall
TArray<CD3DX12_ROOT_PARAMETER1,TSizedDefaultAllocator<32>_>::AddZeroed_GetRef
          (TArray<CD3DX12_ROOT_PARAMETER1,TSizedDefaultAllocator<32>_> *this)

{
  int iVar1;
  CD3DX12_ROOT_PARAMETER1 *pCVar2;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == this->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar1 + 1;
  pCVar2 = (CD3DX12_ROOT_PARAMETER1 *)((this->AllocatorInstance).Data + (longlong)iVar1 * 0x20);
  *(undefined8 *)pCVar2 = 0;
  *(undefined8 *)&pCVar2->field_0x8 = 0;
  *(undefined8 *)&pCVar2->field_0x10 = 0;
  *(undefined8 *)&pCVar2->field_0x18 = 0;
  return pCVar2;
}

// RemoveAtImpl @ 145a7b370

void __thiscall
TArray<TSharedPtr<FD3D12RenderTargetView,1>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtImpl(TArray<TSharedPtr<FD3D12RenderTargetView,1>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *this,int param_1,int param_2)

{
  ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_> FVar1;
  int iVar2;
  TSharedPtr<FD3D12RenderTargetView,1> *_Dst;
  ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>)this;
  if (FVar1 != (ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (TSharedPtr<FD3D12RenderTargetView,1> *)((longlong)param_1 * 0x10 + (longlong)FVar3);
  DestructItems<TSharedPtr<FD3D12RenderTargetView,1>,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 145a7d970

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TSharedPtr<FD3D12RenderTargetView,1>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
::SetNum(TArray<TSharedPtr<FD3D12RenderTargetView,1>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
         *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>_>
                      (0x10,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar3 = (this->AllocatorInstance).SecondaryData;
    if (FVar3 != (ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>)0x0) {
      this = (TArray<TSharedPtr<FD3D12RenderTargetView,1>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              *)FVar3;
    }
    memset((void *)((longlong)iVar6 * 0x10 + (longlong)this),0,(longlong)(param_1 - iVar2) << 4);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar7 = iVar2 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((uVar7 != 0) && (RemoveAtImpl(this,param_1,uVar7), param_2 == Default)) {
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FD3D12RenderTargetView,1>_>_>
                  (0x10,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// operator=<FWorkGraphPipelineStateInitializer::FNameMap,int> @ 145a845b0

TArray<FWorkGraphPipelineStateInitializer::FNameMap,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FWorkGraphPipelineStateInitializer::FNameMap,TSizedDefaultAllocator<32>_>::
operator=<FWorkGraphPipelineStateInitializer::FNameMap,int>
          (TArray<FWorkGraphPipelineStateInitializer::FNameMap,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FWorkGraphPipelineStateInitializer::FNameMap,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FNameMap *pFVar3;
  
  DestructItems<FWorkGraphPipelineStateInitializer::FNameMap,int>
            ((FNameMap *)(this->AllocatorInstance).Data,this->ArrayNum);
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pFVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x28,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<FWorkGraphPipelineStateInitializer::FNameMap,FWorkGraphPipelineStateInitializer::FNameMap,int>
            ((this->AllocatorInstance).Data,pFVar3,iVar2);
  return this;
}

// AddUniqueImpl<FRHIBreadcrumbRange_const_&> @ 145a847f0

int __thiscall
TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FRHIBreadcrumbRange_const_&>
          (TArray<FRHIBreadcrumbRange,TSizedDefaultAllocator<32>_> *this,
          FRHIBreadcrumbRange *param_1)

{
  FScriptContainerElement *pFVar1;
  FRHIBreadcrumbRange *pFVar2;
  code *pcVar3;
  FRHIBreadcrumbNode *pFVar4;
  bool bVar5;
  int iVar6;
  FRHIBreadcrumbRange *pFVar7;
  
  pFVar2 = (FRHIBreadcrumbRange *)(this->AllocatorInstance).Data;
  if (pFVar2 != pFVar2 + this->ArrayNum) {
    pFVar7 = pFVar2;
    do {
      if ((pFVar7->First == param_1->First) && (pFVar7->Last == param_1->Last)) {
        iVar6 = (int)((longlong)pFVar7 - (longlong)pFVar2 >> 4);
        if (iVar6 != -1) {
          return iVar6;
        }
        break;
      }
      pFVar7 = pFVar7 + 1;
    } while (pFVar7 != pFVar2 + this->ArrayNum);
  }
  if (((pFVar2 <= param_1) && (param_1 < pFVar2 + this->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  iVar6 = this->ArrayNum;
  if (iVar6 == this->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar6;
  }
  this->ArrayNum = iVar6 + 1;
  pFVar4 = param_1->Last;
  pFVar1 = (this->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(FRHIBreadcrumbNode **)pFVar1 = param_1->First;
  *(FRHIBreadcrumbNode **)(pFVar1 + 8) = pFVar4;
  return iVar6;
}

// AddUniqueImpl<FShaderCodeVendorExtension_const_&> @ 145a84910

int __thiscall
TArray<FShaderCodeVendorExtension,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<FShaderCodeVendorExtension_const_&>
          (TArray<FShaderCodeVendorExtension,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
           *this,FShaderCodeVendorExtension *param_1)

{
  ForElementType<FShaderCodeVendorExtension> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FShaderCodeVendorExtension> FVar5;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar5 = (ForElementType<FShaderCodeVendorExtension>)this;
    if (FVar1 != (ForElementType<FShaderCodeVendorExtension>)0x0) {
      FVar5 = FVar1;
    }
    if ((ulonglong)FVar5 <= param_1) {
      FVar5 = (ForElementType<FShaderCodeVendorExtension>)this;
      if (FVar1 != (ForElementType<FShaderCodeVendorExtension>)0x0) {
        FVar5 = FVar1;
      }
      if ((param_1 < (FShaderCodeVendorExtension *)
                     ((longlong)FVar5 + (longlong)this->ArrayMax * 0xc)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FShaderCodeVendorExtension>_>
                        (0x40c,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar4 + 1;
    FVar1 = (this->AllocatorInstance).SecondaryData;
    if (FVar1 != (ForElementType<FShaderCodeVendorExtension>)0x0) {
      this = (TArray<FShaderCodeVendorExtension,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
              *)FVar1;
    }
    *(undefined8 *)((longlong)this + (longlong)iVar4 * 0xc) = *(undefined8 *)param_1;
    *(undefined4 *)((uchar *)((longlong)this + 8) + (longlong)iVar4 * 0xc) =
         *(undefined4 *)&(param_1->Parameter).Size;
  }
  return iVar4;
}

// Find @ 145aa78e0

int __thiscall
TArray<FShaderCodeVendorExtension,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Find
          (TArray<FShaderCodeVendorExtension,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
           *this,FShaderCodeVendorExtension *param_1)

{
  ForElementType<FShaderCodeVendorExtension> FVar1;
  ForElementType<FShaderCodeVendorExtension> FVar2;
  ForElementType<FShaderCodeVendorExtension> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FShaderCodeVendorExtension>)this;
  if (FVar1 != (ForElementType<FShaderCodeVendorExtension>)0x0) {
    FVar3 = FVar1;
  }
  FVar1 = (ForElementType<FShaderCodeVendorExtension>)
          ((longlong)FVar3 + (longlong)this->ArrayNum * 0xc);
  if (FVar3 != FVar1) {
    FVar2 = FVar3;
    do {
      if ((((*(EGpuVendorId *)FVar2 == param_1->VendorId) &&
           (*(ushort *)((longlong)FVar2 + 4) == (param_1->Parameter).BufferIndex)) &&
          (*(ushort *)((longlong)FVar2 + 6) == (param_1->Parameter).BaseIndex)) &&
         (((*(ushort *)((longlong)FVar2 + 8) == (param_1->Parameter).Size &&
           (*(uchar *)((longlong)FVar2 + 10) == (param_1->Parameter).Type)) &&
          ((bool)*(uchar *)((longlong)FVar2 + 0xb) == (param_1->Parameter).bBound)))) {
        return (int)(((longlong)FVar2 - (longlong)FVar3) / 0xc);
      }
      FVar2 = (ForElementType<FShaderCodeVendorExtension>)((longlong)FVar2 + 0xc);
    } while (FVar2 != FVar1);
  }
  return -1;
}

// RemoveAtImpl @ 145ab61b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
TArray<FShaderBundleBinderOps,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
RemoveAtImpl(TArray<FShaderBundleBinderOps,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
             *this,int param_1,int param_2)

{
  ForElementType<FShaderBundleBinderOps> FVar1;
  int iVar2;
  FShaderBundleBinderOps *_Dst;
  ForElementType<FShaderBundleBinderOps> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FShaderBundleBinderOps>)this;
  if (FVar1 != (ForElementType<FShaderBundleBinderOps>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (FShaderBundleBinderOps *)((longlong)param_1 * 0x90 + (longlong)FVar3);
  DestructItems<FShaderBundleBinderOps,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 * 0x90);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 145ab6240

void __thiscall
TArray<TRefCountPtr<FRHIResource>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TRefCountPtr<FRHIResource>,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  DestructItems<TRefCountPtr<FRHIResource>,int>((TRefCountPtr<FRHIResource> *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 145ab8ae0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FShaderBundleBinderOps,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<FShaderBundleBinderOps,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FShaderBundleBinderOps> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FShaderBundleBinderOps>_>
                      (0x90,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar3 = (this->AllocatorInstance).SecondaryData;
    if (FVar3 != (ForElementType<FShaderBundleBinderOps>)0x0) {
      this = (TArray<FShaderBundleBinderOps,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)FVar3;
    }
    DefaultConstructItems<FShaderBundleBinderOps,int>
              ((void *)((longlong)iVar6 * 0x90 + (longlong)this),param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar7 = iVar2 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((uVar7 != 0) && (RemoveAtImpl(this,param_1,uVar7), param_2 == Default)) {
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FShaderBundleBinderOps>_>
                  (0x90,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

