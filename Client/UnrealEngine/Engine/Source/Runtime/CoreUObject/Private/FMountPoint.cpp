// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FMountPoint @ 141e856e0

FMountPoint * __thiscall FMountPoint::FMountPoint(FMountPoint *this,FMountPoint *param_1)

{
  byte bVar1;
  
  ::FString::FString(&this->RootPath,&param_1->RootPath);
  ::FString::FString(&this->ContentPathRelative,&param_1->ContentPathRelative);
  ::FString::FString(&this->ContentPathAbsolute,&param_1->ContentPathAbsolute);
  bVar1 = (this->bRemovable ^ param_1->bRemovable) & 1U ^ this->field_0x30;
  this->field_0x30 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0x30) & 2 ^ bVar1;
  this->field_0x30 = bVar1;
  this->field_0x30 = (bVar1 ^ param_1->field_0x30) & 4 ^ bVar1;
  return this;
}

// FMountPoint @ 141e85750

/* WARNING: Enum "EMountFlags": Some values do not have unique names */

FMountPoint * __thiscall
FMountPoint::FMountPoint
          (FMountPoint *this,FString *param_1,FString *param_2,FString *param_3,EMountFlags param_4)

{
  undefined1 *puVar1;
  
  (this->RootPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootPath).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootPath).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->RootPath).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  (this->ContentPathRelative).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentPathRelative).Data.AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentPathRelative).Data.ArrayNum = (param_2->Data).ArrayNum;
  (this->ContentPathRelative).Data.ArrayMax = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  (this->ContentPathAbsolute).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentPathAbsolute).Data.AllocatorInstance.Data = (param_3->Data).AllocatorInstance.Data;
  (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentPathAbsolute).Data.ArrayNum = (param_3->Data).ArrayNum;
  (this->ContentPathAbsolute).Data.ArrayMax = (param_3->Data).ArrayMax;
  (param_3->Data).ArrayNum = 0;
  (param_3->Data).ArrayMax = 0;
  this->bRemovable = false;
  this->bAlias = false;
  this->bReadOnly = false;
  this->field_0x30 = this->field_0x30 | (undefined1)param_4 & (Alias|ReadOnly|Removable);
  return this;
}

