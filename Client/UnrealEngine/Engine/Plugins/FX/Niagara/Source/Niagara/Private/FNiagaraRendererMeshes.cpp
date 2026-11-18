// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 25

// FNiagaraRendererMeshes @ 149333ad0

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

FNiagaraRendererMeshes * __thiscall
FNiagaraRendererMeshes::FNiagaraRendererMeshes
          (FNiagaraRendererMeshes *this,Type param_1,UNiagaraRendererProperties *param_2,
          FNiagaraEmitterInstance *param_3)

{
  undefined1 *puVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  FNiagaraDataSet *this_00;
  code *pcVar8;
  TVector2<float>_u_0 TVar9;
  TVector2<float>_u_0 TVar10;
  bool bVar11;
  FNiagaraRendererMeshes *pFVar12;
  UNiagaraMeshRendererProperties *pUVar13;
  UClass *pUVar14;
  int *piVar15;
  FNiagaraTypeDefinition *pFVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int local_res8 [2];
  int local_res10 [2];
  float local_res18;
  float fStackX_1c;
  undefined4 local_res20;
  undefined4 uStackX_24;
  FNiagaraVariableBase local_70;
  FNiagaraVariableBase local_64 [3];
  
  FNiagaraRenderer::FNiagaraRenderer((FNiagaraRenderer *)this,param_1,param_2,param_3);
  uVar21 = 0;
  *(undefined ***)this = &___7FNiagaraRendererMeshes__6B_;
  (this->Meshes).AllocatorInstance.SecondaryData =
       (ForElementType<FNiagaraRendererMeshes::FMeshData>)0x0;
  uVar19 = 0;
  (this->Meshes).ArrayNum = 0;
  (this->Meshes).ArrayMax = 1;
  this->MeshUsedMax = 0;
  (this->SubImageSize).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  *(undefined8 *)&(this->MeshBoundsScale).field0_0x0 =
       UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  (this->MeshBoundsScale).field0_0x0._s_0.Z = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->LockedAxis).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->LockedAxis).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  (this->DistanceCullRange).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  (this->DistanceCullRangeSquared).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  this->ParticleRendererVisTagOffset = -1;
  this->ParticleMeshIndexOffset = -1;
  this->RendererVisibility = 0;
  this->EmitterRendererVisTagOffset = -1;
  this->EmitterMeshIndexOffset = -1;
  this->MaterialParamValidMask = 0;
  if ((param_3 == (FNiagaraEmitterInstance *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Emitter",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererMeshes.cpp"
                          ,100,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FNiagaraRendererMeshes *)(*pcVar8)();
    return pFVar12;
  }
  if ((param_2 == (UNiagaraRendererProperties *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Props",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererMeshes.cpp"
                          ,0x65,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FNiagaraRendererMeshes *)(*pcVar8)();
    return pFVar12;
  }
  pUVar13 = CastChecked<UNiagaraMeshRendererProperties_const_,UNiagaraRendererProperties_const_>
                      (param_2);
  this->SourceMode = pUVar13->SourceMode;
  this->FacingMode = pUVar13->FacingMode;
  dVar3 = (pUVar13->MeshBoundsScale).field0_0x0._s_0.Y;
  dVar4 = (pUVar13->MeshBoundsScale).field0_0x0._s_0.Z;
  (this->MeshBoundsScale).field0_0x0._s_0.X = (float)(pUVar13->MeshBoundsScale).field0_0x0._s_0.X;
  (this->MeshBoundsScale).field0_0x0._s_0.Y = (float)dVar3;
  (this->MeshBoundsScale).field0_0x0._s_0.Z = (float)dVar4;
  *(uint *)&this->field_0x218 =
       (*(uint *)&pUVar13->field_0xc8 >> 2 ^ *(uint *)&this->field_0x218) & 0x10 ^
       *(uint *)&this->field_0x218;
  dVar3 = (pUVar13->LockedAxis).field0_0x0._s_0.Y;
  dVar4 = (pUVar13->LockedAxis).field0_0x0._s_0.Z;
  (this->LockedAxis).field0_0x0._s_0.X = (float)(pUVar13->LockedAxis).field0_0x0._s_0.X;
  (this->LockedAxis).field0_0x0._s_0.Y = (float)dVar3;
  (this->LockedAxis).field0_0x0._s_0.Z = (float)dVar4;
  this->LockedAxisSpace = pUVar13->LockedAxisSpace;
  this->SortMode = pUVar13->SortMode;
  if (pUVar13->SortPrecision == Default) {
    pUVar14 = Z_Construct_UClass_UNiagaraSettings_NoRegister();
    if ((pUVar14->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar14);
    }
    bVar11 = (pUVar14->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0x1c == '\x01';
  }
  else {
    bVar11 = pUVar13->SortPrecision == High;
  }
  this->bSortHighPrecision = 0;
  *(uint *)&this->field_0x218 = *(uint *)&this->field_0x218 | (uint)bVar11 * 2;
  uVar18 = (*(int *)&pUVar13->field_0xc8 * 2 ^ *(uint *)&this->field_0x218) & 4 ^
           *(uint *)&this->field_0x218;
  *(uint *)&this->field_0x218 = uVar18;
  if (2 < (int)param_1) {
    if (pUVar13->GpuTranslucentLatency == ProjectDefault) {
      pUVar14 = Z_Construct_UClass_UNiagaraSettings_NoRegister();
      if ((pUVar14->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar14);
      }
      uVar18 = *(uint *)&this->field_0x218;
      bVar11 = (pUVar14->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0x1d == '\0';
    }
    else {
      bVar11 = pUVar13->GpuTranslucentLatency == Immediate;
    }
    uVar19 = (uint)bVar11;
  }
  local_res20 = 0;
  uStackX_24 = 0x7f7fffff;
  uVar19 = uVar18 & 0xfffffff7 | uVar19 * 8;
  *(uint *)&this->field_0x218 = uVar19;
  fVar27 = 0.0;
  uVar19 = (uVar19 ^ pUVar13->bOverrideMaterials) & 1 ^ uVar19;
  *(uint *)&this->field_0x218 = uVar19;
  local_res18 = (float)(pUVar13->SubImageSize).field0_0x0._s_0.X;
  fStackX_1c = (float)(pUVar13->SubImageSize).field0_0x0._s_0.Y;
  TVar9._s_0.Y = fStackX_1c;
  TVar9._s_0.X = local_res18;
  (this->SubImageSize).field0_0x0 = TVar9;
  uVar19 = (*(int *)&pUVar13->field_0xc8 << 8 ^ uVar19) & 0x400 ^ uVar19;
  *(uint *)&this->field_0x218 = uVar19;
  uVar19 = ((*(uint *)&pUVar13->field_0xc8 & 8) << 3 ^ uVar19 & 0xffffffbf) & 0xffffff7f;
  *(uint *)&this->field_0x218 = (uVar19 >> 1 ^ uVar19) & 0x20 ^ uVar19;
  (this->DistanceCullRange).field0_0x0 = (TVector2<float>_u_0)0x7f7fffff00000000;
  (this->DistanceCullRangeSquared).field0_0x0 = (TVector2<float>_u_0)0x7f7fffff00000000;
  this->RendererVisibility = pUVar13->RendererVisibility;
  cVar5 = *(char *)((longlong)&pUVar13->_padding_ + 4);
  if (cVar5 == '\0') {
    pUVar14 = Z_Construct_UClass_UNiagaraSettings_NoRegister();
    if ((pUVar14->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar14);
    }
    bVar11 = (pUVar14->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0x1a == '\0';
  }
  else {
    bVar11 = cVar5 == '\x01';
  }
  this->bAccurateMotionVectors = 0;
  *(uint *)&this->field_0x218 = *(uint *)&this->field_0x218 | (uint)bVar11 << 8;
  uVar19 = ((uint)(byte)pUVar13->field_0xcc << 9 ^ *(uint *)&this->field_0x218) & 0x200 ^
           *(uint *)&this->field_0x218;
  *(uint *)&this->field_0x218 = uVar19;
  if (pUVar13->bEnableCameraDistanceCulling != 0) {
    (this->DistanceCullRange).field0_0x0 = *(TVector2<float>_u_0 *)&pUVar13->MinCameraDistance;
    fVar24 = (this->DistanceCullRange).field0_0x0._s_0.X;
    fVar26 = (this->DistanceCullRange).field0_0x0._s_0.Y;
    *(uint *)&this->field_0x218 = uVar19 | 0x20;
    TVar10._s_0.Y = fVar26 * fVar26;
    TVar10._s_0.X = fVar24 * fVar24;
    (this->DistanceCullRangeSquared).field0_0x0 = TVar10;
  }
  fVar24 = (this->LockedAxis).field0_0x0._s_0.X;
  fVar26 = (this->LockedAxis).field0_0x0._s_0.Y;
  fVar2 = (this->LockedAxis).field0_0x0._s_0.Z;
  fVar25 = fVar26 * fVar26 + fVar24 * fVar24 + fVar2 * fVar2;
  if (fVar25 <= __real_322bcc77) {
    fVar24 = 0.0;
    fVar26 = __real_3f800000;
  }
  else {
    fVar25 = __real_3f800000 / SQRT(fVar25);
    fVar27 = fVar25 * fVar26;
    fVar24 = fVar25 * fVar24;
    fVar26 = fVar25 * fVar2;
  }
  (this->LockedAxis).field0_0x0._s_0.X = fVar24;
  (this->LockedAxis).field0_0x0._s_0.Y = fVar27;
  (this->LockedAxis).field0_0x0._s_0.Z = fVar26;
  if ((param_3->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParticleDataSet",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                          ,0x3a,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FNiagaraRendererMeshes *)(*pcVar8)();
    return pFVar12;
  }
  this_00 = param_3->ParticleDataSet;
  this->ParticleRendererVisTagOffset = -1;
  this->EmitterRendererVisTagOffset = -1;
  uVar19 = 0;
  if ((pUVar13->RendererVisibilityTagBinding).bBindingExistsOnSource == '\x01' &&
      (pUVar13->RendererVisibilityTagBinding).bIsCachedParticleValue == '\0') {
    piVar15 = (int *)(**(code **)((param_3->RendererBindings)._padding_ + 0x58))
                               (&param_3->RendererBindings,
                                &(pUVar13->RendererVisibilityTagBinding).ParamMapVariable,0);
    if (piVar15 == (int *)0x0) {
      this->EmitterRendererVisTagOffset = -1;
    }
    else {
      this->EmitterRendererVisTagOffset = *piVar15;
    }
  }
  else {
    pFVar16 = FNiagaraTypeDefinitionHandle::Resolve
                        (&(pUVar13->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle);
    local_70.Name = (pUVar13->RendererVisibilityTagBinding).DataSetName;
    local_70.TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register(&local_70.TypeDefHandle,pFVar16);
    bVar11 = FNiagaraDataSet::GetVariableComponentOffsets
                       (this_00,&local_70,local_res8,&this->ParticleRendererVisTagOffset,local_res10
                       );
    if (bVar11) {
      uVar18 = uVar19;
      if (this->ParticleRendererVisTagOffset != -1) {
        uVar18 = 0x20;
      }
      *(uint *)&this->field_0x218 =
           (uVar18 | *(uint *)&this->field_0x218 & 0x20) ^ *(uint *)&this->field_0x218 & 0xffffffdf;
    }
  }
  this->ParticleMeshIndexOffset = -1;
  this->EmitterMeshIndexOffset = -1;
  if ((pUVar13->MeshIndexBinding).bBindingExistsOnSource == '\x01' &&
      (pUVar13->MeshIndexBinding).bIsCachedParticleValue == '\0') {
    piVar15 = (int *)(**(code **)((param_3->RendererBindings)._padding_ + 0x58))
                               (&param_3->RendererBindings,
                                &(pUVar13->MeshIndexBinding).ParamMapVariable,0);
    if (piVar15 == (int *)0x0) {
      this->EmitterMeshIndexOffset = -1;
    }
    else {
      this->EmitterMeshIndexOffset = *piVar15;
    }
  }
  else {
    pFVar16 = FNiagaraTypeDefinitionHandle::Resolve
                        (&(pUVar13->MeshIndexBinding).ParamMapVariable.TypeDefHandle);
    local_64[0].Name = (pUVar13->MeshIndexBinding).DataSetName;
    local_64[0].TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register(&local_64[0].TypeDefHandle,pFVar16);
    bVar11 = FNiagaraDataSet::GetVariableComponentOffsets
                       (this_00,local_64,local_res8,&this->ParticleMeshIndexOffset,local_res10);
    if (bVar11) {
      if (this->ParticleMeshIndexOffset != -1) {
        uVar19 = 0x20;
      }
      *(uint *)&this->field_0x218 =
           (uVar19 | *(uint *)&this->field_0x218 & 0x20) ^ *(uint *)&this->field_0x218 & 0xffffffdf;
    }
  }
  uVar19 = pUVar13->MaterialParamValidMask;
  this->bSetAnyBoundVars = 0;
  this->MaterialParamValidMask = uVar19;
  this->RendererLayoutWithCustomSorting = &pUVar13->RendererLayoutWithCustomSorting;
  this->RendererLayoutWithoutCustomSorting = &pUVar13->RendererLayoutWithoutCustomSorting;
  if ((param_3->RendererBindings).SortedParameterOffsets.ArrayNum == 0) {
    this->VFBoundOffsetsInParamStore[0] = -1;
    this->VFBoundOffsetsInParamStore[1] = -1;
    this->VFBoundOffsetsInParamStore[2] = -1;
    this->VFBoundOffsetsInParamStore[3] = -1;
    this->VFBoundOffsetsInParamStore[4] = -1;
    this->VFBoundOffsetsInParamStore[5] = -1;
    this->VFBoundOffsetsInParamStore[6] = -1;
    this->VFBoundOffsetsInParamStore[7] = -1;
    this->VFBoundOffsetsInParamStore[8] = -1;
    this->VFBoundOffsetsInParamStore[9] = -1;
    this->VFBoundOffsetsInParamStore[10] = -1;
    this->VFBoundOffsetsInParamStore[0xb] = -1;
    this->VFBoundOffsetsInParamStore[0xc] = -1;
    this->VFBoundOffsetsInParamStore[0xd] = -1;
    this->VFBoundOffsetsInParamStore[0xe] = -1;
    this->VFBoundOffsetsInParamStore[0xf] = -1;
    this->VFBoundOffsetsInParamStore[0x10] = -1;
    this->VFBoundOffsetsInParamStore[0x11] = -1;
    this->VFBoundOffsetsInParamStore[0x12] = -1;
  }
  else {
    if (((int)pUVar13->_padding_ < 0x13) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("VFBindings.Num() >= ENiagaraMeshVFLayout::Type::Num_Max",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererMeshes.cpp"
                            ,0xb3,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      pFVar12 = (FNiagaraRendererMeshes *)(*pcVar8)();
      return pFVar12;
    }
    piVar15 = this->VFBoundOffsetsInParamStore;
    lVar23 = 0xe;
    uVar22 = uVar21;
    if (this->bAccurateMotionVectors != 0) {
      lVar23 = 0x13;
    }
    do {
      *piVar15 = -1;
      iVar20 = (int)uVar21;
      if ((longlong)uVar22 < lVar23) {
        if (((int)pUVar13->_padding_ <= iVar20) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          pFVar12 = (FNiagaraRendererMeshes *)(*pcVar8)();
          return pFVar12;
        }
        if (*(longlong *)(pUVar13->_padding_ + uVar22 * 8) != 0) {
          if (((int)pUVar13->_padding_ <= iVar20) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            pFVar12 = (FNiagaraRendererMeshes *)(*pcVar8)();
            return pFVar12;
          }
          if ((*(byte *)(*(longlong *)(pUVar13->_padding_ + uVar22 * 8) + 0x1d) & 3) == 1) {
            if (((int)pUVar13->_padding_ <= iVar20) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar8 = (code *)swi(3);
              pFVar12 = (FNiagaraRendererMeshes *)(*pcVar8)();
              return pFVar12;
            }
            piVar17 = (int *)(**(code **)((param_3->RendererBindings)._padding_ + 0x58))
                                       (&param_3->RendererBindings,
                                        *(longlong *)(pUVar13->_padding_ + uVar22 * 8) + 8,0);
            if (piVar17 == (int *)0x0) {
              *piVar15 = -1;
            }
            else {
              iVar7 = *piVar17;
              *piVar15 = iVar7;
              if (iVar7 != -1) {
                this->bSetAnyBoundVars = 1;
              }
            }
          }
        }
      }
      uVar21 = (ulonglong)(iVar20 + 1U);
      piVar15 = piVar15 + 1;
      uVar22 = uVar22 + 1;
    } while ((int)(iVar20 + 1U) < 0x13);
  }
  return this;
}

// ~FNiagaraRendererMeshes @ 149336770

void __thiscall FNiagaraRendererMeshes::~FNiagaraRendererMeshes(FNiagaraRendererMeshes *this)

{
  undefined8 *puVar1;
  ForElementType<FNiagaraRendererMeshes::FMeshData> FVar2;
  
  *(undefined ***)this = &___7FNiagaraRendererMeshes__6B_;
  FVar2 = (this->Meshes).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<FNiagaraRendererMeshes::FMeshData>)0x0) {
    FVar2 = (ForElementType<FNiagaraRendererMeshes::FMeshData>)&this->Meshes;
  }
  DestructItems<FNiagaraRendererMeshes::FMeshData,int>((FMeshData *)FVar2,(this->Meshes).ArrayNum);
  FVar2 = (this->Meshes).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FNiagaraRendererMeshes::FMeshData>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  puVar1 = *(undefined8 **)&this->field_0x8;
  *(undefined ***)this = &___7FNiagaraRenderer__6B_;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)&this->field_0x8 = 0;
  if (*(void **)&this->field_0x158 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x158);
  }
  FRayTracingGeometry::~FRayTracingGeometry((FRayTracingGeometry *)&this->field_0x40);
  FRWBuffer::~FRWBuffer((FRWBuffer *)&this->field_0x10);
  return;
}

// operator() @ 149337af0

void __thiscall
`FNiagaraRendererMeshes::Initialize'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  ForElementType<FNiagaraRendererMeshes::FMeshData> *pFVar2;
  
  lVar1 = *(longlong *)this;
  if (-1 < param_1) {
    pFVar2 = *(ForElementType<FNiagaraRendererMeshes::FMeshData> **)(lVar1 + 0x1f0);
    if (*(ForElementType<FNiagaraRendererMeshes::FMeshData> **)(lVar1 + 0x1f0) ==
        (ForElementType<FNiagaraRendererMeshes::FMeshData> *)0x0) {
      pFVar2 = (ForElementType<FNiagaraRendererMeshes::FMeshData> *)(lVar1 + 0x170);
    }
    DestructItems<FNiagaraRendererMeshes::FMeshData,int>
              ((FMeshData *)pFVar2,*(int *)(lVar1 + 0x200));
    *(undefined4 *)(lVar1 + 0x200) = 0;
    if (*(int *)(lVar1 + 0x204) != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraRendererMeshes::FMeshData>_>
                (0x80,0x10,param_1,
                 (ForElementType<FNiagaraRendererMeshes::FMeshData> *)(lVar1 + 0x170),0,
                 (int *)(lVar1 + 0x204));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// operator() @ 149338480

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FNiagaraRendererMeshes::SetupElementForGPUScene'::__l12::<lambda_1>::operator()
          (void *this,FRDGBuilder *param_1,FGPUSceneWriteDelegateParams *param_2)

{
  longlong lVar1;
  FSceneView *pFVar2;
  FSceneViewFamily *pFVar3;
  ISceneRenderer *pIVar4;
  code *pcVar5;
  FRDGBufferUAV *pFVar6;
  longlong lVar7;
  bool bVar8;
  FShaderParametersMetadata *pFVar9;
  undefined8 uVar10;
  EUniformBufferBindingFlags EVar11;
  undefined7 uStack_1f;
  FString local_18;
  
  if (param_2->View == (FSceneView *)0x0) {
    ::FName::ToString((FName *)((longlong)this + 8),&local_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = (param_2->GPUWriteParams).GPUSceneInstancePayloadDataRW;
  lVar1 = *(longlong *)this;
  *(FRDGBufferUAV **)(lVar1 + 0x80) = (param_2->GPUWriteParams).GPUSceneInstanceSceneDataRW;
  *(FRDGBufferUAV **)(lVar1 + 0x88) = pFVar6;
  uVar10 = *(undefined8 *)&(param_2->GPUWriteParams).GPUSceneInstanceSceneDataSOAStride;
  *(FRDGBufferUAV **)(lVar1 + 0x90) = (param_2->GPUWriteParams).GPUScenePrimitiveSceneDataRW;
  *(undefined8 *)(lVar1 + 0x98) = uVar10;
  lVar7 = (param_2->GPUWriteParams)._padding_;
  *(undefined8 *)(lVar1 + 0xa0) =
       *(undefined8 *)&(param_2->GPUWriteParams).GPUSceneNumAllocatedPrimitives;
  *(longlong *)(lVar1 + 0xa8) = lVar7;
  uVar10 = *(undefined8 *)&(param_2->GPUWriteParams).GPUSceneWriterUB.field_0x8;
  *(undefined8 *)(lVar1 + 0xb0) = *(undefined8 *)&(param_2->GPUWriteParams).GPUSceneWriterUB;
  *(undefined8 *)(lVar1 + 0xb8) = uVar10;
  uVar10 = *(undefined8 *)&(param_2->GPUWriteParams).CommonParameters.GPUSceneInstanceDataTileStride
  ;
  *(undefined8 *)(lVar1 + 0xc0) = *(undefined8 *)&(param_2->GPUWriteParams).CommonParameters;
  *(undefined8 *)(lVar1 + 200) = uVar10;
  uVar10 = *(undefined8 *)&(param_2->GPUWriteParams).CommonParameters.GPUSceneNumLightmapDataItems;
  *(undefined8 *)(lVar1 + 0xd0) =
       *(undefined8 *)&(param_2->GPUWriteParams).CommonParameters.GPUSceneMaxAllocatedInstanceId;
  *(undefined8 *)(lVar1 + 0xd8) = uVar10;
  pFVar2 = param_2->View;
  pFVar9 = FViewUniformShaderParameters::GetStructMetadata();
  lVar1 = *(longlong *)this;
  EVar11 = Static;
  if (pFVar9->BindingFlags != StaticAndShader) {
    EVar11 = pFVar9->BindingFlags;
  }
  *(TUniformBufferRef<FViewUniformShaderParameters> *)(lVar1 + 0x60) = pFVar2->ViewUniformBuffer;
  *(ulonglong *)(lVar1 + 0x68) = CONCAT71(uStack_1f,EVar11);
  pFVar3 = param_2->View->Family;
  if (pFVar3 != (FSceneViewFamily *)0x0) {
    if ((pFVar3->SceneRenderer == (ISceneRenderer *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SceneRenderer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                           ,0xa7b,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar4 = pFVar3->SceneRenderer;
    if (pIVar4 != (ISceneRenderer *)0x0) {
      uVar10 = (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,param_1);
      goto LAB_1493385bf;
    }
  }
  uVar10 = 0;
LAB_1493385bf:
  pFVar9 = ::GetForwardDeclaredShaderParametersStructMetadata((FSceneUniformParameters *)0x0);
  lVar1 = *(longlong *)this;
  EVar11 = Static;
  if (pFVar9->BindingFlags != StaticAndShader) {
    EVar11 = pFVar9->BindingFlags;
  }
  *(undefined8 *)(lVar1 + 0x70) = uVar10;
  *(ulonglong *)(lVar1 + 0x78) = CONCAT71(uStack_1f,EVar11);
  *(uint *)(*(longlong *)this + 0x230) = param_2->PersistentPrimitiveId;
  lVar1 = *(longlong *)this;
  FNiagaraGPUSceneUtils::AddUpdateMeshParticleInstancesPass
            (param_1,(FUpdateMeshParticleInstancesParams *)(lVar1 + 0x60),*(Type *)(lVar1 + 8),
             *(bool *)(lVar1 + 0xc));
  return;
}

// operator() @ 149338cc0

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

void __thiscall
`FNiagaraRendererMeshes::Initialize'::__l2::<lambda_2>::operator()
          (void *this,FNiagaraMeshRendererMeshProperties *param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ForElementType<unsigned_int> FVar5;
  code *pcVar6;
  undefined4 uVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  ulonglong *puVar12;
  TQuat<double> *pTVar13;
  ForElementType<unsigned_int> *pFVar14;
  UClass *pUVar15;
  ForElementType<unsigned_int> FVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ForElementType<FNiagaraRendererMeshes::FMeshData> *pFVar20;
  ForElementType<unsigned_int> FVar21;
  longlong *plVar22;
  ForAnyElementType FVar23;
  ForElementType<unsigned_int> *pFVar24;
  undefined4 uVar25;
  undefined1 local_res18 [8];
  int local_res20;
  uchar local_138 [16];
  TSharedPtr<INiagaraRenderableMesh,1> local_128;
  uint local_118;
  undefined8 local_110;
  ulonglong local_108;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_100;
  longlong local_f0;
  FScriptContainerElement *local_e8;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_bc;
  float local_b4;
  undefined1 local_b0 [8];
  undefined1 local_a8 [16];
  ForElementType<unsigned_int> local_98;
  ForElementType<unsigned_int> FStack_90;
  TQuat<double> local_88 [2];
  
  FNiagaraMeshRendererMeshProperties::ResolveRenderableMesh
            (param_1,&local_128,*(FNiagaraEmitterInstance **)((longlong)this + 0x10));
  if ((ForElementType<unsigned_int>)local_128.Object != (ForElementType<unsigned_int>)0x0) {
    local_108 = 0;
    local_res20 = 1;
    *(int *)(*(longlong *)this + 0x210) = **(int **)((longlong)this + 8) + 1;
    if (param_1->LODMode == LODLevel) {
      local_108 = (ulonglong)(uint)param_1->LODLevel;
      local_res20 = param_1->LODLevel + 1;
    }
    else if (param_1->LODMode == PerParticle) {
      if (((ForElementType<unsigned_int>)local_128.Object == (ForElementType<unsigned_int>)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar12 = (ulonglong *)
                (**(code **)(*(longlong *)local_128.Object + 0x48))(local_128.Object,local_b0);
      uVar19 = *puVar12;
      local_110._4_4_ = (int)(uVar19 >> 0x20);
      local_res20 = local_110._4_4_;
      if (param_1->bUseLODRange == false) {
        local_108 = uVar19 & 0xffffffff;
      }
      else {
        local_108 = uVar19 & 0xffffffff;
        if ((int)uVar19 < (param_1->LODRange).field0_0x0._s_0.X) {
          local_108 = (ulonglong)(uint)(param_1->LODRange).field0_0x0._s_0.X;
        }
        if (local_110._4_4_ < (param_1->LODRange).field0_0x0._s_0.Y) {
          local_res20 = (param_1->LODRange).field0_0x0._s_0.Y;
        }
      }
      uVar1 = *(uint *)(*(longlong *)this + 0x218);
      uVar10 = 0;
      if (1 < local_res20 - (int)local_108) {
        uVar10 = 0x80;
      }
      *(uint *)(*(longlong *)this + 0x218) = (uVar10 | uVar1 & 0x80) ^ uVar1 & 0xffffff7f;
      local_110 = uVar19;
    }
    uVar7 = __real_bf800000;
    local_118 = (uint)local_108;
    uVar19 = local_108;
    if ((int)local_118 < local_res20) {
      do {
        uVar17 = local_108;
        iVar2 = local_res20;
        lVar18 = *(longlong *)this;
        iVar11 = *(int *)(lVar18 + 0x200);
        if (iVar11 == *(int *)(lVar18 + 0x204)) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraRendererMeshes::FMeshData>_>
                             (0x1080,(ForElementType<FNiagaraRendererMeshes::FMeshData> *)
                                     (lVar18 + 0x170),(int *)(lVar18 + 0x204));
        }
        *(int *)(lVar18 + 0x200) = iVar11 + 1;
        pFVar20 = (ForElementType<FNiagaraRendererMeshes::FMeshData> *)(lVar18 + 0x170);
        if (*(ForElementType<FNiagaraRendererMeshes::FMeshData> **)(lVar18 + 0x1f0) !=
            (ForElementType<FNiagaraRendererMeshes::FMeshData> *)0x0) {
          pFVar20 = *(ForElementType<FNiagaraRendererMeshes::FMeshData> **)(lVar18 + 0x1f0);
        }
        pFVar24 = (ForElementType<unsigned_int> *)(pFVar20->InlineData + (longlong)iVar11 * 0x80);
        DefaultConstructItems<FNiagaraRendererMeshes::FMeshData,int>(pFVar24,1);
        if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_98 = *pFVar24;
        FStack_90 = pFVar24[1];
        *pFVar24 = (ForElementType<unsigned_int>)local_128.Object;
        pFVar24[1] = (ForElementType<unsigned_int>)
                     local_128.SharedReferenceCount.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)FStack_90);
        *(undefined4 *)(pFVar24 + 2) = **(undefined4 **)((longlong)this + 8);
        pFVar24[2].field_0x4 = param_1->LODMode;
        iVar11 = (int)uVar19;
        *(int *)(pFVar24 + 3) = iVar11;
        local_c0 = (float)(double)param_1->_padding_;
        local_c8 = CONCAT44((float)(double)param_1->_padding_,(float)(double)param_1->_padding_);
        *(undefined8 *)&pFVar24[5].field_0x4 = local_c8;
        *(float *)&pFVar24[6].field_0x4 = local_c0;
        *(uchar *)(pFVar24 + 7) = (uchar)param_1->_padding_;
        local_b4 = (float)(double)param_1->_padding_;
        local_bc = CONCAT44((float)(double)param_1->_padding_,(float)(double)param_1->_padding_);
        *(undefined8 *)&pFVar24[7].field_0x4 = local_bc;
        *(float *)&pFVar24[8].field_0x4 = local_b4;
        pTVar13 = UE::Math::TRotator<double>::Quaternion
                            ((TRotator<double> *)&param_1->_padding_,local_88);
        local_d8 = (float)pTVar13->X;
        fStack_d4 = (float)pTVar13->Y;
        fStack_d0 = (float)pTVar13->Z;
        fStack_cc = (float)pTVar13->W;
        *(float *)(pFVar24 + 10) = local_d8;
        *(float *)&pFVar24[10].field_0x4 = fStack_d4;
        *(float *)(pFVar24 + 0xb) = fStack_d0;
        *(float *)&pFVar24[0xb].field_0x4 = fStack_cc;
        if (param_1->LODMode == LODBias) {
          if (((ForElementType<unsigned_int>)local_128.Object == (ForElementType<unsigned_int>)0x0)
             && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (**(code **)(*(longlong *)local_128.Object + 8))(local_128.Object,param_1->LODBias);
        }
        else if (((byte)(param_1->LODMode - ByComponentBounds) < 3) &&
                (*(float *)&pFVar24[3].field_0x4 = param_1->LODDistanceFactor,
                param_1->LODMode == PerParticle)) {
          if (((ForElementType<unsigned_int>)local_128.Object == (ForElementType<unsigned_int>)0x0)
             && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar14 = (ForElementType<unsigned_int> *)
                    (**(code **)(*(longlong *)local_128.Object + 0x50))
                              (local_128.Object,local_a8,uVar19);
          pFVar24[4] = *pFVar14;
          *(undefined4 *)(pFVar24 + 5) = *(undefined4 *)(pFVar14 + 1);
          if (iVar11 < iVar2 + -1) {
            uVar25 = *(undefined4 *)(pFVar24 + 4);
          }
          else {
            uVar25 = 0;
          }
          *(undefined4 *)(pFVar24 + 4) = uVar25;
          uVar25 = uVar7;
          if ((int)uVar17 < iVar11) {
            uVar25 = *(undefined4 *)&pFVar24[4].field_0x4;
          }
          *(undefined4 *)&pFVar24[4].field_0x4 = uVar25;
        }
        local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_100.ArrayNum = 0;
        local_100.ArrayMax = 0;
        if (((ForElementType<unsigned_int>)local_128.Object == (ForElementType<unsigned_int>)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (**(code **)(*(longlong *)local_128.Object + 0x40))(local_128.Object,&local_100);
        UNiagaraMeshRendererProperties::ApplyMaterialOverrides
                  (*(UNiagaraMeshRendererProperties **)((longlong)this + 0x18),
                   *(FNiagaraEmitterInstance **)((longlong)this + 0x10),&local_100);
        uVar17 = (ulonglong)local_100.ArrayNum;
        local_110 = CONCAT44(local_110._4_4_,local_100.ArrayNum);
        local_e8 = local_100.AllocatorInstance.Data + uVar17 * 8;
        uVar19 = uVar17;
        FVar23.Data = local_100.AllocatorInstance.Data;
        while( true ) {
          pFVar8 = local_e8;
          if ((int)uVar17 != (int)uVar19) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res18);
          }
          if (FVar23.Data == pFVar8) break;
          FVar21 = (ForElementType<unsigned_int>)(pFVar24 + 0xc);
          lVar18 = *(longlong *)FVar23.Data;
          plVar3 = *(longlong **)(*(longlong *)this + 0x158);
          iVar11 = *(int *)(*(longlong *)this + 0x160);
          local_f0 = lVar18;
          for (plVar22 = plVar3; plVar22 != plVar3 + iVar11; plVar22 = plVar22 + 1) {
            lVar4 = *plVar22;
            if (lVar4 == lVar18) {
LAB_1493391bf:
              local_138._0_4_ = (undefined4)((longlong)plVar22 - (longlong)plVar3 >> 3);
              goto LAB_1493391da;
            }
            if (lVar4 != 0) {
              pUVar15 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
              iVar2 = (int)pUVar15->_padding_;
              lVar18 = local_f0;
              if ((iVar2 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
                  &pUVar15->_padding_)) {
                if (*(longlong *)(lVar4 + 0x130) == 0) {
                  bVar9 = local_f0 == 0;
                }
                else {
                  bVar9 = *(longlong *)(lVar4 + 0x130) == local_f0;
                }
                if (bVar9) goto LAB_1493391bf;
              }
            }
          }
          local_138[0] = 0xff;
          local_138[1] = 0xff;
          local_138[2] = 0xff;
          local_138[3] = 0xff;
LAB_1493391da:
          FVar5 = pFVar24[0xe];
          FVar16 = FVar21;
          if (FVar5 != (ForElementType<unsigned_int>)0x0) {
            FVar16 = FVar5;
          }
          if ((ulonglong)FVar16 <= local_138) {
            FVar16 = FVar21;
            if (FVar5 != (ForElementType<unsigned_int>)0x0) {
              FVar16 = FVar5;
            }
            if ((local_138 <
                 (uchar *)((longlong)FVar16 + (longlong)*(int *)&pFVar24[0xf].field_0x4 * 4)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          iVar11 = *(int *)(pFVar24 + 0xf);
          if (iVar11 == *(int *)&pFVar24[0xf].field_0x4) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                               (0x404,(ForElementType<unsigned_int> *)FVar21,
                                (int *)&pFVar24[0xf].field_0x4);
          }
          uVar19 = local_110 & 0xffffffff;
          *(int *)(pFVar24 + 0xf) = iVar11 + 1;
          if (pFVar24[0xe] != (ForElementType<unsigned_int>)0x0) {
            FVar21 = pFVar24[0xe];
          }
          FVar23.Data = FVar23.Data + 8;
          *(undefined4 *)((longlong)FVar21 + (longlong)iVar11 * 4) = local_138._0_4_;
          uVar17 = local_100._8_8_ & 0xffffffff;
        }
        if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.AllocatorInstance.Data);
        }
        local_118 = local_118 + 1;
        uVar19 = (ulonglong)local_118;
      } while ((int)local_118 < local_res20);
    }
  }
  **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.SharedReferenceCount.ReferenceController);
  return;
}

// CalculateMeshUsed @ 14933ed70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FNiagaraRendererMeshes::CalculateMeshUsed
          (FNiagaraRendererMeshes *this,FRHICommandListBase *param_1,
          FParticleMeshRenderData *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  ForElementType<unsigned_int> FVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ForElementType<unsigned_int> FVar16;
  TBitArray<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this_00;
  ulonglong uVar17;
  ulonglong uVar15;
  
  if (((this->ParticleRendererVisTagOffset != -1) || (this->ParticleMeshIndexOffset != -1)) &&
     (this->field_0x144 == '\0')) {
    uVar2 = param_2->SourceParticleData->NumInstances;
    if (((int)uVar2 <= GNiagaraMeshRendererCalcMeshUsedParticleCount) &&
       (this->SourceMode == Particles)) {
      plVar6 = (longlong *)param_2->DynamicDataMesh->_padding_;
      if (plVar6 == (longlong *)0x0) {
        lVar12 = param_2->DynamicDataMesh->_padding_;
      }
      else {
        lVar12 = (**(code **)(*plVar6 + 0x10))(plVar6,param_1,0);
      }
      uVar17 = 0;
      if (this->ParticleRendererVisTagOffset != -1) {
        uVar14 = 0;
        if (0 < (int)uVar2) {
          uVar13 = uVar17;
          uVar15 = uVar17;
          do {
            uVar14 = (uint)uVar15;
            if (*(int *)((ulonglong)
                         (uint)(this->ParticleRendererVisTagOffset * *(int *)(lVar12 + 0x130)) +
                         *(longlong *)(lVar12 + 0x28) + uVar13 * 4) == this->RendererVisibility)
            break;
            uVar14 = uVar14 + 1;
            uVar15 = (ulonglong)uVar14;
            uVar13 = uVar13 + 1;
          } while ((longlong)uVar13 < (longlong)(int)uVar2);
        }
        if (uVar14 == uVar2) {
          return false;
        }
      }
      if (this->ParticleMeshIndexOffset != -1) {
        this_00 = &param_2->MeshUsed;
        TBitArray<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::AddUninitialized
                  (this_00,this->MeshUsedMax);
        TBitArray<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::SetRange
                  (this_00,0,this->MeshUsedMax,false);
        iVar3 = *(int *)(lVar12 + 0x130);
        bVar9 = false;
        iVar4 = this->ParticleMeshIndexOffset;
        lVar12 = *(longlong *)(lVar12 + 0x28);
        if ((int)uVar2 < 1) {
          return false;
        }
        do {
          iVar5 = *(int *)((ulonglong)(uint)(iVar3 * iVar4) + lVar12 + uVar17 * 4);
          if ((-1 < iVar5) && (iVar5 < this->MeshUsedMax)) {
            if (((param_2->MeshUsed).NumBits <= iVar5) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar9)) {
              pcVar8 = (code *)swi(3);
              uVar10 = (*pcVar8)();
              return (bool)uVar10;
            }
            FVar7 = (param_2->MeshUsed).AllocatorInstance.SecondaryData;
            FVar16 = (ForElementType<unsigned_int>)this_00;
            if (FVar7 != (ForElementType<unsigned_int>)0x0) {
              FVar16 = FVar7;
            }
            iVar11 = iVar5;
            if (iVar5 < 0) {
              iVar11 = iVar5 + 0x1f;
            }
            puVar1 = (uint *)((longlong)FVar16 + (longlong)(iVar11 >> 5) * 4);
            bVar9 = true;
            *puVar1 = *puVar1 | 1 << ((byte)iVar5 & 0x1f);
          }
          uVar17 = uVar17 + 1;
          if ((longlong)(int)uVar2 <= (longlong)uVar17) {
            return bVar9;
          }
        } while( true );
      }
    }
  }
  return true;
}

// CreateCommonShaderParams @ 1493424a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraMeshCommonParameters * __thiscall
FNiagaraRendererMeshes::CreateCommonShaderParams
          (FNiagaraRendererMeshes *this,FNiagaraMeshCommonParameters *__return_storage_ptr__,
          FParticleMeshRenderData *param_1,FSceneView *param_2,FMeshData *param_3,
          FNiagaraSceneProxy *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ENiagaraRendererSourceDataMode EVar4;
  FNiagaraRendererLayout *pFVar5;
  FScriptContainerElement *pFVar6;
  FNiagaraDynamicDataMesh *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  TVector<float> *pTVar12;
  FNiagaraMeshCommonParameters *pFVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  int *piVar19;
  ulonglong uVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  if (((this->field_0x140 & 1) == 0) && ((param_4->DynamicData).bUseCullProxy == false)) {
    iVar15 = 0;
  }
  else {
    iVar15 = 1;
  }
  uVar18 = 0;
  (__return_storage_ptr__->MeshRotation).field0_0x0._s_0.W = 1.0;
  __return_storage_ptr__->NiagaraParticleDataFloat = (FRHIShaderResourceView *)0x0;
  __return_storage_ptr__->NiagaraParticleDataHalf = (FRHIShaderResourceView *)0x0;
  __return_storage_ptr__->NiagaraParticleDataInt = (FRHIShaderResourceView *)0x0;
  __return_storage_ptr__->SortedIndices = (FRHIShaderResourceView *)0x0;
  *(undefined8 *)&(__return_storage_ptr__->MeshRotation).field0_0x0 = 0;
  (__return_storage_ptr__->MeshRotation).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultRotation).field0_0x0 = 0;
  (__return_storage_ptr__->DefaultRotation).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultPrevRotation).field0_0x0 = 0;
  (__return_storage_ptr__->DefaultPrevRotation).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->DefaultRotation).field0_0x0._s_0.W = 1.0;
  (__return_storage_ptr__->DefaultPrevRotation).field0_0x0._s_0.W = 1.0;
  __return_storage_ptr__->NiagaraParticleDataFloat = param_1->ParticleFloatSRV;
  __return_storage_ptr__->NiagaraParticleDataHalf = param_1->ParticleHalfSRV;
  __return_storage_ptr__->NiagaraParticleDataInt = param_1->ParticleIntSRV;
  uVar11 = param_1->ParticleHalfDataStride;
  if (param_1->ParticleHalfDataStride < param_1->ParticleFloatDataStride) {
    uVar11 = param_1->ParticleFloatDataStride;
  }
  __return_storage_ptr__->NiagaraFloatDataStride = uVar11;
  __return_storage_ptr__->NiagaraIntDataStride = param_1->ParticleIntDataStride;
  __return_storage_ptr__->SortedIndices = param_1->ParticleSortedIndicesSRV;
  __return_storage_ptr__->SortedIndicesOffset = param_1->ParticleSortedIndicesOffset;
  pTVar12 = FNiagaraSceneProxy::GetLWCRenderTile(param_4);
  *(undefined8 *)&(__return_storage_ptr__->SystemLWCTile).field0_0x0 =
       *(undefined8 *)&pTVar12->field0_0x0;
  (__return_storage_ptr__->SystemLWCTile).field0_0x0._s_0.Z = (pTVar12->field0_0x0)._s_0.Z;
  __return_storage_ptr__->bLocalSpace = iVar15;
  __return_storage_ptr__->AccurateMotionVectors = this->bAccurateMotionVectors;
  __return_storage_ptr__->DeltaSeconds = (param_2->Family->Time).DeltaWorldTimeSeconds;
  __return_storage_ptr__->FacingMode = (uint)this->FacingMode;
  *(undefined8 *)&(__return_storage_ptr__->MeshScale).field0_0x0 =
       *(undefined8 *)&(param_3->Scale).field0_0x0;
  (__return_storage_ptr__->MeshScale).field0_0x0._s_0.Z = (param_3->Scale).field0_0x0._s_0.Z;
  fVar22 = (param_3->Rotation).Y;
  fVar23 = (param_3->Rotation).Z;
  fVar24 = (param_3->Rotation).W;
  (__return_storage_ptr__->MeshRotation).field0_0x0._s_0.X = (param_3->Rotation).X;
  (__return_storage_ptr__->MeshRotation).field0_0x0._s_0.Y = fVar22;
  (__return_storage_ptr__->MeshRotation).field0_0x0._s_0.Z = fVar23;
  (__return_storage_ptr__->MeshRotation).field0_0x0._s_0.W = fVar24;
  bVar21 = param_3->PivotOffsetSpace != Mesh;
  if (bVar21) {
    dVar1 = (param_1->WorldSpacePivotOffset).field0_0x0._s_0.Y;
    dVar2 = (param_1->WorldSpacePivotOffset).field0_0x0._s_0.Z;
    (__return_storage_ptr__->MeshOffset).field0_0x0._s_0.X =
         (float)(param_1->WorldSpacePivotOffset).field0_0x0._s_0.X;
    (__return_storage_ptr__->MeshOffset).field0_0x0._s_0.Y = (float)dVar1;
    (__return_storage_ptr__->MeshOffset).field0_0x0._s_0.Z = (float)dVar2;
  }
  else {
    *(undefined8 *)&(__return_storage_ptr__->MeshOffset).field0_0x0 =
         *(undefined8 *)&(param_3->PivotOffset).field0_0x0;
    (__return_storage_ptr__->MeshOffset).field0_0x0._s_0.Z =
         (param_3->PivotOffset).field0_0x0._s_0.Z;
  }
  __return_storage_ptr__->bMeshOffsetIsWorldSpace = (uint)bVar21;
  __return_storage_ptr__->bLockedAxisEnable = this->bLockedAxisEnable;
  *(undefined8 *)&(__return_storage_ptr__->LockedAxis).field0_0x0 =
       *(undefined8 *)&(this->LockedAxis).field0_0x0;
  (__return_storage_ptr__->LockedAxis).field0_0x0._s_0.Z = (this->LockedAxis).field0_0x0._s_0.Z;
  __return_storage_ptr__->LockedAxisSpace = (uint)this->LockedAxisSpace;
  if ((char)iVar15 == '\0') {
    dVar1 = (double)param_4->_padding_;
    dVar2 = (double)param_4->_padding_;
    dVar3 = (double)param_4->_padding_;
    pTVar12 = FNiagaraSceneProxy::GetLWCRenderTile(param_4);
    fVar23 = (float)(dVar1 - (double)((pTVar12->field0_0x0)._s_0.Z * __real_4a000000));
    fVar24 = (float)(dVar2 - (double)((pTVar12->field0_0x0)._s_0.Y * __real_4a000000));
    fVar22 = (float)(dVar3 - (double)((pTVar12->field0_0x0)._s_0.X * __real_4a000000));
  }
  else {
    fVar23 = 0.0;
    fVar24 = 0.0;
    fVar22 = 0.0;
  }
  (__return_storage_ptr__->DefaultPosition).field0_0x0._s_0.X = fVar22;
  uVar11 = 0xffffffff;
  (__return_storage_ptr__->DefaultPosition).field0_0x0._s_0.Y = fVar24;
  (__return_storage_ptr__->DefaultPosition).field0_0x0._s_0.Z = fVar23;
  fVar22 = (__return_storage_ptr__->DefaultPosition).field0_0x0._s_0.Z;
  *(undefined8 *)&(__return_storage_ptr__->DefaultPrevPosition).field0_0x0 =
       *(undefined8 *)&(__return_storage_ptr__->DefaultPosition).field0_0x0;
  (__return_storage_ptr__->DefaultPrevPosition).field0_0x0._s_0.Z = fVar22;
  *(undefined8 *)&(__return_storage_ptr__->DefaultVelocity).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->DefaultVelocity).field0_0x0 + 8) = 0;
  fVar22 = (__return_storage_ptr__->DefaultVelocity).field0_0x0._s_0.Z;
  *(undefined8 *)&(__return_storage_ptr__->DefaultPrevVelocity).field0_0x0 =
       *(undefined8 *)&(__return_storage_ptr__->DefaultVelocity).field0_0x0;
  (__return_storage_ptr__->DefaultPrevVelocity).field0_0x0._s_0.Z = fVar22;
  (__return_storage_ptr__->DefaultScale).field0_0x0._s_0.X = 1.0;
  (__return_storage_ptr__->DefaultScale).field0_0x0._s_0.Y = 1.0;
  (__return_storage_ptr__->DefaultScale).field0_0x0._s_0.Z = 1.0;
  fVar22 = (__return_storage_ptr__->DefaultScale).field0_0x0._s_0.Z;
  *(undefined8 *)&(__return_storage_ptr__->DefaultPrevScale).field0_0x0 =
       *(undefined8 *)&(__return_storage_ptr__->DefaultScale).field0_0x0;
  (__return_storage_ptr__->DefaultPrevScale).field0_0x0._s_0.Z = fVar22;
  *(undefined8 *)&(__return_storage_ptr__->DefaultRotation).field0_0x0 = 0;
  (__return_storage_ptr__->DefaultRotation).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->DefaultRotation).field0_0x0._s_0.W = 1.0;
  uVar9 = *(undefined8 *)((longlong)&(__return_storage_ptr__->DefaultRotation).field0_0x0 + 8);
  *(undefined8 *)&(__return_storage_ptr__->DefaultPrevRotation).field0_0x0 =
       *(undefined8 *)&(__return_storage_ptr__->DefaultRotation).field0_0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->DefaultPrevRotation).field0_0x0 + 8) = uVar9;
  __return_storage_ptr__->DefaultPrevCameraOffset = 0.0;
  __return_storage_ptr__->PrevScaleDataOffset = -1;
  __return_storage_ptr__->PrevRotationDataOffset = -1;
  __return_storage_ptr__->PrevPositionDataOffset = -1;
  __return_storage_ptr__->PrevVelocityDataOffset = -1;
  __return_storage_ptr__->PrevCameraOffsetDataOffset = -1;
  EVar4 = this->SourceMode;
  if (EVar4 == Particles) {
    pFVar5 = param_1->RendererLayout;
    bVar21 = IsInParallelRenderingThread();
    if ((!bVar21) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInParallelRenderingThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraRendererProperties.h"
                            ,0x9b,L""), bVar21)) {
      pcVar8 = (code *)swi(3);
      pFVar13 = (FNiagaraMeshCommonParameters *)(*pcVar8)();
      return pFVar13;
    }
    pFVar6 = (pFVar5->VFVariables_RT).AllocatorInstance.Data;
    iVar15 = (pFVar5->VFVariables_RT).ArrayNum;
    if ((iVar15 < 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar21)) {
      pcVar8 = (code *)swi(3);
      pFVar13 = (FNiagaraMeshCommonParameters *)(*pcVar8)();
      return pFVar13;
    }
    if ((iVar15 < 4) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar21)) {
      pcVar8 = (code *)swi(3);
      pFVar13 = (FNiagaraMeshCommonParameters *)(*pcVar8)();
      return pFVar13;
    }
    uVar10 = 0xffffffff;
    uVar14 = 0xffffffff;
    if (*(ushort *)(pFVar6 + 0x1a) != 0xffff) {
      uVar14 = (uint)*(ushort *)(pFVar6 + 0x1a);
    }
    __return_storage_ptr__->ScaleDataOffset =
         -(uint)(pFVar6[0x1f] != (FScriptContainerElement)0x0) & 0x80000000 | uVar14;
    if ((iVar15 < 5) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar21)) {
      pcVar8 = (code *)swi(3);
      pFVar13 = (FNiagaraMeshCommonParameters *)(*pcVar8)();
      return pFVar13;
    }
    uVar14 = uVar10;
    if (*(ushort *)(pFVar6 + 0x22) != 0xffff) {
      uVar14 = (uint)*(ushort *)(pFVar6 + 0x22);
    }
    __return_storage_ptr__->RotationDataOffset =
         -(uint)(pFVar6[0x27] != (FScriptContainerElement)0x0) & 0x80000000 | uVar14;
    if ((iVar15 < 1) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar21)) {
      pcVar8 = (code *)swi(3);
      pFVar13 = (FNiagaraMeshCommonParameters *)(*pcVar8)();
      return pFVar13;
    }
    uVar14 = uVar10;
    if (*(ushort *)(pFVar6 + 2) != 0xffff) {
      uVar14 = (uint)*(ushort *)(pFVar6 + 2);
    }
    __return_storage_ptr__->PositionDataOffset =
         -(uint)(pFVar6[7] != (FScriptContainerElement)0x0) & 0x80000000 | uVar14;
    if ((iVar15 < 2) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar21)) {
      pcVar8 = (code *)swi(3);
      pFVar13 = (FNiagaraMeshCommonParameters *)(*pcVar8)();
      return pFVar13;
    }
    if (*(ushort *)(pFVar6 + 10) != 0xffff) {
      uVar10 = (uint)*(ushort *)(pFVar6 + 10);
    }
    __return_storage_ptr__->VelocityDataOffset =
         -(uint)(pFVar6[0xf] != (FScriptContainerElement)0x0) & 0x80000000 | uVar10;
    if ((iVar15 < 0xe) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar21)) {
      pcVar8 = (code *)swi(3);
      pFVar13 = (FNiagaraMeshCommonParameters *)(*pcVar8)();
      return pFVar13;
    }
    uVar10 = 0xffffffff;
    uVar14 = 0xffffffff;
    if (*(ushort *)(pFVar6 + 0x6a) != 0xffff) {
      uVar14 = (uint)*(ushort *)(pFVar6 + 0x6a);
    }
    __return_storage_ptr__->CameraOffsetDataOffset =
         -(uint)(pFVar6[0x6f] != (FScriptContainerElement)0x0) & 0x80000000 | uVar14;
    if (this->bAccurateMotionVectors != 0) {
      if ((iVar15 < 0x10) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        pFVar13 = (FNiagaraMeshCommonParameters *)(*pcVar8)();
        return pFVar13;
      }
      uVar14 = uVar10;
      if (*(ushort *)(pFVar6 + 0x7a) != 0xffff) {
        uVar14 = (uint)*(ushort *)(pFVar6 + 0x7a);
      }
      uVar14 = -(uint)(pFVar6[0x7f] != (FScriptContainerElement)0x0) & 0x80000000 | uVar14;
      if (uVar14 == 0xffffffff) {
        if ((iVar15 < 4) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar21)) {
          pcVar8 = (code *)swi(3);
          pFVar13 = (FNiagaraMeshCommonParameters *)(*pcVar8)();
          return pFVar13;
        }
        uVar14 = uVar10;
        if (*(ushort *)(pFVar6 + 0x1a) != 0xffff) {
          uVar14 = (uint)*(ushort *)(pFVar6 + 0x1a);
        }
        uVar14 = -(uint)(pFVar6[0x1f] != (FScriptContainerElement)0x0) & 0x80000000 | uVar14;
      }
      __return_storage_ptr__->PrevScaleDataOffset = uVar14;
      if ((iVar15 < 0x11) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        pFVar13 = (FNiagaraMeshCommonParameters *)(*pcVar8)();
        return pFVar13;
      }
      uVar14 = uVar10;
      if (*(ushort *)(pFVar6 + 0x82) != 0xffff) {
        uVar14 = (uint)*(ushort *)(pFVar6 + 0x82);
      }
      uVar14 = -(uint)(pFVar6[0x87] != (FScriptContainerElement)0x0) & 0x80000000 | uVar14;
      if (uVar14 == 0xffffffff) {
        if ((iVar15 < 5) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar21)) {
          pcVar8 = (code *)swi(3);
          pFVar13 = (FNiagaraMeshCommonParameters *)(*pcVar8)();
          return pFVar13;
        }
        uVar14 = 0xffffffff;
        if (*(ushort *)(pFVar6 + 0x22) != 0xffff) {
          uVar14 = (uint)*(ushort *)(pFVar6 + 0x22);
        }
        uVar14 = -(uint)(pFVar6[0x27] != (FScriptContainerElement)0x0) & 0x80000000 | uVar14;
      }
      __return_storage_ptr__->PrevRotationDataOffset = uVar14;
      if ((iVar15 < 0xf) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        pFVar13 = (FNiagaraMeshCommonParameters *)(*pcVar8)();
        return pFVar13;
      }
      uVar14 = 0xffffffff;
      if (*(ushort *)(pFVar6 + 0x72) != 0xffff) {
        uVar14 = (uint)*(ushort *)(pFVar6 + 0x72);
      }
      uVar14 = -(uint)(pFVar6[0x77] != (FScriptContainerElement)0x0) & 0x80000000 | uVar14;
      if (uVar14 == 0xffffffff) {
        if ((iVar15 < 1) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar21)) {
          pcVar8 = (code *)swi(3);
          pFVar13 = (FNiagaraMeshCommonParameters *)(*pcVar8)();
          return pFVar13;
        }
        if (*(ushort *)(pFVar6 + 2) != 0xffff) {
          uVar10 = (uint)*(ushort *)(pFVar6 + 2);
        }
        uVar14 = -(uint)(pFVar6[7] != (FScriptContainerElement)0x0) & 0x80000000 | uVar10;
      }
      __return_storage_ptr__->PrevPositionDataOffset = uVar14;
      if ((iVar15 < 0x13) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        pFVar13 = (FNiagaraMeshCommonParameters *)(*pcVar8)();
        return pFVar13;
      }
      uVar14 = 0xffffffff;
      if (*(ushort *)(pFVar6 + 0x92) != 0xffff) {
        uVar14 = (uint)*(ushort *)(pFVar6 + 0x92);
      }
      uVar14 = -(uint)(pFVar6[0x97] != (FScriptContainerElement)0x0) & 0x80000000 | uVar14;
      if (uVar14 == 0xffffffff) {
        if ((iVar15 < 2) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar21)) {
          pcVar8 = (code *)swi(3);
          pFVar13 = (FNiagaraMeshCommonParameters *)(*pcVar8)();
          return pFVar13;
        }
        uVar14 = 0xffffffff;
        if (*(ushort *)(pFVar6 + 10) != 0xffff) {
          uVar14 = (uint)*(ushort *)(pFVar6 + 10);
        }
        uVar14 = -(uint)(pFVar6[0xf] != (FScriptContainerElement)0x0) & 0x80000000 | uVar14;
      }
      __return_storage_ptr__->PrevVelocityDataOffset = uVar14;
      if ((iVar15 < 0x12) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        pFVar13 = (FNiagaraMeshCommonParameters *)(*pcVar8)();
        return pFVar13;
      }
      uVar14 = 0xffffffff;
      if (*(ushort *)(pFVar6 + 0x8a) != 0xffff) {
        uVar14 = (uint)*(ushort *)(pFVar6 + 0x8a);
      }
      uVar14 = -(uint)(pFVar6[0x8f] != (FScriptContainerElement)0x0) & 0x80000000 | uVar14;
      if (uVar14 == 0xffffffff) {
        if ((iVar15 < 0xe) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar21)) {
          pcVar8 = (code *)swi(3);
          pFVar13 = (FNiagaraMeshCommonParameters *)(*pcVar8)();
          return pFVar13;
        }
        if (*(ushort *)(pFVar6 + 0x6a) != 0xffff) {
          uVar11 = (uint)*(ushort *)(pFVar6 + 0x6a);
        }
        uVar14 = -(uint)(pFVar6[0x6f] != (FScriptContainerElement)0x0) & 0x80000000 | uVar11;
      }
      __return_storage_ptr__->PrevCameraOffsetDataOffset = uVar14;
    }
  }
  else if (EVar4 == Emitter) {
    __return_storage_ptr__->ScaleDataOffset = -1;
    __return_storage_ptr__->RotationDataOffset = -1;
    __return_storage_ptr__->PositionDataOffset = -1;
    __return_storage_ptr__->VelocityDataOffset = -1;
    __return_storage_ptr__->CameraOffsetDataOffset = -1;
  }
  else if ((Emitter < EVar4) &&
          (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                              ("SourceMode <= ENiagaraRendererSourceDataMode::Emitter",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererMeshes.cpp"
                               ,0x391,L""), bVar21)) {
    pcVar8 = (code *)swi(3);
    pFVar13 = (FNiagaraMeshCommonParameters *)(*pcVar8)();
    return pFVar13;
  }
  lVar16 = 0xe;
  if (this->bSetAnyBoundVars != 0) {
    pFVar7 = param_1->DynamicDataMesh;
    piVar19 = this->VFBoundOffsetsInParamStore;
    if (this->bAccurateMotionVectors != 0) {
      lVar16 = 0x13;
    }
    pFVar6 = (pFVar7->ParameterDataBound).AllocatorInstance.Data;
    uVar20 = uVar18;
    do {
      iVar15 = *piVar19;
      iVar17 = (int)uVar18;
      if ((iVar15 < 0) || ((pFVar7->ParameterDataBound).ArrayNum <= iVar15)) {
        if (iVar17 == 0xe) {
          fVar22 = (__return_storage_ptr__->DefaultPosition).field0_0x0._s_0.Z;
          *(undefined8 *)&(__return_storage_ptr__->DefaultPrevPosition).field0_0x0 =
               *(undefined8 *)&(__return_storage_ptr__->DefaultPosition).field0_0x0;
          goto LAB_1493430ad;
        }
        if (iVar17 == 0xf) {
          fVar22 = (__return_storage_ptr__->DefaultScale).field0_0x0._s_0.Z;
          *(undefined8 *)&(__return_storage_ptr__->DefaultPrevScale).field0_0x0 =
               *(undefined8 *)&(__return_storage_ptr__->DefaultScale).field0_0x0;
          (__return_storage_ptr__->DefaultPrevScale).field0_0x0._s_0.Z = fVar22;
        }
        else if (iVar17 == 0x10) {
          uVar9 = *(undefined8 *)
                   ((longlong)&(__return_storage_ptr__->DefaultRotation).field0_0x0 + 8);
          *(undefined8 *)&(__return_storage_ptr__->DefaultPrevRotation).field0_0x0 =
               *(undefined8 *)&(__return_storage_ptr__->DefaultRotation).field0_0x0;
          *(undefined8 *)((longlong)&(__return_storage_ptr__->DefaultPrevRotation).field0_0x0 + 8) =
               uVar9;
        }
        else if (iVar17 == 0x11) {
          __return_storage_ptr__->DefaultPrevCameraOffset =
               __return_storage_ptr__->DefaultCameraOffset;
        }
      }
      else {
        switch(iVar17) {
        case 0:
          *(undefined8 *)&(__return_storage_ptr__->DefaultPosition).field0_0x0 =
               *(undefined8 *)(pFVar6 + iVar15);
          (__return_storage_ptr__->DefaultPosition).field0_0x0._s_0.Z =
               *(float *)(pFVar6 + (longlong)iVar15 + 8);
          break;
        case 1:
          *(undefined8 *)&(__return_storage_ptr__->DefaultVelocity).field0_0x0 =
               *(undefined8 *)(pFVar6 + iVar15);
          (__return_storage_ptr__->DefaultVelocity).field0_0x0._s_0.Z =
               *(float *)(pFVar6 + (longlong)iVar15 + 8);
          break;
        case 3:
          *(undefined8 *)&(__return_storage_ptr__->DefaultScale).field0_0x0 =
               *(undefined8 *)(pFVar6 + iVar15);
          (__return_storage_ptr__->DefaultScale).field0_0x0._s_0.Z =
               *(float *)(pFVar6 + (longlong)iVar15 + 8);
          break;
        case 4:
          uVar9 = *(undefined8 *)(pFVar6 + iVar15 + 8);
          *(undefined8 *)&(__return_storage_ptr__->DefaultRotation).field0_0x0 =
               *(undefined8 *)(pFVar6 + iVar15);
          *(undefined8 *)((longlong)&(__return_storage_ptr__->DefaultRotation).field0_0x0 + 8) =
               uVar9;
          break;
        case 0xd:
          __return_storage_ptr__->DefaultCameraOffset = *(float *)(pFVar6 + iVar15);
          break;
        case 0xe:
          *(undefined8 *)&(__return_storage_ptr__->DefaultPrevPosition).field0_0x0 =
               *(undefined8 *)(pFVar6 + iVar15);
          fVar22 = *(float *)(pFVar6 + (longlong)iVar15 + 8);
LAB_1493430ad:
          (__return_storage_ptr__->DefaultPrevPosition).field0_0x0._s_0.Z = fVar22;
          break;
        case 0xf:
          *(undefined8 *)&(__return_storage_ptr__->DefaultPrevScale).field0_0x0 =
               *(undefined8 *)(pFVar6 + iVar15);
          (__return_storage_ptr__->DefaultPrevScale).field0_0x0._s_0.Z =
               *(float *)(pFVar6 + (longlong)iVar15 + 8);
          break;
        case 0x10:
          uVar9 = *(undefined8 *)(pFVar6 + iVar15 + 8);
          *(undefined8 *)&(__return_storage_ptr__->DefaultPrevRotation).field0_0x0 =
               *(undefined8 *)(pFVar6 + iVar15);
          *(undefined8 *)((longlong)&(__return_storage_ptr__->DefaultPrevRotation).field0_0x0 + 8) =
               uVar9;
          break;
        case 0x11:
          __return_storage_ptr__->DefaultPrevCameraOffset = *(float *)(pFVar6 + iVar15);
        }
      }
      uVar18 = (ulonglong)(iVar17 + 1);
      uVar20 = uVar20 + 1;
      piVar19 = piVar19 + 1;
    } while ((longlong)uVar20 < lVar16);
  }
  return __return_storage_ptr__;
}

// CreateMeshBatchForSection @ 149343750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FNiagaraRendererMeshes::CreateMeshBatchForSection
          (FNiagaraRendererMeshes *this,FRHICommandListBase *param_1,
          FParticleMeshRenderData *param_2,FNiagaraMeshCommonParameters *param_3,FMeshBatch *param_4
          ,FVertexFactory *param_5,FMaterialRenderProxy *param_6,FNiagaraSceneProxy *param_7,
          FMeshData *param_8,FLODModelData *param_9,FStaticMeshSection *param_10,
          FSceneView *param_11,int param_12,uint param_13,uint param_14,bool param_15,bool param_16,
          bool param_17)

{
  undefined8 uVar1;
  float fVar2;
  int iVar3;
  INiagaraRenderableMesh *pIVar4;
  ForElementType<FMeshBatchElement> FVar5;
  FNiagaraGpuComputeDispatchInterface *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  ESceneDepthPriorityGroup EVar16;
  double *pdVar17;
  TUniformBuffer<FPrimitiveUniformShaderParameters> *pTVar18;
  FRHIUniformBuffer *pFVar19;
  UMaterial *pUVar20;
  FMaterialRenderProxy *pFVar21;
  uint uVar22;
  ForElementType<FMeshBatchElement> FVar23;
  undefined1 auStackY_238 [32];
  float local_1b8;
  float fStack_1b4;
  FIndirectArgSlot local_1a8;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  TVector<double>_u_0 local_148;
  double local_130;
  double local_128;
  double local_120;
  undefined1 local_118;
  undefined1 local_110 [56];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_238;
  param_4->VertexFactory = param_5;
  param_4->LCI = (FLightCacheInterface *)0x0;
  uVar22 = ((uint)(byte)param_7->_padding_ ^ ZPULL(*(undefined4 *)&param_4->field_0xd4,0,1)) & 1 ^
           *(undefined4 *)&param_4->field_0xd4;
  *(uint *)&param_4->field_0xd4 = uVar22;
  if ((((param_7->_padding_ & 0x20000000000) == 0) || (this->bCastShadows == 0)) ||
     (param_10->bCastShadow == false)) {
    uVar14 = 0;
  }
  else {
    uVar14 = 4;
  }
  *(uint *)&param_4->field_0xd4 = uVar22 & 0xfffffffb | uVar14;
  if ((((param_7->_padding_ & 0x20000000000) == 0) || (this->bCastShadows == 0)) ||
     (param_10->bCastShadow == false)) {
    uVar15 = 0;
  }
  else {
    uVar15 = 0x800000;
  }
  *(uint *)&param_4->field_0xd4 = uVar22 & 0xff7ffffb | uVar14 | uVar15;
  EVar16 = FPrimitiveSceneProxy::GetDepthPriorityGroup((FPrimitiveSceneProxy *)param_7,param_11);
  *(ESceneDepthPriorityGroup *)&param_4->field_0xd4 =
       (EVar16 << 10 ^ *(uint *)&param_4->field_0xd4) & 0x1c00 ^ *(uint *)&param_4->field_0xd4;
  uVar12 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  uVar11 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y;
  uVar10 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X;
  uVar1 = *(undefined8 *)&(this->MeshBoundsScale).field0_0x0;
  fVar2 = (this->MeshBoundsScale).field0_0x0._s_0.Z;
  if ((param_8->RenderableMesh).Object == (INiagaraRenderableMesh *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pIVar4 = (param_8->RenderableMesh).Object;
  pdVar17 = (double *)(**(code **)(*(longlong *)pIVar4 + 0x10))(pIVar4,local_110);
  local_178 = pdVar17[2];
  dStack_170 = pdVar17[3];
  local_188 = *pdVar17;
  dStack_180 = pdVar17[1];
  local_168 = pdVar17[4];
  dStack_160 = pdVar17[5];
  local_158 = pdVar17[6];
  local_1b8 = (float)uVar1;
  local_118 = 1;
  dVar9 = (local_188 + dStack_170) * __real_3fe0000000000000 * (double)(float)uVar10;
  local_130 = (dStack_170 - local_188) * (double)(float)uVar10 *
              (double)local_1b8 * __real_3fe0000000000000;
  fStack_1b4 = (float)((ulonglong)uVar1 >> 0x20);
  dVar8 = (dStack_180 + local_168) * __real_3fe0000000000000 * (double)(float)uVar11;
  local_128 = (local_168 - dStack_180) * (double)(float)uVar11 *
              (double)fStack_1b4 * __real_3fe0000000000000;
  local_120 = (local_178 + dStack_160) * __real_3fe0000000000000 * (double)(float)uVar12;
  local_148._s_0.X = dVar9 - local_130;
  local_130 = local_130 + dVar9;
  dVar9 = (dStack_160 - local_178) * (double)(float)uVar12 * (double)fVar2 * __real_3fe0000000000000
  ;
  local_148._s_0.Y = dVar8 - local_128;
  local_128 = local_128 + dVar8;
  local_148._s_0.Z = local_120 - dVar9;
  local_120 = local_120 + dVar9;
  if ((param_4->Elements).ArrayNum < 1) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FVar5 = (param_4->Elements).AllocatorInstance.SecondaryData;
  FVar23 = (ForElementType<FMeshBatchElement>)param_4;
  if (FVar5 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar23 = FVar5;
  }
  bVar13 = (bool)((byte)(*(uint *)&this->field_0x140 >> 2) & 1);
  if (param_2->bUseGPUScene == false) {
    pFVar19 = FNiagaraSceneProxy::GetCustomUniformBuffer
                        (param_7,param_1,bVar13,(TBox<double> *)&local_148._s_0);
    *(FRHIUniformBuffer **)FVar23 = pFVar19;
  }
  else {
    pTVar18 = FNiagaraSceneProxy::GetCustomUniformBufferResource
                        (param_7,param_1,bVar13,(TBox<double> *)&local_148._s_0);
    *(TUniformBuffer<FPrimitiveUniformShaderParameters> **)((longlong)FVar23 + 8) = pTVar18;
  }
  *(uint *)((longlong)FVar23 + 0x58) = 0;
  *(undefined8 *)((longlong)FVar23 + 0x68) = 0;
  *(uint *)((longlong)FVar23 + 0x60) = param_13;
  if (param_2->bUseGPUScene != false) {
    SetupElementForGPUScene
              (this,param_2,param_3,param_7,param_8,param_11,param_13,param_17,
               (FMeshBatchElement *)FVar23);
  }
  if (param_15) {
    if (param_9->WireframeIndexBuffer == (FIndexBuffer *)0x0) {
      param_4->MaterialRenderProxy = param_6;
      *(uint *)&param_4->field_0xd4 = *(uint *)&param_4->field_0xd4 & 0xfffffc7f | 0x40;
      *(uint *)((longlong)FVar23 + 0x58) = 0;
      *(FIndexBuffer **)((longlong)FVar23 + 0x18) = param_9->IndexBuffer;
      iVar3 = param_9->NumIndices;
      uVar22 = iVar3 / 3 + (iVar3 >> 0x1f) +
               (int)(((longlong)iVar3 / 3 + ((longlong)iVar3 >> 0x3f) & 0xffffffffU) >> 0x1f);
    }
    else {
      *(uint *)&param_4->field_0xd4 = *(uint *)&param_4->field_0xd4 & 0xfffffd7f | 0x100;
      pUVar20 = UMaterial::GetDefaultMaterial(MD_Surface);
      pFVar21 = (FMaterialRenderProxy *)(**(code **)(pUVar20->_padding_ + 0x310))(pUVar20);
      param_4->MaterialRenderProxy = pFVar21;
      *(uint *)((longlong)FVar23 + 0x58) = 0;
      *(FIndexBuffer **)((longlong)FVar23 + 0x18) = param_9->WireframeIndexBuffer;
      uVar22 = param_9->WireframeNumIndices / 2;
    }
  }
  else {
    param_4->Type = 0;
    param_4->MaterialRenderProxy = param_6;
    *(FIndexBuffer **)((longlong)FVar23 + 0x18) = param_9->IndexBuffer;
    *(uint *)((longlong)FVar23 + 0x58) = param_10->FirstIndex;
    uVar22 = param_10->NumTriangles;
  }
  *(uint *)((longlong)FVar23 + 0x5c) = uVar22;
  if ((this->SourceMode == Particles) && (param_14 != 0xffffffff)) {
    pFVar6 = param_7->ComputeDispatchInterface;
    if (pFVar6 == (FNiagaraGpuComputeDispatchInterface *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("ComputeDispatchInterface",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererMeshes.cpp"
                          ,0x54c,L"");
      if (bVar13) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    bVar13 = IsInParallelRenderingThread();
    if (!bVar13) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInParallelRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                          ,0x6a,L"");
      if (bVar13) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if ((param_2->bNeedsCull == false) || (param_2->bSortCullOnGpu == false)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    FNiagaraGPUInstanceCountManager::AddDrawIndirect
              (&pFVar6->GPUInstanceCounterManager,&local_1a8,param_1,param_14,
               param_10->NumTriangles * 3,param_10->FirstIndex,param_16,bVar13,
               param_2->SourceParticleData->GPUDataReadyStage);
    *(uint *)((longlong)FVar23 + 0x50) = local_1a8.Offset;
    *(uint *)((longlong)FVar23 + 0x5c) = 0;
    *(FRHIBuffer **)((longlong)FVar23 + 0x48) = local_1a8.Buffer.Reference;
    if (local_1a8.SRV.Reference != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)local_1a8.SRV.Reference);
    }
    if (local_1a8.Buffer.Reference != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_1a8.Buffer.Reference);
    }
  }
  else if (uVar22 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("BatchElement.NumPrimitives > 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererMeshes.cpp"
                        ,0x55f,L"");
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  param_4->bCanApplyViewModeOverrides = 1;
  param_4->bUseWireframeSelectionColoring = -(uint)((param_7->_padding_ & 0x600) != 0) >> 0xe;
  return;
}

// CreateVFUniformBuffer @ 149344120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TUniformBufferRef<FNiagaraMeshUniformParameters> __thiscall
FNiagaraRendererMeshes::CreateVFUniformBuffer
          (FNiagaraRendererMeshes *this,FParticleMeshRenderData *param_1,
          FNiagaraMeshCommonParameters *param_2)

{
  float fVar1;
  float fVar2;
  ENiagaraRendererSourceDataMode EVar3;
  int iVar4;
  FRHIShaderResourceView *pFVar5;
  longlong lVar6;
  FRHIResource *this_00;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  longlong lVar11;
  FRHIUniformBufferLayout *pFVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  FRHIUniformBufferLayout *pFVar16;
  TUniformBufferRef<FNiagaraMeshUniformParameters> TVar17;
  FShaderParametersMetadata *pFVar18;
  TRefCountPtr<FRHIUniformBuffer> TVar19;
  undefined4 uVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong *plVar24;
  int iVar25;
  longlong *in_R9;
  int *piVar26;
  FRHIResource *local_res8;
  TUniformBufferRef<FNiagaraMeshUniformParameters> local_res10;
  FRHIUniformBufferLayout local_268 [2];
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined8 local_d8;
  uint local_d0;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  undefined8 local_44;
  undefined4 local_3c;
  
  local_res10 = (TUniformBufferRef<FNiagaraMeshUniformParameters>)param_1;
  memset(local_268,0,0x150);
  local_f0 = 0;
  lVar22 = 2;
  local_d8 = 0;
  local_a0 = 0;
  local_44 = 0;
  local_3c = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_cc = 0;
  uStack_c4 = 0;
  local_bc = 0;
  uStack_b4 = 0;
  pFVar12 = local_268;
  do {
    plVar24 = in_R9;
    pFVar16 = pFVar12;
    lVar6 = plVar24[1];
    lVar23 = plVar24[2];
    pFVar8 = (FScriptContainerElement *)plVar24[3];
    pFVar16->_padding_ = *plVar24;
    pFVar16->_padding_ = lVar6;
    lVar6 = plVar24[4];
    pFVar9 = (FScriptContainerElement *)plVar24[5];
    pFVar16->_padding_ = lVar23;
    (pFVar16->Name).Data.AllocatorInstance.Data = pFVar8;
    lVar23 = plVar24[6];
    pFVar8 = (FScriptContainerElement *)plVar24[7];
    (pFVar16->Name).Data.ArrayNum = (int)lVar6;
    (pFVar16->Name).Data.ArrayMax = (int)((ulonglong)lVar6 >> 0x20);
    (pFVar16->Resources).AllocatorInstance.Data = pFVar9;
    lVar6 = plVar24[8];
    pFVar9 = (FScriptContainerElement *)plVar24[9];
    (pFVar16->Resources).ArrayNum = (int)lVar23;
    (pFVar16->Resources).ArrayMax = (int)((ulonglong)lVar23 >> 0x20);
    (pFVar16->GraphResources).AllocatorInstance.Data = pFVar8;
    lVar23 = plVar24[10];
    pFVar8 = (FScriptContainerElement *)plVar24[0xb];
    (pFVar16->GraphResources).ArrayNum = (int)lVar6;
    (pFVar16->GraphResources).ArrayMax = (int)((ulonglong)lVar6 >> 0x20);
    (pFVar16->GraphTextures).AllocatorInstance.Data = pFVar9;
    lVar6 = plVar24[0xc];
    pFVar9 = (FScriptContainerElement *)plVar24[0xd];
    (pFVar16->GraphTextures).ArrayNum = (int)lVar23;
    (pFVar16->GraphTextures).ArrayMax = (int)((ulonglong)lVar23 >> 0x20);
    (pFVar16->GraphBuffers).AllocatorInstance.Data = pFVar8;
    lVar23 = plVar24[0xe];
    pFVar8 = (FScriptContainerElement *)plVar24[0xf];
    (pFVar16->GraphBuffers).ArrayNum = (int)lVar6;
    (pFVar16->GraphBuffers).ArrayMax = (int)((ulonglong)lVar6 >> 0x20);
    (pFVar16->GraphUniformBuffers).AllocatorInstance.Data = pFVar9;
    (pFVar16->GraphUniformBuffers).ArrayNum = (int)lVar23;
    (pFVar16->GraphUniformBuffers).ArrayMax = (int)((ulonglong)lVar23 >> 0x20);
    (pFVar16->UniformBuffers).AllocatorInstance.Data = pFVar8;
    lVar22 = lVar22 + -1;
    pFVar12 = (FRHIUniformBufferLayout *)&(pFVar16->UniformBuffers).ArrayNum;
    in_R9 = plVar24 + 0x10;
  } while (lVar22 != 0);
  lVar6 = plVar24[0x10];
  lVar23 = plVar24[0x11];
  uVar21 = this->MaterialParamValidMask;
  lVar10 = plVar24[0x12];
  lVar11 = plVar24[0x13];
  fVar1 = (this->SubImageSize).field0_0x0._s_0.Y;
  (pFVar16->UniformBuffers).ArrayNum = (int)lVar6;
  (pFVar16->UniformBuffers).ArrayMax = (int)((ulonglong)lVar6 >> 0x20);
  pFVar16->Hash = (int)lVar23;
  pFVar16->ConstantBufferSize = (int)((ulonglong)lVar23 >> 0x20);
  lVar6 = plVar24[0x14];
  lVar23 = plVar24[0x15];
  pFVar16->RenderTargetsOffset = (short)lVar10;
  pFVar16->StaticSlot = (char)((ulonglong)lVar10 >> 0x10);
  pFVar16->BindingFlags = (char)((ulonglong)lVar10 >> 0x18);
  pFVar16->Flags = (char)((ulonglong)lVar10 >> 0x20);
  *(int3 *)&pFVar16->field_0x95 = (int3)((ulonglong)lVar10 >> 0x28);
  pFVar16[1]._padding_ = lVar11;
  pFVar8 = (FScriptContainerElement *)plVar24[0x16];
  lVar10 = plVar24[0x17];
  pFVar16[1]._padding_ = lVar6;
  pFVar16[1]._padding_ = lVar23;
  pFVar9 = (FScriptContainerElement *)plVar24[0x18];
  lVar6 = plVar24[0x19];
  pFVar16[1].Name.Data.AllocatorInstance.Data = pFVar8;
  pFVar16[1].Name.Data.ArrayNum = (int)lVar10;
  pFVar16[1].Name.Data.ArrayMax = (int)((ulonglong)lVar10 >> 0x20);
  fVar2 = (this->SubImageSize).field0_0x0._s_0.X;
  pFVar16[1].Resources.AllocatorInstance.Data = pFVar9;
  pFVar16[1].Resources.ArrayNum = (int)lVar6;
  pFVar16[1].Resources.ArrayMax = (int)((ulonglong)lVar6 >> 0x20);
  local_e0 = __real_3f800000 / fVar2;
  local_48 = this->bSubImageBlend;
  EVar3 = this->SourceMode;
  uVar20 = 0;
  local_a4 = 0;
  local_98 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_90 = _UNK_15076b1f8;
  local_88 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_80 = _UNK_15076b1f8;
  local_78 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_70 = _UNK_15076b1f8;
  local_68 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_60 = _UNK_15076b1f8;
  local_58 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_50 = _UNK_15076b1f8;
  local_dc = __real_3f800000 / fVar1;
  local_e8 = fVar2;
  local_e4 = fVar1;
  local_d0 = uVar21;
  local_ac = lVar22;
  if (EVar3 == Particles) {
    pFVar5 = param_2->SortedIndices;
    local_a4 = uVar20;
    bVar13 = IsInParallelRenderingThread();
    if ((!bVar13) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInParallelRenderingThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraRendererProperties.h"
                            ,0x9b,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraMeshUniformParameters>)(*pcVar7)();
      return TVar17;
    }
    lVar22 = *(longlong *)&pFVar5->field_0x10;
    iVar25 = *(int *)&pFVar5->field_0x18;
    if ((iVar25 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraMeshUniformParameters>)(*pcVar7)();
      return TVar17;
    }
    if ((iVar25 < 3) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar13)) {
      pcVar7 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraMeshUniformParameters>)(*pcVar7)();
      return TVar17;
    }
    uVar15 = 0xffffffff;
    uVar14 = 0xffffffff;
    uVar21 = 0xffffffff;
    if (*(ushort *)(lVar22 + 0x12) != 0xffff) {
      uVar21 = (uint)*(ushort *)(lVar22 + 0x12);
    }
    uVar21 = -(uint)(*(char *)(lVar22 + 0x17) != '\0') & 0x80000000 | uVar21;
    uStack_c4._4_4_ = uVar21;
    if ((iVar25 < 6) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar13)) {
      pcVar7 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraMeshUniformParameters>)(*pcVar7)();
      return TVar17;
    }
    if (*(ushort *)(lVar22 + 0x2a) != 0xffff) {
      uVar14 = (uint)*(ushort *)(lVar22 + 0x2a);
    }
    uStack_c4 = CONCAT44(uStack_c4._4_4_,
                         -(uint)(*(char *)(lVar22 + 0x2f) != '\0') & 0x80000000 | uVar14);
    if ((iVar25 < 7) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar13)) {
      pcVar7 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraMeshUniformParameters>)(*pcVar7)();
      return TVar17;
    }
    uVar14 = 0xffffffff;
    uVar21 = 0xffffffff;
    if (*(ushort *)(lVar22 + 0x32) != 0xffff) {
      uVar21 = (uint)*(ushort *)(lVar22 + 0x32);
    }
    local_cc = CONCAT44(local_cc._4_4_,
                        -(uint)(*(char *)(lVar22 + 0x37) != '\0') & 0x80000000 | uVar21);
    if ((iVar25 < 9) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar13)) {
      pcVar7 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraMeshUniformParameters>)(*pcVar7)();
      return TVar17;
    }
    uVar21 = uVar14;
    if (*(ushort *)(lVar22 + 0x42) != 0xffff) {
      uVar21 = (uint)*(ushort *)(lVar22 + 0x42);
    }
    local_cc = CONCAT44(-(uint)(*(char *)(lVar22 + 0x47) != '\0') & 0x80000000 | uVar21,
                        (undefined4)local_cc);
    if ((iVar25 < 10) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar13)) {
      pcVar7 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraMeshUniformParameters>)(*pcVar7)();
      return TVar17;
    }
    uVar21 = uVar14;
    if (*(ushort *)(lVar22 + 0x4a) != 0xffff) {
      uVar21 = (uint)*(ushort *)(lVar22 + 0x4a);
    }
    local_bc = CONCAT44(local_bc._4_4_,
                        -(uint)(*(char *)(lVar22 + 0x4f) != '\0') & 0x80000000 | uVar21);
    if ((iVar25 < 0xb) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar13)) {
      pcVar7 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraMeshUniformParameters>)(*pcVar7)();
      return TVar17;
    }
    if (*(ushort *)(lVar22 + 0x52) != 0xffff) {
      uVar14 = (uint)*(ushort *)(lVar22 + 0x52);
    }
    local_bc = CONCAT44(-(uint)(*(char *)(lVar22 + 0x57) != '\0') & 0x80000000 | uVar14,
                        (undefined4)local_bc);
    if ((iVar25 < 0xc) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar13)) {
      pcVar7 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraMeshUniformParameters>)(*pcVar7)();
      return TVar17;
    }
    uVar21 = 0xffffffff;
    if (*(ushort *)(lVar22 + 0x5a) != 0xffff) {
      uVar21 = (uint)*(ushort *)(lVar22 + 0x5a);
    }
    uStack_b4 = CONCAT44(uStack_b4._4_4_,
                         -(uint)(*(char *)(lVar22 + 0x5f) != '\0') & 0x80000000 | uVar21);
    if ((iVar25 < 0xd) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar13)) {
      pcVar7 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraMeshUniformParameters>)(*pcVar7)();
      return TVar17;
    }
    if (*(ushort *)(lVar22 + 0x62) != 0xffff) {
      uVar15 = (uint)*(ushort *)(lVar22 + 0x62);
    }
    uStack_b4 = CONCAT44(-(uint)(*(char *)(lVar22 + 0x67) != '\0') & 0x80000000 | uVar15,
                         (undefined4)uStack_b4);
    param_1 = (FParticleMeshRenderData *)local_res10;
  }
  else if (EVar3 == Emitter) {
    uStack_c4 = 0xffffffffffffffff;
    local_cc = 0xffffffffffffffff;
    local_bc = 0xffffffffffffffff;
    uStack_b4 = 0xffffffffffffffff;
    local_a4 = uVar20;
  }
  else if ((Emitter < EVar3) &&
          (local_a4 = uVar20,
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("SourceMode <= ENiagaraRendererSourceDataMode::Emitter",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererMeshes.cpp"
                              ,0x409,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    TVar17 = (TUniformBufferRef<FNiagaraMeshUniformParameters>)(*pcVar7)();
    return TVar17;
  }
  local_118 = *(undefined8 *)((longlong)&(param_2->MeshRotation).field0_0x0 + 8);
  uStack_f8 = *(undefined8 *)((longlong)&(param_2->MeshOffset).field0_0x0 + 4);
  local_f0 = *(undefined8 *)&param_2->_padding_;
  local_110._0_4_ = param_2->bMeshOffsetIsWorldSpace;
  local_110._4_4_ = param_2->bLockedAxisEnable;
  local_108 = param_2->_padding_;
  if (this->bSetAnyBoundVars != 0) {
    piVar26 = this->VFBoundOffsetsInParamStore;
    iVar25 = -2;
    lVar22 = 0xe;
    if (this->bAccurateMotionVectors != 0) {
      lVar22 = 0x13;
    }
    lVar6 = *(longlong *)&param_2->NiagaraParticleDataHalf[3].field_0x8;
    uVar21 = local_d0;
    do {
      iVar4 = *piVar26;
      lVar23 = (longlong)iVar4;
      if ((-1 < iVar4) && (iVar4 < *(int *)&param_2->NiagaraParticleDataHalf[3].field_0x10)) {
        switch(iVar25) {
        case 0:
          local_98 = *(undefined8 *)(lVar23 + lVar6);
          uStack_90 = ((undefined8 *)(lVar23 + lVar6))[1];
          break;
        case 3:
          local_a4 = *(undefined4 *)(lVar23 + lVar6);
          break;
        case 4:
          local_ac = CONCAT44(local_ac._4_4_,*(undefined4 *)(lVar23 + lVar6));
          break;
        case 6:
          local_ac = CONCAT44(*(undefined4 *)(lVar23 + lVar6),(undefined4)local_ac);
          break;
        case 7:
          local_88 = *(undefined8 *)(lVar23 + lVar6);
          uStack_80 = ((undefined8 *)(lVar23 + lVar6))[1];
          uVar21 = uVar21 | 0xf;
          local_d0 = uVar21;
          break;
        case 8:
          local_78 = *(undefined8 *)(lVar23 + lVar6);
          uStack_70 = ((undefined8 *)(lVar23 + lVar6))[1];
          uVar21 = uVar21 | 0xf0;
          local_d0 = uVar21;
          break;
        case 9:
          local_68 = *(undefined8 *)(lVar23 + lVar6);
          uStack_60 = ((undefined8 *)(lVar23 + lVar6))[1];
          uVar21 = uVar21 | 0xf00;
          local_d0 = uVar21;
          break;
        case 10:
          local_58 = *(undefined8 *)(lVar23 + lVar6);
          uStack_50 = ((undefined8 *)(lVar23 + lVar6))[1];
          uVar21 = uVar21 | 0xf000;
          local_d0 = uVar21;
        }
      }
      iVar25 = iVar25 + 1;
      piVar26 = piVar26 + 1;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  pFVar18 = FNiagaraMeshUniformParameters::GetStructMetadata();
  if (((pFVar18->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLayoutInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                          ,0x17c,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    TVar17 = (TUniformBufferRef<FNiagaraMeshUniformParameters>)(*pcVar7)();
    return TVar17;
  }
  TVar19 = RHICreateUniformBuffer
                     (&local_res8,local_268,(EUniformBufferUsage)(pFVar18->Layout).Reference,
                      ValidateResources);
  this_00 = (FRHIResource *)(TVar19.Reference)->_padding_;
  *(FRHIResource **)param_1 = this_00;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this_00);
    pFVar18 = FNiagaraMeshUniformParameters::GetStructMetadata();
    if (((pFVar18->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLayoutInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                            ,0x17c,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraMeshUniformParameters>)(*pcVar7)();
      return TVar17;
    }
    if ((FName)(pFVar18->Layout).Reference != this_00[2].OwnerName) {
      pFVar18 = FNiagaraMeshUniformParameters::GetStructMetadata();
      if (((pFVar18->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsLayoutInitialized()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                              ,0x177,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        TVar17 = (TUniformBufferRef<FNiagaraMeshUniformParameters>)(*pcVar7)();
        return TVar17;
      }
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x96,
                          L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                         );
      if (bVar13) {
        pcVar7 = (code *)swi(3);
        TVar17 = (TUniformBufferRef<FNiagaraMeshUniformParameters>)(*pcVar7)();
        return TVar17;
      }
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return (TUniformBufferRef<FNiagaraMeshUniformParameters>)param_1;
}

// GenerateDynamicData @ 14934a880

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

FNiagaraDynamicDataBase * __thiscall
FNiagaraRendererMeshes::GenerateDynamicData
          (FNiagaraRendererMeshes *this,FNiagaraSceneProxy *param_1,
          UNiagaraRendererProperties *param_2,FNiagaraEmitterInstance *param_3)

{
  ForElementType<FMaterialRenderProxy_*> *pFVar1;
  int *piVar2;
  TArray<TObjectPtr<UNiagaraDataInterface>,TSizedDefaultAllocator<32>_> *pTVar3;
  ForAnyElementType *pFVar4;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  FNiagaraSystemInstance *pFVar9;
  FNiagaraDataBuffer *pFVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  code *pcVar13;
  ForElementType<FMaterialRenderProxy_*> FVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGenMeshVertexData> FVar19;
  UNiagaraMeshRendererProperties *pUVar20;
  FNiagaraDynamicDataBase *pFVar21;
  UObject *pUVar22;
  UClass *pUVar23;
  FName FVar24;
  ForElementType<FMaterialRenderProxy_*> *pFVar25;
  ForElementType<FMaterialRenderProxy_*> *pFVar26;
  ForElementType<FNiagaraRendererMeshes::FMeshData> FVar27;
  FName FVar28;
  ForElementType<FNiagaraRendererMeshes::FMeshData> FVar29;
  undefined8 *puVar30;
  undefined1 local_98;
  undefined1 local_97 [7];
  FName local_90;
  byte local_88;
  FName local_80;
  undefined1 local_78 [8];
  FColor local_70 [2];
  FName local_68 [2];
  ForElementType<FMaterialRenderProxy_*> local_58;
  int iStack_50;
  uchar auStack_4c [4];
  FName local_48 [2];
  ForElementType<FMaterialRenderProxy_*> local_38;
  int iStack_30;
  uchar auStack_2c [4];
  
  FVar28.ComparisonIndex.Value = 0;
  FVar28.Number = 0;
  FVar19 = StatPtr_STAT_NiagaraGenMeshVertexData;
  if (StatPtr_STAT_NiagaraGenMeshVertexData ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraGenMeshVertexData>)0x0) {
    pFVar18 = ::FName::FName(local_48,"STAT_NiagaraGenMeshVertexData");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGenMeshVertexData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGenMeshVertexData,*pFVar18
                        ,L"Generate Mesh Vertex Data [GT]","STATGROUP_Niagara","STATCAT_Niagara",
                        L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  local_88 = 0;
  FVar24 = *(FName *)FVar19;
  if ((FVar24.ComparisonIndex.Value.Value != 0) || (FVar24.Number != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_70[0].field0_0x0.Bits = (FColor_u_0)0x0;
      FGenericPlatformMisc::BeginNamedEvent(local_70,(char *)*(FName *)((longlong)FVar19 + 0x10));
      local_88 = local_88 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_68[0].ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        local_68[0].Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (local_68,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererMeshes.cpp"
                   ,0x75d);
        local_88 = local_88 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_90 = FVar24;
      local_80 = FVar24;
      FThreadStats::AddMessage(FVar24,CycleScopeStart);
      local_88 = local_88 | 4;
    }
  }
  pUVar20 = CastChecked<UNiagaraMeshRendererProperties_const_,UNiagaraRendererProperties_const_>
                      (param_2);
  local_58 = (ForElementType<FMaterialRenderProxy_*>)pUVar20;
  bVar15 = FNiagaraRenderer::IsRendererEnabled
                     ((FNiagaraRenderer *)this,(UNiagaraRendererProperties *)pUVar20,param_3);
  if (bVar15) {
    if (*(char *)((longlong)&pUVar20->_padding_ + 6) == '\0') {
      if ((param_3 == (FNiagaraEmitterInstance *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Emitter",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererMeshes.cpp"
                              ,0x768,L""), bVar15)) {
        pcVar13 = (code *)swi(3);
        pFVar21 = (FNiagaraDynamicDataBase *)(*pcVar13)();
        return pFVar21;
      }
      pFVar9 = param_3->ParentSystemInstance;
      if ((pFVar9 == (FNiagaraSystemInstance *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Emitter->GetParentSystemInstance()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererMeshes.cpp"
                              ,0x76b,L""), bVar15)) {
        pcVar13 = (code *)swi(3);
        pFVar21 = (FNiagaraDynamicDataBase *)(*pcVar13)();
        return pFVar21;
      }
      pUVar22 = FWeakObjectPtr::Get(&(pFVar9->AttachComponent).WeakPtr);
      if (pUVar22 != (UObject *)0x0) {
        pUVar23 = Z_Construct_UClass_UNiagaraCullProxyComponent_NoRegister();
        iVar7 = (int)pUVar23->_padding_;
        if ((iVar7 <= *(int *)(*(longlong *)&pUVar22->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar22->field_0x10 + 0x30) + (longlong)iVar7 * 8) ==
            &pUVar23->_padding_)) goto LAB_14934aeb3;
      }
    }
    if ((param_3->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParticleDataSet",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                            ,0x3a,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      pFVar21 = (FNiagaraDynamicDataBase *)(*pcVar13)();
      return pFVar21;
    }
    pFVar10 = param_3->ParticleDataSet->CurrentData;
    if (((pFVar10 != (FNiagaraDataBuffer *)0x0) && ((this->Meshes).ArrayNum != 0)) &&
       ((this->SourceMode != Particles ||
        ((this->field_0x144 == '\x01' || (pFVar10->NumInstances != 0)))))) {
      FVar29 = (this->Meshes).AllocatorInstance.SecondaryData;
      FVar27 = (ForElementType<FNiagaraRendererMeshes::FMeshData>)&this->Meshes;
      iVar7 = (this->Meshes).ArrayNum;
      if (FVar29 != (ForElementType<FNiagaraRendererMeshes::FMeshData>)0x0) {
        FVar27 = FVar29;
      }
      FVar29 = (ForElementType<FNiagaraRendererMeshes::FMeshData>)
               ((longlong)iVar7 * 0x80 + (longlong)FVar27);
      while( true ) {
        if ((this->Meshes).ArrayNum != iVar7) {
          local_98 = 0;
          `TCheckedPointerIterator<FNiagaraRendererMeshes::FMeshData_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_98);
        }
        if (FVar27 == FVar29) {
          FVar24 = (FName)::operator_new(0xa8);
          if (FVar24 == (FName)0x0) {
            local_80.ComparisonIndex.Value = 0;
            local_80.Number = 0;
            FVar24 = FVar28;
          }
          else {
            local_80 = FVar24;
            FNiagaraDynamicDataBase::FNiagaraDynamicDataBase
                      ((FNiagaraDynamicDataBase *)FVar24,param_3);
            *(undefined ***)FVar24 = &___7FNiagaraDynamicDataMesh__6B_;
            *(undefined8 *)((longlong)FVar24 + 0x68) = 0;
            *(undefined4 *)((longlong)FVar24 + 0x70) = 0;
            *(undefined4 *)((longlong)FVar24 + 0x74) = 8;
            *(undefined8 *)((longlong)FVar24 + 0x78) = 0;
            *(undefined8 *)((longlong)FVar24 + 0x80) = 0;
            *(undefined8 *)((longlong)FVar24 + 0x88) = 0;
            *(undefined8 *)((longlong)FVar24 + 0x90) = 0;
            *(undefined8 *)((longlong)FVar24 + 0x98) = 0;
            *(undefined8 *)((longlong)FVar24 + 0xa0) = 0;
          }
          pFVar1 = (ForElementType<FMaterialRenderProxy_*> *)((longlong)FVar24 + 0x28);
          *(undefined8 *)((longlong)FVar24 + 8) = *(undefined8 *)&this->field_0x168;
          uVar8 = *(uint *)&this->field_0x160;
          if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
          }
          piVar2 = (int *)((longlong)FVar24 + 0x74);
          *(undefined4 *)((longlong)FVar24 + 0x70) = 0;
          if (*(int *)((longlong)FVar24 + 0x74) < (int)uVar8) {
            UE::Core::Private::
            ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialRenderProxy_*>_>
                      (8,8,uVar8,pFVar1,0,piVar2);
          }
          puVar30 = *(undefined8 **)&this->field_0x158;
          iVar7 = *(int *)&this->field_0x160;
          puVar6 = puVar30 + iVar7;
          while( true ) {
            if (*(int *)&this->field_0x160 != iVar7) {
              local_97[0] = 0;
              `TCheckedPointerIterator<UMaterialInterface_*_const,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_97);
            }
            FVar28 = local_80;
            if (puVar30 == puVar6) break;
            plVar11 = (longlong *)*puVar30;
            cVar16 = (**(code **)(*plVar11 + 0x378))(plVar11,0xc);
            if ((cVar16 == '\0') &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Mat->CheckMaterialUsage_Concurrent(MATUSAGE_NiagaraMeshParticles)"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererMeshes.cpp"
                                    ,0x790,L""), bVar15)) {
              pcVar13 = (code *)swi(3);
              pFVar21 = (FNiagaraDynamicDataBase *)(*pcVar13)();
              return pFVar21;
            }
            local_78 = (undefined1  [8])(**(code **)(*plVar11 + 0x310))(plVar11);
            pFVar26 = *(ForElementType<FMaterialRenderProxy_*> **)((longlong)FVar24 + 0x68);
            pFVar25 = pFVar1;
            if (pFVar26 != (ForElementType<FMaterialRenderProxy_*> *)0x0) {
              pFVar25 = pFVar26;
            }
            if (pFVar25 <= (ForElementType<FMaterialRenderProxy_*> *)local_78) {
              pFVar25 = pFVar1;
              if (pFVar26 != (ForElementType<FMaterialRenderProxy_*> *)0x0) {
                pFVar25 = pFVar26;
              }
              if ((local_78 < pFVar25->InlineData + (longlong)*piVar2 * 8) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar15)) {
                pcVar13 = (code *)swi(3);
                pFVar21 = (FNiagaraDynamicDataBase *)(*pcVar13)();
                return pFVar21;
              }
            }
            iVar17 = *(int *)((longlong)FVar24 + 0x70);
            if (iVar17 == *piVar2) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialRenderProxy_*>_>
                                 (0x808,pFVar1,piVar2);
            }
            *(int *)((longlong)FVar24 + 0x70) = iVar17 + 1;
            pFVar26 = pFVar1;
            if (*(ForElementType<FMaterialRenderProxy_*> **)((longlong)FVar24 + 0x68) !=
                (ForElementType<FMaterialRenderProxy_*> *)0x0) {
              pFVar26 = *(ForElementType<FMaterialRenderProxy_*> **)((longlong)FVar24 + 0x68);
            }
            puVar30 = puVar30 + 1;
            *(undefined1 (*) [8])(pFVar26->InlineData + (longlong)iVar17 * 8) = local_78;
          }
          pTVar3 = &(param_3->RendererBindings).DataInterfaces;
          pFVar4 = (ForAnyElementType *)((longlong)local_80 + 0x78);
          if ((TArray<TObjectPtr<UNiagaraDataInterface>,TSizedDefaultAllocator<32>_> *)pFVar4 !=
              pTVar3) {
            iVar7 = (param_3->RendererBindings).DataInterfaces.ArrayNum;
            piVar2 = (int *)((longlong)local_80 + 0x84);
            pFVar12 = (pTVar3->AllocatorInstance).Data;
            *(int *)((longlong)local_80 + 0x80) = iVar7;
            if ((iVar7 == 0) && (*piVar2 == 0)) {
              *piVar2 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar7,*piVar2,pFVar4,iVar7,piVar2);
              if (iVar7 != 0) {
                memcpy(pFVar4->Data,pFVar12,(longlong)iVar7 << 3);
              }
            }
          }
          pTVar5 = &(param_3->RendererBindings).UObjects;
          pFVar4 = (ForAnyElementType *)((longlong)FVar28 + 0x88);
          if ((TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)pFVar4 != pTVar5) {
            iVar7 = (param_3->RendererBindings).UObjects.ArrayNum;
            piVar2 = (int *)((longlong)FVar28 + 0x94);
            pFVar12 = (pTVar5->AllocatorInstance).Data;
            *(int *)((longlong)FVar28 + 0x90) = iVar7;
            if ((iVar7 == 0) && (*piVar2 == 0)) {
              *piVar2 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar7,*piVar2,pFVar4,iVar7,piVar2);
              if (iVar7 != 0) {
                memcpy(pFVar4->Data,pFVar12,(longlong)iVar7 << 3);
              }
            }
          }
          TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)FVar28 + 0x98),
                     &(param_3->RendererBindings).ParameterData);
          FVar14 = local_58;
          if ((((0 < (((FNiagaraRendererMaterialParameters *)((longlong)local_58 + 0x340))->
                     AttributeBindings).ArrayNum) ||
               (0 < (((FNiagaraRendererMaterialParameters *)((longlong)local_58 + 0x340))->
                    ScalarParameters).ArrayNum)) ||
              (0 < (((FNiagaraRendererMaterialParameters *)((longlong)local_58 + 0x340))->
                   VectorParameters).ArrayNum)) ||
             (0 < (((FNiagaraRendererMaterialParameters *)((longlong)local_58 + 0x340))->
                  TextureParameters).ArrayNum)) {
            iVar7 = *(int *)&this->field_0x160;
            pcVar13 = *(code **)(*(longlong *)this + 0x78);
            local_58 = *(ForElementType<FMaterialRenderProxy_*> *)&this->field_0x158;
            if ((iVar7 < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar15)) {
              pcVar13 = (code *)swi(3);
              pFVar21 = (FNiagaraDynamicDataBase *)(*pcVar13)();
              return pFVar21;
            }
            local_38._0_4_ = local_58._0_4_;
            local_38._4_4_ = local_58._4_4_;
            auStack_2c[0] = auStack_4c[0];
            auStack_2c[1] = auStack_4c[1];
            auStack_2c[2] = auStack_4c[2];
            auStack_2c[3] = auStack_4c[3];
            iStack_50 = iVar7;
            iStack_30 = iVar7;
            (*pcVar13)(this,(FNiagaraRendererMaterialParameters *)((longlong)FVar14 + 0x340),param_3
                       ,&local_38);
          }
          break;
        }
        if (*(longlong *)FVar27 == 0) break;
        FVar27 = (ForElementType<FNiagaraRendererMeshes::FMeshData>)((longlong)FVar27 + 0x80);
      }
    }
  }
LAB_14934aeb3:
  if ((local_88 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_88 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_88 & 4) != 0) {
    FThreadStats::AddMessage(local_90,CycleScopeEnd);
  }
  return (FNiagaraDynamicDataBase *)FVar28;
}

// GetDynamicDataSize @ 14934f990

int __thiscall FNiagaraRendererMeshes::GetDynamicDataSize(FNiagaraRendererMeshes *this)

{
  return 0xa8;
}

// GetDynamicMeshElements @ 14934f9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraRendererMeshes::GetDynamicMeshElements
          (FNiagaraRendererMeshes *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4,FNiagaraSceneProxy *param_5)

{
  FNiagaraMeshVertexFactory *pFVar1;
  atomic<int> *paVar2;
  ulong64 *puVar3;
  float fVar4;
  float fVar5;
  FNiagaraDynamicDataBase *pFVar6;
  FName FVar7;
  TUniformBufferRef<FNiagaraMeshUniformParameters> this_00;
  ForElementType<FMaterialRenderProxy_*> FVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [12];
  bool bVar14;
  bool bVar15;
  double dVar16;
  FMeshElementCollector *pFVar17;
  LARGE_INTEGER LVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  char cVar22;
  int iVar23;
  FRHICommandListBase *pFVar24;
  FGlobalDynamicReadBuffer *pFVar25;
  longlong lVar26;
  double *pdVar27;
  TVector4<float> *pTVar28;
  FNiagaraGPUInstanceCountManager *pFVar29;
  FAllocation *pFVar30;
  FName *pFVar31;
  FThreadSafeStaticStat<FStat_STAT_NiagaraNumMeshVerts> FVar32;
  FThreadStats *pFVar33;
  FThreadStatsPool *pFVar34;
  FThreadSafeStaticStat<FStat_STAT_NiagaraNumMeshes> FVar35;
  UMaterial *pUVar36;
  FMaterialRenderProxy *this_01;
  FMaterial *pFVar37;
  FMeshBatch *pFVar38;
  int iVar39;
  ForElementType<FNiagaraRendererMeshes::FMeshData> FVar40;
  ForElementType<unsigned_int> FVar41;
  ForElementType<FNiagaraRendererMeshes::FMeshData> FVar42;
  INiagaraRenderableMesh *pIVar43;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *pTVar44;
  uint uVar45;
  uint uVar46;
  double dVar47;
  TUniformBufferRef<FNiagaraMeshUniformParameters> this_02;
  uint uVar48;
  ForElementType<FNiagaraRendererMeshes::FMeshData> FVar49;
  FMeshData *pFVar50;
  undefined8 uVar51;
  FNameEntryId FVar52;
  FName FVar53;
  uchar auVar54 [8];
  FStaticMeshSection *pFVar55;
  atomic<int> aVar56;
  ForElementType<unsigned_int> FVar57;
  ForElementType<FMaterialRenderProxy_*> FVar58;
  FParticlePerfStats *pFVar59;
  uint uVar60;
  FNiagaraDynamicDataMesh *pFVar61;
  double dVar62;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  double dVar63;
  double dVar71;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  double dVar72;
  double dVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  double dVar77;
  undefined1 auVar76 [16];
  double dVar78;
  double dVar79;
  double dVar80;
  double dVar81;
  double dVar82;
  undefined1 auStackY_a08 [32];
  bool local_977;
  bool local_975;
  bool local_974;
  uint local_970;
  undefined1 local_96c [4];
  uint local_968;
  uint local_964;
  uint local_960;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *local_958;
  longlong local_950;
  FName local_948;
  longlong local_940;
  uint local_938;
  FNiagaraRendererMeshes *local_930;
  FNiagaraDynamicDataMesh *local_928;
  FNiagaraSceneProxy *local_920;
  FColor_u_0 local_918 [2];
  FRHICommandListBase *local_910;
  FMeshElementCollector *local_908;
  FName local_900;
  FNiagaraGpuComputeDispatchInterface *local_8f8;
  uint local_8f0;
  uint uStack_8ec;
  uint local_8e8;
  uint uStack_8e4;
  FSceneViewFamily *local_8e0;
  FMeshCollectorResources *local_8d8;
  undefined1 local_8d0 [24];
  LARGE_INTEGER local_8b8;
  FName local_8b0;
  FLODModelData local_898;
  LARGE_INTEGER local_848;
  FName local_840;
  FName local_838;
  LARGE_INTEGER local_830;
  float local_828;
  float fStack_824;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined1 local_808 [24];
  uint local_7f0;
  uint local_7ec;
  FParticlePerfStats *local_7e8;
  undefined8 uStack_7e0;
  FParticlePerfStats *local_7d8;
  double local_7c0;
  double dStack_7b8;
  double local_7b0;
  double dStack_7a8;
  double local_7a0;
  double dStack_798;
  undefined8 local_790;
  double local_788;
  double local_780;
  double local_778;
  FAllocation local_770;
  double local_758;
  double dStack_750;
  undefined8 uStack_748;
  undefined8 local_740;
  double dStack_738;
  double dStack_730;
  undefined1 local_728;
  undefined7 uStack_727;
  FName local_720;
  FName local_718;
  double local_710;
  longlong lStack_708;
  longlong local_700;
  longlong lStack_6f8;
  longlong local_6f0;
  longlong lStack_6e8;
  double local_6e0;
  double local_6c8;
  double local_6b8;
  double dStack_6b0;
  double local_6a8;
  double dStack_6a0;
  double local_698;
  double dStack_690;
  double local_688;
  TVector4<float> local_678;
  FAllocation local_668;
  FNiagaraMeshCommonParameters local_648;
  undefined1 local_4f8 [24];
  undefined8 local_4e0;
  FRHIShaderResourceView *local_4d8;
  Type local_4d0;
  undefined1 local_4c8 [16];
  FRHIShaderResourceView *local_4b8;
  undefined8 local_4b0;
  undefined1 local_4a8 [8];
  FRHIShaderResourceView *local_4a0;
  TVector<float>_u_0 local_498;
  TVector4<float>_u_0 local_488;
  FRHIShaderResourceView *local_478;
  FRHIShaderResourceView *pFStack_470;
  TVector<float>_u_0 local_468;
  ForElementType<unsigned_int> local_458;
  int local_450;
  int local_44c;
  TVector<double>_u_0 local_448;
  undefined1 local_430 [24];
  undefined1 auStack_418 [32];
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [32];
  TVector<float>_u_0 local_3c8;
  FNiagaraGPUSortInfo local_3b8;
  undefined1 local_118 [56];
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_a08;
  local_908 = param_4;
  local_920 = param_5;
  local_968 = param_3;
  local_958 = param_1;
  local_930 = this;
  local_8e0 = param_2;
  if ((param_5 == (FNiagaraSceneProxy *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("SceneProxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererMeshes.cpp"
                          ,0x568,L""), bVar19)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar59 = (param_5->DynamicData).PerfStatsContext.WorldStats;
  uStack_7e0 = (param_5->DynamicData).PerfStatsContext.SystemStats;
  uVar51 = (param_5->DynamicData).PerfStatsContext.SystemStats;
  local_7d8 = (param_5->DynamicData).PerfStatsContext.ComponentStats;
  local_8b8.QuadPart = -1;
  local_7e8 = pFVar59;
  if (((pFVar59 != (FParticlePerfStats *)0x0) ||
      ((FParticlePerfStats *)uVar51 != (FParticlePerfStats *)0x0)) ||
     (local_7d8 != (FParticlePerfStats *)0x0)) {
    QueryPerformanceCounter(&local_848);
    local_8b8 = local_848;
  }
  if ((param_4->RHICmdList == (FRHICommandList *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("RHICmdList",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                          ,0x46,L""), bVar19)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_910 = (FRHICommandListBase *)param_4->RHICmdList;
  pFVar6 = *(FNiagaraDynamicDataBase **)&this->field_0x8;
  local_4f8._0_8_ = (FMeshElementCollector *)0x0;
  local_4f8._8_8_ = (FNiagaraDynamicDataMesh *)0x0;
  local_4c8._0_8_ = (FRHIShaderResourceView *)0x0;
  local_4c8._8_8_ = (FRHIShaderResourceView *)0x0;
  local_478 = (FRHIShaderResourceView *)0x0;
  pFStack_470 = (FRHIShaderResourceView *)0x0;
  local_4f8._16_8_ = (FNiagaraDataBuffer *)0x0;
  local_4e0._0_4_ = 0;
  local_4e0._4_4_ = 0;
  local_4d8 = (FRHIShaderResourceView *)0x0;
  local_4b8 = (FRHIShaderResourceView *)0x0;
  local_4b0._0_4_ = 0;
  local_4b0._4_4_ = 0;
  local_4a8._0_4_ = 0.0;
  local_4a0 = (FRHIShaderResourceView *)0x0;
  local_488._8_8_ = (FRHIShaderResourceView *)0x0;
  local_458 = (ForElementType<unsigned_int>)0x0;
  local_450 = 0;
  auStack_418._8_4_ = 0.0;
  local_430._0_8_ = 0.0;
  auStack_418._0_8_ = 0.0;
  local_4d0 = ~Position;
  local_498._0_8_ = 0xffffffffffffffff;
  stack0xfffffffffffffb70 = 0xffffffffffffffff;
  local_488._s_0.X = -NAN;
  local_468._s_0.X = (float)0xffffffff;
  local_468._s_0.Y = (float)0xffffffff;
  local_44c = 0x40;
  auStack_418._20_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_448._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_448._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_448._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_430._8_8_ = 0.0;
  local_430._16_8_ = 0.0;
  auStack_418._12_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  if ((local_910 == (FRHICommandListBase *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("RHICmdList",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                          ,0x46,L""), bVar19)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  PrepareParticleMeshRenderData
            (this,(FRHICommandListBase *)param_4->RHICmdList,(FParticleMeshRenderData *)local_4f8,
             param_2,param_4,pFVar6,param_5,false,Last);
  if ((((FNiagaraDataBuffer *)local_4f8._16_8_ == (FNiagaraDataBuffer *)0x0) ||
      (GbEnableNiagaraMeshRendering == false)) ||
     ((local_4e0._2_1_ != false &&
      (bVar19 = FNiagaraRenderer::AreViewsRenderingOpaqueOnly
                          (local_958,local_968,
                           (bool)(*(byte *)((longlong)&param_5->_padding_ + 7) & 1)), bVar19))))
  goto LAB_1493512cc;
  pFVar31 = *(FName **)&this->field_0x150;
  local_8b0.ComparisonIndex.Value = 0;
  local_8b0.Number = 0;
  bVar19 = false;
  bVar20 = false;
  FVar53 = *pFVar31;
  if ((FVar53.ComparisonIndex.Value.Value == 0) && (FVar53.Number == 0)) {
LAB_14934fd74:
    bVar15 = bVar20;
    bVar14 = bVar19;
    bVar19 = false;
    local_8d0._16_4_ = local_8b0.ComparisonIndex.Value;
    local_8d0._20_4_ = local_8b0.Number;
    FVar53 = local_8b0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents == 0) {
      bVar14 = false;
      bVar15 = false;
    }
    else {
      local_918[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_918[0]._s_0,(char *)pFVar31[2]);
      bVar19 = false;
      bVar20 = true;
      if (CpuChannel->Enabled < 0) {
        bVar14 = false;
        bVar15 = true;
      }
      else {
        local_900.ComparisonIndex.Value = FVar53.ComparisonIndex.Value.Value;
        local_900.Number = FVar53.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_900,(wchar_t *)pFVar31[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererMeshes.cpp"
                   ,0x57d);
        bVar14 = true;
        bVar15 = true;
        bVar19 = true;
        bVar20 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14934fd74;
    local_948 = FVar53;
    local_8d0._16_8_ = FVar53;
    FThreadStats::AddMessage(FVar53,CycleScopeStart);
    bVar19 = true;
  }
  pFVar24 = (FRHICommandListBase *)FMeshElementCollector::GetRHICommandList(param_4);
  bVar20 = CalculateMeshUsed(this,pFVar24,(FParticleMeshRenderData *)local_4f8);
  if (bVar20) {
    pFVar25 = FMeshElementCollector::GetDynamicReadBuffer(param_4);
    PrepareParticleRenderBuffers(this,local_910,(FParticleMeshRenderData *)local_4f8,pFVar25);
    dVar16 = __real_3fe0000000000000;
    iVar23 = this->EmitterMeshIndexOffset;
    iVar39 = -1;
    if (((iVar23 != -1) && (-1 < iVar23)) &&
       (iVar23 < ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(local_4f8._8_8_ + 0x98))->
                 ArrayNum)) {
      iVar39 = *(int *)((((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                         (local_4f8._8_8_ + 0x98))->AllocatorInstance).Data + iVar23);
    }
    pFVar61 = (FNiagaraDynamicDataMesh *)(longlong)iVar39;
    local_960 = 0;
    lVar26 = (longlong)local_958->ArrayNum;
    local_940 = lVar26;
    local_8d0._8_8_ = pFVar61;
    if (0 < lVar26) {
      local_950 = 0;
      local_938 = 1;
      pTVar44 = local_958;
      uVar46 = local_968;
      do {
        uVar48 = local_938;
        uVar45 = local_960;
        if ((uVar46 & local_938) != 0) {
          uVar46 = 0;
          if ((int)local_960 < pTVar44->ArrayNum) {
            uVar46 = ~local_960 >> 0x1f;
          }
          if ((uVar46 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar53 = *(FName *)((local_958->AllocatorInstance).Data + local_950 * 8);
          local_948 = FVar53;
          if ((*(char *)((longlong)FVar53 + 0x11f3) == '\0') ||
             (bVar20 = IStereoRendering::IsStereoEyeView((FSceneView *)FVar53), !bVar20)) {
            bVar20 = false;
            local_975 = false;
          }
          else {
            bVar20 = true;
            local_975 = true;
            bVar21 = IStereoRendering::IsAPrimaryView((FSceneView *)FVar53);
            pTVar44 = local_958;
            lVar26 = local_940;
            uVar46 = local_968;
            if (!bVar21) goto LAB_14935121e;
          }
          if ((this->SourceMode == Emitter) && (this->bEnableCulling != 0)) {
            local_6c8 = *(double *)((longlong)FVar53 + 0xbd8);
            fVar4 = (param_5->DynamicData).LODDistanceOverride;
            if (fVar4 < 0.0) {
              dVar72 = *(double *)((longlong)FVar53 + 0xbc8) - (double)param_5->_padding_;
              dVar62 = local_6c8 - (double)param_5->_padding_;
              dVar47 = *(double *)((longlong)FVar53 + 0xbd0) - (double)param_5->_padding_;
              dVar47 = dVar47 * dVar47 + dVar72 * dVar72 + dVar62 * dVar62;
            }
            else {
              dVar47 = (double)(fVar4 * fVar4);
            }
            fVar4 = (this->DistanceCullRange).field0_0x0._s_0.X;
            pTVar44 = local_958;
            lVar26 = local_940;
            uVar46 = local_968;
            if ((dVar47 < (double)(fVar4 * fVar4)) ||
               (fVar4 = (this->DistanceCullRange).field0_0x0._s_0.Y,
               (double)(fVar4 * fVar4) < dVar47)) goto LAB_14935121e;
          }
          FNiagaraGPUSortInfo::FNiagaraGPUSortInfo(&local_3b8);
          if ((local_4e0._4_1_ != false) || (local_4e0._5_1_ != false)) {
            InitializeSortInfo(this,(FParticleMeshRenderData *)local_4f8,param_5,
                               (FSceneView *)FVar53,uVar45,bVar20,&local_3b8);
          }
          if ((local_468._s_0.Y != -NAN) ||
             (bVar20 = false, pFVar61 != (FNiagaraDynamicDataMesh *)0xffffffffffffffff)) {
            bVar20 = true;
          }
          local_8f8 = param_5->ComputeDispatchInterface;
          local_970 = 0;
          local_928 = (FNiagaraDynamicDataMesh *)0x0;
          if (0 < (this->Meshes).ArrayNum) {
            FVar40 = (ForElementType<FNiagaraRendererMeshes::FMeshData>)&this->Meshes;
            do {
              pFVar61 = local_928;
              uVar60 = ~local_970 >> 0x1f;
              uVar46 = 0;
              if ((int)local_970 < *(int *)((longlong)FVar40 + 0x90)) {
                uVar46 = uVar60;
              }
              if ((uVar46 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              FVar49 = FVar40;
              if (*(ForElementType<FNiagaraRendererMeshes::FMeshData> *)((longlong)FVar40 + 0x80) !=
                  (ForElementType<FNiagaraRendererMeshes::FMeshData>)0x0) {
                FVar49 = *(ForElementType<FNiagaraRendererMeshes::FMeshData> *)
                          ((longlong)FVar40 + 0x80);
              }
              lVar26 = (longlong)pFVar61 * 0x80;
              pFVar50 = (FMeshData *)((longlong)FVar49 + lVar26);
              if ((pFVar50->SourceMeshIndex != 0) &&
                 ((pFVar61 = (FNiagaraDynamicDataMesh *)local_8d0._8_8_, uVar48 = local_938,
                  uVar45 = local_960, !bVar20 ||
                  ((local_4e0._5_1_ == false && ((bool)(char)local_4e0 == false)))))) break;
              if (((FNiagaraDynamicDataMesh *)local_8d0._8_8_ ==
                   (FNiagaraDynamicDataMesh *)0xffffffffffffffff) ||
                 (local_928 == (FNiagaraDynamicDataMesh *)local_8d0._8_8_)) {
                if (0 < local_450) {
                  uVar46 = 0;
                  if ((int)local_970 < *(int *)((longlong)FVar40 + 0x90)) {
                    uVar46 = uVar60;
                  }
                  if ((uVar46 == 0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar21)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  if (*(ForElementType<FNiagaraRendererMeshes::FMeshData> *)
                       ((longlong)FVar40 + 0x80) !=
                      (ForElementType<FNiagaraRendererMeshes::FMeshData>)0x0) {
                    FVar40 = *(ForElementType<FNiagaraRendererMeshes::FMeshData> *)
                              ((longlong)FVar40 + 0x80);
                  }
                  uVar46 = *(uint *)((longlong)FVar40 + 0x10 + lVar26);
                  if ((((int)uVar46 < 0) || (local_450 <= (int)uVar46)) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Index>=0 && Index<NumBits",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                          ,0x5be,L""), bVar21)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  FVar41 = (ForElementType<unsigned_int>)(local_468.XYZ + 2);
                  if (local_458 != (ForElementType<unsigned_int>)0x0) {
                    FVar41 = local_458;
                  }
                  uVar45 = uVar46 & 0x1f;
                  if ((int)uVar46 < 0) {
                    uVar46 = uVar46 + 0x1f;
                  }
                  FVar40 = (ForElementType<FNiagaraRendererMeshes::FMeshData>)&this->Meshes;
                  if (((uint)*(float *)((longlong)FVar41 + (longlong)((int)uVar46 >> 5) * 4) >>
                       uVar45 & 1) == 0) goto LAB_14935118f;
                }
                if (((pFVar50->LODMode == PerParticle) && (local_4e0._6_1_ == false)) &&
                   (local_970 != 0)) {
                  uVar46 = 0;
                  if ((int)local_970 < *(int *)((longlong)FVar40 + 0x90)) {
                    uVar46 = uVar60;
                  }
                  if ((uVar46 == 0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar21)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  if (*(ForElementType<FNiagaraRendererMeshes::FMeshData> *)
                       ((longlong)FVar40 + 0x80) !=
                      (ForElementType<FNiagaraRendererMeshes::FMeshData>)0x0) {
                    FVar40 = *(ForElementType<FNiagaraRendererMeshes::FMeshData> *)
                              ((longlong)FVar40 + 0x80);
                  }
                  pFVar61 = local_928 + -1;
                  uVar46 = 0;
                  if ((int)(local_970 - 1) < (this->Meshes).ArrayNum) {
                    uVar46 = -local_970 >> 0x1f;
                  }
                  if ((uVar46 == 0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar21)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  FVar49 = (this->Meshes).AllocatorInstance.SecondaryData;
                  FVar42 = (ForElementType<FNiagaraRendererMeshes::FMeshData>)&this->Meshes;
                  if (FVar49 != (ForElementType<FNiagaraRendererMeshes::FMeshData>)0x0) {
                    FVar42 = FVar49;
                  }
                  if (*(int *)((longlong)((longlong)&(pFVar61->ParameterDataBound).ArrayMax + 3) *
                               0x80 + 0x10 + (longlong)FVar42) !=
                      *(int *)(lVar26 + 0x10 + (longlong)FVar40)) goto LAB_1493502e5;
                }
                else {
LAB_1493502e5:
                  local_898.LODIndex = -1;
                  local_898.NumVertices = 0;
                  local_898.NumIndices = 0;
                  local_898.Sections.DataPtr = (FStaticMeshSection *)0x0;
                  local_898.Sections.ArrayNum = 0;
                  local_898.IndexBuffer = (FIndexBuffer *)0x0;
                  local_898.VertexFactoryUserData = (FRHIUniformBuffer *)0x0;
                  local_898.RayTracingGeometry = (FRayTracingGeometry *)0x0;
                  local_898.WireframeNumIndices = 0;
                  local_898.WireframeIndexBuffer = (FIndexBuffer *)0x0;
                  if (pFVar50->LODMode == ByComponentBounds) {
                    local_710 = (double)param_5->_padding_;
                    lStack_708 = param_5->_padding_;
                    local_700 = param_5->_padding_;
                    lStack_6f8 = param_5->_padding_;
                    local_6f0 = param_5->_padding_;
                    lStack_6e8 = param_5->_padding_;
                    local_6e0 = (double)param_5->_padding_;
                    if (((pFVar50->RenderableMesh).Object == (INiagaraRenderableMesh *)0x0) &&
                       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar21)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pIVar43 = (pFVar50->RenderableMesh).Object;
                    pdVar27 = &local_710;
                    lVar26 = *(longlong *)pIVar43;
                    dVar47 = local_6e0;
LAB_1493503b6:
                    iVar23 = (**(code **)(lVar26 + 0x58))(pIVar43,pdVar27,(float)dVar47,FVar53);
                    if (((pFVar50->RenderableMesh).Object == (INiagaraRenderableMesh *)0x0) &&
                       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar21)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                  }
                  else {
                    if (pFVar50->LODMode == ComponentOrigin) {
                      _local_818 = *(undefined8 *)&(this->MeshBoundsScale).field0_0x0;
                      fVar4 = (this->MeshBoundsScale).field0_0x0._s_0.Z;
                      fVar5 = (pFVar50->Scale).field0_0x0._s_0.Z;
                      _local_828 = *(undefined8 *)&(pFVar50->Scale).field0_0x0;
                      if (((pFVar50->RenderableMesh).Object == (INiagaraRenderableMesh *)0x0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar21)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      pIVar43 = (pFVar50->RenderableMesh).Object;
                      pdVar27 = (double *)
                                (**(code **)(*(longlong *)pIVar43 + 0x10))(pIVar43,local_118);
                      local_6a8 = pdVar27[2];
                      dStack_6a0 = pdVar27[3];
                      local_3c8._0_1_ = 1;
                      local_6b8 = *pdVar27;
                      dStack_6b0 = pdVar27[1];
                      local_698 = pdVar27[4];
                      dStack_690 = pdVar27[5];
                      local_688 = pdVar27[6];
                      dVar80 = (double)fVar5;
                      dVar72 = (dStack_6a0 - local_6b8) * dVar16 *
                               (double)(float)local_818 * (double)local_828;
                      dVar78 = (dStack_6b0 + local_698) * dVar16 * (double)fStack_824;
                      dVar47 = (local_6b8 + dStack_6a0) * dVar16 * (double)local_828;
                      dVar62 = (local_698 - dStack_6b0) * dVar16 *
                               (double)(float)uStack_814 * (double)fStack_824;
                      local_3f8._0_8_ = dVar47 - dVar72;
                      dVar72 = dVar72 + dVar47;
                      local_3e8._24_8_ = (local_6a8 + dStack_690) * dVar16 * dVar80;
                      dVar47 = (dStack_690 - local_6a8) * dVar16 * (double)fVar4 * dVar80;
                      local_3f8._8_8_ = dVar78 - dVar62;
                      dVar62 = dVar62 + dVar78;
                      local_3e8._0_8_ = (double)local_3e8._24_8_ - dVar47;
                      local_3e8._24_8_ = (double)local_3e8._24_8_ + dVar47;
                      local_3e8._16_4_ = SUB84(dVar62,0);
                      local_3e8._8_8_ = dVar72;
                      local_3e8._20_4_ = (int)((ulonglong)dVar62 >> 0x20);
                      local_728 = 1;
                      dVar80 = (dVar72 - (double)local_3f8._0_8_) *
                               ___xmm_3fe00000000000003fe0000000000000;
                      dVar11 = (dVar62 - (double)local_3f8._8_8_) * _UNK_150689678;
                      dVar72 = (dVar72 + (double)local_3f8._0_8_) *
                               ___xmm_3fe00000000000003fe0000000000000;
                      dVar78 = (dVar62 + (double)local_3f8._8_8_) * _UNK_150689678;
                      dVar79 = ((double)local_3e8._24_8_ + (double)local_3e8._0_8_) *
                               ___xmm_3fe00000000000003fe0000000000000;
                      dVar12 = ((double)local_3e8._24_8_ - (double)local_3e8._0_8_) *
                               ___xmm_3fe00000000000003fe0000000000000;
                      auVar74._8_4_ = SUB84(dVar79,0);
                      auVar74._0_8_ = dVar79;
                      auVar74._12_4_ = (int)((ulonglong)dVar79 >> 0x20);
                      auVar64._8_4_ = SUB84(dVar72,0);
                      auVar64._0_8_ = dVar72;
                      auVar64._12_4_ = (int)((ulonglong)dVar72 >> 0x20);
                      auVar65._8_4_ = SUB84(dVar80,0);
                      auVar65._0_8_ = dVar80;
                      auVar65._12_4_ = (int)((ulonglong)dVar80 >> 0x20);
                      dVar81 = dVar78 * (double)param_5->_padding_ +
                               dVar72 * (double)param_5->_padding_ +
                               dVar79 * (double)param_5->_padding_ + (double)param_5->_padding_;
                      dVar82 = dVar78 * (double)param_5->_padding_ +
                               auVar64._8_8_ * (double)param_5->_padding_ +
                               auVar74._8_8_ * (double)param_5->_padding_ +
                               (double)param_5->_padding_;
                      dVar63 = dVar80 * (double)param_5->_padding_;
                      dVar71 = auVar65._8_8_ * (double)param_5->_padding_;
                      dVar47 = dVar11 * (double)param_5->_padding_;
                      dVar62 = dVar11 * (double)param_5->_padding_;
                      dVar11 = dVar11 * (double)param_5->_padding_;
                      auVar75._8_4_ = SUB84(dVar12,0);
                      auVar75._0_8_ = dVar12;
                      auVar75._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
                      dVar73 = dVar12 * (double)param_5->_padding_;
                      dVar77 = auVar75._8_8_ * (double)param_5->_padding_;
                      dVar80 = dVar80 * (double)param_5->_padding_;
                      dVar72 = dVar78 * (double)param_5->_padding_ +
                               dVar72 * (double)param_5->_padding_ +
                               dVar79 * (double)param_5->_padding_ + (double)param_5->_padding_;
                      auVar66._0_8_ =
                           (double)CONCAT44((uint)((ulonglong)dVar63 >> 0x20) &
                                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                            SUB84(dVar63,0) &
                                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
                      auVar66._8_4_ = SUB84(dVar71,0) & _UNK_15061cc88;
                      auVar66._12_4_ = (uint)((ulonglong)dVar71 >> 0x20) & _UNK_15061cc8c;
                      auVar76._0_8_ =
                           (double)CONCAT44((uint)((ulonglong)dVar73 >> 0x20) &
                                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                            SUB84(dVar73,0) &
                                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
                      auVar76._8_4_ = SUB84(dVar77,0) & _UNK_15061cc88;
                      auVar76._12_4_ = (uint)((ulonglong)dVar77 >> 0x20) & _UNK_15061cc8c;
                      dVar12 = dVar12 * (double)param_5->_padding_;
                      dVar47 = (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) &
                                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                SUB84(dVar47,0) &
                                                (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                               auVar66._0_8_ + auVar76._0_8_;
                      dVar62 = (double)CONCAT44((uint)((ulonglong)dVar62 >> 0x20) & _UNK_15061cc8c,
                                                SUB84(dVar62,0) & _UNK_15061cc88) + auVar66._8_8_ +
                               auVar76._8_8_;
                      auVar67._8_4_ = SUB84(dVar82,0);
                      auVar67._0_8_ = dVar81;
                      auVar67._12_4_ = (int)((ulonglong)dVar82 >> 0x20);
                      local_7c0 = dVar81 - dVar47;
                      dStack_7b8 = auVar67._8_8_ - dVar62;
                      dStack_798 = (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                    SUB84(dVar11,0) &
                                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                                   (double)CONCAT44((uint)((ulonglong)dVar80 >> 0x20) &
                                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                    SUB84(dVar80,0) &
                                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
                                   (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                    SUB84(dVar12,0) &
                                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff);
                      local_7b0 = dVar72 - dStack_798;
                      dVar47 = dVar47 + dVar81;
                      dVar62 = dVar62 + dVar82;
                      dStack_798 = dStack_798 + dVar72;
                      auVar70._8_4_ = SUB84(dVar62,0);
                      auVar70._0_8_ = dVar47;
                      auVar70._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
                      local_740._0_4_ = SUB84(dVar47,0);
                      local_740._4_4_ = (undefined4)((ulonglong)dVar47 >> 0x20);
                      auVar13._4_8_ = dStack_7b8;
                      auVar13._0_4_ = uStack_748._4_4_;
                      auVar68._0_8_ = auVar13._0_8_ << 0x20;
                      auVar68._8_4_ = (undefined4)local_740;
                      auVar68._12_4_ = local_740._4_4_;
                      dStack_7a8 = auVar68._8_8_;
                      dStack_738 = auVar70._8_8_;
                      local_790 = CONCAT71(uStack_727,1);
                      local_740 = dStack_7a8;
                      local_7a0 = dStack_738;
                      local_758 = local_7c0;
                      dStack_750 = dStack_7b8;
                      uStack_748 = local_7b0;
                      dStack_730 = dStack_798;
                      if (((pFVar50->RenderableMesh).Object == (INiagaraRenderableMesh *)0x0) &&
                         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar21)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      pdVar27 = &local_788;
                      pIVar43 = (pFVar50->RenderableMesh).Object;
                      lVar26 = *(longlong *)pIVar43;
                      local_788 = (dStack_7a8 + local_7c0) * dVar16;
                      local_780 = (local_7a0 + dStack_7b8) * dVar16;
                      auVar69._0_8_ = (dStack_798 + local_7b0) * dVar16;
                      auVar69._8_8_ = 0;
                      auVar10._8_8_ = 0;
                      auVar10._0_8_ =
                           ((local_7a0 - dStack_7b8) * (local_7a0 - dStack_7b8) +
                            (dStack_7a8 - local_7c0) * (dStack_7a8 - local_7c0) +
                           (dStack_798 - local_7b0) * (dStack_798 - local_7b0)) *
                           __real_3fd0000000000000;
                      auVar70 = sqrtpd(auVar69,auVar10);
                      dVar47 = auVar70._0_8_;
                      local_778 = auVar69._0_8_;
                      goto LAB_1493503b6;
                    }
                    if (((pFVar50->RenderableMesh).Object == (INiagaraRenderableMesh *)0x0) &&
                       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar21)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    iVar23 = pFVar50->LODLevel;
                  }
                  pIVar43 = (pFVar50->RenderableMesh).Object;
                  (**(code **)(*(longlong *)pIVar43 + 0x18))(pIVar43,&local_898,iVar23);
                  pFVar17 = local_908;
                  if (local_898.LODIndex != -1) {
                    local_8d8 = FMeshElementCollector::
                                AllocateOneFrameResource<FNiagaraRendererMeshes::FMeshCollectorResources>
                                          (local_908);
                    pFVar24 = local_910;
                    pFVar1 = &local_8d8->VertexFactory;
                    if (local_8e0->Scene != (FSceneInterface *)0x0) {
                      *(char *)((longlong)&(local_8d8->VertexFactory)._padding_ + 4) =
                           (char)local_8e0->Scene->FeatureLevel;
                    }
                    (local_8d8->VertexFactory).bAddPrimitiveIDElement = (bool)(char)local_4e0;
                    (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,local_910);
                    if (((pFVar50->RenderableMesh).Object == (INiagaraRenderableMesh *)0x0) &&
                       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar21)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pIVar43 = (pFVar50->RenderableMesh).Object;
                    (**(code **)(*(longlong *)pIVar43 + 0x30))(pIVar43,pFVar24,pFVar1,&local_898);
                    PreparePerMeshData(this,(FParticleMeshRenderData *)local_4f8,pFVar1,param_5,
                                       pFVar50);
                    if ((pFVar17->DynamicReadBuffer == (FGlobalDynamicReadBuffer *)0x0) &&
                       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                           ("DynamicReadBuffer",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                                            ,0x3f,L""), bVar21)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pFVar25 = pFVar17->DynamicReadBuffer;
                    if (this->SourceMode == Emitter) {
                      local_964 = 1;
                      local_498._s_0.X = (float)0xffffffff;
                      uVar46 = local_964;
                      local_4a0 = (FRHIShaderResourceView *)
                                  GFNiagaraNullSortedIndicesVertexBuffer._40_8_;
                    }
                    else {
                      uVar46 = *(uint *)(local_4f8._16_8_ + 0x124);
                      local_964 = uVar46;
                      if ((local_4e0._5_1_ == false) && (local_4e0._4_1_ == false)) {
                        local_498._s_0.X = (float)0xffffffff;
                        local_4a0 = (FRHIShaderResourceView *)
                                    GFNiagaraNullSortedIndicesVertexBuffer._40_8_;
                      }
                      else {
                        local_3b8.LocalBSphere.Center.field0_0x0._s_0.X = (double)local_430._0_8_;
                        local_3b8.LocalBSphere.Center.field0_0x0._s_0.Y = (double)local_430._8_8_;
                        local_3b8.LocalBSphere.Center.field0_0x0._s_0.Z = (double)local_430._16_8_;
                        local_3b8.LocalBSphere.W = (double)auStack_418._0_8_;
                        local_3b8.CullingWorldSpaceOffset.field0_0x0._s_0.X = local_448._s_0.X;
                        local_3b8.CullingWorldSpaceOffset.field0_0x0._s_0.Y = local_448._s_0.Y;
                        local_3b8.CullingWorldSpaceOffset.field0_0x0._s_0.Z = local_448._s_0.Z;
                        local_3b8.MeshIndex = pFVar50->SourceMeshIndex;
                        pTVar28 = GetShaderLODScreenSize(&local_678,(FSceneView *)FVar53,pFVar50);
                        local_3b8.LODScreenSize.field0_0x0._0_8_ =
                             *(undefined8 *)&pTVar28->field0_0x0;
                        local_3b8.LODScreenSize.field0_0x0._8_8_ =
                             *(undefined8 *)((longlong)&pTVar28->field0_0x0 + 8);
                        if (local_4e0._3_1_ == false) {
                          pFVar30 = FGlobalDynamicReadBuffer::AllocateUInt32
                                              (pFVar25,&local_668,uVar46);
                          local_770.Buffer = pFVar30->Buffer;
                          local_770.ReadBuffer = pFVar30->ReadBuffer;
                          local_770.SRV = pFVar30->SRV;
                          uVar46 = FNiagaraRenderer::SortAndCullIndices
                                             (&local_3b8,(FNiagaraDataBuffer *)local_4f8._16_8_,
                                              &local_770);
                          local_498._0_8_ = local_498._0_8_ & 0xffffffff00000000;
                          local_964 = uVar46;
                          local_4a0 = local_770.SRV;
                        }
                        else {
                          if (local_4e0._5_1_ == false) {
                            local_3b8.CulledGPUParticleCountOffset = 0xffffffff;
                          }
                          else {
                            pFVar29 = FNiagaraGpuComputeDispatchInterface::
                                      GetGPUInstanceCounterManager(local_8f8);
                            if ((pFVar29->bAcquiredCulledCounts != false) &&
                               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("!bAcquiredCulledCounts",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                                                  ,0x59,L""), bVar21)) {
                              pcVar9 = (code *)swi(3);
                              (*pcVar9)();
                              return;
                            }
                            LOCK();
                            paVar2 = &pFVar29->RequiredCulledCounts;
                            local_3b8.CulledGPUParticleCountOffset = *(uint *)paVar2;
                            *paVar2 = (atomic<int>)((int)*paVar2 + 1);
                            UNLOCK();
                          }
                          cVar22 = (**(code **)(local_8f8->_padding_ + 0xe0))(local_8f8,pFVar24);
                          if (cVar22 != '\0') {
                            local_4a0 = local_3b8.AllocationInfo.BufferSRV.Reference;
                            local_498._s_0.X = (float)local_3b8.AllocationInfo.BufferOffset;
                          }
                        }
                      }
                    }
                    if (uVar46 != 0) {
                      auVar54[4] = '\0';
                      auVar54[5] = '\0';
                      auVar54[6] = '\0';
                      auVar54[7] = '\0';
                      auVar54._0_4_ = uVar46 * local_898.NumVertices;
                      if (uVar46 * local_898.NumVertices == 0) {
LAB_149350c91:
                        if (FThreadStats::bPrimaryEnable != false) {
                          FVar35 = StatPtr_STAT_NiagaraNumMeshes;
                          if (StatPtr_STAT_NiagaraNumMeshes ==
                              (FThreadSafeStaticStat<FStat_STAT_NiagaraNumMeshes>)0x0) {
                            pFVar31 = ::FName::FName(&local_718,"STAT_NiagaraNumMeshes");
                            FVar35 = (FThreadSafeStaticStat<FStat_STAT_NiagaraNumMeshes>)
                                     FThreadSafeStaticStatBase::DoSetup
                                               ((FThreadSafeStaticStatBase *)
                                                &StatPtr_STAT_NiagaraNumMeshes,*pFVar31,
                                                L"NumMeshesRenderer","STATGROUP_Niagara",
                                                "STATCAT_Niagara",L"Niagara",true,true,ST_int64,
                                                false,false,MCR_Invalid);
                          }
                          FVar7 = *(FName *)FVar35;
                          FVar52 = FVar7.ComparisonIndex.Value;
                          uVar46 = FVar7.Number;
                          local_8e8 = FVar52.Value;
                          uStack_8e4 = uVar46;
                          if (((FVar7 != (FName)0x0) &&
                              (FThreadStats::bPrimaryDisableForever == false)) &&
                             (FThreadStats::TlsSlot != 0xffffffff)) {
                            pFVar33 = TlsGetValue(FThreadStats::TlsSlot);
                            if (pFVar33 == (FThreadStats *)0x0) {
                              pFVar34 = FThreadStatsPool::Get();
                              pFVar33 = FThreadStatsPool::GetFromPool(pFVar34);
                            }
                            local_7ec = uVar46 & 0xffffafff | 0xa000;
                            dVar47 = (double)(ulonglong)local_964;
                            local_838 = FVar7;
                            local_808._16_8_ = dVar47;
                            local_7f0 = FVar52.Value;
                            FThreadStats::AddStatMessage(pFVar33,(FStatMessage *)(local_808 + 0x10))
                            ;
                            FStatsTrace::Add(&local_838,(long64)dVar47);
                            if (pFVar33->ScopeCount == 0) {
                              FThreadStats::Flush(pFVar33,false,false);
                            }
                            else if (FThreadStats::bIsRawStatsActive != false) {
                              FThreadStats::FlushRawStats(pFVar33,false,false);
                            }
                          }
                        }
                      }
                      else if (FThreadStats::bPrimaryEnable != false) {
                        FVar32 = StatPtr_STAT_NiagaraNumMeshVerts;
                        if (StatPtr_STAT_NiagaraNumMeshVerts ==
                            (FThreadSafeStaticStat<FStat_STAT_NiagaraNumMeshVerts>)0x0) {
                          pFVar31 = ::FName::FName(&local_720,"STAT_NiagaraNumMeshVerts");
                          FVar32 = (FThreadSafeStaticStat<FStat_STAT_NiagaraNumMeshVerts>)
                                   FThreadSafeStaticStatBase::DoSetup
                                             ((FThreadSafeStaticStatBase *)
                                              &StatPtr_STAT_NiagaraNumMeshVerts,*pFVar31,
                                              L"NumMeshVerts","STATGROUP_Niagara","STATCAT_Niagara",
                                              L"Niagara",true,true,ST_int64,false,false,MCR_Invalid)
                          ;
                        }
                        FVar7 = *(FName *)FVar32;
                        FVar52 = FVar7.ComparisonIndex.Value;
                        uVar46 = FVar7.Number;
                        local_8f0 = FVar52.Value;
                        uStack_8ec = uVar46;
                        if (((FVar7 != (FName)0x0) &&
                            (FThreadStats::bPrimaryDisableForever == false)) &&
                           (FThreadStats::TlsSlot != 0xffffffff)) {
                          pFVar33 = TlsGetValue(FThreadStats::TlsSlot);
                          if (pFVar33 == (FThreadStats *)0x0) {
                            pFVar34 = FThreadStatsPool::Get();
                            pFVar33 = FThreadStatsPool::GetFromPool(pFVar34);
                          }
                          local_808._12_4_ = uVar46 & 0xffffafff | 0xa000;
                          local_840 = FVar7;
                          local_808._0_8_ = auVar54;
                          local_808._8_4_ = FVar52.Value;
                          FThreadStats::AddStatMessage(pFVar33,(FStatMessage *)local_808);
                          FStatsTrace::Add(&local_840,(long64)auVar54);
                          if (pFVar33->ScopeCount == 0) {
                            FThreadStats::Flush(pFVar33,false,false);
                          }
                          else if (FThreadStats::bIsRawStatsActive != false) {
                            FThreadStats::FlushRawStats(pFVar33,false,false);
                          }
                        }
                        goto LAB_149350c91;
                      }
                      param_5 = local_920;
                      CreateCommonShaderParams
                                (this,&local_648,(FParticleMeshRenderData *)local_4f8,
                                 (FSceneView *)FVar53,pFVar50,local_920);
                      CreateVFUniformBuffer
                                (this,(FParticleMeshRenderData *)local_8d0,
                                 (FNiagaraMeshCommonParameters *)local_4f8);
                      this_02 = (TUniformBufferRef<FNiagaraMeshUniformParameters>)local_8d0._0_8_;
                      (local_8d8->VertexFactory).MeshParticleUniformBuffer =
                           (FRHIUniformBuffer *)local_8d0._0_8_;
                      this_00 = local_8d8->UniformBuffer;
                      if (this_00 !=
                          (TUniformBufferRef<FNiagaraMeshUniformParameters>)local_8d0._0_8_) {
                        local_8d8->UniformBuffer =
                             (TUniformBufferRef<FNiagaraMeshUniformParameters>)local_8d0._0_8_;
                        if ((TUniformBufferRef<FNiagaraMeshUniformParameters>)local_8d0._0_8_ !=
                            (TUniformBufferRef<FNiagaraMeshUniformParameters>)0x0) {
                          FRHIResource::AddRef((FRHIResource *)local_8d0._0_8_);
                        }
                        if (this_00 != (TUniformBufferRef<FNiagaraMeshUniformParameters>)0x0) {
                          FRHIResource::Release((FRHIResource *)this_00);
                        }
                      }
                      bVar21 = AllowDebugViewmodes();
                      if ((!bVar21) ||
                         (local_974 = true, (local_8e0->EngineShowFlags).Wireframe == 0)) {
                        local_974 = false;
                      }
                      uVar46 = 0;
                      if (0 < local_898.Sections.ArrayNum) {
                        lVar26 = 0;
                        do {
                          uVar45 = 0;
                          if ((int)uVar46 < local_898.Sections.ArrayNum) {
                            uVar45 = ~uVar46 >> 0x1f;
                          }
                          if ((uVar45 == 0) &&
                             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                  ,0x14f,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                 ), bVar21)) {
                            pcVar9 = (code *)swi(3);
                            (*pcVar9)();
                            return;
                          }
                          pFVar55 = (FStaticMeshSection *)
                                    ((longlong)&(local_898.Sections.DataPtr)->MaterialIndex + lVar26
                                    );
                          uVar45 = pFVar55->MaterialIndex;
                          if (((int)uVar45 < 0) ||
                             ((pFVar50->MaterialRemapTable).ArrayNum <= (int)uVar45)) {
LAB_149350fbc:
                            pUVar36 = UMaterial::GetDefaultMaterial(MD_Surface);
                            this_01 = (FMaterialRenderProxy *)
                                      (**(code **)(pUVar36->_padding_ + 0x310))(pUVar36);
                          }
                          else {
                            uVar48 = 0;
                            if ((int)uVar45 < (pFVar50->MaterialRemapTable).ArrayNum) {
                              uVar48 = ~uVar45 >> 0x1f;
                            }
                            if ((uVar48 == 0) &&
                               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar21)) {
                              pcVar9 = (code *)swi(3);
                              (*pcVar9)();
                              return;
                            }
                            uVar51 = local_4f8._8_8_;
                            FVar41 = (pFVar50->MaterialRemapTable).AllocatorInstance.SecondaryData;
                            FVar57 = (ForElementType<unsigned_int>)&pFVar50->MaterialRemapTable;
                            if (FVar41 != (ForElementType<unsigned_int>)0x0) {
                              FVar57 = FVar41;
                            }
                            uVar45 = *(uint *)((longlong)FVar57 + (longlong)(int)uVar45 * 4);
                            if (((int)uVar45 < 0) ||
                               (((TArray<FMaterialRenderProxy_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                                  *)(local_4f8._8_8_ + 0x28))->ArrayNum <= (int)uVar45))
                            goto LAB_149350fbc;
                            FVar58 = (ForElementType<FMaterialRenderProxy_*>)
                                     (local_4f8._8_8_ + 0x28);
                            uVar48 = 0;
                            if ((int)uVar45 <
                                ((TArray<FMaterialRenderProxy_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                                  *)(local_4f8._8_8_ + 0x28))->ArrayNum) {
                              uVar48 = ~uVar45 >> 0x1f;
                            }
                            if ((uVar48 == 0) &&
                               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar21)) {
                              pcVar9 = (code *)swi(3);
                              (*pcVar9)();
                              return;
                            }
                            FVar8 = (((TArray<FMaterialRenderProxy_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                                       *)(uVar51 + 0x28))->AllocatorInstance).SecondaryData;
                            if (FVar8 != (ForElementType<FMaterialRenderProxy_*>)0x0) {
                              FVar58 = FVar8;
                            }
                            this_01 = *(FMaterialRenderProxy **)
                                       ((longlong)FVar58 + (longlong)(int)uVar45 * 8);
                          }
                          this = local_930;
                          FVar53 = local_948;
                          if ((pFVar55->NumTriangles != 0) &&
                             (this_01 != (FMaterialRenderProxy *)0x0)) {
                            pFVar37 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback
                                                (this_01,*(Type *)&local_930->field_0x148);
                            bVar21 = IsTranslucentBlendMode(pFVar37);
                            if ((!bVar21) ||
                               (cVar22 = (**(code **)(pFVar37->_padding_ + 0x68))(pFVar37),
                               cVar22 != '\0')) {
                              local_977 = true;
                              if (bVar21) goto LAB_14935102c;
                              goto LAB_149351086;
                            }
                            local_977 = false;
LAB_14935102c:
                            FVar53 = local_948;
                            this = local_930;
                            if ((*(longlong *)((longlong)local_948 + 0x11e0) != 0) ||
                               ((*(longlong *)((longlong)local_948 + 0x20) != 0 &&
                                ((local_920->_padding_ & 0x100000000000000) == 0))))
                            goto LAB_14935115f;
                            if (*(char *)((longlong)local_948 + 0x11e8) == '\0') {
LAB_149351086:
                            }
                            else if (((bool)(char)local_4e0 != false) && (local_4e0._7_1_ != false))
                            {
                              local_96c[0] = 0;
                              bVar21 = `FNiagaraRendererMeshes::GetDynamicMeshElements'::__l99::
                                       <lambda_1>::operator()(local_96c);
                              this = local_930;
                              if (!bVar21) goto LAB_14935115f;
                              goto LAB_149351086;
                            }
                            aVar56 = (atomic<int>)0xffffffff;
                            if (((char)local_4e0 == '\0') &&
                               (aVar56 = (atomic<int>)local_3b8.CulledGPUParticleCountOffset,
                               (atomic<int>)local_3b8.CulledGPUParticleCountOffset ==
                               (atomic<int>)0xffffffff)) {
                              aVar56 = *(atomic<int> *)(local_4f8._16_8_ + 0x5c);
                            }
                            pFVar38 = FMeshElementCollector::AllocateMesh(local_908);
                            this = local_930;
                            FVar53 = local_948;
                            CreateMeshBatchForSection
                                      (local_930,local_910,(FParticleMeshRenderData *)local_4f8,
                                       &local_648,pFVar38,
                                       (FVertexFactory *)&local_8d8->VertexFactory,this_01,local_920
                                       ,pFVar50,&local_898,pFVar55,(FSceneView *)local_948,local_960
                                       ,local_964,(uint)aVar56,local_974,local_975,local_977);
                            FMeshElementCollector::AddMesh(local_908,local_960,pFVar38);
                          }
LAB_14935115f:
                          uVar46 = uVar46 + 1;
                          lVar26 = lVar26 + 0x1c;
                          this_02 = (TUniformBufferRef<FNiagaraMeshUniformParameters>)
                                    local_8d0._0_8_;
                          param_5 = local_920;
                        } while ((int)uVar46 < local_898.Sections.ArrayNum);
                      }
                      if (this_02 != (TUniformBufferRef<FNiagaraMeshUniformParameters>)0x0) {
                        FRHIResource::Release((FRHIResource *)this_02);
                      }
                    }
                  }
                }
                FVar40 = (ForElementType<FNiagaraRendererMeshes::FMeshData>)&this->Meshes;
              }
LAB_14935118f:
              local_970 = local_970 + 1;
              local_928 = (FNiagaraDynamicDataMesh *)((longlong)&local_928->_padding_ + 1);
              pFVar61 = (FNiagaraDynamicDataMesh *)local_8d0._8_8_;
              uVar48 = local_938;
              uVar45 = local_960;
            } while ((int)local_970 < (this->Meshes).ArrayNum);
          }
          if (local_3b8.AllocationInfo.BufferSRV.Reference != (FRHIShaderResourceView *)0x0) {
            FRHIResource::Release((FRHIResource *)local_3b8.AllocationInfo.BufferSRV.Reference);
          }
          if (local_3b8.GPUParticleCountSRV.Reference != (FRHIShaderResourceView *)0x0) {
            FRHIResource::Release((FRHIResource *)local_3b8.GPUParticleCountSRV.Reference);
          }
          if (local_3b8.ParticleDataIntSRV.Reference != (FRHIShaderResourceView *)0x0) {
            FRHIResource::Release((FRHIResource *)local_3b8.ParticleDataIntSRV.Reference);
          }
          if (local_3b8.ParticleDataHalfSRV.Reference != (FRHIShaderResourceView *)0x0) {
            FRHIResource::Release((FRHIResource *)local_3b8.ParticleDataHalfSRV.Reference);
          }
          pTVar44 = local_958;
          lVar26 = local_940;
          uVar46 = local_968;
          if (local_3b8.ParticleDataFloatSRV.Reference != (FRHIShaderResourceView *)0x0) {
            FRHIResource::Release((FRHIResource *)local_3b8.ParticleDataFloatSRV.Reference);
            pTVar44 = local_958;
            lVar26 = local_940;
            uVar46 = local_968;
          }
        }
LAB_14935121e:
        local_960 = uVar45 + 1;
        local_938 = uVar48 << 1 | (uint)((int)uVar48 < 0);
        local_950 = local_950 + 1;
        uVar51 = uStack_7e0;
        FVar53 = (FName)local_8d0._16_8_;
        pFVar59 = local_7e8;
      } while (local_950 < lVar26);
    }
  }
  if (bVar15) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar19) {
    FThreadStats::AddMessage(FVar53,CycleScopeEnd);
  }
LAB_1493512cc:
  if (local_458 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_458);
  }
  LVar18 = local_8b8;
  if (local_8b8.QuadPart != -1) {
    QueryPerformanceCounter(&local_830);
    lVar26 = local_830.QuadPart - (longlong)LVar18;
    if (pFVar59 != (FParticlePerfStats *)0x0) {
      puVar3 = &(pFVar59->RenderThreadStats).GetDynamicMeshElementsCycles;
      *puVar3 = *puVar3 + lVar26;
    }
    if ((FParticlePerfStats *)uVar51 != (FParticlePerfStats *)0x0) {
      puVar3 = &(((FParticlePerfStats *)uVar51)->RenderThreadStats).GetDynamicMeshElementsCycles;
      *puVar3 = *puVar3 + lVar26;
    }
    if (local_7d8 != (FParticlePerfStats *)0x0) {
      puVar3 = &(local_7d8->RenderThreadStats).GetDynamicMeshElementsCycles;
      *puVar3 = *puVar3 + lVar26;
    }
  }
  return;
}

// GetDynamicRayTracingInstances @ 149351f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FNiagaraRendererMeshes::GetDynamicRayTracingInstances
          (FNiagaraRendererMeshes *this,FRayTracingInstanceCollector *param_1,
          FNiagaraSceneProxy *param_2)

{
  FNiagaraMeshVertexFactory *pFVar1;
  atomic<int> *paVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<FNiagaraRendererMeshes::FMeshData> FVar4;
  INiagaraRenderableMesh *pIVar5;
  FSceneInterface *pFVar6;
  TUniformBufferRef<FNiagaraMeshUniformParameters> this_00;
  ForElementType<FMaterialRenderProxy_*> FVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  ulonglong uVar17;
  TConsoleVariableData<int> *pTVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  bool bVar21;
  bool bVar22;
  char cVar23;
  float fVar24;
  uint uVar25;
  int iVar26;
  FGlobalDynamicReadBuffer *pFVar27;
  FMeshCollectorResources *pFVar28;
  TVector4<float> *pTVar29;
  FNiagaraGPUInstanceCountManager *pFVar30;
  FAllocation *pFVar31;
  TVector<float> *pTVar32;
  longlong lVar33;
  ForElementType<FMeshBatchElement> FVar34;
  ForElementType<FNiagaraRendererMeshes::FMeshData> FVar35;
  FMaterialRenderProxy *pFVar36;
  ForElementType<unsigned_int> FVar37;
  TUniformBufferRef<FNiagaraMeshUniformParameters> this_01;
  uint uVar38;
  uint uVar39;
  FMeshBatch *pFVar40;
  FNiagaraGpuComputeDispatchInterface *pFVar41;
  FStaticMeshSection *pFVar42;
  FRHICommandListBase *pFVar43;
  ForElementType<FMaterialRenderProxy_*> FVar44;
  FMeshBatch *pFVar45;
  FSceneView *pFVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar57;
  undefined1 auVar56 [16];
  undefined4 uVar58;
  float fVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auStackY_d48 [32];
  undefined1 local_cb7 [3];
  float local_cb4;
  FSceneView *local_cb0;
  FRHICommandListBase *local_ca8;
  uint local_ca0;
  FMeshCollectorResources *local_c98;
  uint local_c90;
  FNiagaraSceneProxy *local_c88;
  FNiagaraGpuComputeDispatchInterface *local_c80;
  FRayTracingInstance local_c78;
  FMaterialRenderProxy *local_c08;
  double dStack_c00;
  uint local_bf8;
  int local_bf4;
  undefined1 local_bf0 [28];
  float fStack_bd4;
  float local_bd0;
  undefined1 local_bc8 [20];
  int iStack_bb4;
  FMeshBatch *local_bb0;
  int iStack_ba8;
  undefined4 uStack_ba4;
  bool local_ba0;
  bool local_b9f;
  ERayTracingInstanceLayer local_b9e;
  bool local_b9d;
  uint local_b9c;
  ForAnyElementType local_b98;
  undefined1 local_b90 [24];
  ForAnyElementType local_b78;
  undefined8 local_b70;
  FRHIShaderResourceView *local_b68;
  int iStack_b60;
  undefined4 uStack_b5c;
  undefined1 local_b58 [48];
  TVector<double>_u_0 local_b28;
  double local_b08;
  undefined8 uStack_b00;
  FGlobalDynamicReadBuffer *local_af8;
  double local_ae8;
  double dStack_ae0;
  double local_ad8;
  uint local_ac8;
  FMaterialRenderProxy *local_ac0;
  FRayTracingInstanceCollector *local_ab8;
  FRayTracingInstance local_ab0;
  FAllocation local_a40;
  undefined8 local_a28;
  float local_a20;
  undefined8 local_a18;
  undefined4 local_a08;
  undefined4 uStack_a04;
  undefined4 uStack_a00;
  undefined4 uStack_9fc;
  double local_9f8;
  double dStack_9f0;
  TVector4<float> local_9e8;
  double local_9d8;
  double dStack_9d0;
  undefined4 local_9c8;
  undefined4 uStack_9c4;
  undefined4 uStack_9c0;
  int iStack_9bc;
  double local_9b8;
  double dStack_9b0;
  undefined4 local_9a8;
  undefined4 uStack_9a4;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  double local_998;
  double dStack_990;
  undefined4 local_988;
  undefined4 uStack_984;
  undefined4 uStack_980;
  undefined4 uStack_97c;
  double local_978;
  double dStack_970;
  undefined4 local_968;
  undefined4 uStack_964;
  undefined4 uStack_960;
  undefined4 uStack_95c;
  FAllocation local_958;
  FNiagaraMeshCommonParameters local_938;
  undefined1 local_7e8 [27];
  bool local_7cd;
  undefined2 local_7cc;
  FRHIShaderResourceView *local_790;
  TVector<float>_u_0 local_788 [5];
  ForElementType<unsigned_int> local_748;
  TVector<double>_u_0 local_738;
  undefined1 local_720 [24];
  TVector4<float>_u_0 aTStack_708 [2];
  undefined1 local_6e8 [16];
  undefined1 local_6d8 [16];
  TVector4<float>_u_0 local_6c8;
  undefined1 local_6b8 [16];
  undefined1 local_6a8 [16];
  undefined8 local_698;
  FMaterialRenderProxy *pFStack_690;
  double local_688;
  double dStack_680;
  undefined8 local_678;
  double dStack_670;
  TMatrix<double> local_668;
  TMatrix<double> local_5e8;
  FMeshBatch local_568;
  TMatrix<double> local_488;
  TMatrix<double> local_408;
  FNiagaraGPUSortInfo local_388;
  ulonglong local_e8;
  
  pTVar18 = CVarRayTracingNiagaraMeshes.Ref;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_d48;
  local_c88 = param_2;
  local_bf0._8_8_ = this;
  local_ab8 = param_1;
  bVar21 = IsInParallelRenderingThread();
  if ((!bVar21) &&
     (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar21)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (pTVar18->ShadowedValue[1] != 0) {
    if ((param_2 == (FNiagaraSceneProxy *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("SceneProxy",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererMeshes.cpp"
                            ,0x651,L""), bVar21)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar26 = (param_1->Views).ArrayNum;
    pFVar3 = (param_1->Views).AllocatorInstance.Data;
    local_bf4 = iVar26;
    if ((iVar26 < 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar21)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_ca0 = param_1->VisibilityMap;
    local_ac8 = 0;
    if (local_ca0 != 0) {
      for (; (local_ca0 >> local_ac8 & 1) == 0; local_ac8 = local_ac8 + 1) {
      }
    }
    uVar39 = 0x20;
    if (local_ca0 != 0) {
      uVar39 = local_ac8;
    }
    local_bf8 = uVar39;
    if ((((int)uVar39 < 0) || (iVar26 <= (int)uVar39)) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Views.IsValidIndex(FirstActiveViewIndex)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererMeshes.cpp"
                            ,0x659,
                            L"There should be at least one active view when calling GetDynamicRayTracingInstances(...)."
                           ), bVar21)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar38 = 0;
    if ((int)uVar39 < iVar26) {
      uVar38 = ~uVar39 >> 0x1f;
    }
    if ((uVar38 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar21)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar46 = *(FSceneView **)(pFVar3 + (longlong)(int)uVar39 * 8);
    local_cb0 = pFVar46;
    if ((pFVar46->bIsInstancedStereoEnabled == false) ||
       (bVar21 = IStereoRendering::IsStereoEyeView(pFVar46), !bVar21)) {
      bVar21 = false;
    }
    else {
      bVar21 = true;
    }
    if ((param_1->_padding_ == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("RHICmdList",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                            ,0x46,L""), bVar22)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar43 = (FRHICommandListBase *)param_1->_padding_;
    local_ca8 = pFVar43;
    if ((pFVar46->Family == (FSceneViewFamily *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("FirstActiveView->Family",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererMeshes.cpp"
                            ,0x661,L""), bVar22)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FParticleMeshRenderData::FParticleMeshRenderData((FParticleMeshRenderData *)local_7e8);
    PrepareParticleMeshRenderData
              (this,pFVar43,(FParticleMeshRenderData *)local_7e8,pFVar46->Family,
               (FMeshElementCollector *)param_1,*(FNiagaraDynamicDataBase **)&this->field_0x8,
               param_2,true,PostInitViews);
    if (((FNiagaraDataBuffer *)local_7e8._16_8_ != (FNiagaraDataBuffer *)0x0) &&
       ((this->Meshes).ArrayNum != 0)) {
      local_7cc._0_1_ = false;
      local_7cc._1_1_ = false;
      local_7cd = false;
      pFVar27 = FMeshElementCollector::GetDynamicReadBuffer((FMeshElementCollector *)param_1);
      PrepareParticleRenderBuffers(this,pFVar43,(FParticleMeshRenderData *)local_7e8,pFVar27);
      FNiagaraGPUSortInfo::FNiagaraGPUSortInfo(&local_388);
      if ((local_7cc._0_1_ != false) || (local_7cc._1_1_ != false)) {
        InitializeSortInfo(this,(FParticleMeshRenderData *)local_7e8,param_2,pFVar46,uVar39,bVar21,
                           &local_388);
      }
      local_c90 = 0;
      if (0 < (this->Meshes).ArrayNum) {
        uVar65 = (undefined4)__real_4140000000000000;
        uVar66 = (undefined4)((ulonglong)__real_4140000000000000 >> 0x20);
        uVar63 = (undefined4)__real_3e45798ee0000000;
        uVar64 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
        local_bf0._16_8_ = (FNiagaraDataBuffer *)0x0;
        fVar59 = __real_3f800000;
        do {
          uVar19 = local_bf0._16_8_;
          if ((0 < (int)local_c90) && (this->ParticleMeshIndexOffset == -1)) break;
          uVar39 = 0;
          if ((int)local_c90 < (this->Meshes).ArrayNum) {
            uVar39 = ~local_c90 >> 0x1f;
          }
          if ((uVar39 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar4 = (this->Meshes).AllocatorInstance.SecondaryData;
          local_b58._0_4_ = -1;
          local_b58._32_8_ = 0.0;
          local_b58._40_8_ = (void *)0x0;
          FVar35 = (ForElementType<FNiagaraRendererMeshes::FMeshData>)&this->Meshes;
          if (FVar4 != (ForElementType<FNiagaraRendererMeshes::FMeshData>)0x0) {
            FVar35 = FVar4;
          }
          pFVar36 = (FMaterialRenderProxy *)((longlong)FVar35 + uVar19 * 0x80);
          local_b58._4_4_ = 0;
          local_b58._8_4_ = 0;
          local_b58._16_8_ = (FStaticMeshSection *)0x0;
          local_b58._24_4_ = 0;
          local_b28._s_0.X = 0.0;
          local_b28._8_4_ = 0;
          local_b28._s_0.Z = 0.0;
          local_c08 = pFVar36;
          if ((((TSharedPtr<INiagaraRenderableMesh,1> *)&pFVar36->_padding_)->Object ==
               (INiagaraRenderableMesh *)0x0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar22)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pIVar5 = ((TSharedPtr<INiagaraRenderableMesh,1> *)&pFVar36->_padding_)->Object;
          (**(code **)(*(longlong *)pIVar5 + 0x20))(pIVar5,local_b58,(int)pFVar36->_padding_);
          if ((local_b58._0_4_ != -1) && (local_b28._s_0.X != 0.0)) {
            local_c78.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_c78.Materials.ArrayNum = 0;
            local_c78.Materials.ArrayMax = 0;
            local_c78.MaterialsView.DataPtr = (FMeshBatch *)0x0;
            local_c78.MaterialsView.ArrayNum = 0;
            local_c78.bApplyLocalBoundsTransform = false;
            local_c78.bThinGeometry = false;
            local_c78.InstanceLayer = NearField;
            local_c78.bInstanceMaskAndFlagsDirty = true;
            local_c78.NumTransforms = 0;
            local_c78.PrimitiveInstanceIndices.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_c78.PrimitiveInstanceIndices.ArrayNum = 0;
            local_c78.PrimitiveInstanceIndices.ArrayMax = 0;
            local_c78.PrimitiveInstanceIndicesView.DataPtr = (uint *)0x0;
            local_c78.PrimitiveInstanceIndicesView.ArrayNum = 0;
            local_c78.InstanceTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_c78.InstanceTransforms.ArrayNum = 0;
            local_c78.InstanceTransforms.ArrayMax = 0;
            local_c78.InstanceTransformsView.DataPtr = (TMatrix<double> *)0x0;
            local_c78.InstanceTransformsView.ArrayNum = 0;
            local_c78.Geometry = (FRayTracingGeometry *)local_b28._s_0.X;
            pFVar28 = FMeshElementCollector::
                      AllocateOneFrameResource<FNiagaraRendererMeshes::FMeshCollectorResources>
                                ((FMeshElementCollector *)param_1);
            pFVar1 = &pFVar28->VertexFactory;
            pFVar6 = pFVar46->Family->Scene;
            if (pFVar6 != (FSceneInterface *)0x0) {
              *(char *)((longlong)&(pFVar28->VertexFactory)._padding_ + 4) =
                   (char)pFVar6->FeatureLevel;
            }
            (pFVar28->VertexFactory).bAddPrimitiveIDElement = local_7e8[0x18];
            local_c98 = pFVar28;
            (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,pFVar43);
            if ((((TSharedPtr<INiagaraRenderableMesh,1> *)&pFVar36->_padding_)->Object ==
                 (INiagaraRenderableMesh *)0x0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar22)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pIVar5 = ((TSharedPtr<INiagaraRenderableMesh,1> *)&pFVar36->_padding_)->Object;
            (**(code **)(*(longlong *)pIVar5 + 0x38))(pIVar5,pFVar43,pFVar1,local_b58);
            PreparePerMeshData(this,(FParticleMeshRenderData *)local_7e8,pFVar1,param_2,
                               (FMeshData *)pFVar36);
            pFVar41 = param_2->ComputeDispatchInterface;
            local_c80 = pFVar41;
            if ((param_1->_padding_ == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("DynamicReadBuffer",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                                    ,0x3f,L""), bVar22)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            local_af8 = (FGlobalDynamicReadBuffer *)param_1->_padding_;
            if (this->SourceMode == Emitter) {
              fVar24 = 1.4013e-45;
              local_790 = (FRHIShaderResourceView *)GFNiagaraNullSortedIndicesVertexBuffer._40_8_;
              local_cb4 = 1.4013e-45;
              local_788[0]._s_0.X = -NAN;
LAB_14935272e:
              CreateCommonShaderParams
                        (this,&local_938,(FParticleMeshRenderData *)local_7e8,local_cb0,
                         (FMeshData *)pFVar36,param_2);
              CreateVFUniformBuffer
                        (this,(FParticleMeshRenderData *)local_bf0,
                         (FNiagaraMeshCommonParameters *)local_7e8);
              this_01 = (TUniformBufferRef<FNiagaraMeshUniformParameters>)local_bf0._0_8_;
              (pFVar28->VertexFactory).MeshParticleUniformBuffer =
                   (FRHIUniformBuffer *)local_bf0._0_8_;
              this_00 = local_c98->UniformBuffer;
              if (this_00 != (TUniformBufferRef<FNiagaraMeshUniformParameters>)local_bf0._0_8_) {
                local_c98->UniformBuffer =
                     (TUniformBufferRef<FNiagaraMeshUniformParameters>)local_bf0._0_8_;
                if ((TUniformBufferRef<FNiagaraMeshUniformParameters>)local_bf0._0_8_ !=
                    (TUniformBufferRef<FNiagaraMeshUniformParameters>)0x0) {
                  FRHIResource::AddRef((FRHIResource *)local_bf0._0_8_);
                }
                if (this_00 != (TUniformBufferRef<FNiagaraMeshUniformParameters>)0x0) {
                  FRHIResource::Release((FRHIResource *)this_00);
                }
              }
              if ((int)local_b58._24_4_ < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_b58._24_4_);
              }
              if (local_c78.Materials.ArrayMax < (int)local_b58._24_4_) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xe0,8,local_b58._24_4_,&local_c78.Materials.AllocatorInstance,
                           local_c78.Materials.ArrayNum,&local_c78.Materials.ArrayMax);
              }
              pFVar36 = local_c08;
              uVar39 = 0;
              if (0 < (int)local_b58._24_4_) {
                local_c80 = (FNiagaraGpuComputeDispatchInterface *)0x0;
                do {
                  pFVar41 = local_c80;
                  uVar38 = 0;
                  if ((int)uVar39 < (int)local_b58._24_4_) {
                    uVar38 = ~uVar39 >> 0x1f;
                  }
                  if ((uVar38 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar22)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pFVar42 = (FStaticMeshSection *)
                            ((longlong)(int *)local_b58._16_8_ + (longlong)&pFVar41->_padding_);
                  if (pFVar42->NumTriangles != 0) {
                    uVar38 = pFVar42->MaterialIndex;
                    uVar25 = 0;
                    if ((int)uVar38 <
                        *(int *)&(pFVar36->SubsurfaceProfilesRT).AllocatorInstance.Data) {
                      uVar25 = ~uVar38 >> 0x1f;
                    }
                    if ((uVar25 == 0) &&
                       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar22)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    uVar19 = local_7e8._8_8_;
                    FVar37 = (ForElementType<unsigned_int>)&pFVar36->ImmutableSamplerState;
                    if (*(ForElementType<unsigned_int> *)&pFVar36->SubsurfaceProfileRT !=
                        (ForElementType<unsigned_int>)0x0) {
                      FVar37 = *(ForElementType<unsigned_int> *)&pFVar36->SubsurfaceProfileRT;
                    }
                    uVar38 = *(uint *)((longlong)FVar37 + (longlong)(int)uVar38 * 4);
                    param_2 = local_c88;
                    if ((-1 < (int)uVar38) &&
                       ((int)uVar38 <
                        ((TArray<FMaterialRenderProxy_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                          *)(local_7e8._8_8_ + 0x28))->ArrayNum)) {
                      FVar44 = (ForElementType<FMaterialRenderProxy_*>)(local_7e8._8_8_ + 0x28);
                      uVar25 = 0;
                      if ((int)uVar38 <
                          ((TArray<FMaterialRenderProxy_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                            *)(local_7e8._8_8_ + 0x28))->ArrayNum) {
                        uVar25 = ~uVar38 >> 0x1f;
                      }
                      if ((uVar25 == 0) &&
                         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar22)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      uVar20 = local_7e8._8_8_;
                      FVar7 = (((TArray<FMaterialRenderProxy_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                                 *)(uVar19 + 0x28))->AllocatorInstance).SecondaryData;
                      if (FVar7 != (ForElementType<FMaterialRenderProxy_*>)0x0) {
                        FVar44 = FVar7;
                      }
                      local_c08 = *(FMaterialRenderProxy **)
                                   ((longlong)FVar44 + (longlong)(int)uVar38 * 8);
                      param_2 = local_c88;
                      this = (FNiagaraRendererMeshes *)local_bf0._8_8_;
                      fVar24 = local_cb4;
                      if (local_c08 != (FMaterialRenderProxy *)0x0) {
                        FVar44 = (ForElementType<FMaterialRenderProxy_*>)(local_7e8._8_8_ + 0x28);
                        uVar25 = 0;
                        if ((int)uVar38 <
                            ((TArray<FMaterialRenderProxy_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                              *)(local_7e8._8_8_ + 0x28))->ArrayNum) {
                          uVar25 = ~uVar38 >> 0x1f;
                        }
                        if ((uVar25 == 0) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar22)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        this = (FNiagaraRendererMeshes *)local_bf0._8_8_;
                        FVar7 = (((TArray<FMaterialRenderProxy_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                                   *)(uVar20 + 0x28))->AllocatorInstance).SecondaryData;
                        if (FVar7 != (ForElementType<FMaterialRenderProxy_*>)0x0) {
                          FVar44 = FVar7;
                        }
                        local_ac0 = *(FMaterialRenderProxy **)
                                     ((longlong)FVar44 + (longlong)(int)uVar38 * 8);
                        FMaterialRenderProxy::GetMaterialWithFallback
                                  (local_ac0,*(Type *)(local_bf0._8_8_ + 0x148),&local_ac0);
                        FMeshBatch::FMeshBatch(&local_568);
                        param_2 = local_c88;
                        fVar24 = local_cb4;
                        CreateMeshBatchForSection
                                  (this,local_ca8,(FParticleMeshRenderData *)local_7e8,&local_938,
                                   &local_568,(FVertexFactory *)&local_c98->VertexFactory,local_c08,
                                   local_c88,(FMeshData *)pFVar36,(FLODModelData *)local_b58,pFVar42
                                   ,local_cb0,local_bf8,(uint)local_cb4,0xffffffff,false,bVar21,
                                   false);
                        local_568.bCanApplyViewModeOverrides = 0;
                        local_568.LODIndex = local_b58[0];
                        local_568.VisualizeLODIndex = local_b58[0];
                        local_568.SegmentIndex = uVar39;
                        if ((local_568.Elements.ArrayNum < 1) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar22)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        FVar34 = (ForElementType<FMeshBatchElement>)&local_568;
                        if (local_568.Elements.AllocatorInstance.SecondaryData !=
                            (ForElementType<FMeshBatchElement>)0x0) {
                          FVar34 = local_568.Elements.AllocatorInstance.SecondaryData;
                        }
                        *(undefined8 *)((longlong)FVar34 + 0x40) = local_b58._40_8_;
                        if ((local_568.Elements.ArrayNum < 1) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar22)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        FVar34 = (ForElementType<FMeshBatchElement>)&local_568;
                        if (local_568.Elements.AllocatorInstance.SecondaryData !=
                            (ForElementType<FMeshBatchElement>)0x0) {
                          FVar34 = local_568.Elements.AllocatorInstance.SecondaryData;
                        }
                        *(uint *)((longlong)FVar34 + 0x7c) =
                             (uVar39 << 0xe ^ *(uint *)((longlong)FVar34 + 0x7c)) & 0xffc03fff ^
                             uVar39 << 0xe;
                        if (((local_c78.Materials.AllocatorInstance.Data <= &local_568) &&
                            (&local_568 <
                             (FMeshBatch *)
                             (local_c78.Materials.AllocatorInstance.Data +
                             (longlong)local_c78.Materials.ArrayMax * 0xe0))) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar22)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        iVar26 = local_c78.Materials.ArrayNum;
                        if (local_c78.Materials.ArrayNum == local_c78.Materials.ArrayMax) {
                          iVar26 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x8e0,&local_c78.Materials.AllocatorInstance,
                                              &local_c78.Materials.ArrayMax);
                        }
                        local_c78.Materials.ArrayNum = iVar26 + 1;
                        FMeshBatch::FMeshBatch
                                  ((FMeshBatch *)
                                   (local_c78.Materials.AllocatorInstance.Data +
                                   (longlong)iVar26 * 0xe0),&local_568);
                        FVar34 = (ForElementType<FMeshBatchElement>)&local_568;
                        if (local_568.Elements.AllocatorInstance.SecondaryData !=
                            (ForElementType<FMeshBatchElement>)0x0) {
                          FVar34 = local_568.Elements.AllocatorInstance.SecondaryData;
                        }
                        DestructItems<FMeshBatchElement,int>
                                  ((FMeshBatchElement *)FVar34,local_568.Elements.ArrayNum);
                        if (local_568.Elements.AllocatorInstance.SecondaryData !=
                            (ForElementType<FMeshBatchElement>)0x0) {
                          FMemory::Free((void *)local_568.Elements.AllocatorInstance.SecondaryData);
                        }
                      }
                    }
                  }
                  uVar39 = uVar39 + 1;
                  local_c80 = (FNiagaraGpuComputeDispatchInterface *)
                              ((longlong)&local_c80->_padding_ + 4);
                  this_01 = (TUniformBufferRef<FNiagaraMeshUniformParameters>)local_bf0._0_8_;
                  param_1 = local_ab8;
                } while ((int)uVar39 < (int)local_b58._24_4_);
              }
              dVar9 = UE::Math::TQuat<double>::Identity.W;
              dVar12 = UE::Math::TQuat<double>::Identity.Z;
              uVar62 = UE::Math::TQuat<double>::Identity.Y._4_4_;
              uVar61 = UE::Math::TQuat<double>::Identity.Y._0_4_;
              uVar60 = UE::Math::TQuat<double>::Identity.X._4_4_;
              uVar58 = UE::Math::TQuat<double>::Identity.X._0_4_;
              if ((local_c78.Materials.ArrayNum != 0) &&
                 (local_b58._24_4_ == local_c78.Materials.ArrayNum)) {
                local_488.M[0][0] = (double)param_2->_padding_;
                local_488.M[0][1] = (double)param_2->_padding_;
                local_488.M[0][2] = (double)param_2->_padding_;
                local_488.M[0][3] = (double)param_2->_padding_;
                local_488.M[3][2] = (double)param_2->_padding_;
                local_488.M[3][3] = (double)param_2->_padding_;
                local_488.M[1][0] = (double)param_2->_padding_;
                local_488.M[1][1] = (double)param_2->_padding_;
                local_488.M[2][0] = (double)param_2->_padding_;
                local_488.M[2][1] = (double)param_2->_padding_;
                local_488.M[1][2] = (double)param_2->_padding_;
                local_488.M[1][3] = (double)param_2->_padding_;
                local_488.M[3][0] = (double)param_2->_padding_;
                local_488.M[3][1] = (double)param_2->_padding_;
                local_488.M[2][2] = (double)param_2->_padding_;
                local_488.M[2][3] = (double)param_2->_padding_;
                if (((this->field_0x140 & 1) == 0) &&
                   ((param_2->DynamicData).bUseCullProxy == false)) {
                  bVar22 = false;
                }
                else {
                  bVar22 = true;
                }
                local_c08 = (FMaterialRenderProxy *)local_488.M[3][2];
                dStack_c00 = local_488.M[3][3];
                if (this->SourceMode == Emitter) {
                  local_b08 = local_488.M[3][0];
                  local_ae8 = local_488.M[3][1];
                  if (bVar22) {
                    local_c08 = (FMaterialRenderProxy *)
                                UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                    dStack_c00 = 0.0;
                    local_ad8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                    local_ae8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                    dStack_ae0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                    local_b08 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                    uStack_b00 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                  }
                  fStack_bd4 = fVar59;
                  local_bf0._24_4_ = fVar59;
                  local_c98 = (FMeshCollectorResources *)CONCAT44(local_c98._4_4_,fVar59);
                  local_a08 = UE::Math::TQuat<double>::Identity.X._0_4_;
                  uStack_a04 = UE::Math::TQuat<double>::Identity.X._4_4_;
                  uStack_a00 = UE::Math::TQuat<double>::Identity.Y._0_4_;
                  uStack_9fc = UE::Math::TQuat<double>::Identity.Y._4_4_;
                  local_9f8 = UE::Math::TQuat<double>::Identity.Z;
                  dStack_9f0 = UE::Math::TQuat<double>::Identity.W;
                  local_cb4 = fVar59;
                  local_bd0 = fVar59;
                  if (this->bSetAnyBoundVars != 0) {
                    iVar26 = this->VFBoundOffsetsInParamStore[0];
                    pFVar3 = (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                              (local_7e8._8_8_ + 0x98))->AllocatorInstance).Data;
                    if ((-1 < iVar26) &&
                       (iVar26 < ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                                 (local_7e8._8_8_ + 0x98))->ArrayNum)) {
                      local_a28 = *(undefined8 *)(pFVar3 + iVar26);
                      local_a20 = *(float *)(pFVar3 + (longlong)iVar26 + 8);
                      dVar11 = (double)(float)((ulonglong)local_a28 >> 0x20);
                      pFVar36 = (FMaterialRenderProxy *)(double)local_a20;
                      dVar10 = (double)(float)local_a28;
                      local_c08 = pFVar36;
                      local_b08 = dVar10;
                      local_ae8 = dVar11;
                      if (!bVar22) {
                        pTVar32 = FNiagaraSceneProxy::GetLWCRenderTile(param_2);
                        local_b08 = (double)(pTVar32->field0_0x0)._s_0.X *
                                    (double)CONCAT44(uVar66,uVar65) + dVar10;
                        local_ae8 = (double)(pTVar32->field0_0x0)._s_0.Y *
                                    (double)CONCAT44(uVar66,uVar65) + dVar11;
                        local_c08 = (FMaterialRenderProxy *)
                                    ((double)(pTVar32->field0_0x0)._s_0.Z *
                                     (double)CONCAT44(uVar66,uVar65) + (double)pFVar36);
                      }
                      uVar63 = (undefined4)__real_3e45798ee0000000;
                      uVar64 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
                    }
                    iVar26 = this->VFBoundOffsetsInParamStore[3];
                    if ((-1 < iVar26) &&
                       (iVar26 < ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                                 (local_7e8._8_8_ + 0x98))->ArrayNum)) {
                      unique0x0000d400 = *(undefined8 *)(pFVar3 + iVar26);
                      local_cb4 = SUB84(unique0x0000d400,4);
                      local_bd0 = *(float *)(pFVar3 + (longlong)iVar26 + 8);
                      local_c98 = (FMeshCollectorResources *)CONCAT44(local_c98._4_4_,local_bd0);
                    }
                    iVar26 = this->VFBoundOffsetsInParamStore[4];
                    if ((-1 < iVar26) &&
                       (iVar26 < ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                                 (local_7e8._8_8_ + 0x98))->ArrayNum)) {
                      pFVar3 = pFVar3 + iVar26;
                      uVar58 = *(undefined4 *)pFVar3;
                      uVar60 = *(undefined4 *)(pFVar3 + 4);
                      uVar61 = *(undefined4 *)(pFVar3 + 8);
                      uVar62 = *(undefined4 *)(pFVar3 + 0xc);
                      local_a08 = uVar58;
                      uStack_a04 = uVar60;
                      uStack_a00 = uVar61;
                      uStack_9fc = uVar62;
                    }
                  }
                  auVar49._0_8_ = (double)CONCAT44(uVar60,uVar58);
                  auVar49._8_4_ = uVar61;
                  auVar49._12_4_ = uVar62;
                  local_a18 = CONCAT44(uVar64,uVar63);
                  dVar10 = dVar12 * dVar12 + auVar49._0_8_ * (double)CONCAT44(uVar60,uVar58);
                  dVar11 = dVar9 * dVar9 + auVar49._8_8_ * (double)CONCAT44(uVar62,uVar61);
                  auVar50._8_4_ = SUB84(dVar11,0);
                  auVar50._0_8_ = dVar10;
                  auVar50._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
                  auVar51._0_8_ = auVar50._8_8_ + dVar10;
                  auVar51._8_8_ = dVar10 + dVar11;
                  auVar53 = sqrtpd(in_XMM3,auVar51);
                  uVar47 = -(ulonglong)((double)CONCAT44(uVar64,uVar63) <= auVar51._0_8_);
                  uVar48 = -(ulonglong)((double)CONCAT44(uVar64,uVar63) <= auVar51._8_8_);
                  uVar39 = (uint)(uVar47 >> 0x20);
                  uVar38 = (uint)(uVar48 >> 0x20);
                  auVar67 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                  auVar53);
                  auVar68._0_8_ =
                       uVar47 & (ulonglong)(auVar67._0_8_ * (double)CONCAT44(uVar60,uVar58));
                  uVar17 = uVar48 & (ulonglong)(auVar67._8_8_ * (double)CONCAT44(uVar62,uVar61));
                  auVar68._8_4_ = (undefined4)uVar17;
                  auVar68._12_4_ = (undefined4)(uVar17 >> 0x20);
                  auVar55._0_4_ =
                       ~(uint)uVar47 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0)
                  ;
                  auVar55._4_4_ =
                       ~uVar39 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20
                                       );
                  auVar55._8_4_ =
                       ~(uint)uVar48 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0)
                  ;
                  auVar55._12_4_ =
                       ~uVar38 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20
                                       );
                  auVar67._4_4_ =
                       ~uVar39 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20
                                       );
                  auVar67._0_4_ =
                       ~(uint)uVar47 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0)
                  ;
                  auVar67._8_4_ =
                       ~(uint)uVar48 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0)
                  ;
                  auVar67._12_4_ =
                       ~uVar38 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20
                                       );
                  auVar53 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                  auVar53);
                  dVar14 = SUB168(auVar68 | auVar67,0);
                  dVar15 = SUB168(auVar68 | auVar67,8);
                  dVar16 = dVar15 + dVar15;
                  auVar52._0_8_ = (ulonglong)(auVar53._0_8_ * dVar12) & uVar47;
                  uVar48 = (ulonglong)(auVar53._8_8_ * dVar9) & uVar48;
                  auVar52._8_4_ = (undefined4)uVar48;
                  auVar52._12_4_ = (undefined4)(uVar48 >> 0x20);
                  auVar69._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
                  auVar69._8_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[1];
                  dVar13 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
                  dVar12 = SUB168(auVar55 | auVar52,0);
                  dVar9 = dVar12 + dVar12;
                  dVar57 = SUB168(auVar55 | auVar52,8);
                  dVar11 = (dVar14 + dVar14) * dVar14;
                  auVar54._8_4_ = SUB84(dVar16 * dVar15,0);
                  auVar54._0_8_ = dVar11;
                  auVar54._12_4_ = (int)((ulonglong)(dVar16 * dVar15) >> 0x20);
                  dVar10 = dVar57 * (dVar14 + dVar14);
                  local_6e8._0_8_ =
                       (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] -
                       (dVar9 * dVar12 + auVar54._8_8_)) * auVar69._0_8_;
                  local_6c8._8_8_ =
                       (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - (dVar9 * dVar12 + dVar11)
                       ) * auVar69._8_8_;
                  local_6e8._8_8_ = (dVar57 * dVar9 + dVar16 * dVar14) * auVar69._0_8_;
                  dVar12 = (dVar10 + dVar9 * dVar15) * auVar69._8_8_;
                  local_698 = (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] -
                              (dVar11 + auVar54._8_8_)) * dVar13;
                  local_6c8._0_8_ = auVar69._8_8_ * (dVar16 * dVar14 - dVar57 * dVar9);
                  local_6a8._8_8_ = dVar13 * (dVar9 * dVar15 - dVar10);
                  local_5e8.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
                  local_5e8.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
                  auVar56._8_4_ = SUB84(dVar12,0);
                  auVar56._0_8_ = local_6e8._8_8_;
                  auVar56._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
                  local_6a8._0_8_ = (dVar16 * dVar57 + dVar14 * dVar9) * dVar13;
                  local_5e8.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
                  local_5e8.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
                  auVar53._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
                  auVar53._0_8_ = dVar13;
                  auVar53._12_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20
                            );
                  auVar67 = blendpd(auVar69,auVar53,2);
                  local_6d8._0_8_ = auVar67._0_8_ * (dVar14 * dVar9 - dVar16 * dVar57);
                  local_5e8.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
                  local_5e8.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
                  local_5e8.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
                  local_5e8.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
                  local_5e8.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
                  local_5e8.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
                  local_5e8.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
                  local_5e8.M[0][0] =
                       UE::Math::TMatrix<double>::Identity.M[0][0] * (double)(float)local_bf0._24_4_
                  ;
                  local_5e8.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
                  local_5e8.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
                  local_5e8.M[2][2] =
                       UE::Math::TMatrix<double>::Identity.M[2][2] * (double)local_c98._0_4_;
                  local_6d8._8_8_ = local_b08;
                  local_6b8._8_8_ = local_ae8;
                  pFStack_690 = local_c08;
                  local_5e8.M[1][1] =
                       UE::Math::TMatrix<double>::Identity.M[1][1] * (double)local_cb4;
                  local_688 = 0.0;
                  dStack_680 = 0.0;
                  local_6b8._0_8_ = auVar56._8_8_;
                  local_678 = ___xmm_3ff00000000000000000000000000000;
                  dStack_670 = _UNK_15061cbc8;
                  VectorMatrixMultiply(&local_668,(TMatrix<double> *)local_6e8,&local_5e8);
                  uStack_9c0 = SUB84(local_668.M[3][0],0);
                  iStack_9bc = (int)((ulonglong)local_668.M[3][0] >> 0x20);
                  in_XMM3._8_8_ = 0;
                  in_XMM3._0_8_ = local_668.M[3][1];
                  local_9d8 = local_668.M[0][0];
                  dStack_9d0 = local_668.M[1][0];
                  local_6e8._0_8_ = local_668.M[0][0];
                  local_6e8._8_8_ = local_668.M[1][0];
                  local_9c8 = local_668.M[2][0]._0_4_;
                  uStack_9c4 = local_668.M[2][0]._4_4_;
                  local_6d8._4_4_ = local_668.M[2][0]._4_4_;
                  local_6d8._0_4_ = local_668.M[2][0]._0_4_;
                  local_6d8._8_8_ = local_668.M[3][0];
                  uStack_9a0 = SUB84(local_668.M[3][1],0);
                  uStack_99c = (undefined4)((ulonglong)local_668.M[3][1] >> 0x20);
                  local_9a8 = local_668.M[2][1]._0_4_;
                  uStack_9a4 = local_668.M[2][1]._4_4_;
                  local_6b8._4_4_ = local_668.M[2][1]._4_4_;
                  local_6b8._0_4_ = local_668.M[2][1]._0_4_;
                  local_6b8._8_8_ = local_668.M[3][1];
                  uStack_980 = SUB84(local_668.M[3][2],0);
                  uStack_97c = (undefined4)((ulonglong)local_668.M[3][2] >> 0x20);
                  local_9b8 = local_668.M[0][1];
                  dStack_9b0 = local_668.M[1][1];
                  local_6c8._0_8_ = local_668.M[0][1];
                  local_6c8._8_8_ = local_668.M[1][1];
                  local_988 = local_668.M[2][2]._0_4_;
                  uStack_984 = local_668.M[2][2]._4_4_;
                  local_698 = (double)CONCAT44(local_668.M[2][2]._4_4_,local_668.M[2][2]._0_4_);
                  pFStack_690 = (FMaterialRenderProxy *)local_668.M[3][2];
                  local_998 = local_668.M[0][2];
                  dStack_990 = local_668.M[1][2];
                  local_6a8._0_8_ = local_668.M[0][2];
                  local_6a8._8_8_ = local_668.M[1][2];
                  uStack_960 = SUB84(local_668.M[3][3],0);
                  uStack_95c = (undefined4)((ulonglong)local_668.M[3][3] >> 0x20);
                  local_968 = local_668.M[2][3]._0_4_;
                  uStack_964 = local_668.M[2][3]._4_4_;
                  local_678 = (double)CONCAT44(local_668.M[2][3]._4_4_,local_668.M[2][3]._0_4_);
                  dStack_670 = local_668.M[3][3];
                  local_978 = local_668.M[0][3];
                  dStack_970 = local_668.M[1][3];
                  local_688 = local_668.M[0][3];
                  dStack_680 = local_668.M[1][3];
                  if (bVar22) {
                    VectorMatrixMultiply(&local_408,(TMatrix<double> *)local_6e8,&local_488);
                    local_6e8._0_8_ = local_408.M[0][0];
                    local_6e8._8_8_ = local_408.M[0][1];
                    local_6d8._0_8_ = local_408.M[0][2];
                    local_6d8._8_8_ = local_408.M[0][3];
                    local_6c8._0_8_ = local_408.M[1][0];
                    local_6c8._8_8_ = local_408.M[1][1];
                    local_6b8._0_8_ = local_408.M[1][2];
                    local_6b8._8_8_ = local_408.M[1][3];
                    local_6a8._0_8_ = local_408.M[2][0];
                    local_6a8._8_8_ = local_408.M[2][1];
                    local_698 = local_408.M[2][2];
                    pFStack_690 = (FMaterialRenderProxy *)local_408.M[2][3];
                    local_688 = local_408.M[3][0];
                    dStack_680 = local_408.M[3][1];
                    local_678 = local_408.M[3][2];
                    dStack_670 = local_408.M[3][3];
                  }
                  if (((local_c78.InstanceTransforms.AllocatorInstance.Data <=
                        (FScriptContainerElement *)local_6e8) &&
                      ((FScriptContainerElement *)local_6e8 <
                       local_c78.InstanceTransforms.AllocatorInstance.Data +
                       (longlong)local_c78.InstanceTransforms.ArrayMax * 0x80)) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar22)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  iVar26 = local_c78.InstanceTransforms.ArrayNum;
                  if (local_c78.InstanceTransforms.ArrayNum == local_c78.InstanceTransforms.ArrayMax
                     ) {
                    iVar26 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x1080,&local_c78.InstanceTransforms.AllocatorInstance,
                                        &local_c78.InstanceTransforms.ArrayMax);
                  }
                  fVar59 = __real_3f800000;
                  uVar65 = (undefined4)__real_4140000000000000;
                  uVar66 = (undefined4)((ulonglong)__real_4140000000000000 >> 0x20);
                  uVar63 = (undefined4)__real_3e45798ee0000000;
                  uVar64 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
                  local_c78.InstanceTransforms.ArrayNum = iVar26 + 1;
                  lVar33 = (longlong)iVar26 * 0x80;
                  *(undefined8 *)(local_c78.InstanceTransforms.AllocatorInstance.Data + lVar33) =
                       local_6e8._0_8_;
                  *(undefined8 *)(local_c78.InstanceTransforms.AllocatorInstance.Data + lVar33 + 8)
                       = local_6e8._8_8_;
                  *(undefined8 *)
                   (local_c78.InstanceTransforms.AllocatorInstance.Data + lVar33 + 0x10) =
                       local_6d8._0_8_;
                  *(undefined8 *)
                   (local_c78.InstanceTransforms.AllocatorInstance.Data + lVar33 + 0x10 + 8) =
                       local_6d8._8_8_;
                  *(undefined8 *)
                   (local_c78.InstanceTransforms.AllocatorInstance.Data + lVar33 + 0x20) =
                       local_6c8._0_8_;
                  *(undefined8 *)
                   (local_c78.InstanceTransforms.AllocatorInstance.Data + lVar33 + 0x20 + 8) =
                       local_6c8._8_8_;
                  *(undefined8 *)
                   (local_c78.InstanceTransforms.AllocatorInstance.Data + lVar33 + 0x30) =
                       local_6b8._0_8_;
                  *(undefined8 *)
                   (local_c78.InstanceTransforms.AllocatorInstance.Data + lVar33 + 0x30 + 8) =
                       local_6b8._8_8_;
                  *(undefined8 *)
                   (local_c78.InstanceTransforms.AllocatorInstance.Data + lVar33 + 0x40) =
                       local_6a8._0_8_;
                  *(undefined8 *)
                   (local_c78.InstanceTransforms.AllocatorInstance.Data + lVar33 + 0x40 + 8) =
                       local_6a8._8_8_;
                  *(double *)(local_c78.InstanceTransforms.AllocatorInstance.Data + lVar33 + 0x50) =
                       local_698;
                  *(FMaterialRenderProxy **)
                   (local_c78.InstanceTransforms.AllocatorInstance.Data + lVar33 + 0x50 + 8) =
                       pFStack_690;
                  *(double *)(local_c78.InstanceTransforms.AllocatorInstance.Data + lVar33 + 0x60) =
                       local_688;
                  *(double *)
                   (local_c78.InstanceTransforms.AllocatorInstance.Data + lVar33 + 0x60 + 8) =
                       dStack_680;
                  *(double *)(local_c78.InstanceTransforms.AllocatorInstance.Data + lVar33 + 0x70) =
                       local_678;
                  *(double *)
                   (local_c78.InstanceTransforms.AllocatorInstance.Data + lVar33 + 0x70 + 8) =
                       dStack_670;
                  local_c78.NumTransforms = 1;
                }
                else {
                  local_c78.NumTransforms = (uint)fVar24;
                }
                iVar26 = local_bf4;
                uVar38 = 0;
                uVar39 = local_ca0;
                if (0 < local_bf4) {
                  do {
                    if ((uVar39 >> (uVar38 & 0x1f) & 1) != 0) {
                      FRayTracingInstance::FRayTracingInstance
                                ((FRayTracingInstance *)local_bc8,&local_c78);
                      uVar58 = local_bc8._16_4_;
                      pFVar45 = (FMeshBatch *)
                                (local_bc8._8_8_ + (longlong)(int)local_bc8._16_4_ * 0xe0);
                      pFVar40 = (FMeshBatch *)local_bc8._8_8_;
                      while( true ) {
                        if (local_bc8._16_4_ != uVar58) {
                          local_cb7[0] = 0;
                          `TCheckedPointerIterator<FMeshBatch,int,0>::operator!='::__l2::<lambda_1>
                          ::operator()(local_cb7);
                        }
                        if (pFVar40 == pFVar45) break;
                        FMeshElementCollector::AddMesh
                                  ((FMeshElementCollector *)param_1,uVar38,pFVar40);
                        pFVar40 = pFVar40 + 1;
                      }
                      local_ab0.Geometry = (FRayTracingGeometry *)local_bc8._0_8_;
                      local_ab0.Materials.AllocatorInstance.Data =
                           (FScriptContainerElement *)local_bc8._8_8_;
                      local_ab0.Materials.ArrayNum = local_bc8._16_4_;
                      local_ab0.Materials.ArrayMax = iStack_bb4;
                      local_ab0.bApplyLocalBoundsTransform = local_ba0;
                      local_ab0.bThinGeometry = local_b9f;
                      local_ab0.InstanceLayer = local_b9e;
                      local_ab0.bInstanceMaskAndFlagsDirty = local_b9d;
                      local_ab0.NumTransforms = local_b9c;
                      local_ab0.PrimitiveInstanceIndices.AllocatorInstance.Data = local_b98.Data;
                      local_ab0.PrimitiveInstanceIndices.ArrayNum = local_b90._0_4_;
                      local_ab0.PrimitiveInstanceIndices.ArrayMax = local_b90._4_4_;
                      local_ab0.MaterialsView.DataPtr = local_bb0;
                      local_ab0.MaterialsView.ArrayNum = iStack_ba8;
                      local_ab0.MaterialsView._12_4_ = uStack_ba4;
                      local_ab0.InstanceTransforms.AllocatorInstance.Data = local_b78.Data;
                      local_ab0.PrimitiveInstanceIndicesView.DataPtr = (uint *)local_b90._8_8_;
                      local_ab0.PrimitiveInstanceIndicesView._8_8_ = local_b90._16_8_;
                      local_ab0.InstanceTransforms.ArrayNum = (int)local_b70;
                      local_ab0.InstanceTransforms.ArrayMax = local_b70._4_4_;
                      local_b70 = (FRHIShaderResourceView *)0x0;
                      local_bc8._8_8_ = (FMeshBatch *)0x0;
                      stack0xfffffffffffff448 = (FRHIShaderResourceView *)0x0;
                      local_b98.Data = (FScriptContainerElement *)0x0;
                      local_b90._0_4_ = 0;
                      local_b90._4_4_ = 0;
                      local_b78.Data = (FScriptContainerElement *)0x0;
                      local_ab0.InstanceTransformsView.DataPtr = (TMatrix<double> *)local_b68;
                      local_ab0.InstanceTransformsView.ArrayNum = iStack_b60;
                      local_ab0.InstanceTransformsView._12_4_ = uStack_b5c;
                      FRayTracingInstanceCollector::AddRayTracingInstance(param_1,uVar38,&local_ab0)
                      ;
                      if ((FRHIShaderResourceView *)local_b78.Data != (FRHIShaderResourceView *)0x0)
                      {
                        FMemory::Free(local_b78.Data);
                      }
                      if ((FRHIShaderResourceView *)local_b98.Data != (FRHIShaderResourceView *)0x0)
                      {
                        FMemory::Free(local_b98.Data);
                      }
                      DestructItems<FMeshBatch,int>((FMeshBatch *)local_bc8._8_8_,local_bc8._16_4_);
                      uVar39 = local_ca0;
                      if ((FMeshBatch *)local_bc8._8_8_ != (FMeshBatch *)0x0) {
                        FMemory::Free((void *)local_bc8._8_8_);
                        uVar39 = local_ca0;
                      }
                    }
                    uVar38 = uVar38 + 1;
                    this = (FNiagaraRendererMeshes *)local_bf0._8_8_;
                  } while ((int)uVar38 < iVar26);
                }
              }
              if (this_01 != (TUniformBufferRef<FNiagaraMeshUniformParameters>)0x0) {
                FRHIResource::Release((FRHIResource *)this_01);
              }
            }
            else {
              fVar24 = *(float *)(local_7e8._16_8_ + 0x124);
              local_cb4 = fVar24;
              if ((local_7cc._1_1_ == false) && (local_7cc._0_1_ == false)) {
                local_788[0]._s_0.X = -NAN;
                local_790 = (FRHIShaderResourceView *)GFNiagaraNullSortedIndicesVertexBuffer._40_8_;
              }
              else {
                local_388.LocalBSphere.Center.field0_0x0._s_0.X = (double)local_720._0_8_;
                local_388.LocalBSphere.Center.field0_0x0._s_0.Y = (double)local_720._8_8_;
                local_388.LocalBSphere.Center.field0_0x0._s_0.Z = (double)local_720._16_8_;
                local_388.LocalBSphere.W = (double)aTStack_708[0]._0_8_;
                local_388.CullingWorldSpaceOffset.field0_0x0._s_0.X = local_738._s_0.X;
                local_388.CullingWorldSpaceOffset.field0_0x0._s_0.Y = local_738._s_0.Y;
                local_388.CullingWorldSpaceOffset.field0_0x0._s_0.Z = local_738._s_0.Z;
                local_388.MeshIndex = *(int *)&pFVar36->_padding_;
                pTVar29 = GetShaderLODScreenSize(&local_9e8,local_cb0,(FMeshData *)pFVar36);
                local_388.LODScreenSize.field0_0x0._0_8_ = *(undefined8 *)&pTVar29->field0_0x0;
                local_388.LODScreenSize.field0_0x0._8_8_ =
                     *(undefined8 *)((longlong)&pTVar29->field0_0x0 + 8);
                if (local_7cd == false) {
                  pFVar31 = FGlobalDynamicReadBuffer::AllocateUInt32
                                      (local_af8,&local_958,(uint)fVar24);
                  local_a40.Buffer = pFVar31->Buffer;
                  local_a40.ReadBuffer = pFVar31->ReadBuffer;
                  local_a40.SRV = pFVar31->SRV;
                  fVar24 = (float)FNiagaraRenderer::SortAndCullIndices
                                            (&local_388,(FNiagaraDataBuffer *)local_7e8._16_8_,
                                             &local_a40);
                  local_788[0]._s_0.X = 0.0;
                  local_cb4 = fVar24;
                  local_790 = local_a40.SRV;
                }
                else {
                  if (local_7cc._1_1_ == false) {
                    local_388.CulledGPUParticleCountOffset = 0xffffffff;
                  }
                  else {
                    pFVar30 = FNiagaraGpuComputeDispatchInterface::GetGPUInstanceCounterManager
                                        (pFVar41);
                    if ((pFVar30->bAcquiredCulledCounts != false) &&
                       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                           ("!bAcquiredCulledCounts",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                                            ,0x59,L""), bVar22)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    LOCK();
                    paVar2 = &pFVar30->RequiredCulledCounts;
                    local_388.CulledGPUParticleCountOffset = *(uint *)paVar2;
                    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
                    UNLOCK();
                    pFVar41 = local_c80;
                  }
                  cVar23 = (**(code **)(pFVar41->_padding_ + 0xe0))(pFVar41,local_ca8,&local_388);
                  if (cVar23 != '\0') {
                    local_790 = local_388.AllocationInfo.BufferSRV.Reference;
                    local_788[0]._s_0.X = local_388.AllocationInfo.BufferOffset;
                  }
                }
              }
              if (fVar24 != 0.0) goto LAB_14935272e;
            }
            if (local_c78.InstanceTransforms.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c78.InstanceTransforms.AllocatorInstance.Data);
            }
            if (local_c78.PrimitiveInstanceIndices.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c78.PrimitiveInstanceIndices.AllocatorInstance.Data);
            }
            DestructItems<FMeshBatch,int>
                      ((FMeshBatch *)local_c78.Materials.AllocatorInstance.Data,
                       local_c78.Materials.ArrayNum);
            pFVar43 = local_ca8;
            pFVar46 = local_cb0;
            if ((FMeshBatch *)local_c78.Materials.AllocatorInstance.Data != (FMeshBatch *)0x0) {
              FMemory::Free(local_c78.Materials.AllocatorInstance.Data);
              pFVar43 = local_ca8;
              pFVar46 = local_cb0;
            }
          }
          local_bf0._16_8_ = (longlong)(longlong *)local_bf0._16_8_ + 1;
          local_c90 = local_c90 + 1;
          param_2 = local_c88;
        } while ((int)local_c90 < (this->Meshes).ArrayNum);
      }
      if (local_388.AllocationInfo.BufferSRV.Reference != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_388.AllocationInfo.BufferSRV.Reference);
      }
      if (local_388.GPUParticleCountSRV.Reference != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_388.GPUParticleCountSRV.Reference);
      }
      if (local_388.ParticleDataIntSRV.Reference != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_388.ParticleDataIntSRV.Reference);
      }
      if (local_388.ParticleDataHalfSRV.Reference != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_388.ParticleDataHalfSRV.Reference);
      }
      if (local_388.ParticleDataFloatSRV.Reference != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_388.ParticleDataFloatSRV.Reference);
      }
    }
    if (local_748 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_748);
    }
  }
  return;
}

// GetShaderLODScreenSize @ 149356840

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector4<float> * __cdecl
FNiagaraRendererMeshes::GetShaderLODScreenSize
          (TVector4<float> *__return_storage_ptr__,FSceneView *param_1,FMeshData *param_2)

{
  float fVar1;
  float fVar2;
  FSceneView *pFVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  
  pFVar3 = GetLODView(param_1);
  fVar4 = (param_2->LODScreenSize).field0_0x0._s_0.Y;
  dVar5 = (pFVar3->ViewMatrices).ProjectionMatrix.M[1][1];
  dVar6 = (pFVar3->ViewMatrices).ProjectionMatrix.M[0][0];
  if (dVar5 <= dVar6) {
    dVar5 = dVar6;
  }
  fVar1 = param_2->LODDistanceFactor;
  fVar7 = (float)(dVar5 * (double)(param_2->LODScreenSize).field0_0x0._s_0.Z *
                 __real_3fe0000000000000);
  fVar2 = pFVar3->LODDistanceFactor;
  dVar5 = (pFVar3->ViewMatrices).ProjectionMatrix.M[2][3];
  dVar6 = __real_4130000000000000;
  if (0.0 <= fVar4) {
    dVar6 = (double)(fVar4 * fVar4 * __real_3e800000);
  }
  fVar4 = (param_2->LODScreenSize).field0_0x0._s_0.X;
  fVar4 = fVar4 * fVar4 * __real_3e800000;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar7 * fVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.W = (float)((double)fVar2 * dVar5 * (double)fVar1);
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)dVar6;
  return __return_storage_ptr__;
}

// Initialize @ 149358310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraRendererMeshes::Initialize
          (FNiagaraRendererMeshes *this,UNiagaraRendererProperties *param_1,
          FNiagaraEmitterInstance *param_2,FNiagaraSystemInstanceController *param_3)

{
  code *pcVar1;
  bool bVar2;
  UNiagaraMeshRendererProperties *this_00;
  INiagaraRenderableMeshArrayInterface *pIVar3;
  FNiagaraSystemInstance *pFVar4;
  undefined4 local_res8 [2];
  code *local_88 [2];
  undefined **local_78;
  FNiagaraRendererMeshes *local_70;
  undefined8 local_60;
  code *local_58 [5];
  undefined8 *local_30;
  
  FNiagaraRenderer::Initialize((FNiagaraRenderer *)this,param_1,param_2,param_3);
  if ((param_2 == (FNiagaraEmitterInstance *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Emitter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererMeshes.cpp"
                         ,0xd0,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_1 == (UNiagaraRendererProperties *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InProps",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererMeshes.cpp"
                         ,0xd1,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = CastChecked<UNiagaraMeshRendererProperties_const_,UNiagaraRendererProperties_const_>
                      (param_1);
  pIVar3 = UNiagaraMeshRendererProperties::GetMeshArrayInterface(this_00,param_2);
  pFVar4 = (FNiagaraSystemInstance *)0x0;
  this->MeshUsedMax = 0;
  if (param_2 != (FNiagaraEmitterInstance *)0x0) {
    pFVar4 = param_2->ParentSystemInstance;
  }
  local_res8[0] = 0;
  local_58[0] = (code *)0x0;
  pcVar1 = *(code **)((longlong)*pIVar3 + 0x10);
  local_30 = FMemory::Malloc(0x28,8);
  *local_30 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FNiagaraRendererMeshes::Initialize'::`2'::<lambda_2>,0,1>::
               _vftable_;
  local_30[1] = this;
  local_30[2] = local_res8;
  local_30[3] = param_2;
  local_30[4] = this_00;
  if (local_30 + 1 != (undefined8 *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNiagaraRendererMeshes::Initialize'::__l2::<lambda_2>,void,FNiagaraMeshRendererMeshProperties_const_&>
                  ::Call;
  }
  local_60 = 0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNiagaraRendererMeshes::Initialize'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNiagaraRendererMeshes::Initialize'::__l2::<lambda_1>,void,int>
                ::Call;
  local_70 = this;
  (*pcVar1)(pIVar3,pFVar4,local_88,local_58);
  return;
}

// InitializeSortInfo @ 149358a60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraRendererMeshes::InitializeSortInfo
          (FNiagaraRendererMeshes *this,FParticleMeshRenderData *param_1,FNiagaraSceneProxy *param_2
          ,FSceneView *param_3,int param_4,bool param_5,FNiagaraGPUSortInfo *param_6)

{
  TMatrix<double> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ushort uVar10;
  Type TVar11;
  int iVar12;
  FNiagaraRendererLayout *pFVar13;
  FScriptContainerElement *pFVar14;
  FName FVar15;
  FRHIShaderResourceView *pFVar16;
  FRHIShaderResourceView *pFVar17;
  FNiagaraGpuComputeDispatchInterface *pFVar18;
  code *pcVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  ForElementType<UE::Math::TPlane<double>_> *pFVar28;
  bool bVar29;
  uint uVar30;
  FViewMatrices *pFVar31;
  int *piVar32;
  TVector<float> *pTVar33;
  ulonglong uVar34;
  TPlane<double> *pTVar35;
  EGPUSortFlags EVar36;
  FRHIShaderResourceView *this_00;
  FConvexVolume *pFVar37;
  int iVar38;
  longlong lVar39;
  TArray<UE::Math::TPlane<double>,TFixedAllocator<12>_> *pTVar40;
  TPlane<double> *this_01;
  TTypeCompatibleBytes<UE::Math::TPlane<double>_> *pTVar41;
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_126 [2];
  uint local_124;
  uint uStack_120;
  int local_11c;
  int *local_118;
  FNiagaraSceneProxy *local_110;
  FParticleMeshRenderData *local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  TPlane<double> local_e8 [5];
  
  pFVar13 = param_1->RendererLayout;
  local_110 = param_2;
  local_108 = param_1;
  bVar29 = IsInParallelRenderingThread();
  if ((!bVar29) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInParallelRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraRendererProperties.h"
                          ,0x9b,L""), bVar29)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  pFVar14 = (pFVar13->VFVariables_RT).AllocatorInstance.Data;
  iVar38 = (pFVar13->VFVariables_RT).ArrayNum;
  local_11c = iVar38;
  if ((iVar38 < 0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar29)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  FVar15 = **(FName **)&this->field_0x150;
  local_124 = (uint)FVar15.ComparisonIndex.Value;
  uStack_120 = FVar15.Number;
  param_6->OwnerName = FVar15;
  param_6->ParticleCount = param_1->SourceParticleData->NumInstances;
  param_6->SortMode = this->SortMode;
  EVar36 = ValuesAsInt32|SortAfterPostRenderOpaque|KeyGenAfterPostRenderOpaque;
  if (param_1->SourceParticleData->GPUDataReadyStage != Last) {
    EVar36 = ValuesAsInt32|SortAfterPreRender|KeyGenAfterPreRender;
  }
  param_6->SortFlags = EVar36 | (this->bSortHighPrecision != 0) + LowPrecisionKeys;
  param_6->bEnableCulling = param_1->bNeedsCull;
  param_6->RendererVisTagAttributeOffset = param_1->RendererVisTagOffset;
  param_6->MeshIndexAttributeOffset = param_1->MeshIndexOffset;
  param_6->RendererVisibility = this->RendererVisibility;
  (param_6->DistanceCullRange).field0_0x0 = (this->DistanceCullRange).field0_0x0;
  if (param_1->bSortCullOnGpu != false) {
    pFVar16 = param_1->ParticleFloatSRV;
    pFVar17 = (param_6->ParticleDataFloatSRV).Reference;
    pFVar18 = param_2->ComputeDispatchInterface;
    if (pFVar17 != pFVar16) {
      (param_6->ParticleDataFloatSRV).Reference = pFVar16;
      if (pFVar16 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar16);
      }
      if (pFVar17 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar17);
      }
    }
    pFVar16 = param_1->ParticleHalfSRV;
    pFVar17 = (param_6->ParticleDataHalfSRV).Reference;
    if (pFVar17 != pFVar16) {
      (param_6->ParticleDataHalfSRV).Reference = pFVar16;
      if (pFVar16 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar16);
      }
      if (pFVar17 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar17);
      }
    }
    pFVar16 = param_1->ParticleIntSRV;
    pFVar17 = (param_6->ParticleDataIntSRV).Reference;
    if (pFVar17 != pFVar16) {
      (param_6->ParticleDataIntSRV).Reference = pFVar16;
      if (pFVar16 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar16);
      }
      if (pFVar17 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar17);
      }
    }
    param_6->FloatDataStride = param_1->ParticleFloatDataStride;
    param_6->HalfDataStride = param_1->ParticleHalfDataStride;
    param_6->IntDataStride = param_1->ParticleIntDataStride;
    bVar29 = IsInParallelRenderingThread();
    if ((!bVar29) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInParallelRenderingThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                            ,0x6a,L""), bVar29)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    if (((pFVar18->GPUInstanceCounterManager).AllocatedInstanceCounts <
         (pFVar18->GPUInstanceCounterManager).UsedInstanceCounts) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("UsedInstanceCounts <= AllocatedInstanceCounts",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                            ,0x44,L""), bVar29)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    pFVar16 = (pFVar18->GPUInstanceCounterManager).CountBuffer.SRV.Reference;
    pFVar17 = (param_6->GPUParticleCountSRV).Reference;
    this_00 = (FRHIShaderResourceView *)DummyUIntBuffer._64_8_;
    if (pFVar16 != (FRHIShaderResourceView *)0x0) {
      this_00 = pFVar16;
    }
    if (pFVar17 != this_00) {
      (param_6->GPUParticleCountSRV).Reference = this_00;
      if (this_00 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this_00);
      }
      if (pFVar17 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar17);
      }
    }
    param_6->GPUParticleCountOffset = param_1->SourceParticleData->GPUInstanceCountBufferOffset;
  }
  TVar11 = param_1->SortVariable;
  lVar39 = (longlong)(int)TVar11;
  if (TVar11 != ~Position) {
    uVar30 = 0;
    if ((int)TVar11 < iVar38) {
      uVar30 = ~TVar11 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar29)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    if (param_1->bSortCullOnGpu == false) {
      uVar10 = *(ushort *)(pFVar14 + lVar39 * 8);
    }
    else {
      uVar10 = *(ushort *)(pFVar14 + (lVar39 * 4 + 1) * 2);
    }
    uVar30 = 0xffffffff;
    if (uVar10 != 0xffff) {
      uVar30 = (uint)uVar10;
    }
    param_6->SortAttributeOffset =
         -(uint)(pFVar14[lVar39 * 8 + 7] != (FScriptContainerElement)0x0) & 0x80000000 | uVar30;
  }
  uVar22 = *(undefined4 *)((longlong)&(param_3->ViewMatrices).ViewOrigin.field0_0x0 + 4);
  uVar23 = *(undefined4 *)((longlong)&(param_3->ViewMatrices).ViewOrigin.field0_0x0 + 8);
  uVar24 = *(undefined4 *)((longlong)&(param_3->ViewMatrices).ViewOrigin.field0_0x0 + 0xc);
  *(undefined4 *)&(param_6->ViewOrigin).field0_0x0 =
       *(undefined4 *)&(param_3->ViewMatrices).ViewOrigin.field0_0x0;
  *(undefined4 *)((longlong)&(param_6->ViewOrigin).field0_0x0 + 4) = uVar22;
  *(undefined4 *)((longlong)&(param_6->ViewOrigin).field0_0x0 + 8) = uVar23;
  *(undefined4 *)((longlong)&(param_6->ViewOrigin).field0_0x0 + 0xc) = uVar24;
  (param_6->ViewOrigin).field0_0x0._s_0.Z = (param_3->ViewMatrices).ViewOrigin.field0_0x0._s_0.Z;
  if ((param_3->State != (FSceneViewStateInterface *)0x0) &&
     (pFVar31 = (FViewMatrices *)(**(code **)(param_3->State->_padding_ + 0x38))(),
     pFVar31 != (FViewMatrices *)0x0)) {
    dVar2 = (pFVar31->ViewOrigin).field0_0x0._s_0.Y;
    (param_6->ViewOrigin).field0_0x0._s_0.X = (pFVar31->ViewOrigin).field0_0x0._s_0.X;
    (param_6->ViewOrigin).field0_0x0._s_0.Y = dVar2;
    (param_6->ViewOrigin).field0_0x0._s_0.Z = (pFVar31->ViewOrigin).field0_0x0._s_0.Z;
    if (param_3->DynamicMeshElementsShadowCullFrustum == (FConvexVolume *)0x0) goto LAB_149358dc3;
  }
  pFVar31 = &param_3->ViewMatrices;
LAB_149358dc3:
  dVar2 = (pFVar31->ViewMatrix).M[1][2];
  dVar3 = (pFVar31->ViewMatrix).M[2][2];
  (param_6->ViewDirection).field0_0x0._s_0.X = (pFVar31->ViewMatrix).M[0][2];
  (param_6->ViewDirection).field0_0x0._s_0.Y = dVar2;
  (param_6->ViewDirection).field0_0x0._s_0.Z = dVar3;
  if (param_5) {
    dVar2 = (param_3->CullingOrigin).field0_0x0._s_0.Y;
    (param_6->ViewOrigin).field0_0x0._s_0.X = (param_3->CullingOrigin).field0_0x0._s_0.X;
    (param_6->ViewOrigin).field0_0x0._s_0.Y = dVar2;
    (param_6->ViewOrigin).field0_0x0._s_0.Z = (param_3->CullingOrigin).field0_0x0._s_0.Z;
  }
  if (this->bEnableFrustumCulling != 0) {
    pFVar37 = param_3->DynamicMeshElementsShadowCullFrustum;
    if (pFVar37 == (FConvexVolume *)0x0) {
      if ((!param_5) ||
         (pFVar37 = (param_3->StereoCullingFrustum).Object, pFVar37 == (FConvexVolume *)0x0)) {
        pFVar37 = &param_3->ViewFrustum;
      }
      TArray<UE::Math::TPlane<double>,TFixedAllocator<12>_>::
      operator=<TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
                (&param_6->CullPlanes,&pFVar37->Planes);
    }
    else if ((uint)(pFVar37->Planes).ArrayNum < 0xd) {
      pTVar40 = &param_6->CullPlanes;
      TArray<UE::Math::TPlane<double>,TFixedAllocator<12>_>::
      operator=<TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>(pTVar40,&pFVar37->Planes);
      dVar3 = (param_3->PreShadowTranslation).field0_0x0._s_0.X;
      dVar20 = (param_3->PreShadowTranslation).field0_0x0._s_0.Y;
      piVar32 = &(param_6->CullPlanes).ArrayNum;
      dVar2 = (param_3->PreShadowTranslation).field0_0x0._s_0.Z;
      local_124 = *piVar32;
      uVar34 = (ulonglong)(int)local_124;
      pTVar41 = (pTVar40->AllocatorInstance).InlineData + uVar34;
      local_118 = piVar32;
      local_100 = dVar3;
      dStack_f8 = dVar20;
      local_f0 = dVar2;
      while( true ) {
        if (*piVar32 != (int)uVar34) {
          local_128 = 0;
          `TCheckedPointerIterator<UE::Math::TPlane<double>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_128);
          uVar34 = (ulonglong)local_124;
          piVar32 = local_118;
        }
        if (pTVar40 == (TArray<UE::Math::TPlane<double>,TFixedAllocator<12>_> *)pTVar41) break;
        local_f0 = *(double *)((pTVar40->AllocatorInstance).InlineData[0].Pad + 0x10);
        *(double *)((pTVar40->AllocatorInstance).InlineData[0].Pad + 0x18) =
             *(double *)((pTVar40->AllocatorInstance).InlineData[0].Pad + 0x18) -
             (dVar20 * *(double *)((pTVar40->AllocatorInstance).InlineData[0].Pad + 8) +
              dVar3 * *(double *)(pTVar40->AllocatorInstance).InlineData[0].Pad + dVar2 * local_f0);
        pTVar40 = (TArray<UE::Math::TPlane<double>,TFixedAllocator<12>_> *)
                  ((pTVar40->AllocatorInstance).InlineData + 1);
      }
    }
    else {
      bVar29 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<7082394121846915740>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererMeshes.cpp"
                          ,0x29c,"ShadowFrustum->Planes.Num() <= FNiagaraGPUSortInfo::MaxCullPlanes"
                         );
      if (bVar29) {
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
    }
  }
  dVar2 = __real_3ff0000000000000;
  if (((this->field_0x140 & 1) == 0) && ((local_110->DynamicData).bUseCullProxy == false)) {
    pTVar33 = FNiagaraSceneProxy::GetLWCRenderTile(local_110);
    dVar3 = (double)(pTVar33->field0_0x0)._s_0.X * __real_4140000000000000;
    dVar20 = (double)(pTVar33->field0_0x0)._s_0.Y * __real_4140000000000000;
    dVar21 = (double)(pTVar33->field0_0x0)._s_0.Z * __real_4140000000000000;
    dVar2 = (param_6->ViewOrigin).field0_0x0._s_0.X;
    (param_6->ViewOrigin).field0_0x0._s_0.Y = (param_6->ViewOrigin).field0_0x0._s_0.Y - dVar20;
    (param_6->ViewOrigin).field0_0x0._s_0.X = dVar2 - dVar3;
    (param_6->ViewOrigin).field0_0x0._s_0.Z = (param_6->ViewOrigin).field0_0x0._s_0.Z - dVar21;
    if (this->bEnableFrustumCulling != 0) {
      pTVar40 = &param_6->CullPlanes;
      piVar32 = &(param_6->CullPlanes).ArrayNum;
      local_124 = *piVar32;
      uVar34 = (ulonglong)(int)local_124;
      pTVar41 = (pTVar40->AllocatorInstance).InlineData + uVar34;
      while( true ) {
        if (*piVar32 != (int)uVar34) {
          local_127 = 0;
          `TCheckedPointerIterator<UE::Math::TPlane<double>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_127);
          uVar34 = (ulonglong)local_124;
        }
        if (pTVar40 == (TArray<UE::Math::TPlane<double>,TFixedAllocator<12>_> *)pTVar41) break;
        dVar2 = *(double *)((pTVar40->AllocatorInstance).InlineData[0].Pad + 0x18);
        dVar4 = *(double *)((pTVar40->AllocatorInstance).InlineData[0].Pad + 0x10);
        dVar5 = *(double *)((pTVar40->AllocatorInstance).InlineData[0].Pad + 8);
        dVar6 = *(double *)(pTVar40->AllocatorInstance).InlineData[0].Pad;
        uVar22 = *(undefined4 *)((pTVar40->AllocatorInstance).InlineData[0].Pad + 0x10);
        uVar23 = *(undefined4 *)((pTVar40->AllocatorInstance).InlineData[0].Pad + 0x14);
        uVar27 = *(undefined8 *)((pTVar40->AllocatorInstance).InlineData[0].Pad + 8);
        dVar7 = *(double *)((pTVar40->AllocatorInstance).InlineData[0].Pad + 8);
        dVar8 = *(double *)(pTVar40->AllocatorInstance).InlineData[0].Pad;
        dVar9 = *(double *)((pTVar40->AllocatorInstance).InlineData[0].Pad + 0x10);
        *(undefined8 *)(pTVar40->AllocatorInstance).InlineData[0].Pad =
             *(undefined8 *)(pTVar40->AllocatorInstance).InlineData[0].Pad;
        *(undefined8 *)((pTVar40->AllocatorInstance).InlineData[0].Pad + 8) = uVar27;
        *(undefined4 *)((pTVar40->AllocatorInstance).InlineData[0].Pad + 0x10) = uVar22;
        *(undefined4 *)((pTVar40->AllocatorInstance).InlineData[0].Pad + 0x14) = uVar23;
        *(double *)((pTVar40->AllocatorInstance).InlineData[0].Pad + 0x18) =
             (dVar2 * dVar5 - dVar20) * dVar7 + (dVar2 * dVar6 - dVar3) * dVar8 +
             (dVar4 * dVar2 - dVar21) * dVar9;
        pTVar40 = (TArray<UE::Math::TPlane<double>,TFixedAllocator<12>_> *)
                  ((pTVar40->AllocatorInstance).InlineData + 1);
      }
    }
  }
  else {
    dVar21 = (param_6->ViewOrigin).field0_0x0._s_0.X;
    dVar4 = (param_6->ViewOrigin).field0_0x0._s_0.Y;
    dVar5 = (local_110->LocalToWorldInverse).M[1][1];
    dVar3 = (param_6->ViewOrigin).field0_0x0._s_0.Z;
    dVar6 = (local_110->LocalToWorldInverse).M[1][2];
    dVar7 = (local_110->LocalToWorldInverse).M[0][1];
    dVar8 = (local_110->LocalToWorldInverse).M[2][1];
    dVar20 = __real_3ff0000000000000 * (local_110->LocalToWorldInverse).M[3][1];
    dVar9 = (local_110->LocalToWorldInverse).M[0][2];
    dVar25 = (local_110->LocalToWorldInverse).M[2][2];
    dVar26 = (local_110->LocalToWorldInverse).M[3][2];
    (param_6->ViewOrigin).field0_0x0._s_0.X =
         dVar4 * (local_110->LocalToWorldInverse).M[1][0] +
         (local_110->LocalToWorldInverse).M[0][0] * dVar21 +
         (local_110->LocalToWorldInverse).M[2][0] * dVar3 +
         __real_3ff0000000000000 * (local_110->LocalToWorldInverse).M[3][0];
    (param_6->ViewOrigin).field0_0x0._s_0.Y =
         dVar4 * dVar5 + dVar7 * dVar21 + dVar8 * dVar3 + dVar20;
    (param_6->ViewOrigin).field0_0x0._s_0.Z =
         dVar6 * dVar4 + dVar9 * dVar21 + dVar25 * dVar3 + dVar26 * dVar2;
    dVar9 = (param_6->ViewDirection).field0_0x0._s_0.X;
    dVar25 = (param_6->ViewDirection).field0_0x0._s_0.Y;
    dVar2 = (param_6->ViewDirection).field0_0x0._s_0.Z;
    dVar3 = (double)local_110->_padding_;
    dVar20 = (double)local_110->_padding_;
    dVar21 = (double)local_110->_padding_;
    dVar4 = (double)local_110->_padding_;
    dVar5 = (double)local_110->_padding_;
    dVar6 = (double)local_110->_padding_;
    dVar7 = (double)local_110->_padding_;
    dVar8 = (double)local_110->_padding_;
    (param_6->ViewDirection).field0_0x0._s_0.X =
         dVar25 * (double)local_110->_padding_ + dVar9 * (double)local_110->_padding_ +
         dVar2 * (double)local_110->_padding_ + (double)local_110->_padding_ * 0.0;
    (param_6->ViewDirection).field0_0x0._s_0.Y =
         dVar25 * dVar3 + dVar9 * dVar20 + dVar2 * dVar21 + dVar4 * 0.0;
    (param_6->ViewDirection).field0_0x0._s_0.Z =
         dVar25 * dVar5 + dVar9 * dVar6 + dVar2 * dVar7 + dVar8 * 0.0;
    if (this->bEnableFrustumCulling != 0) {
      this_01 = (TPlane<double> *)&param_6->CullPlanes;
      piVar32 = &(param_6->CullPlanes).ArrayNum;
      iVar12 = *piVar32;
      pTVar1 = &local_110->LocalToWorldInverse;
      pFVar28 = &((TArray<UE::Math::TPlane<double>,TFixedAllocator<12>_> *)this_01)->
                 AllocatorInstance;
      while( true ) {
        if (*piVar32 != iVar12) {
          local_126[0] = 0;
          `TCheckedPointerIterator<UE::Math::TPlane<double>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_126);
        }
        param_1 = local_108;
        iVar38 = local_11c;
        if (this_01 == (TPlane<double> *)(pFVar28->InlineData + iVar12)) break;
        pTVar35 = UE::Math::TPlane<double>::TransformBy(this_01,local_e8,pTVar1);
        lVar39 = pTVar35->_padding_;
        this_01->_padding_ = pTVar35->_padding_;
        this_01->_padding_ = lVar39;
        dVar2 = pTVar35->W;
        this_01->_padding_ = pTVar35->_padding_;
        this_01->W = dVar2;
        this_01 = this_01 + 1;
      }
    }
  }
  if (param_1->bNeedsCull != false) {
    if (param_1->bSortCullOnGpu == false) {
      if ((iVar38 < 1) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar29)) {
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      uVar30 = 0xffffffff;
      if (*(ushort *)pFVar14 != 0xffff) {
        uVar30 = (uint)*(ushort *)pFVar14;
      }
      param_6->CullPositionAttributeOffset =
           -(uint)(pFVar14[7] != (FScriptContainerElement)0x0) & 0x80000000 | uVar30;
      if ((iVar38 < 5) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar29)) {
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      uVar30 = 0xffffffff;
      if (*(ushort *)(pFVar14 + 0x20) != 0xffff) {
        uVar30 = (uint)*(ushort *)(pFVar14 + 0x20);
      }
      param_6->CullOrientationAttributeOffset =
           -(uint)(pFVar14[0x27] != (FScriptContainerElement)0x0) & 0x80000000 | uVar30;
      if ((iVar38 < 4) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar29)) {
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      uVar10 = *(ushort *)(pFVar14 + 0x18);
    }
    else {
      if ((iVar38 < 1) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar29)) {
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      uVar30 = 0xffffffff;
      if (*(ushort *)(pFVar14 + 2) != 0xffff) {
        uVar30 = (uint)*(ushort *)(pFVar14 + 2);
      }
      param_6->CullPositionAttributeOffset =
           -(uint)(pFVar14[7] != (FScriptContainerElement)0x0) & 0x80000000 | uVar30;
      if ((iVar38 < 5) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar29)) {
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      uVar30 = 0xffffffff;
      if (*(ushort *)(pFVar14 + 0x22) != 0xffff) {
        uVar30 = (uint)*(ushort *)(pFVar14 + 0x22);
      }
      param_6->CullOrientationAttributeOffset =
           -(uint)(pFVar14[0x27] != (FScriptContainerElement)0x0) & 0x80000000 | uVar30;
      if ((iVar38 < 4) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar29)) {
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      uVar10 = *(ushort *)(pFVar14 + 0x1a);
    }
    uVar30 = 0xffffffff;
    if (uVar10 != 0xffff) {
      uVar30 = (uint)uVar10;
    }
    param_6->CullScaleAttributeOffset =
         -(uint)(pFVar14[0x1f] != (FScriptContainerElement)0x0) & 0x80000000 | uVar30;
  }
  return;
}

// IsMaterialValid @ 14935f300

bool __thiscall
FNiagaraRendererMeshes::IsMaterialValid(FNiagaraRendererMeshes *this,UMaterialInterface *param_1)

{
  undefined1 uVar1;
  
  if (param_1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014935f313. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1->_padding_ + 0x378))(param_1,0xc);
    return (bool)uVar1;
  }
  return false;
}

// PerformSortAndCull @ 149361060

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

uint __thiscall
FNiagaraRendererMeshes::PerformSortAndCull
          (FNiagaraRendererMeshes *this,FRHICommandListBase *param_1,
          FParticleMeshRenderData *param_2,FGlobalDynamicReadBuffer *param_3,
          FNiagaraGPUSortInfo *param_4,FNiagaraGpuComputeDispatchInterface *param_5,
          FSceneView *param_6,FMeshData *param_7)

{
  atomic<int> *paVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  atomic<int> aVar10;
  TVector4<float> *pTVar11;
  FNiagaraGPUInstanceCountManager *pFVar12;
  FAllocation *pFVar13;
  TVector4<float> local_58;
  FAllocation local_48;
  FAllocation local_30;
  
  if (this->SourceMode == Emitter) {
    param_2->ParticleSortedIndicesSRV =
         (FRHIShaderResourceView *)GFNiagaraNullSortedIndicesVertexBuffer._40_8_;
    param_2->ParticleSortedIndicesOffset = 0xffffffff;
    return 1;
  }
  uVar9 = param_2->SourceParticleData->NumInstances;
  if ((param_2->bNeedsCull == false) && (param_2->bNeedsSort == false)) {
    param_2->ParticleSortedIndicesSRV =
         (FRHIShaderResourceView *)GFNiagaraNullSortedIndicesVertexBuffer._40_8_;
    param_2->ParticleSortedIndicesOffset = 0xffffffff;
  }
  else {
    dVar6 = (param_2->CullingSphere).Center.field0_0x0._s_0.Y;
    (param_4->LocalBSphere).Center.field0_0x0._s_0.X =
         (param_2->CullingSphere).Center.field0_0x0._s_0.X;
    (param_4->LocalBSphere).Center.field0_0x0._s_0.Y = dVar6;
    dVar6 = (param_2->CullingSphere).W;
    (param_4->LocalBSphere).Center.field0_0x0._s_0.Z =
         (param_2->CullingSphere).Center.field0_0x0._s_0.Z;
    (param_4->LocalBSphere).W = dVar6;
    dVar6 = (param_2->WorldSpacePivotOffset).field0_0x0._s_0.Y;
    (param_4->CullingWorldSpaceOffset).field0_0x0._s_0.X =
         (param_2->WorldSpacePivotOffset).field0_0x0._s_0.X;
    (param_4->CullingWorldSpaceOffset).field0_0x0._s_0.Y = dVar6;
    (param_4->CullingWorldSpaceOffset).field0_0x0._s_0.Z =
         (param_2->WorldSpacePivotOffset).field0_0x0._s_0.Z;
    param_4->MeshIndex = param_7->SourceMeshIndex;
    pTVar11 = GetShaderLODScreenSize(&local_58,param_6,param_7);
    fVar3 = (pTVar11->field0_0x0)._s_0.Y;
    fVar4 = (pTVar11->field0_0x0)._s_0.Z;
    fVar5 = (pTVar11->field0_0x0)._s_0.W;
    (param_4->LODScreenSize).field0_0x0._s_0.X = (pTVar11->field0_0x0)._s_0.X;
    (param_4->LODScreenSize).field0_0x0._s_0.Y = fVar3;
    (param_4->LODScreenSize).field0_0x0._s_0.Z = fVar4;
    (param_4->LODScreenSize).field0_0x0._s_0.W = fVar5;
    if (param_2->bSortCullOnGpu == false) {
      pFVar13 = FGlobalDynamicReadBuffer::AllocateUInt32(param_3,&local_30,uVar9);
      local_48.Buffer = pFVar13->Buffer;
      local_48.ReadBuffer = pFVar13->ReadBuffer;
      local_48.SRV = pFVar13->SRV;
      uVar9 = FNiagaraRenderer::SortAndCullIndices(param_4,param_2->SourceParticleData,&local_48);
      param_2->ParticleSortedIndicesOffset = 0;
      param_2->ParticleSortedIndicesSRV = local_48.SRV;
    }
    else {
      if (param_2->bNeedsCull == false) {
        aVar10 = (atomic<int>)0xffffffff;
      }
      else {
        pFVar12 = FNiagaraGpuComputeDispatchInterface::GetGPUInstanceCounterManager(param_5);
        if ((pFVar12->bAcquiredCulledCounts != false) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!bAcquiredCulledCounts",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                               ,0x59,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          uVar9 = (*pcVar2)();
          return uVar9;
        }
        LOCK();
        paVar1 = &pFVar12->RequiredCulledCounts;
        aVar10 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
      }
      param_4->CulledGPUParticleCountOffset = (uint)aVar10;
      cVar8 = (**(code **)(param_5->_padding_ + 0xe0))(param_5,param_1,param_4);
      if (cVar8 != '\0') {
        param_2->ParticleSortedIndicesSRV = (param_4->AllocationInfo).BufferSRV.Reference;
        param_2->ParticleSortedIndicesOffset = (param_4->AllocationInfo).BufferOffset;
      }
    }
  }
  return uVar9;
}

// PrepareParticleMeshRenderData @ 149362bf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraRendererMeshes::PrepareParticleMeshRenderData
          (FNiagaraRendererMeshes *this,FRHICommandListBase *param_1,
          FParticleMeshRenderData *param_2,FSceneViewFamily *param_3,FMeshElementCollector *param_4,
          FNiagaraDynamicDataBase *param_5,FNiagaraSceneProxy *param_6,bool param_7,Type param_8)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FMaterialRenderProxy_*> FVar2;
  FGenericStaticFeatureLevel FVar3;
  int iVar4;
  Type TVar5;
  INiagaraComputeDataBufferInterface *pIVar6;
  longlong *plVar7;
  FNiagaraDynamicDataMesh *pFVar8;
  FMaterialRenderProxy *this_00;
  FNiagaraRendererLayout *this_01;
  code *pcVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  FStaticShaderPlatform FVar13;
  uint uVar14;
  FNiagaraDataBuffer *pFVar15;
  FMaterial *pFVar16;
  FNiagaraGPUInstanceCountManager *pFVar17;
  byte bVar18;
  FScriptContainerElement *pFVar19;
  ForElementType<FMaterialRenderProxy_*> FVar20;
  bool *pbVar21;
  bool bVar22;
  TArrayView<FNiagaraRendererVariableInfo_const_,int> local_38;
  
  param_2->Collector = param_4;
  FVar3.FeatureLevel = *(Type *)&this->field_0x148;
  FVar13.Platform = FSceneInterface::GetShaderPlatform((FSceneInterface *)param_6->_padding_);
  bVar10 = FNiagaraMeshVertexFactory::IsGPUSceneEnabled(FVar13,FVar3);
  param_2->bUseGPUScene = bVar10;
  param_2->DynamicDataMesh = (FNiagaraDynamicDataMesh *)param_5;
  if (param_5 == (FNiagaraDynamicDataBase *)0x0) {
    return;
  }
  if (param_6->ComputeDispatchInterface == (FNiagaraGpuComputeDispatchInterface *)0x0) {
    return;
  }
  pIVar6 = param_5->ComputeDataBufferInterface;
  if (pIVar6 == (INiagaraComputeDataBufferInterface *)0x0) {
    pFVar15 = (param_5->CPUParticleData).Reference;
  }
  else {
    pFVar15 = (FNiagaraDataBuffer *)
              (**(code **)((longlong)*pIVar6 + 0x10))
                        (pIVar6,param_1,*(uint *)&this->field_0x218 >> 3 & 0xffffff01);
  }
  if (pFVar15 == (FNiagaraDataBuffer *)0x0) {
    return;
  }
  if ((this->SourceMode == Particles) && (pFVar15->NumInstances == 0)) {
    return;
  }
  if ((this->Meshes).ArrayNum == 0) {
    return;
  }
  bVar10 = AllowDebugViewmodes();
  if ((bVar10) &&
     ((((param_3->EngineShowFlags).Wireframe != 0 ||
       ((param_3->EngineShowFlags).ShaderComplexity != 0)) ||
      ((param_3->EngineShowFlags).ShaderComplexityWithQuadOverdraw != 0)))) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  if (((((this->bGpuLowLatencyTranslucency == 0) || ((int)param_8 < (int)pFVar15->GPUDataReadyStage)
        ) || ((bVar10 ||
              (((param_6->_padding_ & 0x100000000000000) != 0 ||
               ((param_2->DynamicDataMesh->Materials).ArrayNum < 1)))))) ||
      (plVar7 = (longlong *)param_2->DynamicDataMesh->_padding_, plVar7 == (longlong *)0x0)) ||
     ((cVar11 = (**(code **)(*plVar7 + 8))(), cVar11 == '\0' || (param_3->ViewMode != VMI_Lit)))) {
LAB_149362d79:
    bVar10 = false;
  }
  else {
    pFVar19 = (param_3->Views).AllocatorInstance.Data;
    pFVar1 = pFVar19 + (longlong)(param_3->Views).ArrayNum * 8;
    for (; pFVar19 != pFVar1; pFVar19 = pFVar19 + 8) {
      if (0.0 < *(float *)(*(longlong *)pFVar19 + 0x1200)) goto LAB_149362d79;
    }
    bVar10 = true;
  }
  pFVar8 = param_2->DynamicDataMesh;
  param_2->bIsGpuLowLatencyTranslucency = bVar10;
  param_2->bHasTranslucentMaterials = false;
  param_2->bAllTranslucentMaterials = 0 < (pFVar8->Materials).ArrayNum;
  FVar20 = (pFVar8->Materials).AllocatorInstance.SecondaryData;
  iVar4 = (pFVar8->Materials).ArrayNum;
  if (FVar20 == (ForElementType<FMaterialRenderProxy_*>)0x0) {
    FVar20 = (ForElementType<FMaterialRenderProxy_*>)&pFVar8->Materials;
  }
  FVar2 = (ForElementType<FMaterialRenderProxy_*>)((longlong)FVar20 + (longlong)iVar4 * 8);
  while( true ) {
    if ((pFVar8->Materials).ArrayNum != iVar4) {
      param_4._0_1_ = 0;
      `TCheckedPointerIterator<FMaterialRenderProxy_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&param_4);
    }
    if (FVar20 == FVar2) break;
    this_00 = *(FMaterialRenderProxy **)FVar20;
    if ((this_00 == (FMaterialRenderProxy *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("MaterialProxy",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererMeshes.cpp"
                            ,0x163,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar16 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback
                        (this_00,*(Type *)&this->field_0x148);
    bVar10 = IsTranslucentBlendMode(pFVar16);
    param_2->bHasTranslucentMaterials = (bool)(param_2->bHasTranslucentMaterials | bVar10);
    param_2->bAllTranslucentMaterials = (bool)(param_2->bAllTranslucentMaterials & bVar10);
    if ((param_2->bIsGpuLowLatencyTranslucency == false) ||
       (bVar10 = UE::FXRenderingUtils::CanMaterialRenderBeforeFXPostOpaque
                           (param_3,(FPrimitiveSceneProxy *)param_6,pFVar16), bVar10)) {
      param_2->bIsGpuLowLatencyTranslucency = false;
      FVar20 = (ForElementType<FMaterialRenderProxy_*>)((longlong)FVar20 + 8);
    }
    else {
      FVar20 = (ForElementType<FMaterialRenderProxy_*>)((longlong)FVar20 + 8);
      param_2->bIsGpuLowLatencyTranslucency = true;
    }
  }
  plVar7 = (longlong *)param_2->DynamicDataMesh->_padding_;
  if (plVar7 == (longlong *)0x0) {
    pFVar15 = (FNiagaraDataBuffer *)param_2->DynamicDataMesh->_padding_;
  }
  else {
    pFVar15 = (FNiagaraDataBuffer *)
              (**(code **)(*plVar7 + 0x10))(plVar7,param_1,param_2->bIsGpuLowLatencyTranslucency);
  }
  param_2->SourceParticleData = pFVar15;
  if ((pFVar15 == (FNiagaraDataBuffer *)0x0) ||
     (((this->SourceMode == Particles && (pFVar15->NumInstances == 0)) ||
      ((this->Meshes).ArrayNum == 0)))) {
LAB_14936316e:
    param_2->SourceParticleData = (FNiagaraDataBuffer *)0x0;
    return;
  }
  iVar4 = this->EmitterRendererVisTagOffset;
  if ((((iVar4 != -1) && (-1 < iVar4)) &&
      (iVar4 < (param_2->DynamicDataMesh->ParameterDataBound).ArrayNum)) &&
     (this->RendererVisibility !=
      *(int *)((param_2->DynamicDataMesh->ParameterDataBound).AllocatorInstance.Data + iVar4)))
  goto LAB_14936316e;
  if (this->SourceMode != Particles) {
    return;
  }
  if ((this->SortMode == None) ||
     ((param_2->bHasTranslucentMaterials == false && (this->bSortOnlyWhenTranslucent != 0)))) {
    bVar10 = false;
    param_2->bNeedsSort = false;
LAB_149362f22:
    bVar18 = 0;
  }
  else {
    bVar10 = true;
    bVar18 = 1;
    param_2->bNeedsSort = true;
    if ((this->SortMode != CustomAscending) && (this->SortMode != CustomDecending))
    goto LAB_149362f22;
  }
  this_01 = *(FNiagaraRendererLayout **)
             (this->VFBoundOffsetsInParamStore + ((ulonglong)bVar18 ^ 1) * 2 + 0x14);
  param_2->RendererLayout = this_01;
  param_2->SortVariable = -(uint)(bVar18 != 0) & CustomSorting;
  bVar22 = false;
  if (bVar10) {
    FNiagaraRendererLayout::GetVFVariables_RenderThread(this_01,&local_38);
    TVar5 = param_2->SortVariable;
    uVar14 = 0;
    if ((int)TVar5 < local_38.ArrayNum) {
      uVar14 = ~TVar5 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar14 = 0xffffffff;
    if (local_38.DataPtr[(int)TVar5].GPUBufferOffset != 0xffff) {
      uVar14 = (uint)local_38.DataPtr[(int)TVar5].GPUBufferOffset;
    }
    bVar22 = (-(uint)(local_38.DataPtr[(int)TVar5].bHalfType != false) & 0x80000000 | uVar14) !=
             0xffffffff;
    param_2->bNeedsSort = bVar22;
  }
  if ((this->bEnableCulling == 0 && this->bEnableLODCulling == 0) ||
     (param_2->bUseGPUScene != false)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  param_2->bNeedsCull = bVar10;
  param_2->bAllowPerParticleMeshLODs = this->bEnableLODCulling;
  if (((bVar22) && (bVar10 = FNiagaraUtilities::AllowGPUSorting(), bVar10)) ||
     ((param_2->bNeedsCull != false && (bVar10 = FNiagaraUtilities::AllowGPUCulling(), bVar10)))) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  pbVar21 = &param_2->bNeedsCull;
  param_2->bSortCullOnGpu = bVar10;
  if (this->field_0x144 == '\x01') {
    if ((*pbVar21 != false) && (bVar10 == false)) {
      param_5 = (FNiagaraDynamicDataBase *)&param_6;
      bVar10 = `FNiagaraRendererMeshes::PrepareParticleMeshRenderData'::__l38::<lambda_1>::
               operator()(&param_5);
      if (!bVar10) {
        *pbVar21 = false;
        param_2->bAllowPerParticleMeshLODs = false;
      }
    }
    bVar10 = (bool)(param_2->bNeedsSort & param_2->bSortCullOnGpu);
    param_2->bNeedsSort = bVar10;
    if (((bVar10 != false) || (*pbVar21 != false)) &&
       (pFVar17 = FNiagaraGpuComputeDispatchInterface::GetGPUInstanceCounterManager
                            (param_6->ComputeDispatchInterface),
       pFVar17->bAcquiredCulledCounts != false)) {
      param_2->bNeedsSort = false;
      param_2->bNeedsCull = false;
      param_2->bAllowPerParticleMeshLODs = false;
    }
    goto LAB_149363158;
  }
  if (bVar10 == false) {
LAB_149363149:
    if (param_2->bUseGPUScene != false) goto LAB_149363153;
    bVar12 = 0;
  }
  else {
    pFVar17 = FNiagaraGpuComputeDispatchInterface::GetGPUInstanceCounterManager
                        (param_6->ComputeDispatchInterface);
    bVar22 = false;
    if (pFVar17->bAcquiredCulledCounts == false) {
      bVar22 = bVar10;
    }
    param_2->bSortCullOnGpu = bVar22;
    if (bVar22 == false) goto LAB_149363149;
    if (param_2->bAllowPerParticleMeshLODs == false) {
      uVar14 = param_2->SourceParticleData->NumInstances;
      if ((GNiagaraGPUSortingCPUToGPUThreshold < 0) ||
         ((int)uVar14 < GNiagaraGPUSortingCPUToGPUThreshold)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if ((GNiagaraGPUCullingCPUToGPUThreshold < 0) ||
         ((int)uVar14 < GNiagaraGPUCullingCPUToGPUThreshold)) {
        bVar22 = false;
      }
      else {
        bVar22 = true;
      }
      if ((bVar10) || (bVar22)) {
        bVar22 = true;
      }
      else {
        bVar22 = false;
      }
      param_2->bSortCullOnGpu = bVar22;
    }
    if (bVar22 == false) goto LAB_149363149;
LAB_149363153:
    bVar12 = 1;
  }
  param_2->bAllowPerParticleMeshLODs = (bool)(param_2->bAllowPerParticleMeshLODs & bVar12);
LAB_149363158:
  param_2->RendererLayout =
       *(FNiagaraRendererLayout **)
        (this->VFBoundOffsetsInParamStore + ((ulonglong)bVar18 ^ 1) * 2 + 0x14);
  return;
}

// PrepareParticleRenderBuffers @ 1493631a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraRendererMeshes::PrepareParticleRenderBuffers
          (FNiagaraRendererMeshes *this,FRHICommandListBase *param_1,
          FParticleMeshRenderData *param_2,FGlobalDynamicReadBuffer *param_3)

{
  int iVar1;
  FNiagaraDataBuffer *pFVar2;
  FRHIShaderResourceView *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uchar *puVar8;
  uchar *puVar9;
  bool bVar10;
  uint uVar11;
  ForElementType<unsigned_int> FVar12;
  FParticleRenderData *pFVar13;
  FRHIShaderResourceView *pFVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStackY_128 [32];
  ForElementType<unsigned_int> local_d8;
  ForElementType<unsigned_int> local_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  TArrayView<unsigned_int_const_,int> local_b8;
  FParticleRenderData local_a8;
  ForElementType<unsigned_int> local_48;
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (this->SourceMode == Particles) {
    if (this->field_0x144 == '\0') {
      local_48.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_38 = 0;
      local_34 = 2;
      if ((param_2->bNeedsCull != false) || (param_2->bUseGPUScene != false)) {
        if ((param_2->bSortCullOnGpu == false) && (param_2->bUseGPUScene == false)) {
          param_2->RendererVisTagOffset = this->ParticleRendererVisTagOffset;
          param_2->MeshIndexOffset = this->ParticleMeshIndexOffset;
        }
        else {
          iVar1 = this->ParticleRendererVisTagOffset;
          if (iVar1 != -1) {
            uVar11 = 0;
            local_d8.InlineData._0_4_ = iVar1;
            if ((&local_48 <= &local_d8) && (&local_d8 < &local_48.SecondaryData)) {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar10) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar11 = local_38;
              if (local_38 == local_34) {
                uVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                                   (0x404,&local_48,(int *)&local_34);
              }
            }
            local_38 = uVar11 + 1;
            FVar12 = (ForElementType<unsigned_int>)&local_48;
            if (local_48.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar12 = local_48.SecondaryData;
            }
            *(undefined4 *)((longlong)FVar12 + (longlong)(int)uVar11 * 4) =
                 local_d8.InlineData._0_4_;
            param_2->RendererVisTagOffset = uVar11;
          }
          iVar1 = this->ParticleMeshIndexOffset;
          if (iVar1 != -1) {
            FVar12 = (ForElementType<unsigned_int>)&local_48;
            if (local_48.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar12 = local_48.SecondaryData;
            }
            local_d8.InlineData._4_4_ = iVar1;
            if ((ulonglong)FVar12 <= (longlong)local_d8.InlineData + 4U) {
              FVar12 = (ForElementType<unsigned_int>)&local_48;
              if (local_48.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                FVar12 = local_48.SecondaryData;
              }
              if ((local_d8.InlineData + 4 <
                   (undefined1 *)((longlong)FVar12 + (longlong)(int)local_34 * 4)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            uVar11 = local_38;
            if (local_38 == local_34) {
              uVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                                 (0x404,&local_48,(int *)&local_34);
            }
            local_38 = uVar11 + 1;
            FVar12 = (ForElementType<unsigned_int>)&local_48;
            if (local_48.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar12 = local_48.SecondaryData;
            }
            *(undefined4 *)((longlong)FVar12 + (longlong)(int)uVar11 * 4) =
                 local_d8.InlineData._4_4_;
            param_2->MeshIndexOffset = uVar11;
          }
        }
      }
      uVar11 = local_38;
      pFVar2 = param_2->SourceParticleData;
      local_c8 = (ForElementType<unsigned_int>)&local_48;
      if (local_48.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        local_c8 = local_48.SecondaryData;
      }
      if (((int)local_38 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_b8._12_4_ = uStack_bc;
      local_b8.ArrayNum = uVar11;
      local_b8.DataPtr = (uint *)local_c8;
      uStack_c0 = uVar11;
      pFVar13 = FNiagaraRenderer::TransferDataToGPU
                          (&local_a8,param_1,param_3,param_2->RendererLayout,&local_b8,pFVar2);
      uVar5 = *(undefined4 *)&(pFVar13->IntData).SRV;
      uVar6 = *(undefined4 *)((longlong)&(pFVar13->IntData).SRV + 4);
      uVar11 = pFVar13->FloatStride;
      uVar7 = pFVar13->HalfStride;
      puVar8 = (pFVar13->HalfData).Buffer;
      pFVar3 = (pFVar13->HalfData).SRV;
      local_a8.IntStride = pFVar13->IntStride;
      local_a8._84_4_ = *(undefined4 *)&pFVar13->field_0x54;
      puVar9 = (pFVar13->IntData).Buffer;
      pFVar14 = (FRHIShaderResourceView *)DummyFloatBuffer._64_8_;
      if ((pFVar13->FloatData).Buffer != (uchar *)0x0) {
        pFVar14 = (pFVar13->FloatData).SRV;
      }
      param_2->ParticleFloatSRV = pFVar14;
      pFVar14 = (FRHIShaderResourceView *)DummyHalfBuffer._64_8_;
      if (puVar8 != (uchar *)0x0) {
        pFVar14 = pFVar3;
      }
      param_2->ParticleHalfSRV = pFVar14;
      uVar15 = DummyIntBuffer._64_4_;
      uVar16 = DummyIntBuffer._68_4_;
      if (puVar9 != (uchar *)0x0) {
        uVar15 = uVar5;
        uVar16 = uVar6;
      }
      *(undefined4 *)&param_2->ParticleIntSRV = uVar15;
      *(undefined4 *)((longlong)&param_2->ParticleIntSRV + 4) = uVar16;
      param_2->ParticleFloatDataStride = uVar11 >> 2;
      param_2->ParticleHalfDataStride = uVar7 >> 1;
      param_2->ParticleIntDataStride = local_a8.IntStride >> 2;
      if (local_48.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_48.SecondaryData);
      }
    }
    else {
      pFVar2 = param_2->SourceParticleData;
      pFVar3 = (pFVar2->GPUBufferFloat).SRV.Reference;
      pFVar14 = (FRHIShaderResourceView *)DummyFloatBuffer._64_8_;
      if (pFVar3 != (FRHIShaderResourceView *)0x0) {
        pFVar14 = pFVar3;
      }
      param_2->ParticleFloatSRV = pFVar14;
      pFVar3 = (pFVar2->GPUBufferHalf).SRV.Reference;
      pFVar14 = (FRHIShaderResourceView *)DummyHalfBuffer._64_8_;
      if (pFVar3 != (FRHIShaderResourceView *)0x0) {
        pFVar14 = pFVar3;
      }
      param_2->ParticleHalfSRV = pFVar14;
      pFVar3 = (pFVar2->GPUBufferInt).SRV.Reference;
      pFVar14 = (FRHIShaderResourceView *)CONCAT44(DummyIntBuffer._68_4_,DummyIntBuffer._64_4_);
      if (pFVar3 != (FRHIShaderResourceView *)0x0) {
        pFVar14 = pFVar3;
      }
      param_2->ParticleIntSRV = pFVar14;
      param_2->ParticleFloatDataStride = pFVar2->FloatStride >> 2;
      param_2->ParticleHalfDataStride = pFVar2->HalfStride >> 1;
      param_2->ParticleIntDataStride = pFVar2->Int32Stride >> 2;
      param_2->RendererVisTagOffset = this->ParticleRendererVisTagOffset;
      param_2->MeshIndexOffset = this->ParticleMeshIndexOffset;
    }
  }
  else {
    param_2->ParticleFloatSRV = (FRHIShaderResourceView *)DummyFloatBuffer._64_8_;
    param_2->ParticleHalfSRV = (FRHIShaderResourceView *)DummyHalfBuffer._64_8_;
    param_2->ParticleIntSRV =
         (FRHIShaderResourceView *)CONCAT44(DummyIntBuffer._68_4_,DummyIntBuffer._64_4_);
    param_2->ParticleFloatDataStride = 0;
    param_2->ParticleHalfDataStride = 0;
    param_2->ParticleIntDataStride = 0;
  }
  return;
}

// PreparePerMeshData @ 1493635f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FNiagaraRendererMeshes::PreparePerMeshData
          (FNiagaraRendererMeshes *this,FParticleMeshRenderData *param_1,
          FNiagaraMeshVertexFactory *param_2,FNiagaraSceneProxy *param_3,FMeshData *param_4)

{
  byte bVar1;
  EShaderPlatform EVar2;
  float fVar3;
  float fVar4;
  INiagaraRenderableMesh *pIVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  bool bVar14;
  double *pdVar15;
  FRHIShaderResourceView *pFVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_138;
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  double local_108;
  double dStack_100;
  double local_f8;
  undefined1 local_e8 [56];
  ulonglong local_b0;
  
  local_b0 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_138 = *(undefined8 *)&(this->MeshBoundsScale).field0_0x0;
  fVar3 = (this->MeshBoundsScale).field0_0x0._s_0.Z;
  local_148 = *(undefined8 *)&(param_4->Scale).field0_0x0;
  fVar4 = (param_4->Scale).field0_0x0._s_0.Z;
  if ((param_4->RenderableMesh).Object == (INiagaraRenderableMesh *)0x0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pIVar5 = (param_4->RenderableMesh).Object;
  pdVar15 = (double *)(**(code **)(*(longlong *)pIVar5 + 0x10))(pIVar5,local_e8);
  dVar10 = __real_3fe0000000000000;
  local_128 = *pdVar15;
  dStack_120 = pdVar15[1];
  local_118 = *(undefined1 (*) [16])(pdVar15 + 2);
  local_108 = pdVar15[4];
  dStack_100 = pdVar15[5];
  local_f8 = pdVar15[6];
  dVar22 = (double)fVar4;
  dVar8 = (dStack_120 + local_108) * __real_3fe0000000000000 * (double)local_148._4_4_;
  dVar9 = (local_128 + local_118._8_8_) * __real_3fe0000000000000 * (double)(float)local_148;
  dVar20 = (local_118._8_8_ - local_128) * __real_3fe0000000000000 *
           (double)(float)local_138 * (double)(float)local_148;
  dVar7 = (local_118._0_8_ + dStack_100) * __real_3fe0000000000000 * dVar22;
  dVar23 = dVar20 + dVar9;
  dVar9 = dVar9 - dVar20;
  dVar21 = (double)local_138._4_4_ * (double)local_148._4_4_ *
           (local_108 - dStack_120) * __real_3fe0000000000000;
  dVar20 = (double)fVar3 * dVar22 * (dStack_100 - local_118._0_8_) * __real_3fe0000000000000;
  dVar22 = dVar21 + dVar8;
  dVar8 = dVar8 - dVar21;
  dVar21 = dVar20 + dVar7;
  dVar7 = dVar7 - dVar20;
  dVar24 = dVar23 - dVar9;
  (param_1->CullingSphere).Center.field0_0x0._s_0.X = (dVar9 + dVar23) * __real_3fe0000000000000;
  dVar20 = dVar22 - dVar8;
  (param_1->CullingSphere).Center.field0_0x0._s_0.Y = (dVar8 + dVar22) * dVar10;
  auVar17._8_4_ = local_118._8_4_;
  auVar17._0_8_ = dVar7;
  auVar17._12_4_ = local_118._12_4_;
  auVar18._8_8_ = auVar17._8_8_;
  dVar22 = dVar21 - dVar7;
  auVar18._0_8_ = (dVar7 + dVar21) * dVar10;
  (param_1->CullingSphere).Center.field0_0x0._s_0.Z = auVar18._0_8_;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = (dVar20 * dVar20 + dVar24 * dVar24 + dVar22 * dVar22) * __real_3fd0000000000000;
  auVar19 = sqrtpd(auVar18,auVar19);
  (param_1->CullingSphere).W = auVar19._0_8_;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (param_4->PivotOffsetSpace == Mesh) {
    (param_1->WorldSpacePivotOffset).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (param_1->WorldSpacePivotOffset).field0_0x0._s_0.Y = (double)uVar13;
    (param_1->WorldSpacePivotOffset).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    fVar3 = (param_4->PivotOffset).field0_0x0._s_0.Z;
    fVar4 = (param_4->PivotOffset).field0_0x0._s_0.X;
    dVar22 = (param_1->CullingSphere).Center.field0_0x0._s_0.Z;
    (param_1->CullingSphere).Center.field0_0x0._s_0.Y =
         (double)(param_4->PivotOffset).field0_0x0._s_0.Y +
         (param_1->CullingSphere).Center.field0_0x0._s_0.Y;
    dVar20 = (param_1->CullingSphere).Center.field0_0x0._s_0.X;
    (param_1->CullingSphere).Center.field0_0x0._s_0.Z = (double)fVar3 + dVar22;
    (param_1->CullingSphere).Center.field0_0x0._s_0.X = (double)fVar4 + dVar20;
  }
  else {
    fVar3 = (param_4->PivotOffset).field0_0x0._s_0.Z;
    dVar22 = (double)(param_4->PivotOffset).field0_0x0._s_0.Y;
    (param_1->WorldSpacePivotOffset).field0_0x0._s_0.X =
         (double)(param_4->PivotOffset).field0_0x0._s_0.X;
    (param_1->WorldSpacePivotOffset).field0_0x0._s_0.Y = dVar22;
    dVar20 = (double)fVar3;
    (param_1->WorldSpacePivotOffset).field0_0x0._s_0.Z = dVar20;
    if ((param_4->PivotOffsetSpace == Local) ||
       (((this->field_0x140 & 1) != 0 && (param_4->PivotOffsetSpace == Simulation)))) {
      dVar7 = (param_1->WorldSpacePivotOffset).field0_0x0._s_0.X;
      dVar8 = (double)param_3->_padding_;
      dVar9 = (double)param_3->_padding_;
      dVar10 = (double)param_3->_padding_;
      dVar21 = (double)param_3->_padding_;
      dVar23 = (double)param_3->_padding_;
      dVar24 = (double)param_3->_padding_;
      dVar11 = (double)param_3->_padding_;
      dVar12 = (double)param_3->_padding_;
      (param_1->WorldSpacePivotOffset).field0_0x0._s_0.X =
           dVar7 * (double)param_3->_padding_ + (double)param_3->_padding_ * dVar22 +
           dVar20 * (double)param_3->_padding_ + (double)param_3->_padding_ * 0.0;
      (param_1->WorldSpacePivotOffset).field0_0x0._s_0.Y =
           dVar7 * dVar10 + dVar8 * dVar22 + dVar20 * dVar21 + dVar23 * 0.0;
      (param_1->WorldSpacePivotOffset).field0_0x0._s_0.Z =
           dVar9 * dVar22 + dVar11 * dVar7 + dVar24 * dVar20 + dVar12 * 0.0;
    }
  }
  EVar2 = GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&this->field_0x148];
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar2].bContainsValidPlatformInfo == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid(Platform)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                        ,0x2ce,L"");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar13 = _UNK_15060db28;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar2].bSupportsManualVertexFetch == 0) {
    *(undefined8 *)&(param_1->VertexFetch_Parameters).field0_0x0 =
         ___xmm_ffffffffffffffffffffffffffffffff;
    *(undefined8 *)((longlong)&(param_1->VertexFetch_Parameters).field0_0x0 + 8) = uVar13;
    param_1->TexCoordBufferSrv = (FRHIShaderResourceView *)DummyFloat2Buffer._64_8_;
    param_1->PackedTangentsBufferSrv = (FRHIShaderResourceView *)DummyFloat4Buffer._64_8_;
    pFVar16 = (FRHIShaderResourceView *)DummyFloat4Buffer._64_8_;
  }
  else {
    bVar1 = (param_2->Data).NumTexCoords;
    (param_1->VertexFetch_Parameters).field0_0x0._s_0.X = (param_2->Data).ColorIndexMask;
    *(uint *)((longlong)&(param_1->VertexFetch_Parameters).field0_0x0 + 4) = (uint)bVar1;
    *(undefined8 *)((longlong)&(param_1->VertexFetch_Parameters).field0_0x0 + 8) =
         0xffffffffffffffff;
    param_1->TexCoordBufferSrv = (param_2->Data).TextureCoordinatesSRV;
    param_1->PackedTangentsBufferSrv = (param_2->Data).TangentsSRV;
    pFVar16 = (param_2->Data).ColorComponentsSRV;
  }
  param_1->ColorComponentsBufferSrv = pFVar16;
  return;
}

// ReleaseRenderThreadResources @ 149365630

void __thiscall FNiagaraRendererMeshes::ReleaseRenderThreadResources(FNiagaraRendererMeshes *this)

{
  return;
}

// SetupElementForGPUScene @ 14936c800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraRendererMeshes::SetupElementForGPUScene
          (FNiagaraRendererMeshes *this,FParticleMeshRenderData *param_1,
          FNiagaraMeshCommonParameters *param_2,FNiagaraSceneProxy *param_3,FMeshData *param_4,
          FSceneView *param_5,uint param_6,bool param_7,FMeshBatchElement *param_8)

{
  FMeshBatchDynamicPrimitiveData *pFVar1;
  FInstanceSceneData *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar7;
  INiagaraRenderableMesh *pIVar8;
  FRHIShaderResourceView *pFVar9;
  FMeshElementCollector *pFVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [12];
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  TSharedPtr<INiagaraRenderableMesh,1> *pTVar20;
  FMeshData *pFVar21;
  FNiagaraSceneProxy *pFVar22;
  FNiagaraGpuComputeDispatchInterface *pFVar23;
  bool bVar24;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar25;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar26;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar27;
  TVector<float> *pTVar28;
  TMatrix<double> *pTVar29;
  undefined1 (*pauVar30) [16];
  undefined8 *puVar31;
  TVector4<float> *pTVar32;
  undefined8 *puVar33;
  ulong64 uVar34;
  TTransform<double> *this_00;
  longlong lVar35;
  FRHIShaderResourceView *pFVar36;
  FNiagaraMeshCommonParameters *pFVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  uint uVar40;
  uint uVar41;
  double dVar42;
  undefined8 in_XMM1_Qb;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar52;
  undefined1 auVar53 [16];
  double dVar56;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar57;
  double dVar58;
  double dVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auStack_718 [32];
  undefined1 *local_6f8;
  undefined1 *local_6f0;
  undefined1 local_6e8;
  undefined1 local_6e7 [7];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_6e0;
  FDelegateAllocation local_6d8;
  FMeshData *local_6c8;
  float local_6c0;
  FNiagaraSceneProxy *local_6b8;
  undefined1 local_6b0 [8];
  FNiagaraGpuComputeDispatchInterface *local_6a8;
  FSceneView *local_6a0;
  undefined1 local_698 [28];
  float fStack_67c;
  ForElementType<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*>
  local_670;
  int iStack_668;
  int iStack_664;
  uchar local_660 [8];
  undefined4 uStack_658;
  undefined4 uStack_654;
  uchar auStack_644 [4];
  FDestructionSentinel local_640;
  FDestructionSentinel local_628;
  FDelegateAllocation *local_610;
  TTransform<double> local_5f8;
  TTransform<double> local_598;
  TTransform<double> local_538;
  undefined1 local_4d8 [16];
  double local_4c8;
  double dStack_4c0;
  double local_4b8;
  double dStack_4b0;
  undefined8 local_4a8;
  TVector4<float> local_498;
  TMatrix<double> local_488;
  TMatrix<double> local_408;
  TMatrix<double> local_388;
  TMatrix<double> local_308;
  TMatrix<double> local_288;
  TMatrix<double> local_208;
  TMatrix<double> local_188;
  undefined1 local_108 [56];
  ulonglong local_d0;
  
  local_d0 = __security_cookie.value ^ (ulonglong)auStack_718;
  local_6c8 = param_4;
  local_6a0 = param_5;
  local_6a8 = param_3->ComputeDispatchInterface;
  local_6b8 = param_3;
  if ((local_6a8 == (FNiagaraGpuComputeDispatchInterface *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("ComputeDispatchInterface",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererMeshes.cpp"
                          ,0x460,L""), bVar24)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  paVar7 = &param_1->Collector->OneFrameResources->Next;
  aVar25 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
            )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(800,0x10);
  pFVar22 = local_6b8;
  *(undefined8 *)((longlong)aVar25 + 8) = 0;
  *(undefined ***)aVar25 =
       &
       ___7__TObject_VFGPUSceneUpdateResource_FNiagaraRendererMeshes_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  TVar26.Next = *paVar7;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar25 + 8) = TVar26.Next;
    LOCK();
    aVar27 = *paVar7;
    bVar24 = TVar26.Next == aVar27;
    if (bVar24) {
      *paVar7 = aVar25;
      aVar27 = TVar26.Next;
    }
    UNLOCK();
    TVar26.Next = aVar27;
  } while (!bVar24);
  pFVar1 = (FMeshBatchDynamicPrimitiveData *)((longlong)aVar25 + 0x20);
  *(undefined4 *)((longlong)aVar25 + 0x18) = *(undefined4 *)&this->field_0x148;
  *(undefined8 *)((longlong)aVar25 + 0x10) =
       &___7FGPUSceneUpdateResource_FNiagaraRendererMeshes__6B_;
  *(byte *)((longlong)aVar25 + 0x1c) = this->bAccurateMotionVectors;
  (pFVar1->InstanceSceneData).DataPtr = (FInstanceSceneData *)0x0;
  *(undefined4 *)((longlong)aVar25 + 0x28) = 0;
  *(undefined8 *)((longlong)aVar25 + 0x30) = 0;
  *(undefined4 *)((longlong)aVar25 + 0x38) = 0;
  *(undefined8 *)((longlong)aVar25 + 0x40) = 0;
  *(undefined4 *)((longlong)aVar25 + 0x48) = 0;
  *(undefined8 *)((longlong)aVar25 + 0x50) = 0;
  *(undefined4 *)((longlong)aVar25 + 0x58) = 0;
  *(undefined8 *)((longlong)aVar25 + 0x60) = 0;
  *(undefined1 *)((longlong)aVar25 + 0x68) = 0xff;
  *(undefined8 *)((longlong)aVar25 + 0x70) = 0;
  *(undefined1 *)((longlong)aVar25 + 0x78) = 1;
  *(undefined8 *)((longlong)aVar25 + 0x80) = 0;
  *(undefined1 *)((longlong)aVar25 + 0x88) = 1;
  *(undefined8 *)((longlong)aVar25 + 0x90) = 0;
  *(undefined8 *)((longlong)aVar25 + 0x98) = 0;
  *(undefined8 *)((longlong)aVar25 + 0xa0) = 0;
  *(undefined8 *)((longlong)aVar25 + 0xc0) = 0;
  *(undefined1 *)((longlong)aVar25 + 200) = 1;
  *(undefined8 *)((longlong)aVar25 + 0xf0) = 0;
  *(undefined8 *)((longlong)aVar25 + 0xf8) = 0;
  *(undefined8 *)((longlong)aVar25 + 0x100) = 0;
  *(undefined8 *)((longlong)aVar25 + 0x110) = 0;
  *(undefined8 *)((longlong)aVar25 + 0x160) = 0;
  *(undefined4 *)((longlong)aVar25 + 0x168) = 0;
  *(undefined4 *)((longlong)aVar25 + 0x16c) = 0x3f800000;
  *(undefined8 *)((longlong)aVar25 + 0x1d0) = 0;
  *(undefined4 *)((longlong)aVar25 + 0x1d8) = 0;
  *(undefined4 *)((longlong)aVar25 + 0x1dc) = 0x3f800000;
  *(undefined8 *)((longlong)aVar25 + 0x210) = 0;
  *(undefined4 *)((longlong)aVar25 + 0x218) = 0;
  *(undefined4 *)((longlong)aVar25 + 0x21c) = 0x3f800000;
  *(undefined8 *)((longlong)aVar25 + 0x248) = 0;
  *(undefined8 *)((longlong)aVar25 + 0x290) = 0;
  *(undefined4 *)((longlong)aVar25 + 0x298) = 0;
  *(undefined4 *)((longlong)aVar25 + 0x29c) = 0x3f800000;
  *(ushort *)((longlong)aVar25 + 0x6a) = (ushort)param_7 << 3 | 4;
  *(undefined4 *)((longlong)aVar25 + 0x6c) = 1;
  if (((this->SourceMode == Particles) || (this->FacingMode != Default)) ||
     (this->bLockedAxisEnable != 0)) {
    memset((undefined8 *)((longlong)aVar25 + 0x70),0,0x240);
    pFVar21 = local_6c8;
    unique0x0000d400 = *(undefined8 *)&(this->MeshBoundsScale).field0_0x0;
    local_6c0 = (this->MeshBoundsScale).field0_0x0._s_0.Z;
    pTVar20 = &local_6c8->RenderableMesh;
    local_698._8_8_ = *(undefined8 *)&(local_6c8->Scale).field0_0x0;
    local_6c8 = (FMeshData *)CONCAT44(local_6c8._4_4_,(local_6c8->Scale).field0_0x0._s_0.Z);
    if ((pTVar20->Object == (INiagaraRenderableMesh *)0x0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar24)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pIVar8 = (pFVar21->RenderableMesh).Object;
    pauVar30 = (undefined1 (*) [16])(**(code **)(*(longlong *)pIVar8 + 0x10))(pIVar8,local_108);
    dVar15 = __real_3fe0000000000000;
    lVar35 = 2;
    local_4c8 = *(double *)pauVar30[1];
    dStack_4c0 = *(double *)(pauVar30[1] + 8);
    local_4d8 = *pauVar30;
    local_4b8 = *(double *)pauVar30[2];
    dStack_4b0 = *(double *)(pauVar30[2] + 8);
    local_4a8 = *(undefined8 *)pauVar30[3];
    auVar16._4_8_ = in_XMM1_Qb;
    auVar16._0_4_ = local_4d8._4_4_;
    auVar49._0_8_ = auVar16._0_8_ << 0x20;
    auVar49._8_4_ = local_4d8._8_4_;
    auVar49._12_4_ = local_4d8._12_4_;
    dVar47 = (dStack_4c0 - local_4d8._0_8_) * (double)(float)local_698._8_4_ *
             (double)(float)local_698._24_4_ * __real_3fe0000000000000;
    dVar58 = (local_4c8 + dStack_4b0) * __real_3fe0000000000000 * (double)local_6c8._0_4_;
    dVar13 = (local_4d8._0_8_ + dStack_4c0) * (double)(float)local_698._8_4_ *
             __real_3fe0000000000000;
    dVar52 = (local_4b8 - auVar49._8_8_) * (double)(float)local_698._12_4_ *
             (double)fStack_67c * __real_3fe0000000000000;
    dVar59 = (auVar49._8_8_ + local_4b8) * (double)(float)local_698._12_4_ * __real_3fe0000000000000
    ;
    dVar14 = (dStack_4b0 - local_4c8) * (double)local_6c8._0_4_ *
             (double)local_6c0 * __real_3fe0000000000000;
    puVar33 = (undefined8 *)((longlong)aVar25 + 0xf0);
    do {
      pFVar37 = param_2;
      puVar31 = puVar33;
      pFVar9 = pFVar37->NiagaraParticleDataHalf;
      *puVar31 = pFVar37->NiagaraParticleDataFloat;
      puVar31[1] = pFVar9;
      uVar18 = *(undefined8 *)&pFVar37->NiagaraFloatDataStride;
      puVar31[2] = pFVar37->NiagaraParticleDataInt;
      puVar31[3] = uVar18;
      uVar18 = *(undefined8 *)&pFVar37->SortedIndicesOffset;
      puVar31[4] = pFVar37->SortedIndices;
      puVar31[5] = uVar18;
      uVar18 = *(undefined8 *)((longlong)&(pFVar37->SystemLWCTile).field0_0x0 + 8);
      puVar31[6] = *(undefined8 *)&(pFVar37->SystemLWCTile).field0_0x0;
      puVar31[7] = uVar18;
      uVar18 = *(undefined8 *)&pFVar37->FacingMode;
      puVar31[8] = *(undefined8 *)&pFVar37->AccurateMotionVectors;
      puVar31[9] = uVar18;
      uVar18 = *(undefined8 *)((longlong)&(pFVar37->MeshScale).field0_0x0 + 8);
      puVar31[10] = *(undefined8 *)&(pFVar37->MeshScale).field0_0x0;
      puVar31[0xb] = uVar18;
      uVar18 = *(undefined8 *)((longlong)&(pFVar37->MeshOffset).field0_0x0 + 8);
      puVar31[0xc] = *(undefined8 *)&(pFVar37->MeshOffset).field0_0x0;
      puVar31[0xd] = uVar18;
      uVar18 = *(undefined8 *)((longlong)&(pFVar37->MeshRotation).field0_0x0 + 8);
      puVar31[0xe] = *(undefined8 *)&(pFVar37->MeshRotation).field0_0x0;
      puVar31[0xf] = uVar18;
      lVar35 = lVar35 + -1;
      puVar33 = puVar31 + 0x10;
      param_2 = (FNiagaraMeshCommonParameters *)&pFVar37->bMeshOffsetIsWorldSpace;
    } while (lVar35 != 0);
    lVar35 = pFVar37->_padding_;
    puVar31[0x10] = *(undefined8 *)&pFVar37->bMeshOffsetIsWorldSpace;
    puVar31[0x11] = lVar35;
    uVar18 = *(undefined8 *)((longlong)&(pFVar37->LockedAxis).field0_0x0 + 8);
    puVar31[0x12] = *(undefined8 *)&(pFVar37->LockedAxis).field0_0x0;
    puVar31[0x13] = uVar18;
    uVar18 = *(undefined8 *)&pFVar37->PositionDataOffset;
    puVar31[0x14] = *(undefined8 *)&pFVar37->ScaleDataOffset;
    puVar31[0x15] = uVar18;
    uVar18 = *(undefined8 *)&pFVar37->PrevRotationDataOffset;
    puVar31[0x16] = *(undefined8 *)&pFVar37->CameraOffsetDataOffset;
    puVar31[0x17] = uVar18;
    lVar35 = pFVar37->_padding_;
    puVar31[0x18] = *(undefined8 *)&pFVar37->PrevVelocityDataOffset;
    puVar31[0x19] = lVar35;
    *(uint *)((longlong)aVar25 + 0x244) = param_6;
    bVar24 = IsInParallelRenderingThread();
    if ((!bVar24) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInParallelRenderingThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                            ,0x6a,L""), bVar24)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar23 = local_6a8;
    if (((local_6a8->GPUInstanceCounterManager).AllocatedInstanceCounts <
         (local_6a8->GPUInstanceCounterManager).UsedInstanceCounts) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("UsedInstanceCounts <= AllocatedInstanceCounts",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                            ,0x44,L""), bVar24)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar9 = (pFVar23->GPUInstanceCounterManager).CountBuffer.SRV.Reference;
    pFVar36 = (FRHIShaderResourceView *)DummyUIntBuffer._64_8_;
    if (pFVar9 != (FRHIShaderResourceView *)0x0) {
      pFVar36 = pFVar9;
    }
    *(FRHIShaderResourceView **)((longlong)aVar25 + 0x248) = pFVar36;
    *(uint *)((longlong)aVar25 + 0x250) = param_1->SourceParticleData->GPUInstanceCountBufferOffset;
    *(uint *)((longlong)aVar25 + 0x254) = pFVar21->SourceMeshIndex;
    *(uint *)((longlong)aVar25 + 600) = param_1->MeshIndexOffset;
    *(int *)((longlong)aVar25 + 0x25c) = this->RendererVisibility;
    *(uint *)((longlong)aVar25 + 0x260) = param_1->RendererVisTagOffset;
    *(float *)((longlong)aVar25 + 0x270) = (float)(((dVar13 - dVar47) + dVar47 + dVar13) * dVar15);
    *(float *)((longlong)aVar25 + 0x274) = (float)(((dVar59 - dVar52) + dVar52 + dVar59) * dVar15);
    *(float *)((longlong)aVar25 + 0x278) = (float)(((dVar58 - dVar14) + dVar14 + dVar58) * dVar15);
    *(TVector2<float>_u_0 *)((longlong)aVar25 + 0x280) = (this->DistanceCullRangeSquared).field0_0x0
    ;
    pTVar32 = GetShaderLODScreenSize(&local_498,local_6a0,pFVar21);
    uVar18 = *(undefined8 *)&pTVar32->field0_0x0;
    uVar19 = *(undefined8 *)((longlong)&pTVar32->field0_0x0 + 8);
    *(uint *)((longlong)aVar25 + 0x2a0) = (uint)param_7;
    *(undefined8 *)((longlong)aVar25 + 0x290) = uVar18;
    *(undefined8 *)((longlong)aVar25 + 0x298) = uVar19;
    uVar40 = *(uint *)&param_8->field_0x7c;
    param_8->bForceInstanceCulling = 1;
    if ((param_1->bNeedsSort == false) || (*(int *)&this->field_0x148 < 2)) {
      uVar41 = 0;
    }
    else {
      uVar41 = 0x1000;
    }
    *(uint *)&param_8->field_0x7c = uVar40 & 0xffffefff | 0x800 | uVar41;
    pFVar10 = param_1->Collector;
    lVar35 = local_6b8->_padding_;
    local_6e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_6d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_6d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_6e0,(FWriteAccessScope *)&local_628);
    local_610 = &local_6d8;
    puVar33 = UE::Core::Private::DelegateAllocate(0x28,&local_6d8);
    if (puVar33 != (undefined8 *)0x0) {
      *puVar33 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEAVFRDGBuilder__AEBUFGPUSceneWriteDelegateParams___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar34 = FDelegateHandle::GenerateNewID();
      puVar33[2] = uVar34;
      *puVar33 = &TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,`FNiagaraRendererMeshes::SetupElementForGPUScene'::`12'::<lambda_1>_>
                  ::_vftable_;
      puVar33[3] = (undefined8 *)((longlong)aVar25 + 0x10);
      puVar33[4] = lVar35;
    }
    if (local_628.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_628.Accessor,&local_628);
    }
    FGPUSceneWriteDelegate::CreateInternal
              ((FMeshElementCollector *)local_698,
               (TDelegate<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy>
                *)pFVar10);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_6e0,(FWriteAccessScope *)&local_640);
    if ((local_6d8.DelegateSize != 0) &&
       (local_6d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_6d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_6d8,0,0,0x10);
      local_6d8.DelegateSize = 0;
    }
    if (local_640.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_640.Accessor,&local_640);
    }
    if (local_6d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_6d8.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_6e0.AccessDetector);
    *(undefined8 *)((longlong)aVar25 + 0x60) = local_698._0_8_;
    if (param_1->bIsGpuLowLatencyTranslucency != false) {
      *(undefined1 *)((longlong)aVar25 + 0x68) = 0;
    }
  }
  else {
    pTVar28 = FNiagaraSceneProxy::GetLWCRenderTile(local_6b8);
    dVar58 = __real_4140000000000000;
    dVar59 = __real_3e45798ee0000000;
    pFVar2 = (FInstanceSceneData *)((longlong)aVar25 + 0x2b0);
    fVar3 = (pTVar28->field0_0x0)._s_0.X;
    fVar4 = (pTVar28->field0_0x0)._s_0.Y;
    fVar5 = (pTVar28->field0_0x0)._s_0.Z;
    *(undefined4 *)((longlong)aVar25 + 0x310) = 0;
    dVar42 = (double)(param_2->DefaultRotation).field0_0x0._s_0.Y;
    dVar47 = (double)(param_2->DefaultRotation).field0_0x0._s_0.Z;
    auVar48._0_8_ = (double)(param_2->DefaultRotation).field0_0x0._s_0.W;
    auVar48._8_8_ = 0;
    dVar14 = (double)fVar3 * dVar58;
    dVar15 = (double)fVar4 * dVar58;
    dVar58 = (double)fVar5 * dVar58;
    dVar57 = (double)(param_2->DefaultRotation).field0_0x0._s_0.X;
    auVar53._8_4_ = SUB84(dVar42,0);
    auVar53._0_8_ = dVar57;
    auVar53._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
    dVar52 = dVar57 * dVar57 + dVar47 * dVar47;
    dVar56 = auVar53._8_8_ * dVar42 + auVar48._0_8_ * auVar48._0_8_;
    dVar13 = dVar56 + dVar52;
    dVar52 = dVar52 + dVar56;
    auVar60._8_4_ = SUB84(dVar52,0);
    auVar60._0_8_ = dVar13;
    auVar60._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
    auVar49 = sqrtpd(auVar48,auVar60);
    uVar38 = -(ulonglong)(dVar59 <= dVar13);
    uVar39 = -(ulonglong)(dVar59 <= dVar52);
    auVar60 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar49);
    uVar40 = (uint)(uVar38 >> 0x20);
    uVar41 = (uint)(uVar39 >> 0x20);
    auVar43._0_4_ = ~(uint)uVar38 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar43._4_4_ =
         ~uVar40 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar43._8_4_ = ~(uint)uVar39 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar43._12_4_ =
         ~uVar41 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar62._0_4_ = ~(uint)uVar38 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar62._4_4_ =
         ~uVar40 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar62._8_4_ = ~(uint)uVar39 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar62._12_4_ =
         ~uVar41 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_5f8.Translation.XY.m128d_f64[1] = (double)(param_2->DefaultPosition).field0_0x0._s_0.Y;
    auVar61._0_8_ = uVar38 & (ulonglong)(auVar60._0_8_ * dVar57);
    uVar17 = uVar39 & (ulonglong)(auVar60._8_8_ * dVar42);
    auVar61._8_4_ = (undefined4)uVar17;
    auVar61._12_4_ = (undefined4)(uVar17 >> 0x20);
    auVar49 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar49);
    local_5f8.Translation.ZW.m128d_f64[0] = (double)(param_2->DefaultPosition).field0_0x0._s_0.Z;
    auVar44._0_8_ = (ulonglong)(auVar49._0_8_ * dVar47) & uVar38;
    uVar39 = (ulonglong)(auVar49._8_8_ * auVar48._0_8_) & uVar39;
    auVar44._8_4_ = (undefined4)uVar39;
    auVar44._12_4_ = (undefined4)(uVar39 >> 0x20);
    local_5f8.Translation.XY.m128d_f64[0] = (double)(param_2->DefaultPosition).field0_0x0._s_0.X;
    local_5f8.Translation.ZW.m128d_f64[1] = 0.0;
    local_5f8.Scale3D.XY.m128d_f64[1] = (double)(param_2->DefaultScale).field0_0x0._s_0.Y;
    local_5f8.Scale3D.XY.m128d_f64[0] = (double)(param_2->DefaultScale).field0_0x0._s_0.X;
    local_5f8.Scale3D.ZW.m128d_f64[0] = (double)(param_2->DefaultScale).field0_0x0._s_0.Z;
    local_5f8.Scale3D.ZW.m128d_f64[1] = 0.0;
    local_5f8.Rotation.XY.m128d_f64 = (double  [2])(auVar61 | auVar43);
    local_5f8.Rotation.ZW.m128d_f64 = (double  [2])(auVar62 | auVar44);
    UE::Math::TTransform<double>::ToMatrixWithScale(&local_5f8,&local_308);
    if ((this->field_0x140 & 1) == 0) {
      local_308.M[3][0] = local_308.M[3][0] + dVar14;
      local_308.M[3][1] = local_308.M[3][1] + dVar15;
      local_308.M[3][2] = local_308.M[3][2] + dVar58;
      VectorMatrixMultiply(&local_308,&local_308,&pFVar22->LocalToWorldInverse);
    }
    local_660 = (uchar  [8])((longlong)aVar25 + 0x310);
    (pFVar2->LocalToPrimitive).TransformRows[0].field0_0x0._s_0.X = (float)local_308.M[0][0];
    *(float *)((longlong)aVar25 + 0x2b4) = (float)local_308.M[0][1];
    *(float *)((longlong)aVar25 + 0x2b8) = (float)local_308.M[0][2];
    *(float *)((longlong)aVar25 + 700) = (float)local_308.M[1][0];
    *(float *)((longlong)aVar25 + 0x2c0) = (float)local_308.M[1][1];
    *(float *)((longlong)aVar25 + 0x2c4) = (float)local_308.M[1][2];
    *(float *)((longlong)aVar25 + 0x2c8) = (float)local_308.M[2][0];
    *(float *)((longlong)aVar25 + 0x2cc) = (float)local_308.M[2][1];
    *(float *)((longlong)aVar25 + 0x2d0) = (float)local_308.M[2][2];
    *(float *)((longlong)aVar25 + 0x2d4) = (float)local_308.M[3][0];
    *(float *)((longlong)aVar25 + 0x2d8) = (float)local_308.M[3][1];
    *(float *)((longlong)aVar25 + 0x2dc) = (float)local_308.M[3][2];
    iStack_668 = 1;
    uStack_658 = 1;
    (pFVar1->InstanceSceneData).DataPtr = pFVar2;
    *(ulonglong *)((longlong)aVar25 + 0x28) = CONCAT44(iStack_664,1);
    *(uchar (*) [8])((longlong)aVar25 + 0x50) = local_660;
    *(ulonglong *)((longlong)aVar25 + 0x58) = CONCAT44(uStack_654,1);
    if (param_7) {
      if (param_2->AccurateMotionVectors == 0) {
        pTVar29 = &local_408;
        this_00 = &local_538;
        local_538.Translation.XY.m128d_f64[1] = (double)(param_2->DefaultPosition).field0_0x0._s_0.Y
        ;
        local_538.Translation.XY.m128d_f64[0] = (double)(param_2->DefaultPosition).field0_0x0._s_0.X
        ;
        local_538.Translation.ZW.m128d_f64[0] = (double)(param_2->DefaultPosition).field0_0x0._s_0.Z
        ;
        local_538.Translation.ZW.m128d_f64[1] = 0.0;
        local_538.Scale3D.XY.m128d_f64[1] = (double)(param_2->DefaultScale).field0_0x0._s_0.Y;
        local_538.Scale3D.XY.m128d_f64[0] = (double)(param_2->DefaultScale).field0_0x0._s_0.X;
        local_538.Scale3D.ZW.m128d_f64[0] = (double)(param_2->DefaultScale).field0_0x0._s_0.Z;
        local_538.Scale3D.ZW.m128d_f64[1] = 0.0;
        local_538.Rotation.XY.m128d_f64 = (double  [2])(auVar61 | auVar43);
        local_538.Rotation.ZW.m128d_f64 = (double  [2])(auVar62 | auVar44);
      }
      else {
        pTVar29 = &local_488;
        this_00 = &local_598;
        dVar42 = (double)(param_2->DefaultPrevRotation).field0_0x0._s_0.X;
        dVar52 = (double)(param_2->DefaultPrevRotation).field0_0x0._s_0.Y;
        dVar56 = (double)(param_2->DefaultPrevRotation).field0_0x0._s_0.Z;
        dVar47 = (double)(param_2->DefaultPrevRotation).field0_0x0._s_0.W;
        auVar54._8_4_ = SUB84(dVar52,0);
        auVar54._0_8_ = dVar42;
        auVar54._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
        auVar55._0_8_ = dVar42 * dVar42 + dVar56 * dVar56;
        auVar55._8_8_ = auVar54._8_8_ * dVar52 + dVar47 * dVar47;
        dVar13 = auVar55._0_8_ + auVar55._8_8_;
        auVar12._8_4_ = SUB84(dVar13,0);
        auVar12._0_8_ = auVar55._8_8_ + auVar55._0_8_;
        auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        auVar60 = sqrtpd(auVar55,auVar12);
        uVar39 = -(ulonglong)(dVar59 <= auVar55._8_8_ + auVar55._0_8_);
        uVar38 = -(ulonglong)(dVar59 <= dVar13);
        uVar40 = (uint)(uVar39 >> 0x20);
        uVar41 = (uint)(uVar38 >> 0x20);
        auVar49 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar60);
        auVar45._0_4_ =
             ~(uint)uVar39 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
        auVar45._4_4_ =
             ~uVar40 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                             0x20);
        auVar45._8_4_ =
             ~(uint)uVar38 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        auVar45._12_4_ =
             ~uVar41 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                             0x20);
        auVar50._0_8_ = uVar39 & (ulonglong)(auVar49._0_8_ * dVar42);
        uVar17 = uVar38 & (ulonglong)(auVar49._8_8_ * dVar52);
        auVar50._8_4_ = (undefined4)uVar17;
        auVar50._12_4_ = (undefined4)(uVar17 >> 0x20);
        local_598.Rotation.XY.m128d_f64 = (double  [2])(auVar50 | auVar45);
        auVar49 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar60);
        local_598.Translation.ZW.m128d_f64[0] =
             (double)(param_2->DefaultPrevPosition).field0_0x0._s_0.Z;
        auVar46._0_8_ = (ulonglong)(auVar49._0_8_ * dVar56) & uVar39;
        uVar17 = (ulonglong)(auVar49._8_8_ * dVar47) & uVar38;
        auVar46._8_4_ = (undefined4)uVar17;
        auVar46._12_4_ = (undefined4)(uVar17 >> 0x20);
        auVar51._0_4_ =
             ~(uint)uVar39 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
        auVar51._4_4_ =
             ~uVar40 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                             0x20);
        auVar51._8_4_ =
             ~(uint)uVar38 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        auVar51._12_4_ =
             ~uVar41 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                             0x20);
        local_598.Rotation.ZW.m128d_f64 = (double  [2])(auVar51 | auVar46);
        local_598.Translation.XY.m128d_f64[1] =
             (double)(param_2->DefaultPrevPosition).field0_0x0._s_0.Y;
        local_598.Translation.XY.m128d_f64[0] =
             (double)(param_2->DefaultPrevPosition).field0_0x0._s_0.X;
        local_598.Translation.ZW.m128d_f64[1] = 0.0;
        local_598.Scale3D.XY.m128d_f64[1] = (double)(param_2->DefaultPrevScale).field0_0x0._s_0.Y;
        local_598.Scale3D.XY.m128d_f64[0] = (double)(param_2->DefaultPrevScale).field0_0x0._s_0.X;
        local_598.Scale3D.ZW.m128d_f64[0] = (double)(param_2->DefaultPrevScale).field0_0x0._s_0.Z;
        local_598.Scale3D.ZW.m128d_f64[1] = 0.0;
      }
      local_670.Data =
           (TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
            **)pFVar2;
      pTVar29 = UE::Math::TTransform<double>::ToMatrixWithScale(this_00,pTVar29);
      local_388.M[0][0] = pTVar29->M[0][0];
      local_388.M[0][1] = pTVar29->M[0][1];
      local_388.M[0][2] = pTVar29->M[0][2];
      local_388.M[0][3] = pTVar29->M[0][3];
      local_388.M[1][0] = pTVar29->M[1][0];
      local_388.M[1][1] = pTVar29->M[1][1];
      local_388.M[1][2] = pTVar29->M[1][2];
      local_388.M[1][3] = pTVar29->M[1][3];
      local_388.M[2][0] = pTVar29->M[2][0];
      local_388.M[2][1] = pTVar29->M[2][1];
      local_388.M[2][2] = pTVar29->M[2][2];
      local_388.M[2][3] = pTVar29->M[2][3];
      local_388.M[3][0] = pTVar29->M[3][0];
      local_388.M[3][1] = pTVar29->M[3][1];
      local_388.M[3][2] = pTVar29->M[3][2];
      local_388.M[3][3] = pTVar29->M[3][3];
      if ((this->field_0x140 & 1) == 0) {
        local_6f0 = &local_6e8;
        local_388.M[3][0] = local_388.M[3][0] + dVar14;
        local_388.M[3][1] = local_388.M[3][1] + dVar15;
        local_6f8 = local_6b0;
        local_388.M[3][2] = local_388.M[3][2] + dVar58;
        (**(code **)(*(longlong *)pFVar22->_padding_ + 0x250))
                  ((longlong *)pFVar22->_padding_,pFVar22->_padding_,local_6e7,&local_208);
        uVar40 = SUB84(local_208.M[0][0],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar41 = (uint)((ulonglong)local_208.M[0][0] >> 0x20) &
                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        if ((((((dVar59 <= (double)CONCAT44(uVar41,uVar40) &&
                 (double)CONCAT44(uVar41,uVar40) != dVar59) ||
               (uVar40 = SUB84(local_208.M[0][1],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
               uVar41 = (uint)((ulonglong)local_208.M[0][1] >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
               dVar59 <= (double)CONCAT44(uVar41,uVar40) &&
               (double)CONCAT44(uVar41,uVar40) != dVar59)) ||
              (uVar40 = SUB84(local_208.M[0][2],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
              uVar41 = (uint)((ulonglong)local_208.M[0][2] >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
              dVar59 <= (double)CONCAT44(uVar41,uVar40) && (double)CONCAT44(uVar41,uVar40) != dVar59
              )) || ((uVar40 = SUB84(local_208.M[1][0],0) &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff,
                     uVar41 = (uint)((ulonglong)local_208.M[1][0] >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                     dVar59 <= (double)CONCAT44(uVar41,uVar40) &&
                     (double)CONCAT44(uVar41,uVar40) != dVar59 ||
                     (uVar40 = SUB84(local_208.M[1][1],0) &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff,
                     uVar41 = (uint)((ulonglong)local_208.M[1][1] >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                     dVar59 <= (double)CONCAT44(uVar41,uVar40) &&
                     (double)CONCAT44(uVar41,uVar40) != dVar59)))) ||
            ((uVar40 = SUB84(local_208.M[1][2],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
             uVar41 = (uint)((ulonglong)local_208.M[1][2] >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
             dVar59 <= (double)CONCAT44(uVar41,uVar40) && (double)CONCAT44(uVar41,uVar40) != dVar59
             || ((uVar40 = SUB84(local_208.M[2][0],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                 , uVar41 = (uint)((ulonglong)local_208.M[2][0] >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                 dVar59 <= (double)CONCAT44(uVar41,uVar40) &&
                 (double)CONCAT44(uVar41,uVar40) != dVar59 ||
                 (uVar40 = SUB84(local_208.M[2][1],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                 , uVar41 = (uint)((ulonglong)local_208.M[2][1] >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                 dVar59 <= (double)CONCAT44(uVar41,uVar40) &&
                 (double)CONCAT44(uVar41,uVar40) != dVar59)))))) ||
           (uVar40 = SUB84(local_208.M[2][2],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar41 = (uint)((ulonglong)local_208.M[2][2] >> 0x20) &
                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
           dVar59 <= (double)CONCAT44(uVar41,uVar40) && (double)CONCAT44(uVar41,uVar40) != dVar59))
        {
          FMath::MatrixInverse(&local_188,&local_208);
          local_288.M[0][0] = local_188.M[0][0];
          local_288.M[0][1] = local_188.M[0][1];
          local_288.M[0][2] = local_188.M[0][2];
          local_288.M[0][3] = local_188.M[0][3];
          local_288.M[1][0] = local_188.M[1][0];
          local_288.M[1][1] = local_188.M[1][1];
          local_288.M[1][2] = local_188.M[1][2];
          local_288.M[1][3] = local_188.M[1][3];
          local_288.M[2][0] = local_188.M[2][0];
          local_288.M[2][1] = local_188.M[2][1];
          local_288.M[2][2] = local_188.M[2][2];
          local_288.M[2][3] = local_188.M[2][3];
          local_288.M[3][0]._0_4_ = local_188.M[3][0]._0_4_;
          local_288.M[3][0]._4_4_ = local_188.M[3][0]._4_4_;
          local_288.M[3][1]._0_4_ = local_188.M[3][1]._0_4_;
          local_288.M[3][1]._4_4_ = local_188.M[3][1]._4_4_;
          local_288.M[3][2] = local_188.M[3][2];
          local_288.M[3][3] = local_188.M[3][3];
        }
        else {
          local_288.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
          local_288.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
          local_288.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
          local_288.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
          local_288.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
          local_288.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
          local_288.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
          local_288.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
          local_288.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
          local_288.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
          local_288.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
          local_288.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
          local_288.M[3][0]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][0]._0_4_;
          local_288.M[3][0]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][0]._4_4_;
          local_288.M[3][1]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][1]._0_4_;
          local_288.M[3][1]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][1]._4_4_;
          local_288.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
          local_288.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
        }
        VectorMatrixMultiply(&local_388,&local_388,&local_288);
      }
      *(float *)((longlong)aVar25 + 0x2e0) = (float)local_388.M[0][0];
      *(float *)((longlong)aVar25 + 0x2e4) = (float)local_388.M[0][1];
      *(float *)((longlong)aVar25 + 0x2e8) = (float)local_388.M[0][2];
      *(float *)((longlong)aVar25 + 0x2ec) = (float)local_388.M[1][0];
      *(float *)((longlong)aVar25 + 0x2f0) = (float)local_388.M[1][1];
      *(float *)((longlong)aVar25 + 0x2f4) = (float)local_388.M[1][2];
      *(float *)((longlong)aVar25 + 0x2f8) = (float)local_388.M[2][0];
      *(float *)((longlong)aVar25 + 0x2fc) = (float)local_388.M[2][1];
      *(float *)((longlong)aVar25 + 0x300) = (float)local_388.M[2][2];
      *(float *)((longlong)aVar25 + 0x304) = (float)local_388.M[3][0];
      *(float *)((longlong)aVar25 + 0x308) = (float)local_388.M[3][1];
      *(float *)((longlong)aVar25 + 0x30c) = (float)local_388.M[3][2];
      *(float **)((longlong)aVar25 + 0x30) = (float *)((longlong)aVar25 + 0x2e0);
      *(ulonglong *)((longlong)aVar25 + 0x38) = CONCAT44(auStack_644,1);
    }
  }
  param_8->DynamicPrimitiveData = pFVar1;
  return;
}

// operator() @ 1505411e0

bool __thiscall
`FNiagaraRendererMeshes::PrepareParticleMeshRenderData'::__l38::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7082394121846915489>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)this + 0x238);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7082394121846915489>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15054125b;
    }
  }
  bVar2 = false;
LAB_15054125b:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150541290

bool __thiscall
`FNiagaraRendererMeshes::GetDynamicMeshElements'::__l99::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7082394121846916638>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7082394121846916638>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

