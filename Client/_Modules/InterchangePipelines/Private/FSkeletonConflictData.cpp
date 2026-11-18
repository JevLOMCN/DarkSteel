// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 1

// FSkeletonConflictData @ 14e7660d0

FSkeletonConflictData * __thiscall
UInterchangeGenericAssetsPipeline::FSkeletonConflictData::FSkeletonConflictData
          (FSkeletonConflictData *this)

{
  (this->ConflictUniqueId).A = 0;
  (this->ConflictUniqueId).B = 0;
  (this->ConflictUniqueId).C = 0;
  (this->ConflictUniqueId).D = 0;
  *(undefined8 *)&this->Joints = 0;
  *(undefined8 *)&(this->Joints).field_0x8 = 0;
  *(undefined8 *)&(this->Joints).field_0x20 = 0;
  *(undefined4 *)&(this->Joints).field_0x28 = 0;
  *(undefined4 *)&(this->Joints).field_0x2c = 0x80;
  *(undefined4 *)&(this->Joints).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Joints).field_0x34 = 0;
  *(undefined8 *)&(this->Joints).field_0x40 = 0;
  *(undefined4 *)&(this->Joints).field_0x48 = 0;
  this->ReimportObject = (UObject *)0x0;
  FText::AsLocalizable_Advanced_LocText
            (&this->DialogTitle,L"UInterchangeGenericAssetsPipeline",
             L"GetConflictInfos_SkeletonTitle",L"Skeleton Conflicts");
  return this;
}

