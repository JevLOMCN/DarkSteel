// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// Last @ 1426c2be0

FArrangedWidget * __thiscall FArrangedChildren::Last(FArrangedChildren *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FArrangedWidget *pFVar5;
  uint uVar6;
  ForElementType<FArrangedWidget> FVar7;
  
  iVar1 = (this->Array).ArrayNum;
  uVar6 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar1) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FArrangedWidget *)(*pcVar2)();
      return pFVar5;
    }
  }
  FVar7 = (this->Array).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<FArrangedWidget>)0x0) {
    FVar7 = (ForElementType<FArrangedWidget>)&this->Array;
  }
  return (FArrangedWidget *)((longlong)FVar7 + (longlong)((this->Array).ArrayNum + -1) * 0x48);
}

// FArrangedChildren @ 1426faee0

FArrangedChildren * __thiscall
FArrangedChildren::FArrangedChildren(FArrangedChildren *this,FArrangedChildren *param_1)

{
  ForElementType<FArrangedWidget> FVar1;
  
  (this->VisibilityFilter).Value.Value = (param_1->VisibilityFilter).Value.Value;
  (this->Array).AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  if ((param_1->Array).AllocatorInstance.SecondaryData == (ForElementType<FArrangedWidget>)0x0) {
    memmove(&this->Array,&param_1->Array,0x120);
  }
  FVar1 = (this->Array).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->Array).AllocatorInstance.SecondaryData = (param_1->Array).AllocatorInstance.SecondaryData;
  (param_1->Array).AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  (this->Array).ArrayNum = (param_1->Array).ArrayNum;
  (this->Array).ArrayMax = (param_1->Array).ArrayMax;
  (param_1->Array).ArrayNum = 0;
  (param_1->Array).ArrayMax = 4;
  this->bAllow3DWidgets = param_1->bAllow3DWidgets;
  return this;
}

// Remove @ 142831f60

void __thiscall FArrangedChildren::Remove(FArrangedChildren *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 + param_2 <= (this->Array).ArrayNum) {
    uVar3 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 != 0) {
    TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::RemoveAtImpl
              (&this->Array,param_1,param_2);
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
              (0x48,8,&(this->Array).AllocatorInstance,(this->Array).ArrayNum,
               &(this->Array).ArrayMax);
  }
  return;
}

