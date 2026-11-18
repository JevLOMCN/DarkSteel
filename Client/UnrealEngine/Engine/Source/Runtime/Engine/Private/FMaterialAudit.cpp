// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// operator= @ 148780a20

FMaterialAudit * __thiscall
Nanite::FMaterialAudit::operator=(FMaterialAudit *this,FMaterialAudit *param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<Nanite::FMaterialAuditEntry> FVar2;
  byte bVar3;
  
  if (this != param_1) {
    pFVar1 = (this->AssetName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->AssetName).Data.AllocatorInstance.Data = (param_1->AssetName).Data.AllocatorInstance.Data
    ;
    (param_1->AssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->AssetName).Data.ArrayNum = (param_1->AssetName).Data.ArrayNum;
    (this->AssetName).Data.ArrayMax = (param_1->AssetName).Data.ArrayMax;
    (param_1->AssetName).Data.ArrayNum = 0;
    (param_1->AssetName).Data.ArrayMax = 0;
  }
  if (&this->Entries != &param_1->Entries) {
    if ((param_1->Entries).AllocatorInstance.SecondaryData ==
        (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
      memmove(&this->Entries,&param_1->Entries,0xc0);
    }
    FVar2 = (this->Entries).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    (this->Entries).AllocatorInstance.SecondaryData =
         (param_1->Entries).AllocatorInstance.SecondaryData;
    (param_1->Entries).AllocatorInstance.SecondaryData =
         (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
    (this->Entries).ArrayNum = (param_1->Entries).ArrayNum;
    (this->Entries).ArrayMax = (param_1->Entries).ArrayMax;
    (param_1->Entries).ArrayNum = 0;
    (param_1->Entries).ArrayMax = 4;
  }
  this->FallbackMaterial = param_1->FallbackMaterial;
  bVar3 = (this->bHasAnyError ^ param_1->bHasAnyError) & 1 ^ this->field_0xf8;
  this->field_0xf8 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0xf8) & 2 ^ bVar3;
  this->field_0xf8 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0xf8) & 4 ^ bVar3;
  this->field_0xf8 = bVar3;
  this->field_0xf8 = (bVar3 ^ param_1->field_0xf8) & 8 ^ bVar3;
  return this;
}

