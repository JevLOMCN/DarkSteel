// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 4

// Apply @ 14cc34590

void __thiscall
FPolyEditActivityStartChange::Apply(FPolyEditActivityStartChange *this,UObject *param_1)

{
  return;
}

// HasExpired @ 14cc5eb70

bool __thiscall
FPolyEditActivityStartChange::HasExpired(FPolyEditActivityStartChange *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (this->bHaveDoneUndo != false) {
    return true;
  }
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UEditMeshPolygonsTool::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14cc5ebb0;
  }
  param_1 = (UObject *)0x0;
LAB_14cc5ebb0:
  if (*(int *)&param_1[0x20].field_0x8 != this->ActivityTimestamp) {
    return true;
  }
  return false;
}

// Revert @ 14cc74520

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
FPolyEditActivityStartChange::Revert(FPolyEditActivityStartChange *this,UObject *param_1)

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
        &pUVar2->_padding_)) goto LAB_14cc7455a;
  }
  param_1 = (UObject *)0x0;
LAB_14cc7455a:
  UEditMeshPolygonsTool::EndCurrentActivity((UEditMeshPolygonsTool *)param_1,Cancel);
  this->bHaveDoneUndo = true;
  return;
}

// ToString @ 14cc82b20

FString * __thiscall
FPolyEditActivityStartChange::ToString
          (FPolyEditActivityStartChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FPolyEditActivityStartChange");
  return __return_storage_ptr__;
}

