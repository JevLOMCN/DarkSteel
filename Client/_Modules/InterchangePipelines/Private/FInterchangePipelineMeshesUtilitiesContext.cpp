// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 8

// StaticStruct @ 14e72cd80

UScriptStruct * __cdecl FInterchangePipelineMeshesUtilitiesContext::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangePipelines();
    Z_Registration_Info_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext,
                         (UObject *)pUVar1,L"InterchangePipelineMeshesUtilitiesContext");
  }
  return Z_Registration_Info_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext.OuterSingleton
  ;
}

// IsGeometryCacheGeometry @ 14e7c6280

bool __thiscall
FInterchangePipelineMeshesUtilitiesContext::IsGeometryCacheGeometry
          (FInterchangePipelineMeshesUtilitiesContext *this,FInterchangeMeshGeometry *param_1)

{
  int iVar1;
  UInterchangeMeshNode *pUVar2;
  longlong lVar3;
  UClass *pUVar4;
  
  if ((this->bIgnoreGeometryCaches == false) &&
     ((this->bQueryGeometryOnlyIfNoInstance == false ||
      ((param_1->ReferencingMeshInstanceUids).ArrayNum < 1)))) {
    pUVar2 = (param_1->MeshNode).field0_0x0.DebugPtr;
    pUVar4 = Z_Construct_UClass_UInterchangeGeometryCacheNode_NoRegister();
    lVar3 = pUVar2->_padding_;
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      return true;
    }
  }
  return false;
}

// IsGeometryCacheInstance @ 14e7c62e0

bool __thiscall
FInterchangePipelineMeshesUtilitiesContext::IsGeometryCacheInstance
          (FInterchangePipelineMeshesUtilitiesContext *this,FInterchangeMeshInstance *param_1)

{
  if (this->bIgnoreGeometryCaches != false) {
    return false;
  }
  return param_1->bIsAnimated;
}

// IsSkeletalMeshGeometry @ 14e7c79e0

bool __thiscall
FInterchangePipelineMeshesUtilitiesContext::IsSkeletalMeshGeometry
          (FInterchangePipelineMeshesUtilitiesContext *this,FInterchangeMeshGeometry *param_1)

{
  UInterchangeMeshNode *pUVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  
  if ((this->bConvertSkeletalMeshToStaticMesh == false) &&
     (((this->bQueryGeometryOnlyIfNoInstance == false ||
       ((param_1->ReferencingMeshInstanceUids).ArrayNum < 1)) &&
      (bVar3 = UInterchangeMeshNode::IsMorphTarget((param_1->MeshNode).field0_0x0.DebugPtr), !bVar3)
      ))) {
    pUVar1 = (param_1->MeshNode).field0_0x0.DebugPtr;
    pUVar5 = Z_Construct_UClass_UInterchangeGeometryCacheNode_NoRegister();
    lVar2 = pUVar1->_padding_;
    iVar4 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar5->_padding_)) {
      if ((this->bConvertStaticMeshToSkeletalMesh == false) &&
         (bVar3 = UInterchangeMeshNode::IsSkinnedMesh((param_1->MeshNode).field0_0x0.DebugPtr),
         !bVar3)) {
        if (this->bConvertStaticsWithMorphTargetsToSkeletals == false) {
          return false;
        }
        iVar4 = UInterchangeMeshNode::GetMorphTargetDependeciesCount
                          ((param_1->MeshNode).field0_0x0.DebugPtr);
        return 0 < iVar4;
      }
      return true;
    }
  }
  return false;
}

// IsSkeletalMeshInstance @ 14e7c7aa0

bool __thiscall
FInterchangePipelineMeshesUtilitiesContext::IsSkeletalMeshInstance
          (FInterchangePipelineMeshesUtilitiesContext *this,FInterchangeMeshInstance *param_1,
          UInterchangeBaseNodeContainer *param_2)

{
  bool bVar1;
  bool local_res20 [8];
  
  bVar1 = IsSkeletalMeshInstance(this,param_1,param_2,local_res20);
  return bVar1;
}

// IsSkeletalMeshInstance @ 14e7c7ac0

bool __thiscall
FInterchangePipelineMeshesUtilitiesContext::IsSkeletalMeshInstance
          (FInterchangePipelineMeshesUtilitiesContext *this,FInterchangeMeshInstance *param_1,
          UInterchangeBaseNodeContainer *param_2,bool *param_3)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  bool bVar3;
  int *piVar4;
  FInterchangeLodSceneNodeContainer *pFVar5;
  UClass *pUVar6;
  int iVar7;
  FScriptContainerElement *this_00;
  undefined1 local_res10 [8];
  
  *param_3 = false;
  if ((param_1->bIsAnimated == false) && (this->bConvertSkeletalMeshToStaticMesh == false)) {
    if ((((this->bConvertStaticMeshToSkeletalMesh != false) ||
         (param_1->bReferenceSkinnedMesh != false)) ||
        ((this->bConvertStaticsWithMorphTargetsToSkeletals != false &&
         (param_1->bHasMorphTargets != false)))) && (param_1->bReferenceMorphTarget == false)) {
      return true;
    }
    if ((this->bImportMeshesInBoneHierarchy != false) &&
       (*(int *)&(param_1->SceneNodePerLodIndex).field_0x8 !=
        *(int *)&(param_1->SceneNodePerLodIndex).field_0x34)) {
      piVar4 = *(int **)&(param_1->SceneNodePerLodIndex).field_0x40;
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)&(param_1->SceneNodePerLodIndex).field_0x38;
      }
      iVar7 = *piVar4;
      if (iVar7 != -1) {
        lVar2 = *(longlong *)&param_1->SceneNodePerLodIndex;
        do {
          if (*(int *)((longlong)iVar7 * 0x20 + lVar2) == 0) {
            pFVar5 = TMapBase<int,FInterchangeLodSceneNodeContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FInterchangeLodSceneNodeContainer,0>_>
                     ::FindChecked((TMapBase<int,FInterchangeLodSceneNodeContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FInterchangeLodSceneNodeContainer,0>_>
                                    *)&param_1->SceneNodePerLodIndex,0);
            this_00 = (pFVar5->BaseNodes).AllocatorInstance.Data;
            iVar7 = (pFVar5->BaseNodes).ArrayNum;
            pFVar1 = this_00 + (longlong)iVar7 * 8;
            while( true ) {
              if ((pFVar5->BaseNodes).ArrayNum != iVar7) {
                `TCheckedPointerIterator<TObjectPtr<UInterchangeBaseNode_const_>_const_,int,0>::
                operator!='::__l2::<lambda_1>::operator()(local_res10);
              }
              if (this_00 == pFVar1) break;
              if (*(longlong *)this_00 != 0) {
                pUVar6 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
                bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar6);
                if (((bVar3) && (*(UInterchangeSceneNode **)this_00 != (UInterchangeSceneNode *)0x0)
                    ) && (bVar3 = UE::Private::InterchangeMeshPipeline::IsSceneNodeNestedInSkeleton
                                            (param_2,*(UInterchangeSceneNode **)this_00), bVar3)) {
                  *param_3 = true;
                  return true;
                }
              }
              this_00 = this_00 + 8;
            }
            return false;
          }
          iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar2);
        } while (iVar7 != -1);
      }
    }
  }
  return false;
}

// IsStaticMeshGeometry @ 14e7c7c50

bool __thiscall
FInterchangePipelineMeshesUtilitiesContext::IsStaticMeshGeometry
          (FInterchangePipelineMeshesUtilitiesContext *this,FInterchangeMeshGeometry *param_1)

{
  int iVar1;
  UInterchangeMeshNode *pUVar2;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  
  if ((this->bIgnoreStaticMeshes == false) &&
     ((this->bQueryGeometryOnlyIfNoInstance == false ||
      ((param_1->ReferencingMeshInstanceUids).ArrayNum < 1)))) {
    bVar4 = UInterchangeMeshNode::IsMorphTarget((param_1->MeshNode).field0_0x0.DebugPtr);
    if (!bVar4) {
      pUVar2 = (param_1->MeshNode).field0_0x0.DebugPtr;
      pUVar5 = Z_Construct_UClass_UInterchangeGeometryCacheNode_NoRegister();
      lVar3 = pUVar2->_padding_;
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = IsSkeletalMeshGeometry(this,param_1);
        if (!bVar4) {
          return true;
        }
      }
    }
  }
  return false;
}

// IsStaticMeshInstance @ 14e7c7ce0

bool __thiscall
FInterchangePipelineMeshesUtilitiesContext::IsStaticMeshInstance
          (FInterchangePipelineMeshesUtilitiesContext *this,FInterchangeMeshInstance *param_1,
          UInterchangeBaseNodeContainer *param_2)

{
  bool bVar1;
  bool local_res8 [32];
  
  if ((this->bIgnoreStaticMeshes == false) && (param_1->bIsAnimated == false)) {
    bVar1 = IsSkeletalMeshInstance(this,param_1,param_2,local_res8);
    if (!bVar1) {
      return true;
    }
  }
  return false;
}

