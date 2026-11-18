// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 2

// ResizeAllocation @ 145fa1110

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<void_*>::ResizeAllocation
          (ForElementType<void_*> *this,int param_1,int param_2,ulong64 param_3)

{
  int iVar1;
  longlong lVar2;
  void **_Dst;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  ulonglong uVar3;
  void **ppvVar4;
  int *piVar5;
  ulonglong _Size;
  
  if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
  }
  uVar3 = (longlong)param_2 * param_3;
  ppvVar4 = this->Data;
  if (uVar3 == 0) {
    _Dst = (void **)0x0;
    if (ppvVar4 == (void **)0x0) goto LAB_145fa1228;
  }
  else {
    _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar3,8);
    if (ppvVar4 == (void **)0x0) goto LAB_145fa1228;
    _Size = (ulonglong)*(uint *)((longlong)ppvVar4 + -4);
    if (_Size != 0) {
      if (uVar3 < _Size) {
        _Size = uVar3;
      }
      memcpy(_Dst,ppvVar4,_Size);
    }
  }
  ppvVar4 = ppvVar4 + -1;
  MemoryTrace_Free((ulong64)ppvVar4,0,0);
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    this_00 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this_00 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::OnLowLevelFree(this_00,Default,ppvVar4,FMalloc,true);
  }
  piVar5 = (int *)((longlong)ppvVar4 - (ulonglong)*(uint *)ppvVar4);
  LOCK();
  iVar1 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar1 == 1) {
    lVar2 = *(longlong *)(piVar5 + 0x10);
    MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar5,0,0);
    if (lVar2 - (longlong)piVar5 == 0x10000) {
      this_01 = FPageAllocator::Get();
      FPageAllocator::Free(this_01,piVar5);
    }
    else {
      (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar5);
    }
  }
LAB_145fa1228:
  this->Data = _Dst;
  return;
}

// ResizeAllocation @ 145fa1380

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<FLandscapeBatchElementParams>::ResizeAllocation
          (ForElementType<FLandscapeBatchElementParams> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FLandscapeBatchElementParams *_Src;
  FLandscapeBatchElementParams *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FLandscapeBatchElementParams *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FLandscapeBatchElementParams *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0x2c, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

