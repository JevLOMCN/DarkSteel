// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// Add @ 14225dc00

void __thiscall
FObjectInitializer::FSubobjectsToInit::Add
          (FSubobjectsToInit *this,UObject *param_1,UObject *param_2)

{
  int *piVar1;
  ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit> FVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar6 = (this->SubobjectInits).ArrayNum;
  uVar8 = 0;
  if (0 < iVar6) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar6) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar2 = (this->SubobjectInits).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)this;
      if (FVar2 != (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)0x0) {
        FVar7 = FVar2;
      }
      if ((*(UObject **)(lVar9 + (longlong)FVar7) == param_1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("SubobjectInits[Index].Subobject != Subobject",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectGlobals.h"
                             ,0x688,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = (this->SubobjectInits).ArrayNum;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar8 < iVar6);
  }
  piVar1 = &(this->SubobjectInits).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>_>
                      (0x810,(ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>
                              *)this,piVar1);
  }
  (this->SubobjectInits).ArrayNum = iVar6 + 1;
  FVar2 = (this->SubobjectInits).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)0x0) {
    this = (FSubobjectsToInit *)FVar2;
  }
  *(UObject **)((longlong)this + (longlong)iVar6 * 0x10) = param_1;
  *(UObject **)((uchar *)((longlong)this + 8) + (longlong)iVar6 * 0x10) = param_2;
  return;
}

