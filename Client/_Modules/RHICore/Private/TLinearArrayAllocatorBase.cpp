// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 2

// ResizeAllocation @ 1446e3750

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransientHeap_*>::
ResizeAllocation(ForElementType<FRHITransientHeap_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FRHITransientHeap **_Src;
  FRHITransientHeap **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FRHITransientHeap **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FRHITransientHeap **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 1446e37f0

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransientPagePool_*>::
ResizeAllocation(ForElementType<FRHITransientPagePool_*> *this,int param_1,int param_2,
                ulong64 param_3)

{
  FRHITransientPagePool **_Src;
  FRHITransientPagePool **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FRHITransientPagePool **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FRHITransientPagePool **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

