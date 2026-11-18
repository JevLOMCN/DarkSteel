// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 3

// CycleVisibility @ 1430b4850

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSplitterTest::FVisibilityCycler::CycleVisibility
          (FVisibilityCycler *this,FReply *__return_storage_ptr__)

{
  EVisibility EVar1;
  undefined7 extraout_var;
  
  EVar1 = NextVisibilityState((EVisibility)0xe8);
  (this->TheVisibility).Value.Value = *(uchar *)CONCAT71(extraout_var,EVar1.Value.Value);
  FReply::Handled(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetVisibility @ 1430ceb10

EVisibility __thiscall SSplitterTest::FVisibilityCycler::GetVisibility(FVisibilityCycler *this)

{
  uchar *in_RDX;
  
  *in_RDX = (this->TheVisibility).Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// NextVisibilityState @ 1430d87f0

/* WARNING: Type propagation algorithm not settling */

EVisibility __cdecl SSplitterTest::FVisibilityCycler::NextVisibilityState(EVisibility param_1)

{
  bool bVar1;
  undefined7 in_register_00000009;
  TEnumAsByte<EVisibility::Private> *pTVar2;
  EVisibility local_res10 [24];
  
  pTVar2 = (TEnumAsByte<EVisibility::Private> *)CONCAT71(in_register_00000009,param_1.Value.Value);
  bVar1 = EVisibility::operator==(local_res10,&EVisibility::Visible);
  if (bVar1) {
    pTVar2->Value = (uchar)EVisibility::Hidden.Value.Value;
  }
  else {
    bVar1 = EVisibility::operator==(local_res10,&EVisibility::Hidden);
    if (bVar1) {
      pTVar2->Value = (uchar)EVisibility::Collapsed.Value.Value;
    }
    else {
      bVar1 = EVisibility::operator==(local_res10,&EVisibility::Collapsed);
      if (bVar1) {
        pTVar2->Value = (uchar)EVisibility::Visible.Value.Value;
      }
      else {
        pTVar2->Value = (uchar)EVisibility::Visible.Value.Value;
      }
    }
  }
  return (EVisibility)param_1.Value;
}

