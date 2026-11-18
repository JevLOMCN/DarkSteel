// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 9

// FFastGeoSkinnedMeshComponent @ 14da19460

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FFastGeoSkinnedMeshComponent * __thiscall
FFastGeoSkinnedMeshComponent::FFastGeoSkinnedMeshComponent
          (FFastGeoSkinnedMeshComponent *this,int param_1,FFastGeoElementType *param_2)

{
  byte *pbVar1;
  FFastGeoElementType local_18;
  
  local_18.ID = param_2->ID;
  local_18._4_4_ = *(undefined4 *)&param_2->field_0x4;
  local_18.ParentType = param_2->ParentType;
  FFastGeoPrimitiveComponent::FFastGeoPrimitiveComponent
            ((FFastGeoPrimitiveComponent *)this,param_1,&local_18);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfe;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FFastGeoSkinnedMeshComponent__6B_;
  memset(&this->SceneProxyDesc,0,400);
  FSkinnedMeshSceneProxyDesc::FSkinnedMeshSceneProxyDesc(&this->SceneProxyDesc);
  return this;
}

// ~FFastGeoSkinnedMeshComponent @ 14da1b840

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FFastGeoSkinnedMeshComponent::~FFastGeoSkinnedMeshComponent(FFastGeoSkinnedMeshComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->SceneProxyDesc).MaterialSlotsOverlayMaterial.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPrimitiveSceneProxyDesc::~FPrimitiveSceneProxyDesc
            ((FPrimitiveSceneProxyDesc *)&this->SceneProxyDesc);
  DestructItems<FSkelMeshComponentLODInfo,int>
            ((FSkelMeshComponentLODInfo *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FFastGeoPrimitiveComponent::~FFastGeoPrimitiveComponent((FFastGeoPrimitiveComponent *)this);
  return;
}

// AllocateSceneProxy @ 14da205e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
FFastGeoSkinnedMeshComponent::AllocateSceneProxy(FFastGeoSkinnedMeshComponent *this)

{
  int iVar1;
  FPrimitiveSceneProxy *pFVar2;
  
  iVar1 = FSkinnedMeshComponentHelper::ComputeMinLOD<FFastGeoSkinnedMeshComponent>(this);
  pFVar2 = FSkinnedMeshSceneProxyDesc::CreateSceneProxy
                     (&this->SceneProxyDesc,(bool)(*(byte *)((longlong)&this->_padding_ + 2) & 1),
                      iVar1);
  return pFVar2;
}

// ApplyWorldTransform @ 14da20aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FFastGeoSkinnedMeshComponent::ApplyWorldTransform
          (FFastGeoSkinnedMeshComponent *this,TTransform<double> *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 local_150;
  undefined4 uStack_14c;
  TMatrix<double> local_128 [2];
  
  FFastGeoPrimitiveComponent::ApplyWorldTransform((FFastGeoPrimitiveComponent *)this,param_1);
  UE::Math::TTransform<double>::ToMatrixWithScale((TTransform<double> *)&this->_padding_,local_128);
  dVar5 = (double)this->_padding_;
  dVar8 = (double)this->_padding_;
  dVar9 = (double)this->_padding_;
  dVar10 = (double)this->_padding_;
  dVar1 = (double)this->_padding_;
  dVar11 = (double)this->_padding_;
  dVar6 = (double)CONCAT44((uint)((ulonglong)(local_128[0].M[1][0] * dVar8) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_128[0].M[1][0] * dVar8,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)(local_128[0].M[0][0] * dVar5) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_128[0].M[0][0] * dVar5,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)(local_128[0].M[2][0] * dVar1) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_128[0].M[2][0] * dVar1,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar7 = (double)CONCAT44((uint)((ulonglong)(local_128[0].M[1][1] * dVar8) >> 0x20) &
                           _UNK_15061cc8c,SUB84(local_128[0].M[1][1] * dVar8,0) & _UNK_15061cc88) +
          (double)CONCAT44((uint)((ulonglong)(local_128[0].M[0][1] * dVar5) >> 0x20) &
                           _UNK_15061cc8c,SUB84(local_128[0].M[0][1] * dVar5,0) & _UNK_15061cc88) +
          (double)CONCAT44((uint)((ulonglong)(local_128[0].M[2][1] * dVar1) >> 0x20) &
                           _UNK_15061cc8c,SUB84(local_128[0].M[2][1] * dVar1,0) & _UNK_15061cc88);
  dVar5 = (double)CONCAT44((uint)((ulonglong)(local_128[0].M[1][2] * dVar8) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_128[0].M[1][2] * dVar8,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)(local_128[0].M[0][2] * dVar5) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_128[0].M[0][2] * dVar5,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)(local_128[0].M[2][2] * dVar1) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_128[0].M[2][2] * dVar1,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  local_128[0].M[3][0] =
       local_128[0].M[1][0] * dVar10 + local_128[0].M[0][0] * dVar9 + local_128[0].M[2][0] * dVar11
       + local_128[0].M[3][0];
  local_128[0].M[3][1] =
       local_128[0].M[1][1] * dVar10 + local_128[0].M[0][1] * dVar9 + local_128[0].M[2][1] * dVar11
       + local_128[0].M[3][1];
  local_128[0].M[3][2] =
       local_128[0].M[1][2] * dVar10 + local_128[0].M[0][2] * dVar9 + local_128[0].M[2][2] * dVar11
       + local_128[0].M[3][2];
  auVar12._0_8_ =
       local_128[0].M[1][0] * local_128[0].M[1][0] + local_128[0].M[0][0] * local_128[0].M[0][0] +
       local_128[0].M[2][0] * local_128[0].M[2][0];
  auVar12._8_8_ =
       local_128[0].M[1][1] * local_128[0].M[1][1] + local_128[0].M[0][1] * local_128[0].M[0][1] +
       local_128[0].M[2][1] * local_128[0].M[2][1];
  auVar13._8_4_ = SUB84(auVar12._8_8_,0);
  auVar13._0_8_ = auVar12._8_8_;
  auVar13._12_4_ = (int)((ulonglong)auVar12._8_8_ >> 0x20);
  auVar13 = maxpd(auVar12,auVar13);
  dVar11 = SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7);
  dVar1 = local_128[0].M[1][2] * local_128[0].M[1][2] + local_128[0].M[0][2] * local_128[0].M[0][2]
          + local_128[0].M[2][2] * local_128[0].M[2][2];
  auVar4._8_4_ = SUB84(dVar1,0);
  auVar4._0_8_ = dVar1;
  auVar4._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  auVar13 = maxpd(auVar13,auVar4);
  dVar1 = SQRT(auVar13._0_8_) * (double)this->_padding_;
  auVar3._8_4_ = SUB84(local_128[0].M[3][1],0);
  auVar3._0_8_ = local_128[0].M[3][0];
  auVar3._12_4_ = (int)((ulonglong)local_128[0].M[3][1] >> 0x20);
  this->_padding_ = (longlong)local_128[0].M[3][0];
  this->_padding_ = auVar3._8_8_;
  if (dVar1 <= dVar11) {
    dVar11 = dVar1;
  }
  local_150 = SUB84(dVar6,0);
  uStack_14c = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar2._8_4_ = local_150;
  auVar2._0_8_ = local_128[0].M[3][2];
  auVar2._12_4_ = uStack_14c;
  this->_padding_ = (longlong)local_128[0].M[3][2];
  this->_padding_ = auVar2._8_8_;
  this->_padding_ = (longlong)dVar7;
  this->_padding_ = (longlong)dVar5;
  this->_padding_ = (longlong)dVar11;
  return;
}

// GetSceneProxyDesc @ 14da2b7c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPrimitiveSceneProxyDesc * __thiscall
FFastGeoSkinnedMeshComponent::GetSceneProxyDesc(FFastGeoSkinnedMeshComponent *this)

{
  return (FPrimitiveSceneProxyDesc *)&this->SceneProxyDesc;
}

// GetSceneProxyDesc @ 14da2b7d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPrimitiveSceneProxyDesc * __thiscall
FFastGeoSkinnedMeshComponent::GetSceneProxyDesc(FFastGeoSkinnedMeshComponent *this)

{
  return (FPrimitiveSceneProxyDesc *)&this->SceneProxyDesc;
}

// GetSkinnedMeshSceneProxyDesc @ 14da2b820

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkinnedMeshSceneProxyDesc * __thiscall
FFastGeoSkinnedMeshComponent::GetSkinnedMeshSceneProxyDesc(FFastGeoSkinnedMeshComponent *this)

{
  return &this->SceneProxyDesc;
}

// GetSkinnedMeshSceneProxyDesc @ 14da2b830

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkinnedMeshSceneProxyDesc * __thiscall
FFastGeoSkinnedMeshComponent::GetSkinnedMeshSceneProxyDesc(FFastGeoSkinnedMeshComponent *this)

{
  return &this->SceneProxyDesc;
}

// UpdateSkinning @ 14da39080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FFastGeoSkinnedMeshComponent::UpdateSkinning(FFastGeoSkinnedMeshComponent *this)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  ulonglong uVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FSkinnedMeshSceneProxyDesc *pFVar10;
  USkinnedAsset *pUVar11;
  longlong lVar12;
  FReferenceSkeleton *pFVar13;
  FStreamingManagerCollection *this_00;
  undefined1 auStackY_268 [32];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_218;
  void *local_208;
  undefined8 local_200;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_1f8;
  ForAnyElementType local_1e8;
  undefined8 local_1e0;
  TBitArray<FDefaultBitArrayAllocator> local_1d8;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  void *local_1a8;
  ulonglong local_1a0;
  undefined1 local_198 [24];
  undefined8 uStack_180;
  void *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  void *local_158;
  ulonglong uStack_150;
  undefined8 local_148;
  FSkinnedMeshSceneProxyDynamicData local_138;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.ArrayNum = 0;
  local_218.ArrayMax = 0;
  pFVar10 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(this->_padding_ + 0x118))();
  pUVar11 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar10);
  lVar12 = (**(code **)(*(longlong *)pUVar11 + 800))(pUVar11);
  local_1f8.DataPtr = *(TTransform<double> **)(lVar12 + 0x30);
  local_1f8.ArrayNum = *(int *)(lVar12 + 0x38);
  if ((local_1f8.ArrayNum < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar10 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(this->_padding_ + 0x118))(this);
  pUVar11 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar10);
  pFVar13 = (FReferenceSkeleton *)(**(code **)(*(longlong *)pUVar11 + 800))(pUVar11);
  FAnimationRuntime::FillUpComponentSpaceTransforms(pFVar13,&local_1f8,&local_218);
  FSkinnedMeshSceneProxyDynamicData::FSkinnedMeshSceneProxyDynamicData(&local_138);
  local_138.ComponentSpaceTransforms.DataPtr =
       (TTransform<double> *)local_218.AllocatorInstance.Data;
  local_138.ComponentSpaceTransforms.ArrayNum = local_218.ArrayNum;
  if ((local_218.ArrayNum < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar6.Data = local_218.AllocatorInstance.Data;
  iVar4 = local_218.ArrayNum;
  local_138.ComponentSpaceTransforms._12_4_ = local_1f8._12_4_;
  if ((local_218.ArrayNum < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_138.bRenderStateRecreating = '\x01';
  local_138.PreviousComponentSpaceTransforms._12_4_ = local_1f8._12_4_;
  local_138.PreviousComponentSpaceTransforms.DataPtr = (TTransform<double> *)FVar6.Data;
  local_138.PreviousComponentSpaceTransforms.ArrayNum = iVar4;
  uVar8 = FSkinnedMeshComponentHelper::ComputeMinLOD<FFastGeoSkinnedMeshComponent>(this);
  uVar9 = *(int *)(*(longlong *)(this->_padding_ + 0x48) + 8) - 1;
  if (0 < (int)uVar9) {
    uVar9 = 0;
  }
  if ((int)uVar8 < (int)uVar9) {
    uVar8 = uVar9;
  }
  pFVar10 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(this->_padding_ + 0x118))(this);
  pUVar11 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar10);
  if (*(int *)&pUVar11->field_0xb8 == -1) {
    this_00 = IStreamingManager::Get();
    bVar7 = FStreamingManagerCollection::IsRenderAssetStreamingEnabled(this_00,SkeletalMesh);
    uVar9 = uVar8;
    if (bVar7) goto LAB_14da39256;
  }
  bVar1 = *(byte *)(*(longlong *)(this->_padding_ + 0x48) + 0x1c);
  uVar9 = (uint)bVar1;
  if ((int)(uint)bVar1 < (int)uVar8) {
    uVar9 = uVar8;
  }
LAB_14da39256:
  plVar2 = (longlong *)this->_padding_;
  uStack_160 = 0;
  pcVar3 = *(code **)(*plVar2 + 0x18);
  local_178 = (void *)0x0;
  uStack_170 = 0x8000000000;
  local_198._0_8_ = (FScriptContainerElement *)0x0;
  local_198._8_8_ = 0;
  local_168 = 0xffffffff;
  local_198._16_8_ = 0;
  uStack_180 = 0;
  local_158 = (void *)0x0;
  uStack_150 = 0;
  local_148 = 0;
  local_208 = (void *)0x0;
  local_200 = 0;
  local_1d8.AllocatorInstance.InlineData[0] = '\0';
  local_1d8.AllocatorInstance.InlineData[1] = '\0';
  local_1d8.AllocatorInstance.InlineData[2] = '\0';
  local_1d8.AllocatorInstance.InlineData[3] = '\0';
  local_1d8.AllocatorInstance.InlineData[4] = '\0';
  local_1d8.AllocatorInstance.InlineData[5] = '\0';
  local_1d8.AllocatorInstance.InlineData[6] = '\0';
  local_1d8.AllocatorInstance.InlineData[7] = '\0';
  local_1d8.AllocatorInstance.InlineData[8] = '\0';
  local_1d8.AllocatorInstance.InlineData[9] = '\0';
  local_1d8.AllocatorInstance.InlineData[10] = '\0';
  local_1d8.AllocatorInstance.InlineData[0xb] = '\0';
  local_1d8.AllocatorInstance.InlineData[0xc] = '\0';
  local_1d8.AllocatorInstance.InlineData[0xd] = '\0';
  local_1d8.AllocatorInstance.InlineData[0xe] = '\0';
  local_1d8.AllocatorInstance.InlineData[0xf] = '\0';
  local_1b0 = 0;
  local_1a0 = 0;
  local_1e8.Data = (FScriptContainerElement *)0x0;
  local_1e0 = 0;
  local_1d8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_1d8.NumBits = 0;
  local_1d8.MaxBits = 0x80;
  local_1b8 = 0xffffffff;
  local_1b4 = 0;
  local_1a8 = (void *)0x0;
  pFVar10 = (FSkinnedMeshSceneProxyDesc *)(**(code **)(this->_padding_ + 0x118))(this);
  FSkinnedMeshSceneProxyDesc::GetSkinnedAsset(pFVar10);
  (*pcVar3)(plVar2,uVar9,&local_138,this->_padding_);
  local_1a0 = local_1a0 & 0xffffffff00000000;
  if (local_1a8 != (void *)0x0) {
    FMemory::Free(local_1a8);
  }
  uVar5 = local_1e0 >> 0x20;
  local_1e0 = local_1e0 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&local_1e8,0,(int *)((longlong)&local_1e0 + 4));
  }
  local_1b8 = 0xffffffff;
  local_1b4 = 0;
  local_1d8.NumBits = 0;
  if (0x80 < (uint)local_1d8.MaxBits) {
    local_1d8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_1d8,0);
  }
  if (local_1d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1d8.AllocatorInstance.SecondaryData);
  }
  if (local_1e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data);
  }
  if (local_208 != (void *)0x0) {
    FMemory::Free(local_208);
  }
  uStack_150 = uStack_150 & 0xffffffff00000000;
  if (local_158 != (void *)0x0) {
    FMemory::Free(local_158);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FExternalMorphSetWeights>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FExternalMorphSetWeights>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_198,0,local_198._8_4_);
  iVar4 = SUB84(local_198._8_8_,4);
  local_198._8_8_ = local_198._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)local_198,0,(int *)(local_198 + 0xc));
  }
  uVar8 = uStack_170._4_4_;
  local_168 = 0xffffffff;
  uStack_170 = (ulonglong)uStack_170._4_4_ << 0x20;
  if (0x80 < uVar8) {
    uStack_170 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10),0);
  }
  if (local_178 != (void *)0x0) {
    FMemory::Free(local_178);
  }
  if ((FScriptContainerElement *)local_198._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_198._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.RefPoseOverride.SharedReferenceCount.ReferenceController);
  if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.AllocatorInstance.Data);
  }
  return;
}

