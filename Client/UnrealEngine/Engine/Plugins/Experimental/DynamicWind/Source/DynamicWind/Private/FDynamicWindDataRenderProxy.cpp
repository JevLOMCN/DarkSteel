// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicWind
// Functions: 5

// FDynamicWindDataRenderProxy @ 14da4ce80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FDynamicWindDataRenderProxy * __thiscall
FDynamicWindDataRenderProxy::FDynamicWindDataRenderProxy
          (FDynamicWindDataRenderProxy *this,UDynamicWindData *param_1,
          FSkinningSceneExtensionProxy *param_2,FSceneInterface *param_3)

{
  int iVar1;
  USkinnedAsset *pUVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UDynamicWindSkeletalData *pUVar6;
  FDynamicWindDataRenderProxy *pFVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  this->SceneProxy = param_2;
  this->_padding_ = (longlong)&___7FDynamicWindDataRenderProxy__6B_;
  this->Scene = param_3;
  this->UniqueAnimationCount = 0;
  (this->SkeletalData).field0_0x0.DebugPtr = (UDynamicWindSkeletalData *)0x0;
  this->UniqueAnimationCount = (uint)param_2->UniqueAnimationCount;
  pUVar2 = param_2->SkinnedAsset;
  if (pUVar2 == (USkinnedAsset *)0x0) {
    pwVar9 = L"";
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkinnedAsset != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\DynamicWind\\Source\\DynamicWind\\Private\\DynamicWindData.cpp"
                       ,0x4c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FDynamicWindDataRenderProxy *)(*pcVar3)();
      return pFVar7;
    }
    pFVar8 = GetTypeName<USkeletalMesh>(&local_38);
    if ((pFVar8->Data).ArrayNum != 0) {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar9);
  }
  pUVar5 = Z_Construct_UClass_USkeletalMesh_NoRegister();
  iVar1 = (int)pUVar5->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar5->_padding_)) {
    pUVar6 = IInterface_AssetUserData::GetAssetUserData<UDynamicWindSkeletalData>
                       ((IInterface_AssetUserData *)&pUVar2[1].field_0x8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UDynamicWindSkeletalData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->SkeletalData).field0_0x0.DebugPtr = pUVar6;
    return this;
  }
  pFVar8 = GetTypeName<USkeletalMesh>(&local_28);
  pwVar9 = L"";
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  pFVar8 = GetFullNameForCastLogError<USkinnedAsset_const_>(&local_18,pUVar2);
  if ((pFVar8->Data).ArrayNum != 0) {
    pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar9,pwVar10);
}

// ~FDynamicWindDataRenderProxy @ 14da4d7d0

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
FDynamicWindDataRenderProxy::~FDynamicWindDataRenderProxy(FDynamicWindDataRenderProxy *this)

{
  this->_padding_ = (longlong)&___7FTransformProviderRenderProxy__6B_;
  return;
}

// CreateRenderThreadResources @ 14da4f2c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicWindDataRenderProxy::CreateRenderThreadResources
          (FDynamicWindDataRenderProxy *this,FRHICommandListBase *param_1)

{
  return;
}

// DestroyRenderThreadResources @ 14da4f480

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
FDynamicWindDataRenderProxy::DestroyRenderThreadResources(FDynamicWindDataRenderProxy *this)

{
  return;
}

// GetProviderData @ 14da50480

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArrayView<unsigned___int64_const_,int> * __thiscall
FDynamicWindDataRenderProxy::GetProviderData
          (FDynamicWindDataRenderProxy *this,
          TArrayView<unsigned___int64_const_,int> *__return_storage_ptr__,bool *param_1)

{
  *param_1 = true;
  __return_storage_ptr__->DataPtr = (ulong64 *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

