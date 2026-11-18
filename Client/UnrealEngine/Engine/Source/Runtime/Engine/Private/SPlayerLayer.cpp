// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// OnPaint @ 1486d6830

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SPlayerLayer::OnPaint
          (SPlayerLayer *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  FSlateApplication *this_00;
  UObject *pUVar4;
  
  if (bEnablePerUserHitTesting != 0) {
    bVar2 = FWeakObjectPtr::IsValid(&(this->OwningPlayer).WeakPtr);
    if (bVar2) {
      this_00 = FSlateApplication::Get();
      pUVar4 = FWeakObjectPtr::Get(&(this->OwningPlayer).WeakPtr);
      iVar3 = FSlateApplication::GetUserIndexForController(this_00,*(int *)(pUVar4 + 6));
      goto LAB_1486d6898;
    }
  }
  iVar3 = -1;
LAB_1486d6898:
  iVar1 = param_1->CurrentGrid->CurrentUserIndex;
  param_1->CurrentGrid->CurrentUserIndex = iVar3;
  iVar3 = SOverlay::OnPaint((SOverlay *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                           );
  param_1->CurrentGrid->CurrentUserIndex = iVar1;
  return iVar3;
}

