// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// FNiagaraRendererVolumes @ 149386760

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

FNiagaraRendererVolumes * __thiscall
FNiagaraRendererVolumes::FNiagaraRendererVolumes
          (FNiagaraRendererVolumes *this,Type param_1,UNiagaraRendererProperties *param_2,
          FNiagaraEmitterInstance *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  UNiagaraVolumeRendererProperties *pUVar5;
  FNiagaraRendererVolumes *pFVar6;
  int *piVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  int *piVar11;
  
  FNiagaraRenderer::FNiagaraRenderer((FNiagaraRenderer *)this,param_1,param_2,param_3);
  this->SourceMode = Emitter;
  this->_padding_ = (longlong)&___7FNiagaraRendererVolumes__6B_;
  this->RendererVisibilityTag = 0;
  *(undefined1 *)&this->PositionDataSetAccessor = 1;
  *(undefined4 *)&(this->PositionDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->RotationDataSetAccessor = 1;
  *(undefined4 *)&(this->RotationDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->ScaleDataSetAccessor = 1;
  *(undefined8 *)&(this->ScaleDataSetAccessor).field_0x4 = 0xffffffffffffffff;
  this->VolumeResolutionMaxAxisAccessor = (FNiagaraDataSetAccessor<int>)0xffffffff;
  *(undefined1 *)&this->VolumeWorldSpaceSizeAccessor = 1;
  *(undefined4 *)&(this->VolumeWorldSpaceSizeAccessor).field_0x4 = 0xffffffff;
  this->bAnyVFBoundOffsets = false;
  FLocalVertexFactory::FLocalVertexFactory(&this->VertexFactory,param_1,"FNiagaraRendererVolumes");
  pUVar5 = CastChecked<UNiagaraVolumeRendererProperties_const_,UNiagaraRendererProperties_const_>
                     (param_2);
  if (pUVar5 == (UNiagaraVolumeRendererProperties *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Properties",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererVolumes.cpp"
                       ,0x4c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FNiagaraRendererVolumes *)(*pcVar1)();
      return pFVar6;
    }
  }
  this->SourceMode = pUVar5->SourceMode;
  this->RendererVisibilityTag = pUVar5->RendererVisibility;
  this->PositionDataSetAccessor = pUVar5->PositionDataSetAccessor;
  this->RotationDataSetAccessor = pUVar5->RotationDataSetAccessor;
  this->ScaleDataSetAccessor = pUVar5->ScaleDataSetAccessor;
  this->RendererVisibilityTagAccessor = pUVar5->RendererVisibilityTagAccessor;
  this->VolumeResolutionMaxAxisAccessor = pUVar5->VolumeResolutionMaxAxisAccessor;
  this->VolumeWorldSpaceSizeAccessor = pUVar5->VolumeWorldSpaceSizeAccessor;
  if ((int)pUVar5->_padding_ != 6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(sizeof(UEArrayCountHelper(VFBoundOffsetsInParamStore)) - 1) == VFAttributeBindings.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererVolumes.cpp"
                       ,0x5a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FNiagaraRendererVolumes *)(*pcVar1)();
      return pFVar6;
    }
  }
  uVar8 = 0;
  lVar9 = 0;
  piVar11 = this->VFBoundOffsetsInParamStore;
  do {
    *piVar11 = -1;
    uVar10 = ~uVar8 >> 0x1f;
    uVar3 = 0;
    if ((int)uVar8 < (int)pUVar5->_padding_) {
      uVar3 = uVar10;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FNiagaraRendererVolumes *)(*pcVar1)();
        return pFVar6;
      }
    }
    if (*(longlong *)(pUVar5->_padding_ + lVar9) != 0) {
      uVar3 = 0;
      if ((int)uVar8 < (int)pUVar5->_padding_) {
        uVar3 = uVar10;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FNiagaraRendererVolumes *)(*pcVar1)();
          return pFVar6;
        }
      }
      if ((*(byte *)(*(longlong *)(pUVar5->_padding_ + lVar9) + 0x1d) & 3) == 1) {
        uVar3 = 0;
        if ((int)uVar8 < (int)pUVar5->_padding_) {
          uVar3 = uVar10;
        }
        if (uVar3 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pFVar6 = (FNiagaraRendererVolumes *)(*pcVar1)();
            return pFVar6;
          }
        }
        piVar7 = (int *)(**(code **)((param_3->RendererBindings)._padding_ + 0x58))
                                  (&param_3->RendererBindings,
                                   *(longlong *)(pUVar5->_padding_ + lVar9) + 8,0);
        if (piVar7 == (int *)0x0) {
          iVar4 = -1;
        }
        else {
          iVar4 = *piVar7;
        }
        *piVar11 = iVar4;
        this->bAnyVFBoundOffsets = (bool)(this->bAnyVFBoundOffsets | iVar4 != -1);
      }
    }
    uVar8 = uVar8 + 1;
    piVar11 = piVar11 + 1;
    lVar9 = lVar9 + 8;
  } while (uVar8 < 6);
  return this;
}

// ~FNiagaraRendererVolumes @ 14938a010

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraRendererVolumes::~FNiagaraRendererVolumes(FNiagaraRendererVolumes *this)

{
  this->_padding_ = (longlong)&___7FNiagaraRendererVolumes__6B_;
  FLocalVertexFactory::~FLocalVertexFactory(&this->VertexFactory);
  FNiagaraRenderer::~FNiagaraRenderer((FNiagaraRenderer *)this);
  return;
}

// CreateRenderThreadResources @ 14939ace0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraRendererVolumes::CreateRenderThreadResources
          (FNiagaraRendererVolumes *this,FRHICommandListBase *param_1)

{
  FLocalVertexFactory *this_00;
  undefined1 auStack_108 [32];
  FDataType local_e8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_108;
  this_00 = &this->VertexFactory;
  local_e8._padding_ = GNullVertexBuffer._40_8_;
  local_e8._padding_ = GNullVertexBuffer._40_8_;
  local_e8._padding_ = GNullVertexBuffer._40_8_;
  local_e8._padding_._0_4_ = 0;
  local_e8._padding_ = (longlong)&GNullColorVertexBuffer;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._6_1_ = 0;
  local_e8.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_e8.PreSkinPositionComponent.StreamOffset = 0;
  local_e8.PreSkinPositionComponent.Offset = '\0';
  local_e8.PreSkinPositionComponent.Stride = '\0';
  local_e8.PreSkinPositionComponent.Type.Value = '\0';
  local_e8.PreSkinPositionComponent.VertexStreamUsage = Default;
  local_e8.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  local_e8._padding_ = (longlong)&GNullVertexBuffer;
  local_e8._padding_._0_4_ = 0;
  local_e8._padding_ = (longlong)&GNullVertexBuffer;
  local_e8._padding_._0_4_ = 0;
  local_e8._padding_ = (longlong)&GNullVertexBuffer;
  local_e8._padding_._0_4_ = 0;
  local_e8._padding_._0_4_ = 0;
  local_e8._padding_._0_4_ = 0;
  local_e8._padding_ = GNullColorVertexBuffer._40_8_;
  local_e8._padding_._4_4_ = 4;
  local_e8._padding_._4_2_ = 0xff;
  local_e8._padding_._4_4_ = 0x30000;
  local_e8._padding_._4_4_ = 0x4050000;
  local_e8._padding_._4_4_ = 0x4050000;
  local_e8._padding_._4_4_ = 0x4080000;
  FLocalVertexFactory::SetData(this_00,param_1,&local_e8);
  (**(code **)(this_00->_padding_ + 0x18))(this_00,param_1);
  return;
}

// GenerateDynamicData @ 1493a2280

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
FNiagaraRendererVolumes::GenerateDynamicData
          (FNiagaraRendererVolumes *this,FNiagaraSceneProxy *param_1,
          UNiagaraRendererProperties *param_2,FNiagaraEmitterInstance *param_3)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  INiagaraComputeDataBufferInterface *pIVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  UNiagaraVolumeRendererProperties *pUVar9;
  FNiagaraDataSet *pFVar10;
  FNiagaraDynamicDataBase *pFVar11;
  FNiagaraDynamicDataBase *this_00;
  longlong lVar12;
  FMaterialRelevance_u_0_s_0 *pFVar13;
  TVector<float> *pTVar14;
  FNiagaraTypeDefinition *pFVar15;
  int *piVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  TVector<float> local_88;
  TVector<float> local_7c;
  TVector<float> local_70 [2];
  undefined8 local_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  pUVar9 = CastChecked<UNiagaraVolumeRendererProperties_const_,UNiagaraRendererProperties_const_>
                     (param_2);
  if ((pUVar9 != (UNiagaraVolumeRendererProperties *)0x0) &&
     (bVar5 = FNiagaraRenderer::IsRendererEnabled
                        ((FNiagaraRenderer *)this,(UNiagaraRendererProperties *)pUVar9,param_3),
     bVar5)) {
    if (this->SourceMode == Emitter) {
LAB_1493a22fd:
      if (((int)this->_padding_ != 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("BaseMaterials_GT.Num() == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererVolumes.cpp"
                             ,0xa6,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FNiagaraDynamicDataBase *)(*pcVar3)();
        return pFVar11;
      }
      pFVar11 = (FNiagaraDynamicDataBase *)0x0;
      iVar8 = 0;
      if (((int)this->_padding_ < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FNiagaraDynamicDataBase *)(*pcVar3)();
        return pFVar11;
      }
      cVar6 = (**(code **)(**(longlong **)this->_padding_ + 0x378))
                        (*(longlong **)this->_padding_,0x15);
      if ((cVar6 == '\0') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("BaseMaterials_GT[0]->CheckMaterialUsage_Concurrent(MATUSAGE_HeterogeneousVolumes)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererVolumes.cpp"
                             ,0xa7,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FNiagaraDynamicDataBase *)(*pcVar3)();
        return pFVar11;
      }
      this_00 = ::operator_new(0x90);
      if (this_00 != (FNiagaraDynamicDataBase *)0x0) {
        FNiagaraDynamicDataBase::FNiagaraDynamicDataBase(this_00,param_3);
        this_00[1]._padding_ = 0;
        this_00->_padding_ = (longlong)&___7FVolumeDynamicData_NiagaraRendererVolumesLocal__6B_;
        this_00[1].MaterialRelevance.field0_0x0 =
             (FMaterialRelevance_u_0)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        *(float *)&this_00[1].SystemInstanceID =
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        *(TQuat<float> *)&this_00[1].CPUParticleData = UE::Math::TQuat<float>::Identity;
        *(undefined4 *)&this_00[2]._padding_ = 0x3f800000;
        *(undefined4 *)((longlong)&this_00[2]._padding_ + 4) = 0x3f800000;
        this_00[2].MaterialRelevance.field0_0x0.Raw = 0x3f800000;
        *(undefined4 *)&this_00[2].SystemInstanceID = 0;
        *(undefined8 *)((longlong)&this_00[2].SystemInstanceID + 4) =
             UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        *(float *)((longlong)&this_00[2].CPUParticleData.Reference + 4) =
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        *(undefined4 *)&this_00[2].ComputeDataBufferInterface = 0;
        *(undefined8 *)((longlong)&this_00[2].ComputeDataBufferInterface + 4) =
             UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        *(float *)((longlong)&this_00[3]._padding_ + 4) =
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        *(undefined4 *)&this_00[3].MaterialRelevance.field0_0x0 = 0x3f800000;
        *(undefined4 *)((longlong)&this_00[3].MaterialRelevance.field0_0x0 + 4) = 0x40000000;
        *(undefined4 *)&this_00[3].SystemInstanceID = 0x3f000000;
        *(undefined4 *)((longlong)&this_00[3].SystemInstanceID + 4) = 0x40000000;
        pFVar11 = this_00;
      }
      if (((int)this->_padding_ < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FNiagaraDynamicDataBase *)(*pcVar3)();
        return pFVar11;
      }
      lVar12 = (**(code **)(**(longlong **)this->_padding_ + 0x310))();
      pFVar11[1]._padding_ = lVar12;
      (pFVar11->MaterialRelevance).field0_0x0 = (FMaterialRelevance_u_0)this->_padding_;
      *(int *)((longlong)&pFVar11[2].MaterialRelevance.field0_0x0 + 4) = pUVar9->RendererVisibility;
      if (this->bAnyVFBoundOffsets != false) {
        if (this->VFBoundOffsetsInParamStore[0] != -1) {
          pFVar13 = (FMaterialRelevance_u_0_s_0 *)
                    FNiagaraParameterStore::GetParameterValueFromOffset<UE::Math::TVector<float>_>
                              (&param_3->RendererBindings,&local_88,
                               this->VFBoundOffsetsInParamStore[0]);
          uVar17 = *(undefined4 *)(pFVar13 + 1);
          pFVar11[1].MaterialRelevance.field0_0x0._s_0 = *pFVar13;
          *(undefined4 *)&pFVar11[1].SystemInstanceID = uVar17;
        }
        iVar7 = this->VFBoundOffsetsInParamStore[1];
        if (iVar7 != -1) {
          if (((iVar7 < 0) ||
              ((ulonglong)(longlong)(param_3->RendererBindings).ParameterData.ArrayNum <
               (longlong)iVar7 + 0x10U)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                                 ,0x17f,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            pFVar11 = (FNiagaraDynamicDataBase *)(*pcVar3)();
            return pFVar11;
          }
          pFVar1 = (param_3->RendererBindings).ParameterData.AllocatorInstance.Data + iVar7;
          pIVar4 = *(INiagaraComputeDataBufferInterface **)(pFVar1 + 8);
          pFVar11[1].CPUParticleData.Reference = *(FNiagaraDataBuffer **)pFVar1;
          pFVar11[1].ComputeDataBufferInterface = pIVar4;
        }
        if (this->VFBoundOffsetsInParamStore[2] != -1) {
          pTVar14 = FNiagaraParameterStore::GetParameterValueFromOffset<UE::Math::TVector<float>_>
                              (&param_3->RendererBindings,&local_7c,
                               this->VFBoundOffsetsInParamStore[2]);
          pFVar11[2]._padding_ = *(longlong *)&pTVar14->field0_0x0;
          *(float *)&pFVar11[2].MaterialRelevance.field0_0x0 = (pTVar14->field0_0x0)._s_0.Z;
        }
        if (this->VFBoundOffsetsInParamStore[3] != -1) {
          iVar7 = FNiagaraParameterStore::GetParameterValueFromOffset<int>
                            (&param_3->RendererBindings,this->VFBoundOffsetsInParamStore[3]);
          *(int *)((longlong)&pFVar11[2].MaterialRelevance.field0_0x0 + 4) = iVar7;
        }
        if (this->VFBoundOffsetsInParamStore[4] != -1) {
          iVar7 = FNiagaraParameterStore::GetParameterValueFromOffset<int>
                            (&param_3->RendererBindings,this->VFBoundOffsetsInParamStore[4]);
          *(int *)&pFVar11[2].SystemInstanceID = iVar7;
        }
        if (this->VFBoundOffsetsInParamStore[5] != -1) {
          pTVar14 = FNiagaraParameterStore::GetParameterValueFromOffset<UE::Math::TVector<float>_>
                              (&param_3->RendererBindings,local_70,
                               this->VFBoundOffsetsInParamStore[5]);
          *(undefined8 *)((longlong)&pFVar11[2].SystemInstanceID + 4) =
               *(undefined8 *)&pTVar14->field0_0x0;
          *(float *)((longlong)&pFVar11[2].CPUParticleData.Reference + 4) =
               (pTVar14->field0_0x0)._s_0.Z;
        }
      }
      if ((this->SourceMode == Emitter) &&
         (*(int *)((longlong)&pFVar11[2].MaterialRelevance.field0_0x0 + 4) !=
          this->RendererVisibilityTag)) {
        (**(code **)pFVar11->_padding_)(pFVar11,1);
        pFVar11 = (FNiagaraDynamicDataBase *)0x0;
      }
      else {
        if (((0 < (pUVar9->MaterialParameters).AttributeBindings.ArrayNum) ||
            (0 < (pUVar9->MaterialParameters).ScalarParameters.ArrayNum)) ||
           ((0 < (pUVar9->MaterialParameters).VectorParameters.ArrayNum ||
            (0 < (pUVar9->MaterialParameters).TextureParameters.ArrayNum)))) {
          iVar7 = (int)this->_padding_;
          pcVar3 = *(code **)(this->_padding_ + 0x78);
          local_58 = this->_padding_;
          if ((iVar7 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            pFVar11 = (FNiagaraDynamicDataBase *)(*pcVar3)();
            return pFVar11;
          }
          local_48 = (undefined4)local_58;
          uStack_44 = local_58._4_4_;
          uStack_3c = uStack_4c;
          iStack_50 = iVar7;
          iStack_40 = iVar7;
          (*pcVar3)(this,&pUVar9->MaterialParameters,param_3,&local_48);
        }
        pUVar9 = CastChecked<UNiagaraVolumeRendererProperties_const_,UNiagaraRendererProperties_const_>
                           (param_2);
        uVar17 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        uVar18 = (undefined4)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        uVar19 = (undefined4)
                 ((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        pFVar15 = FNiagaraTypeDefinitionHandle::Resolve
                            (&(pUVar9->VolumeResolutionMaxAxisBinding).ParamMapVariable.
                              TypeDefHandle);
        iVar7 = FNiagaraTypeDefinition::GetSize(pFVar15);
        if ((iVar7 != 4) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Parameter.GetSizeInBytes() == sizeof(T)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                               ,0x1ae,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FNiagaraDynamicDataBase *)(*pcVar3)();
          return pFVar11;
        }
        piVar16 = (int *)(**(code **)((param_3->RendererBindings)._padding_ + 0x58))
                                   (&param_3->RendererBindings,
                                    &(pUVar9->VolumeResolutionMaxAxisBinding).ParamMapVariable,0);
        if ((piVar16 != (int *)0x0) && (*piVar16 != -1)) {
          iVar8 = FNiagaraParameterStore::GetParameterValueFromOffset<int>
                            (&param_3->RendererBindings,*piVar16);
        }
        *(int *)&pFVar11[2].ComputeDataBufferInterface = iVar8;
        pFVar15 = FNiagaraTypeDefinitionHandle::Resolve
                            (&(pUVar9->VolumeWorldSpaceSizeBinding).ParamMapVariable.TypeDefHandle);
        iVar8 = FNiagaraTypeDefinition::GetSize(pFVar15);
        if ((iVar8 != 0xc) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Parameter.GetSizeInBytes() == sizeof(T)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                               ,0x1ae,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FNiagaraDynamicDataBase *)(*pcVar3)();
          return pFVar11;
        }
        piVar16 = (int *)(**(code **)((param_3->RendererBindings)._padding_ + 0x58))
                                   (&param_3->RendererBindings,
                                    &(pUVar9->VolumeWorldSpaceSizeBinding).ParamMapVariable,0);
        if (piVar16 != (int *)0x0) {
          iVar8 = *piVar16;
          lVar12 = (longlong)iVar8;
          if (iVar8 != -1) {
            if (((iVar8 < 0) ||
                ((ulonglong)(longlong)(param_3->RendererBindings).ParameterData.ArrayNum <
                 lVar12 + 0xcU)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                                   ,0x17f,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              pFVar11 = (FNiagaraDynamicDataBase *)(*pcVar3)();
              return pFVar11;
            }
            pFVar1 = (param_3->RendererBindings).ParameterData.AllocatorInstance.Data;
            uVar2 = *(undefined8 *)(pFVar1 + lVar12);
            uVar18 = (undefined4)uVar2;
            uVar19 = (undefined4)((ulonglong)uVar2 >> 0x20);
            uVar17 = *(undefined4 *)(pFVar1 + lVar12 + 8);
          }
        }
        *(ulonglong *)((longlong)&pFVar11[2].ComputeDataBufferInterface + 4) =
             CONCAT44(uVar19,uVar18);
        *(undefined4 *)((longlong)&pFVar11[3]._padding_ + 4) = uVar17;
        *(float *)&pFVar11[3].MaterialRelevance.field0_0x0 = pUVar9->StepFactor;
        *(float *)((longlong)&pFVar11[3].MaterialRelevance.field0_0x0 + 4) =
             pUVar9->ShadowStepFactor;
        *(float *)&pFVar11[3].SystemInstanceID = pUVar9->ShadowBiasFactor;
        *(float *)((longlong)&pFVar11[3].SystemInstanceID + 4) = pUVar9->LightingDownsampleFactor;
      }
      return pFVar11;
    }
    if (*(char *)((longlong)&this->_padding_ + 4) != '\x01') {
      pFVar10 = FNiagaraEmitterInstance::GetParticleData(param_3);
      if ((pFVar10->CurrentData != (FNiagaraDataBuffer *)0x0) &&
         (pFVar10->CurrentData->NumInstances != 0)) goto LAB_1493a22fd;
    }
  }
  return (FNiagaraDynamicDataBase *)0x0;
}

// GetDynamicDataSize @ 1493a3a20

int __thiscall FNiagaraRendererVolumes::GetDynamicDataSize(FNiagaraRendererVolumes *this)

{
  return 0x90;
}

// GetDynamicMeshElements @ 1493a44f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraRendererVolumes::GetDynamicMeshElements
          (FNiagaraRendererVolumes *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4,FNiagaraSceneProxy *param_5)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  ulonglong uVar3;
  FNiagaraDynamicDataBase *this_00;
  FSceneView *pFVar4;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar5;
  FNiagaraDataSet *pFVar6;
  FNiagaraDataBuffer *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  ulonglong uVar18;
  longlong lVar19;
  double dVar20;
  bool bVar21;
  int iVar22;
  FNiagaraDataBuffer *pFVar23;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar24;
  TVector<float> *pTVar25;
  ForElementType<FMeshBatchElement> FVar26;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar27;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar28;
  longlong lVar29;
  uint uVar30;
  uint uVar31;
  ForElementType<FMeshBatchElement> FVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  double dVar40;
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar45;
  double dVar44;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar57;
  double dVar55;
  double dVar56;
  float fVar58;
  float fVar59;
  uint uVar60;
  uint uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined1 auStackY_4f8 [32];
  uint local_4c0;
  longlong local_4a0;
  undefined1 local_498 [8];
  float local_490;
  TVector<float>_u_0 local_48c;
  char local_480;
  uint local_47c;
  FScriptContainerElement *local_478;
  undefined1 local_470;
  uint local_46c;
  FScriptContainerElement *local_468;
  double local_460;
  double local_458;
  double local_450;
  double local_448;
  double local_440;
  TVector<float>_u_0 local_438 [2];
  TQuat<float> local_418;
  undefined8 local_408;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> local_3f8;
  FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> local_3d8;
  FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> local_3b8;
  FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_> local_398;
  TMatrix<double> local_368;
  TMatrix<double> local_2e8;
  TMatrix<double> local_268;
  TMatrix<double> local_1e8;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_4f8;
  this_00 = (FNiagaraDynamicDataBase *)this->_padding_;
  if (this_00 != (FNiagaraDynamicDataBase *)0x0) {
    if ((param_4->RHICmdList == (FRHICommandList *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("RHICmdList",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                            ,0x46,L""), bVar21)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar23 = FNiagaraDynamicDataBase::GetParticleDataToRender
                        (this_00,(FRHICommandListBase *)param_4->RHICmdList,false);
    if ((pFVar23 != (FNiagaraDataBuffer *)0x0) &&
       ((this->SourceMode != Particles || (pFVar23->NumInstances != 0)))) {
      iVar22 = param_1->ArrayNum;
      local_4c0 = 0;
      if (0 < iVar22) {
        uVar62 = SUB84(__real_3ff0000000000000,0);
        uVar63 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        local_4a0 = 0;
        fVar35 = __real_bf000000;
        fVar54 = ___xmm_322bcc77322bcc77322bcc77322bcc77;
        fVar57 = _UNK_1506895d4;
        fVar58 = _UNK_1506895d8;
        fVar59 = _UNK_1506895dc;
        uVar60 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar61 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        do {
          dVar17 = __real_4140000000000000;
          if ((param_3 >> (local_4c0 & 0x1f) & 1) != 0) {
            uVar31 = 0;
            if ((int)local_4c0 < iVar22) {
              uVar31 = ~local_4c0 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar4 = *(FSceneView **)((param_1->AllocatorInstance).Data + local_4a0);
            if (((pFVar4->bIsInstancedStereoEnabled == false) ||
                (bVar21 = IStereoRendering::IsStereoEyeView(pFVar4), !bVar21)) ||
               (bVar21 = IStereoRendering::IsAPrimaryView(pFVar4), bVar21)) {
              paVar5 = &param_4->OneFrameResources->Next;
              aVar24 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                        )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x20,8);
              *(undefined8 *)((longlong)aVar24 + 8) = 0;
              *(undefined ***)aVar24 =
                   &
                   ___7__TObject_UFHeterogeneousVolumeInstances_NiagaraRendererVolumesLocal_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
              ;
              pFVar1 = (ForAnyElementType *)((longlong)aVar24 + 0x10);
              TVar27.Next = *paVar5;
              do {
                *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                  *)((longlong)aVar24 + 8) = TVar27.Next;
                LOCK();
                aVar28 = *paVar5;
                bVar21 = TVar27.Next == aVar28;
                if (bVar21) {
                  *paVar5 = aVar24;
                  aVar28 = TVar27.Next;
                }
                UNLOCK();
                TVar27.Next = aVar28;
              } while (!bVar21);
              piVar2 = (int *)((longlong)aVar24 + 0x1c);
              pFVar1->Data = (FScriptContainerElement *)0x0;
              *piVar2 = 0;
              *(undefined4 *)((longlong)aVar24 + 0x18) = 0;
              if (this->SourceMode == Particles) {
                pFVar6 = pFVar23->Owner;
                FNiagaraDataSetAccessorFloat<FNiagaraPosition>::GetReader
                          ((FNiagaraDataSetAccessorFloat<FNiagaraPosition> *)
                           &this->PositionDataSetAccessor,&local_3f8,pFVar6);
                FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_>::
                FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_>
                          (&local_398,pFVar6->CurrentData,*(bool *)&this->RotationDataSetAccessor,
                           *(int *)&(this->RotationDataSetAccessor).field_0x4);
                FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_>::GetReader
                          ((FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_> *)
                           &this->ScaleDataSetAccessor,&local_3d8,pFVar6);
                pFVar7 = pFVar6->CurrentData;
                local_480 = '\0';
                local_47c = 0;
                local_478 = (FScriptContainerElement *)0x0;
                if ((pFVar7 != (FNiagaraDataBuffer *)0x0) &&
                   (this->RendererVisibilityTagAccessor != (FNiagaraDataSetAccessor<int>)0xffffffff)
                   ) {
                  local_480 = '\x01';
                  local_478 = (pFVar7->Int32Data).AllocatorInstance.Data +
                              (int)this->RendererVisibilityTagAccessor * pFVar7->Int32Stride;
                  local_47c = pFVar7->NumInstances;
                }
                pFVar9 = local_478;
                local_470 = 0;
                local_46c = 0;
                local_468 = (FScriptContainerElement *)0x0;
                if ((pFVar7 != (FNiagaraDataBuffer *)0x0) &&
                   (this->VolumeResolutionMaxAxisAccessor !=
                    (FNiagaraDataSetAccessor<int>)0xffffffff)) {
                  local_470 = 1;
                  local_468 = (pFVar7->Int32Data).AllocatorInstance.Data +
                              (int)this->VolumeResolutionMaxAxisAccessor * pFVar7->Int32Stride;
                  local_46c = pFVar7->NumInstances;
                }
                FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_>::GetReader
                          ((FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_> *)
                           &this->VolumeWorldSpaceSizeAccessor,&local_3b8,pFVar6);
                bVar21 = FNiagaraRenderer::UseLocalSpace((FNiagaraRenderer *)this,param_5);
                local_1e8.M[0][0] = (double)param_5->_padding_;
                local_1e8.M[0][1] = (double)param_5->_padding_;
                local_1e8.M[0][2] = (double)param_5->_padding_;
                local_1e8.M[0][3] = (double)param_5->_padding_;
                local_1e8.M[1][0] = (double)param_5->_padding_;
                local_1e8.M[1][1] = (double)param_5->_padding_;
                local_1e8.M[1][2] = (double)param_5->_padding_;
                local_1e8.M[1][3] = (double)param_5->_padding_;
                local_1e8.M[2][0] = (double)param_5->_padding_;
                local_1e8.M[2][1] = (double)param_5->_padding_;
                local_1e8.M[2][2] = (double)param_5->_padding_;
                local_1e8.M[2][3] = (double)param_5->_padding_;
                local_1e8.M[3][0] = (double)param_5->_padding_;
                local_1e8.M[3][1] = (double)param_5->_padding_;
                local_1e8.M[3][2] = (double)param_5->_padding_;
                local_1e8.M[3][3] = (double)param_5->_padding_;
                pTVar25 = FNiagaraSceneProxy::GetLWCRenderTile(param_5);
                local_450 = (double)(pTVar25->field0_0x0)._s_0.X * dVar17;
                local_448 = (double)(pTVar25->field0_0x0)._s_0.Y * dVar17;
                uVar31 = pFVar23->NumInstances;
                local_440 = (double)(pTVar25->field0_0x0)._s_0.Z * dVar17;
                if ((int)uVar31 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar31);
                }
                if (*(int *)((longlong)aVar24 + 0x1c) < (int)uVar31) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc0,0x10,uVar31,pFVar1,*(int *)((longlong)aVar24 + 0x18),piVar2);
                }
                uVar31 = 0;
                if (pFVar23->NumInstances != 0) {
                  fVar48 = GlobalVectorConstants::Float0001.m128_u32[0];
                  fVar43 = GlobalVectorConstants::Float0001.m128_u32[1];
                  fVar49 = GlobalVectorConstants::Float0001.m128_u32[2];
                  fVar50 = GlobalVectorConstants::Float0001.m128_u32[3];
                  fVar39 = GlobalVectorConstants::FloatOne.m128_i32[0];
                  fVar51 = GlobalVectorConstants::FloatOne.m128_i32[1];
                  fVar52 = GlobalVectorConstants::FloatOne.m128_i32[2];
                  fVar53 = GlobalVectorConstants::FloatOne.m128_i32[3];
                  do {
                    if ((local_3f8.bIsValid == false) || (local_3f8.NumInstances <= (int)uVar31)) {
                      local_498 = (undefined1  [8])this_00[1].MaterialRelevance.field0_0x0.Raw;
                      local_490 = *(float *)&this_00[1].SystemInstanceID;
                    }
                    else {
                      FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
                                (&local_3f8,(FNiagaraPosition *)local_498,uVar31);
                      fVar48 = GlobalVectorConstants::Float0001.m128_u32[0];
                      fVar43 = GlobalVectorConstants::Float0001.m128_u32[1];
                      fVar49 = GlobalVectorConstants::Float0001.m128_u32[2];
                      fVar50 = GlobalVectorConstants::Float0001.m128_u32[3];
                      fVar39 = GlobalVectorConstants::FloatOne.m128_i32[0];
                      fVar51 = GlobalVectorConstants::FloatOne.m128_i32[1];
                      fVar52 = GlobalVectorConstants::FloatOne.m128_i32[2];
                      fVar53 = GlobalVectorConstants::FloatOne.m128_i32[3];
                    }
                    local_460 = (double)(float)local_498._4_4_;
                    dVar17 = (double)(float)local_498._0_4_;
                    local_458 = (double)local_490;
                    if ((local_398.bIsValid == false) || (local_398.NumInstances <= (int)uVar31)) {
                      local_418 = *(TQuat<float> *)&this_00[1].CPUParticleData;
                    }
                    else {
                      FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_>::Get
                                (&local_398,&local_418,uVar31);
                      fVar48 = GlobalVectorConstants::Float0001.m128_u32[0];
                      fVar43 = GlobalVectorConstants::Float0001.m128_u32[1];
                      fVar49 = GlobalVectorConstants::Float0001.m128_u32[2];
                      fVar50 = GlobalVectorConstants::Float0001.m128_u32[3];
                      fVar39 = GlobalVectorConstants::FloatOne.m128_i32[0];
                      fVar51 = GlobalVectorConstants::FloatOne.m128_i32[1];
                      fVar52 = GlobalVectorConstants::FloatOne.m128_i32[2];
                      fVar53 = GlobalVectorConstants::FloatOne.m128_i32[3];
                    }
                    fVar42 = local_418.X;
                    fVar45 = local_418.Y;
                    fVar46 = local_418.Z;
                    fVar47 = local_418.W;
                    auVar41._4_4_ = fVar51;
                    auVar41._0_4_ = fVar39;
                    auVar41._8_4_ = fVar52;
                    auVar41._12_4_ = fVar53;
                    fVar35 = fVar45 * fVar45 + fVar42 * fVar42;
                    fVar36 = fVar42 * fVar42 + fVar45 * fVar45;
                    fVar37 = fVar47 * fVar47 + fVar46 * fVar46;
                    fVar38 = fVar46 * fVar46 + fVar47 * fVar47;
                    auVar33._0_4_ = fVar37 + fVar35;
                    auVar33._4_4_ = fVar38 + fVar36;
                    auVar33._8_4_ = fVar35 + fVar37;
                    auVar33._12_4_ = fVar36 + fVar38;
                    auVar34 = sqrtps(auVar33,auVar33);
                    auVar34 = divps(auVar41,auVar34);
                    dVar13 = (double)(float)((uint)(auVar34._0_4_ * fVar42) &
                                             -(uint)(fVar54 <= auVar33._0_4_) |
                                            ~-(uint)(fVar54 <= auVar33._0_4_) & (uint)fVar48);
                    dVar16 = (double)(float)((uint)(auVar34._12_4_ * fVar47) &
                                             -(uint)(fVar59 <= auVar33._12_4_) |
                                            ~-(uint)(fVar59 <= auVar33._12_4_) & (uint)fVar50);
                    dVar14 = (double)(float)((uint)(auVar34._4_4_ * fVar45) &
                                             -(uint)(fVar57 <= auVar33._4_4_) |
                                            ~-(uint)(fVar57 <= auVar33._4_4_) & (uint)fVar43);
                    dVar15 = (double)(float)((uint)(auVar34._8_4_ * fVar46) &
                                             -(uint)(fVar58 <= auVar33._8_4_) |
                                            ~-(uint)(fVar58 <= auVar33._8_4_) & (uint)fVar49);
                    if ((local_3d8.bIsValid == false) || (local_3d8.NumInstances <= (int)uVar31)) {
                      local_48c._0_8_ = this_00[2]._padding_;
                      local_48c._s_0.Z =
                           (float)*(undefined4 *)&this_00[2].MaterialRelevance.field0_0x0;
                    }
                    else {
                      FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::Get
                                (&local_3d8,(TVector<float> *)&local_48c._s_0,uVar31);
                      fVar48 = GlobalVectorConstants::Float0001.m128_f32[0];
                      fVar43 = GlobalVectorConstants::Float0001.m128_f32[1];
                      fVar49 = GlobalVectorConstants::Float0001.m128_f32[2];
                      fVar50 = GlobalVectorConstants::Float0001.m128_f32[3];
                      fVar39 = GlobalVectorConstants::FloatOne.m128_f32[0];
                      fVar51 = GlobalVectorConstants::FloatOne.m128_f32[1];
                      fVar52 = GlobalVectorConstants::FloatOne.m128_f32[2];
                      fVar53 = GlobalVectorConstants::FloatOne.m128_f32[3];
                    }
                    dVar11 = (double)local_48c._s_0.X;
                    dVar12 = (double)local_48c._s_0.Y;
                    dVar55 = (double)local_48c._s_0.Z;
                    if ((local_480 == '\0') || ((int)local_47c <= (int)uVar31)) {
                      iVar22 = *(int *)((longlong)&this_00[2].MaterialRelevance.field0_0x0 + 4);
                    }
                    else {
                      iVar22 = *(int *)(pFVar9 + (longlong)(int)uVar31 * 4);
                    }
                    if ((local_3b8.bIsValid == false) || (local_3b8.NumInstances <= (int)uVar31)) {
                      local_438[0]._0_8_ =
                           *(undefined8 *)((longlong)&this_00[2].SystemInstanceID + 4);
                      local_438[0]._8_4_ =
                           *(float *)((longlong)&this_00[2].CPUParticleData.Reference + 4);
                    }
                    else {
                      FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::Get
                                (&local_3b8,(TVector<float> *)&local_438[0]._s_0,uVar31);
                      fVar48 = GlobalVectorConstants::Float0001.m128_f32[0];
                      fVar43 = GlobalVectorConstants::Float0001.m128_f32[1];
                      fVar49 = GlobalVectorConstants::Float0001.m128_f32[2];
                      fVar50 = GlobalVectorConstants::Float0001.m128_f32[3];
                      fVar39 = GlobalVectorConstants::FloatOne.m128_f32[0];
                      fVar51 = GlobalVectorConstants::FloatOne.m128_f32[1];
                      fVar52 = GlobalVectorConstants::FloatOne.m128_f32[2];
                      fVar53 = GlobalVectorConstants::FloatOne.m128_f32[3];
                    }
                    dVar20 = __real_3ff0000000000000;
                    uVar63 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
                    if ((iVar22 == this->RendererVisibilityTag) &&
                       (dVar40 = dVar11 * dVar11 + dVar12 * dVar12 + dVar55 * dVar55,
                       __real_3e45798ee2308c3a <
                       (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) & uVar61,
                                        SUB84(dVar40,0) & uVar60))) {
                      local_268.M[0][2] = 0.0;
                      local_268.M[0][3] = 0.0;
                      local_268.M[1][2] = 0.0;
                      local_268.M[1][3] = 0.0;
                      local_268.M[3][0] = 0.0;
                      local_268.M[3][1] = 0.0;
                      local_268.M[3][2] = ___xmm_3ff00000000000000000000000000000;
                      local_268.M[3][3] = _UNK_15061cbc8;
                      local_268.M[2][0] = 0.0;
                      local_268.M[2][1] = 0.0;
                      dVar44 = dVar15 + dVar15;
                      dVar56 = dVar14 + dVar14;
                      local_268.M[0][1] = 0.0;
                      local_268.M[1][0] = 0.0;
                      local_268.M[2][3] = 0.0;
                      dVar40 = (dVar13 + dVar13) * dVar13;
                      local_2e8.M[2][1] = (dVar13 + dVar13) * dVar16;
                      local_2e8.M[0][0] =
                           __real_3ff0000000000000 - (dVar44 * dVar15 + dVar56 * dVar14);
                      local_2e8.M[0][3] = 0.0;
                      local_2e8.M[1][3] = 0.0;
                      local_2e8.M[2][3] = 0.0;
                      local_2e8.M[0][1] = dVar44 * dVar16 + dVar56 * dVar13;
                      local_2e8.M[3][3] = __real_3ff0000000000000;
                      local_2e8.M[1][0] = dVar56 * dVar13 - dVar44 * dVar16;
                      local_2e8.M[0][2] = dVar44 * dVar13 - dVar56 * dVar16;
                      local_2e8.M[2][0] = dVar56 * dVar16 + dVar44 * dVar13;
                      local_2e8.M[1][2] = local_2e8.M[2][1] + dVar44 * dVar14;
                      local_2e8.M[2][1] = dVar44 * dVar14 - local_2e8.M[2][1];
                      local_2e8.M[1][1] = __real_3ff0000000000000 - (dVar44 * dVar15 + dVar40);
                      local_2e8.M[2][2] = __real_3ff0000000000000 - (dVar56 * dVar14 + dVar40);
                      local_2e8.M[3][2] = local_458;
                      local_2e8.M[3][1] = local_460;
                      local_2e8.M[3][0] = dVar17;
                      local_268.M[0][0] = dVar11;
                      local_268.M[1][1] = dVar12;
                      local_268.M[2][2] = dVar55;
                      VectorMatrixMultiply(&local_368,&local_268,&local_2e8);
                      if (bVar21) {
                        VectorMatrixMultiply(&local_168,&local_1e8,&local_368);
                        local_368.M[0][0] = local_168.M[0][0];
                        local_368.M[0][1] = local_168.M[0][1];
                        local_368.M[0][2] = local_168.M[0][2];
                        local_368.M[0][3] = local_168.M[0][3];
                        local_368.M[1][0] = local_168.M[1][0];
                        local_368.M[1][1] = local_168.M[1][1];
                        local_368.M[1][2] = local_168.M[1][2];
                        local_368.M[1][3] = local_168.M[1][3];
                        local_368.M[2][0] = local_168.M[2][0];
                        local_368.M[2][1] = local_168.M[2][1];
                        local_368.M[2][2] = local_168.M[2][2];
                        local_368.M[2][3] = local_168.M[2][3];
                        local_368.M[3][0] = local_168.M[3][0];
                        local_368.M[3][1] = local_168.M[3][1];
                        local_368.M[3][2] = local_168.M[3][2];
                        local_368.M[3][3] = local_168.M[3][3];
                      }
                      else {
                        local_368.M[3][0] = local_368.M[3][0] + local_450;
                        local_368.M[3][1] = local_368.M[3][1] + local_448;
                        local_368.M[3][2] = local_368.M[3][2] + local_440;
                      }
                      iVar22 = *(int *)((longlong)aVar24 + 0x18);
                      if (iVar22 == *(int *)((longlong)aVar24 + 0x1c)) {
                        iVar22 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x10c0,pFVar1,(int *)((longlong)aVar24 + 0x1c));
                      }
                      uVar61 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
                      uVar60 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
                      *(int *)((longlong)aVar24 + 0x18) = iVar22 + 1;
                      lVar19 = param_5->_padding_;
                      pFVar8 = pFVar1->Data;
                      lVar29 = (longlong)iVar22 * 0xc0;
                      *(longlong *)(pFVar8 + lVar29) = param_5->_padding_;
                      *(longlong *)(pFVar8 + lVar29 + 8) = lVar19;
                      lVar19 = param_5->_padding_;
                      *(longlong *)(pFVar8 + lVar29 + 0x10) = param_5->_padding_;
                      *(longlong *)(pFVar8 + lVar29 + 0x10 + 8) = lVar19;
                      lVar19 = param_5->_padding_;
                      *(longlong *)(pFVar8 + lVar29 + 0x20) = param_5->_padding_;
                      *(longlong *)(pFVar8 + lVar29 + 0x20 + 8) = lVar19;
                      *(longlong *)(pFVar8 + lVar29 + 0x30) = param_5->_padding_;
                      *(double *)(pFVar8 + lVar29 + 0x40) = local_368.M[0][0];
                      *(double *)(pFVar8 + lVar29 + 0x40 + 8) = local_368.M[0][1];
                      *(double *)(pFVar8 + lVar29 + 0x50) = local_368.M[0][2];
                      *(double *)(pFVar8 + lVar29 + 0x50 + 8) = local_368.M[0][3];
                      *(double *)(pFVar8 + lVar29 + 0x60) = local_368.M[1][0];
                      *(double *)(pFVar8 + lVar29 + 0x60 + 8) = local_368.M[1][1];
                      *(double *)(pFVar8 + lVar29 + 0x70) = local_368.M[1][2];
                      *(double *)(pFVar8 + lVar29 + 0x70 + 8) = local_368.M[1][3];
                      *(double *)(pFVar8 + lVar29 + 0x80) = local_368.M[2][0];
                      *(double *)(pFVar8 + lVar29 + 0x80 + 8) = local_368.M[2][1];
                      *(double *)(pFVar8 + lVar29 + 0x90) = local_368.M[2][2];
                      *(double *)(pFVar8 + lVar29 + 0x90 + 8) = local_368.M[2][3];
                      *(double *)(pFVar8 + lVar29 + 0xa0) = local_368.M[3][0];
                      *(double *)(pFVar8 + lVar29 + 0xa0 + 8) = local_368.M[3][1];
                      *(double *)(pFVar8 + lVar29 + 0xb0) = local_368.M[3][2];
                      *(double *)(pFVar8 + lVar29 + 0xb0 + 8) = local_368.M[3][3];
                      fVar48 = GlobalVectorConstants::Float0001.m128_u32[0];
                      fVar43 = GlobalVectorConstants::Float0001.m128_u32[1];
                      fVar49 = GlobalVectorConstants::Float0001.m128_u32[2];
                      fVar50 = GlobalVectorConstants::Float0001.m128_u32[3];
                      fVar39 = GlobalVectorConstants::FloatOne.m128_i32[0];
                      fVar51 = GlobalVectorConstants::FloatOne.m128_i32[1];
                      fVar52 = GlobalVectorConstants::FloatOne.m128_i32[2];
                      fVar53 = GlobalVectorConstants::FloatOne.m128_i32[3];
                    }
                    uVar62 = SUB84(dVar20,0);
                    uVar31 = uVar31 + 1;
                    fVar35 = __real_bf000000;
                    fVar54 = ___xmm_322bcc77322bcc77322bcc77322bcc77;
                    fVar57 = _UNK_1506895d4;
                    fVar58 = _UNK_1506895d8;
                    fVar59 = _UNK_1506895dc;
                  } while (uVar31 < pFVar23->NumInstances);
                }
              }
              else {
                iVar22 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x10c0,pFVar1,piVar2);
                *(int *)((longlong)aVar24 + 0x18) = iVar22 + 1;
                lVar19 = param_5->_padding_;
                pFVar9 = pFVar1->Data;
                lVar29 = (longlong)iVar22 * 0xc0;
                *(longlong *)(pFVar9 + lVar29) = param_5->_padding_;
                *(longlong *)(pFVar9 + lVar29 + 8) = lVar19;
                lVar19 = param_5->_padding_;
                *(longlong *)(pFVar9 + lVar29 + 0x10) = param_5->_padding_;
                *(longlong *)(pFVar9 + lVar29 + 0x10 + 8) = lVar19;
                lVar19 = param_5->_padding_;
                *(longlong *)(pFVar9 + lVar29 + 0x20) = param_5->_padding_;
                *(longlong *)(pFVar9 + lVar29 + 0x20 + 8) = lVar19;
                *(longlong *)(pFVar9 + lVar29 + 0x30) = param_5->_padding_;
                lVar19 = param_5->_padding_;
                *(longlong *)(pFVar9 + lVar29 + 0x40) = param_5->_padding_;
                *(longlong *)(pFVar9 + lVar29 + 0x40 + 8) = lVar19;
                lVar19 = param_5->_padding_;
                *(longlong *)(pFVar9 + lVar29 + 0x50) = param_5->_padding_;
                *(longlong *)(pFVar9 + lVar29 + 0x50 + 8) = lVar19;
                lVar19 = param_5->_padding_;
                *(longlong *)(pFVar9 + lVar29 + 0x60) = param_5->_padding_;
                *(longlong *)(pFVar9 + lVar29 + 0x60 + 8) = lVar19;
                lVar19 = param_5->_padding_;
                *(longlong *)(pFVar9 + lVar29 + 0x70) = param_5->_padding_;
                *(longlong *)(pFVar9 + lVar29 + 0x70 + 8) = lVar19;
                lVar19 = param_5->_padding_;
                *(longlong *)(pFVar9 + lVar29 + 0x80) = param_5->_padding_;
                *(longlong *)(pFVar9 + lVar29 + 0x80 + 8) = lVar19;
                lVar19 = param_5->_padding_;
                *(longlong *)(pFVar9 + lVar29 + 0x90) = param_5->_padding_;
                *(longlong *)(pFVar9 + lVar29 + 0x90 + 8) = lVar19;
                lVar19 = param_5->_padding_;
                *(longlong *)(pFVar9 + lVar29 + 0xa0) = param_5->_padding_;
                *(longlong *)(pFVar9 + lVar29 + 0xa0 + 8) = lVar19;
                lVar19 = param_5->_padding_;
                *(longlong *)(pFVar9 + lVar29 + 0xb0) = param_5->_padding_;
                *(longlong *)(pFVar9 + lVar29 + 0xb0 + 8) = lVar19;
              }
              if (*(int *)((longlong)aVar24 + 0x18) != 0) {
                FVar26 = (ForElementType<FMeshBatchElement>)
                         FMeshElementCollector::AllocateMesh(param_4);
                *(FLocalVertexFactory **)((longlong)FVar26 + 0xa8) = &this->VertexFactory;
                *(FMaterialRenderProxy **)((longlong)FVar26 + 0xb0) =
                     (FMaterialRenderProxy *)this_00[1]._padding_;
                uVar31 = *(uint *)((longlong)FVar26 + 0xd4);
                *(FLightCacheInterface **)((longlong)FVar26 + 0xb8) = (FLightCacheInterface *)0x0;
                uVar30 = (byte)param_5->_padding_ & 1;
                *(uint *)((longlong)FVar26 + 0xd4) = uVar30 | uVar31 & 0xfffffcfa | 0x2082;
                *(uint *)((longlong)FVar26 + 0xd4) =
                     -(uint)((param_5->_padding_ & 0x600) != 0) & 0x4000 |
                     uVar30 | uVar31 & 0xffffbcfa | 0x2082;
                if ((*(int *)((longlong)FVar26 + 0xa0) < 1) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                FVar32 = FVar26;
                if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar26 + 0x98) !=
                    (ForElementType<FMeshBatchElement>)0x0) {
                  FVar32 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar26 + 0x98);
                }
                *(undefined8 *)((longlong)FVar32 + 0x18) = 0;
                *(undefined4 *)((longlong)FVar32 + 0x58) = 0;
                *(undefined4 *)((longlong)FVar32 + 0x68) = 0;
                *(undefined4 *)((longlong)FVar32 + 0x6c) = 3;
                *(undefined4 *)((longlong)FVar32 + 0x5c) = 2;
                *(undefined4 *)((longlong)FVar32 + 100) = 0;
                paVar5 = &param_4->OneFrameResources->Next;
                aVar24 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                          )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc
                                     (0xf0,0x10);
                *(undefined8 *)((longlong)aVar24 + 8) = 0;
                *(undefined ***)aVar24 =
                     &
                     ___7__TObject_VFHeterogeneousVolumeData_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
                ;
                TVar27.Next = *paVar5;
                do {
                  *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                    *)((longlong)aVar24 + 8) = TVar27.Next;
                  LOCK();
                  aVar28 = *paVar5;
                  bVar21 = TVar27.Next == aVar28;
                  if (bVar21) {
                    *paVar5 = aVar24;
                    aVar28 = TVar27.Next;
                  }
                  UNLOCK();
                  TVar27.Next = aVar28;
                } while (!bVar21);
                *(FNiagaraSceneProxy **)((longlong)aVar24 + 0x20) = param_5;
                *(undefined8 *)((longlong)aVar24 + 0x10) =
                     &FHeterogeneousVolumeData::_vftable__for__IHeterogeneousVolumeInterface__;
                *(undefined ***)((longlong)aVar24 + 0x18) =
                     &FHeterogeneousVolumeData::_vftable__for__FOneFrameResource__;
                dVar17 = UE::Math::TMatrix<double>::Identity.M[0][1];
                *(double *)((longlong)aVar24 + 0x30) = UE::Math::TMatrix<double>::Identity.M[0][0];
                *(double *)((longlong)aVar24 + 0x38) = dVar17;
                dVar17 = UE::Math::TMatrix<double>::Identity.M[0][3];
                *(double *)((longlong)aVar24 + 0x40) = UE::Math::TMatrix<double>::Identity.M[0][2];
                *(double *)((longlong)aVar24 + 0x48) = dVar17;
                dVar17 = UE::Math::TMatrix<double>::Identity.M[1][1];
                *(double *)((longlong)aVar24 + 0x50) = UE::Math::TMatrix<double>::Identity.M[1][0];
                *(double *)((longlong)aVar24 + 0x58) = dVar17;
                dVar17 = UE::Math::TMatrix<double>::Identity.M[1][3];
                *(double *)((longlong)aVar24 + 0x60) = UE::Math::TMatrix<double>::Identity.M[1][2];
                *(double *)((longlong)aVar24 + 0x68) = dVar17;
                dVar17 = UE::Math::TMatrix<double>::Identity.M[2][1];
                *(double *)((longlong)aVar24 + 0x70) = UE::Math::TMatrix<double>::Identity.M[2][0];
                *(double *)((longlong)aVar24 + 0x78) = dVar17;
                dVar17 = UE::Math::TMatrix<double>::Identity.M[2][3];
                *(double *)((longlong)aVar24 + 0x80) = UE::Math::TMatrix<double>::Identity.M[2][2];
                *(double *)((longlong)aVar24 + 0x88) = dVar17;
                dVar17 = UE::Math::TMatrix<double>::Identity.M[3][1];
                *(double *)((longlong)aVar24 + 0x90) = UE::Math::TMatrix<double>::Identity.M[3][0];
                *(double *)((longlong)aVar24 + 0x98) = dVar17;
                dVar17 = UE::Math::TMatrix<double>::Identity.M[3][3];
                *(double *)((longlong)aVar24 + 0xa0) = UE::Math::TMatrix<double>::Identity.M[3][2];
                *(double *)((longlong)aVar24 + 0xa8) = dVar17;
                *(undefined8 *)((longlong)aVar24 + 0xb0) =
                     UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
                *(int *)((longlong)aVar24 + 0xb8) =
                     UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
                *(undefined8 *)((longlong)aVar24 + 0xd8) = 0;
                *(undefined8 *)((longlong)aVar24 + 0xe0) = 0;
                *(undefined4 *)((longlong)aVar24 + 0xbc) = 0x3dcccccd;
                *(undefined4 *)((longlong)aVar24 + 0xc0) = 0x3f800000;
                *(undefined8 *)((longlong)aVar24 + 0xc4) = 0x41000000;
                *(undefined8 *)((longlong)aVar24 + 0xcc) = 0x3f800000;
                *(undefined2 *)((longlong)aVar24 + 0xd4) = 0;
                uVar3 = *(ulonglong *)((longlong)&this_00[2].ComputeDataBufferInterface + 4);
                fVar48 = *(float *)((longlong)&this_00[3]._padding_ + 4);
                local_408._4_4_ = (float)(uVar3 >> 0x20);
                uVar18 = uVar3;
                if ((float)uVar3 <= local_408._4_4_) {
                  uVar18 = (ulonglong)(uint)local_408._4_4_;
                }
                fVar39 = (float)uVar18;
                if ((float)uVar18 <= fVar48) {
                  fVar39 = fVar48;
                }
                if (fVar39 <= 0.0) {
                  dVar17 = 0.0;
                }
                else {
                  dVar17 = (double)CONCAT44(uVar63,uVar62) / (double)fVar39;
                }
                fVar43 = (float)dVar17;
                fVar39 = (float)*(int *)&this_00[2].ComputeDataBufferInterface +
                         (float)*(int *)&this_00[2].ComputeDataBufferInterface;
                *(int *)((longlong)aVar24 + 0xb0) =
                     -((int)ROUND(fVar35 - fVar43 * (float)uVar3 * fVar39) >> 1);
                *(int *)((longlong)aVar24 + 0xb4) =
                     -((int)ROUND(fVar35 - fVar43 * local_408._4_4_ * fVar39) >> 1);
                *(int *)((longlong)aVar24 + 0xb8) =
                     -((int)ROUND(fVar35 - fVar43 * fVar48 * fVar39) >> 1);
                *(undefined4 *)((longlong)aVar24 + 0xc0) =
                     *(undefined4 *)&this_00[3].MaterialRelevance.field0_0x0;
                *(undefined4 *)((longlong)aVar24 + 0xc4) =
                     *(undefined4 *)((longlong)&this_00[3].MaterialRelevance.field0_0x0 + 4);
                *(int *)((longlong)aVar24 + 200) = (int)this_00[3].SystemInstanceID;
                *(undefined4 *)((longlong)aVar24 + 0xcc) =
                     *(undefined4 *)((longlong)&this_00[3].SystemInstanceID + 4);
                *(undefined8 **)((longlong)FVar32 + 0x38) = (undefined8 *)((longlong)aVar24 + 0x10);
                local_408 = uVar3;
                FMeshElementCollector::AddMesh(param_4,local_4c0,(FMeshBatch *)FVar26);
              }
            }
          }
          iVar22 = param_1->ArrayNum;
          local_4c0 = local_4c0 + 1;
          local_4a0 = local_4a0 + 8;
        } while ((int)local_4c0 < iVar22);
      }
    }
  }
  return;
}

// GetDynamicRayTracingInstances @ 1493a5f30

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

void __thiscall
FNiagaraRendererVolumes::GetDynamicRayTracingInstances
          (FNiagaraRendererVolumes *this,FRayTracingInstanceCollector *param_1,
          FNiagaraSceneProxy *param_2)

{
  return;
}

// IsMaterialValid @ 1493aa4d0

bool __thiscall
FNiagaraRendererVolumes::IsMaterialValid(FNiagaraRendererVolumes *this,UMaterialInterface *param_1)

{
  undefined1 uVar1;
  
  if (param_1 != (UMaterialInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493aa4e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1->_padding_ + 0x378))(param_1,0x15);
    return (bool)uVar1;
  }
  return false;
}

// ReleaseRenderThreadResources @ 1493b4b80

void __thiscall FNiagaraRendererVolumes::ReleaseRenderThreadResources(FNiagaraRendererVolumes *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001493b4b8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->VertexFactory)._padding_ + 0x20))();
  return;
}

