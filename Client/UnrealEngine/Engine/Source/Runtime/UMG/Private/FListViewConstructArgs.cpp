// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// FListViewConstructArgs @ 146987f50

FListViewConstructArgs * __thiscall
ITypedUMGListView<UObject_*>::FListViewConstructArgs::FListViewConstructArgs
          (FListViewConstructArgs *this)

{
  ISlateStyle *pIVar1;
  FName *pFVar2;
  FTableViewStyle *pFVar3;
  FScrollBarStyle *pFVar4;
  FScrollBoxStyle *pFVar5;
  FName local_res8;
  
  this->bAllowFocus = true;
  this->SelectionMode = Single;
  this->bClearSelectionOnClick = false;
  this->ConsumeMouseWheel = WhenScrollingPossible;
  this->bReturnFocusToSelection = false;
  this->bClearScrollVelocityOnSelection = true;
  this->Orientation = Orient_Vertical;
  this->ScrollIntoViewAlignment = CenterAligned;
  pIVar1 = FUMGCoreStyle::Instance.Object;
  pFVar2 = ::FName::FName(&local_res8,"ListView");
  pFVar3 = (FTableViewStyle *)
           (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1,FTableViewStyle::TypeName,*pFVar2,0,1);
  if (pFVar3 == (FTableViewStyle *)0x0) {
    pFVar3 = FTableViewStyle::GetDefault();
  }
  this->ListViewStyle = pFVar3;
  pIVar1 = FUMGCoreStyle::Instance.Object;
  pFVar2 = ::FName::FName(&local_res8,"ScrollBar");
  pFVar4 = (FScrollBarStyle *)
           (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1,FScrollBarStyle::TypeName,*pFVar2,0,1);
  if (pFVar4 == (FScrollBarStyle *)0x0) {
    pFVar4 = FScrollBarStyle::GetDefault();
  }
  this->ScrollBarStyle = pFVar4;
  pIVar1 = FUMGCoreStyle::Instance.Object;
  pFVar2 = ::FName::FName(&local_res8,"ScrollBox");
  pFVar5 = (FScrollBoxStyle *)
           (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1,FScrollBoxStyle::TypeName,*pFVar2,0,1);
  if (pFVar5 == (FScrollBoxStyle *)0x0) {
    pFVar5 = FScrollBoxStyle::GetDefault();
  }
  this->ShadowBoxStyle = pFVar5;
  (this->ScrollBarPadding).Left = 0.0;
  (this->ScrollBarPadding).Top = 0.0;
  (this->ScrollBarPadding).Right = 0.0;
  (this->ScrollBarPadding).Bottom = 0.0;
  this->bPreventThrottling = false;
  this->bEnableShadowBoxStyle = false;
  return this;
}

