// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraNanite
// Functions: 3

// StaticStruct @ 14da3dc10

UScriptStruct * __cdecl FNiagaraNaniteMeshRendererMeshProperties::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraNaniteMeshRendererMeshProperties.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NiagaraNanite();
    Z_Registration_Info_UScriptStruct_FNiagaraNaniteMeshRendererMeshProperties.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraNaniteMeshRendererMeshProperties,
                         (UObject *)pUVar1,L"NiagaraNaniteMeshRendererMeshProperties");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraNaniteMeshRendererMeshProperties.OuterSingleton;
}

// FNiagaraNaniteMeshRendererMeshProperties @ 14da3fb00

FNiagaraNaniteMeshRendererMeshProperties * __thiscall
FNiagaraNaniteMeshRendererMeshProperties::FNiagaraNaniteMeshRendererMeshProperties
          (FNiagaraNaniteMeshRendererMeshProperties *this)

{
  float fVar1;
  int iVar2;
  
  (this->Mesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  *(undefined8 *)&(this->Scale).field0_0x0 = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  (this->Scale).field0_0x0._s_0.Z = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  fVar1 = UE::Math::TRotator<float>::ZeroRotator.Yaw;
  (this->Rotation).Pitch = UE::Math::TRotator<float>::ZeroRotator.Pitch;
  (this->Rotation).Yaw = fVar1;
  (this->Rotation).Roll = UE::Math::TRotator<float>::ZeroRotator.Roll;
  (this->MeshParameterBinding).ResolvedParameter.Name.ComparisonIndex = 0;
  (this->MeshParameterBinding).ResolvedParameter.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->MeshParameterBinding).ResolvedParameter.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->MeshParameterBinding).ResolvedParameter.TypeDefHandle.RegisteredTypeIndex = iVar2;
  return this;
}

// GetResolvedMesh @ 14da439b0

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

UStaticMesh * __thiscall
FNiagaraNaniteMeshRendererMeshProperties::GetResolvedMesh
          (FNiagaraNaniteMeshRendererMeshProperties *this,FNiagaraEmitterInstance *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FNiagaraTypeDefinition *pFVar5;
  uint *puVar6;
  UStaticMesh *pUVar7;
  UClass *pUVar8;
  FObjectPtr_u_0 FVar9;
  FObjectPtr_u_0 local_res10;
  FName local_28;
  int local_20;
  void *local_18;
  undefined8 local_10;
  
  if ((param_1 == (FNiagaraEmitterInstance *)0x0) ||
     ((this->MeshParameterBinding).ResolvedParameter.Name == (FName)0x0)) {
LAB_14da43af5:
    return (this->Mesh).field0_0x0.DebugPtr;
  }
  pFVar5 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->MeshParameterBinding).ResolvedParameter.TypeDefHandle);
  if ((pFVar5->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) goto LAB_14da43af5;
  local_20 = (this->MeshParameterBinding).ResolvedParameter.TypeDefHandle.RegisteredTypeIndex;
  local_28 = (this->MeshParameterBinding).ResolvedParameter.Name;
  FVar9.Handle = (UObject *)0x0;
  local_18 = (void *)0x0;
  local_10 = 0;
  puVar6 = (uint *)(**(code **)((param_1->RendererBindings)._padding_ + 0x58))
                             (&param_1->RendererBindings,&local_28,0);
  if (puVar6 == (uint *)0x0) {
LAB_14da43aab:
    local_res10.Handle = (UObject *)0x0;
  }
  else {
    uVar1 = *puVar6;
    if (((int)uVar1 < 0) || ((param_1->RendererBindings).UObjects.ArrayNum <= (int)uVar1))
    goto LAB_14da43aab;
    uVar4 = 0;
    if ((int)uVar1 < (param_1->RendererBindings).UObjects.ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar7 = (UStaticMesh *)(*pcVar2)();
        return pUVar7;
      }
    }
    local_res10 = (FObjectPtr_u_0)
                  ((FObjectPtr_u_0 *)
                  ((param_1->RendererBindings).UObjects.AllocatorInstance.Data +
                  (longlong)(int)uVar1 * 8))->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UStaticMesh *)local_res10.Handle == (UStaticMesh *)0x0) goto LAB_14da43ad3;
      UE::GC::MarkAsReachable(local_res10.Handle);
    }
  }
  if ((UStaticMesh *)local_res10.Handle != (UStaticMesh *)0x0) {
    pUVar8 = Z_Construct_UClass_UStaticMesh_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar8);
    if (bVar3) {
      FVar9 = local_res10;
    }
  }
LAB_14da43ad3:
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return (UStaticMesh *)FVar9.Handle;
}

