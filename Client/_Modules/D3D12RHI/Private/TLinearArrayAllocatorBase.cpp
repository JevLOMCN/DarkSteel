// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 3

// ResizeAllocation @ 145a2ef00

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransientAliasingInfo>::
ResizeAllocation(ForElementType<FRHITransientAliasingInfo> *this,int param_1,int param_2,
                ulong64 param_3)

{
  FRHITransientAliasingInfo *_Src;
  FRHITransientAliasingInfo *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FRHITransientAliasingInfo *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FRHITransientAliasingInfo *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0x1c, _Size != 0)) {
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

// ResizeAllocation @ 145a2efa0

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
ForElementType<FRHITransientAliasingOverlap>::ResizeAllocation
          (ForElementType<FRHITransientAliasingOverlap> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FRHITransientAliasingOverlap *_Src;
  FRHITransientAliasingOverlap *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FRHITransientAliasingOverlap *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FRHITransientAliasingOverlap *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0xc, _Size != 0)) {
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

// ResizeAllocation @ 145a2f0f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransitionInfo>::
ResizeAllocation(ForElementType<FRHITransitionInfo> *this,int param_1,int param_2,ulong64 param_3)

{
  FRHITransitionInfo *_Src;
  FRHITransitionInfo *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FRHITransitionInfo *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FRHITransitionInfo *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].CommitInfo.field_0xc, _Size != 0)) {
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

