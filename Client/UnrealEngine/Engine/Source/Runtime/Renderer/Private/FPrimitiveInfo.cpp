// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ComputeCurrentLODIndex @ 14575c4c0

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

int __thiscall
FViewDebugInfo::FPrimitiveInfo::ComputeCurrentLODIndex(FPrimitiveInfo *this,int param_1,int param_2)

{
  TObjectPtr<UPlayer> *this_00;
  UPlayer *pUVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  APlayerController *pAVar7;
  ConstructionValues *pCVar8;
  longlong *plVar9;
  undefined1 auStackY_2f8 [32];
  TSharedPtr<FWN_SceneTexturesCaptureInfo,1> local_2b8;
  undefined1 local_2a8 [24];
  undefined1 local_290 [24];
  ConstructionValues local_278;
  FSceneViewFamilyContext local_1d8;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  bVar2 = IsPrimitiveValid(this);
  if ((bVar2) && (lVar4 = (**(code **)((longlong)*this->ComponentInterface + 0x38))(), lVar4 != 0))
  {
    lVar4 = (**(code **)((longlong)*this->ComponentInterface + 0x98))();
    if (lVar4 != 0) {
      pUVar5 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
      iVar3 = (int)pUVar5->_padding_;
      if (((iVar3 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar3 * 8)
           == &pUVar5->_padding_)) && (*(longlong **)(lVar4 + 0x810) != (longlong *)0x0)) {
        iVar3 = (**(code **)(**(longlong **)(lVar4 + 0x810) + 0xa0))();
        return iVar3;
      }
    }
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    pAVar7 = UGameplayStatics::GetPlayerController(pUVar6,param_1);
    if (((pAVar7 != (APlayerController *)0x0) && (((uint)pAVar7->_padding_ >> 0x1e & 1) == 0)) &&
       (this_00 = &pAVar7->Player, (this_00->field0_0x0).DebugPtr != (UPlayer *)0x0)) {
      pUVar5 = Z_Construct_UClass_ULocalPlayer_NoRegister();
      bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
      if (((bVar2) && (pUVar1 = (this_00->field0_0x0).DebugPtr, pUVar1 != (UPlayer *)0x0)) &&
         ((((uint)pUVar1->_padding_ >> 0x1e & 1) == 0 &&
          ((pAVar7 = pUVar1[1].PlayerController.field0_0x0.DebugPtr,
           pAVar7 != (APlayerController *)0x0 && (((uint)pAVar7->_padding_ >> 0x1e & 1) == 0)))))) {
        pAVar7 = pUVar1[1].PlayerController.field0_0x0.DebugPtr;
        local_2b8.Object = (FWN_SceneTexturesCaptureInfo *)0x0;
        local_2b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
        lVar4 = (**(code **)(*(longlong *)pUVar6 + 0x180))(pUVar6);
        pCVar8 = FSceneViewFamily::ConstructionValues::ConstructionValues
                           (&local_278,
                            (FRenderTarget *)
                            (pUVar1[1].PlayerController.field0_0x0.DebugPtr)->_padding_,
                            *(FSceneInterface **)(lVar4 + 600),
                            (FEngineShowFlags *)&pAVar7->_padding_,&local_2b8);
        pCVar8->bRealtimeUpdate = 0;
        FSceneViewFamilyContext::FSceneViewFamilyContext(&local_1d8,pCVar8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_278.SceneTexturesCaptureInfo.SharedReferenceCount.ReferenceController);
        if (local_278.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_278.EngineShowFlags.CustomShowFlags.AllocatorInstance.
                                SecondaryData);
        }
        lVar4 = (**(code **)(pUVar1->_padding_ + 0x2e0))(pUVar1,&local_1d8,local_290,local_2a8);
        if (lVar4 != 0) {
          plVar9 = (longlong *)(**(code **)((longlong)*this->ComponentInterface + 0x38))();
          iVar3 = (**(code **)(*plVar9 + 0x20))(plVar9,lVar4);
          if ((-1 < iVar3) && (iVar3 < (this->Stats).LODStats.ArrayNum)) {
            FSceneViewFamilyContext::~FSceneViewFamilyContext(&local_1d8);
            return iVar3;
          }
        }
        FSceneViewFamilyContext::~FSceneViewFamilyContext(&local_1d8);
      }
    }
  }
  return -1;
}

// IsPrimitiveValid @ 145780c10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FViewDebugInfo::FPrimitiveInfo::IsPrimitiveValid(FPrimitiveInfo *this)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  bVar3 = false;
  if (this->ComponentInterface != (IPrimitiveComponent *)0x0) {
    bVar3 = bVar1;
  }
  if (bVar3 == false) {
    return false;
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->ComponentUObject).WeakPtr);
  bVar1 = (bool)(bVar1 & bVar3);
  bVar3 = bVar1;
  if (bVar1 != false) {
    cVar2 = (**(code **)((longlong)*this->ComponentInterface + 0x20))();
    bVar3 = false;
    if (cVar2 == '\0') {
      bVar3 = bVar1;
    }
  }
  return bVar3;
}

