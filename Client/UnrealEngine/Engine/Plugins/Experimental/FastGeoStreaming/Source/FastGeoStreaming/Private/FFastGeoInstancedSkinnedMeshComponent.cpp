// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 12

// FFastGeoInstancedSkinnedMeshComponent @ 14da188c0

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

FFastGeoInstancedSkinnedMeshComponent * __thiscall
FFastGeoInstancedSkinnedMeshComponent::FFastGeoInstancedSkinnedMeshComponent
          (FFastGeoInstancedSkinnedMeshComponent *this,int param_1,FFastGeoElementType *param_2)

{
  byte *pbVar1;
  TSharedPtr<FInstanceDataManager,1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  FFastGeoInstancedSkinnedMeshComponent *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FInstanceDataManager *pFVar8;
  FInstanceDataManager *local_38;
  FSharedReferencer<1> FStack_30;
  FFastGeoElementType local_28;
  
  local_28.ID = param_2->ID;
  local_28._4_4_ = *(undefined4 *)&param_2->field_0x4;
  local_28.ParentType = param_2->ParentType;
  FFastGeoPrimitiveComponent::FFastGeoPrimitiveComponent
            ((FFastGeoPrimitiveComponent *)this,param_1,&local_28);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfe;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&___7FFastGeoInstancedSkinnedMeshComponent__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->InstanceData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceData).ArrayNum = 0;
  (this->InstanceData).ArrayMax = 0;
  this->NumCustomDataFloats = 0;
  (this->InstanceCustomData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceCustomData).ArrayNum = 0;
  (this->InstanceCustomData).ArrayMax = 0;
  FSkinnedMeshSceneProxyDesc::FSkinnedMeshSceneProxyDesc
            ((FSkinnedMeshSceneProxyDesc *)&this->SceneProxyDesc);
  (this->SceneProxyDesc).AnimationMinScreenSize = 0.0;
  (this->SceneProxyDesc).InstanceMinDrawDistance = 0;
  (this->SceneProxyDesc)._padding_ = (longlong)&___7FInstancedSkinnedMeshSceneProxyDesc__6B_;
  pTVar2 = &this->InstanceDataManager;
  (this->SceneProxyDesc).InstanceDataSceneProxy.Object = (FInstanceDataSceneProxy *)0x0;
  (this->SceneProxyDesc).InstanceDataSceneProxy.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SceneProxyDesc).TransformProvider.field0_0x0.DebugPtr = (UTransformProviderData *)0x0;
  (this->SceneProxyDesc).InstanceStartCullDistance = 0;
  (this->SceneProxyDesc).InstanceEndCullDistance = 0;
  pTVar2->Object = (FInstanceDataManager *)0x0;
  (this->InstanceDataManager).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar5 = ::operator_new(0x108);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    local_38 = ___xmm_00000000000000000000000000000010;
    pFVar8 = (FInstanceDataManager *)&DAT_00000010;
    FStack_30.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFInstanceDataManager___00_SharedPointerInternals__6B_
    ;
    FInstanceDataManager::FInstanceDataManager
              ((FInstanceDataManager *)(pTVar5 + 1),(UPrimitiveComponent *)0x0);
    pFVar8 = (FInstanceDataManager *)(pTVar5 + 1);
    if (pFVar8 == (FInstanceDataManager *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FFastGeoInstancedSkinnedMeshComponent *)(*pcVar3)();
        return pFVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    FStack_30.ReferenceController = pTVar5;
    pTVar7 = pTVar5;
    local_38 = pFVar8;
  }
  if (pTVar2 != (TSharedPtr<FInstanceDataManager,1> *)&local_38) {
    pTVar2->Object = pFVar8;
    local_38 = (FInstanceDataManager *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InstanceDataManager).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return this;
}

// ~FFastGeoInstancedSkinnedMeshComponent @ 14da1b500

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
FFastGeoInstancedSkinnedMeshComponent::~FFastGeoInstancedSkinnedMeshComponent
          (FFastGeoInstancedSkinnedMeshComponent *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InstanceDataManager).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SceneProxyDesc).InstanceDataSceneProxy.SharedReferenceCount.ReferenceController)
  ;
  pvVar1 = (void *)(this->SceneProxyDesc)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FPrimitiveSceneProxyDesc::~FPrimitiveSceneProxyDesc
            ((FPrimitiveSceneProxyDesc *)&this->SceneProxyDesc);
  pFVar2 = (this->InstanceCustomData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InstanceData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
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

// AllocateSceneProxy @ 14da205c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
FFastGeoInstancedSkinnedMeshComponent::AllocateSceneProxy
          (FFastGeoInstancedSkinnedMeshComponent *this)

{
  FPrimitiveSceneProxy *pFVar1;
  
  pFVar1 = FInstancedSkinnedMeshComponentHelper::
           CreateSceneProxy<FFastGeoInstancedSkinnedMeshComponent>(this,&this->SceneProxyDesc);
  return pFVar1;
}

// ApplyWorldTransform @ 14da206a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FFastGeoInstancedSkinnedMeshComponent::ApplyWorldTransform
          (FFastGeoInstancedSkinnedMeshComponent *this,TTransform<double> *param_1)

{
  double dVar1;
  TBoxSphereBounds<double,double> *pTVar2;
  TBoxSphereBounds<double,double> local_48;
  
  FFastGeoPrimitiveComponent::ApplyWorldTransform((FFastGeoPrimitiveComponent *)this,param_1);
  pTVar2 = FInstancedSkinnedMeshComponentHelper::CalcBounds<FFastGeoInstancedSkinnedMeshComponent>
                     (&local_48,this,param_1);
  dVar1 = (pTVar2->Origin).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(pTVar2->Origin).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (pTVar2->BoxExtent).field0_0x0._s_0.X;
  this->_padding_ = (longlong)(pTVar2->Origin).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (pTVar2->BoxExtent).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)(pTVar2->BoxExtent).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)dVar1;
  this->_padding_ = (longlong)pTVar2->SphereRadius;
  return;
}

// CreateMeshObject @ 14da25a40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkeletalMeshObject * __thiscall
FFastGeoInstancedSkinnedMeshComponent::CreateMeshObject(FFastGeoInstancedSkinnedMeshComponent *this)

{
  Type TVar1;
  UWorld *pUVar2;
  FSkeletalMeshRenderData *pFVar3;
  FSkeletalMeshObject *pFVar4;
  FSceneInterface *pFVar5;
  
  pUVar2 = FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
  if (pUVar2 == (UWorld *)0x0) {
    pFVar5 = (FSceneInterface *)0x0;
  }
  else {
    pFVar5 = pUVar2->Scene;
  }
  TVar1 = pFVar5->FeatureLevel;
  pFVar3 = FSkinnedMeshComponentHelper::
           GetSkeletalMeshRenderData<FFastGeoInstancedSkinnedMeshComponent>(this);
  pFVar4 = FInstancedSkinnedMeshSceneProxyDesc::CreateMeshObject(&this->SceneProxyDesc,pFVar3,TVar1)
  ;
  return pFVar4;
}

// GetSceneProxyDesc @ 14da2b760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPrimitiveSceneProxyDesc * __thiscall
FFastGeoInstancedSkinnedMeshComponent::GetSceneProxyDesc
          (FFastGeoInstancedSkinnedMeshComponent *this)

{
  return (FPrimitiveSceneProxyDesc *)&this->SceneProxyDesc;
}

// GetSceneProxyDesc @ 14da2b770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPrimitiveSceneProxyDesc * __thiscall
FFastGeoInstancedSkinnedMeshComponent::GetSceneProxyDesc
          (FFastGeoInstancedSkinnedMeshComponent *this)

{
  return (FPrimitiveSceneProxyDesc *)&this->SceneProxyDesc;
}

// GetSkinnedMeshSceneProxyDesc @ 14da2b800

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
FFastGeoInstancedSkinnedMeshComponent::GetSkinnedMeshSceneProxyDesc
          (FFastGeoInstancedSkinnedMeshComponent *this)

{
  return (FSkinnedMeshSceneProxyDesc *)&this->SceneProxyDesc;
}

// GetSkinnedMeshSceneProxyDesc @ 14da2b810

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
FFastGeoInstancedSkinnedMeshComponent::GetSkinnedMeshSceneProxyDesc
          (FFastGeoInstancedSkinnedMeshComponent *this)

{
  return (FSkinnedMeshSceneProxyDesc *)&this->SceneProxyDesc;
}

// InitializeSceneProxyDescDynamicProperties @ 14da2cd20

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FFastGeoInstancedSkinnedMeshComponent::InitializeSceneProxyDescDynamicProperties
          (FFastGeoInstancedSkinnedMeshComponent *this)

{
  TSharedPtr<FInstanceDataSceneProxy,1> *pTVar1;
  int iVar2;
  FInstanceDataManager *this_00;
  code *pcVar3;
  bool bVar4;
  EShaderPlatform EVar5;
  longlong lVar6;
  UWorld *pUVar7;
  TSharedPtr<FInstanceDataSceneProxy,1> *pTVar8;
  FInstanceDataManagerSourceDataDesc *pFVar9;
  FSceneInterface *this_01;
  longlong *plVar10;
  FSceneInterface *this_02;
  undefined1 auStack_158 [32];
  longlong local_138;
  int iStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [16];
  TReferenceControllerBase<1> *local_118;
  undefined1 local_108 [240];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  FFastGeoPrimitiveComponent::InitializeSceneProxyDescDynamicProperties
            ((FFastGeoPrimitiveComponent *)this);
  this_02 = (FSceneInterface *)0x0;
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)this->_padding_ + 0x10))();
    BeginCleanup((FDeferredCleanupInterface *)this->_padding_);
    this->_padding_ = 0;
  }
  lVar6 = (**(code **)(this->_padding_ + 0x110))(this);
  this->_padding_ = lVar6;
  lVar6 = (**(code **)(this->_padding_ + 0x120))(this);
  local_138 = this->_padding_;
  iStack_130 = (int)this->_padding_;
  if ((iStack_130 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(longlong *)(lVar6 + 0x130) = local_138;
  *(ulonglong *)(lVar6 + 0x138) = CONCAT44(uStack_12c,iStack_130);
  local_138 = this->_padding_;
  iVar2 = (int)this->_padding_;
  if ((iVar2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(longlong *)(lVar6 + 0x140) = local_138;
  *(ulonglong *)(lVar6 + 0x148) = CONCAT44(uStack_12c,iVar2);
  iStack_130 = iVar2;
  pUVar7 = FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
  this_01 = this_02;
  if (pUVar7 != (UWorld *)0x0) {
    this_01 = pUVar7->Scene;
  }
  FSceneInterface::GetShaderPlatform(this_01);
  FMeshComponentHelper::GetMaterialRelevance<FFastGeoMeshComponent>
            ((FFastGeoMeshComponent *)local_128,(EShaderPlatform)this);
  *(undefined8 *)(lVar6 + 0xd8) = local_128._0_8_;
  *(longlong *)(lVar6 + 0xf0) = this->_padding_;
  if (((this->InstanceDataManager).Object == (FInstanceDataManager *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar8 = FInstanceDataManager::GetOrCreateProxy
                     ((this->InstanceDataManager).Object,
                      (TSharedPtr<FInstanceDataSceneProxy,1> *)(local_128 + 8));
  pTVar1 = &(this->SceneProxyDesc).InstanceDataSceneProxy;
  if (pTVar1 != pTVar8) {
    pTVar1->Object = pTVar8->Object;
    pTVar8->Object = (FInstanceDataSceneProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SceneProxyDesc).InstanceDataSceneProxy.SharedReferenceCount,
               &pTVar8->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_118);
  if (((this->InstanceDataManager).Object == (FInstanceDataManager *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (this->InstanceDataManager).Object;
  pUVar7 = FFastGeoComponent::GetWorld((FFastGeoComponent *)this);
  if (pUVar7 != (UWorld *)0x0) {
    this_02 = pUVar7->Scene;
  }
  EVar5 = FSceneInterface::GetShaderPlatform(this_02);
  pFVar9 = FInstancedSkinnedMeshComponentHelper::
           GetComponentDesc<FFastGeoInstancedSkinnedMeshComponent,0>
                     ((FInstanceDataManagerSourceDataDesc *)local_108,this,EVar5);
  FInstanceDataManager::FlushChanges(this_00,pFVar9);
  if (local_108._192_8_ != 0) {
    plVar10 = (longlong *)(local_108 + 0xd0);
    if ((longlong *)local_108._232_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_108._232_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

// Serialize @ 14da33e40

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
FFastGeoInstancedSkinnedMeshComponent::Serialize
          (FFastGeoInstancedSkinnedMeshComponent *this,FArchive *param_1)

{
  int *piVar1;
  float *pfVar2;
  undefined1 *puVar3;
  int *piVar4;
  float *pfVar5;
  
  FFastGeoSkinnedMeshComponentBase::Serialize((FFastGeoSkinnedMeshComponentBase *)this,param_1);
  TArrayPrivateFriend::Serialize<FSkinnedMeshInstanceData,TSizedDefaultAllocator<32>_>
            (param_1,&this->InstanceData);
  piVar1 = &this->NumCustomDataFloats;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar3 = &param_1->field_0x2a;
  TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>
            (param_1,&this->InstanceCustomData);
  pfVar2 = &(this->SceneProxyDesc).AnimationMinScreenSize;
  pfVar5 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar5 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &(this->SceneProxyDesc).InstanceMinDrawDistance;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &(this->SceneProxyDesc).InstanceStartCullDistance;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &(this->SceneProxyDesc).InstanceEndCullDistance;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar4 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((*puVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014da33fea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return;
}

// UpdateSkinning @ 14da39070

void __thiscall
FFastGeoInstancedSkinnedMeshComponent::UpdateSkinning(FFastGeoInstancedSkinnedMeshComponent *this)

{
  return;
}

