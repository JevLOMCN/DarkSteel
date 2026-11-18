// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 16

// FNiagaraRendererSprites @ 149385e80

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

FNiagaraRendererSprites * __thiscall
FNiagaraRendererSprites::FNiagaraRendererSprites
          (FNiagaraRendererSprites *this,Type param_1,UNiagaraRendererProperties *param_2,
          FNiagaraEmitterInstance *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar3;
  ENiagaraRendererPixelCoverageMode EVar4;
  int iVar5;
  FNiagaraDataSet *this_00;
  FScriptContainerElement *pFVar6;
  FNiagaraRendererLayout *pFVar7;
  code *pcVar8;
  TVector2<float>_u_0 TVar9;
  TVector2<float>_u_0 TVar10;
  bool bVar11;
  ENiagaraSpriteAlignment EVar12;
  uint uVar13;
  int iVar14;
  FNiagaraRendererSprites *pFVar15;
  UNiagaraSpriteRendererProperties *this_01;
  UClass *this_02;
  int *piVar16;
  FNiagaraTypeDefinition *pFVar17;
  ulonglong uVar18;
  int *piVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  ENiagaraSpriteFacingMode EVar23;
  ulonglong uVar24;
  float fVar25;
  int local_res8 [2];
  int local_res18 [2];
  ulonglong local_res20;
  FNiagaraVariableBase local_50 [2];
  
  FNiagaraRenderer::FNiagaraRenderer((FNiagaraRenderer *)this,param_1,param_2,param_3);
  this->Alignment = Unaligned;
  this->FacingMode = FaceCamera;
  this->_padding_ = (longlong)&___7FNiagaraRendererSprites__6B_;
  this->SortMode = ViewDistance;
  uVar22 = 0;
  (this->PivotInUVSpace).field0_0x0._s_0.X = 0.5;
  *(undefined8 *)((longlong)&(this->PivotInUVSpace).field0_0x0 + 4) = 0x3f000000;
  (this->SubImageSize).field0_0x0._s_0.X = 1.0;
  *(undefined8 *)((longlong)&(this->SubImageSize).field0_0x0 + 4) = 0x3f800000;
  this->PixelCoverageMode = Automatic;
  this->PixelCoverageBlend = 0.0;
  this->MinFacingCameraBlendDistance = 0.0;
  puVar2 = &this->field_0x18c;
  this->bSubImageBlend = 0;
  this->bEnableDistanceCulling = 0;
  this->bGpuLowLatencyTranslucency = 1;
  this->bSortOnlyWhenTranslucent = 1;
  this->bSortHighPrecision = 0;
  this->bRemoveHMDRollInVR = 0;
  *(undefined8 *)&this->MaxFacingCameraBlendDistance = 0;
  (this->DistanceCullRange).field0_0x0._s_0.Y = 3.4028235e+38;
  FNiagaraCutoutVertexBuffer::FNiagaraCutoutVertexBuffer(&this->CutoutVertexBuffer,0);
  this->NumCutoutVertexPerSubImage = 0;
  this->MaterialParamValidMask = 0;
  uVar21 = 0xffffffff;
  this->RendererVisTagOffset = -1;
  uVar20 = 0;
  this->RendererVisibility = 0;
  if (((param_2 == (UNiagaraRendererProperties *)0x0) || (param_3 == (FNiagaraEmitterInstance *)0x0)
      ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InProps && Emitter",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererSprites.cpp"
                                ,0x56,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar15 = (FNiagaraRendererSprites *)(*pcVar8)();
    return pFVar15;
  }
  this_01 = CastChecked<UNiagaraSpriteRendererProperties_const_,UNiagaraRendererProperties_const_>
                      (param_2);
  this->SourceMode = this_01->SourceMode;
  this->Alignment = this_01->Alignment;
  this->FacingMode = this_01->FacingMode;
  TVar9._s_0.Y = (float)(this_01->PivotInUVSpace).field0_0x0._s_0.Y;
  TVar9._s_0.X = (float)(this_01->PivotInUVSpace).field0_0x0._s_0.X;
  (this->PivotInUVSpace).field0_0x0 = TVar9;
  this->MacroUVRadius = this_01->MacroUVRadius;
  this->SortMode = this_01->SortMode;
  TVar10._s_0.Y = (float)(this_01->SubImageSize).field0_0x0._s_0.Y;
  TVar10._s_0.X = (float)(this_01->SubImageSize).field0_0x0._s_0.X;
  (this->SubImageSize).field0_0x0 = TVar10;
  uVar13 = UNiagaraSpriteRendererProperties::GetNumIndicesPerInstance(this_01);
  this->NumIndicesPerInstance = uVar13;
  uVar13 = (this_01->bSubImageBlend ^ ZPULL(*(undefined4 *)&this->field_0x18c,0,1)) & 1 ^
           *(undefined4 *)&this->field_0x18c;
  *(uint *)&this->field_0x18c = uVar13;
  *(uint *)&this->field_0x18c = ((byte)this_01->field_0xf0 ^ uVar13) & 2 ^ uVar13;
  bVar11 = UNiagaraRendererProperties::IsSortHighPrecision(this_01->SortPrecision);
  this->bSortHighPrecision = 0;
  *(uint *)&this->field_0x18c = *(uint *)&this->field_0x18c | (uint)bVar11 << 2;
  *(uint *)&this->field_0x18c =
       ((uint)(byte)this_01->field_0xf0 * 2 ^ *(uint *)&this->field_0x18c) & 8 ^
       *(uint *)&this->field_0x18c;
  bVar11 = UNiagaraRendererProperties::IsGpuTranslucentThisFrame
                     (param_1,this_01->GpuTranslucentLatency);
  this->bGpuLowLatencyTranslucency = 0;
  *(uint *)&this->field_0x18c = *(uint *)&this->field_0x18c | (uint)bVar11 << 4;
  this->MinFacingCameraBlendDistance = this_01->MinFacingCameraBlendDistance;
  this->MaxFacingCameraBlendDistance = this_01->MaxFacingCameraBlendDistance;
  this->RendererVisibility = this_01->RendererVisibility;
  bVar11 = UNiagaraRendererProperties::NeedsPreciseMotionVectors
                     ((UNiagaraRendererProperties *)this_01);
  this->bAccurateMotionVectors = 0;
  *(uint *)&this->field_0x18c = *(uint *)&this->field_0x18c | (uint)bVar11 << 7;
  *(uint *)&this->field_0x18c =
       ((uint)(byte)this_01->field_0xf0 << 4 ^ *(uint *)&this->field_0x18c) & 0x100 ^
       *(uint *)&this->field_0x18c;
  EVar4 = this_01->PixelCoverageMode;
  this->PixelCoverageMode = EVar4;
  if (EVar4 == Automatic) {
    this_02 = UNiagaraSettings::StaticClass();
    if ((this_02->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_02);
    }
    if ((this_02->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0x1b != '\0') {
      this->PixelCoverageMode = Disabled;
    }
  }
  fVar25 = this_01->PixelCoverageBlend;
  if (__real_3f800000 <= this_01->PixelCoverageBlend) {
    fVar25 = __real_3f800000;
  }
  if (fVar25 <= 0.0) {
    fVar25 = 0.0;
  }
  this->PixelCoverageBlend = fVar25;
  uVar13 = ((uint)(byte)this_01->field_0xf0 << 3 ^ *(uint *)&this->field_0x18c) & 0x40 ^
           *(uint *)&this->field_0x18c;
  *(uint *)&this->field_0x18c = uVar13;
  if (this_01->bEnableCameraDistanceCulling != '\0') {
    (this->DistanceCullRange).field0_0x0 = *(TVector2<float>_u_0 *)&this_01->MinCameraDistance;
  }
  this->RendererVisTagOffset = -1;
  *(uint *)&this->field_0x18c = (uVar13 >> 1 ^ uVar13) & 0x20 ^ uVar13;
  if ((this_01->RendererVisibilityTagBinding).bBindingExistsOnSource == '\x01' &&
      (this_01->RendererVisibilityTagBinding).bIsCachedParticleValue == '\0') {
    piVar16 = (int *)(**(code **)((param_3->RendererBindings)._padding_ + 0x58))
                               (&param_3->RendererBindings,
                                &(this_01->RendererVisibilityTagBinding).ParamMapVariable,0);
    if (piVar16 == (int *)0x0) {
      iVar14 = -1;
    }
    else {
      iVar14 = *piVar16;
    }
    this->bVisTagInParamStore = 1;
    this->RendererVisTagOffset = iVar14;
  }
  else {
    if ((param_3->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParticleDataSet",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                            ,0x3a,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      pFVar15 = (FNiagaraRendererSprites *)(*pcVar8)();
      return pFVar15;
    }
    this_00 = param_3->ParticleDataSet;
    pFVar17 = FNiagaraTypeDefinitionHandle::Resolve
                        (&(this_01->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle);
    local_50[0].Name = (this_01->RendererVisibilityTagBinding).DataSetName;
    local_50[0].TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register(&local_50[0].TypeDefHandle,pFVar17);
    FNiagaraDataSet::GetVariableComponentOffsets
              (this_00,local_50,local_res18,&this->RendererVisTagOffset,local_res8);
    if (this->RendererVisTagOffset != -1) {
      uVar20 = 0x20;
    }
    *(uint *)&this->field_0x18c =
         (uVar20 | *(uint *)&this->field_0x18c & 0x20) ^ *(uint *)&this->field_0x18c & 0xfffffbdf;
  }
  iVar14 = UNiagaraSpriteRendererProperties::GetNumCutoutVertexPerSubimage(this_01);
  this->NumCutoutVertexPerSubImage = iVar14;
  pTVar3 = &(this->CutoutVertexBuffer).Data;
  if (pTVar3 != &(this_01->DerivedData).BoundingGeometry) {
    iVar14 = (this_01->DerivedData).BoundingGeometry.ArrayNum;
    piVar16 = &(this->CutoutVertexBuffer).Data.ArrayMax;
    pFVar6 = (this_01->DerivedData).BoundingGeometry.AllocatorInstance.Data;
    iVar5 = *piVar16;
    (this->CutoutVertexBuffer).Data.ArrayNum = iVar14;
    if ((iVar14 == 0) && (iVar5 == 0)) {
      *piVar16 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar14,iVar5,&pTVar3->AllocatorInstance,iVar14,piVar16);
      if (iVar14 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar14 << 3);
      }
    }
  }
  uVar20 = *(uint *)&this->field_0x18c;
  this->MaterialParamValidMask = this_01->MaterialParamValidMask;
  this->bSetAnyBoundVars = 0;
  this->RendererLayoutWithCustomSort = &this_01->RendererLayoutWithCustomSort;
  this->RendererLayoutWithoutCustomSort = &this_01->RendererLayoutWithoutCustomSort;
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
    this->VFBoundOffsetsInParamStore[0x13] = -1;
    this->VFBoundOffsetsInParamStore[0x14] = -1;
    this->VFBoundOffsetsInParamStore[0x15] = -1;
    this->VFBoundOffsetsInParamStore[0x16] = -1;
    this->VFBoundOffsetsInParamStore[0x17] = -1;
    this->VFBoundOffsetsInParamStore[0x18] = -1;
    this->VFBoundOffsetsInParamStore[0x19] = -1;
  }
  else {
    if (((int)this_01->_padding_ < 0x1a) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("VFBindings.Num() >= ENiagaraSpriteVFLayout::Type::Num_Max",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererSprites.cpp"
                            ,0x9d,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      pFVar15 = (FNiagaraRendererSprites *)(*pcVar8)();
      return pFVar15;
    }
    uVar18 = (ulonglong)((uVar20 & 0x80 | 0x120) >> 4);
    piVar16 = this->VFBoundOffsetsInParamStore;
    uVar24 = uVar22;
    local_res20 = uVar18;
    do {
      *piVar16 = -1;
      iVar14 = (int)uVar24;
      if ((longlong)uVar22 < (longlong)uVar18) {
        if (((int)this_01->_padding_ <= iVar14) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          pFVar15 = (FNiagaraRendererSprites *)(*pcVar8)();
          return pFVar15;
        }
        uVar18 = local_res20;
        if (*(longlong *)(this_01->_padding_ + uVar22 * 8) != 0) {
          if (((int)this_01->_padding_ <= iVar14) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            pFVar15 = (FNiagaraRendererSprites *)(*pcVar8)();
            return pFVar15;
          }
          uVar18 = local_res20;
          if ((*(byte *)(*(longlong *)(this_01->_padding_ + uVar22 * 8) + 0x1d) & 3) == 1) {
            if (((int)this_01->_padding_ <= iVar14) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar8 = (code *)swi(3);
              pFVar15 = (FNiagaraRendererSprites *)(*pcVar8)();
              return pFVar15;
            }
            piVar19 = (int *)(**(code **)((param_3->RendererBindings)._padding_ + 0x58))
                                       (&param_3->RendererBindings,
                                        *(longlong *)(this_01->_padding_ + uVar22 * 8) + 8,0);
            uVar18 = local_res20;
            if (piVar19 == (int *)0x0) {
              *piVar16 = -1;
            }
            else {
              iVar5 = *piVar19;
              *piVar16 = iVar5;
              if (iVar5 != -1) {
                this->bSetAnyBoundVars = 1;
              }
            }
          }
        }
      }
      uVar24 = (ulonglong)(iVar14 + 1U);
      uVar22 = uVar22 + 1;
      piVar16 = piVar16 + 1;
    } while ((int)(iVar14 + 1U) < 0x1a);
  }
  pFVar7 = this->RendererLayoutWithoutCustomSort;
  bVar11 = IsInGameThread();
  if (((!bVar11) && (bVar11 = IsInParallelGameThread(), !bVar11)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread() || IsInParallelGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraRendererProperties.h"
                          ,0x9a,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar15 = (FNiagaraRendererSprites *)(*pcVar8)();
    return pFVar15;
  }
  pFVar6 = (pFVar7->VFVariables_GT).AllocatorInstance.Data;
  iVar14 = (pFVar7->VFVariables_GT).ArrayNum;
  if ((iVar14 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar15 = (FNiagaraRendererSprites *)(*pcVar8)();
    return pFVar15;
  }
  if (this->Alignment == Automatic) {
    if (this->SourceMode == Particles) {
      if ((iVar14 < 7) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        pFVar15 = (FNiagaraRendererSprites *)(*pcVar8)();
        return pFVar15;
      }
      uVar20 = 0xffffffff;
      if (*(ushort *)(pFVar6 + 0x32) != 0xffff) {
        uVar20 = (uint)*(ushort *)(pFVar6 + 0x32);
      }
      uVar20 = -(uint)(pFVar6[0x37] != (FScriptContainerElement)0x0) & 0x80000000 | uVar20;
    }
    else {
      uVar20 = this->VFBoundOffsetsInParamStore[6];
    }
    EVar12 = CustomAlignment;
    if (uVar20 == 0xffffffff) {
      EVar12 = Unaligned;
    }
    this->Alignment = EVar12;
  }
  if (this->FacingMode == Automatic) {
    if (this->SourceMode == Particles) {
      if ((iVar14 < 6) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        pFVar15 = (FNiagaraRendererSprites *)(*pcVar8)();
        return pFVar15;
      }
      if (*(ushort *)(pFVar6 + 0x2a) != 0xffff) {
        uVar21 = (uint)*(ushort *)(pFVar6 + 0x2a);
      }
      uVar21 = -(uint)(pFVar6[0x2f] != (FScriptContainerElement)0x0) & 0x80000000 | uVar21;
    }
    else {
      uVar21 = this->VFBoundOffsetsInParamStore[5];
    }
    EVar23 = CustomFacingVector;
    if (uVar21 == 0xffffffff) {
      EVar23 = FaceCamera;
    }
    this->FacingMode = EVar23;
  }
  return this;
}

// ~FNiagaraRendererSprites @ 149389fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraRendererSprites::~FNiagaraRendererSprites(FNiagaraRendererSprites *this)

{
  FScriptContainerElement *pFVar1;
  FRHIShaderResourceView *this_00;
  
  this->_padding_ = (longlong)&___7FNiagaraRendererSprites__6B_;
  pFVar1 = (this->CutoutVertexBuffer).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = (this->CutoutVertexBuffer).VertexBufferSRV.Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&this->CutoutVertexBuffer);
  FNiagaraRenderer::~FNiagaraRenderer((FNiagaraRenderer *)this);
  return;
}

// CreateMeshBatchForView @ 14939a200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EBlendMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraRendererSprites::CreateMeshBatchForView
          (FNiagaraRendererSprites *this,FRHICommandListBase *param_1,
          FParticleSpriteRenderData *param_2,FMeshBatch *param_3,FSceneView *param_4,
          FNiagaraSceneProxy *param_5,FNiagaraSpriteVertexFactory *param_6,uint param_7,uint param_8
          ,bool param_9)

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  uchar *puVar2;
  Type TVar3;
  uint uVar4;
  FRHIShaderResourceView *pFVar5;
  FNiagaraGpuComputeDispatchInterface *pFVar6;
  FRHIUniformBuffer *this_00;
  ForElementType<FMeshBatchElement> FVar7;
  FName FVar8;
  code *pcVar9;
  longlong lVar10;
  bool bVar11;
  uint uVar12;
  ESceneDepthPriorityGroup EVar13;
  FIndirectArgSlot *pFVar14;
  FShaderParametersMetadata *pFVar15;
  TRefCountPtr<FRHIUniformBuffer> TVar16;
  UMaterial *pUVar17;
  FMaterialRenderProxy *pFVar18;
  FRHIUniformBuffer *pFVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_NiagaraNumSprites> FVar21;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar22;
  uchar auVar23 [8];
  TRefCountPtr<FRHIShaderResourceView> this_03;
  TRefCountPtr<FRHIBuffer> this_04;
  undefined1 auStackY_1b8 [32];
  uint local_154;
  FIndirectArgSlot local_128;
  FRHIResource *local_110;
  FMaterialRenderProxy *local_108;
  FName local_100;
  FStatMessage local_f8;
  undefined1 local_e8 [40];
  ForAnyElementType local_c0;
  FRHIShaderResourceView *local_b8;
  ForAnyElementType local_b0;
  FName local_a8;
  FIndirectArgSlot local_a0;
  TVector<double>_u_0 local_88;
  ForAnyElementType FStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_57;
  undefined2 local_53;
  undefined1 local_51;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_e8._32_8_ = param_2->ParticleFloatSRV;
  local_c0.Data = (FScriptContainerElement *)param_2->ParticleHalfSRV;
  local_e8._4_4_ = param_2->ParticleHalfDataStride;
  if (param_2->ParticleHalfDataStride < param_2->ParticleFloatDataStride) {
    local_e8._4_4_ = param_2->ParticleFloatDataStride;
  }
  local_108 = param_2->DynamicDataSprites->Material;
  if ((local_108 == (FMaterialRenderProxy *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("MaterialRenderProxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererSprites.cpp"
                          ,0x367,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar5 = (param_6->CutoutGeometrySRV).Reference;
  local_e8._0_4_ = param_6->CutoutParameters;
  local_e8._24_8_ = GFNiagaraNullCutoutVertexBuffer._40_8_;
  if (pFVar5 != (FRHIShaderResourceView *)0x0) {
    local_e8._24_8_ = pFVar5;
  }
  local_154 = 0xffffffff;
  pFVar5 = (param_6->SortedIndicesSRV).Reference;
  local_e8._8_4_ = param_6->AlignmentMode;
  local_e8._12_4_ = param_6->FacingMode;
  local_b8 = (FRHIShaderResourceView *)GFNiagaraNullSortedIndicesVertexBuffer._40_8_;
  if (pFVar5 != (FRHIShaderResourceView *)0x0) {
    local_b8 = pFVar5;
  }
  local_e8._16_4_ = param_6->SortedIndicesOffset;
  local_128.Buffer.Reference = (FRHIBuffer *)0x0;
  local_128.SRV.Reference = (FRHIShaderResourceView *)0x0;
  if ((this->SourceMode == Particles) && (param_8 != 0xffffffff)) {
    pFVar6 = param_5->ComputeDispatchInterface;
    if ((pFVar6 == (FNiagaraGpuComputeDispatchInterface *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ComputeDispatchInterface",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererSprites.cpp"
                            ,0x374,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    bVar11 = IsInParallelRenderingThread();
    if ((!bVar11) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInParallelRenderingThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                            ,0x6a,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    TVar3 = param_2->SourceParticleData->GPUDataReadyStage;
    bVar11 = FSceneView::IsInstancedStereoPass(param_4);
    pFVar14 = FNiagaraGPUInstanceCountManager::AddDrawIndirect
                        (&pFVar6->GPUInstanceCounterManager,&local_a0,param_1,param_8,
                         this->NumIndicesPerInstance,0,bVar11,param_9,TVar3);
    this_04.Reference = local_128.Buffer.Reference;
    if (&local_128 != pFVar14) {
      this_04.Reference = (pFVar14->Buffer).Reference;
      (pFVar14->Buffer).Reference = (FRHIBuffer *)0x0;
    }
    pTVar1 = &pFVar14->SRV;
    this_03.Reference = local_128.SRV.Reference;
    if (&local_128.SRV != pTVar1) {
      this_03.Reference = pTVar1->Reference;
      pTVar1->Reference = (FRHIShaderResourceView *)0x0;
    }
    local_154 = pFVar14->Offset;
    if (local_a0.SRV.Reference != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)local_a0.SRV.Reference);
    }
    if (local_a0.Buffer.Reference != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_a0.Buffer.Reference);
    }
    if (local_154 != 0xffffffff) {
      local_e8._20_4_ = local_154 >> 2;
      local_b0.Data = (FScriptContainerElement *)this_03.Reference;
      goto LAB_14939a476;
    }
  }
  else {
    this_03.Reference = (FRHIShaderResourceView *)0x0;
    this_04.Reference = (FRHIBuffer *)0x0;
  }
  local_b0.Data = (FScriptContainerElement *)GFNiagaraNullSortedIndicesVertexBuffer._40_8_;
  local_e8._20_4_ = 0;
LAB_14939a476:
  pFVar15 = FNiagaraSpriteVFLooseParameters::GetStructMetadata();
  if (((pFVar15->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLayoutInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                          ,0x17c,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  TVar16 = RHICreateUniformBuffer
                     (&local_110,(FRHIUniformBufferLayout *)local_e8,
                      (EUniformBufferUsage)(pFVar15->Layout).Reference,ValidateResources);
  pFVar19 = (FRHIUniformBuffer *)(TVar16.Reference)->_padding_;
  if (pFVar19 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar19);
    pFVar15 = FNiagaraSpriteVFLooseParameters::GetStructMetadata();
    if (((pFVar15->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLayoutInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                            ,0x17c,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((pFVar15->Layout).Reference != (pFVar19->Layout).Reference) {
      pFVar15 = FNiagaraSpriteVFLooseParameters::GetStructMetadata();
      if (((pFVar15->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsLayoutInitialized()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                              ,0x177,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x96,
                          L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                         );
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
  }
  if (local_110 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_110);
  }
  this_00 = (param_6->LooseParameterUniformBuffer).Reference;
  if (this_00 != pFVar19) {
    (param_6->LooseParameterUniformBuffer).Reference = pFVar19;
    if (pFVar19 != (FRHIUniformBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar19);
    }
    if (this_00 != (FRHIUniformBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if (pFVar19 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar19);
  }
  param_3->VertexFactory = (FVertexFactory *)param_6;
  if (((param_5->_padding_ & 0x20000000000) == 0) || (this->bCastShadows == 0)) {
    uVar22 = 0;
  }
  else {
    uVar22 = 4;
  }
  uVar4 = *(uint *)&param_3->field_0xd4;
  param_3->CastShadow = uVar22 >> 2;
  if (((param_5->_padding_ & 0x20000000000) == 0) || (uVar12 = 0x800000, this->bCastShadows == 0)) {
    uVar12 = 0;
  }
  *(uint *)&param_3->field_0xd4 = uVar4 & 0xff7fffdb | uVar22 | uVar12;
  *(uint *)&param_3->field_0xd4 =
       ((byte)param_5->_padding_ & 1 ^ (uVar4 & 0xff7fffda | uVar22 | uVar12)) & 0xfffffc7f;
  EVar13 = FPrimitiveSceneProxy::GetDepthPriorityGroup((FPrimitiveSceneProxy *)param_5,param_4);
  uVar22 = (EVar13 << 10 ^ *(uint *)&param_3->field_0xd4) & 0x1c00 ^ *(uint *)&param_3->field_0xd4;
  *(uint *)&param_3->field_0xd4 = uVar22 | 0x2000;
  lVar10 = param_5->_padding_;
  param_3->SegmentIndex = 0;
  *(uint *)&param_3->field_0xd4 =
       -(uint)((lVar10 & 0x600) != 0) & 0x4000 | uVar22 & 0xffffbfff | 0x2000;
  pFVar18 = local_108;
  if ((param_4->Family->EngineShowFlags).Wireframe != 0) {
    pUVar17 = UMaterial::GetDefaultMaterial(MD_Surface);
    pFVar18 = (FMaterialRenderProxy *)(**(code **)(pUVar17->_padding_ + 0x310))(pUVar17);
  }
  param_3->MaterialRenderProxy = pFVar18;
  if (((param_3->Elements).ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar7 = (param_3->Elements).AllocatorInstance.SecondaryData;
  auVar23[4] = '\0';
  auVar23[5] = '\0';
  auVar23[6] = '\0';
  auVar23[7] = '\0';
  auVar23._0_4_ = param_7;
  local_58 = 0;
  if (FVar7 != (ForElementType<FMeshBatchElement>)0x0) {
    param_3 = (FMeshBatch *)FVar7;
  }
  local_88._s_0.X = 0.0;
  local_88._s_0.Y = 0.0;
  *(TGlobalResource<FParticleIndexBuffer,1> **)((longlong)param_3 + 0x18) = &GParticleIndexBuffer;
  puVar2 = (uchar *)((longlong)param_3 + 0x58);
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  uVar22 = this->NumIndicesPerInstance;
  local_88._s_0.Z = 0.0;
  FStack_70.Data = (FScriptContainerElement *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  uStack_60._0_4_ = 0;
  uStack_60._4_4_ = 0;
  *(uint *)((longlong)param_3 + 0x60) = param_7;
  *(uint *)((longlong)param_3 + 0x5c) = uVar22 / 3;
  puVar2 = (uchar *)((longlong)param_3 + 0x68);
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  puVar2[4] = '\0';
  puVar2[5] = '\0';
  puVar2[6] = '\0';
  puVar2[7] = '\0';
  local_57 = 0;
  local_53 = 0;
  local_51 = 0;
  pFVar19 = FNiagaraSceneProxy::GetCustomUniformBuffer
                      (param_5,param_1,(bool)((byte)((uint)this->_padding_ >> 2) & 1),
                       (TBox<double> *)&local_88._s_0);
  *(FRHIUniformBuffer **)param_3 = pFVar19;
  if (local_154 != 0xffffffff) {
    *(FRHIBuffer **)((longlong)param_3 + 0x48) = this_04.Reference;
    *(uint *)((longlong)param_3 + 0x50) = local_154;
    puVar2 = (uchar *)((longlong)param_3 + 0x5c);
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
  }
  if (this->NumCutoutVertexPerSubImage == 8) {
    *(TGlobalResource<FSixTriangleParticleIndexBuffer,1> **)((longlong)param_3 + 0x18) =
         &GSixTriangleParticleIndexBuffer;
  }
  if ((param_7 != 0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar21 = StatPtr_STAT_NiagaraNumSprites;
    if (StatPtr_STAT_NiagaraNumSprites == (FThreadSafeStaticStat<FStat_STAT_NiagaraNumSprites>)0x0)
    {
      pFVar20 = ::FName::FName(&local_a8,"STAT_NiagaraNumSprites");
      FVar21 = (FThreadSafeStaticStat<FStat_STAT_NiagaraNumSprites>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraNumSprites,*pFVar20,
                          L"NumSprites","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
                          ST_int64,false,false,MCR_Invalid);
    }
    FVar8 = *(FName *)FVar21;
    if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      local_f8.NameAndInfo.Number = FVar8.Number & 0xffffafff | 0xa000;
      local_100 = FVar8;
      local_f8.StatData.Pad = auVar23;
      local_f8.NameAndInfo.Index.Value = FVar8.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_01,&local_f8);
      FStatsTrace::Add(&local_100,(long64)auVar23);
      if (this_01->ScopeCount == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  if (this_03.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_03.Reference);
  }
  if (this_04.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_04.Reference);
  }
  return;
}

// CreateRenderThreadResources @ 14939aa10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FNiagaraRendererSprites::CreateRenderThreadResources
          (FNiagaraRendererSprites *this,FRHICommandListBase *param_1)

{
  longlong *this_00;
  int iVar1;
  FRHIBuffer *this_01;
  FRayTracingGeometrySegment *pFVar2;
  bool bVar3;
  FDebugName *pFVar4;
  undefined1 auStackY_168 [32];
  FRayTracingGeometryInitializer local_128;
  FDebugName local_b8;
  FRHIBuffer *local_a8;
  undefined8 local_a0;
  uint local_98;
  undefined4 local_94;
  ERayTracingGeometryInitializerType local_90;
  FRayTracingGeometrySegment *local_88;
  undefined8 local_80;
  FResourceArrayUploadInterface *local_78;
  uint local_70 [6];
  FRHIRayTracingGeometry *local_58;
  FDebugName local_50;
  FName local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  (**(code **)((this->CutoutVertexBuffer)._padding_ + 0x18))();
  bVar3 = IsRayTracingAllowed();
  if (bVar3) {
    local_a8 = (FRHIBuffer *)0x0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = Rendering;
    local_88 = (FRayTracingGeometrySegment *)0x0;
    local_80 = 0;
    local_78 = (FResourceArrayUploadInterface *)0x0;
    local_58 = (FRHIRayTracingGeometry *)0x0;
    local_94 = 0x10000;
    local_70[0] = 0xffffffff;
    local_70[1] = 0xffffffff;
    local_70[2] = 0xffffffff;
    local_70[3] = 0xffffffff;
    local_70[4] = 0xffffffff;
    local_70[5] = 0xffffffff;
    FDebugName::FDebugName(&local_50);
    local_44.ComparisonIndex.Value = 0;
    local_44.Number = 0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FName::FName(&::DebugName,"FNiagaraRendererSprites");
        _Init_thread_footer(&::_TSS0);
      }
    }
    iVar1 = DebugNumber;
    DebugNumber = DebugNumber + 1;
    pFVar4 = FDebugName::FDebugName(&local_b8,::DebugName,iVar1);
    this_01 = local_a8;
    local_50.Name = pFVar4->Name;
    local_50.Number = pFVar4->Number;
    if ((local_a8 != (FRHIBuffer *)0x0) &&
       (local_a8 = (FRHIBuffer *)0x0, this_01 != (FRHIBuffer *)0x0)) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
    local_128.bAllowUpdate = false;
    local_94 = CONCAT22(local_94._2_2_,1);
    local_a0 = local_a0 & 0xffffffff;
    this_00 = &this->_padding_;
    local_128.bFastBuild = (bool)1;
    local_128.GeometryType = RTGT_Triangles;
    local_128.IndexBuffer.Reference = local_a8;
    if (local_a8 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_a8);
      local_128.bFastBuild = (bool)(undefined1)local_94;
      local_128.GeometryType = local_a0._4_4_;
      local_128.bAllowUpdate = (bool)local_94._1_1_;
    }
    pFVar2 = local_88;
    iVar1 = (int)local_80;
    local_128.IndexBufferOffset = (uint)local_a0;
    local_128.TotalPrimitiveCount = local_98;
    local_128.bAllowCompaction = (bool)local_94._2_1_;
    local_128.bTemplate = (bool)local_94._3_1_;
    local_128.Type = local_90;
    local_128.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.Segments.ArrayNum = (int)local_80;
    if ((int)local_80 == 0) {
      local_128.Segments.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,(int)local_80,0,&local_128.Segments.AllocatorInstance,(int)local_80,
                 &local_128.Segments.ArrayMax);
      ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
                (local_128.Segments.AllocatorInstance.Data,pFVar2,iVar1);
    }
    local_128.OfflineData = local_78;
    local_128.SourceGeometry = local_58;
    local_128.DebugName.Number = local_50.Number;
    local_128.OfflineDataHeader.Reserved[0] = local_70[0];
    local_128.OfflineDataHeader.Reserved[1] = local_70[1];
    local_128.OfflineDataHeader.Reserved[2] = local_70[2];
    local_128.OfflineDataHeader.Reserved[3] = local_70[3];
    local_128.OwnerName = local_44;
    local_128.OfflineDataHeader.Reserved[4] = local_70[4];
    local_128.OfflineDataHeader.Reserved[5] = local_70[5];
    local_128.DebugName.Name = local_50.Name;
    FRayTracingGeometry::SetInitializer((FRayTracingGeometry *)this_00,&local_128);
    (**(code **)(*this_00 + 0x18))(this_00,param_1);
    DestructItems<FRayTracingGeometrySegment,int>(local_88,(int)local_80);
    if (local_88 != (FRayTracingGeometrySegment *)0x0) {
      FMemory::Free(local_88);
    }
    if (local_a8 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_a8);
    }
  }
  return;
}

// CreateViewUniformBuffer @ 14939b0a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TUniformBufferRef<FNiagaraSpriteUniformParameters> __thiscall
FNiagaraRendererSprites::CreateViewUniformBuffer
          (FNiagaraRendererSprites *this,FParticleSpriteRenderData *param_1,FSceneView *param_2,
          FSceneViewFamily *param_3,FNiagaraSceneProxy *param_4,FNiagaraSpriteVertexFactory *param_5
          )

{
  FSharedReferencer<1> *pFVar1;
  undefined8 *puVar2;
  float *pfVar3;
  double dVar4;
  double dVar5;
  FRHIShaderResourceView *pFVar6;
  ENiagaraRendererPixelCoverageMode EVar7;
  ENiagaraRendererSourceDataMode EVar8;
  int iVar9;
  TUniformBufferRef<FViewUniformShaderParameters> TVar10;
  longlong lVar11;
  FRHIResource *this_00;
  code *pcVar12;
  float fVar13;
  bool bVar14;
  TVector4<float> *pTVar15;
  TVector<float> *pTVar16;
  TUniformBufferRef<FNiagaraSpriteUniformParameters> TVar17;
  undefined8 uVar18;
  FShaderParametersMetadata *pFVar19;
  TRefCountPtr<FRHIUniformBuffer> TVar20;
  uint uVar21;
  uint uVar22;
  TVector2<float>_u_0 TVar23;
  int *piVar24;
  undefined4 uVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  int iVar29;
  float fVar30;
  undefined8 uVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  FRHIResource *local_res8;
  TUniformBufferRef<FNiagaraSpriteUniformParameters> local_res10;
  FSceneView *local_res18;
  longlong in_stack_00000038;
  undefined1 local_318 [16];
  undefined8 local_308;
  ForAnyElementType FStack_300;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  undefined4 uStack_2ec;
  int local_2e8;
  int iStack_2e4;
  ForAnyElementType FStack_2e0;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  undefined8 local_2c8;
  float local_2c0;
  undefined4 local_2bc;
  undefined8 local_2b8;
  ForAnyElementType FStack_2b0;
  ulonglong local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  TVector2<float>_u_0 local_298;
  TVector2<float>_u_0 local_290;
  uint local_288;
  uint local_284;
  uint local_280;
  uint local_27c;
  uint local_278;
  uint local_274;
  uint local_270;
  uint local_26c;
  undefined8 local_268;
  uint local_260;
  undefined8 local_25c;
  undefined8 local_254;
  uint local_24c;
  uint local_248;
  uint local_244;
  uint local_240;
  uint local_23c;
  uint local_238;
  uint local_234;
  undefined8 local_230;
  uint local_228;
  undefined8 local_224;
  float local_218;
  float fStack_214;
  float fStack_210;
  undefined4 uStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  float local_1b0;
  undefined8 local_1ac;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  uint local_e8;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined4 local_c8;
  TVector<double>_u_0 local_b8;
  TVector4<float> local_98 [6];
  
  local_res10 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)param_1;
  local_res18 = param_2;
  memset(local_318,0,0x260);
  bVar14 = FNiagaraRenderer::UseLocalSpace((FNiagaraRenderer *)this,(FNiagaraSceneProxy *)param_5);
  uVar25 = _UNK_15068964c;
  fVar33 = _UNK_150689648;
  fVar34 = _UNK_150689644;
  fVar30 = ___xmm_3f800000000000000000000000000000;
  fVar13 = __real_3f800000;
  local_b8._s_0.Z = (double)param_5[1]._padding_;
  local_29c = *(undefined4 *)((longlong)&param_4->_padding_ + 4);
  local_2e8 = ___xmm_000000003f8000000000000000000000;
  iStack_2e4 = _UNK_150689534;
  FStack_2e0.Data = _UNK_150689538;
  local_b8._s_0.X = (double)param_5[1]._padding_;
  local_b8._s_0.Y = (double)param_5[1]._padding_;
  local_318._0_4_ = ZEXT14(bVar14);
  local_2a8 = 0x3f800000;
  local_308 = CONCAT44(_UNK_150689644,___xmm_3f800000000000000000000000000000);
  FStack_300.Data._4_4_ = _UNK_15068964c;
  FStack_300.Data._0_4_ = _UNK_150689648;
  local_2a0 = 0;
  local_2f8 = ___xmm_3f800000000000000000000000000000;
  fStack_2f4 = _UNK_150689644;
  fStack_2f0 = _UNK_150689648;
  uStack_2ec = _UNK_15068964c;
  pTVar15 = FNiagaraRenderer::CalcMacroUVParameters
                      (local_98,(FSceneView *)param_3,(TVector<double> *)&local_b8._s_0,
                       this->MacroUVRadius);
  local_2b8 = *(undefined8 *)&pTVar15->field0_0x0;
  FStack_2b0.Data = *(FScriptContainerElement **)((longlong)&pTVar15->field0_0x0 + 8);
  local_2c8._0_4_ = 0;
  local_2c8._4_4_ = 0;
  local_2c0 = 0.0;
  local_2bc = 0;
  if (this->bRemoveHMDRollInVR == 0) {
    local_2bc = 0x3f800000;
  }
  local_2d8 = (this->SubImageSize).field0_0x0._s_0.X;
  local_2d4 = (this->SubImageSize).field0_0x0._s_0.Y;
  local_2d0 = fVar13 / local_2d8;
  local_2cc = fVar13 / local_2d4;
  if (!bVar14) {
    dVar4 = *(double *)&param_5->SortedIndicesOffset;
    dVar5 = (double)param_5[1]._padding_;
    pFVar6 = (param_5->SortedIndicesSRV).Reference;
    pTVar16 = FNiagaraSceneProxy::GetLWCRenderTile((FNiagaraSceneProxy *)param_5);
    fVar34 = (float)(dVar4 - (double)((pTVar16->field0_0x0)._s_0.Y * __real_4a000000));
    uVar25 = 0x3f800000;
    fVar33 = (float)(dVar5 - (double)((pTVar16->field0_0x0)._s_0.Z * __real_4a000000));
    fVar30 = (float)((double)pFVar6 - (double)((pTVar16->field0_0x0)._s_0.X * __real_4a000000));
  }
  local_1f8 = 0x4248000042480000;
  local_1e8 = 0x3f8000003f800000;
  local_298 = (this->PivotInUVSpace).field0_0x0;
  local_1d0 = 0;
  local_1c0 = 0;
  local_1d8 = 0;
  local_1c8 = 0;
  local_290 = local_298;
  local_218 = fVar30;
  fStack_214 = fVar34;
  fStack_210 = fVar33;
  uStack_20c = uVar25;
  local_208 = fVar30;
  fStack_204 = fVar34;
  fStack_200 = fVar33;
  uStack_1fc = uVar25;
  local_1f0 = local_1f8;
  pTVar16 = FNiagaraSceneProxy::GetLWCRenderTile((FNiagaraSceneProxy *)param_5);
  uVar26 = 0xffffffff;
  iVar29 = 0;
  local_1b8 = *(undefined8 *)&pTVar16->field0_0x0;
  local_1b0 = (pTVar16->field0_0x0)._s_0.Z;
  local_188 = 0;
  uStack_180 = 0;
  pFVar1 = &param_3[2].SceneTexturesCaptureInfo.SharedReferenceCount;
  local_1ac = 0;
  local_178 = 0;
  local_284 = 0xffffffff;
  local_27c = 0xffffffff;
  local_274 = 0xffffffff;
  local_26c = 0xffffffff;
  local_248 = 0xffffffff;
  local_198 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_190 = _UNK_15076b1f8;
  local_168 = ___xmm_0000000000000000000000003f800000;
  uStack_160 = _UNK_1506894f8;
  local_158 = ___xmm_0000000000000000000000003f800000;
  uStack_150 = _UNK_1506894f8;
  local_148 = ___xmm_0000000000000000000000003f800000;
  uStack_140 = _UNK_1506894f8;
  local_138 = ___xmm_0000000000000000000000003f800000;
  uStack_130 = _UNK_1506894f8;
  local_128 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_120 = _UNK_15076b1f8;
  local_118 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_110 = _UNK_15076b1f8;
  local_108 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_100 = _UNK_15076b1f8;
  local_f8 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_f0 = _UNK_15076b1f8;
  local_240 = 0xffffffff;
  local_234 = 0xffffffff;
  local_228 = 0xffffffff;
  if ((__real_3ff0000000000000 < (double)pFVar1->ReferenceController ||
       __real_3ff0000000000000 == (double)pFVar1->ReferenceController) ||
     (this->PixelCoverageMode == Disabled)) {
    local_e8 = 0;
    local_d8 = 0.0;
    fStack_d4 = local_d8;
    fStack_d0 = local_d8;
    fStack_cc = local_d8;
    goto LAB_14939b4dd;
  }
  EVar7 = this->PixelCoverageMode;
  local_d8 = 0.0;
  fStack_d4 = 0.0;
  fStack_d0 = 0.0;
  fStack_cc = 0.0;
  if (EVar7 == Automatic) {
    local_e8 = (uint)*(byte *)((longlong)&param_2->State + 4);
    if (local_e8 == 0) goto LAB_14939b4dd;
    bVar14 = IsTranslucentOnlyBlendMode(*(EBlendMode *)&param_2->State);
    if (bVar14) goto LAB_14939b496;
    bVar14 = IsAdditiveBlendMode(*(EBlendMode *)&param_2->State);
    if (!bVar14) {
      local_e8 = 0;
      goto LAB_14939b4dd;
    }
  }
  else {
    local_e8 = 1;
    if (EVar7 != Enabled_RGBA) {
      if (EVar7 == Enabled_RGB) {
        local_d8 = this->PixelCoverageBlend;
        fStack_d4 = local_d8;
        fStack_d0 = local_d8;
        goto LAB_14939b4dd;
      }
      if (EVar7 != Enabled_A) goto LAB_14939b4dd;
LAB_14939b496:
      fStack_cc = this->PixelCoverageBlend;
      goto LAB_14939b4dd;
    }
  }
  local_d8 = this->PixelCoverageBlend;
  fStack_d4 = local_d8;
  fStack_d0 = local_d8;
  fStack_cc = local_d8;
LAB_14939b4dd:
  EVar8 = this->SourceMode;
  local_c8 = 0;
  if (EVar8 == Particles) {
    TVar10 = param_2->ViewUniformBuffer;
    bVar14 = IsInParallelRenderingThread();
    if ((!bVar14) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInParallelRenderingThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraRendererProperties.h"
                            ,0x9b,L""), bVar14)) {
      pcVar12 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
      return TVar17;
    }
    lVar11 = *(longlong *)((longlong)TVar10 + 0x10);
    iVar9 = *(int *)((longlong)TVar10 + 0x18);
    if ((iVar9 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar14)) {
      pcVar12 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
      return TVar17;
    }
    if ((iVar9 < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar14)) {
      pcVar12 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
      return TVar17;
    }
    local_288 = 0xffffffff;
    if (*(ushort *)(lVar11 + 2) != 0xffff) {
      local_288 = (uint)*(ushort *)(lVar11 + 2);
    }
    local_288 = -(uint)(*(char *)(lVar11 + 7) != '\0') & 0x80000000 | local_288;
    if ((iVar9 < 3) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar14)) {
      pcVar12 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
      return TVar17;
    }
    uVar22 = 0xffffffff;
    local_280 = 0xffffffff;
    if (*(ushort *)(lVar11 + 0x12) != 0xffff) {
      local_280 = (uint)*(ushort *)(lVar11 + 0x12);
    }
    local_280 = -(uint)(*(char *)(lVar11 + 0x17) != '\0') & 0x80000000 | local_280;
    if ((iVar9 < 4) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar14)) {
      pcVar12 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
      return TVar17;
    }
    local_278 = uVar22;
    if (*(ushort *)(lVar11 + 0x1a) != 0xffff) {
      local_278 = (uint)*(ushort *)(lVar11 + 0x1a);
    }
    local_278 = -(uint)(*(char *)(lVar11 + 0x1f) != '\0') & 0x80000000 | local_278;
    if ((iVar9 < 5) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar14)) {
      pcVar12 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
      return TVar17;
    }
    local_270 = uVar22;
    if (*(ushort *)(lVar11 + 0x22) != 0xffff) {
      local_270 = (uint)*(ushort *)(lVar11 + 0x22);
    }
    local_270 = -(uint)(*(char *)(lVar11 + 0x27) != '\0') & 0x80000000 | local_270;
    if ((iVar9 < 2) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar14)) {
      pcVar12 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
      return TVar17;
    }
    uVar21 = uVar22;
    if (*(ushort *)(lVar11 + 10) != 0xffff) {
      uVar21 = (uint)*(ushort *)(lVar11 + 10);
    }
    local_268 = CONCAT44(-(uint)(*(char *)(lVar11 + 0xf) != '\0') & 0x80000000 | uVar21,
                         (undefined4)local_268);
    if ((iVar9 < 9) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar14)) {
      pcVar12 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
      return TVar17;
    }
    uVar21 = uVar22;
    if (*(ushort *)(lVar11 + 0x42) != 0xffff) {
      uVar21 = (uint)*(ushort *)(lVar11 + 0x42);
    }
    local_25c = CONCAT44(local_25c._4_4_,
                         -(uint)(*(char *)(lVar11 + 0x47) != '\0') & 0x80000000 | uVar21);
    if ((iVar9 < 10) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar14)) {
      pcVar12 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
      return TVar17;
    }
    uVar21 = uVar22;
    if (*(ushort *)(lVar11 + 0x4a) != 0xffff) {
      uVar21 = (uint)*(ushort *)(lVar11 + 0x4a);
    }
    local_25c = CONCAT44(-(uint)(*(char *)(lVar11 + 0x4f) != '\0') & 0x80000000 | uVar21,
                         (undefined4)local_25c);
    if ((iVar9 < 0xb) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar14)) {
      pcVar12 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
      return TVar17;
    }
    uVar21 = uVar22;
    if (*(ushort *)(lVar11 + 0x52) != 0xffff) {
      uVar21 = (uint)*(ushort *)(lVar11 + 0x52);
    }
    local_254 = CONCAT44(local_254._4_4_,
                         -(uint)(*(char *)(lVar11 + 0x57) != '\0') & 0x80000000 | uVar21);
    if ((iVar9 < 0xc) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar14)) {
      pcVar12 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
      return TVar17;
    }
    uVar21 = uVar22;
    if (*(ushort *)(lVar11 + 0x5a) != 0xffff) {
      uVar21 = (uint)*(ushort *)(lVar11 + 0x5a);
    }
    local_254 = CONCAT44(-(uint)(*(char *)(lVar11 + 0x5f) != '\0') & 0x80000000 | uVar21,
                         (undefined4)local_254);
    if ((iVar9 < 8) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar14)) {
      pcVar12 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
      return TVar17;
    }
    uVar21 = uVar22;
    if (*(ushort *)(lVar11 + 0x3a) != 0xffff) {
      uVar21 = (uint)*(ushort *)(lVar11 + 0x3a);
    }
    local_268 = CONCAT44(local_268._4_4_,
                         -(uint)(*(char *)(lVar11 + 0x3f) != '\0') & 0x80000000 | uVar21);
    if ((iVar9 < 6) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar14)) {
      pcVar12 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
      return TVar17;
    }
    local_24c = uVar22;
    if (*(ushort *)(lVar11 + 0x2a) != 0xffff) {
      local_24c = (uint)*(ushort *)(lVar11 + 0x2a);
    }
    local_24c = -(uint)(*(char *)(lVar11 + 0x2f) != '\0') & 0x80000000 | local_24c;
    if ((iVar9 < 7) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar14)) {
      pcVar12 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
      return TVar17;
    }
    local_244 = uVar22;
    if (*(ushort *)(lVar11 + 0x32) != 0xffff) {
      local_244 = (uint)*(ushort *)(lVar11 + 0x32);
    }
    local_244 = -(uint)(*(char *)(lVar11 + 0x37) != '\0') & 0x80000000 | local_244;
    if ((iVar9 < 0xd) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar14)) {
      pcVar12 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
      return TVar17;
    }
    local_238 = uVar22;
    if (*(ushort *)(lVar11 + 0x62) != 0xffff) {
      local_238 = (uint)*(ushort *)(lVar11 + 0x62);
    }
    local_238 = -(uint)(*(char *)(lVar11 + 0x67) != '\0') & 0x80000000 | local_238;
    if ((iVar9 < 0xe) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar14)) {
      pcVar12 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
      return TVar17;
    }
    uVar21 = uVar22;
    if (*(ushort *)(lVar11 + 0x6a) != 0xffff) {
      uVar21 = (uint)*(ushort *)(lVar11 + 0x6a);
    }
    local_230 = CONCAT44(local_230._4_4_,
                         -(uint)(*(char *)(lVar11 + 0x6f) != '\0') & 0x80000000 | uVar21);
    if ((iVar9 < 0xf) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar14)) {
      pcVar12 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
      return TVar17;
    }
    uVar21 = uVar22;
    if (*(ushort *)(lVar11 + 0x72) != 0xffff) {
      uVar21 = (uint)*(ushort *)(lVar11 + 0x72);
    }
    local_230 = CONCAT44(-(uint)(*(char *)(lVar11 + 0x77) != '\0') & 0x80000000 | uVar21,
                         (undefined4)local_230);
    if ((iVar9 < 0x12) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar14)) {
      pcVar12 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
      return TVar17;
    }
    uVar21 = uVar22;
    if (*(ushort *)(lVar11 + 0x8a) != 0xffff) {
      uVar21 = (uint)*(ushort *)(lVar11 + 0x8a);
    }
    local_224 = CONCAT44(local_224._4_4_,
                         -(uint)(*(char *)(lVar11 + 0x8f) != '\0') & 0x80000000 | uVar21);
    if ((iVar9 < 0x10) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar14)) {
      pcVar12 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
      return TVar17;
    }
    uVar21 = uVar22;
    if (*(ushort *)(lVar11 + 0x7a) != 0xffff) {
      uVar21 = (uint)*(ushort *)(lVar11 + 0x7a);
    }
    local_224 = CONCAT44(-(uint)(*(char *)(lVar11 + 0x7f) != '\0') & 0x80000000 | uVar21,
                         (undefined4)local_224);
    param_2 = local_res18;
    uVar21 = local_228;
    if (this->bAccurateMotionVectors != 0) {
      local_c8 = 1;
      if ((iVar9 < 0x13) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar12 = (code *)swi(3);
        TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
        return TVar17;
      }
      uVar21 = uVar22;
      if (*(ushort *)(lVar11 + 0x92) != 0xffff) {
        uVar21 = (uint)*(ushort *)(lVar11 + 0x92);
      }
      uVar21 = -(uint)(*(char *)(lVar11 + 0x97) != '\0') & 0x80000000 | uVar21;
      if (uVar21 == 0xffffffff) {
        if ((iVar9 < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
          return TVar17;
        }
        uVar21 = 0xffffffff;
        if (*(ushort *)(lVar11 + 2) != 0xffff) {
          uVar21 = (uint)*(ushort *)(lVar11 + 2);
        }
        uVar21 = -(uint)(*(char *)(lVar11 + 7) != '\0') & 0x80000000 | uVar21;
      }
      local_284 = uVar21;
      if ((iVar9 < 0x14) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar12 = (code *)swi(3);
        TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
        return TVar17;
      }
      uVar21 = 0xffffffff;
      if (*(ushort *)(lVar11 + 0x9a) != 0xffff) {
        uVar21 = (uint)*(ushort *)(lVar11 + 0x9a);
      }
      uVar21 = -(uint)(*(char *)(lVar11 + 0x9f) != '\0') & 0x80000000 | uVar21;
      if (uVar21 == 0xffffffff) {
        if ((iVar9 < 3) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
          return TVar17;
        }
        uVar21 = uVar22;
        if (*(ushort *)(lVar11 + 0x12) != 0xffff) {
          uVar21 = (uint)*(ushort *)(lVar11 + 0x12);
        }
        uVar21 = -(uint)(*(char *)(lVar11 + 0x17) != '\0') & 0x80000000 | uVar21;
      }
      local_27c = uVar21;
      if ((iVar9 < 0x15) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar12 = (code *)swi(3);
        TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
        return TVar17;
      }
      uVar21 = uVar22;
      if (*(ushort *)(lVar11 + 0xa2) != 0xffff) {
        uVar21 = (uint)*(ushort *)(lVar11 + 0xa2);
      }
      uVar21 = -(uint)(*(char *)(lVar11 + 0xa7) != '\0') & 0x80000000 | uVar21;
      if (uVar21 == 0xffffffff) {
        if ((iVar9 < 4) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
          return TVar17;
        }
        uVar21 = 0xffffffff;
        if (*(ushort *)(lVar11 + 0x1a) != 0xffff) {
          uVar21 = (uint)*(ushort *)(lVar11 + 0x1a);
        }
        uVar21 = -(uint)(*(char *)(lVar11 + 0x1f) != '\0') & 0x80000000 | uVar21;
      }
      local_274 = uVar21;
      if ((iVar9 < 0x16) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar12 = (code *)swi(3);
        TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
        return TVar17;
      }
      uVar21 = 0xffffffff;
      if (*(ushort *)(lVar11 + 0xaa) != 0xffff) {
        uVar21 = (uint)*(ushort *)(lVar11 + 0xaa);
      }
      uVar21 = -(uint)(*(char *)(lVar11 + 0xaf) != '\0') & 0x80000000 | uVar21;
      if (uVar21 == 0xffffffff) {
        if ((iVar9 < 5) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
          return TVar17;
        }
        uVar21 = uVar22;
        if (*(ushort *)(lVar11 + 0x22) != 0xffff) {
          uVar21 = (uint)*(ushort *)(lVar11 + 0x22);
        }
        uVar21 = -(uint)(*(char *)(lVar11 + 0x27) != '\0') & 0x80000000 | uVar21;
      }
      local_26c = uVar21;
      if ((iVar9 < 0x17) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar12 = (code *)swi(3);
        TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
        return TVar17;
      }
      uVar21 = uVar22;
      if (*(ushort *)(lVar11 + 0xb2) != 0xffff) {
        uVar21 = (uint)*(ushort *)(lVar11 + 0xb2);
      }
      uVar21 = -(uint)(*(char *)(lVar11 + 0xb7) != '\0') & 0x80000000 | uVar21;
      if (uVar21 == 0xffffffff) {
        if ((iVar9 < 6) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
          return TVar17;
        }
        uVar21 = 0xffffffff;
        if (*(ushort *)(lVar11 + 0x2a) != 0xffff) {
          uVar21 = (uint)*(ushort *)(lVar11 + 0x2a);
        }
        uVar21 = -(uint)(*(char *)(lVar11 + 0x2f) != '\0') & 0x80000000 | uVar21;
      }
      local_248 = uVar21;
      if ((iVar9 < 0x18) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar12 = (code *)swi(3);
        TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
        return TVar17;
      }
      uVar21 = 0xffffffff;
      if (*(ushort *)(lVar11 + 0xba) != 0xffff) {
        uVar21 = (uint)*(ushort *)(lVar11 + 0xba);
      }
      uVar21 = -(uint)(*(char *)(lVar11 + 0xbf) != '\0') & 0x80000000 | uVar21;
      if (uVar21 == 0xffffffff) {
        if ((iVar9 < 7) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
          return TVar17;
        }
        uVar21 = uVar22;
        if (*(ushort *)(lVar11 + 0x32) != 0xffff) {
          uVar21 = (uint)*(ushort *)(lVar11 + 0x32);
        }
        uVar21 = -(uint)(*(char *)(lVar11 + 0x37) != '\0') & 0x80000000 | uVar21;
      }
      local_240 = uVar21;
      if ((iVar9 < 0x19) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar12 = (code *)swi(3);
        TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
        return TVar17;
      }
      if (*(ushort *)(lVar11 + 0xc2) != 0xffff) {
        uVar22 = (uint)*(ushort *)(lVar11 + 0xc2);
      }
      uVar22 = -(uint)(*(char *)(lVar11 + 199) != '\0') & 0x80000000 | uVar22;
      if (uVar22 == 0xffffffff) {
        if ((iVar9 < 0xd) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
          return TVar17;
        }
        uVar22 = 0xffffffff;
        if (*(ushort *)(lVar11 + 0x62) != 0xffff) {
          uVar22 = (uint)*(ushort *)(lVar11 + 0x62);
        }
        uVar22 = -(uint)(*(char *)(lVar11 + 0x67) != '\0') & 0x80000000 | uVar22;
      }
      local_234 = uVar22;
      if ((iVar9 < 0x1a) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar12 = (code *)swi(3);
        TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
        return TVar17;
      }
      uVar21 = 0xffffffff;
      if (*(ushort *)(lVar11 + 0xca) != 0xffff) {
        uVar21 = (uint)*(ushort *)(lVar11 + 0xca);
      }
      uVar21 = -(uint)(*(char *)(lVar11 + 0xcf) != '\0') & 0x80000000 | uVar21;
      param_2 = local_res18;
      if (uVar21 == 0xffffffff) {
        if ((iVar9 < 0xf) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
          return TVar17;
        }
        if (*(ushort *)(lVar11 + 0x72) != 0xffff) {
          uVar26 = (uint)*(ushort *)(lVar11 + 0x72);
        }
        param_2 = local_res18;
        uVar21 = -(uint)(*(char *)(lVar11 + 0x77) != '\0') & 0x80000000 | uVar26;
      }
    }
  }
  else {
    uVar21 = local_228;
    if (EVar8 == Emitter) {
      local_288 = 0xffffffff;
      local_280 = 0xffffffff;
      local_278 = 0xffffffff;
      local_270 = 0xffffffff;
      local_268 = 0xffffffffffffffff;
      local_25c = 0xffffffffffffffff;
      local_254 = 0xffffffffffffffff;
      local_24c = 0xffffffff;
      local_244 = 0xffffffff;
      local_238 = 0xffffffff;
      local_230 = 0xffffffffffffffff;
      local_224 = 0xffffffffffffffff;
    }
    else if ((Emitter < EVar8) &&
            (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                ("SourceMode <= ENiagaraRendererSourceDataMode::Emitter",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererSprites.cpp"
                                 ,0x2b7,L""), uVar21 = local_228, bVar14)) {
      pcVar12 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
      return TVar17;
    }
  }
  local_228 = uVar21;
  uVar26 = this->MaterialParamValidMask;
  local_260 = uVar26;
  if (ZPULL(*(undefined4 *)&this->field_0x18c,9,1) != 0) {
    lVar11 = *(longlong *)param_2;
    piVar24 = this->VFBoundOffsetsInParamStore;
    uVar28 = ((ulonglong)(*(undefined4 *)&this->field_0x18c & 0x80) | 0x120) >> 4;
    uVar18 = local_1f8;
    TVar23 = local_298;
    uVar25 = local_1d0;
    uVar32 = local_188._4_4_;
    uVar31 = local_1d8;
    do {
      iVar9 = *piVar24;
      lVar27 = (longlong)iVar9;
      if ((iVar9 < 0) || (*(int *)(lVar11 + 0x58) <= iVar9)) {
        switch(iVar29) {
        case 0x12:
          local_208 = local_218;
          fStack_204 = fStack_214;
          fStack_200 = fStack_210;
          uStack_1fc = uStack_20c;
          break;
        case 0x13:
          local_1c8 = uVar31;
          local_1c0 = uVar25;
          break;
        case 0x14:
          local_1ac = CONCAT44((undefined4)local_1ac,(undefined4)local_1ac);
          break;
        case 0x15:
          local_1f0 = uVar18;
          break;
        case 0x16:
          local_158 = local_168;
          uStack_150 = uStack_160;
          break;
        case 0x17:
          local_138 = local_148;
          uStack_130 = uStack_140;
          break;
        case 0x18:
          uStack_180 = CONCAT44(uStack_180._4_4_,uVar32);
          break;
        case 0x19:
          local_290 = TVar23;
        }
      }
      else {
        switch(iVar29) {
        case 0:
          pfVar3 = (float *)(*(longlong *)(lVar11 + 0x50) + lVar27);
          local_218 = *pfVar3;
          fStack_214 = pfVar3[1];
          fStack_210 = *(float *)(*(longlong *)(lVar11 + 0x50) + 8 + lVar27);
          break;
        case 1:
          puVar2 = (undefined8 *)(*(longlong *)(lVar11 + 0x50) + lVar27);
          local_198 = *puVar2;
          uStack_190 = puVar2[1];
          break;
        case 2:
          uVar31 = *(undefined8 *)(*(longlong *)(lVar11 + 0x50) + lVar27);
          uVar25 = *(undefined4 *)(*(longlong *)(lVar11 + 0x50) + 8 + lVar27);
          local_1d8 = uVar31;
          local_1d0 = uVar25;
          break;
        case 3:
          local_1ac = CONCAT44(local_1ac._4_4_,
                               *(undefined4 *)(lVar27 + *(longlong *)(lVar11 + 0x50)));
          break;
        case 4:
          uVar18 = *(undefined8 *)(lVar27 + *(longlong *)(lVar11 + 0x50));
          local_1f8 = uVar18;
          break;
        case 5:
          local_168 = *(undefined8 *)(*(longlong *)(lVar11 + 0x50) + lVar27);
          uStack_160 = CONCAT44(uStack_160._4_4_,
                                *(undefined4 *)(*(longlong *)(lVar11 + 0x50) + 8 + lVar27));
          break;
        case 6:
          local_148 = *(undefined8 *)(*(longlong *)(lVar11 + 0x50) + lVar27);
          uStack_140 = CONCAT44(uStack_140._4_4_,
                                *(undefined4 *)(*(longlong *)(lVar11 + 0x50) + 8 + lVar27));
          break;
        case 7:
          local_178 = *(undefined4 *)(lVar27 + *(longlong *)(lVar11 + 0x50));
          break;
        case 8:
          uVar26 = uVar26 | 0xf;
          puVar2 = (undefined8 *)(*(longlong *)(lVar11 + 0x50) + lVar27);
          local_128 = *puVar2;
          uStack_120 = puVar2[1];
          local_260 = uVar26;
          break;
        case 9:
          uVar26 = uVar26 | 0xf0;
          puVar2 = (undefined8 *)(*(longlong *)(lVar11 + 0x50) + lVar27);
          local_118 = *puVar2;
          uStack_110 = puVar2[1];
          local_260 = uVar26;
          break;
        case 10:
          uVar26 = uVar26 | 0xf00;
          puVar2 = (undefined8 *)(*(longlong *)(lVar11 + 0x50) + lVar27);
          local_108 = *puVar2;
          uStack_100 = puVar2[1];
          local_260 = uVar26;
          break;
        case 0xb:
          uVar26 = uVar26 | 0xf000;
          puVar2 = (undefined8 *)(*(longlong *)(lVar11 + 0x50) + lVar27);
          local_f8 = *puVar2;
          uStack_f0 = puVar2[1];
          local_260 = uVar26;
          break;
        case 0xc:
          uVar32 = *(undefined4 *)(lVar27 + *(longlong *)(lVar11 + 0x50));
          local_188 = CONCAT44(uVar32,(undefined4)local_188);
          break;
        case 0xd:
          local_1e8 = *(undefined8 *)(lVar27 + *(longlong *)(lVar11 + 0x50));
          break;
        case 0xe:
          TVar23 = *(TVector2<float>_u_0 *)(lVar27 + *(longlong *)(lVar11 + 0x50));
          local_298 = TVar23;
          break;
        case 0xf:
          local_188 = CONCAT44(local_188._4_4_,
                               *(undefined4 *)(lVar27 + *(longlong *)(lVar11 + 0x50)));
          break;
        case 0x11:
          uStack_180 = CONCAT44(*(undefined4 *)(lVar27 + *(longlong *)(lVar11 + 0x50)),
                                (undefined4)uStack_180);
          break;
        case 0x12:
          pfVar3 = (float *)(*(longlong *)(lVar11 + 0x50) + lVar27);
          local_208 = *pfVar3;
          fStack_204 = pfVar3[1];
          fStack_200 = *(float *)(*(longlong *)(lVar11 + 0x50) + 8 + lVar27);
          break;
        case 0x13:
          local_1c8 = *(undefined8 *)(*(longlong *)(lVar11 + 0x50) + lVar27);
          local_1c0 = *(undefined4 *)(*(longlong *)(lVar11 + 0x50) + 8 + lVar27);
          break;
        case 0x14:
          local_1ac = CONCAT44(*(undefined4 *)(lVar27 + *(longlong *)(lVar11 + 0x50)),
                               (undefined4)local_1ac);
          break;
        case 0x15:
          local_1f0 = *(undefined8 *)(lVar27 + *(longlong *)(lVar11 + 0x50));
          break;
        case 0x16:
          local_158 = *(undefined8 *)(*(longlong *)(lVar11 + 0x50) + lVar27);
          uStack_150 = CONCAT44(uStack_150._4_4_,
                                *(undefined4 *)(*(longlong *)(lVar11 + 0x50) + 8 + lVar27));
          break;
        case 0x17:
          local_138 = *(undefined8 *)(*(longlong *)(lVar11 + 0x50) + lVar27);
          uStack_130 = CONCAT44(uStack_130._4_4_,
                                *(undefined4 *)(*(longlong *)(lVar11 + 0x50) + 8 + lVar27));
          break;
        case 0x18:
          uStack_180 = CONCAT44(uStack_180._4_4_,
                                *(undefined4 *)(lVar27 + *(longlong *)(lVar11 + 0x50)));
          break;
        case 0x19:
          local_290 = *(TVector2<float>_u_0 *)(lVar27 + *(longlong *)(lVar11 + 0x50));
        }
      }
      iVar29 = iVar29 + 1;
      piVar24 = piVar24 + 1;
      uVar28 = uVar28 - 1;
    } while (uVar28 != 0);
  }
  local_23c = this->bSubImageBlend;
  if (*(int *)(in_stack_00000038 + 0x16c) == 4) {
    local_2c0 = this->MinFacingCameraBlendDistance * this->MinFacingCameraBlendDistance;
    fVar30 = this->MaxFacingCameraBlendDistance * this->MaxFacingCameraBlendDistance - local_2c0;
    if (fVar30 <= fVar13) {
      fVar30 = fVar13;
    }
    local_2c8._4_4_ = (int)(fVar13 / fVar30);
    local_2c8._0_4_ = 0x3f800000;
    local_2c0 = (fVar13 / fVar30) * local_2c0;
  }
  if (*(int *)(in_stack_00000038 + 0x168) == 1) {
    local_308 = ___xmm_00000000000000003f80000000000000;
    FStack_300.Data = _UNK_150689508;
    local_2a8 = local_2a8 & 0xffffffff00000000;
  }
  pFVar19 = FNiagaraSpriteUniformParameters::GetStructMetadata();
  if (((pFVar19->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLayoutInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                          ,0x17c,L""), bVar14)) {
    pcVar12 = (code *)swi(3);
    TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
    return TVar17;
  }
  TVar20 = RHICreateUniformBuffer
                     (&local_res8,(FRHIUniformBufferLayout *)local_318,
                      (EUniformBufferUsage)(pFVar19->Layout).Reference,ValidateResources);
  this_00 = (FRHIResource *)(TVar20.Reference)->_padding_;
  *(FRHIResource **)local_res10 = this_00;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this_00);
    pFVar19 = FNiagaraSpriteUniformParameters::GetStructMetadata();
    if (((pFVar19->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLayoutInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                            ,0x17c,L""), bVar14)) {
      pcVar12 = (code *)swi(3);
      TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
      return TVar17;
    }
    if ((FName)(pFVar19->Layout).Reference != this_00[2].OwnerName) {
      pFVar19 = FNiagaraSpriteUniformParameters::GetStructMetadata();
      if (((pFVar19->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsLayoutInitialized()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                              ,0x177,L""), bVar14)) {
        pcVar12 = (code *)swi(3);
        TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
        return TVar17;
      }
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x96,
                          L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                         );
      if (bVar14) {
        pcVar12 = (code *)swi(3);
        TVar17 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)(*pcVar12)();
        return TVar17;
      }
    }
  }
  TVar17 = local_res10;
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return TVar17;
}

// GenerateDynamicData @ 1493a1e70

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

FNiagaraDynamicDataBase * __thiscall
FNiagaraRendererSprites::GenerateDynamicData
          (FNiagaraRendererSprites *this,FNiagaraSceneProxy *param_1,
          UNiagaraRendererProperties *param_2,FNiagaraEmitterInstance *param_3)

{
  TArray<TObjectPtr<UNiagaraDataInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  FMaterialRelevance *pFVar2;
  int *piVar3;
  TRefCountPtr<FNiagaraDataBuffer> *pTVar4;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  int iVar7;
  FNiagaraSystemInstance *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  bool bVar11;
  char cVar12;
  UNiagaraSpriteRendererProperties *pUVar13;
  UObject *pUVar14;
  UClass *pUVar15;
  FNiagaraDataSet *pFVar16;
  FNiagaraDynamicDataBase *this_00;
  longlong lVar17;
  FNiagaraDynamicDataBase *pFVar18;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  
  pFVar18 = (FNiagaraDynamicDataBase *)0x0;
  pUVar13 = CastChecked<UNiagaraSpriteRendererProperties_const_,UNiagaraRendererProperties_const_>
                      (param_2);
  if (pUVar13 == (UNiagaraSpriteRendererProperties *)0x0) {
    return (FNiagaraDynamicDataBase *)0x0;
  }
  bVar11 = FNiagaraRenderer::IsRendererEnabled
                     ((FNiagaraRenderer *)this,(UNiagaraRendererProperties *)pUVar13,param_3);
  if (bVar11) {
    if (*(char *)((longlong)&pUVar13->_padding_ + 6) == '\0') {
      if ((param_3 == (FNiagaraEmitterInstance *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Emitter",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererSprites.cpp"
                              ,0x4d6,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        pFVar18 = (FNiagaraDynamicDataBase *)(*pcVar10)();
        return pFVar18;
      }
      pFVar8 = param_3->ParentSystemInstance;
      if ((pFVar8 == (FNiagaraSystemInstance *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Emitter->GetParentSystemInstance()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererSprites.cpp"
                              ,0x4d9,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        pFVar18 = (FNiagaraDynamicDataBase *)(*pcVar10)();
        return pFVar18;
      }
      pUVar14 = FWeakObjectPtr::Get(&(pFVar8->AttachComponent).WeakPtr);
      if (pUVar14 != (UObject *)0x0) {
        pUVar15 = Z_Construct_UClass_UNiagaraCullProxyComponent_NoRegister();
        iVar6 = (int)pUVar15->_padding_;
        if ((iVar6 <= *(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
            &pUVar15->_padding_)) goto LAB_1493a2272;
      }
    }
    pFVar16 = FNiagaraEmitterInstance::GetParticleData(param_3);
    if ((*(char *)((longlong)&this->_padding_ + 4) == '\x01') ||
       ((pFVar16->CurrentData != (FNiagaraDataBuffer *)0x0 &&
        ((this->SourceMode == Emitter ||
         ((this->SourceMode == Particles && (pFVar16->CurrentData->NumInstances != 0)))))))) {
      this_00 = ::operator_new(0x60);
      pFVar18 = (FNiagaraDynamicDataBase *)0x0;
      if (this_00 != (FNiagaraDynamicDataBase *)0x0) {
        FNiagaraDynamicDataBase::FNiagaraDynamicDataBase(this_00,param_3);
        this_00[1]._padding_ = 0;
        this_00->_padding_ = (longlong)&___7FNiagaraDynamicDataSprites__6B_;
        this_00[1].MaterialRelevance.field0_0x0.Raw = 0;
        this_00[1].SystemInstanceID = 0;
        this_00[1].CPUParticleData.Reference = (FNiagaraDataBuffer *)0x0;
        this_00[1].ComputeDataBufferInterface = (INiagaraComputeDataBufferInterface *)0x0;
        this_00[2]._padding_ = 0;
        this_00[2].MaterialRelevance.field0_0x0.Raw = 0;
        pFVar18 = this_00;
      }
      if (((int)this->_padding_ != 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("BaseMaterials_GT.Num() == 1",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererSprites.cpp"
                              ,0x4eb,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        pFVar18 = (FNiagaraDynamicDataBase *)(*pcVar10)();
        return pFVar18;
      }
      if (((int)this->_padding_ < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        pFVar18 = (FNiagaraDynamicDataBase *)(*pcVar10)();
        return pFVar18;
      }
      cVar12 = (**(code **)(**(longlong **)this->_padding_ + 0x378))
                         (*(longlong **)this->_padding_,10);
      if ((cVar12 == '\0') &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("BaseMaterials_GT[0]->CheckMaterialUsage_Concurrent(MATUSAGE_NiagaraSprites)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererSprites.cpp"
                              ,0x4ec,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        pFVar18 = (FNiagaraDynamicDataBase *)(*pcVar10)();
        return pFVar18;
      }
      if (((int)this->_padding_ < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        pFVar18 = (FNiagaraDynamicDataBase *)(*pcVar10)();
        return pFVar18;
      }
      lVar17 = (**(code **)(**(longlong **)this->_padding_ + 0x310))();
      pFVar18[1]._padding_ = lVar17;
      pTVar1 = &(param_3->RendererBindings).DataInterfaces;
      pFVar2 = &pFVar18[1].MaterialRelevance;
      (pFVar18->MaterialRelevance).field0_0x0 = (FMaterialRelevance_u_0)this->_padding_;
      if ((TArray<TObjectPtr<UNiagaraDataInterface>,TSizedDefaultAllocator<32>_> *)pFVar2 != pTVar1)
      {
        iVar6 = (param_3->RendererBindings).DataInterfaces.ArrayNum;
        piVar3 = (int *)((longlong)&pFVar18[1].SystemInstanceID + 4);
        pFVar9 = (pTVar1->AllocatorInstance).Data;
        iVar7 = *piVar3;
        *(int *)&pFVar18[1].SystemInstanceID = iVar6;
        if ((iVar6 == 0) && (iVar7 == 0)) {
          *piVar3 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar6,iVar7,(ForAnyElementType *)pFVar2,iVar6,piVar3);
          if (iVar6 != 0) {
            memcpy((void *)pFVar2->field0_0x0,pFVar9,(longlong)iVar6 << 3);
          }
        }
      }
      pTVar5 = &(param_3->RendererBindings).UObjects;
      pTVar4 = &pFVar18[1].CPUParticleData;
      if ((TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)pTVar4 != pTVar5) {
        iVar6 = (param_3->RendererBindings).UObjects.ArrayNum;
        piVar3 = (int *)((longlong)&pFVar18[1].ComputeDataBufferInterface + 4);
        pFVar9 = (pTVar5->AllocatorInstance).Data;
        iVar7 = *piVar3;
        *(int *)&pFVar18[1].ComputeDataBufferInterface = iVar6;
        if ((iVar6 == 0) && (iVar7 == 0)) {
          *piVar3 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar6,iVar7,(ForAnyElementType *)pTVar4,iVar6,piVar3);
          if (iVar6 != 0) {
            memcpy(pTVar4->Reference,pFVar9,(longlong)iVar6 << 3);
          }
        }
      }
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(pFVar18 + 2),
                 &(param_3->RendererBindings).ParameterData);
      if ((((0 < (pUVar13->MaterialParameters).AttributeBindings.ArrayNum) ||
           (0 < (pUVar13->MaterialParameters).ScalarParameters.ArrayNum)) ||
          (0 < (pUVar13->MaterialParameters).VectorParameters.ArrayNum)) ||
         (0 < (pUVar13->MaterialParameters).TextureParameters.ArrayNum)) {
        iVar6 = (int)this->_padding_;
        pcVar10 = *(code **)(this->_padding_ + 0x78);
        lVar17 = this->_padding_;
        if ((iVar6 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar10 = (code *)swi(3);
          pFVar18 = (FNiagaraDynamicDataBase *)(*pcVar10)();
          return pFVar18;
        }
        local_48 = (undefined4)lVar17;
        uStack_44 = (undefined4)((ulonglong)lVar17 >> 0x20);
        local_38 = local_48;
        uStack_34 = uStack_44;
        iStack_30 = iVar6;
        (*pcVar10)(this,&pUVar13->MaterialParameters,param_3,&local_38);
      }
    }
  }
  else {
LAB_1493a2272:
    pFVar18 = (FNiagaraDynamicDataBase *)0x0;
  }
  return pFVar18;
}

// GetDynamicDataSize @ 1493a3a10

int __thiscall FNiagaraRendererSprites::GetDynamicDataSize(FNiagaraRendererSprites *this)

{
  return 0x60;
}

// GetDynamicMeshElements @ 1493a3a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EBlendMode": Some values do not have unique names */

void __thiscall
FNiagaraRendererSprites::GetDynamicMeshElements
          (FNiagaraRendererSprites *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4,FNiagaraSceneProxy *param_5)

{
  atomic<int> *paVar1;
  ulong64 *puVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  FRHICommandListBase *pFVar8;
  FNiagaraDynamicDataBase *pFVar9;
  FName *pFVar10;
  FSceneView *pFVar11;
  FRHIShaderResourceView *pFVar12;
  FNiagaraGpuComputeDispatchInterface *pFVar13;
  TIntPoint<int>_u_0 this_00;
  FRHIShaderResourceView *this_01;
  TUniformBufferRef<FNiagaraSpriteUniformParameters> TVar14;
  code *pcVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  bool bVar21;
  bool bVar22;
  double dVar23;
  LARGE_INTEGER LVar24;
  undefined4 uVar25;
  bool bVar26;
  bool bVar27;
  char cVar28;
  uint uVar29;
  FGlobalDynamicReadBuffer *pFVar30;
  FMeshCollectorResources *pFVar31;
  FAllocation *pFVar32;
  TUniformBufferRef<FNiagaraSpriteUniformParameters> TVar33;
  FMeshBatch *pFVar34;
  TUniformBufferRef<FNiagaraSpriteUniformParameters> *pTVar35;
  FParticlePerfStats *pFVar36;
  FName FVar37;
  FParticlePerfStats *pFVar38;
  atomic<int> aVar39;
  float fVar40;
  undefined1 auStackY_528 [32];
  uint local_4c0;
  uint local_4bc;
  longlong local_4b8;
  FColor_u_0 local_4a8 [4];
  undefined1 local_498 [21];
  bool bStack_483;
  bool bStack_482;
  bool bStack_481;
  TUniformBufferRef<FViewUniformShaderParameters> local_480;
  Type local_478;
  TVector<double>_u_0 local_470;
  FConvexVolume *local_458;
  uint local_450;
  uint local_44c;
  FName local_448;
  FNiagaraSceneProxy *local_440;
  FName local_438;
  LARGE_INTEGER local_430;
  FName local_428;
  LARGE_INTEGER local_418;
  FMeshCollectorResources *local_410;
  undefined1 local_408 [24];
  FParticlePerfStats *pFStack_3f0;
  FParticlePerfStats *local_3e8;
  FAllocation local_3d0;
  double local_3a8;
  FAllocation local_3a0;
  undefined1 local_388 [672];
  double local_e8;
  
  local_e8 = (double)(__security_cookie.value ^ (ulonglong)auStackY_528);
  local_440 = (FNiagaraSceneProxy *)param_2;
  if ((param_5 == (FNiagaraSceneProxy *)0x0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("SceneProxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererSprites.cpp"
                          ,0x3c5,L""), bVar26)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  pFVar38 = (param_5->DynamicData).PerfStatsContext.WorldStats;
  pFStack_3f0 = (param_5->DynamicData).PerfStatsContext.SystemStats;
  pFVar36 = (param_5->DynamicData).PerfStatsContext.SystemStats;
  local_3e8 = (param_5->DynamicData).PerfStatsContext.ComponentStats;
  local_430.QuadPart = -1;
  local_408._16_8_ = pFVar38;
  if (((pFVar38 != (FParticlePerfStats *)0x0) || (pFVar36 != (FParticlePerfStats *)0x0)) ||
     (local_3e8 != (FParticlePerfStats *)0x0)) {
    QueryPerformanceCounter(&local_418);
    local_430 = local_418;
  }
  if ((param_4->RHICmdList == (FRHICommandList *)0x0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("RHICmdList",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                          ,0x46,L""), bVar26)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  pFVar8 = (FRHICommandListBase *)param_4->RHICmdList;
  pFVar9 = (FNiagaraDynamicDataBase *)this->_padding_;
  local_498._0_8_ = (FNiagaraDynamicDataSprites *)0x0;
  local_498._8_8_ = (FSceneViewFamily *)0x0;
  stack0xfffffffffffffb78 = (FSceneViewStateInterface *)0x0;
  local_480 = (TUniformBufferRef<FViewUniformShaderParameters>)0x0;
  local_478 = ~Position;
  local_470._s_0.X = 0.0;
  local_470._s_0.Y = 0.0;
  local_470._s_0.Z = 0.0;
  local_458 = (FConvexVolume *)0x0;
  local_450 = 0;
  local_44c = 0xffffffff;
  if ((pFVar8 == (FRHICommandListBase *)0x0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("RHICmdList",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                          ,0x46,L""), bVar26)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  PrepareParticleSpriteRenderData
            (this,(FRHICommandListBase *)param_4->RHICmdList,(FParticleSpriteRenderData *)local_498,
             (FSceneViewFamily *)local_440,pFVar9,param_5,Last);
  if (((FSceneViewFamily *)local_498._8_8_ == (FSceneViewFamily *)0x0) ||
     ((local_498[0x14] != false &&
      (bVar26 = FNiagaraRenderer::AreViewsRenderingOpaqueOnly
                          (param_1,param_3,(bool)(*(byte *)((longlong)&param_5->_padding_ + 7) & 1))
      , bVar26)))) goto LAB_1493a4470;
  pFVar10 = (FName *)this->_padding_;
  local_428.ComparisonIndex.Value = 0;
  local_428.Number = 0;
  bVar26 = false;
  bVar27 = false;
  FVar37 = *pFVar10;
  if ((FVar37.ComparisonIndex.Value.Value == 0) && (FVar37.Number == 0)) {
LAB_1493a3cc9:
    bVar22 = bVar27;
    bVar21 = bVar26;
    bVar26 = false;
    local_438 = local_428;
    FVar37 = local_428;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents == 0) {
      bVar21 = false;
      bVar22 = false;
    }
    else {
      local_4a8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_4a8[0]._s_0,(char *)pFVar10[2]);
      bVar26 = false;
      bVar27 = true;
      if (CpuChannel->Enabled < 0) {
        bVar21 = false;
        bVar22 = true;
      }
      else {
        local_448.ComparisonIndex.Value = FVar37.ComparisonIndex.Value.Value;
        local_448.Number = FVar37.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_448,(wchar_t *)pFVar10[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererSprites.cpp"
                   ,0x3db);
        bVar21 = true;
        bVar22 = true;
        bVar26 = true;
        bVar27 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493a3cc9;
    local_438 = FVar37;
    FThreadStats::AddMessage(FVar37,CycleScopeStart);
    bVar26 = true;
  }
  pFVar30 = FMeshElementCollector::GetDynamicReadBuffer(param_4);
  PrepareParticleRenderBuffers(this,pFVar8,(FParticleSpriteRenderData *)local_498,pFVar30);
  dVar23 = __real_3ff0000000000000;
  local_4c0 = 0;
  iVar7 = param_1->ArrayNum;
  if (0 < iVar7) {
    local_4bc = 1;
    local_4b8 = 0;
    do {
      if ((param_3 & local_4bc) != 0) {
        uVar29 = 0;
        if ((int)local_4c0 < iVar7) {
          uVar29 = ~local_4c0 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        pFVar11 = *(FSceneView **)((param_1->AllocatorInstance).Data + local_4b8);
        if ((((pFVar11->bIsInstancedStereoEnabled == false) ||
             (bVar27 = IStereoRendering::IsStereoEyeView(pFVar11), !bVar27)) ||
            (bVar27 = IStereoRendering::IsAPrimaryView(pFVar11), bVar27)) &&
           ((local_498[0x14] == false ||
            (bVar27 = FNiagaraRenderer::IsViewRenderingOpaqueOnly
                                (pFVar11,(bool)(*(byte *)((longlong)&param_5->_padding_ + 7) & 1)),
            !bVar27)))) {
          if ((this->SourceMode == Emitter) && (this->bEnableDistanceCulling != 0)) {
            local_3a8 = (pFVar11->ViewMatrices).ViewOrigin.field0_0x0._s_0.Z;
            dVar4 = (double)param_5->_padding_;
            dVar5 = (double)param_5->_padding_;
            dVar6 = (double)param_5->_padding_;
            iVar7 = this->VFBoundOffsetsInParamStore[0];
            dVar17 = (pFVar11->ViewMatrices).ViewOrigin.field0_0x0._s_0.X;
            dVar19 = (pFVar11->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y;
            if ((((iVar7 != -1) && (-1 < iVar7)) &&
                (iVar7 < ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                         (local_498._0_8_ + 0x50))->ArrayNum)) &&
               (bVar27 = FNiagaraRenderer::UseLocalSpace((FNiagaraRenderer *)this,param_5), bVar27))
            {
              dVar18 = dVar4 * (double)param_5->_padding_;
              dVar20 = (double)param_5->_padding_ * dVar5;
              dVar16 = (double)param_5->_padding_ * dVar4;
              dVar4 = (double)param_5->_padding_ * dVar5 + dVar4 * (double)param_5->_padding_ +
                      (double)param_5->_padding_ * dVar6 + (double)param_5->_padding_ * dVar23;
              dVar5 = (double)param_5->_padding_ * dVar5 + dVar18 +
                      (double)param_5->_padding_ * dVar6 + (double)param_5->_padding_ * dVar23;
              dVar6 = dVar20 + dVar16 + (double)param_5->_padding_ * dVar6 +
                      (double)param_5->_padding_ * dVar23;
            }
            fVar40 = (param_5->DynamicData).LODDistanceOverride;
            if (fVar40 < 0.0) {
              dVar17 = dVar17 - dVar4;
              dVar19 = dVar19 - dVar5;
              fVar40 = (float)(dVar19 * dVar19 + dVar17 * dVar17 +
                              (local_3a8 - dVar6) * (local_3a8 - dVar6));
            }
            else {
              fVar40 = fVar40 * fVar40;
            }
            fVar3 = (this->DistanceCullRange).field0_0x0._s_0.X;
            if ((fVar40 < fVar3 * fVar3) ||
               (fVar3 = (this->DistanceCullRange).field0_0x0._s_0.Y, fVar3 * fVar3 < fVar40))
            goto LAB_1493a43c8;
          }
          FNiagaraGPUSortInfo::FNiagaraGPUSortInfo((FNiagaraGPUSortInfo *)local_388);
          if ((bStack_482 != false) || (bStack_481 != false)) {
            InitializeSortInfo(this,(FParticleSpriteRenderData *)local_498,param_5,pFVar11,local_4c0
                               ,(FNiagaraGPUSortInfo *)local_388);
          }
          pFVar31 = FMeshElementCollector::
                    AllocateOneFrameResource<FNiagaraRendererSprites::FMeshCollectorResources>
                              (param_4);
          if (this->SourceMode == Particles) {
            uVar29 = *(uint *)((longlong)(local_498._8_8_ + 0x120) + 4);
          }
          else {
            uVar29 = 1;
          }
          pFVar12 = (pFVar31->VertexFactory).SortedIndicesSRV.Reference;
          local_410 = pFVar31;
          if (pFVar12 != (FRHIShaderResourceView *)0x0) {
            (pFVar31->VertexFactory).SortedIndicesSRV.Reference = (FRHIShaderResourceView *)0x0;
            FRHIResource::Release((FRHIResource *)pFVar12);
          }
          (pFVar31->VertexFactory).SortedIndicesOffset = 0xffffffff;
          pFVar13 = param_5->ComputeDispatchInterface;
          if ((bStack_481 != false) || (bStack_482 != false)) {
            if (bStack_483 == false) {
              local_3d0.Buffer = (uchar *)0x0;
              local_3d0.ReadBuffer = (FDynamicAllocReadBuffer *)0x0;
              if ((param_4->DynamicReadBuffer == (FGlobalDynamicReadBuffer *)0x0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("DynamicReadBuffer",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                                      ,0x3f,L""), bVar27)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              pFVar32 = FGlobalDynamicReadBuffer::AllocateUInt32
                                  (param_4->DynamicReadBuffer,&local_3a0,uVar29);
              local_3d0.Buffer = pFVar32->Buffer;
              local_3d0.ReadBuffer = pFVar32->ReadBuffer;
              local_3d0.SRV = pFVar32->SRV;
              uVar29 = FNiagaraRenderer::SortAndCullIndices
                                 ((FNiagaraGPUSortInfo *)local_388,
                                  (FNiagaraDataBuffer *)local_498._8_8_,&local_3d0);
              pFVar12 = local_3d0.SRV;
              if (local_3d0.SRV != (FRHIShaderResourceView *)0x0) {
                FRHIResource::AddRef((FRHIResource *)local_3d0.SRV);
              }
              this_01 = (pFVar31->VertexFactory).SortedIndicesSRV.Reference;
              if (this_01 != pFVar12) {
                (pFVar31->VertexFactory).SortedIndicesSRV.Reference = pFVar12;
                if (pFVar12 != (FRHIShaderResourceView *)0x0) {
                  FRHIResource::AddRef((FRHIResource *)pFVar12);
                }
                if (this_01 != (FRHIShaderResourceView *)0x0) {
                  FRHIResource::Release((FRHIResource *)this_01);
                }
              }
              (pFVar31->VertexFactory).SortedIndicesOffset = 0;
              if (pFVar12 != (FRHIShaderResourceView *)0x0) {
                FRHIResource::Release((FRHIResource *)pFVar12);
              }
            }
            else {
              if (bStack_481 == false) {
                local_388._76_4_ = (atomic<int>)0xffffffff;
              }
              else {
                bVar27 = IsInParallelRenderingThread();
                if ((!bVar27) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsInParallelRenderingThread()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                                        ,0x6a,L""), bVar27)) {
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                if (((pFVar13->GPUInstanceCounterManager).bAcquiredCulledCounts != false) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("!bAcquiredCulledCounts",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                                        ,0x59,L""), bVar27)) {
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                LOCK();
                paVar1 = &(pFVar13->GPUInstanceCounterManager).RequiredCulledCounts;
                local_388._76_4_ = *paVar1;
                *paVar1 = (atomic<int>)((int)*paVar1 + 1);
                UNLOCK();
              }
              cVar28 = (**(code **)(pFVar13->_padding_ + 0xe0))(pFVar13,pFVar8,local_388);
              uVar25 = local_388._648_4_;
              if (cVar28 != '\0') {
                this_00 = (TIntPoint<int>_u_0)(pFVar31->VertexFactory).SortedIndicesSRV.Reference;
                if (this_00 != (TIntPoint<int>_u_0)local_388._640_8_) {
                  (pFVar31->VertexFactory).SortedIndicesSRV.Reference =
                       (FRHIShaderResourceView *)local_388._640_8_;
                  if ((TIntPoint<int>_u_0)local_388._640_8_ != (TIntPoint<int>_u_0)0x0) {
                    FRHIResource::AddRef((FRHIResource *)local_388._640_8_);
                  }
                  if (this_00 != (TIntPoint<int>_u_0)0x0) {
                    FRHIResource::Release((FRHIResource *)this_00);
                  }
                }
                (pFVar31->VertexFactory).SortedIndicesOffset = uVar25;
              }
            }
          }
          if (uVar29 != 0) {
            SetupVertexFactory(this,pFVar8,(FParticleSpriteRenderData *)local_498,
                               &pFVar31->VertexFactory);
            TVar33 = CreateViewUniformBuffer
                               (this,(FParticleSpriteRenderData *)local_408,(FSceneView *)local_498,
                                (FSceneViewFamily *)pFVar11,local_440,
                                (FNiagaraSpriteVertexFactory *)param_5);
            pTVar35 = &local_410->UniformBuffer;
            if ((TUniformBufferRef<FNiagaraSpriteUniformParameters>)pTVar35 != TVar33) {
              TVar14 = *pTVar35;
              *pTVar35 = *(TUniformBufferRef<FNiagaraSpriteUniformParameters> *)TVar33;
              *(undefined8 *)TVar33 = 0;
              if (TVar14 != (TUniformBufferRef<FNiagaraSpriteUniformParameters>)0x0) {
                FRHIResource::Release((FRHIResource *)TVar14);
              }
            }
            if ((FNiagaraDynamicDataSprites *)local_408._0_8_ != (FNiagaraDynamicDataSprites *)0x0)
            {
              FRHIResource::Release((FRHIResource *)local_408._0_8_);
            }
            TVar33 = *pTVar35;
            TVar14 = (TUniformBufferRef<FNiagaraSpriteUniformParameters>)
                     (pFVar31->VertexFactory).SpriteUniformBuffer.Reference;
            if (TVar14 != TVar33) {
              (pFVar31->VertexFactory).SpriteUniformBuffer.Reference = (FRHIUniformBuffer *)TVar33;
              if (TVar33 != (TUniformBufferRef<FNiagaraSpriteUniformParameters>)0x0) {
                FRHIResource::AddRef((FRHIResource *)TVar33);
              }
              if (TVar14 != (TUniformBufferRef<FNiagaraSpriteUniformParameters>)0x0) {
                FRHIResource::Release((FRHIResource *)TVar14);
              }
            }
            aVar39 = (atomic<int>)local_388._76_4_;
            if ((atomic<int>)local_388._76_4_ == (atomic<int>)0xffffffff) {
              aVar39 = *(atomic<int> *)&((FEngineShowFlags *)(local_498._8_8_ + 0x48))->field_0x14;
            }
            pFVar34 = FMeshElementCollector::AllocateMesh(param_4);
            CreateMeshBatchForView
                      (this,pFVar8,(FParticleSpriteRenderData *)local_498,pFVar34,pFVar11,param_5,
                       &pFVar31->VertexFactory,uVar29,(uint)aVar39,bStack_481);
            FMeshElementCollector::AddMesh(param_4,local_4c0,pFVar34);
          }
          if ((TIntPoint<int>_u_0)local_388._640_8_ != (TIntPoint<int>_u_0)0x0) {
            FRHIResource::Release((FRHIResource *)local_388._640_8_);
          }
          if ((FRHIShaderResourceView *)local_388._64_8_ != (FRHIShaderResourceView *)0x0) {
            FRHIResource::Release((FRHIResource *)local_388._64_8_);
          }
          if ((FRHIShaderResourceView *)local_388._40_8_ != (FRHIShaderResourceView *)0x0) {
            FRHIResource::Release((FRHIResource *)local_388._40_8_);
          }
          if ((FRHIShaderResourceView *)local_388._32_8_ != (FRHIShaderResourceView *)0x0) {
            FRHIResource::Release((FRHIResource *)local_388._32_8_);
          }
          if ((FRHIShaderResourceView *)local_388._24_8_ != (FRHIShaderResourceView *)0x0) {
            FRHIResource::Release((FRHIResource *)local_388._24_8_);
          }
        }
      }
LAB_1493a43c8:
      local_4b8 = local_4b8 + 8;
      local_4c0 = local_4c0 + 1;
      iVar7 = param_1->ArrayNum;
      local_4bc = local_4bc << 1 | (uint)((int)local_4bc < 0);
      pFVar36 = pFStack_3f0;
      FVar37 = local_438;
      pFVar38 = (FParticlePerfStats *)local_408._16_8_;
    } while ((int)local_4c0 < iVar7);
  }
  if (bVar22) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar26) {
    FThreadStats::AddMessage(FVar37,CycleScopeEnd);
  }
LAB_1493a4470:
  LVar24 = local_430;
  if (local_430.QuadPart != -1) {
    QueryPerformanceCounter((LARGE_INTEGER *)(local_408 + 8));
    if (pFVar38 != (FParticlePerfStats *)0x0) {
      puVar2 = &(pFVar38->RenderThreadStats).GetDynamicMeshElementsCycles;
      *puVar2 = local_408._8_8_ + (*puVar2 - (longlong)LVar24);
    }
    if (pFVar36 != (FParticlePerfStats *)0x0) {
      puVar2 = &(pFVar36->RenderThreadStats).GetDynamicMeshElementsCycles;
      *puVar2 = local_408._8_8_ + (*puVar2 - (longlong)LVar24);
    }
    if (local_3e8 != (FParticlePerfStats *)0x0) {
      puVar2 = &(local_3e8->RenderThreadStats).GetDynamicMeshElementsCycles;
      *puVar2 = local_408._8_8_ + (*puVar2 - (longlong)LVar24);
    }
  }
  return;
}

// GetDynamicRayTracingInstances @ 1493a53b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EBlendMode": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FNiagaraRendererSprites::GetDynamicRayTracingInstances
          (FNiagaraRendererSprites *this,FRayTracingInstanceCollector *param_1,
          FNiagaraSceneProxy *param_2)

{
  FNiagaraSpriteVertexFactory *this_00;
  longlong *plVar1;
  int iVar2;
  FRHICommandListBase *pFVar3;
  FScriptContainerElement *pFVar4;
  FSceneView *pFVar5;
  FName *pFVar6;
  FRHIShaderResourceView *pFVar7;
  FNiagaraGpuComputeDispatchInterface *this_01;
  FRHIShaderResourceView *this_02;
  code *pcVar8;
  bool bVar9;
  double dVar10;
  TConsoleVariableData<int> *pTVar11;
  ForAnyElementType FVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  char cVar16;
  bool bVar17;
  int iVar18;
  FGlobalDynamicReadBuffer *this_03;
  FMeshCollectorResources *pFVar19;
  FNiagaraGPUInstanceCountManager *this_04;
  FAllocation *pFVar20;
  TUniformBufferRef<FNiagaraSpriteUniformParameters> TVar21;
  FRWBuffer *pFVar22;
  FRayTracingInstance *pFVar23;
  int iVar24;
  longlong lVar25;
  ForElementType<FMeshBatchElement> FVar26;
  uint uVar27;
  FRWBuffer *pFVar28;
  FName FVar29;
  uint uVar30;
  undefined1 auStackY_728 [32];
  uint local_6d4;
  FColor_u_0 local_698;
  uint local_694;
  FRayTracingInstance local_688;
  FName local_618 [2];
  undefined1 local_608 [22];
  bool bStack_5f2;
  bool bStack_5f1;
  TUniformBufferRef<FViewUniformShaderParameters> local_5f0;
  Type local_5e8;
  TVector<double>_u_0 local_5e0;
  FConvexVolume *local_5c8;
  uint local_5c0;
  uint local_5bc;
  FName local_5b8;
  uint local_5a8;
  undefined1 local_5a0 [16];
  FDynamicAllocReadBuffer *pFStack_590;
  FRHIShaderResourceView *local_588;
  FRayTracingDynamicGeometryUpdateParams local_578;
  FAllocation local_4e8;
  FRayTracingInstance local_4d0;
  ForAnyElementType local_458;
  undefined8 local_450;
  undefined1 local_448;
  uint local_444;
  uint local_440;
  uint local_43c;
  longlong *local_438;
  FRWBuffer *local_430;
  FLinearColor_u_0 local_428;
  FLinearColor_u_0 local_418;
  FLinearColor_u_0 local_408;
  float local_3f8 [2];
  float afStack_3f0 [2];
  TVector<double>_u_0 local_3e8;
  FRHIResource *local_3d0;
  FMeshBatch local_3c8;
  FNiagaraGPUSortInfo local_2e8;
  double local_48;
  
  pTVar11 = CVarRayTracingNiagaraSprites.Ref;
  local_48 = (double)(__security_cookie.value ^ (ulonglong)auStackY_728);
  bVar15 = IsInParallelRenderingThread();
  if ((!bVar15) &&
     (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (pTVar11->ShadowedValue[1] == 0) {
    return;
  }
  if ((param_2 == (FNiagaraSceneProxy *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("SceneProxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererSprites.cpp"
                          ,1099,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((param_1->_padding_ == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("RHICmdList",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                          ,0x46,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar2 = (param_1->Views).ArrayNum;
  pFVar3 = (FRHICommandListBase *)param_1->_padding_;
  pFVar4 = (param_1->Views).AllocatorInstance.Data;
  if ((iVar2 < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_694 = param_1->VisibilityMap;
  local_5a8 = 0;
  if (local_694 != 0) {
    for (; (local_694 >> local_5a8 & 1) == 0; local_5a8 = local_5a8 + 1) {
    }
  }
  uVar30 = 0x20;
  if (local_694 != 0) {
    uVar30 = local_5a8;
  }
  if ((((int)uVar30 < 0) || (iVar2 <= (int)uVar30)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Views.IsValidIndex(FirstActiveViewIndex)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererSprites.cpp"
                          ,0x455,
                          L"There should be at least one active view when calling GetDynamicRayTracingInstances(...)."
                         ), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar28 = (FRWBuffer *)0x0;
  uVar27 = 0;
  if ((int)uVar30 < iVar2) {
    uVar27 = ~uVar30 >> 0x1f;
  }
  if ((uVar27 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_608._0_8_ = (FNiagaraDynamicDataSprites *)0x0;
  local_608._8_8_ = (FSceneViewFamily *)0x0;
  stack0xfffffffffffffa08 = (FSceneViewStateInterface *)0x0;
  local_5f0 = (TUniformBufferRef<FViewUniformShaderParameters>)0x0;
  pFVar5 = *(FSceneView **)(pFVar4 + (longlong)(int)uVar30 * 8);
  local_6d4 = 1;
  local_5e8 = ~Position;
  local_5e0._s_0.X = 0.0;
  local_5e0._s_0.Y = 0.0;
  local_5e0._s_0.Z = 0.0;
  local_5c8 = (FConvexVolume *)0x0;
  local_5c0 = 0;
  local_5bc = 0xffffffff;
  PrepareParticleSpriteRenderData
            (this,pFVar3,(FParticleSpriteRenderData *)local_608,pFVar5->Family,
             (FNiagaraDynamicDataBase *)this->_padding_,param_2,PostInitViews);
  if ((FSceneViewFamily *)local_608._8_8_ == (FSceneViewFamily *)0x0) {
    return;
  }
  pFVar6 = (FName *)this->_padding_;
  bVar15 = false;
  bVar9 = false;
  local_5b8.ComparisonIndex.Value = 0;
  local_5b8.Number = 0;
  bVar14 = false;
  bVar17 = false;
  FVar29 = *pFVar6;
  if ((FVar29.ComparisonIndex.Value.Value != 0) || (FVar29.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_698.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_698._s_0,(char *)pFVar6[2]);
      bVar15 = false;
      bVar9 = true;
      bVar14 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_618[0].ComparisonIndex.Value = FVar29.ComparisonIndex.Value.Value;
        local_618[0].Number = FVar29.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (local_618,(wchar_t *)pFVar6[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererSprites.cpp"
                   ,0x465);
        bVar15 = true;
        bVar9 = true;
        bVar14 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar29,CycleScopeStart);
      bVar14 = true;
      goto LAB_1493a56b2;
    }
  }
  bVar9 = bVar17;
  bVar15 = bVar14;
  bVar14 = false;
  FVar29 = local_5b8;
LAB_1493a56b2:
  this_03 = FMeshElementCollector::GetDynamicReadBuffer((FMeshElementCollector *)param_1);
  PrepareParticleRenderBuffers(this,pFVar3,(FParticleSpriteRenderData *)local_608,this_03);
  FNiagaraGPUSortInfo::FNiagaraGPUSortInfo(&local_2e8);
  if ((bStack_5f2 != false) || (bStack_5f1 != false)) {
    InitializeSortInfo(this,(FParticleSpriteRenderData *)local_608,param_2,pFVar5,0,&local_2e8);
  }
  if ((FNiagaraSpriteVertexFactory::StaticType.Flags & SupportsRayTracingDynamicGeometry) != None) {
    pFVar19 = FMeshElementCollector::
              AllocateOneFrameResource<FNiagaraRendererSprites::FMeshCollectorResources>
                        ((FMeshElementCollector *)param_1);
    this_00 = &pFVar19->VertexFactory;
    if (this->SourceMode == Particles) {
      local_6d4 = *(uint *)((longlong)(local_608._8_8_ + 0x120) + 4);
    }
    pFVar7 = (pFVar19->VertexFactory).SortedIndicesSRV.Reference;
    if (pFVar7 != (FRHIShaderResourceView *)0x0) {
      (pFVar19->VertexFactory).SortedIndicesSRV.Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar7);
    }
    (pFVar19->VertexFactory).SortedIndicesOffset = 0xffffffff;
    this_01 = param_2->ComputeDispatchInterface;
    if ((bStack_5f1 != false) || (bStack_5f2 != false)) {
      if (local_608[0x15] == false) {
        local_5a0._8_8_ = (FNiagaraDataBuffer *)0x0;
        pFStack_590 = (FDynamicAllocReadBuffer *)0x0;
        pFVar20 = FGlobalDynamicReadBuffer::AllocateUInt32(this_03,&local_4e8,local_6d4);
        local_5a0._8_8_ = pFVar20->Buffer;
        pFStack_590 = pFVar20->ReadBuffer;
        local_588 = pFVar20->SRV;
        local_6d4 = FNiagaraRenderer::SortAndCullIndices
                              (&local_2e8,(FNiagaraDataBuffer *)local_608._8_8_,
                               (FAllocation *)(local_5a0 + 8));
        pFVar7 = local_588;
        if (local_588 != (FRHIShaderResourceView *)0x0) {
          FRHIResource::AddRef((FRHIResource *)local_588);
        }
        this_02 = (pFVar19->VertexFactory).SortedIndicesSRV.Reference;
        if (this_02 != pFVar7) {
          (pFVar19->VertexFactory).SortedIndicesSRV.Reference = pFVar7;
          if (pFVar7 != (FRHIShaderResourceView *)0x0) {
            FRHIResource::AddRef((FRHIResource *)pFVar7);
          }
          if (this_02 != (FRHIShaderResourceView *)0x0) {
            FRHIResource::Release((FRHIResource *)this_02);
          }
        }
        (pFVar19->VertexFactory).SortedIndicesOffset = 0;
        if (pFVar7 != (FRHIShaderResourceView *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar7);
        }
      }
      else {
        if (bStack_5f1 == false) {
          local_2e8.CulledGPUParticleCountOffset = 0xffffffff;
        }
        else {
          this_04 = FNiagaraGpuComputeDispatchInterface::GetGPUInstanceCounterManager(this_01);
          local_2e8.CulledGPUParticleCountOffset =
               FNiagaraGPUInstanceCountManager::AcquireCulledEntry(this_04);
        }
        cVar16 = (**(code **)(this_01->_padding_ + 0xe0))(this_01,pFVar3,&local_2e8);
        if (cVar16 != '\0') {
          pFVar7 = (pFVar19->VertexFactory).SortedIndicesSRV.Reference;
          if (pFVar7 != local_2e8.AllocationInfo.BufferSRV.Reference) {
            (pFVar19->VertexFactory).SortedIndicesSRV.Reference =
                 local_2e8.AllocationInfo.BufferSRV.Reference;
            if (local_2e8.AllocationInfo.BufferSRV.Reference != (FRHIShaderResourceView *)0x0) {
              FRHIResource::AddRef((FRHIResource *)local_2e8.AllocationInfo.BufferSRV.Reference);
            }
            if (pFVar7 != (FRHIShaderResourceView *)0x0) {
              FRHIResource::Release((FRHIResource *)pFVar7);
            }
          }
          (pFVar19->VertexFactory).SortedIndicesOffset = local_2e8.AllocationInfo.BufferOffset;
        }
      }
    }
    if (local_6d4 != 0) {
      SetupVertexFactory(this,pFVar3,(FParticleSpriteRenderData *)local_608,this_00);
      TVar21 = CreateViewUniformBuffer
                         (this,(FParticleSpriteRenderData *)local_5a0,(FSceneView *)local_608,
                          (FSceneViewFamily *)pFVar5,(FNiagaraSceneProxy *)pFVar5->Family,
                          (FNiagaraSpriteVertexFactory *)param_2);
      TUniformBufferRef<FNiagaraSpriteUniformParameters>::operator=
                (&pFVar19->UniformBuffer,
                 (TUniformBufferRef<FNiagaraSpriteUniformParameters> *)TVar21);
      if ((FNiagaraDynamicDataSprites *)local_5a0._0_8_ != (FNiagaraDynamicDataSprites *)0x0) {
        FRHIResource::Release((FRHIResource *)local_5a0._0_8_);
      }
      FNiagaraSpriteVertexFactory::SetSpriteUniformBuffer(this_00,&pFVar19->UniformBuffer);
      uVar27 = local_2e8.CulledGPUParticleCountOffset;
      if (local_2e8.CulledGPUParticleCountOffset == 0xffffffff) {
        uVar27 = *(uint *)&((FEngineShowFlags *)(local_608._8_8_ + 0x48))->field_0x14;
      }
      FMeshBatch::FMeshBatch(&local_3c8);
      CreateMeshBatchForView
                (this,pFVar3,(FParticleSpriteRenderData *)local_608,&local_3c8,pFVar5,param_2,
                 this_00,local_6d4,uVar27,bStack_5f1);
      plVar1 = &this->_padding_;
      local_688.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_688.Materials.ArrayNum = 0;
      local_688.Materials.ArrayMax = 0;
      local_688.MaterialsView.DataPtr = (FMeshBatch *)0x0;
      local_688.MaterialsView.ArrayNum = 0;
      local_688.bApplyLocalBoundsTransform = false;
      local_688.bThinGeometry = false;
      local_688.InstanceLayer = NearField;
      local_688.bInstanceMaskAndFlagsDirty = true;
      local_688.NumTransforms = 0;
      local_688.PrimitiveInstanceIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_688.PrimitiveInstanceIndices.ArrayNum = 0;
      local_688.PrimitiveInstanceIndices.ArrayMax = 0;
      local_688.PrimitiveInstanceIndicesView.DataPtr = (uint *)0x0;
      local_688.PrimitiveInstanceIndicesView.ArrayNum = 0;
      local_688.InstanceTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_688.InstanceTransforms.ArrayNum = 0;
      local_688.InstanceTransforms.ArrayMax = 0;
      local_688.InstanceTransformsView.DataPtr = (TMatrix<double> *)0x0;
      local_688.InstanceTransformsView.ArrayNum = 0;
      local_688.Geometry = (FRayTracingGeometry *)plVar1;
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1080,&local_688.InstanceTransforms.AllocatorInstance,
                          &local_688.InstanceTransforms.ArrayMax);
      dVar10 = UE::Math::TMatrix<double>::Identity.M[0][1];
      local_688.InstanceTransforms.ArrayNum = iVar18 + 1;
      lVar25 = (longlong)iVar18 * 0x80;
      *(double *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar25) =
           UE::Math::TMatrix<double>::Identity.M[0][0];
      *(double *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar25 + 8) = dVar10;
      dVar10 = UE::Math::TMatrix<double>::Identity.M[0][3];
      *(double *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar25 + 0x10) =
           UE::Math::TMatrix<double>::Identity.M[0][2];
      *(double *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar25 + 0x10 + 8) = dVar10;
      dVar10 = UE::Math::TMatrix<double>::Identity.M[1][1];
      *(double *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar25 + 0x20) =
           UE::Math::TMatrix<double>::Identity.M[1][0];
      *(double *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar25 + 0x20 + 8) = dVar10;
      dVar10 = UE::Math::TMatrix<double>::Identity.M[1][3];
      *(double *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar25 + 0x30) =
           UE::Math::TMatrix<double>::Identity.M[1][2];
      *(double *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar25 + 0x30 + 8) = dVar10;
      dVar10 = UE::Math::TMatrix<double>::Identity.M[2][1];
      *(double *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar25 + 0x40) =
           UE::Math::TMatrix<double>::Identity.M[2][0];
      *(double *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar25 + 0x40 + 8) = dVar10;
      dVar10 = UE::Math::TMatrix<double>::Identity.M[2][3];
      *(double *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar25 + 0x50) =
           UE::Math::TMatrix<double>::Identity.M[2][2];
      *(double *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar25 + 0x50 + 8) = dVar10;
      dVar10 = UE::Math::TMatrix<double>::Identity.M[3][1];
      *(double *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar25 + 0x60) =
           UE::Math::TMatrix<double>::Identity.M[3][0];
      *(double *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar25 + 0x60 + 8) = dVar10;
      dVar10 = UE::Math::TMatrix<double>::Identity.M[3][3];
      *(double *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar25 + 0x70) =
           UE::Math::TMatrix<double>::Identity.M[3][2];
      *(double *)(local_688.InstanceTransforms.AllocatorInstance.Data + lVar25 + 0x70 + 8) = dVar10;
      if (((local_688.Materials.AllocatorInstance.Data <= &local_3c8) &&
          (&local_3c8 <
           (FMeshBatch *)
           (local_688.Materials.AllocatorInstance.Data +
           (longlong)local_688.Materials.ArrayMax * 0xe0))) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar18 = local_688.Materials.ArrayNum;
      if (local_688.Materials.ArrayNum == local_688.Materials.ArrayMax) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8e0,&local_688.Materials.AllocatorInstance,
                            &local_688.Materials.ArrayMax);
      }
      local_688.Materials.ArrayNum = iVar18 + 1;
      FMeshBatch::FMeshBatch
                ((FMeshBatch *)
                 (local_688.Materials.AllocatorInstance.Data + (longlong)iVar18 * 0xe0),&local_3c8);
      FVar12.Data = local_688.Materials.AllocatorInstance.Data;
      local_458.Data = (FScriptContainerElement *)0x0;
      pFVar22 = (FRWBuffer *)&this->_padding_;
      if ((int)this->_padding_ == 0) {
        pFVar22 = pFVar28;
      }
      bVar17 = this->NumCutoutVertexPerSubImage == 8;
      iVar13 = local_688.Materials.ArrayNum;
      iVar18 = 6;
      if (bVar17) {
        iVar18 = 0x12;
      }
      iVar24 = 2;
      if (bVar17) {
        iVar24 = 6;
      }
      local_450 = (FSceneViewStateInterface *)CONCAT44(local_450._4_4_,local_688.Materials.ArrayNum)
      ;
      if (local_688.Materials.ArrayNum == 0) {
        local_450 = (FSceneViewStateInterface *)(local_688.Materials._8_8_ & 0xffffffff);
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xe0,8,local_688.Materials.ArrayNum,0,&local_458,local_688.Materials.ArrayNum,
                   (int *)((longlong)&local_450 + 4));
        ConstructItems<FMeshBatch,FMeshBatch,int>(local_458.Data,(FMeshBatch *)FVar12.Data,iVar13);
      }
      if ((local_3c8.Elements.ArrayNum < 1) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar26 = (ForElementType<FMeshBatchElement>)&local_3c8;
      if (local_3c8.Elements.AllocatorInstance.SecondaryData !=
          (ForElementType<FMeshBatchElement>)0x0) {
        FVar26 = local_3c8.Elements.AllocatorInstance.SecondaryData;
      }
      local_578.bUsingIndirectDraw =
           *(uint *)((longlong)(((FMeshBatch *)FVar26)->Elements).AllocatorInstance.InlineData +
                    0x5c) == 0;
      local_578.NumTriangles = iVar24 * local_6d4;
      local_578.NumVertices = iVar18 * local_6d4;
      local_578.MeshBatches.AllocatorInstance.Data = local_458.Data;
      local_578.MeshBatches.ArrayNum = (int)local_450;
      local_578.VertexBufferSize = local_578.NumVertices * 0xc;
      local_428._0_1_ = 1;
      local_428._s_0.G = 0.0;
      local_418._s_0.R = UE::Math::TMatrix<float>::Identity.M[0][0];
      local_418._s_0.G = UE::Math::TMatrix<float>::Identity.M[0][1];
      local_418._s_0.B = UE::Math::TMatrix<float>::Identity.M[0][2];
      local_418._s_0.A = UE::Math::TMatrix<float>::Identity.M[0][3];
      local_408._s_0.R = UE::Math::TMatrix<float>::Identity.M[1][0];
      local_408._s_0.G = UE::Math::TMatrix<float>::Identity.M[1][1];
      local_408._s_0.B = UE::Math::TMatrix<float>::Identity.M[1][2];
      local_408._s_0.A = UE::Math::TMatrix<float>::Identity.M[1][3];
      local_3f8[0] = UE::Math::TMatrix<float>::Identity.M[2][0];
      local_3f8[1] = UE::Math::TMatrix<float>::Identity.M[2][1];
      afStack_3f0[0] = UE::Math::TMatrix<float>::Identity.M[2][2];
      afStack_3f0[1] = UE::Math::TMatrix<float>::Identity.M[2][3];
      local_3e8._s_0.X = (double)UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
      local_3e8._s_0.Y = (double)UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
      local_3e8._16_1_ = 0;
      local_458.Data = (FScriptContainerElement *)0x0;
      local_578.MeshBatches.ArrayMax = local_450._4_4_;
      local_450 = (FSceneViewStateInterface *)0x0;
      local_578.bApplyWorldPositionOffset = true;
      local_578.InstanceId = 0;
      local_578.WorldToInstance.M[0][0] = UE::Math::TMatrix<float>::Identity.M[0][0];
      local_578.WorldToInstance.M[0][1] = UE::Math::TMatrix<float>::Identity.M[0][1];
      local_578.WorldToInstance.M[0][2] = UE::Math::TMatrix<float>::Identity.M[0][2];
      local_578.WorldToInstance.M[0][3] = UE::Math::TMatrix<float>::Identity.M[0][3];
      local_578.WorldToInstance.M[1][0] = UE::Math::TMatrix<float>::Identity.M[1][0];
      local_578.WorldToInstance.M[1][1] = UE::Math::TMatrix<float>::Identity.M[1][1];
      local_578.WorldToInstance.M[1][2] = UE::Math::TMatrix<float>::Identity.M[1][2];
      local_578.WorldToInstance.M[1][3] = UE::Math::TMatrix<float>::Identity.M[1][3];
      local_578.WorldToInstance.M[2][0] = UE::Math::TMatrix<float>::Identity.M[2][0];
      local_578.WorldToInstance.M[2][1] = UE::Math::TMatrix<float>::Identity.M[2][1];
      local_578.WorldToInstance.M[2][2] = UE::Math::TMatrix<float>::Identity.M[2][2];
      local_578.WorldToInstance.M[2][3] = UE::Math::TMatrix<float>::Identity.M[2][3];
      local_578.WorldToInstance.M[3][0] = UE::Math::TMatrix<float>::Identity.M[3][0];
      local_578.WorldToInstance.M[3][1] = UE::Math::TMatrix<float>::Identity.M[3][1];
      local_578.WorldToInstance.M[3][2] = UE::Math::TMatrix<float>::Identity.M[3][2];
      local_578.WorldToInstance.M[3][3] = UE::Math::TMatrix<float>::Identity.M[3][3];
      local_578.bAlphaMasked = false;
      local_578.IndexBuffer.Reference = (FRHIBuffer *)0x0;
      local_3d0 = (FRHIResource *)0x0;
      local_578.Geometry = (FRayTracingGeometry *)plVar1;
      local_578.Buffer = pFVar22;
      local_448 = local_578.bUsingIndirectDraw;
      local_444 = local_578.NumVertices;
      local_440 = local_578.VertexBufferSize;
      local_43c = local_578.NumTriangles;
      local_438 = plVar1;
      local_430 = pFVar22;
      FRayTracingInstanceCollector::AddRayTracingGeometryUpdate(param_1,uVar30,&local_578);
      if (local_3d0 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_3d0);
      }
      DestructItems<FMeshBatch,int>((FMeshBatch *)local_458.Data,(int)local_450);
      if ((FMeshBatch *)local_458.Data != (FMeshBatch *)0x0) {
        FMemory::Free(local_458.Data);
      }
      uVar30 = local_694;
      if (0 < iVar2) {
        do {
          uVar27 = (uint)pFVar28;
          if ((uVar30 >> (uVar27 & 0x1f) & 1) != 0) {
            pFVar23 = FRayTracingInstance::FRayTracingInstance(&local_4d0,&local_688);
            FRayTracingInstanceCollector::AddRayTracingInstance(param_1,uVar27,pFVar23);
          }
          pFVar28 = (FRWBuffer *)(ulonglong)(uVar27 + 1);
        } while ((int)(uVar27 + 1) < iVar2);
      }
      if (local_688.InstanceTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_688.InstanceTransforms.AllocatorInstance.Data);
      }
      if (local_688.PrimitiveInstanceIndices.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_688.PrimitiveInstanceIndices.AllocatorInstance.Data);
      }
      DestructItems<FMeshBatch,int>
                ((FMeshBatch *)local_688.Materials.AllocatorInstance.Data,
                 local_688.Materials.ArrayNum);
      if ((FMeshBatch *)local_688.Materials.AllocatorInstance.Data != (FMeshBatch *)0x0) {
        FMemory::Free(local_688.Materials.AllocatorInstance.Data);
      }
      FVar26 = (ForElementType<FMeshBatchElement>)&local_3c8;
      if (local_3c8.Elements.AllocatorInstance.SecondaryData !=
          (ForElementType<FMeshBatchElement>)0x0) {
        FVar26 = local_3c8.Elements.AllocatorInstance.SecondaryData;
      }
      DestructItems<FMeshBatchElement,int>((FMeshBatchElement *)FVar26,local_3c8.Elements.ArrayNum);
      if (local_3c8.Elements.AllocatorInstance.SecondaryData !=
          (ForElementType<FMeshBatchElement>)0x0) {
        FMemory::Free((void *)local_3c8.Elements.AllocatorInstance.SecondaryData);
      }
    }
  }
  if (local_2e8.AllocationInfo.BufferSRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_2e8.AllocationInfo.BufferSRV.Reference);
  }
  if (local_2e8.GPUParticleCountSRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_2e8.GPUParticleCountSRV.Reference);
  }
  if (local_2e8.ParticleDataIntSRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_2e8.ParticleDataIntSRV.Reference);
  }
  if (local_2e8.ParticleDataHalfSRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_2e8.ParticleDataHalfSRV.Reference);
  }
  if (local_2e8.ParticleDataFloatSRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_2e8.ParticleDataFloatSRV.Reference);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(FVar29,CycleScopeEnd);
  }
  return;
}

// InitializeSortInfo @ 1493a9af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraRendererSprites::InitializeSortInfo
          (FNiagaraRendererSprites *this,FParticleSpriteRenderData *param_1,
          FNiagaraSceneProxy *param_2,FSceneView *param_3,int param_4,FNiagaraGPUSortInfo *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ushort uVar8;
  int iVar9;
  Type TVar10;
  FNiagaraRendererLayout *pFVar11;
  FScriptContainerElement *pFVar12;
  FRHIShaderResourceView *pFVar13;
  FNiagaraGpuComputeDispatchInterface *pFVar14;
  code *pcVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  FViewMatrices *pFVar19;
  TVector<float> *pTVar20;
  FRHIShaderResourceView *pFVar21;
  EGPUSortFlags EVar22;
  uint uVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  pFVar11 = param_1->RendererLayout;
  bVar18 = IsInParallelRenderingThread();
  if ((!bVar18) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInParallelRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraRendererProperties.h"
                          ,0x9b,L""), bVar18)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  pFVar12 = (pFVar11->VFVariables_RT).AllocatorInstance.Data;
  iVar9 = (pFVar11->VFVariables_RT).ArrayNum;
  if ((iVar9 < 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar18)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  param_5->OwnerName = *(FName *)this->_padding_;
  param_5->ParticleCount = param_1->SourceParticleData->NumInstances;
  param_5->SortMode = this->SortMode;
  EVar22 = ValuesAsInt32|SortAfterPostRenderOpaque|KeyGenAfterPostRenderOpaque;
  if (param_1->SourceParticleData->GPUDataReadyStage != Last) {
    EVar22 = ValuesAsInt32|SortAfterPreRender|KeyGenAfterPreRender;
  }
  param_5->SortFlags = EVar22 | (this->bSortHighPrecision != 0) + LowPrecisionKeys;
  param_5->bEnableCulling = param_1->bNeedsCull;
  param_5->RendererVisTagAttributeOffset = param_1->RendererVisTagOffset;
  param_5->RendererVisibility = this->RendererVisibility;
  (param_5->DistanceCullRange).field0_0x0 = (this->DistanceCullRange).field0_0x0;
  if (this->bEnableDistanceCulling != 0) {
    if (param_1->bSortCullOnGpu == false) {
      if ((iVar9 < 1) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      uVar8 = *(ushort *)pFVar12;
    }
    else {
      if ((iVar9 < 1) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      uVar8 = *(ushort *)(pFVar12 + 2);
    }
    uVar23 = 0xffffffff;
    if (uVar8 != 0xffff) {
      uVar23 = (uint)uVar8;
    }
    param_5->CullPositionAttributeOffset =
         -(uint)(pFVar12[7] != (FScriptContainerElement)0x0) & 0x80000000 | uVar23;
  }
  if (((param_3->State == (FSceneViewStateInterface *)0x0) ||
      (pFVar19 = (FViewMatrices *)(**(code **)(param_3->State->_padding_ + 0x38))(),
      pFVar19 == (FViewMatrices *)0x0)) ||
     (param_3->DynamicMeshElementsShadowCullFrustum != (FConvexVolume *)0x0)) {
    pFVar19 = &param_3->ViewMatrices;
  }
  dVar1 = (pFVar19->ViewOrigin).field0_0x0._s_0.Y;
  (param_5->ViewOrigin).field0_0x0._s_0.X = (pFVar19->ViewOrigin).field0_0x0._s_0.X;
  (param_5->ViewOrigin).field0_0x0._s_0.Y = dVar1;
  (param_5->ViewOrigin).field0_0x0._s_0.Z = (pFVar19->ViewOrigin).field0_0x0._s_0.Z;
  dVar1 = (pFVar19->ViewMatrix).M[1][2];
  dVar2 = (pFVar19->ViewMatrix).M[2][2];
  (param_5->ViewDirection).field0_0x0._s_0.X = (pFVar19->ViewMatrix).M[0][2];
  (param_5->ViewDirection).field0_0x0._s_0.Y = dVar1;
  (param_5->ViewDirection).field0_0x0._s_0.Z = dVar2;
  bVar18 = FNiagaraRenderer::UseLocalSpace((FNiagaraRenderer *)this,param_2);
  dVar1 = __real_3ff0000000000000;
  if (bVar18) {
    dVar26 = (param_5->ViewOrigin).field0_0x0._s_0.X;
    dVar27 = (param_5->ViewOrigin).field0_0x0._s_0.Y;
    dVar3 = (param_2->LocalToWorldInverse).M[1][1];
    dVar4 = (param_2->LocalToWorldInverse).M[1][2];
    dVar2 = (param_5->ViewOrigin).field0_0x0._s_0.Z;
    dVar5 = (param_2->LocalToWorldInverse).M[0][1];
    dVar6 = (param_2->LocalToWorldInverse).M[2][1];
    dVar25 = __real_3ff0000000000000 * (param_2->LocalToWorldInverse).M[3][1];
    dVar7 = (param_2->LocalToWorldInverse).M[0][2];
    dVar16 = (param_2->LocalToWorldInverse).M[2][2];
    dVar17 = (param_2->LocalToWorldInverse).M[3][2];
    (param_5->ViewOrigin).field0_0x0._s_0.X =
         dVar27 * (param_2->LocalToWorldInverse).M[1][0] +
         (param_2->LocalToWorldInverse).M[0][0] * dVar26 +
         (param_2->LocalToWorldInverse).M[2][0] * dVar2 +
         __real_3ff0000000000000 * (param_2->LocalToWorldInverse).M[3][0];
    (param_5->ViewOrigin).field0_0x0._s_0.Y =
         dVar27 * dVar3 + dVar5 * dVar26 + dVar6 * dVar2 + dVar25;
    (param_5->ViewOrigin).field0_0x0._s_0.Z =
         dVar4 * dVar27 + dVar7 * dVar26 + dVar16 * dVar2 + dVar17 * dVar1;
    dVar16 = (param_5->ViewDirection).field0_0x0._s_0.X;
    dVar17 = (param_5->ViewDirection).field0_0x0._s_0.Y;
    dVar1 = (param_5->ViewDirection).field0_0x0._s_0.Z;
    dVar2 = (double)param_2->_padding_;
    dVar26 = (double)param_2->_padding_;
    dVar27 = (double)param_2->_padding_;
    dVar3 = (double)param_2->_padding_;
    dVar4 = (double)param_2->_padding_;
    dVar5 = (double)param_2->_padding_;
    dVar6 = (double)param_2->_padding_;
    dVar7 = (double)param_2->_padding_;
    (param_5->ViewDirection).field0_0x0._s_0.X =
         (double)param_2->_padding_ * dVar17 + (double)param_2->_padding_ * dVar16 +
         (double)param_2->_padding_ * dVar1 + (double)param_2->_padding_ * 0.0;
    (param_5->ViewDirection).field0_0x0._s_0.Y =
         dVar2 * dVar17 + dVar26 * dVar16 + dVar27 * dVar1 + dVar3 * 0.0;
    (param_5->ViewDirection).field0_0x0._s_0.Z =
         dVar4 * dVar17 + dVar5 * dVar16 + dVar6 * dVar1 + dVar7 * 0.0;
  }
  else {
    pTVar20 = FNiagaraSceneProxy::GetLWCRenderTile(param_2);
    dVar27 = (double)(pTVar20->field0_0x0)._s_0.Y * __real_4140000000000000;
    dVar26 = (double)(pTVar20->field0_0x0)._s_0.Z * __real_4140000000000000;
    dVar1 = (param_5->ViewOrigin).field0_0x0._s_0.Y;
    (param_5->ViewOrigin).field0_0x0._s_0.X =
         (param_5->ViewOrigin).field0_0x0._s_0.X -
         (double)(pTVar20->field0_0x0)._s_0.X * __real_4140000000000000;
    dVar2 = (param_5->ViewOrigin).field0_0x0._s_0.Z;
    (param_5->ViewOrigin).field0_0x0._s_0.Y = dVar1 - dVar27;
    (param_5->ViewOrigin).field0_0x0._s_0.Z = dVar2 - dVar26;
  }
  if (param_1->bSortCullOnGpu != false) {
    pFVar21 = param_1->ParticleFloatSRV;
    pFVar13 = (param_5->ParticleDataFloatSRV).Reference;
    pFVar14 = param_2->ComputeDispatchInterface;
    if (pFVar13 != pFVar21) {
      (param_5->ParticleDataFloatSRV).Reference = pFVar21;
      if (pFVar21 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar21);
      }
      if (pFVar13 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar13);
      }
    }
    pFVar21 = param_1->ParticleHalfSRV;
    pFVar13 = (param_5->ParticleDataHalfSRV).Reference;
    if (pFVar13 != pFVar21) {
      (param_5->ParticleDataHalfSRV).Reference = pFVar21;
      if (pFVar21 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar21);
      }
      if (pFVar13 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar13);
      }
    }
    pFVar21 = param_1->ParticleIntSRV;
    pFVar13 = (param_5->ParticleDataIntSRV).Reference;
    if (pFVar13 != pFVar21) {
      (param_5->ParticleDataIntSRV).Reference = pFVar21;
      if (pFVar21 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar21);
      }
      if (pFVar13 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar13);
      }
    }
    param_5->FloatDataStride = param_1->ParticleFloatDataStride;
    param_5->HalfDataStride = param_1->ParticleHalfDataStride;
    param_5->IntDataStride = param_1->ParticleIntDataStride;
    bVar18 = IsInParallelRenderingThread();
    if ((!bVar18) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInParallelRenderingThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                            ,0x6a,L""), bVar18)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    if (((pFVar14->GPUInstanceCounterManager).AllocatedInstanceCounts <
         (pFVar14->GPUInstanceCounterManager).UsedInstanceCounts) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("UsedInstanceCounts <= AllocatedInstanceCounts",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                            ,0x44,L""), bVar18)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    pFVar21 = (pFVar14->GPUInstanceCounterManager).CountBuffer.SRV.Reference;
    if (pFVar21 == (FRHIShaderResourceView *)0x0) {
      pFVar21 = FNiagaraRenderer::GetDummyUIntBuffer();
    }
    pFVar13 = (param_5->GPUParticleCountSRV).Reference;
    if (pFVar13 != pFVar21) {
      (param_5->GPUParticleCountSRV).Reference = pFVar21;
      if (pFVar21 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar21);
      }
      if (pFVar13 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar13);
      }
    }
    param_5->GPUParticleCountOffset = param_1->SourceParticleData->GPUInstanceCountBufferOffset;
  }
  TVar10 = param_1->SortVariable;
  lVar24 = (longlong)(int)TVar10;
  if (TVar10 != ~Position) {
    uVar23 = 0;
    if ((int)TVar10 < iVar9) {
      uVar23 = ~TVar10 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar18)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    if (param_1->bSortCullOnGpu == false) {
      uVar8 = *(ushort *)(pFVar12 + lVar24 * 8);
    }
    else {
      uVar8 = *(ushort *)(pFVar12 + (lVar24 * 4 + 1) * 2);
    }
    uVar23 = 0xffffffff;
    if (uVar8 != 0xffff) {
      uVar23 = (uint)uVar8;
    }
    param_5->SortAttributeOffset =
         -(uint)(pFVar12[lVar24 * 8 + 7] != (FScriptContainerElement)0x0) & 0x80000000 | uVar23;
  }
  return;
}

// IsMaterialValid @ 1493aa490

bool __thiscall
FNiagaraRendererSprites::IsMaterialValid(FNiagaraRendererSprites *this,UMaterialInterface *param_1)

{
  char cVar1;
  
  if (param_1 != (UMaterialInterface *)0x0) {
    cVar1 = (**(code **)(param_1->_padding_ + 0x378))(param_1,10);
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// PrepareParticleRenderBuffers @ 1493abb00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraRendererSprites::PrepareParticleRenderBuffers
          (FNiagaraRendererSprites *this,FRHICommandListBase *param_1,
          FParticleSpriteRenderData *param_2,FGlobalDynamicReadBuffer *param_3)

{
  undefined1 auVar1 [16];
  uchar auVar2 [4];
  FNiagaraDataBuffer *pFVar3;
  code *pcVar4;
  uchar *puVar5;
  uchar *puVar6;
  bool bVar7;
  uint uVar8;
  FParticleRenderData *pFVar9;
  FRHIShaderResourceView *pFVar10;
  FRHIShaderResourceView *pFVar11;
  FRHIShaderResourceView *pFVar12;
  ForElementType<unsigned_int> FVar13;
  undefined1 auStackY_178 [32];
  ForElementType<unsigned_int> local_128;
  ForElementType<unsigned_int> local_118;
  uint uStack_110;
  undefined4 uStack_10c;
  TArrayView<unsigned_int_const_,int> local_108;
  FParticleRenderData local_f8;
  ForElementType<unsigned_int> local_98;
  uint local_88;
  uint local_84;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (this->SourceMode == Particles) {
    if (*(char *)((longlong)&this->_padding_ + 4) == '\0') {
      local_98.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_88 = 0;
      local_84 = 1;
      if (param_2->bNeedsCull != false) {
        auVar2 = (uchar  [4])this->RendererVisTagOffset;
        if (param_2->bSortCullOnGpu == false) {
          param_2->RendererVisTagOffset = (uint)auVar2;
        }
        else if (auVar2 != (uchar  [4])0xffffffff) {
          uVar8 = 0;
          local_128.InlineData = auVar2;
          if ((&local_98 <= &local_128) && (&local_128 < &local_98._padding_)) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar8 = local_88;
            if (local_88 == local_84) {
              uVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                                (0x404,&local_98,(int *)&local_84);
            }
          }
          local_88 = uVar8 + 1;
          FVar13 = (ForElementType<unsigned_int>)&local_98;
          if (local_98.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar13 = local_98.SecondaryData;
          }
          *(uchar (*) [4])((longlong)FVar13 + (longlong)(int)uVar8 * 4) = local_128.InlineData;
          param_2->RendererVisTagOffset = uVar8;
        }
      }
      uVar8 = local_88;
      pFVar3 = param_2->SourceParticleData;
      local_118 = (ForElementType<unsigned_int>)&local_98;
      if (local_98.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        local_118 = local_98.SecondaryData;
      }
      if (((int)local_88 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_108._12_4_ = uStack_10c;
      local_108.ArrayNum = uVar8;
      local_108.DataPtr = (uint *)local_118;
      uStack_110 = uVar8;
      pFVar9 = FNiagaraRenderer::TransferDataToGPU
                         (&local_f8,param_1,param_3,param_2->RendererLayout,&local_108,pFVar3);
      pFVar10 = (pFVar9->FloatData).SRV;
      puVar5 = (pFVar9->HalfData).Buffer;
      pFVar11 = (pFVar9->HalfData).SRV;
      puVar6 = (pFVar9->IntData).Buffer;
      auVar1 = *(undefined1 (*) [16])&(pFVar9->IntData).SRV;
      pFVar12 = auVar1._0_8_;
      local_f8.IntStride = pFVar9->IntStride;
      local_f8._84_4_ = *(undefined4 *)&pFVar9->field_0x54;
      if ((pFVar9->FloatData).Buffer == (uchar *)0x0) {
        pFVar10 = FNiagaraRenderer::GetDummyFloatBuffer();
      }
      param_2->ParticleFloatSRV = pFVar10;
      if (puVar5 == (uchar *)0x0) {
        pFVar11 = FNiagaraRenderer::GetDummyHalfBuffer();
      }
      param_2->ParticleHalfSRV = pFVar11;
      if (puVar6 == (uchar *)0x0) {
        pFVar12 = FNiagaraRenderer::GetDummyIntBuffer();
      }
      param_2->ParticleIntSRV = pFVar12;
      param_2->ParticleFloatDataStride = auVar1._8_4_ >> 2;
      param_2->ParticleHalfDataStride = auVar1._12_4_ >> 1;
      param_2->ParticleIntDataStride = local_f8.IntStride >> 2;
      if (local_98.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_98.SecondaryData);
      }
    }
    else {
      pFVar10 = (param_2->SourceParticleData->GPUBufferFloat).SRV.Reference;
      if (pFVar10 == (FRHIShaderResourceView *)0x0) {
        pFVar10 = FNiagaraRenderer::GetDummyFloatBuffer();
      }
      param_2->ParticleFloatSRV = pFVar10;
      pFVar10 = (param_2->SourceParticleData->GPUBufferHalf).SRV.Reference;
      if (pFVar10 == (FRHIShaderResourceView *)0x0) {
        pFVar10 = FNiagaraRenderer::GetDummyHalfBuffer();
      }
      param_2->ParticleHalfSRV = pFVar10;
      pFVar10 = (param_2->SourceParticleData->GPUBufferInt).SRV.Reference;
      if (pFVar10 == (FRHIShaderResourceView *)0x0) {
        pFVar10 = FNiagaraRenderer::GetDummyIntBuffer();
      }
      pFVar3 = param_2->SourceParticleData;
      param_2->ParticleIntSRV = pFVar10;
      param_2->ParticleFloatDataStride = pFVar3->FloatStride >> 2;
      param_2->ParticleHalfDataStride = pFVar3->HalfStride >> 1;
      param_2->ParticleIntDataStride = pFVar3->Int32Stride >> 2;
      param_2->RendererVisTagOffset = this->RendererVisTagOffset;
    }
  }
  else {
    pFVar10 = FNiagaraRenderer::GetDummyFloatBuffer();
    param_2->ParticleFloatSRV = pFVar10;
    pFVar10 = FNiagaraRenderer::GetDummyHalfBuffer();
    param_2->ParticleHalfSRV = pFVar10;
    pFVar10 = FNiagaraRenderer::GetDummyIntBuffer();
    param_2->ParticleIntSRV = pFVar10;
    param_2->ParticleFloatDataStride = 0;
    param_2->ParticleHalfDataStride = 0;
    param_2->ParticleIntDataStride = 0;
  }
  return;
}

// PrepareParticleSpriteRenderData @ 1493abe70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraRendererSprites::PrepareParticleSpriteRenderData
          (FNiagaraRendererSprites *this,FRHICommandListBase *param_1,
          FParticleSpriteRenderData *param_2,FSceneViewFamily *param_3,
          FNiagaraDynamicDataBase *param_4,FNiagaraSceneProxy *param_5,Type param_6)

{
  Type TVar1;
  FMaterialRenderProxy *this_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  EBlendMode EVar6;
  int iVar7;
  uint uVar8;
  FNiagaraDataBuffer *pFVar9;
  FMaterial *pFVar10;
  FNiagaraRendererLayout *this_01;
  FNiagaraGPUInstanceCountManager *pFVar11;
  bool *pbVar12;
  longlong lVar13;
  TArrayView<FNiagaraRendererVariableInfo_const_,int> local_28;
  
  param_2->DynamicDataSprites = (FNiagaraDynamicDataSprites *)param_4;
  if ((param_4 == (FNiagaraDynamicDataBase *)0x0) ||
     (param_5->ComputeDispatchInterface == (FNiagaraGpuComputeDispatchInterface *)0x0)) {
    param_2->SourceParticleData = (FNiagaraDataBuffer *)0x0;
    return;
  }
  pFVar9 = FNiagaraDynamicDataBase::GetParticleDataToRender
                     (param_4,param_1,this->bGpuLowLatencyTranslucency);
  if (pFVar9 == (FNiagaraDataBuffer *)0x0) {
    return;
  }
  if ((this->SourceMode == Particles) && (pFVar9->NumInstances == 0)) {
    return;
  }
  if (GbEnableNiagaraSpriteRendering == false) {
    return;
  }
  this_00 = param_2->DynamicDataSprites->Material;
  if ((this_00 == (FMaterialRenderProxy *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaterialRenderProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererSprites.cpp"
                         ,0xf8,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar10 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback(this_00,(Type)this->_padding_);
  EVar6 = (**(code **)(pFVar10->_padding_ + 0x268))(pFVar10);
  param_2->BlendMode = EVar6;
  bVar3 = IsTranslucentBlendMode(pFVar10);
  param_2->bHasTranslucentMaterials = bVar3;
  if ((((bVar3) && (this->bGpuLowLatencyTranslucency != 0)) &&
      (iVar7 = (**(code **)(pFVar10->_padding_ + 0x40))(pFVar10), iVar7 == 0)) &&
     ((((int)pFVar9->GPUDataReadyStage <= (int)param_6 &&
       ((param_5->_padding_ & 0x100000000000000) == 0)) &&
      (bVar3 = FNiagaraRenderer::ViewFamilySupportLowLatencyTranslucency(param_3), bVar3)))) {
    bVar3 = true;
    bVar4 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)param_5);
    if (bVar4) {
      cVar5 = (**(code **)(pFVar10->_padding_ + 0x60))(pFVar10);
      bVar3 = cVar5 == '\0';
    }
  }
  else {
    bVar3 = false;
  }
  pFVar9 = FNiagaraDynamicDataBase::GetParticleDataToRender
                     ((FNiagaraDynamicDataBase *)param_2->DynamicDataSprites,param_1,bVar3);
  param_2->SourceParticleData = pFVar9;
  if ((pFVar9 == (FNiagaraDataBuffer *)0x0) ||
     ((this->SourceMode == Particles && (pFVar9->NumInstances == 0)))) {
LAB_1493ac2a3:
    param_2->SourceParticleData = (FNiagaraDataBuffer *)0x0;
    return;
  }
  if (this->bVisTagInParamStore != 0) {
    iVar7 = this->RendererVisTagOffset;
    if (((-1 < iVar7) && (iVar7 < (param_2->DynamicDataSprites->ParameterDataBound).ArrayNum)) &&
       (this->RendererVisibility !=
        *(int *)((param_2->DynamicDataSprites->ParameterDataBound).AllocatorInstance.Data + iVar7)))
    goto LAB_1493ac2a3;
  }
  if (this->SourceMode != Particles) {
    return;
  }
  if ((this->SortMode == None) ||
     (((bVar3 = IsAlphaCompositeBlendMode(pFVar10), !bVar3 &&
       (bVar3 = IsAlphaHoldoutBlendMode(pFVar10), !bVar3)) &&
      ((bVar3 = IsTranslucentOnlyBlendMode(pFVar10), !bVar3 && (this->bSortOnlyWhenTranslucent != 0)
       ))))) {
    bVar3 = false;
    param_2->bNeedsSort = false;
LAB_1493ac0aa:
    lVar13 = 0x268;
    this_01 = this->RendererLayoutWithoutCustomSort;
    param_2->RendererLayout = this_01;
    param_2->SortVariable = Position;
    bVar4 = false;
    if (!bVar3) goto LAB_1493ac156;
  }
  else {
    bVar3 = true;
    param_2->bNeedsSort = true;
    if ((this->SortMode != CustomAscending) && (this->SortMode != CustomDecending))
    goto LAB_1493ac0aa;
    lVar13 = 0x260;
    this_01 = this->RendererLayoutWithCustomSort;
    param_2->RendererLayout = this_01;
    param_2->SortVariable = CustomSorting;
  }
  FNiagaraRendererLayout::GetVFVariables_RenderThread(this_01,&local_28);
  TVar1 = param_2->SortVariable;
  uVar8 = 0;
  if ((int)TVar1 < local_28.ArrayNum) {
    uVar8 = ~TVar1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar8 = 0xffffffff;
  if (local_28.DataPtr[(int)TVar1].GPUBufferOffset != 0xffff) {
    uVar8 = (uint)local_28.DataPtr[(int)TVar1].GPUBufferOffset;
  }
  bVar4 = (-(uint)(local_28.DataPtr[(int)TVar1].bHalfType != false) & 0x80000000 | uVar8) !=
          0xffffffff;
  param_2->bNeedsSort = bVar4;
LAB_1493ac156:
  param_2->bNeedsCull = this->bEnableCulling;
  if (((bVar4) && (bVar3 = FNiagaraUtilities::AllowGPUSorting(), bVar3)) ||
     ((param_2->bNeedsCull != false && (bVar3 = FNiagaraUtilities::AllowGPUCulling(), bVar3)))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  pbVar12 = &param_2->bNeedsCull;
  param_2->bSortCullOnGpu = bVar3;
  if (*(char *)((longlong)&this->_padding_ + 4) == '\x01') {
    if ((*pbVar12 != false) && (bVar3 == false)) {
      param_4 = (FNiagaraDynamicDataBase *)&param_5;
      bVar3 = `FNiagaraRendererSprites::PrepareParticleSpriteRenderData'::__l37::<lambda_1>::
              operator()(&param_4);
      if (!bVar3) {
        *pbVar12 = false;
      }
    }
    bVar3 = (bool)(param_2->bNeedsSort & param_2->bSortCullOnGpu);
    param_2->bNeedsSort = bVar3;
    if (((bVar3 != false) || (*pbVar12 != false)) &&
       (pFVar11 = FNiagaraGpuComputeDispatchInterface::GetGPUInstanceCounterManager
                            (param_5->ComputeDispatchInterface),
       pFVar11->bAcquiredCulledCounts != false)) {
      param_2->bNeedsSort = false;
      param_2->bNeedsCull = false;
    }
  }
  else if (bVar3 != false) {
    pFVar11 = FNiagaraGpuComputeDispatchInterface::GetGPUInstanceCounterManager
                        (param_5->ComputeDispatchInterface);
    bVar4 = false;
    if (pFVar11->bAcquiredCulledCounts == false) {
      bVar4 = bVar3;
    }
    param_2->bSortCullOnGpu = bVar4;
    if (bVar4 != false) {
      uVar8 = param_2->SourceParticleData->NumInstances;
      if ((GNiagaraGPUSortingCPUToGPUThreshold < 0) ||
         ((int)uVar8 < GNiagaraGPUSortingCPUToGPUThreshold)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((GNiagaraGPUCullingCPUToGPUThreshold < 0) ||
         ((int)uVar8 < GNiagaraGPUCullingCPUToGPUThreshold)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar3) || (bVar3 = false, bVar4)) {
        bVar3 = true;
      }
      param_2->bSortCullOnGpu = bVar3;
    }
  }
  param_2->RendererLayout = *(FNiagaraRendererLayout **)((longlong)&this->_padding_ + lVar13);
  return;
}

// ReleaseRenderThreadResources @ 1493b4b00

void __thiscall FNiagaraRendererSprites::ReleaseRenderThreadResources(FNiagaraRendererSprites *this)

{
  FRHIResource *pFVar1;
  bool bVar2;
  
  (**(code **)((this->CutoutVertexBuffer)._padding_ + 0x20))();
  bVar2 = IsRayTracingAllowed();
  if (bVar2) {
    (**(code **)(this->_padding_ + 0x20))(&this->_padding_);
    *(undefined4 *)&this->_padding_ = 0;
    pFVar1 = (FRHIResource *)this->_padding_;
    if (pFVar1 != (FRHIResource *)0x0) {
      this->_padding_ = 0;
      FRHIResource::Release(pFVar1);
    }
    pFVar1 = (FRHIResource *)this->_padding_;
    if (pFVar1 != (FRHIResource *)0x0) {
      this->_padding_ = 0;
      FRHIResource::Release(pFVar1);
    }
    pFVar1 = (FRHIResource *)this->_padding_;
    if (pFVar1 != (FRHIResource *)0x0) {
      this->_padding_ = 0;
      FRHIResource::Release(pFVar1);
    }
  }
  return;
}

// SetupVertexFactory @ 1493b7230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */

void __thiscall
FNiagaraRendererSprites::SetupVertexFactory
          (FNiagaraRendererSprites *this,FRHICommandListBase *param_1,
          FParticleSpriteRenderData *param_2,FNiagaraSpriteVertexFactory *param_3)

{
  FScriptContainerElement FVar1;
  int iVar2;
  FNiagaraRendererLayout *pFVar3;
  FScriptContainerElement *pFVar4;
  FRHIShaderResourceView *this_00;
  FRHIShaderResourceView *this_01;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  ENiagaraSpriteFacingMode EVar8;
  uint uVar9;
  uint uVar10;
  ENiagaraSpriteAlignment EVar11;
  
  EVar11 = this->Alignment;
  EVar8 = this->FacingMode;
  uVar10 = 0xffffffff;
  if (this->SourceMode == Particles) {
    pFVar3 = param_2->RendererLayout;
    bVar7 = IsInParallelRenderingThread();
    if ((!bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInParallelRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraRendererProperties.h"
                           ,0x9b,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (pFVar3->VFVariables_RT).AllocatorInstance.Data;
    iVar2 = (pFVar3->VFVariables_RT).ArrayNum;
    if ((iVar2 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((iVar2 < 6) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar10 = 0xffffffff;
    uVar9 = 0xffffffff;
    if (*(ushort *)(pFVar4 + 0x2a) != 0xffff) {
      uVar9 = (uint)*(ushort *)(pFVar4 + 0x2a);
    }
    FVar1 = pFVar4[0x2f];
    if ((iVar2 < 7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (*(ushort *)(pFVar4 + 0x32) != 0xffff) {
      uVar10 = (uint)*(ushort *)(pFVar4 + 0x32);
    }
    uVar10 = -(uint)(pFVar4[0x37] != (FScriptContainerElement)0x0) & 0x80000000 | uVar10;
    if ((-(uint)(FVar1 != (FScriptContainerElement)0x0) & 0x80000000 | uVar9) != 0xffffffff)
    goto LAB_1493b73cb;
  }
  if ((this->VFBoundOffsetsInParamStore[5] == -1) && (EVar8 == CustomFacingVector)) {
    EVar8 = FaceCamera;
  }
LAB_1493b73cb:
  fVar6 = __real_3f800000;
  if (((uVar10 == 0xffffffff) && (this->VFBoundOffsetsInParamStore[6] == -1)) &&
     (EVar11 == CustomAlignment)) {
    EVar11 = Unaligned;
  }
  param_3->AlignmentMode = (uint)EVar11;
  param_3->FacingMode = (uint)EVar8;
  if ((fVar6 == (this->SubImageSize).field0_0x0._s_0.X) &&
     (fVar6 == (this->SubImageSize).field0_0x0._s_0.Y)) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
  if ((this->CutoutVertexBuffer)._padding_ != 0) {
    uVar9 = this->NumCutoutVertexPerSubImage;
    if (((uVar9 & 1) != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(InNumCutoutVertexPerSubImage & 1) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraVertexFactories\\Public\\NiagaraSpriteVertexFactory.h"
                           ,0x96,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    param_3->CutoutParameters = uVar10 | uVar9;
    this_00 = (this->CutoutVertexBuffer).VertexBufferSRV.Reference;
    this_01 = (param_3->CutoutGeometrySRV).Reference;
    if (this_01 != this_00) {
      (param_3->CutoutGeometrySRV).Reference = this_00;
      if (this_00 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this_00);
      }
      if (this_01 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_01);
      }
    }
    if ((char)uVar10 == '\0') {
      param_3->VertexBufferOverride = (FVertexBuffer *)&this->CutoutVertexBuffer;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001493b74c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3->_padding_ + 0x18))(param_3,param_1);
  return;
}

// operator() @ 150541890

bool __thiscall
`FNiagaraRendererSprites::PrepareParticleSpriteRenderData'::__l37::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2978216553104801480>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)this + 0x238);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2978216553104801480>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15054190b;
    }
  }
  bVar2 = false;
LAB_15054190b:
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

