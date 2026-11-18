// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicWind
// Functions: 1

// ResizeAllocation @ 14da534f0

void __thiscall
TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::
ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_>::ResizeAllocation
          (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_> *this,
          int param_1,int param_2,ulong64 param_3)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *_Src;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_> *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
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

