// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FLegacyRebuildChangeSet @ 147d787d0

FLegacyRebuildChangeSet * __thiscall
FLegacyRebuildChangeSet::FLegacyRebuildChangeSet
          (FLegacyRebuildChangeSet *this,FLegacyRebuildChangeSet *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = *(undefined8 *)((longlong)&(param_1->InstanceLocalBounds).Min.field0_0x0 + 8);
  *(undefined8 *)&(this->InstanceLocalBounds).Min.field0_0x0 =
       *(undefined8 *)&(param_1->InstanceLocalBounds).Min.field0_0x0;
  *(undefined8 *)((longlong)&(this->InstanceLocalBounds).Min.field0_0x0 + 8) = uVar1;
  *(undefined8 *)((longlong)&(this->InstanceLocalBounds).Max.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(param_1->InstanceLocalBounds).Max.field0_0x0 + 4);
  dVar2 = (param_1->PrimitiveWorldSpaceOffset).field0_0x0._s_0.Y;
  (this->PrimitiveWorldSpaceOffset).field0_0x0._s_0.X =
       (param_1->PrimitiveWorldSpaceOffset).field0_0x0._s_0.X;
  (this->PrimitiveWorldSpaceOffset).field0_0x0._s_0.Y = dVar2;
  (this->PrimitiveWorldSpaceOffset).field0_0x0._s_0.Z =
       (param_1->PrimitiveWorldSpaceOffset).field0_0x0._s_0.Z;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->PrimitiveToRelativeWorld).TransformRows[0].field0_0x0 + 8);
  *(undefined8 *)&(this->PrimitiveToRelativeWorld).TransformRows[0].field0_0x0 =
       *(undefined8 *)&(param_1->PrimitiveToRelativeWorld).TransformRows[0].field0_0x0;
  *(undefined8 *)((longlong)&(this->PrimitiveToRelativeWorld).TransformRows[0].field0_0x0 + 8) =
       uVar1;
  uVar1 = *(undefined8 *)&(param_1->PrimitiveToRelativeWorld).TransformRows[2].field0_0x0;
  *(undefined8 *)((longlong)&(this->PrimitiveToRelativeWorld).TransformRows[1].field0_0x0 + 4) =
       *(undefined8 *)
        ((longlong)&(param_1->PrimitiveToRelativeWorld).TransformRows[1].field0_0x0 + 4);
  *(undefined8 *)&(this->PrimitiveToRelativeWorld).TransformRows[2].field0_0x0 = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->PrimitiveToRelativeWorld).Origin.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->PrimitiveToRelativeWorld).TransformRows[2].field0_0x0 + 8) =
       *(undefined8 *)
        ((longlong)&(param_1->PrimitiveToRelativeWorld).TransformRows[2].field0_0x0 + 8);
  *(undefined8 *)((longlong)&(this->PrimitiveToRelativeWorld).Origin.field0_0x0 + 4) = uVar1;
  this->Flags = param_1->Flags;
  this->AbsMaxDisplacement = param_1->AbsMaxDisplacement;
  (this->LegacyStaticMeshInstanceData).Ptr = (param_1->LegacyStaticMeshInstanceData).Ptr;
  (param_1->LegacyStaticMeshInstanceData).Ptr = (FStaticMeshInstanceData *)0x0;
  (this->LegacyInstanceReorderTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LegacyInstanceReorderTable).AllocatorInstance.Data =
       (param_1->LegacyInstanceReorderTable).AllocatorInstance.Data;
  (param_1->LegacyInstanceReorderTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LegacyInstanceReorderTable).ArrayNum = (param_1->LegacyInstanceReorderTable).ArrayNum;
  (this->LegacyInstanceReorderTable).ArrayMax = (param_1->LegacyInstanceReorderTable).ArrayMax;
  (param_1->LegacyInstanceReorderTable).ArrayNum = 0;
  (param_1->LegacyInstanceReorderTable).ArrayMax = 0;
  (this->InstanceIdIndexMap).IndexToIdMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceIdIndexMap).IndexToIdMap.AllocatorInstance.Data =
       (param_1->InstanceIdIndexMap).IndexToIdMap.AllocatorInstance.Data;
  (param_1->InstanceIdIndexMap).IndexToIdMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->InstanceIdIndexMap).IndexToIdMap.ArrayNum =
       (param_1->InstanceIdIndexMap).IndexToIdMap.ArrayNum;
  (this->InstanceIdIndexMap).IndexToIdMap.ArrayMax =
       (param_1->InstanceIdIndexMap).IndexToIdMap.ArrayMax;
  (param_1->InstanceIdIndexMap).IndexToIdMap.ArrayNum = 0;
  (param_1->InstanceIdIndexMap).IndexToIdMap.ArrayMax = 0;
  (this->InstanceIdIndexMap).IdToIndexMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceIdIndexMap).IdToIndexMap.AllocatorInstance.Data =
       (param_1->InstanceIdIndexMap).IdToIndexMap.AllocatorInstance.Data;
  (param_1->InstanceIdIndexMap).IdToIndexMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->InstanceIdIndexMap).IdToIndexMap.ArrayNum =
       (param_1->InstanceIdIndexMap).IdToIndexMap.ArrayNum;
  (this->InstanceIdIndexMap).IdToIndexMap.ArrayMax =
       (param_1->InstanceIdIndexMap).IdToIndexMap.ArrayMax;
  (param_1->InstanceIdIndexMap).IdToIndexMap.ArrayNum = 0;
  (param_1->InstanceIdIndexMap).IdToIndexMap.ArrayMax = 0;
  (this->InstanceIdIndexMap).NumInstances = (param_1->InstanceIdIndexMap).NumInstances;
  this->NumCustomDataFloats = param_1->NumCustomDataFloats;
  return this;
}

// ~FLegacyRebuildChangeSet @ 147d7b4d0

void __thiscall FLegacyRebuildChangeSet::~FLegacyRebuildChangeSet(FLegacyRebuildChangeSet *this)

{
  FScriptContainerElement *pFVar1;
  FStaticMeshInstanceData *this_00;
  
  pFVar1 = (this->InstanceIdIndexMap).IdToIndexMap.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InstanceIdIndexMap).IndexToIdMap.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LegacyInstanceReorderTable).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = (this->LegacyStaticMeshInstanceData).Ptr;
  if (this_00 != (FStaticMeshInstanceData *)0x0) {
    FStaticMeshInstanceData::~FStaticMeshInstanceData(this_00);
    ::operator_delete(this_00,0x50);
    return;
  }
  return;
}

