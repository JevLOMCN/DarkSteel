// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 8

// FShadowDepthPassMeshProcessor @ 145576750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FShadowDepthPassMeshProcessor * __thiscall
FShadowDepthPassMeshProcessor::FShadowDepthPassMeshProcessor
          (FShadowDepthPassMeshProcessor *this,FScene *param_1,Type param_2,FSceneView *param_3,
          EShadowDepthType param_4,FMeshPassDrawListContext *param_5)

{
  EShadowDepthType EVar1;
  bool bVar2;
  EShadowMeshSelection EVar3;
  TRefCountPtr<FRHIDepthStencilState> TVar4;
  EShaderPlatform EVar5;
  Type TVar6;
  
  if ((param_4 & VSM) == None) {
    TVar6 = CSMShadowDepth;
    if ((param_4 & OnePassPoint) != None) {
      TVar6 = OnePassPointLightShadowDepth;
    }
  }
  else {
    TVar6 = VSMShadowDepth;
  }
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,TVar6,param_1,param_2,param_3,param_5);
  this->_padding_ = (longlong)&___7FShadowDepthPassMeshProcessor__6B_;
  (this->PassDrawRenderState).BlendState = (FRHIBlendState *)0x0;
  (this->PassDrawRenderState).DepthStencilState = (FRHIDepthStencilState *)0x0;
  (this->PassDrawRenderState).DepthStencilAccess = DepthRead_StencilRead;
  (this->PassDrawRenderState).ViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).InstancedViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).PassUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).NaniteUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).StencilRef = 0;
  this->ShadowDepthType = param_4;
  this->MeshSelectionMask = All;
  if (param_2 == Num) {
    EVar5 = SP_NumPlatforms;
  }
  else {
    EVar5 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_2];
  }
  bVar2 = UseNonNaniteVirtualShadowMaps(EVar5,(FGenericStaticFeatureLevel)(Type)this->_padding_);
  if (bVar2) {
    EVar3 = ((this->ShadowDepthType & VSM) != None) + SM;
  }
  else {
    EVar3 = All;
  }
  this->MeshSelectionMask = EVar3;
  EVar1 = this->ShadowDepthType;
  (this->PassDrawRenderState).BlendState =
       TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  TVar4 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
          ::StaticResource.StateRHI;
  if (((EVar1 & VSM) == None) &&
     (TVar4 = TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource.StateRHI, (EVar1 & OnePassPoint) == None)) {
    TVar4 = TStaticStateRHI<TStaticDepthStencilState<1,1,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
            ::StaticResource.StateRHI;
  }
  (this->PassDrawRenderState).DepthStencilState = TVar4.Reference;
  (this->PassDrawRenderState).StencilRef = 0;
  return this;
}

// AddMeshBatch @ 14557f530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
FShadowDepthPassMeshProcessor::AddMeshBatch
          (FShadowDepthPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  undefined1 uVar1;
  EShadowDepthType EVar2;
  FVertexFactory *pFVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  EShadowMeshSelection EVar7;
  bool bVar8;
  ERasterizerFillMode EVar9;
  ERasterizerCullMode EVar10;
  uint uVar11;
  int iVar12;
  FMaterial *this_00;
  longlong lVar13;
  UMaterial *pUVar14;
  FMaterialRenderProxy *pFVar15;
  FMaterialRenderProxy *pFVar16;
  byte bVar17;
  ERasterizerCullMode EVar18;
  FMeshDrawingPolicyOverrideSettings local_48 [2];
  
  if (param_1->CastShadow != 0) {
    for (pFVar16 = param_1->MaterialRenderProxy; pFVar16 != (FMaterialRenderProxy *)0x0;
        pFVar16 = (FMaterialRenderProxy *)
                  (**(code **)(pFVar16->_padding_ + 0x38))(pFVar16,(int)this->_padding_)) {
      this_00 = (FMaterial *)(**(code **)(pFVar16->_padding_ + 0x30))(pFVar16,(int)this->_padding_);
      if (this_00 != (FMaterial *)0x0) {
        bVar5 = FMaterial::ShouldCastDynamicShadows(this_00);
        local_48[0] = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
        EVar9 = FMeshPassProcessor::ComputeMeshFillMode(this_00,local_48);
        EVar10 = FMeshPassProcessor::ComputeMeshCullMode(this_00,local_48);
        EVar2 = this->ShadowDepthType;
        cVar6 = (**(code **)(this_00->_padding_ + 0x48))(this_00);
        if ((cVar6 != '\0') || (bVar8 = false, param_3->bCastShadowAsTwoSided != '\0')) {
          bVar8 = true;
        }
        if ((EVar2 & VSM) == None) {
          bVar17 = (byte)(EVar2 >> 3) & 1;
        }
        else {
          bVar17 = 0;
        }
        if (bVar8) {
          EVar18 = CM_None;
        }
        else {
          EVar18 = EVar10;
          if ((bVar17 != 0) && (EVar18 = CM_None, EVar10 != CM_None)) {
            EVar18 = (EVar10 != CM_CCW) + CM_CW;
          }
        }
        if (!bVar5) {
          return;
        }
        uVar11 = GetShadowQuality();
        if (uVar11 == 0) {
          return;
        }
        iVar12 = (**(code **)(this_00->_padding_ + 0x40))(this_00);
        if (iVar12 == 3) {
          return;
        }
        bVar5 = ShouldIncludeMaterialInDefaultOpaquePass(this_00);
        if (!bVar5) {
          return;
        }
        pFVar3 = param_1->VertexFactory;
        lVar13 = (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3);
        if (((*(byte *)(lVar13 + 0x38) & 0x80) == 0) ||
           (EVar7 = VSM, pFVar3->PrimitiveIdStreamIndex[0] == -1)) {
          EVar7 = SM;
        }
        if ((this->MeshSelectionMask & EVar7) == 0) {
          return;
        }
        lVar13 = (**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
        uVar11 = *(uint *)(lVar13 + 0x38);
        bVar5 = DoMaterialAndPrimitiveModifyMeshPosition(this_00,param_3);
        bVar8 = FMaterial::WritesEveryPixel(this_00,true,(uVar11 >> 0xf & 1) == 0);
        pFVar15 = pFVar16;
        if ((bVar8) && (!bVar5)) {
          pUVar14 = UMaterial::GetDefaultMaterial(MD_Surface);
          pFVar15 = (FMaterialRenderProxy *)(**(code **)(pUVar14->_padding_ + 0x310))(pUVar14);
          this_00 = (FMaterial *)
                    (**(code **)(pFVar15->_padding_ + 0x30))(pFVar15,(int)this->_padding_);
          if ((this_00 == (FMaterial *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("DefaultMaterialResource",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowDepthRendering.cpp"
                                 ,0x86c,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        bVar5 = Process(this,param_1,param_2,param_4,param_3,pFVar15,this_00,EVar9,EVar18);
        if (bVar5) {
          return;
        }
      }
    }
  }
  return;
}

// CollectPSOInitializers @ 145585970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FShadowDepthPassMeshProcessor::CollectPSOInitializers
          (FShadowDepthPassMeshProcessor *this,FSceneTexturesConfig *param_1,FMaterial *param_2,
          FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  Type TVar1;
  EVertexFactoryFlags EVar2;
  FPSOPrecacheParams *pFVar3;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ERasterizerCullMode EVar10;
  ERasterizerFillMode EVar11;
  FCachedSystemScalabilityCVars *pFVar12;
  UMaterial *pUVar13;
  FMaterial *pFVar14;
  EShadowDepthType EVar15;
  
  pFVar3 = param_4;
  if (((*(byte *)&param_4->field0_0x0 & 0x40) != 0) ||
     ((((uVar8 = GetShadowQuality(), uVar8 != 0 &&
        (bVar5 = FMaterial::ShouldCastDynamicShadows(param_2), bVar5)) &&
       (iVar9 = (**(code **)(param_2->_padding_ + 0x40))(param_2), iVar9 == 0)) &&
      ((bVar5 = ShouldIncludeMaterialInDefaultOpaquePass(param_2), bVar5 &&
       ((this->MeshSelectionMask &
        ((param_3->VertexFactoryType->Flags & SupportsPrimitiveIdStream) != None) + SM) != 0)))))) {
    if (((pFVar3->field0_0x0).Data & 0x40) == 0) {
      if (((pFVar3->field0_0x0).Data >> 0xd & 1) != 0) {
        EVar2 = param_3->VertexFactoryType->Flags;
        bVar5 = FMaterial::MaterialModifiesMeshPosition_GameThread(param_2);
        bVar7 = FMaterial::WritesEveryPixel(param_2,true,(EVar2 >> 0xf & 1) == 0);
        pFVar14 = param_2;
        if ((bVar7) && (!bVar5)) {
          if (param_3->CustomDefaultVertexDeclaration == (FRHIVertexDeclaration *)0x0) {
            return;
          }
          pFVar12 = GetCachedScalabilityCVars();
          TVar1 = pFVar12->MaterialQualityLevel;
          pUVar13 = UMaterial::GetDefaultMaterial(MD_Surface);
          pFVar14 = (FMaterial *)
                    (**(code **)(pUVar13->_padding_ + 0x390))(pUVar13,param_1->ShaderPlatform,TVar1)
          ;
        }
        param_4 = (FPSOPrecacheParams *)FMeshPassProcessor::ComputeMeshOverrideSettings(pFVar3);
        EVar11 = FMeshPassProcessor::ComputeMeshFillMode
                           (param_2,(FMeshDrawingPolicyOverrideSettings *)&param_4);
        EVar10 = FMeshPassProcessor::ComputeMeshCullMode
                           (param_2,(FMeshDrawingPolicyOverrideSettings *)&param_4);
        CollectPSOInitializersForEachShadowDepthType
                  (this,param_3,pFVar14,EVar11,EVar10,
                   (bool)((byte)(*(uint *)&pFVar3->field0_0x0 >> 0x13) & 1),param_5);
      }
    }
    else {
      EVar15 = this->ShadowDepthType & VSM;
      (**(code **)(param_2->_padding_ + 0x48))(param_2);
      pTVar4 = param_5;
      CollectPSOInitializersForEachStreamSetup
                (this,param_3,param_2,EVar15 | Directional,ERasterizerFillMode_NumBits,CM_None,true,
                 param_5);
      (**(code **)(param_2->_padding_ + 0x48))(param_2);
      CollectPSOInitializersForEachStreamSetup
                (this,param_3,param_2,EVar15 | OnePassPoint,ERasterizerFillMode_NumBits,CM_None,true
                 ,pTVar4);
      (**(code **)(param_2->_padding_ + 0x48))(param_2);
      CollectPSOInitializersForEachStreamSetup
                (this,param_3,param_2,EVar15,ERasterizerFillMode_NumBits,CM_None,true,pTVar4);
      EVar15 = this->ShadowDepthType & VSM;
      cVar6 = (**(code **)(param_2->_padding_ + 0x48))(param_2);
      CollectPSOInitializersForEachStreamSetup
                (this,param_3,param_2,EVar15 | Directional,ERasterizerFillMode_NumBits,
                 (uint)(cVar6 == '\0'),true,pTVar4);
      cVar6 = (**(code **)(param_2->_padding_ + 0x48))(param_2);
      if (cVar6 == '\0') {
        EVar10 = CM_CCW - (EVar15 != None);
      }
      else {
        EVar10 = CM_None;
      }
      CollectPSOInitializersForEachStreamSetup
                (this,param_3,param_2,EVar15 | OnePassPoint,ERasterizerFillMode_NumBits,EVar10,true,
                 pTVar4);
      cVar6 = (**(code **)(param_2->_padding_ + 0x48))(param_2);
      CollectPSOInitializersForEachStreamSetup
                (this,param_3,param_2,EVar15,ERasterizerFillMode_NumBits,(uint)(cVar6 == '\0'),true,
                 pTVar4);
      EVar15 = this->ShadowDepthType & VSM;
      cVar6 = (**(code **)(param_2->_padding_ + 0x48))(param_2);
      EVar10 = CM_None;
      if (cVar6 == '\0') {
        EVar10 = CM_CCW;
      }
      CollectPSOInitializersForEachStreamSetup
                (this,param_3,param_2,EVar15 | Directional,ERasterizerFillMode_NumBits,EVar10,true,
                 pTVar4);
      cVar6 = (**(code **)(param_2->_padding_ + 0x48))(param_2);
      EVar10 = CM_None;
      if (cVar6 == '\0') {
        EVar10 = (EVar15 != None) + CM_CW;
      }
      CollectPSOInitializersForEachStreamSetup
                (this,param_3,param_2,EVar15 | OnePassPoint,ERasterizerFillMode_NumBits,EVar10,true,
                 pTVar4);
      cVar6 = (**(code **)(param_2->_padding_ + 0x48))(param_2);
      EVar10 = CM_None;
      if (cVar6 == '\0') {
        EVar10 = CM_CCW;
      }
      CollectPSOInitializersForEachStreamSetup
                (this,param_3,param_2,EVar15,ERasterizerFillMode_NumBits,EVar10,true,pTVar4);
    }
  }
  return;
}

// CollectPSOInitializersForEachShadowDepthType @ 145585d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
FShadowDepthPassMeshProcessor::CollectPSOInitializersForEachShadowDepthType
          (FShadowDepthPassMeshProcessor *this,FPSOPrecacheVertexFactoryData *param_1,
          FMaterial *param_2,ERasterizerFillMode param_3,ERasterizerCullMode param_4,bool param_5,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_6)

{
  bool bVar1;
  char cVar2;
  ERasterizerCullMode EVar3;
  EShadowDepthType EVar4;
  
  EVar4 = this->ShadowDepthType & VSM;
  cVar2 = (**(code **)(param_2->_padding_ + 0x48))(param_2);
  if ((cVar2 != '\0') || (EVar3 = param_4, param_5)) {
    EVar3 = CM_None;
  }
  CollectPSOInitializersForEachStreamSetup
            (this,param_1,param_2,EVar4 | Directional,param_3,EVar3,true,param_6);
  cVar2 = (**(code **)(param_2->_padding_ + 0x48))();
  if ((cVar2 != '\0') || (param_5)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    EVar3 = CM_None;
  }
  else {
    EVar3 = param_4;
    if ((EVar4 == None) && (EVar3 = CM_None, param_4 != CM_None)) {
      EVar3 = (param_4 != CM_CCW) + CM_CW;
    }
  }
  CollectPSOInitializersForEachStreamSetup
            (this,param_1,param_2,EVar4 | OnePassPoint,param_3,EVar3,true,param_6);
  cVar2 = (**(code **)(param_2->_padding_ + 0x48))(param_2);
  if ((cVar2 != '\0') || (param_5)) {
    param_4 = CM_None;
  }
  CollectPSOInitializersForEachStreamSetup(this,param_1,param_2,EVar4,param_3,param_4,true,param_6);
  return;
}

// CollectPSOInitializersForEachStreamSetup @ 145585e80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShadowDepthPassMeshProcessor::CollectPSOInitializersForEachStreamSetup
          (FShadowDepthPassMeshProcessor *this,FPSOPrecacheVertexFactoryData *param_1,
          FMaterial *param_2,EShadowDepthType param_3,ERasterizerFillMode param_4,
          ERasterizerCullMode param_5,bool param_6,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_7)

{
  TRefCountPtr<FRHIDepthStencilState> TVar1;
  
  (this->PassDrawRenderState).BlendState =
       TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  TVar1 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
          ::StaticResource.StateRHI;
  if (((param_3 & VSM) == None) &&
     (TVar1 = TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource.StateRHI, (param_3 & OnePassPoint) == None)) {
    TVar1 = TStaticStateRHI<TStaticDepthStencilState<1,1,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
            ::StaticResource.StateRHI;
  }
  (this->PassDrawRenderState).DepthStencilState = TVar1.Reference;
  (this->PassDrawRenderState).StencilRef = 0;
  if ((param_1->VertexFactoryType->Flags & SupportsPositionOnly) != None) {
    CollectPSOInitializersInternal
              (this,param_1,param_2,param_3,param_4,param_5,true,param_6,param_7);
  }
  CollectPSOInitializersInternal(this,param_1,param_2,param_3,param_4,param_5,false,param_6,param_7)
  ;
  return;
}

// CollectPSOInitializersInternal @ 145585f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FShadowDepthPassMeshProcessor::CollectPSOInitializersInternal
          (FShadowDepthPassMeshProcessor *this,FPSOPrecacheVertexFactoryData *param_1,
          FMaterial *param_2,EShadowDepthType param_3,ERasterizerFillMode param_4,
          ERasterizerCullMode param_5,bool param_6,bool param_7,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_8)

{
  bool bVar1;
  ETextureCreateFlags EVar2;
  EMeshPassFeatures EVar3;
  undefined1 auStackY_178 [32];
  TMeshProcessorShaders<FShadowDepthVS,FShadowDepthBasePS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_108;
  FGraphicsPipelineRenderTargetsInfo local_b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_108.VertexShader.ShaderContent = (FShadowDepthVS *)0x0;
  local_108.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_108.PixelShader.ShaderContent = (FShadowDepthBasePS *)0x0;
  local_108.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_108.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_108.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_108.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_108.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_108.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_108.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  bVar1 = FMaterial::MaterialModifiesMeshPosition_GameThread(param_2);
  bVar1 = GetShadowDepthPassShaders
                    (param_2,param_1->VertexFactoryType,(Type)this->_padding_,param_3,param_6,bVar1,
                     &local_108.VertexShader,&local_108.PixelShader);
  if (!bVar1) {
    return;
  }
  if ((param_6) &&
     (bVar1 = FMaterial::WritesEveryPixel
                        (param_2,true,
                         (param_1->VertexFactoryType->Flags & DoesNotSupportNullPixelShader) == None
                        ), bVar1)) {
    bVar1 = FMaterial::MaterialModifiesMeshPosition_GameThread(param_2);
    EVar3 = PositionAndNormalOnly;
    if (!bVar1) goto LAB_145586061;
  }
  EVar3 = Default;
LAB_145586061:
  local_b8.RenderTargetFlags.Elements[0] = None;
  local_b8.RenderTargetFlags.Elements[1] = None;
  local_b8.RenderTargetFlags.Elements[2] = None;
  local_b8.RenderTargetFlags.Elements[3] = None;
  local_b8.RenderTargetFlags.Elements[4] = None;
  local_b8.RenderTargetFlags.Elements[5] = None;
  local_b8.RenderTargetFlags.Elements[6] = None;
  local_b8.RenderTargetFlags.Elements[7] = None;
  local_b8.RenderTargetsEnabled = 0;
  local_b8.RenderTargetFormats.Elements[0] = '\0';
  local_b8.RenderTargetFormats.Elements[1] = '\0';
  local_b8.RenderTargetFormats.Elements[2] = '\0';
  local_b8.RenderTargetFormats.Elements[3] = '\0';
  local_b8.RenderTargetFormats.Elements[4] = '\0';
  local_b8.RenderTargetFormats.Elements[5] = '\0';
  local_b8.RenderTargetFormats.Elements[6] = '\0';
  local_b8.RenderTargetFormats.Elements[7] = '\0';
  local_b8.DepthStencilTargetFormat = PF_Unknown;
  local_b8.DepthStencilTargetFlag = None;
  local_b8.DepthTargetLoadAction = ENoAction;
  local_b8.DepthTargetStoreAction = ENoAction;
  local_b8.StencilTargetLoadAction = ENoAction;
  local_b8.StencilTargetStoreAction = ENoAction;
  local_b8.DepthStencilAccess.Value = DepthNop;
  local_b8.NumSamples = 0;
  local_b8.MultiViewCount = '\0';
  local_b8.bHasFragmentDensityAttachment = false;
  if ((char)this->_padding_ != '\b') {
    local_b8.NumSamples = 1;
    local_b8.MultiViewCount = '\0';
    local_b8.bHasFragmentDensityAttachment = false;
    EVar2 = GFastVRamConfig.ShadowPointLight | (NoFastClear|ShaderResource|DepthStencilTargetable);
    if ((param_3 & OnePassPoint) == None) {
      EVar2 = GFastVRamConfig.ShadowPointLight | (ShaderResource|DepthStencilTargetable);
    }
    SetupDepthStencilInfo
              (PF_ShadowDepth,EVar2,ELoad,ENoAction,(FExclusiveDepthStencil)0x2,&local_b8);
  }
  FMeshPassProcessor::
  AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<FShadowDepthVS,FShadowDepthBasePS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
            (param_1,param_2,&this->PassDrawRenderState,&local_b8,&local_108,param_4,param_5,
             PT_TriangleList,EVar3,None,'\0',param_7,(int)this->_padding_,param_8);
  return;
}

// Process @ 1455bb670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __thiscall
FShadowDepthPassMeshProcessor::Process
          (FShadowDepthPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,int param_3,
          FPrimitiveSceneProxy *param_4,FMaterialRenderProxy *param_5,FMaterial *param_6,
          ERasterizerFillMode param_7,ERasterizerCullMode param_8)

{
  EShadowDepthType EVar1;
  FGenericStaticFeatureLevel FVar2;
  FVertexFactory *pFVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  EMeshPassFeatures EVar7;
  FVertexFactoryType *pFVar8;
  FMeshDrawCommandSortKey FVar9;
  longlong lVar10;
  EMeshPassFeatures EVar11;
  EMeshPassFeatures EVar12;
  EMeshPassFeatures EVar13;
  byte bVar14;
  FShadowDepthShaderElementData local_a8;
  TMeshProcessorShaders<FShadowDepthVS,FShadowDepthBasePS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_88;
  
  pFVar3 = param_1->VertexFactory;
  local_88.VertexShader.ShaderContent = (FShadowDepthVS *)0x0;
  local_88.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.PixelShader.ShaderContent = (FShadowDepthBasePS *)0x0;
  local_88.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_88.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_88.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_88.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  bVar4 = FMaterial::MaterialModifiesMeshPosition_RenderThread(param_6);
  bVar5 = (bool)(**(code **)(pFVar3->_padding_ + 0x40))(pFVar3);
  EVar1 = this->ShadowDepthType;
  lVar10 = this->_padding_;
  pFVar8 = (FVertexFactoryType *)(**(code **)(pFVar3->_padding_ + 0x30))(pFVar3);
  bVar4 = GetShadowDepthPassShaders
                    (param_6,pFVar8,(Type)lVar10,EVar1,bVar5,bVar4,&local_88.VertexShader,
                     &local_88.PixelShader);
  if (!bVar4) {
    return bVar4;
  }
  local_a8._padding_ = 0;
  local_a8._padding_ = 0;
  FMeshMaterialShaderElementData::InitializeMeshMaterialData
            ((FMeshMaterialShaderElementData *)&local_a8,(FSceneView *)this->_padding_,param_4,
             param_3,param_1->bDitheredLODTransition,false);
  FVar9 = CalculateMeshStaticSortKey
                    ((FMeshMaterialShader *)local_88.VertexShader.ShaderContent,
                     (FMeshMaterialShader *)local_88.PixelShader.ShaderContent);
  FVar2.FeatureLevel = (Type)this->_padding_;
  bVar4 = UseGPUScene((FStaticShaderPlatform)
                      GRHIGlobals.ShaderPlatformForFeatureLevel[(int)FVar2.FeatureLevel],FVar2);
  if (((bVar4) &&
      (lVar10 = (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3),
      (*(byte *)(lVar10 + 0x38) & 0x80) != 0)) && (pFVar3->PrimitiveIdStreamIndex[0] != -1)) {
    bVar14 = 1;
  }
  else {
    bVar14 = 0;
  }
  cVar6 = (**(code **)(pFVar3->_padding_ + 0x40))(pFVar3);
  EVar13 = Default;
  if (cVar6 != '\0') {
    lVar10 = (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3);
    bVar4 = FMaterial::WritesEveryPixel
                      (param_6,true,(bool)(~(byte)(*(uint *)(lVar10 + 0x38) >> 0xf) & 1));
    if (bVar4) {
      bVar4 = FMaterial::MaterialModifiesMeshPosition_RenderThread(param_6);
      EVar11 = PositionAndNormalOnly;
      if (!bVar4) goto LAB_1455bb80c;
    }
  }
  EVar11 = EVar13;
LAB_1455bb80c:
  if (((this->ShadowDepthType & OnePassPoint) == None) || (EVar7 = PositionOnly, bVar14 != 0)) {
    EVar7 = EVar13;
  }
  EVar12 = PositionOnly;
  if (EVar7 != Default) {
    EVar12 = 6;
  }
  do {
    local_a8.bUseGpuSceneInstancing = (int)bVar14;
    local_a8.LayerId = EVar13;
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<FShadowDepthVS,FShadowDepthBasePS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FShadowDepthShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_4,param_5,param_6,
               &this->PassDrawRenderState,&local_88,param_7,param_8,FVar9,EVar11,&local_a8);
    EVar13 = EVar13 + PositionOnly;
  } while (EVar13 < EVar12);
  return true;
}

// TryAddMeshBatch @ 1455e7cc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

bool __thiscall
FShadowDepthPassMeshProcessor::TryAddMeshBatch
          (FShadowDepthPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          )

{
  EShadowDepthType EVar1;
  FVertexFactory *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  EShadowMeshSelection EVar6;
  bool bVar7;
  undefined1 uVar8;
  ERasterizerFillMode EVar9;
  ERasterizerCullMode EVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  UMaterial *pUVar14;
  byte bVar15;
  ERasterizerCullMode EVar16;
  FMeshDrawingPolicyOverrideSettings local_res8;
  
  bVar4 = FMaterial::ShouldCastDynamicShadows(param_6);
  local_res8 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
  EVar9 = FMeshPassProcessor::ComputeMeshFillMode(param_6,&local_res8);
  EVar10 = FMeshPassProcessor::ComputeMeshCullMode(param_6,&local_res8);
  EVar1 = this->ShadowDepthType;
  cVar5 = (**(code **)(param_6->_padding_ + 0x48))(param_6);
  if ((cVar5 != '\0') || (bVar7 = false, param_3->bCastShadowAsTwoSided != '\0')) {
    bVar7 = true;
  }
  if ((EVar1 & VSM) == None) {
    bVar15 = (byte)(EVar1 >> 3) & 1;
  }
  else {
    bVar15 = 0;
  }
  if (bVar7) {
    EVar16 = CM_None;
  }
  else {
    EVar16 = EVar10;
    if ((bVar15 != 0) && (EVar16 = CM_None, EVar10 != CM_None)) {
      EVar16 = (EVar10 != CM_CCW) + CM_CW;
    }
  }
  if ((((bVar4) && (uVar11 = GetShadowQuality(), uVar11 != 0)) &&
      (iVar12 = (**(code **)(param_6->_padding_ + 0x40))(param_6), iVar12 != 3)) &&
     (bVar4 = ShouldIncludeMaterialInDefaultOpaquePass(param_6), bVar4)) {
    pFVar2 = param_1->VertexFactory;
    lVar13 = (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2);
    if (((*(byte *)(lVar13 + 0x38) & 0x80) == 0) ||
       (EVar6 = VSM, pFVar2->PrimitiveIdStreamIndex[0] == -1)) {
      EVar6 = SM;
    }
    if ((this->MeshSelectionMask & EVar6) != 0) {
      lVar13 = (**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
      uVar11 = *(uint *)(lVar13 + 0x38);
      bVar4 = DoMaterialAndPrimitiveModifyMeshPosition(param_6,param_3);
      bVar7 = FMaterial::WritesEveryPixel(param_6,true,(uVar11 >> 0xf & 1) == 0);
      if ((bVar7) && (!bVar4)) {
        pUVar14 = UMaterial::GetDefaultMaterial(MD_Surface);
        param_5 = (FMaterialRenderProxy *)(**(code **)(pUVar14->_padding_ + 0x310))(pUVar14);
        param_6 = (FMaterial *)
                  (**(code **)(param_5->_padding_ + 0x30))(param_5,(int)this->_padding_);
        if ((param_6 == (FMaterial *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("DefaultMaterialResource",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowDepthRendering.cpp"
                               ,0x86c,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
      }
      bVar4 = Process(this,param_1,param_2,param_4,param_3,param_5,param_6,EVar9,EVar16);
      return bVar4;
    }
  }
  return true;
}

