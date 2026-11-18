// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// ResizeAllocation @ 1417f6030

void __thiscall
TLinearArrayAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>::
ForElementType<unsigned_char>::ResizeAllocation
          (ForElementType<unsigned_char> *this,int param_1,int param_2,ulong64 param_3)

{
  uchar *_Src;
  uchar *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (uchar *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>::Malloc
                       (uVar1,1);
      if ((_Src != (uchar *)0x0) && (_Size = (ulonglong)*(uint *)(_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

