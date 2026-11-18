// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 1

// operator<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData>_TTuple<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData> @ 14e4cea60

TTuple<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData> *
__thiscall
TKeyInitializer<UInterchangeFactoryBaseNode_const_*_const_&>::
operator<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData>_TTuple<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData>
          (TKeyInitializer<UInterchangeFactoryBaseNode_const_*_const_&> *this,
          TTuple<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData>
          *__return_storage_ptr__)

{
  FFactoryNodeData local_48;
  
  local_48.ReferencedObjectPath.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_48.ReferencedObjectPath.AssetPath.PackageName.Number = 0;
  local_48.ReferencedObjectPath.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_48.ReferencedObjectPath.AssetPath.AssetName.Number = 0;
  local_48.ReferencedObjectPath.SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_48.ReferencedObjectPath.SubPathString.Data.ArrayNum = 0;
  local_48.ReferencedObjectPath.SubPathString.Data.ArrayMax = 0;
  local_48.ObjectsToReset.ArrayNum = 0;
  local_48.ObjectsToReset.ArrayMax = 0;
  local_48.Factory.field0_0x0.DebugPtr = (TObjectPtr<UInterchangeFactoryBase>_u_0)0x0;
  local_48.ObjectsToReset.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(UInterchangeFactoryBaseNode **)__return_storage_ptr__ = *this->Key;
  FInterchangeResetParameters::FFactoryNodeData::FFactoryNodeData
            ((FFactoryNodeData *)&__return_storage_ptr__->field_0x8,&local_48);
  if (local_48.ObjectsToReset.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ObjectsToReset.AllocatorInstance.Data);
  }
  if (local_48.ReferencedObjectPath.SubPathString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ReferencedObjectPath.SubPathString.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

