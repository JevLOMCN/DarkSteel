// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 5

// ResizeAllocation @ 1424506d0

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
ForElementType<FSlateInvalidationWidgetHeapElement_*>::ResizeAllocation
          (ForElementType<FSlateInvalidationWidgetHeapElement_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FSlateInvalidationWidgetHeapElement **_Src;
  FSlateInvalidationWidgetHeapElement **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FSlateInvalidationWidgetHeapElement **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FSlateInvalidationWidgetHeapElement **)0x0) &&
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

// ResizeAllocation @ 142450770

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
ForElementType<`VerifyHittest'::__l2::FHittestWidgetSortData>::ResizeAllocation
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

// ResizeAllocation @ 1424a6220

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
ForElementType<TTuple<SWidget_*,FSlateInvalidationWidgetIndex>_>::ResizeAllocation
          (ForElementType<TTuple<SWidget_*,FSlateInvalidationWidgetIndex>_> *this,int param_1,
          int param_2,ulong64 param_3)

{
  TTuple<SWidget_*,FSlateInvalidationWidgetIndex> *_Src;
  TTuple<SWidget_*,FSlateInvalidationWidgetIndex> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TTuple<SWidget_*,FSlateInvalidationWidgetIndex> *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (TTuple<SWidget_*,FSlateInvalidationWidgetIndex> *)0x0) &&
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

// ResizeAllocation @ 14251d7a0

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TTuple<int,int>_>::
ResizeAllocation(ForElementType<TTuple<int,int>_> *this,int param_1,int param_2,ulong64 param_3)

{
  TTuple<int,int> *_Src;
  TTuple<int,int> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TTuple<int,int> *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (TTuple<int,int> *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0x4, _Size != 0)) {
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

// ResizeAllocation @ 1425f9b70

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FName>::ResizeAllocation
          (ForElementType<FName> *this,int param_1,int param_2,ulong64 param_3)

{
  FName *_Src;
  FName *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FName *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,4);
      if ((_Src != (FName *)0x0) && (_Size = (ulonglong)_Src[-1].Number, _Size != 0)) {
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

