// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// operator= @ 146995bd0

FInputChord * __thiscall FInputChord::operator=(FInputChord *this,FInputChord *param_1)

{
  uint uVar1;
  TSharedPtr<FKeyDetails,1> *pTVar2;
  TSharedPtr<FKeyDetails,1> *pTVar3;
  
  (this->Key).KeyName = (param_1->Key).KeyName;
  pTVar2 = &(this->Key).KeyDetails;
  pTVar3 = &(param_1->Key).KeyDetails;
  if (pTVar2 != pTVar3) {
    pTVar2->Object = pTVar3->Object;
    pTVar3->Object = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Key).KeyDetails.SharedReferenceCount,
               &(param_1->Key).KeyDetails.SharedReferenceCount);
  }
  uVar1 = (this->bShift ^ param_1->bShift) & 1 ^ *(uint *)&this->field_0x18;
  *(uint *)&this->field_0x18 = uVar1;
  uVar1 = (uVar1 ^ *(uint *)&param_1->field_0x18) & 2 ^ uVar1;
  *(uint *)&this->field_0x18 = uVar1;
  uVar1 = (uVar1 ^ *(uint *)&param_1->field_0x18) & 4 ^ uVar1;
  *(uint *)&this->field_0x18 = uVar1;
  *(uint *)&this->field_0x18 = (uVar1 ^ *(uint *)&param_1->field_0x18) & 8 ^ uVar1;
  return this;
}

