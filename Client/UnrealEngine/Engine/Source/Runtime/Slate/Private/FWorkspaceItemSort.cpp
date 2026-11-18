// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// operator() @ 142703fa0

bool __thiscall
FWorkspaceItem::FWorkspaceItemSort::operator()
          (FWorkspaceItemSort *this,TSharedRef<FWorkspaceItem,1> *param_1,
          TSharedRef<FWorkspaceItem,1> *param_2)

{
  int iVar1;
  FText *this_00;
  FText *pFVar2;
  
  iVar1 = (param_2->Object->ChildItems).ArrayNum;
  if ((param_1->Object->ChildItems).ArrayNum < 1) {
    if (0 < iVar1) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->SharedReferenceCount).ReferenceController);
      return false;
    }
  }
  else if (iVar1 == 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    return true;
  }
  this_00 = TAttribute<FText>::Get(&param_1->Object->DisplayNameAttribute);
  pFVar2 = TAttribute<FText>::Get(&param_2->Object->DisplayNameAttribute);
  iVar1 = FText::CompareTo(this_00,pFVar2,Default);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return iVar1 == -1;
}

