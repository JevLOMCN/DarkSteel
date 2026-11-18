// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 2

// ResizeAllocation @ 146023270

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FSlateElementsBuffers>::ResizeAllocation
          (ForElementType<FSlateElementsBuffers> *this,int param_1,int param_2,ulong64 param_3)

{
  FSlateElementsBuffers *_Src;
  FRDGAllocator *this_00;
  FSlateElementsBuffers *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FSlateElementsBuffers *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

// ResizeAllocation @ 146023350

void __thiscall
TRDGArrayAllocator<0>::ForElementType<FSlateSceneView>::ResizeAllocation
          (ForElementType<FSlateSceneView> *this,int param_1,int param_2,ulong64 param_3)

{
  FSlateSceneView *_Src;
  FRDGAllocator *this_00;
  FSlateSceneView *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    _Src = this->Data;
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::RenderCore::Private::OnInvalidRDGAllocatorNum(param_2,param_3);
    }
    iVar2 = (int)param_3 * param_2;
    uVar1 = 8;
    if (0xf < iVar2) {
      uVar1 = 0x10;
    }
    this_00 = FRDGAllocator::GetTLS();
    uVar3 = 8;
    if (8 < uVar1) {
      uVar3 = uVar1;
    }
    _Dst = FMemStackBase::Alloc(&this_00->MemStack,(longlong)iVar2,(ulonglong)uVar3);
    this->Data = _Dst;
    if ((_Src != (FSlateSceneView *)0x0) && (param_1 != 0)) {
      if (param_2 < param_1) {
        param_1 = param_2;
      }
      memcpy(_Dst,_Src,(longlong)param_1 * param_3);
    }
  }
  return;
}

