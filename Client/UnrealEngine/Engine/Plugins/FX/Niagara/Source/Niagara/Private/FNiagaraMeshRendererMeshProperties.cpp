// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// StaticStruct @ 148e42540

UScriptStruct * __cdecl FNiagaraMeshRendererMeshProperties::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraMeshRendererMeshProperties.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraMeshRendererMeshProperties.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties,
                         (UObject *)pUVar1,L"NiagaraMeshRendererMeshProperties");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraMeshRendererMeshProperties.OuterSingleton;
}

// FNiagaraMeshRendererMeshProperties @ 1492d1390

FNiagaraMeshRendererMeshProperties * __thiscall
FNiagaraMeshRendererMeshProperties::FNiagaraMeshRendererMeshProperties
          (FNiagaraMeshRendererMeshProperties *this)

{
  undefined8 uVar1;
  double dVar2;
  int iVar3;
  FNiagaraTypeRegistry *this_00;
  
  this->_padding_ = 0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  this->_padding_ = uVar1;
  this->_padding_ = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  this->_padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Pitch;
  this->_padding_ = (longlong)dVar2;
  this->_padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar1;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)&this->_padding_ = 0;
  (this->MeshParameterBinding).ResolvedParameter.Name.ComparisonIndex = 0;
  (this->MeshParameterBinding).ResolvedParameter.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar3 = -1;
  }
  else {
    this_00 = FNiagaraTypeRegistry::Get();
    iVar3 = FNiagaraTypeRegistry::RegisterTypeInternal(this_00,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->MeshParameterBinding).ResolvedParameter.TypeDefHandle.RegisteredTypeIndex = iVar3;
  (this->LODRange).field0_0x0 = (TIntVector2<int>_u_0)0x800000000;
  this->LODMode = LODLevel;
  this->LODLevel = 0;
  this->LODBias = 0;
  this->LODDistanceFactor = 1.0;
  this->bUseLODRange = false;
  return this;
}

// HasValidRenderableMesh @ 1492f3190

bool __thiscall
FNiagaraMeshRendererMeshProperties::HasValidRenderableMesh(FNiagaraMeshRendererMeshProperties *this)

{
  FNiagaraTypeRegistry *this_00;
  FNiagaraTypeDefinition *pFVar1;
  
  if (this->_padding_ != 0) {
    return true;
  }
  if ((this->MeshParameterBinding).ResolvedParameter.Name != (FName)0x0) {
    this_00 = FNiagaraTypeRegistry::Get();
    pFVar1 = FNiagaraTypeRegistry::GetRegisteredType
                       (this_00,(this->MeshParameterBinding).ResolvedParameter.TypeDefHandle.
                                RegisteredTypeIndex);
    if ((pFVar1->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
      return true;
    }
  }
  return false;
}

// ResolveRenderableMesh @ 149304d00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<INiagaraRenderableMesh,1> * __thiscall
FNiagaraMeshRendererMeshProperties::ResolveRenderableMesh
          (FNiagaraMeshRendererMeshProperties *this,
          TSharedPtr<INiagaraRenderableMesh,1> *__return_storage_ptr__,
          FNiagaraEmitterInstance *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  UStaticMesh *pUVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<INiagaraRenderableMesh,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  INiagaraRenderableMesh *pIVar10;
  INiagaraRenderableMeshInterface *local_res20;
  UStaticMesh *local_18 [2];
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_res20 = (INiagaraRenderableMeshInterface *)0x0;
  local_18[0] = (UStaticMesh *)0x0;
  NiagaraMeshRendererPropertiesInternal::ResolveRenderableMeshInternal
            (this,param_1,&local_res20,local_18);
  pUVar5 = local_18[0];
  if ((local_res20 != (INiagaraRenderableMeshInterface *)0x0) &&
     (param_1->ParentSystemInstance != (FNiagaraSystemInstance *)0x0)) {
    (**(code **)((longlong)*local_res20 + 0x10))
              (local_res20,__return_storage_ptr__,param_1->ParentSystemInstance->ID);
    return __return_storage_ptr__;
  }
  if (local_18[0] == (UStaticMesh *)0x0) {
    __return_storage_ptr__->Object = (INiagaraRenderableMesh *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  pTVar7 = ::operator_new(0x78);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pIVar10 = (INiagaraRenderableMesh *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFNiagaraRenderableStaticMesh___00_SharedPointerInternals__6B_
    ;
    FNiagaraRenderableStaticMesh::FNiagaraRenderableStaticMesh
              ((FNiagaraRenderableStaticMesh *)(pTVar7 + 1),pUVar5);
    pIVar10 = (INiagaraRenderableMesh *)(pTVar7 + 1);
    pTVar9 = pTVar7;
    if (pIVar10 == (INiagaraRenderableMesh *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<INiagaraRenderableMesh,1> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_149304e54;
    }
  }
  if (((*(longlong *)&pIVar10->field_0x8 == 0) || (*(longlong *)&pIVar10->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pIVar10->field_0x10 + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(INiagaraRenderableMesh **)&pIVar10->field_0x8 = pIVar10;
    if (pTVar9 != *(TReferenceControllerBase<1> **)&pIVar10->field_0x10) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pIVar10->field_0x10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pIVar10->field_0x10 = pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_149304e54:
  __return_storage_ptr__->Object = pIVar10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

