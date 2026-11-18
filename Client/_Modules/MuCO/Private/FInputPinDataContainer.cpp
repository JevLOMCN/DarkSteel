// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 1

// FInputPinDataContainer @ 14abbc560

FInputPinDataContainer * __thiscall
FInputPinDataContainer::FInputPinDataContainer
          (FInputPinDataContainer *this,FObjectNodeInputPin *param_1,FInstancedStruct *param_2)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (this->Pin).PinType = param_1->PinType;
  (this->Pin).PinName = param_1->PinName;
  (this->Pin).DisplayName.TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->DisplayName).TextData.Reference;
  (this->Pin).DisplayName.TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->Pin).DisplayName.Flags = (param_1->DisplayName).Flags;
  (this->Pin).bIsArray = param_1->bIsArray;
  this->Data = param_2;
  return this;
}

