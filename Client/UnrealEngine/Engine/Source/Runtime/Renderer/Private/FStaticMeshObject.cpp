// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ~FStaticMeshObject @ 1456de960

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FStaticMeshObject::~FStaticMeshObject(FStaticMeshObject *this)

{
  undefined1 *puVar1;
  int iVar2;
  FSceneInterface *pFVar3;
  FTransformObject *pFVar4;
  FScriptContainerElement *pFVar5;
  
  this->_padding_ = (longlong)&___7FStaticMeshObject__6B_;
  pFVar3 = ((this->PrimitiveSceneData).SceneProxy)->Scene;
  (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,&this->PrimitiveSceneDesc);
  pFVar4 = (this->TransformObject).Reference;
  if (pFVar4 != (FTransformObject *)0x0) {
    FTransformObject::RemoveListener(pFVar4,(FTransformObjectListener *)this);
    pFVar4 = (this->TransformObject).Reference;
    if (pFVar4 != (FTransformObject *)0x0) {
      (this->TransformObject).Reference = (FTransformObject *)0x0;
      puVar1 = &pFVar4->field_0x18;
      LOCK();
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
        (**(code **)(*(longlong *)pFVar4 + 8))(pFVar4,1);
      }
    }
  }
  pFVar5 = (this->CustomPrimitiveData).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar4 = (this->TransformObject).Reference;
  if (pFVar4 != (FTransformObject *)0x0) {
    puVar1 = &pFVar4->field_0x18;
    LOCK();
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
      (**(code **)(*(longlong *)pFVar4 + 8))(pFVar4,1);
    }
  }
  return;
}

// OnTransformObjectDirty @ 145719440

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FStaticMeshObject::OnTransformObjectDirty(FStaticMeshObject *this)

{
  Info local_28;
  
  FTransformObject::GetInfo((this->TransformObject).Reference,&local_28);
  return;
}

