// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 1

// RequestNavigateToItem @ 14a814a30

void __thiscall
SListView<UObject_*>::RequestNavigateToItem
          (SListView<UObject_*> *this,UObject *param_1,uint param_2)

{
  UObject *local_res10 [3];
  TOptional<UObject_*> local_18;
  
  local_res10[0] = param_1;
  Private_FindNextSelectableOrNavigable(this,&local_18,local_res10);
  if (local_18.bIsSet != false) {
    this->ItemToScrollIntoView = local_18.TypedValue;
    this->bNavigateOnScrollIntoView = true;
    this->UserRequestingScrollIntoView = param_2;
    STableViewBase::RequestLayoutRefresh((STableViewBase *)this);
  }
  return;
}

