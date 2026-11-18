// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// ResizeAllocation @ 145cbe6a0

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
ForElementType<`FRayTracingPipelineCache::Trim'::__l2::FEntry>::ResizeAllocation
          (void *this,int param_1,int param_2,ulong64 param_3)

{
  void *_Src;
  void *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (void *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = *(void **)this;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (void *)0x0) && (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0))
      {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(_Src);
    *(void **)this = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

