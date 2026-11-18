// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 1

// FFactoryNodeData @ 14e4d6fd0

FFactoryNodeData * __thiscall
FInterchangeResetParameters::FFactoryNodeData::FFactoryNodeData
          (FFactoryNodeData *this,FFactoryNodeData *param_1)

{
  UInterchangeFactoryBase *pUVar1;
  FName FVar2;
  
  FVar2 = (param_1->ReferencedObjectPath).AssetPath.AssetName;
  (this->ReferencedObjectPath).AssetPath.PackageName =
       (param_1->ReferencedObjectPath).AssetPath.PackageName;
  (this->ReferencedObjectPath).AssetPath.AssetName = FVar2;
  (this->ReferencedObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ReferencedObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (param_1->ReferencedObjectPath).SubPathString.Data.AllocatorInstance.Data;
  (param_1->ReferencedObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ReferencedObjectPath).SubPathString.Data.ArrayNum =
       (param_1->ReferencedObjectPath).SubPathString.Data.ArrayNum;
  (this->ReferencedObjectPath).SubPathString.Data.ArrayMax =
       (param_1->ReferencedObjectPath).SubPathString.Data.ArrayMax;
  (param_1->ReferencedObjectPath).SubPathString.Data.ArrayNum = 0;
  (param_1->ReferencedObjectPath).SubPathString.Data.ArrayMax = 0;
  pUVar1 = (param_1->Factory).field0_0x0.DebugPtr;
  (this->Factory).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UInterchangeFactoryBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->ObjectsToReset).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectsToReset).AllocatorInstance.Data = (param_1->ObjectsToReset).AllocatorInstance.Data;
  (param_1->ObjectsToReset).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectsToReset).ArrayNum = (param_1->ObjectsToReset).ArrayNum;
  (this->ObjectsToReset).ArrayMax = (param_1->ObjectsToReset).ArrayMax;
  (param_1->ObjectsToReset).ArrayNum = 0;
  (param_1->ObjectsToReset).ArrayMax = 0;
  return this;
}

