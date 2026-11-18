// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// FStyle @ 142547820

FStyle * __thiscall FStarshipCoreStyle::FStyle::FStyle(FStyle *this,FName *param_1)

{
  float fVar1;
  float fVar2;
  atomic<int> aVar3;
  code *pcVar4;
  bool bVar5;
  FColor FVar6;
  TReferenceControllerBase<1> *pTVar7;
  FStyle *pFVar8;
  undefined4 extraout_var;
  atomic<int> aVar10;
  FString local_58 [5];
  byte *pbVar9;
  
  FSlateStyleSet::FSlateStyleSet((FSlateStyleSet *)this,param_1);
  this->_padding_ = (longlong)&___7FStyle_FStarshipCoreStyle__6B_;
  pTVar7 = ::operator_new(0x20);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    (this->SelectorColor_LinearRef).Object = (FLinearColor *)0x10;
    (this->SelectorColor_LinearRef).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFLinearColor___00_SharedPointerInternals__6B_;
    *(undefined4 *)&pTVar7[1]._padding_ = 0x3f3374bc;
    *(undefined4 *)((longlong)&pTVar7[1]._padding_ + 4) = 0x3e666666;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x3b449ba6;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x3f800000;
    (this->SelectorColor_LinearRef).Object = (FLinearColor *)(pTVar7 + 1);
    (this->SelectorColor_LinearRef).SharedReferenceCount.ReferenceController = pTVar7;
    if (pTVar7 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FStyle *)(*pcVar4)();
        return pFVar8;
      }
    }
  }
  ::FString::FString(local_58,"18A0FBFF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar9 = (byte *)CONCAT44(extraout_var,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar9[2]];
  fVar2 = FLinearColor::sRGBToLinearTable[pbVar9[1]];
  aVar3 = *(atomic<int> *)(FLinearColor::sRGBToLinearTable + *pbVar9);
  aVar10 = (atomic<int>)((float)pbVar9[3] * __real_3b808081);
  pTVar7 = ::operator_new(0x20);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    (this->SelectionColor_LinearRef).Object = (FLinearColor *)0x10;
    (this->SelectionColor_LinearRef).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFLinearColor___00_SharedPointerInternals__6B_;
    *(float *)&pTVar7[1]._padding_ = fVar1;
    *(float *)((longlong)&pTVar7[1]._padding_ + 4) = fVar2;
    pTVar7[1].SharedReferenceCount = aVar3;
    pTVar7[1].WeakReferenceCount = aVar10;
    (this->SelectionColor_LinearRef).Object = (FLinearColor *)(pTVar7 + 1);
    (this->SelectionColor_LinearRef).SharedReferenceCount.ReferenceController = pTVar7;
    if (pTVar7 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FStyle *)(*pcVar4)();
        return pFVar8;
      }
    }
  }
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  pTVar7 = ::operator_new(0x20);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    (this->SelectionColor_Inactive_LinearRef).Object = (FLinearColor *)0x10;
    (this->SelectionColor_Inactive_LinearRef).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFLinearColor___00_SharedPointerInternals__6B_;
    *(undefined4 *)&pTVar7[1]._padding_ = 0x3e800000;
    *(undefined4 *)((longlong)&pTVar7[1]._padding_ + 4) = 0x3e800000;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x3e800000;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x3f800000;
    (this->SelectionColor_Inactive_LinearRef).Object = (FLinearColor *)(pTVar7 + 1);
    (this->SelectionColor_Inactive_LinearRef).SharedReferenceCount.ReferenceController = pTVar7;
    if (pTVar7 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FStyle *)(*pcVar4)();
        return pFVar8;
      }
    }
  }
  pTVar7 = ::operator_new(0x20);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    (this->SelectionColor_Pressed_LinearRef).Object = (FLinearColor *)0x10;
    (this->SelectionColor_Pressed_LinearRef).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFLinearColor___00_SharedPointerInternals__6B_;
    *(undefined4 *)&pTVar7[1]._padding_ = 0x3f3374bc;
    *(undefined4 *)((longlong)&pTVar7[1]._padding_ + 4) = 0x3e666666;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x3b449ba6;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x3f800000;
    (this->SelectionColor_Pressed_LinearRef).Object = (FLinearColor *)(pTVar7 + 1);
    (this->SelectionColor_Pressed_LinearRef).SharedReferenceCount.ReferenceController = pTVar7;
    if (pTVar7 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FStyle *)(*pcVar4)();
        return pFVar8;
      }
    }
  }
  pTVar7 = ::operator_new(0x20);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    (this->HighlightColor_LinearRef).Object = (FLinearColor *)0x10;
    (this->HighlightColor_LinearRef).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFLinearColor___00_SharedPointerInternals__6B_;
    *(undefined4 *)&pTVar7[1]._padding_ = 0x3d8b4396;
    *(undefined4 *)((longlong)&pTVar7[1]._padding_ + 4) = 0x3d8b4396;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x3d8b4396;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x3f800000;
    (this->HighlightColor_LinearRef).Object = (FLinearColor *)(pTVar7 + 1);
    (this->HighlightColor_LinearRef).SharedReferenceCount.ReferenceController = pTVar7;
    if (pTVar7 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FStyle *)(*pcVar4)();
        return pFVar8;
      }
    }
  }
  return this;
}

