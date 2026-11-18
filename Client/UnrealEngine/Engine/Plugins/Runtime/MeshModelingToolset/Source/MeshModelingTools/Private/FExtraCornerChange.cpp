// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 4

// Apply @ 14cc34530

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
EditMeshPolygonsToolLocals::FExtraCornerChange::Apply(FExtraCornerChange *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UEditMeshPolygonsTool::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14cc3456a;
  }
  param_1 = (UObject *)0x0;
LAB_14cc3456a:
  UEditMeshPolygonsTool::RebuildTopologyWithGivenExtraCorners
            ((UEditMeshPolygonsTool *)param_1,&this->After);
  return;
}

// HasExpired @ 14cc5eb60

bool __thiscall
EditMeshPolygonsToolLocals::FExtraCornerChange::HasExpired
          (FExtraCornerChange *this,UObject *param_1)

{
  return false;
}

// Revert @ 14cc744c0

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
EditMeshPolygonsToolLocals::FExtraCornerChange::Revert(FExtraCornerChange *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UEditMeshPolygonsTool::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14cc744fa;
  }
  param_1 = (UObject *)0x0;
LAB_14cc744fa:
  UEditMeshPolygonsTool::RebuildTopologyWithGivenExtraCorners
            ((UEditMeshPolygonsTool *)param_1,&this->Before);
  return;
}

// ToString @ 14cc82af0

FString * __thiscall
EditMeshPolygonsToolLocals::FExtraCornerChange::ToString
          (FExtraCornerChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FExtraCornerChange");
  return __return_storage_ptr__;
}

