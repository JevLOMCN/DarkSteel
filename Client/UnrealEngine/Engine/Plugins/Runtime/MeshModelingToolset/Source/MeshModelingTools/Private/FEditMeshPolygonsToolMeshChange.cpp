// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 3

// Apply @ 14cc34470

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FEditMeshPolygonsToolMeshChange::Apply(FEditMeshPolygonsToolMeshChange *this,UObject *param_1)

{
  int iVar1;
  UPolygonSelectionMechanic *this_00;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UEditMeshPolygonsTool::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14cc344aa;
  }
  param_1 = (UObject *)0x0;
LAB_14cc344aa:
  UE::Geometry::FDynamicMeshChange::Apply
            ((this->MeshChange).Ptr,(((UEditMeshPolygonsTool *)param_1)->CurrentMesh).Object,false);
  UPreviewMesh::UpdatePreview
            ((((((UEditMeshPolygonsTool *)param_1)->Preview).field0_0x0.DebugPtr)->PreviewMesh).
             field0_0x0.DebugPtr,(((UEditMeshPolygonsTool *)param_1)->CurrentMesh).Object,FullUpdate
             ,AllVertexAttribs);
  this_00 = (((UEditMeshPolygonsTool *)param_1)->SelectionMechanic).field0_0x0.DebugPtr;
  ((UEditMeshPolygonsTool *)param_1)->bSpatialDirty = true;
  UMeshTopologySelectionMechanic::NotifyMeshChanged((UMeshTopologySelectionMechanic *)this_00,false)
  ;
  ((UEditMeshPolygonsTool *)param_1)->ModifiedTopologyCounter =
       ((UEditMeshPolygonsTool *)param_1)->ModifiedTopologyCounter + 1;
  UEditMeshPolygonsTool::RebuildTopologyWithGivenExtraCorners
            ((UEditMeshPolygonsTool *)param_1,&this->ExtraCornerVidsAfter);
  TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
            (&((((UEditMeshPolygonsTool *)param_1)->ActivityContext).field0_0x0.DebugPtr)->
              OnUndoRedo,true);
  return;
}

// Revert @ 14cc74400

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FEditMeshPolygonsToolMeshChange::Revert(FEditMeshPolygonsToolMeshChange *this,UObject *param_1)

{
  int iVar1;
  UPolygonSelectionMechanic *this_00;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UEditMeshPolygonsTool::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14cc7443a;
  }
  param_1 = (UObject *)0x0;
LAB_14cc7443a:
  UE::Geometry::FDynamicMeshChange::Apply
            ((this->MeshChange).Ptr,(((UEditMeshPolygonsTool *)param_1)->CurrentMesh).Object,true);
  UPreviewMesh::UpdatePreview
            ((((((UEditMeshPolygonsTool *)param_1)->Preview).field0_0x0.DebugPtr)->PreviewMesh).
             field0_0x0.DebugPtr,(((UEditMeshPolygonsTool *)param_1)->CurrentMesh).Object,FullUpdate
             ,AllVertexAttribs);
  this_00 = (((UEditMeshPolygonsTool *)param_1)->SelectionMechanic).field0_0x0.DebugPtr;
  ((UEditMeshPolygonsTool *)param_1)->bSpatialDirty = true;
  UMeshTopologySelectionMechanic::NotifyMeshChanged((UMeshTopologySelectionMechanic *)this_00,false)
  ;
  ((UEditMeshPolygonsTool *)param_1)->ModifiedTopologyCounter =
       ((UEditMeshPolygonsTool *)param_1)->ModifiedTopologyCounter + 1;
  UEditMeshPolygonsTool::RebuildTopologyWithGivenExtraCorners
            ((UEditMeshPolygonsTool *)param_1,&this->ExtraCornerVidsBefore);
  TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
            (&((((UEditMeshPolygonsTool *)param_1)->ActivityContext).field0_0x0.DebugPtr)->
              OnUndoRedo,true);
  return;
}

// ToString @ 14cc82ac0

FString * __thiscall
FEditMeshPolygonsToolMeshChange::ToString
          (FEditMeshPolygonsToolMeshChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FEditMeshPolygonsToolMeshChange");
  return __return_storage_ptr__;
}

