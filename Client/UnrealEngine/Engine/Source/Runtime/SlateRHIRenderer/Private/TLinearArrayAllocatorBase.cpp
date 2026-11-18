// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 6

// ResizeAllocation @ 146022ec0

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSlateCachedElementData_*>::
ResizeAllocation(ForElementType<FSlateCachedElementData_*> *this,int param_1,int param_2,
                ulong64 param_3)

{
  FSlateCachedElementData **_Src;
  FSlateCachedElementData **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FSlateCachedElementData **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FSlateCachedElementData **)0x0) &&
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

// ResizeAllocation @ 146022f60

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
ForElementType<FSlateCachedFastPathRenderingData_*>::ResizeAllocation
          (ForElementType<FSlateCachedFastPathRenderingData_*> *this,int param_1,int param_2,
          ulong64 param_3)

{
  FSlateCachedFastPathRenderingData **_Src;
  FSlateCachedFastPathRenderingData **_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FSlateCachedFastPathRenderingData **)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FSlateCachedFastPathRenderingData **)0x0) &&
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

// ResizeAllocation @ 146023130

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRenderThreadUpdateContext>
::ResizeAllocation(ForElementType<FRenderThreadUpdateContext> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  FRenderThreadUpdateContext *_Src;
  FRenderThreadUpdateContext *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FRenderThreadUpdateContext *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FRenderThreadUpdateContext *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0x3c, _Size != 0)) {
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

// ResizeAllocation @ 1460231d0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSlateDrawWindowPassInputs>
::ResizeAllocation(ForElementType<FSlateDrawWindowPassInputs> *this,int param_1,int param_2,
                  ulong64 param_3)

{
  FSlateDrawWindowPassInputs *_Src;
  FSlateDrawWindowPassInputs *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if ((-1 < param_2) && (param_3 - 1 < 0x7fffffff)) {
    _Dst = (FSlateDrawWindowPassInputs *)0x0;
    uVar1 = (longlong)param_2 * param_3;
    _Src = this->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (FSlateDrawWindowPassInputs *)0x0) &&
         (_Size = (ulonglong)*(uint *)&_Src[-1].field_0x6c, _Size != 0)) {
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

// ResizeAllocation @ 146023430

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
ForElementType<`FSlateRHIRenderer::DrawWindows_RenderThread'::__l2::FWindowPresentCommand>::
ResizeAllocation(void *this,int param_1,int param_2,ulong64 param_3)

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

// ResizeAllocation @ 1460234d0

void __thiscall
TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::
ForElementType<`FSlateRHIRenderer::DrawWindows_Private'::__l2::FWindowToRender>::ResizeAllocation
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

