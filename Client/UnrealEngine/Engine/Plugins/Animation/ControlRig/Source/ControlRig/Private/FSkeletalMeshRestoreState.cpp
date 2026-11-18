// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// RestoreState @ 14a452a00

void __thiscall FSkeletalMeshRestoreState::RestoreState(FSkeletalMeshRestoreState *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  FWeakObjectPtr *this_00;
  FWeakObjectPtr *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->SkeletalMeshCompEditorParams).ArrayNum;
  this_00 = (FWeakObjectPtr *)(this->SkeletalMeshCompEditorParams).AllocatorInstance.Data;
  pFVar5 = this_00 + (longlong)iVar1 * 2;
  while( true ) {
    if ((this->SkeletalMeshCompEditorParams).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSkeletalMeshEditorParams,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar5) break;
    bVar3 = FWeakObjectPtr::IsValid(this_00);
    if (bVar3) {
      iVar2 = this_00[1].ObjectIndex;
      pUVar4 = FWeakObjectPtr::Get(this_00);
      pUVar4[0x33].field_0xc = (char)iVar2;
      pUVar4 = FWeakObjectPtr::Get(this_00);
      (**(code **)(*(longlong *)pUVar4 + 3000))(pUVar4,this_00[1].ObjectSerialNumber);
    }
    this_00 = this_00 + 2;
  }
  return;
}

