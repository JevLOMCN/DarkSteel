// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FInstancedSkinnedMeshSceneProxyDesc @ 147cc5040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInstancedSkinnedMeshSceneProxyDesc * __thiscall
FInstancedSkinnedMeshSceneProxyDesc::FInstancedSkinnedMeshSceneProxyDesc
          (FInstancedSkinnedMeshSceneProxyDesc *this,UInstancedSkinnedMeshComponent *param_1)

{
  TSharedPtr<FInstanceDataSceneProxy,1> *pTVar1;
  uint *puVar2;
  int iVar3;
  UTransformProviderData *pUVar4;
  undefined8 uVar5;
  TSharedPtr<FInstanceDataSceneProxy,1> *pTVar6;
  TSharedPtr<FInstanceDataSceneProxy,1> local_18;
  
  FPrimitiveSceneProxyDesc::FPrimitiveSceneProxyDesc((FPrimitiveSceneProxyDesc *)this);
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSkinnedMeshSceneProxyDesc__6B_;
  pTVar1 = &this->InstanceDataSceneProxy;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  uVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  this->_padding_ = uVar5;
  uVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  puVar2 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar2 = *puVar2 & 0xfffffffe;
  this->_padding_ = uVar5;
  pTVar1->Object = (FInstanceDataSceneProxy *)0x0;
  (this->InstanceDataSceneProxy).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TransformProvider).field0_0x0.DebugPtr = (UTransformProviderData *)0x0;
  this->AnimationMinScreenSize = 0.0;
  this->InstanceMinDrawDistance = 0;
  this->InstanceStartCullDistance = 0;
  this->InstanceEndCullDistance = 0;
  this->_padding_ = 0x3f800000;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FInstancedSkinnedMeshSceneProxyDesc__6B_;
  FSkinnedMeshSceneProxyDesc::InitializeFromSkinnedMeshComponent
            ((FSkinnedMeshSceneProxyDesc *)this,(USkinnedMeshComponent *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (param_1->TransformProvider).field0_0x0.DebugPtr,
     pUVar4 != (UTransformProviderData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->TransformProvider).field0_0x0 = (param_1->TransformProvider).field0_0x0;
  this->AnimationMinScreenSize = param_1->AnimationMinScreenSize;
  this->InstanceMinDrawDistance = param_1->InstanceMinDrawDistance;
  this->InstanceStartCullDistance = param_1->InstanceStartCullDistance;
  iVar3 = param_1->InstanceEndCullDistance;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  this->InstanceEndCullDistance = iVar3;
  pTVar6 = UInstancedSkinnedMeshComponent::GetInstanceDataSceneProxy(param_1,&local_18);
  if (pTVar1 != pTVar6) {
    pTVar1->Object = pTVar6->Object;
    pTVar6->Object = (FInstanceDataSceneProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InstanceDataSceneProxy).SharedReferenceCount,&pTVar6->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// CreateMeshObject @ 147ce95b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkeletalMeshObject * __cdecl
FInstancedSkinnedMeshSceneProxyDesc::CreateMeshObject
          (FInstancedSkinnedMeshSceneProxyDesc *param_1,FSkeletalMeshRenderData *param_2,
          Type param_3)

{
  bool bVar1;
  FInstancedSkeletalMeshObjectNanite *pFVar2;
  
  bVar1 = FSkinnedMeshSceneProxyDesc::ShouldNaniteSkin((FSkinnedMeshSceneProxyDesc *)param_1);
  if (bVar1) {
    pFVar2 = ::operator_new(0x1b0);
    if (pFVar2 != (FInstancedSkeletalMeshObjectNanite *)0x0) {
      pFVar2 = FInstancedSkeletalMeshObjectNanite::FInstancedSkeletalMeshObjectNanite
                         (pFVar2,param_1,param_2,param_3);
      return (FSkeletalMeshObject *)pFVar2;
    }
  }
  return (FSkeletalMeshObject *)0x0;
}

// CreateSceneProxy @ 147cea380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __cdecl
FInstancedSkinnedMeshSceneProxyDesc::CreateSceneProxy
          (FInstancedSkinnedMeshSceneProxyDesc *param_1,bool param_2,bool param_3,bool param_4,
          int param_5)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  USkinnedAsset *pUVar7;
  FSkeletalMeshRenderData *this;
  FPrimitiveSceneProxy *pFVar8;
  FSkinnedSceneProxy *pFVar9;
  FInstanceSceneDataBuffers *pFVar10;
  FSkinnedSceneProxy *pFVar11;
  FSkinnedSceneProxy *pFVar12;
  undefined1 auStackY_188 [32];
  FLLMScope local_158 [2];
  FMemScope local_150;
  FMaterialAudit local_148;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  FLLMScope::FLLMScope(local_158,SkeletalMesh,false,None,Default,true);
  FMemScope::FMemScope(&local_150,SkeletalMesh,true);
  pFVar9 = (FSkinnedSceneProxy *)0x0;
  pFVar12 = (FSkinnedSceneProxy *)0x0;
  pUVar7 = FSkinnedMeshSceneProxyDesc::GetSkinnedAsset((FSkinnedMeshSceneProxyDesc *)param_1);
  this = (FSkeletalMeshRenderData *)(**(code **)(*(longlong *)pUVar7 + 0x398))(pUVar7);
  plVar1 = (longlong *)param_1->_padding_;
  pFVar11 = pFVar9;
  if ((((this != (FSkeletalMeshRenderData *)0x0) && (iVar5 = (int)param_1->_padding_, -1 < iVar5))
      && (iVar5 < (this->LODRenderData).Array.ArrayNum)) &&
     ((pFVar11 = pFVar12, !param_2 && (plVar1 != (longlong *)0x0)))) {
    iVar5 = FSkeletalMeshRenderData::GetMaxBonesPerSection(this,param_5);
    cVar3 = (**(code **)(*plVar1 + 0x40))();
    if (cVar3 == '\0') {
      iVar6 = FGPUBaseSkinVertexFactory::GetMaxGPUSkinBones((ITargetPlatform *)0x0);
    }
    else {
      iVar6 = 0x7fffffff;
    }
    if (iVar5 <= iVar6) {
      if ((param_4) && (param_3)) {
        local_148.bCompatibleWithLumenCardSharing = '\0';
        local_148.bHasSky = '\0';
        local_148.bHasMasked = '\0';
        local_148.bHasAnyError = '\0';
        local_148.AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_148.AssetName.Data.ArrayNum = 0;
        local_148.AssetName.Data.ArrayMax = 0;
        local_148.Entries.AllocatorInstance.SecondaryData =
             (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
        local_148.Entries.ArrayNum = 0;
        local_148.Entries.ArrayMax = 4;
        local_148.FallbackMaterial = (UMaterialInterface *)0x0;
        Nanite::FNaniteResourcesHelper::AuditMaterials<FInstancedSkinnedMeshSceneProxyDesc>
                  (param_1,&local_148,true);
        if (param_1->_padding_ == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("World",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\PrimitiveSceneProxyDesc.h"
                             ,0x10e,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pFVar8 = (FPrimitiveSceneProxy *)(*pcVar2)();
            return pFVar8;
          }
        }
        bVar4 = Nanite::IsMaskingAllowed((UWorld *)param_1->_padding_,false);
        pFVar11 = pFVar9;
        if (((local_148.bHasAnyError == 0) && (local_148.bHasSky == '\0')) &&
           ((bVar4 || (local_148.bHasMasked == '\0')))) {
          pFVar9 = ::operator_new(0x380);
          pFVar11 = pFVar12;
          if (pFVar9 != (FSkinnedSceneProxy *)0x0) {
            Nanite::FSkinnedSceneProxy::FSkinnedSceneProxy
                      (pFVar9,&local_148,(FSkinnedMeshSceneProxyDesc *)param_1,this,false);
            *(undefined ***)pFVar9 = &___7FNaniteInstancedSkinnedMeshSceneProxy__6B_;
            FInstancedSkinnedMeshData::FInstancedSkinnedMeshData
                      ((FInstancedSkinnedMeshData *)&pFVar9->field_0x358,param_1);
            pFVar9->field_0x82 = pFVar9->field_0x82 | 0x80;
            pFVar9->field_0x84 = pFVar9->field_0x84 | 0x80;
            pFVar9->bDynamicRayTracingGeometry = '\0';
            if (*(longlong *)&pFVar9->field_0x358 == 0) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L"");
              if (bVar4) {
                pcVar2 = (code *)swi(3);
                pFVar8 = (FPrimitiveSceneProxy *)(*pcVar2)();
                return pFVar8;
              }
            }
            pFVar10 = (FInstanceSceneDataBuffers *)
                      (**(code **)(**(longlong **)&pFVar9->field_0x358 + 8))();
            FPrimitiveSceneProxy::SetupInstanceSceneDataBuffers
                      ((FPrimitiveSceneProxy *)pFVar9,pFVar10);
            pFVar11 = pFVar9;
          }
        }
        if (local_148.Entries.AllocatorInstance.SecondaryData !=
            (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
          FMemory::Free((void *)local_148.Entries.AllocatorInstance.SecondaryData);
        }
        if (local_148.AssetName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.AssetName.Data.AllocatorInstance.Data);
        }
        if (pFVar11 != (FSkinnedSceneProxy *)0x0) goto LAB_147cea5fe;
      }
      pFVar11 = (FSkinnedSceneProxy *)
                FSkinnedMeshSceneProxyDesc::CreateSceneProxy
                          ((FSkinnedMeshSceneProxyDesc *)param_1,false,param_5);
    }
  }
LAB_147cea5fe:
  FMemScope::~FMemScope(&local_150);
  FLLMScope::~FLLMScope(local_158);
  return (FPrimitiveSceneProxy *)pFVar11;
}

// InitializeFromInstancedSkinnedMeshComponent @ 147d19a60

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
FInstancedSkinnedMeshSceneProxyDesc::InitializeFromInstancedSkinnedMeshComponent
          (FInstancedSkinnedMeshSceneProxyDesc *this,UInstancedSkinnedMeshComponent *param_1)

{
  int iVar1;
  UTransformProviderData *pUVar2;
  TSharedPtr<FInstanceDataSceneProxy,1> *pTVar3;
  TSharedPtr<FInstanceDataSceneProxy,1> local_18;
  
  FSkinnedMeshSceneProxyDesc::InitializeFromSkinnedMeshComponent
            ((FSkinnedMeshSceneProxyDesc *)this,(USkinnedMeshComponent *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->TransformProvider).field0_0x0.DebugPtr,
     pUVar2 != (UTransformProviderData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->TransformProvider).field0_0x0 = (param_1->TransformProvider).field0_0x0;
  this->AnimationMinScreenSize = param_1->AnimationMinScreenSize;
  this->InstanceMinDrawDistance = param_1->InstanceMinDrawDistance;
  this->InstanceStartCullDistance = param_1->InstanceStartCullDistance;
  iVar1 = param_1->InstanceEndCullDistance;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  this->InstanceEndCullDistance = iVar1;
  pTVar3 = UInstancedSkinnedMeshComponent::GetInstanceDataSceneProxy(param_1,&local_18);
  if (&this->InstanceDataSceneProxy != pTVar3) {
    (this->InstanceDataSceneProxy).Object = pTVar3->Object;
    pTVar3->Object = (FInstanceDataSceneProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InstanceDataSceneProxy).SharedReferenceCount,&pTVar3->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

