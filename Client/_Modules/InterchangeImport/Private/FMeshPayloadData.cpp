// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 1

// FMeshPayloadData @ 14e68fd30

FMeshPayloadData * __thiscall
UE::Interchange::FMeshPayloadData::FMeshPayloadData
          (FMeshPayloadData *this,FMeshPayloadData *param_1)

{
  bool bVar1;
  int iVar2;
  
  FMeshDescription::FMeshDescription(&this->MeshDescription,&param_1->MeshDescription);
  (this->JointNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JointNames).AllocatorInstance.Data = (param_1->JointNames).AllocatorInstance.Data;
  (param_1->JointNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JointNames).ArrayNum = (param_1->JointNames).ArrayNum;
  (this->JointNames).ArrayMax = (param_1->JointNames).ArrayMax;
  (param_1->JointNames).ArrayNum = 0;
  (param_1->JointNames).ArrayMax = 0;
  iVar2 = param_1->VertexOffset;
  (this->MorphTargetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->VertexOffset = iVar2;
  (this->MorphTargetName).Data.AllocatorInstance.Data =
       (param_1->MorphTargetName).Data.AllocatorInstance.Data;
  (param_1->MorphTargetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MorphTargetName).Data.ArrayNum = (param_1->MorphTargetName).Data.ArrayNum;
  (this->MorphTargetName).Data.ArrayMax = (param_1->MorphTargetName).Data.ArrayMax;
  (param_1->MorphTargetName).Data.ArrayNum = 0;
  (param_1->MorphTargetName).Data.ArrayMax = 0;
  (this->NaniteAssemblyDescription).bIsSet = false;
  bVar1 = (param_1->NaniteAssemblyDescription).bIsSet;
  (this->NaniteAssemblyDescription).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->NaniteAssemblyDescription).TypedValue.Transforms.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this->NaniteAssemblyDescription).TypedValue.Transforms.AllocatorInstance.Data =
         (param_1->NaniteAssemblyDescription).TypedValue.Transforms.AllocatorInstance.Data;
    (param_1->NaniteAssemblyDescription).TypedValue.Transforms.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this->NaniteAssemblyDescription).TypedValue.Transforms.ArrayNum =
         (param_1->NaniteAssemblyDescription).TypedValue.Transforms.ArrayNum;
    (this->NaniteAssemblyDescription).TypedValue.Transforms.ArrayMax =
         (param_1->NaniteAssemblyDescription).TypedValue.Transforms.ArrayMax;
    (param_1->NaniteAssemblyDescription).TypedValue.Transforms.ArrayNum = 0;
    (param_1->NaniteAssemblyDescription).TypedValue.Transforms.ArrayMax = 0;
    (this->NaniteAssemblyDescription).TypedValue.PartIndices.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this->NaniteAssemblyDescription).TypedValue.PartIndices.AllocatorInstance.Data =
         (param_1->NaniteAssemblyDescription).TypedValue.PartIndices.AllocatorInstance.Data;
    (param_1->NaniteAssemblyDescription).TypedValue.PartIndices.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this->NaniteAssemblyDescription).TypedValue.PartIndices.ArrayNum =
         (param_1->NaniteAssemblyDescription).TypedValue.PartIndices.ArrayNum;
    (this->NaniteAssemblyDescription).TypedValue.PartIndices.ArrayMax =
         (param_1->NaniteAssemblyDescription).TypedValue.PartIndices.ArrayMax;
    (param_1->NaniteAssemblyDescription).TypedValue.PartIndices.ArrayNum = 0;
    (param_1->NaniteAssemblyDescription).TypedValue.PartIndices.ArrayMax = 0;
    (this->NaniteAssemblyDescription).TypedValue.PartUids.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this->NaniteAssemblyDescription).TypedValue.PartUids.AllocatorInstance.Data =
         (param_1->NaniteAssemblyDescription).TypedValue.PartUids.AllocatorInstance.Data;
    (param_1->NaniteAssemblyDescription).TypedValue.PartUids.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this->NaniteAssemblyDescription).TypedValue.PartUids.ArrayNum =
         (param_1->NaniteAssemblyDescription).TypedValue.PartUids.ArrayNum;
    (this->NaniteAssemblyDescription).TypedValue.PartUids.ArrayMax =
         (param_1->NaniteAssemblyDescription).TypedValue.PartUids.ArrayMax;
    (param_1->NaniteAssemblyDescription).TypedValue.PartUids.ArrayNum = 0;
    (param_1->NaniteAssemblyDescription).TypedValue.PartUids.ArrayMax = 0;
    (this->NaniteAssemblyDescription).TypedValue.BoneInfluences.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this->NaniteAssemblyDescription).TypedValue.BoneInfluences.AllocatorInstance.Data =
         (param_1->NaniteAssemblyDescription).TypedValue.BoneInfluences.AllocatorInstance.Data;
    (param_1->NaniteAssemblyDescription).TypedValue.BoneInfluences.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this->NaniteAssemblyDescription).TypedValue.BoneInfluences.ArrayNum =
         (param_1->NaniteAssemblyDescription).TypedValue.BoneInfluences.ArrayNum;
    (this->NaniteAssemblyDescription).TypedValue.BoneInfluences.ArrayMax =
         (param_1->NaniteAssemblyDescription).TypedValue.BoneInfluences.ArrayMax;
    (param_1->NaniteAssemblyDescription).TypedValue.BoneInfluences.ArrayNum = 0;
    (param_1->NaniteAssemblyDescription).TypedValue.BoneInfluences.ArrayMax = 0;
    (this->NaniteAssemblyDescription).TypedValue.NumInfluencesPerInstance.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this->NaniteAssemblyDescription).TypedValue.NumInfluencesPerInstance.AllocatorInstance.Data =
         (param_1->NaniteAssemblyDescription).TypedValue.NumInfluencesPerInstance.AllocatorInstance.
         Data;
    (param_1->NaniteAssemblyDescription).TypedValue.NumInfluencesPerInstance.AllocatorInstance.Data
         = (FScriptContainerElement *)0x0;
    (this->NaniteAssemblyDescription).TypedValue.NumInfluencesPerInstance.ArrayNum =
         (param_1->NaniteAssemblyDescription).TypedValue.NumInfluencesPerInstance.ArrayNum;
    (this->NaniteAssemblyDescription).TypedValue.NumInfluencesPerInstance.ArrayMax =
         (param_1->NaniteAssemblyDescription).TypedValue.NumInfluencesPerInstance.ArrayMax;
    (param_1->NaniteAssemblyDescription).TypedValue.NumInfluencesPerInstance.ArrayNum = 0;
    (param_1->NaniteAssemblyDescription).TypedValue.NumInfluencesPerInstance.ArrayMax = 0;
  }
  return this;
}

