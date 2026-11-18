// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 3

// StaticStruct @ 14e72f080

UScriptStruct * __cdecl FInterchangeMeshInstance::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeMeshInstance.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangePipelines();
    Z_Registration_Info_UScriptStruct_FInterchangeMeshInstance.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeMeshInstance,(UObject *)pUVar1,
                         L"InterchangeMeshInstance");
  }
  return Z_Registration_Info_UScriptStruct_FInterchangeMeshInstance.OuterSingleton;
}

// FInterchangeMeshInstance @ 14e765f50

FInterchangeMeshInstance * __thiscall
FInterchangeMeshInstance::FInterchangeMeshInstance
          (FInterchangeMeshInstance *this,FInterchangeMeshInstance *param_1)

{
  UInterchangeBaseNode *pUVar1;
  
  (this->MeshInstanceUid).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshInstanceUid).Data.AllocatorInstance.Data =
       (param_1->MeshInstanceUid).Data.AllocatorInstance.Data;
  (param_1->MeshInstanceUid).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshInstanceUid).Data.ArrayNum = (param_1->MeshInstanceUid).Data.ArrayNum;
  (this->MeshInstanceUid).Data.ArrayMax = (param_1->MeshInstanceUid).Data.ArrayMax;
  (param_1->MeshInstanceUid).Data.ArrayNum = 0;
  (param_1->MeshInstanceUid).Data.ArrayMax = 0;
  pUVar1 = (param_1->LodGroupNode).field0_0x0.DebugPtr;
  (this->LodGroupNode).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UInterchangeBaseNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->bReferenceSkinnedMesh = param_1->bReferenceSkinnedMesh;
  this->bReferenceMorphTarget = param_1->bReferenceMorphTarget;
  this->bHasMorphTargets = param_1->bHasMorphTargets;
  this->bIsAnimated = param_1->bIsAnimated;
  TSet<TTuple<int,FInterchangeLodSceneNodeContainer>,TDefaultMapHashableKeyFuncs<int,FInterchangeLodSceneNodeContainer,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<int,FInterchangeLodSceneNodeContainer>,TDefaultMapHashableKeyFuncs<int,FInterchangeLodSceneNodeContainer,0>,FDefaultSetAllocator>
            ((TSet<TTuple<int,FInterchangeLodSceneNodeContainer>,TDefaultMapHashableKeyFuncs<int,FInterchangeLodSceneNodeContainer,0>,FDefaultSetAllocator>
              *)&this->SceneNodePerLodIndex,
             (TSet<TTuple<int,FInterchangeLodSceneNodeContainer>,TDefaultMapHashableKeyFuncs<int,FInterchangeLodSceneNodeContainer,0>,FDefaultSetAllocator>
              *)&param_1->SceneNodePerLodIndex);
  (this->ReferencingMeshGeometryUids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencingMeshGeometryUids).AllocatorInstance.Data =
       (param_1->ReferencingMeshGeometryUids).AllocatorInstance.Data;
  (param_1->ReferencingMeshGeometryUids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencingMeshGeometryUids).ArrayNum = (param_1->ReferencingMeshGeometryUids).ArrayNum;
  (this->ReferencingMeshGeometryUids).ArrayMax = (param_1->ReferencingMeshGeometryUids).ArrayMax;
  (param_1->ReferencingMeshGeometryUids).ArrayNum = 0;
  (param_1->ReferencingMeshGeometryUids).ArrayMax = 0;
  return this;
}

// operator= @ 14e76d520

FInterchangeMeshInstance * __thiscall
FInterchangeMeshInstance::operator=
          (FInterchangeMeshInstance *this,FInterchangeMeshInstance *param_1)

{
  UInterchangeBaseNode *pUVar1;
  
  ::FString::operator=(&this->MeshInstanceUid,&param_1->MeshInstanceUid);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->LodGroupNode).field0_0x0.DebugPtr, pUVar1 != (UInterchangeBaseNode *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->LodGroupNode).field0_0x0 = (param_1->LodGroupNode).field0_0x0;
  this->bReferenceSkinnedMesh = param_1->bReferenceSkinnedMesh;
  this->bReferenceMorphTarget = param_1->bReferenceMorphTarget;
  this->bHasMorphTargets = param_1->bHasMorphTargets;
  this->bIsAnimated = param_1->bIsAnimated;
  if (&this->SceneNodePerLodIndex != &param_1->SceneNodePerLodIndex) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->SceneNodePerLodIndex).field_0x38,
               (int *)&(this->SceneNodePerLodIndex).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->SceneNodePerLodIndex).field_0x38,
               *(int *)&(param_1->SceneNodePerLodIndex).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<int,FInterchangeLodSceneNodeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<int,FInterchangeLodSceneNodeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->SceneNodePerLodIndex,
                (TSparseArray<TSparseSetElement<TTuple<int,FInterchangeLodSceneNodeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->SceneNodePerLodIndex);
  }
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->ReferencingMeshGeometryUids,&param_1->ReferencingMeshGeometryUids);
  return this;
}

