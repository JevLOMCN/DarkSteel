// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// operator[] @ 1424edda0

FWidgetAndPointer * __thiscall
TArrayView<FWidgetAndPointer,int>::operator[](TArrayView<FWidgetAndPointer,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWidgetAndPointer *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWidgetAndPointer *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1425c2fd0

FPrerequisiteSort * __thiscall
TArrayView<`FSlateAttributeDescriptor::FInitializer::~FInitializer'::__l2::FPrerequisiteSort,int>::
operator[](void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPrerequisiteSort *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)((longlong)this + 8)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPrerequisiteSort *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPrerequisiteSort *)(*(longlong *)this + (longlong)param_1 * 0xc);
}

