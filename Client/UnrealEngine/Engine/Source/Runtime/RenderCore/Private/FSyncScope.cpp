// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// FSyncScope @ 145def5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSyncScope * __thiscall
UE::RenderCommandPipe::FSyncScope::FSyncScope
          (FSyncScope *this,TArrayView<FRenderCommandPipe_*_const,int> *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  FLowLevelMemTracker *pFVar4;
  FPageAllocator *pFVar5;
  uint *puVar6;
  int *piVar7;
  undefined1 auStack_78 [32];
  TArrayView<FRenderCommandPipe_*_const,int> local_48;
  TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_48.DataPtr = param_1->DataPtr;
  local_48.ArrayNum = param_1->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  (this->PipeBits).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  (this->PipeBits).NumBits = 0;
  (this->PipeBits).MaxBits = 0x20;
  FRenderCommandPipeRegistry::StopRecording(&GRenderCommandPipeRegistry,&local_38,&local_48);
  TMulticastDelegate<void___cdecl(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&StopRecordingDelegate,&local_38);
  if (&this->PipeBits != &local_38) {
    if (local_38.AllocatorInstance.SecondaryData.Data == (uint *)0x0) {
      *&(this->PipeBits).AllocatorInstance.InlineData = local_38.AllocatorInstance.InlineData;
    }
    puVar6 = (this->PipeBits).AllocatorInstance.SecondaryData.Data;
    if (puVar6 != (uint *)0x0) {
      puVar6 = puVar6 + -2;
      MemoryTrace_Free((ulong64)puVar6,0,0);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        pFVar4 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          pFVar4 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(pFVar4,Default,puVar6,FMalloc,true);
      }
      piVar7 = (int *)((longlong)puVar6 - (ulonglong)*puVar6);
      LOCK();
      iVar1 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        lVar2 = *(longlong *)(piVar7 + 0x10);
        MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar7,0,0);
        if (lVar2 - (longlong)piVar7 == 0x10000) {
          pFVar5 = FPageAllocator::Get();
          FPageAllocator::Free(pFVar5,piVar7);
        }
        else {
          (**(code **)((longlong)*UE::Private::GMalloc + 0x48))();
        }
      }
    }
    (this->PipeBits).AllocatorInstance.SecondaryData.Data =
         local_38.AllocatorInstance.SecondaryData.Data;
    (this->PipeBits).NumBits = local_38.NumBits;
    (this->PipeBits).MaxBits = local_38.MaxBits;
    local_38.NumBits = 0;
    local_38.MaxBits = 0;
    local_38.AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  }
  if (local_38.AllocatorInstance.SecondaryData.Data != (uint *)0x0) {
    puVar6 = local_38.AllocatorInstance.SecondaryData.Data + -2;
    MemoryTrace_Free((ulong64)puVar6,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      pFVar4 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        pFVar4 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(pFVar4,Default,puVar6,FMalloc,true);
    }
    piVar7 = (int *)((longlong)puVar6 - (ulonglong)*puVar6);
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      lVar2 = *(longlong *)(piVar7 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar7,0,0);
      if (lVar2 - (longlong)piVar7 == 0x10000) {
        pFVar5 = FPageAllocator::Get();
        FPageAllocator::Free(pFVar5,piVar7);
      }
      else {
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar7);
      }
    }
  }
  bVar3 = HasBitsSet(&this->PipeBits);
  if ((bVar3) && (-1 < RenderCommandsChannel->Enabled)) {
    FMiscTrace::OutputBeginRegion(L"Render Command Pipe Synced",(wchar_t *)0x0);
  }
  return this;
}

// FSyncScope @ 145def840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSyncScope * __thiscall UE::RenderCommandPipe::FSyncScope::FSyncScope(FSyncScope *this)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  FLowLevelMemTracker *pFVar4;
  FPageAllocator *pFVar5;
  uint *puVar6;
  int *piVar7;
  undefined1 auStack_68 [32];
  TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_68;
  (this->PipeBits).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  (this->PipeBits).NumBits = 0;
  (this->PipeBits).MaxBits = 0x20;
  FRenderCommandPipeRegistry::StopRecording(&GRenderCommandPipeRegistry,&local_38);
  TMulticastDelegate<void___cdecl(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&StopRecordingDelegate,&local_38);
  if (&this->PipeBits != &local_38) {
    if (local_38.AllocatorInstance.SecondaryData.Data == (uint *)0x0) {
      *&(this->PipeBits).AllocatorInstance.InlineData = local_38.AllocatorInstance.InlineData;
    }
    puVar6 = (this->PipeBits).AllocatorInstance.SecondaryData.Data;
    if (puVar6 != (uint *)0x0) {
      puVar6 = puVar6 + -2;
      MemoryTrace_Free((ulong64)puVar6,0,0);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        pFVar4 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          pFVar4 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(pFVar4,Default,puVar6,FMalloc,true);
      }
      piVar7 = (int *)((longlong)puVar6 - (ulonglong)*puVar6);
      LOCK();
      iVar1 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        lVar2 = *(longlong *)(piVar7 + 0x10);
        MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar7,0,0);
        if (lVar2 - (longlong)piVar7 == 0x10000) {
          pFVar5 = FPageAllocator::Get();
          FPageAllocator::Free(pFVar5,piVar7);
        }
        else {
          (**(code **)((longlong)*UE::Private::GMalloc + 0x48))();
        }
      }
    }
    (this->PipeBits).AllocatorInstance.SecondaryData.Data =
         local_38.AllocatorInstance.SecondaryData.Data;
    (this->PipeBits).NumBits = local_38.NumBits;
    (this->PipeBits).MaxBits = local_38.MaxBits;
    local_38.NumBits = 0;
    local_38.MaxBits = 0;
    local_38.AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  }
  if (local_38.AllocatorInstance.SecondaryData.Data != (uint *)0x0) {
    puVar6 = local_38.AllocatorInstance.SecondaryData.Data + -2;
    MemoryTrace_Free((ulong64)puVar6,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      pFVar4 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        pFVar4 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(pFVar4,Default,puVar6,FMalloc,true);
    }
    piVar7 = (int *)((longlong)puVar6 - (ulonglong)*puVar6);
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      lVar2 = *(longlong *)(piVar7 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar7,0,0);
      if (lVar2 - (longlong)piVar7 == 0x10000) {
        pFVar5 = FPageAllocator::Get();
        FPageAllocator::Free(pFVar5,piVar7);
      }
      else {
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar7);
      }
    }
  }
  bVar3 = HasBitsSet(&this->PipeBits);
  if ((bVar3) && (-1 < RenderCommandsChannel->Enabled)) {
    FMiscTrace::OutputBeginRegion(L"Render Command Pipe Synced",(wchar_t *)0x0);
  }
  return this;
}

// ~FSyncScope @ 145df2030

void __thiscall UE::RenderCommandPipe::FSyncScope::~FSyncScope(FSyncScope *this)

{
  uint *puVar1;
  bool bVar2;
  
  bVar2 = HasBitsSet(&this->PipeBits);
  if ((bVar2) && (-1 < RenderCommandsChannel->Enabled)) {
    FMiscTrace::OutputEndRegion(L"Render Command Pipe Synced");
  }
  FRenderCommandPipeRegistry::StartRecording(&GRenderCommandPipeRegistry,&this->PipeBits);
  puVar1 = (this->PipeBits).AllocatorInstance.SecondaryData.Data;
  if (puVar1 != (uint *)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(puVar1);
    return;
  }
  return;
}

