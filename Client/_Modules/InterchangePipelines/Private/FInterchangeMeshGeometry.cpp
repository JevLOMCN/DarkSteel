// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 2

// StaticStruct @ 14e72cbc0

UScriptStruct * __cdecl FInterchangeMeshGeometry::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeMeshGeometry.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangePipelines();
    Z_Registration_Info_UScriptStruct_FInterchangeMeshGeometry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeMeshGeometry,(UObject *)pUVar1,
                         L"InterchangeMeshGeometry");
  }
  return Z_Registration_Info_UScriptStruct_FInterchangeMeshGeometry.OuterSingleton;
}

// FInterchangeMeshGeometry @ 14e765ea0

FInterchangeMeshGeometry * __thiscall
FInterchangeMeshGeometry::FInterchangeMeshGeometry
          (FInterchangeMeshGeometry *this,FInterchangeMeshGeometry *param_1)

{
  UInterchangeMeshNode *pUVar1;
  
  (this->MeshUid).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshUid).Data.AllocatorInstance.Data = (param_1->MeshUid).Data.AllocatorInstance.Data;
  (param_1->MeshUid).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshUid).Data.ArrayNum = (param_1->MeshUid).Data.ArrayNum;
  (this->MeshUid).Data.ArrayMax = (param_1->MeshUid).Data.ArrayMax;
  (param_1->MeshUid).Data.ArrayNum = 0;
  (param_1->MeshUid).Data.ArrayMax = 0;
  pUVar1 = (param_1->MeshNode).field0_0x0.DebugPtr;
  (this->MeshNode).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UInterchangeMeshNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->ReferencingMeshInstanceUids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencingMeshInstanceUids).AllocatorInstance.Data =
       (param_1->ReferencingMeshInstanceUids).AllocatorInstance.Data;
  (param_1->ReferencingMeshInstanceUids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencingMeshInstanceUids).ArrayNum = (param_1->ReferencingMeshInstanceUids).ArrayNum;
  (this->ReferencingMeshInstanceUids).ArrayMax = (param_1->ReferencingMeshInstanceUids).ArrayMax;
  (param_1->ReferencingMeshInstanceUids).ArrayNum = 0;
  (param_1->ReferencingMeshInstanceUids).ArrayMax = 0;
  (this->AttachedSocketUids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttachedSocketUids).AllocatorInstance.Data =
       (param_1->AttachedSocketUids).AllocatorInstance.Data;
  (param_1->AttachedSocketUids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttachedSocketUids).ArrayNum = (param_1->AttachedSocketUids).ArrayNum;
  (this->AttachedSocketUids).ArrayMax = (param_1->AttachedSocketUids).ArrayMax;
  (param_1->AttachedSocketUids).ArrayNum = 0;
  (param_1->AttachedSocketUids).ArrayMax = 0;
  return this;
}

