// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FSceneProxyBase @ 1483e6cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSceneProxyBase * __thiscall
Nanite::FSceneProxyBase::FSceneProxyBase(FSceneProxyBase *this,FPrimitiveSceneProxyDesc *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  ECustomDepthMode EVar3;
  byte bVar4;
  
  FPrimitiveSceneProxy::FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this,param_1,(FName)0x0);
  this->MaterialMaxIndex = -1;
  this->_padding_ = (longlong)&___7FSceneProxyBase_Nanite__6B_;
  (this->MaterialSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialSections).ArrayNum = 0;
  (this->MaterialSections).ArrayMax = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 2;
  this->InstanceWPODisableDistance = 0;
  this->PixelProgrammableDistance = 0.0;
  this->MaterialDisplacementFadeOutSize = 0.0;
  this->FilterFlags = None;
  this->RayTracingId = 0xffffffff;
  this->RayTracingDataOffset = 0xffffffff;
  if (GNaniteCustomDepthEnabled == 0) {
LAB_1483e6d32:
    if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          bAllowStaticLighting = FReadOnlyCVARCache::bAllowStaticLighting;
          _Init_thread_footer(&::_TSS0);
        }
      }
      bVar4 = 4;
      if (bAllowStaticLighting != false) {
        bVar4 = 0;
      }
      goto LAB_1483e6d6d;
    }
  }
  else {
    EVar3 = GetCustomDepthMode();
    if ((EVar3 == Disabled) || ((this->_padding_ & 0x4000000000000) == 0)) goto LAB_1483e6d32;
  }
  bVar4 = 0;
LAB_1483e6d6d:
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfb;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | bVar4;
  this->bHasVertexProgrammableRaster = '\0';
  this->bHasPerClusterDisplacementFallbackRaster = '\0';
  this->bReverseCulling = '\0';
  this->bHasVoxels = '\0';
  this->bHasDynamicDisplacement = '\0';
  this->bHasPixelProgrammableRaster = '\0';
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 | 8;
  return this;
}

// DrawStaticElementsInternal @ 1483fd5c0

void __thiscall
Nanite::FSceneProxyBase::DrawStaticElementsInternal
          (FSceneProxyBase *this,FStaticPrimitiveDrawInterface *param_1,
          FLightCacheInterface *param_2)

{
  return;
}

// GetMaterialDisplacementFadeOutSize @ 148408c00

float __thiscall Nanite::FSceneProxyBase::GetMaterialDisplacementFadeOutSize(FSceneProxyBase *this)

{
  bool bVar1;
  IConsoleManager *pIVar2;
  longlong *plVar3;
  TConsoleVariableData<int> *pTVar4;
  TConsoleVariableData<int> *pTVar5;
  float fVar6;
  
  pTVar5 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar2 = IConsoleManager::Get();
    plVar3 = (longlong *)
             (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,L"r.Nanite.MaxPixelsPerEdge",1);
    pTVar4 = pTVar5;
    if (plVar3 != (longlong *)0x0) {
      pTVar4 = (TConsoleVariableData<int> *)(**(code **)(*plVar3 + 0x68))(plVar3);
    }
    CVarNaniteMaxPixelsPerEdge = pTVar4;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar4 = CVarNaniteMaxPixelsPerEdge;
  fVar6 = __real_3f800000;
  if (CVarNaniteMaxPixelsPerEdge != (TConsoleVariableData<int> *)0x0) {
    bVar1 = IsInParallelGameThread();
    if ((!bVar1) && (bVar1 = IsInGameThread(), !bVar1)) {
      pTVar5 = (TConsoleVariableData<int> *)&DAT_00000004;
    }
    fVar6 = (float)*(int *)((longlong)pTVar4->ShadowedValue + (longlong)pTVar5->ShadowedValue);
  }
  return this->MaterialDisplacementFadeOutSize / fVar6;
}

// GetStreamableRenderAssetInfo @ 14840b330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
Nanite::FSceneProxyBase::GetStreamableRenderAssetInfo
          (FSceneProxyBase *this,TBoxSphereBounds<double,double> *param_1,
          TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  float fVar2;
  Type TVar3;
  UMaterialInterface *pUVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackY_108 [32];
  undefined1 local_c8 [8];
  FPrimitiveMaterialInfo local_c0;
  FStreamingTextureLevelContext local_a8;
  FMeshUVChannelInfo local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_108;
  TVar3 = GetCurrentMaterialQualityLevelChecked();
  FStreamingTextureLevelContext::FStreamingTextureLevelContext
            (&local_a8,TVar3,(ULevel *)0x0,
             (TMap<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_> *)0x0);
  fVar2 = __real_3f800000;
  iVar1 = (this->MaterialSections).ArrayNum;
  pFVar5 = (this->MaterialSections).AllocatorInstance.Data;
  local_a8.bForceNoUseBuiltData = true;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x50;
  while( true ) {
    if ((this->MaterialSections).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Nanite::FSceneProxyBase::FMaterialSection_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_c8);
    }
    if (pFVar5 == pFVar6) break;
    pUVar4 = (UMaterialInterface *)(**(code **)(**(longlong **)(pFVar5 + 8) + 0x40))();
    if (pUVar4 != (UMaterialInterface *)0x0) {
      local_58.LocalUVDensities._0_8_ = *(undefined8 *)(pFVar5 + 0x30);
      local_58.LocalUVDensities._8_8_ = *(undefined8 *)(pFVar5 + 0x38);
      local_c0.UVChannelData = &local_58;
      local_58.bOverrideDensities = false;
      local_58._2_1_ = 0;
      local_58._3_1_ = 0;
      local_58.bInitialized = true;
      local_c0.PackedRelativeBox = 0xffff0000;
      local_c0.Material = pUVar4;
      FStreamingTextureLevelContext::ProcessMaterial
                (&local_a8,param_1,&local_c0,fVar2,param_2,false,(UPrimitiveComponent *)0x0);
    }
    pFVar5 = pFVar5 + 0x50;
  }
  FStreamingTextureLevelContext::~FStreamingTextureLevelContext(&local_a8);
  return;
}

// OnMaterialsUpdated @ 148416ed0

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
/* WARNING: Enum "EBlendMode": Some values do not have unique names */

void __thiscall Nanite::FSceneProxyBase::OnMaterialsUpdated(FSceneProxyBase *this,bool param_1)

{
  undefined1 *puVar1;
  byte *pbVar2;
  FScriptContainerElement FVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  float fVar7;
  uint uVar8;
  TVector2<float> TVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  byte bVar13;
  bool bVar14;
  FStaticShaderPlatform FVar15;
  EBlendMode EVar16;
  UMaterialInterface *this_00;
  FMaterialRelevance FVar17;
  undefined8 uVar18;
  UMaterial *pUVar19;
  undefined8 *puVar20;
  byte bVar21;
  FScriptContainerElement FVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  char cVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [64];
  
  this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  TVar9 = UE::Math::TVector2<float>::ZeroVector;
  this->bHasVertexProgrammableRaster = '\0';
  this->bHasVoxels = '\0';
  this->bHasDynamicDisplacement = '\0';
  this->bHasPixelProgrammableRaster = '\0';
  pbVar2 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar2 = *pbVar2 & 0xe7;
  this->_padding_ = (longlong)TVar9.field0_0x0;
  this->MaterialDisplacementFadeOutSize = 3.4028235e+38;
  bVar10 = UseNaniteTessellation();
  FVar15.Platform = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
  bVar11 = VelocityEncodeHasPixelAnimation(FVar15);
  uVar8 = __xmm_80000000800000008000000080000000;
  fVar7 = __real_3f800000;
  iVar4 = (this->MaterialSections).ArrayNum;
  pFVar24 = (this->MaterialSections).AllocatorInstance.Data;
  pFVar27 = pFVar24 + (longlong)iVar4 * 0x50;
  do {
    if ((this->MaterialSections).ArrayNum != iVar4) {
      `TCheckedPointerIterator<Nanite::FSceneProxyBase::FMaterialSection,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar24 == pFVar27) {
      if (this->bHasDynamicDisplacement == '\0') {
        this->MaterialDisplacementFadeOutSize = 0.0;
      }
      return;
    }
    this_00 = (UMaterialInterface *)(**(code **)(**(longlong **)(pFVar24 + 8) + 0x40))();
    if (!param_1) {
      FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
      FVar17 = UMaterialInterface::GetRelevance_Concurrent(this_00,(EShaderPlatform)local_res20);
      *(undefined8 *)(pFVar24 + 0x28) = *(undefined8 *)FVar17.field0_0x0;
    }
    lVar6 = this->_padding_;
    this->_padding_ = this->_padding_ | *(ulonglong *)(pFVar24 + 0x28);
    uVar23 = (uint)lVar6 >> 0x12;
    uVar26 = *(uint *)(pFVar24 + 0x28) >> 0x12;
    if (((byte)(*(uint *)(pFVar24 + 0x28) >> 0x12) & 0x3f) < ((byte)uVar23 & 0x3f)) {
      uVar26 = uVar23;
    }
    uVar23 = (uint)this->_padding_;
    *(uint *)&this->_padding_ = (uVar26 << 0x12 ^ uVar23) & 0xfc0000 ^ uVar23;
    if (((this->_padding_ & 0x10000) == 0) || (((byte)pFVar24[0x2d] & 0x40) == 0)) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    FVar3 = pFVar24[0x2e];
    if ((((byte)FVar3 & 2) == 0) || ((((byte)FVar3 & 1) == 0 && (((byte)pFVar24[0x2c] & 8) == 0))))
    {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((((bVar14) || (bVar5)) || ((char)pFVar24[0x2d] < '\0')) ||
       (bVar13 = 0, (char)pFVar24[0x2f] < '\0')) {
      bVar13 = 1;
    }
    if ((((byte)FVar3 & 1) == 0) && (((byte)pFVar24[0x2c] & 8) == 0)) {
      cVar25 = '\0';
    }
    else {
      cVar25 = '\x01';
    }
    bVar21 = (bVar13 | this->bHasVertexProgrammableRaster) ^ this->field_0x2a1 & 0xfe;
    this->field_0x2a1 = (cVar25 * '\x02' | bVar21 & 2) ^ bVar21 & 0xfd;
    if (((byte)pFVar24[0x40] & 8) == 0) {
      if ((bVar13 == 0) && (cVar25 == '\0')) {
        pUVar19 = UMaterial::GetDefaultMaterial(MD_Surface);
        uVar18 = (**(code **)(pUVar19->_padding_ + 0x310))(pUVar19);
      }
      else {
        uVar18 = *(undefined8 *)(pFVar24 + 8);
      }
    }
    else {
      uVar18 = (**(code **)(((GEngine->NaniteHiddenSectionMaterial).field0_0x0.DebugPtr)->_padding_
                           + 0x310))();
    }
    *(undefined8 *)pFVar24 = uVar18;
    FVar3 = pFVar24[0x2d];
    if ((((byte)FVar3 & 0x40) == 0) ||
       (cVar12 = (**(code **)(this_00->_padding_ + 0x508))(this_00), cVar12 == '\0')) {
      bVar13 = 0;
    }
    else {
      bVar13 = 0x20;
    }
    FVar22 = (FScriptContainerElement)((byte)pFVar24[0x40] & 0xdf | bVar13);
    pFVar24[0x40] = FVar22;
    bVar13 = *(byte *)((longlong)&this->_padding_ + 2);
    *(byte *)((longlong)&this->_padding_ + 2) = ((byte)FVar22 >> 2 | bVar13) & 8 ^ bVar13 & 0xf7;
    cVar12 = (**(code **)(this_00->_padding_ + 0x520))(this_00);
    if ((cVar12 == '\0') || (!bVar11)) {
LAB_14841717b:
      bVar13 = 0;
    }
    else {
      EVar16 = (**(code **)(this_00->_padding_ + 0x460))(this_00);
      bVar14 = IsOpaqueOrMaskedBlendMode(EVar16);
      if (!bVar14) goto LAB_14841717b;
      bVar13 = 0x10;
    }
    bVar21 = *(byte *)((longlong)&this->_padding_ + 2);
    bVar21 = (bVar13 | bVar21 & 0x10) ^ bVar21 & 0xef;
    bVar13 = this->field_0x2a1;
    *(byte *)((longlong)&this->_padding_ + 2) = bVar21;
    this->field_0x2a1 = ((char)pFVar24[0x40] * '\x02' | bVar13) & 8 ^ bVar13 & 0xf7;
    if ((((byte)pFVar24[0x40] & 0x20) == 0) && (((bVar21 & 1) == 0 || (((byte)FVar3 & 0x40) == 0))))
    {
      *(undefined4 *)(pFVar24 + 0x14) = 0;
    }
    else {
      fVar28 = (float)(**(code **)(this_00->_padding_ + 0x500))(this_00);
      *(float *)(pFVar24 + 0x14) = fVar28;
      fVar29 = *(float *)((longlong)&this->_padding_ + 4);
      if (fVar28 <= fVar29) {
        fVar28 = fVar29;
      }
      *(float *)((longlong)&this->_padding_ + 4) = fVar28;
    }
    if ((bVar10) && ((char)pFVar24[0x2d] < '\0')) {
      puVar20 = (undefined8 *)(**(code **)(this_00->_padding_ + 0x4e8))(this_00,local_88);
      *(undefined8 *)(pFVar24 + 0x18) = *puVar20;
      cVar25 = (**(code **)(this_00->_padding_ + 0x4f0))(this_00);
      if (cVar25 == '\0') {
        *(undefined8 *)(pFVar24 + 0x20) = 0;
        fVar29 = 0.0;
      }
      else {
        puVar20 = (undefined8 *)(**(code **)(this_00->_padding_ + 0x4f8))(this_00,local_80);
        *(undefined8 *)(pFVar24 + 0x20) = *puVar20;
        fVar29 = *(float *)(pFVar24 + 0x20);
        if (((byte)pFVar24[0x2c] & 8) == 0) {
          if (this->MaterialDisplacementFadeOutSize <= fVar29) {
            fVar29 = this->MaterialDisplacementFadeOutSize;
          }
          if (*(float *)(pFVar24 + 0x24) <= fVar29) {
            fVar29 = *(float *)(pFVar24 + 0x24);
          }
        }
        else {
          if (0.0 <= fVar29) {
            fVar29 = 0.0;
          }
          if (*(float *)(pFVar24 + 0x24) <= fVar29) {
            fVar29 = *(float *)(pFVar24 + 0x24);
          }
        }
      }
      this->MaterialDisplacementFadeOutSize = fVar29;
      fVar29 = *(float *)(pFVar24 + 0x1c);
      fVar28 = *(float *)(pFVar24 + 0x18);
      this->bHasDynamicDisplacement = '\x01';
      pFVar24 = pFVar24 + 0x50;
      fVar30 = (fVar7 - fVar29) * fVar28;
      fVar29 = (float)((uint)(fVar29 * fVar28) ^ uVar8);
      if (*(float *)&this->_padding_ <= fVar29) {
        fVar29 = *(float *)&this->_padding_;
      }
      fVar28 = *(float *)((longlong)&this->_padding_ + 4);
      if (fVar30 <= fVar28) {
        fVar30 = fVar28;
      }
      *(float *)&this->_padding_ = fVar29;
      *(float *)((longlong)&this->_padding_ + 4) = fVar30;
    }
    else {
      *(undefined4 *)(pFVar24 + 0x18) = 0x40800000;
      *(undefined8 *)(pFVar24 + 0x1c) = 0x3f000000;
      *(undefined4 *)(pFVar24 + 0x24) = 0;
      if (cVar25 != '\0') {
        this->MaterialDisplacementFadeOutSize = 0.0;
      }
      pFVar24 = pFVar24 + 0x50;
    }
  } while( true );
}

// SetupRayTracingMaterials @ 1484272d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Nanite::FSceneProxyBase::SetupRayTracingMaterials
          (FSceneProxyBase *this,TArray<FMeshBatch,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  TArray<FMeshBatch,TSizedDefaultAllocator<32>_>::SetNum
            (param_1,(this->MaterialSections).ArrayNum,Default);
  uVar8 = 0;
  if (0 < param_1->ArrayNum) {
    lVar10 = 0;
    lVar9 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < (this->MaterialSections).ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->MaterialSections).AllocatorInstance.Data;
      uVar4 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar7 = (param_1->AllocatorInstance).Data + lVar10;
      if ((*(int *)(pFVar7 + 0xa0) < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar6 = pFVar7;
      if (*(FScriptContainerElement **)(pFVar7 + 0x98) != (FScriptContainerElement *)0x0) {
        pFVar6 = *(FScriptContainerElement **)(pFVar7 + 0x98);
      }
      *(undefined8 *)(pFVar7 + 0xa8) = GVertexFactoryResource._32_8_;
      *(undefined8 *)(pFVar7 + 0xb0) = *(undefined8 *)(pFVar1 + lVar9 + 8);
      uVar4 = *(uint *)(pFVar7 + 0xd4);
      *(uint *)(pFVar7 + 0xcc) = uVar8;
      *(uint *)(pFVar7 + 0xd4) = uVar4 & 0xffffffbf;
      pFVar7[0xd2] = (FScriptContainerElement)0x0;
      if ((((byte)pFVar1[lVar9 + 0x40] & 0x10) == 0) || ((this->_padding_ & 0x20000000000) == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0x800000;
      }
      uVar8 = uVar8 + 1;
      *(uint *)(pFVar7 + 0xd4) = uVar4 & 0xff7fffbf | uVar5;
      lVar9 = lVar9 + 0x50;
      lVar10 = lVar10 + 0xe0;
      *(TGlobalResource<FIdentityPrimitiveUniformBuffer,1> **)(pFVar6 + 8) =
           &GIdentityPrimitiveUniformBuffer;
    } while ((int)uVar8 < param_1->ArrayNum);
  }
  return;
}

// SupportsAlwaysVisible @ 148427f80

bool __thiscall Nanite::FSceneProxyBase::SupportsAlwaysVisible(FSceneProxyBase *this)

{
  ECustomDepthMode EVar1;
  
  if (((GNaniteCustomDepthEnabled != 0) && (EVar1 = GetCustomDepthMode(), EVar1 != Disabled)) &&
     ((this->_padding_ & 0x4000000000000) != 0)) {
    return false;
  }
  if (*(char *)((longlong)&this->_padding_ + 1) != '\x01') {
    return false;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    bAllowStaticLighting = FReadOnlyCVARCache::bAllowStaticLighting;
    _Init_thread_footer(&::_TSS0);
  }
  return bAllowStaticLighting == false;
}

