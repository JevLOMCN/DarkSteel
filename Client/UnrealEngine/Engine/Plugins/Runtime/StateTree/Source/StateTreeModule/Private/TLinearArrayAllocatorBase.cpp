// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 8

// ResizeAllocation @ 14d506b30

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<unsigned_short>::
ResizeAllocation(ForElementType<unsigned_short> *this,int param_1,int param_2,ulong64 param_3)

{
  ushort *_Src;
  ushort *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (ushort *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,1>::Malloc(uVar1,2);
      if ((_Src != (ushort *)0x0) && (_Size = (ulonglong)*(uint *)(_Src + -2), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FDefaultBlockAllocationTag,1>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14d506c80

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FInstancedStruct_*>::
ResizeAllocation(ForElementType<FInstancedStruct_*> *this,int param_1,int param_2,ulong64 param_3)

{
  FInstancedStruct **_Src;
  FInstancedStruct **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FInstancedStruct **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,1>::Malloc(uVar1,8);
      if ((_Src != (FInstancedStruct **)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)_Src + -4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FDefaultBlockAllocationTag,1>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14d506d20

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::
ForElementType<TTuple<unsigned_short,float>_>::ResizeAllocation
          (ForElementType<TTuple<unsigned_short,float>_> *this,int param_1,int param_2,
          ulong64 param_3)

{
  TTuple<unsigned_short,float> *_Src;
  TTuple<unsigned_short,float> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (TTuple<unsigned_short,float> *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,1>::Malloc(uVar1,4);
      if ((_Src != (TTuple<unsigned_short,float> *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0x4, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FDefaultBlockAllocationTag,1>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14d506f00

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<UE::StateTree::FActiveState>
::ResizeAllocation(ForElementType<UE::StateTree::FActiveState> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  FActiveState *_Src;
  FActiveState *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FActiveState *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,1>::Malloc(uVar1,4);
      if ((_Src != (FActiveState *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].StateHandle, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FDefaultBlockAllocationTag,1>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14d507050

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FCompactStateTreeParameters>
::ResizeAllocation(ForElementType<FCompactStateTreeParameters> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  FCompactStateTreeParameters *_Src;
  FCompactStateTreeParameters *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FCompactStateTreeParameters *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,1>::Malloc(uVar1,8);
      if ((_Src != (FCompactStateTreeParameters *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].Parameters.Value.StructMemory + 4),
         _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FDefaultBlockAllocationTag,1>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14d5071a0

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FConstStructView>::
ResizeAllocation(ForElementType<FConstStructView> *this,int param_1,int param_2,ulong64 param_3)

{
  FConstStructView *_Src;
  FConstStructView *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FConstStructView *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,1>::Malloc(uVar1,8);
      if ((_Src != (FConstStructView *)0x0) &&
         (_Size = (ulonglong)*(uint *)((longlong)&_Src[-1].StructMemory + 4), _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FDefaultBlockAllocationTag,1>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14d5073f0

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::
ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext>::ResizeAllocation
          (ForElementType<UE::StateTree::ExecutionContext::FStateHandleContext> *this,int param_1,
          int param_2,ulong64 param_3)

{
  FStateHandleContext *_Src;
  FStateHandleContext *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FStateHandleContext *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,1>::Malloc(uVar1,8);
      if ((_Src != (FStateHandleContext *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0xc, _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FDefaultBlockAllocationTag,1>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

// ResizeAllocation @ 14d5075d0

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,1>::ForElementType<FStateTreeSharedEvent>::
ResizeAllocation(ForElementType<FStateTreeSharedEvent> *this,int param_1,int param_2,ulong64 param_3
                )

{
  FStateTreeSharedEvent *_Src;
  FStateTreeSharedEvent *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FStateTreeSharedEvent *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,1>::Malloc(uVar1,8);
      if ((_Src != (FStateTreeSharedEvent *)0x0) &&
         (_Size = (ulonglong)
                  *(uint *)((longlong)&_Src[-1].Event.SharedReferenceCount.ReferenceController + 4),
         _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FDefaultBlockAllocationTag,1>::Free(_Src);
    this->Data = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(param_2,param_3);
}

