// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FInstancedSkinningSceneExtensionProxy @ 148691bd0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInstancedSkinningSceneExtensionProxy * __thiscall
FInstancedSkinningSceneExtensionProxy::FInstancedSkinningSceneExtensionProxy
          (FInstancedSkinningSceneExtensionProxy *this,TObjectPtr<UTransformProviderData> param_1,
          FSkeletalMeshObject *param_2,USkinnedAsset *param_3,bool param_4)

{
  byte *pbVar1;
  UTransformProviderData *pUVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  FGuid FVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  char cVar9;
  undefined2 uVar10;
  uint *puVar11;
  longlong lVar12;
  
  FSkinningSceneExtensionProxy::FSkinningSceneExtensionProxy
            ((FSkinningSceneExtensionProxy *)this,param_2,param_3,param_4);
  this->_padding_ = (longlong)&___7FInstancedSkinningSceneExtensionProxy__6B_;
  pUVar2 = *(UTransformProviderData **)param_1.field0_0x0;
  (this->TransformProvider).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UTransformProviderData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  lVar12 = 0;
  (this->TransformProviderId).A = 0;
  (this->TransformProviderId).B = 0;
  (this->TransformProviderId).C = 0;
  (this->TransformProviderId).D = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
  *pbVar1 = *pbVar1 | 8;
  this->TransformProviderProxy = (FTransformProviderRenderProxy *)0x0;
  pTVar7 = CVarInstancedSkinnedMeshesForceRefPose.Ref;
  bVar8 = IsInParallelGameThread();
  if (!bVar8) {
    bVar8 = IsInGameThread();
    if (!bVar8) {
      lVar12 = 4;
    }
  }
  if (((*(int *)((longlong)pTVar7->ShadowedValue + lVar12) == 0) && (this->_padding_ != 0)) &&
     (pUVar2 = (this->TransformProvider).field0_0x0.DebugPtr,
     pUVar2 != (UTransformProviderData *)0x0)) {
    cVar9 = (**(code **)(pUVar2->_padding_ + 0x2b0))();
    if (cVar9 != '\0') {
      puVar11 = (uint *)(**(code **)(((this->TransformProvider).field0_0x0.DebugPtr)->_padding_ +
                                    0x2b8))();
      pUVar2 = (this->TransformProvider).field0_0x0.DebugPtr;
      uVar3 = puVar11[1];
      uVar4 = puVar11[2];
      uVar5 = puVar11[3];
      (this->TransformProviderId).A = *puVar11;
      (this->TransformProviderId).B = uVar3;
      (this->TransformProviderId).C = uVar4;
      (this->TransformProviderId).D = uVar5;
      uVar10 = (**(code **)(pUVar2->_padding_ + 0x2c0))();
      pUVar2 = (this->TransformProvider).field0_0x0.DebugPtr;
      *(undefined2 *)((longlong)&this->_padding_ + 4) = uVar10;
      cVar9 = (**(code **)(pUVar2->_padding_ + 0x2c8))();
      pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
      *pbVar1 = *pbVar1 ^ (cVar9 * '\x02' ^ *(byte *)((longlong)&this->_padding_ + 6)) & 2;
      return this;
    }
  }
  FVar6 = RefPoseProviderId;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
  *pbVar1 = *pbVar1 & 0xfd;
  this->TransformProviderId = FVar6;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 1;
  return this;
}

// CreateRenderThreadResources @ 1486aede0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FInstancedSkinningSceneExtensionProxy::CreateRenderThreadResources
          (FInstancedSkinningSceneExtensionProxy *this,FSceneInterface *param_1,
          FRHICommandListBase *param_2)

{
  UTransformProviderData *pUVar1;
  uint *puVar2;
  FTransformProviderRenderProxy *pFVar3;
  
  pUVar1 = (this->TransformProvider).field0_0x0.DebugPtr;
  if (pUVar1 != (UTransformProviderData *)0x0) {
    puVar2 = (uint *)(**(code **)(pUVar1->_padding_ + 0x2b8))();
    if ((((this->TransformProviderId).D == puVar2[3] && (this->TransformProviderId).C == puVar2[2])
        && (this->TransformProviderId).B == puVar2[1]) && (this->TransformProviderId).A == *puVar2)
    {
      pUVar1 = (this->TransformProvider).field0_0x0.DebugPtr;
      pFVar3 = (FTransformProviderRenderProxy *)
               (**(code **)(pUVar1->_padding_ + 0x2e8))(pUVar1,this,param_1,param_2);
      this->TransformProviderProxy = pFVar3;
      return;
    }
  }
  this->TransformProviderProxy = (FTransformProviderRenderProxy *)0x0;
  return;
}

// DestroyRenderThreadResources @ 1486b0830

void __thiscall
FInstancedSkinningSceneExtensionProxy::DestroyRenderThreadResources
          (FInstancedSkinningSceneExtensionProxy *this)

{
  if (this->TransformProviderProxy != (FTransformProviderRenderProxy *)0x0) {
    (**(code **)(((this->TransformProvider).field0_0x0.DebugPtr)->_padding_ + 0x2f0))();
    this->TransformProviderProxy = (FTransformProviderRenderProxy *)0x0;
  }
  return;
}

// GetAnimationProviderData @ 1486baea0

TArrayView<unsigned___int64_const_,int> * __thiscall
FInstancedSkinningSceneExtensionProxy::GetAnimationProviderData
          (FInstancedSkinningSceneExtensionProxy *this,
          TArrayView<unsigned___int64_const_,int> *__return_storage_ptr__,bool *param_1)

{
  if (this->TransformProviderProxy != (FTransformProviderRenderProxy *)0x0) {
    (**(code **)((longlong)*this->TransformProviderProxy + 0x18))();
    return __return_storage_ptr__;
  }
  *param_1 = false;
  __return_storage_ptr__->DataPtr = (ulong64 *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetTransformProviderId @ 1486c8d20

FGuid * __thiscall
FInstancedSkinningSceneExtensionProxy::GetTransformProviderId
          (FInstancedSkinningSceneExtensionProxy *this)

{
  FGuid *pFVar1;
  char local_res8 [32];
  undefined1 local_18 [16];
  
  pFVar1 = &this->TransformProviderId;
  if ((((this->TransformProviderId).D != 0 || (this->TransformProviderId).C != 0) ||
      (this->TransformProviderId).B != 0) || pFVar1->A != 0) {
    local_res8[0] = '\0';
    (**(code **)(this->_padding_ + 0x20))(this,local_18,local_res8);
    if (local_res8[0] == '\0') {
      pFVar1 = &RefPoseProviderId;
    }
  }
  return pFVar1;
}

