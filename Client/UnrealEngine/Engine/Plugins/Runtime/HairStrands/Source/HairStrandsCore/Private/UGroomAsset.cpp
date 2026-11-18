// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 168

// StaticClass @ 14df92e90

UClass * __cdecl UGroomAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomAsset",
               &Z_Registration_Info_UClass_UGroomAsset.InnerSingleton,
               StaticRegisterNativesUGroomAsset,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGroomAsset>,InternalVTableHelperCtorCaller<UGroomAsset>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomAsset.InnerSingleton;
}

// UGroomAsset @ 14dfaf640

UGroomAsset * __thiscall UGroomAsset::UGroomAsset(UGroomAsset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IDataflowContentOwner__;
  this->LODMode = Default;
  this->_padding_ = (longlong)&_vftable__for__IDataflowInstanceInterface__;
  this->AutoLODBias = 0.0;
  FGroomDataflowSettings::FGroomDataflowSettings
            (&this->DataflowSettings,(UObject *)0x0,(UDataflow *)0x0,(FName)0x0);
  (this->HairGroupsInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HairGroupsInfo).ArrayNum = 0;
  (this->HairGroupsInfo).ArrayMax = 0;
  (this->HairGroupsRendering).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HairGroupsRendering).ArrayNum = 0;
  (this->HairGroupsRendering).ArrayMax = 0;
  (this->HairGroupsPhysics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HairGroupsPhysics).ArrayNum = 0;
  (this->HairGroupsPhysics).ArrayMax = 0;
  (this->HairGroupsInterpolation).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HairGroupsInterpolation).ArrayNum = 0;
  (this->HairGroupsInterpolation).ArrayMax = 0;
  (this->HairGroupsLOD).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HairGroupsLOD).ArrayNum = 0;
  (this->HairGroupsLOD).ArrayMax = 0;
  (this->HairGroupsCards).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HairGroupsCards).ArrayNum = 0;
  (this->HairGroupsCards).ArrayMax = 0;
  (this->HairGroupsMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HairGroupsMeshes).ArrayNum = 0;
  (this->HairGroupsMeshes).ArrayMax = 0;
  (this->HairGroupsMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HairGroupsMaterials).ArrayNum = 0;
  (this->HairGroupsMaterials).ArrayMax = 0;
  this->EnableGlobalInterpolation = false;
  this->EnableSimulationCache = false;
  this->HairInterpolationType = SmoothTransform;
  (this->RiggedSkeletalMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  (this->DeformedGroupSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeformedGroupSections).ArrayNum = 0;
  (this->DeformedGroupSections).ArrayMax = 0;
  (this->MinLOD).Default = 0;
  (this->DisableBelowMinLodStripping).Default = false;
  (this->EffectiveLODBias).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EffectiveLODBias).ArrayNum = 0;
  (this->EffectiveLODBias).ArrayMax = 0;
  (this->HairGroupsPlatformData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HairGroupsPlatformData).ArrayNum = 0;
  (this->HairGroupsPlatformData).ArrayMax = 0;
  (this->HairGroupsResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HairGroupsResources).ArrayNum = 0;
  (this->HairGroupsResources).ArrayMax = 0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  this->bIsInitialized = false;
  this->AssetNameHash = 0;
  return this;
}

// UGroomAsset @ 14dfaf7b0

UGroomAsset * __thiscall UGroomAsset::UGroomAsset(UGroomAsset *this,FObjectInitializer *param_1)

{
  FName *pFVar1;
  FName local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IDataflowContentOwner__;
  this->_padding_ = (longlong)&_vftable__for__IDataflowInstanceInterface__;
  this->LODMode = Default;
  this->AutoLODBias = 0.0;
  pFVar1 = ::FName::FName(&local_res8,L"GroomAssetTerminal");
  FGroomDataflowSettings::FGroomDataflowSettings
            (&this->DataflowSettings,(UObject *)this,(UDataflow *)0x0,*pFVar1);
  (this->HairGroupsInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HairGroupsInfo).ArrayNum = 0;
  (this->HairGroupsInfo).ArrayMax = 0;
  (this->HairGroupsRendering).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HairGroupsRendering).ArrayNum = 0;
  (this->HairGroupsRendering).ArrayMax = 0;
  (this->HairGroupsPhysics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HairGroupsPhysics).ArrayNum = 0;
  (this->HairGroupsPhysics).ArrayMax = 0;
  (this->HairGroupsInterpolation).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HairGroupsInterpolation).ArrayNum = 0;
  (this->HairGroupsInterpolation).ArrayMax = 0;
  (this->HairGroupsLOD).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HairGroupsLOD).ArrayNum = 0;
  (this->HairGroupsLOD).ArrayMax = 0;
  (this->HairGroupsCards).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HairGroupsCards).ArrayNum = 0;
  (this->HairGroupsCards).ArrayMax = 0;
  (this->HairGroupsMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HairGroupsMeshes).ArrayNum = 0;
  (this->HairGroupsMeshes).ArrayMax = 0;
  (this->HairGroupsMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HairGroupsMaterials).ArrayNum = 0;
  (this->HairGroupsMaterials).ArrayMax = 0;
  this->EnableGlobalInterpolation = false;
  this->EnableSimulationCache = false;
  this->HairInterpolationType = SmoothTransform;
  (this->RiggedSkeletalMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  (this->DeformedGroupSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeformedGroupSections).ArrayNum = 0;
  (this->DeformedGroupSections).ArrayMax = 0;
  (this->EffectiveLODBias).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EffectiveLODBias).ArrayNum = 0;
  (this->EffectiveLODBias).ArrayMax = 0;
  (this->HairGroupsPlatformData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HairGroupsPlatformData).ArrayNum = 0;
  (this->HairGroupsPlatformData).ArrayMax = 0;
  (this->HairGroupsResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HairGroupsResources).ArrayNum = 0;
  (this->HairGroupsResources).ArrayMax = 0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  this->AssetNameHash = 0;
  this->bIsInitialized = false;
  (this->MinLOD).Default = 0;
  (this->DisableBelowMinLodStripping).Default = false;
  return this;
}

// ~UGroomAsset @ 14dfb0a60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UGroomAsset::~UGroomAsset(UGroomAsset *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IDataflowContentOwner__;
  this->_padding_ = (longlong)&_vftable__for__IDataflowInstanceInterface__;
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FHairGroupResources,int>
            ((FHairGroupResources *)(this->HairGroupsResources).AllocatorInstance.Data,
             (this->HairGroupsResources).ArrayNum);
  pFVar1 = (this->HairGroupsResources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FHairGroupPlatformData,int>
            ((FHairGroupPlatformData *)(this->HairGroupsPlatformData).AllocatorInstance.Data,
             (this->HairGroupsPlatformData).ArrayNum);
  pFVar1 = (this->HairGroupsPlatformData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EffectiveLODBias).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeformedGroupSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HairGroupsMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FHairGroupsMeshesSourceDescription,int>
            ((FHairGroupsMeshesSourceDescription *)(this->HairGroupsMeshes).AllocatorInstance.Data,
             (this->HairGroupsMeshes).ArrayNum);
  pFVar1 = (this->HairGroupsMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FHairGroupsCardsSourceDescription,int>
            ((FHairGroupsCardsSourceDescription *)(this->HairGroupsCards).AllocatorInstance.Data,
             (this->HairGroupsCards).ArrayNum);
  pFVar1 = (this->HairGroupsCards).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FHairGroupsLOD,int>
            ((FHairGroupsLOD *)(this->HairGroupsLOD).AllocatorInstance.Data,
             (this->HairGroupsLOD).ArrayNum);
  pFVar1 = (this->HairGroupsLOD).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HairGroupsInterpolation).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FHairGroupsPhysics,int>
            ((FHairGroupsPhysics *)(this->HairGroupsPhysics).AllocatorInstance.Data,
             (this->HairGroupsPhysics).ArrayNum);
  pFVar1 = (this->HairGroupsPhysics).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HairGroupsRendering).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FHairGroupInfoWithVisibility,int>
            ((FHairGroupInfoWithVisibility *)(this->HairGroupsInfo).AllocatorInstance.Data,
             (this->HairGroupsInfo).ArrayNum);
  pFVar1 = (this->HairGroupsInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DataflowSettings).RestCollection.SharedReferenceCount.ReferenceController);
  pFVar1 = (this->DataflowSettings).MeshLODs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DataflowSettings).SkeletalMeshes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDataflowInstance::~FDataflowInstance((FDataflowInstance *)&this->DataflowSettings);
  this->_padding_ = (longlong)&___7IDataflowInstanceInterface__6B_;
  this->_padding_ = (longlong)&___7IDataflowContentOwner__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddAssetUserData @ 14dfb64f0

void __thiscall UGroomAsset::AddAssetUserData(UGroomAsset *this,UAssetUserData *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  UObject **ppUVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  UObject *pUVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  UObject *local_res18 [2];
  UObject *local_48;
  UAssetUserData *local_40;
  
  if (param_1 != (UAssetUserData *)0x0) {
    local_res18[0] = *(UObject **)&param_1->field_0x10;
    pcVar3 = *(code **)(this->_padding_ + 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res18[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    pUVar8 = (UObject *)(*pcVar3)(this,local_res18);
    if (pUVar8 != (UObject *)0x0) {
      local_48 = pUVar8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      ppUVar4 = *(UObject ***)&(this->EffectiveLODBias).ArrayNum;
      if (((ppUVar4 <= &local_48) &&
          (&local_48 <
           ppUVar4 + *(int *)((longlong)&(this->HairGroupsPlatformData).AllocatorInstance.Data + 4))
          ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)&(this->HairGroupsPlatformData).AllocatorInstance.Data;
      if (iVar7 != 0) {
        iVar12 = 0;
        plVar5 = *(longlong **)&(this->EffectiveLODBias).ArrayNum;
        bVar6 = (UObject *)*plVar5 != local_48;
        lVar9 = 0;
        pUVar8 = local_48;
        iVar10 = 0;
        do {
          iVar11 = iVar10;
          do {
            lVar9 = lVar9 + 1;
            iVar11 = iVar11 + 1;
            if (iVar7 <= lVar9) break;
          } while (bVar6 == ((UObject *)plVar5[lVar9] != pUVar8));
          if (bVar6 != false) {
            if (iVar12 != iVar10) {
              memmove(plVar5 + iVar12,plVar5 + iVar10,(longlong)(iVar11 - iVar10) << 3);
              pUVar8 = local_48;
            }
            iVar12 = iVar12 + (iVar11 - iVar10);
          }
          bVar6 = (bool)(bVar6 ^ 1);
          iVar10 = iVar11;
        } while (lVar9 < iVar7);
        *(int *)&(this->HairGroupsPlatformData).AllocatorInstance.Data = iVar12;
      }
    }
    piVar2 = &(this->EffectiveLODBias).ArrayNum;
    local_40 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if (((*(UAssetUserData ***)piVar2 <= &local_40) &&
        (&local_40 <
         *(UAssetUserData ***)piVar2 +
         *(int *)((longlong)&(this->HairGroupsPlatformData).AllocatorInstance.Data + 4))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = *(int *)&(this->HairGroupsPlatformData).AllocatorInstance.Data;
    piVar1 = (int *)((longlong)&(this->HairGroupsPlatformData).AllocatorInstance.Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)piVar2,piVar1);
    }
    *(int *)&(this->HairGroupsPlatformData).AllocatorInstance.Data = iVar7 + 1;
    *(UAssetUserData **)(*(longlong *)piVar2 + (longlong)iVar7 * 8) = local_40;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UAssetUserData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_40);
    }
  }
  return;
}

// AllocateCardsRaytracingResources @ 14dfb6b20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsRaytracingResource * __thiscall
UGroomAsset::AllocateCardsRaytracingResources(UGroomAsset *this,uint param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FHairStrandsRaytracingResource *pFVar6;
  FName FVar7;
  longlong lVar8;
  uint uVar9;
  FHairCardsBulkData *pFVar10;
  FHairResourceName local_res20 [8];
  undefined1 local_38 [16];
  
  lVar8 = (longlong)(int)param_1;
  bVar4 = IsRayTracingAllowed();
  if (((bVar4) && (-1 < (int)param_1)) && ((int)param_1 < (this->HairGroupsLOD).ArrayNum)) {
    uVar9 = ~param_1 >> 0x1f;
    uVar5 = 0;
    if ((int)param_1 < (this->HairGroupsLOD).ArrayNum) {
      uVar5 = uVar9;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FHairStrandsRaytracingResource *)(*pcVar3)();
      return pFVar6;
    }
    if ((-1 < (int)param_2) &&
       ((int)param_2 < *(int *)((this->HairGroupsLOD).AllocatorInstance.Data + lVar8 * 0x18 + 0x10))
       ) {
      uVar5 = 0;
      if ((int)param_1 < (this->HairGroupsPlatformData).ArrayNum) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FHairStrandsRaytracingResource *)(*pcVar3)();
        return pFVar6;
      }
      pFVar1 = (this->HairGroupsPlatformData).AllocatorInstance.Data;
      uVar5 = 0;
      if ((int)param_1 < (this->HairGroupsResources).ArrayNum) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FHairStrandsRaytracingResource *)(*pcVar3)();
        return pFVar6;
      }
      pFVar2 = (this->HairGroupsResources).AllocatorInstance.Data;
      uVar5 = 0;
      if ((int)param_2 < *(int *)(pFVar1 + lVar8 * 2000 + 0x768)) {
        uVar5 = ~param_2 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FHairStrandsRaytracingResource *)(*pcVar3)();
        return pFVar6;
      }
      pFVar10 = (FHairCardsBulkData *)
                ((longlong)(int)param_2 * 0x428 + *(longlong *)(pFVar1 + lVar8 * 2000 + 0x760));
      uVar5 = 0;
      if ((int)param_2 < *(int *)(pFVar2 + lVar8 * 0x58 + 0x38)) {
        uVar5 = ~param_2 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FHairStrandsRaytracingResource *)(*pcVar3)();
        return pFVar6;
      }
      lVar8 = (longlong)(int)param_2 * 0x30 + *(longlong *)(pFVar2 + lVar8 * 0x58 + 0x30);
      if (((pFVar10->Positions).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("LODData.HasValidData()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomAsset.cpp"
                             ,0xd1a,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FHairStrandsRaytracingResource *)(*pcVar3)();
        return pFVar6;
      }
      if (*(FHairStrandsRaytracingResource **)(lVar8 + 0x20) !=
          (FHairStrandsRaytracingResource *)0x0) {
        return *(FHairStrandsRaytracingResource **)(lVar8 + 0x20);
      }
      pFVar6 = ::operator_new(0x1b0);
      if (pFVar6 == (FHairStrandsRaytracingResource *)0x0) {
        *(undefined8 *)(lVar8 + 0x20) = 0;
        return (FHairStrandsRaytracingResource *)0x0;
      }
      FVar7 = GetAssetPathName(this,(int)local_38);
      pFVar6 = FHairStrandsRaytracingResource::FHairStrandsRaytracingResource
                         (pFVar6,pFVar10,local_res20,(FName *)FVar7);
      *(FHairStrandsRaytracingResource **)(lVar8 + 0x20) = pFVar6;
      return pFVar6;
    }
  }
  return (FHairStrandsRaytracingResource *)0x0;
}

// AllocateGuidesResources @ 14dfb6dc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsRestResource * __thiscall
UGroomAsset::AllocateGuidesResources(UGroomAsset *this,uint param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FHairStrandsRestResource *pFVar5;
  FString *pFVar6;
  FName *pFVar7;
  FScriptContainerElement *pFVar8;
  FHairStrandsBulkData *pFVar9;
  FName local_res8;
  FHairResourceName local_res10 [8];
  FName local_res18;
  FString local_38;
  
  if ((-1 < (int)param_1) && ((int)param_1 < (this->HairGroupsPlatformData).ArrayNum)) {
    uVar4 = 0;
    if ((int)param_1 < (this->HairGroupsPlatformData).ArrayNum) {
      uVar4 = ~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FHairStrandsRestResource *)(*pcVar2)();
      return pFVar5;
    }
    pFVar9 = (FHairStrandsBulkData *)
             ((this->HairGroupsPlatformData).AllocatorInstance.Data + (longlong)(int)param_1 * 2000)
    ;
    uVar4 = 0;
    if ((int)param_1 < (this->HairGroupsResources).ArrayNum) {
      uVar4 = ~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FHairStrandsRestResource *)(*pcVar2)();
      return pFVar5;
    }
    pFVar8 = (this->HairGroupsResources).AllocatorInstance.Data + (longlong)(int)param_1 * 0x58;
    if ((pFVar9->Header).PointCount != 0) {
      if (*(FHairStrandsRestResource **)pFVar8 != (FHairStrandsRestResource *)0x0) {
        return *(FHairStrandsRestResource **)pFVar8;
      }
      pFVar5 = ::operator_new(0x1f8);
      if (pFVar5 == (FHairStrandsRestResource *)0x0) {
        *(longlong *)pFVar8 = 0;
        return (FHairStrandsRestResource *)0x0;
      }
      pFVar6 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0);
      iVar1 = (pFVar6->Data).ArrayNum;
      uVar4 = iVar1 - 1;
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      pFVar7 = ::FName::FName(&local_res18,uVar4,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,
                              FNAME_Add);
      local_res8 = *pFVar7;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      pFVar5 = FHairStrandsRestResource::FHairStrandsRestResource
                         (pFVar5,pFVar9,Guides,local_res10,&local_res8);
      *(FHairStrandsRestResource **)pFVar8 = pFVar5;
      return pFVar5;
    }
  }
  return (FHairStrandsRestResource *)0x0;
}

// AllocateInterpolationResources @ 14dfb6f70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsInterpolationResource * __thiscall
UGroomAsset::AllocateInterpolationResources(UGroomAsset *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FHairStrandsInterpolationResource *pFVar7;
  FHairStrandsInterpolationResource *pFVar8;
  FString *pFVar9;
  FName *pFVar10;
  longlong lVar11;
  FName local_res8;
  FHairResourceName local_res10 [8];
  FName local_res18;
  FString local_38;
  
  lVar11 = (longlong)(int)param_1;
  if (((int)param_1 < 0) || ((this->HairGroupsPlatformData).ArrayNum <= (int)param_1)) {
    return (FHairStrandsInterpolationResource *)0x0;
  }
  pFVar7 = (FHairStrandsInterpolationResource *)0x0;
  uVar6 = 0;
  if ((int)param_1 < (this->HairGroupsPlatformData).ArrayNum) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FHairStrandsInterpolationResource *)(*pcVar4)();
    return pFVar7;
  }
  pFVar2 = (this->HairGroupsPlatformData).AllocatorInstance.Data;
  uVar6 = 0;
  if ((int)param_1 < (this->HairGroupsResources).ArrayNum) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FHairStrandsInterpolationResource *)(*pcVar4)();
    return pFVar7;
  }
  pFVar3 = (this->HairGroupsResources).AllocatorInstance.Data;
  if ((*(int *)(pFVar2 + lVar11 * 2000 + 0xc) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GroupData.Guides.HasValidData()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomAsset.cpp"
                         ,0xd07,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FHairStrandsInterpolationResource *)(*pcVar4)();
    return pFVar7;
  }
  pFVar8 = *(FHairStrandsInterpolationResource **)(pFVar3 + lVar11 * 0x58 + 0x10);
  if (pFVar8 == (FHairStrandsInterpolationResource *)0x0) {
    pFVar8 = ::operator_new(0xa8);
    if (pFVar8 != (FHairStrandsInterpolationResource *)0x0) {
      pFVar9 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0);
      iVar1 = (pFVar9->Data).ArrayNum;
      uVar6 = iVar1 - 1;
      if (iVar1 == 0) {
        uVar6 = 0;
      }
      pFVar10 = ::FName::FName(&local_res18,uVar6,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,
                               FNAME_Add);
      local_res8 = *pFVar10;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      pFVar7 = FHairStrandsInterpolationResource::FHairStrandsInterpolationResource
                         (pFVar8,(FHairStrandsInterpolationBulkData *)
                                 (pFVar2 + lVar11 * 2000 + 0x580),local_res10,&local_res8);
    }
    *(FHairStrandsInterpolationResource **)(pFVar3 + lVar11 * 0x58 + 0x10) = pFVar7;
    pFVar8 = pFVar7;
  }
  return pFVar8;
}

// AllocateMeshesRaytracingResources @ 14dfb7130

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsRaytracingResource * __thiscall
UGroomAsset::AllocateMeshesRaytracingResources(UGroomAsset *this,uint param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FHairStrandsRaytracingResource *pFVar6;
  FName FVar7;
  longlong lVar8;
  uint uVar9;
  FHairMeshesBulkData *pFVar10;
  FHairResourceName local_res20 [8];
  undefined1 local_38 [16];
  
  lVar8 = (longlong)(int)param_1;
  bVar4 = IsRayTracingAllowed();
  if (((bVar4) && (-1 < (int)param_1)) && ((int)param_1 < (this->HairGroupsLOD).ArrayNum)) {
    uVar9 = ~param_1 >> 0x1f;
    uVar5 = 0;
    if ((int)param_1 < (this->HairGroupsLOD).ArrayNum) {
      uVar5 = uVar9;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FHairStrandsRaytracingResource *)(*pcVar3)();
      return pFVar6;
    }
    if ((-1 < (int)param_2) &&
       ((int)param_2 < *(int *)((this->HairGroupsLOD).AllocatorInstance.Data + lVar8 * 0x18 + 0x10))
       ) {
      uVar5 = 0;
      if ((int)param_1 < (this->HairGroupsPlatformData).ArrayNum) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FHairStrandsRaytracingResource *)(*pcVar3)();
        return pFVar6;
      }
      pFVar1 = (this->HairGroupsPlatformData).AllocatorInstance.Data;
      uVar5 = 0;
      if ((int)param_1 < (this->HairGroupsResources).ArrayNum) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FHairStrandsRaytracingResource *)(*pcVar3)();
        return pFVar6;
      }
      pFVar2 = (this->HairGroupsResources).AllocatorInstance.Data;
      uVar5 = 0;
      if ((int)param_2 < *(int *)(pFVar1 + lVar8 * 2000 + 0x778)) {
        uVar5 = ~param_2 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FHairStrandsRaytracingResource *)(*pcVar3)();
        return pFVar6;
      }
      pFVar10 = (FHairMeshesBulkData *)
                ((longlong)(int)param_2 * 0x98 + *(longlong *)(pFVar1 + lVar8 * 2000 + 0x770));
      uVar5 = 0;
      if ((int)param_2 < *(int *)(pFVar2 + lVar8 * 0x58 + 0x48)) {
        uVar5 = ~param_2 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FHairStrandsRaytracingResource *)(*pcVar3)();
        return pFVar6;
      }
      lVar8 = *(longlong *)(pFVar2 + lVar8 * 0x58 + 0x40) + (longlong)(int)param_2 * 0x18;
      if (((pFVar10->Positions).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("LODData.HasValidData()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomAsset.cpp"
                             ,0xd2e,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FHairStrandsRaytracingResource *)(*pcVar3)();
        return pFVar6;
      }
      if (*(FHairStrandsRaytracingResource **)(lVar8 + 8) != (FHairStrandsRaytracingResource *)0x0)
      {
        return *(FHairStrandsRaytracingResource **)(lVar8 + 8);
      }
      pFVar6 = ::operator_new(0x1b0);
      if (pFVar6 == (FHairStrandsRaytracingResource *)0x0) {
        *(undefined8 *)(lVar8 + 8) = 0;
        return (FHairStrandsRaytracingResource *)0x0;
      }
      FVar7 = GetAssetPathName(this,(int)local_38);
      pFVar6 = FHairStrandsRaytracingResource::FHairStrandsRaytracingResource
                         (pFVar6,pFVar10,local_res20,(FName *)FVar7);
      *(FHairStrandsRaytracingResource **)(lVar8 + 8) = pFVar6;
      return pFVar6;
    }
  }
  return (FHairStrandsRaytracingResource *)0x0;
}

// AllocateStrandsRaytracingResources @ 14dfb73d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsRaytracingResource * __thiscall
UGroomAsset::AllocateStrandsRaytracingResources(UGroomAsset *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FHairStrandsRaytracingResource *pFVar7;
  FHairStrandsRaytracingResource *pFVar8;
  FString *pFVar9;
  FName *pFVar10;
  longlong lVar11;
  FHairResourceName local_res18 [8];
  FName local_res20;
  FName local_48;
  FString local_40;
  
  lVar11 = (longlong)(int)param_1;
  bVar5 = IsRayTracingAllowed();
  if (((!bVar5) || ((int)param_1 < 0)) || ((this->HairGroupsPlatformData).ArrayNum <= (int)param_1))
  {
    return (FHairStrandsRaytracingResource *)0x0;
  }
  pFVar7 = (FHairStrandsRaytracingResource *)0x0;
  uVar6 = 0;
  if ((int)param_1 < (this->HairGroupsPlatformData).ArrayNum) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FHairStrandsRaytracingResource *)(*pcVar4)();
    return pFVar7;
  }
  pFVar2 = (this->HairGroupsPlatformData).AllocatorInstance.Data;
  uVar6 = 0;
  if ((int)param_1 < (this->HairGroupsResources).ArrayNum) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FHairStrandsRaytracingResource *)(*pcVar4)();
    return pFVar7;
  }
  pFVar3 = (this->HairGroupsResources).AllocatorInstance.Data;
  if ((*(int *)(pFVar2 + lVar11 * 2000 + 0x2cc) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GroupData.Strands.HasValidData()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomAsset.cpp"
                         ,0xd3e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FHairStrandsRaytracingResource *)(*pcVar4)();
    return pFVar7;
  }
  pFVar8 = *(FHairStrandsRaytracingResource **)(pFVar3 + lVar11 * 0x58 + 0x20);
  if (pFVar8 == (FHairStrandsRaytracingResource *)0x0) {
    pFVar8 = ::operator_new(0x1b0);
    if (pFVar8 != (FHairStrandsRaytracingResource *)0x0) {
      pFVar9 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_40,(UObject *)0x0);
      iVar1 = (pFVar9->Data).ArrayNum;
      uVar6 = iVar1 - 1;
      if (iVar1 == 0) {
        uVar6 = 0;
      }
      pFVar10 = ::FName::FName(&local_48,uVar6,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,
                               FNAME_Add);
      local_res20 = *pFVar10;
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      pFVar7 = FHairStrandsRaytracingResource::FHairStrandsRaytracingResource
                         (pFVar8,(FHairStrandsBulkData *)(pFVar2 + lVar11 * 2000 + 0x2c0),
                          local_res18,&local_res20);
    }
    *(FHairStrandsRaytracingResource **)(pFVar3 + lVar11 * 0x58 + 0x20) = pFVar7;
    pFVar8 = pFVar7;
  }
  return pFVar8;
}

// ApplyStripFlags @ 14dfb78e0

void __thiscall
UGroomAsset::ApplyStripFlags(UGroomAsset *this,uchar param_1,ITargetPlatform *param_2)

{
  return;
}

// AreGroupsValid @ 14dfb78f0

bool __thiscall UGroomAsset::AreGroupsValid(UGroomAsset *this)

{
  int iVar1;
  
  iVar1 = (this->HairGroupsInterpolation).ArrayNum;
  if ((((iVar1 != 0) && ((this->HairGroupsPlatformData).ArrayNum == iVar1)) &&
      ((this->HairGroupsPhysics).ArrayNum == iVar1)) &&
     (((this->HairGroupsRendering).ArrayNum == iVar1 && ((this->HairGroupsLOD).ArrayNum == iVar1))))
  {
    return true;
  }
  return false;
}

// BeginDestroy @ 14dfb8040

void __thiscall UGroomAsset::BeginDestroy(UGroomAsset *this)

{
  ReleaseResource(this);
  UObject::BeginDestroy((UObject *)this);
  return;
}

// CanRebuildFromDescription @ 14dfbb9f0

bool __thiscall UGroomAsset::CanRebuildFromDescription(UGroomAsset *this)

{
  return false;
}

// ClearNumGroup @ 14dfbba00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UGroomAsset::ClearNumGroup(UGroomAsset *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  FHairGroupPlatformData *pFVar3;
  FHairGroupsPhysics *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 auStack_8a8 [32];
  undefined4 local_888;
  undefined2 local_884;
  ushort uStack_882;
  uint uStack_880;
  undefined2 uStack_87c;
  undefined2 uStack_87a;
  undefined4 uStack_878;
  undefined4 local_874;
  undefined1 local_870 [24];
  undefined8 uStack_858;
  FHairStrandsRaytracingResource *local_850;
  void *local_848;
  ForAnyElementType local_840;
  undefined8 local_838;
  ForAnyElementType local_830;
  undefined8 local_828;
  FDebug local_820;
  FHairGroupsLOD local_818;
  undefined1 local_7f8 [120];
  FHairMaterialConstraints local_780;
  undefined **local_598;
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_590;
  void *local_550;
  undefined4 local_548;
  FChunk *local_540;
  ForAnyElementType local_528;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_8a8;
  ReleaseResource(this);
  local_818.AutoLODBias = 0.0;
  local_818.LODs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_818.LODs.ArrayNum = 0;
  local_818.LODs.ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x41c,&local_818.LODs.AllocatorInstance,&local_818.LODs.ArrayMax);
  local_818.LODs.ArrayNum = iVar2 + 1;
  pFVar5 = local_818.LODs.AllocatorInstance.Data + (longlong)iVar2 * 0x1c;
  DefaultConstructItems<FHairLODSettings,int>(pFVar5,1);
  *(undefined4 *)(pFVar5 + 0xc) = 0x3f800000;
  *(undefined4 *)pFVar5 = 0x3f800000;
  memset(local_7f8,0,2000);
  pFVar3 = FHairGroupPlatformData::FHairGroupPlatformData((FHairGroupPlatformData *)local_7f8);
  TArray<FHairGroupPlatformData,TSizedDefaultAllocator<32>_>::Init
            (&this->HairGroupsPlatformData,pFVar3,param_1);
  FHairGroupPlatformData::~FHairGroupPlatformData((FHairGroupPlatformData *)local_7f8);
  local_850 = (FHairStrandsRaytracingResource *)0x0;
  local_848 = (void *)0x0;
  local_840.Data = (FScriptContainerElement *)0x0;
  local_870._0_4_ = 0;
  local_870._4_4_ = 0;
  local_870._8_8_ = (FHairStrandsRestResource *)0x0;
  local_838._0_4_ = 0;
  local_838._4_4_ = 0;
  local_870._16_8_ = (FHairStrandsInterpolationResource *)0x0;
  uStack_858 = (FHairStrandsClusterResource *)0x0;
  local_830.Data = (FScriptContainerElement *)0x0;
  local_828._0_4_ = 0;
  local_828._4_4_ = 0;
  local_820.Resource = (FHairStrandsDebugResources *)0x0;
  TArray<FHairGroupResources,TSizedDefaultAllocator<32>_>::Init
            (&this->HairGroupsResources,(FHairGroupResources *)local_870,param_1);
  if (local_830.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_830.Data);
  }
  if (local_840.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_840.Data);
  }
  pFVar4 = FHairGroupsPhysics::FHairGroupsPhysics((FHairGroupsPhysics *)local_7f8);
  TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_>::Init
            (&this->HairGroupsPhysics,pFVar4,param_1);
  if (local_528.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_528.Data);
  }
  local_598 = &___7FIndexedCurve__6B_;
  if (local_540 != (FChunk *)0x0) {
    FMemory::Free(local_540);
  }
  local_548 = 0;
  if (local_550 != (void *)0x0) {
    FMemory::Free(local_550);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_590);
  FHairMaterialConstraints::~FHairMaterialConstraints(&local_780);
  if ((void *)local_7f8._32_8_ != (void *)0x0) {
    FMemory::Free((void *)local_7f8._32_8_);
  }
  uVar1 = uStack_880;
  uStack_87a = 0x3f80;
  uStack_880 = uStack_880 & 0xffffff00;
  local_884 = 0xd70a;
  uStack_882 = 0x3c23;
  uStack_878 = 0x3f800000;
  local_870._16_8_ = CONCAT44(uVar1,0x3c23d70a) & 0xffffff00ffffffff;
  uStack_858._0_4_ = 1.0;
  uStack_858._4_4_ = 1.0;
  uStack_87c = 0x100;
  local_870._0_4_ = 0;
  local_870._4_4_ = 0;
  local_850 = (FHairStrandsRaytracingResource *)CONCAT44(__real_3f800000,__real_3f800000);
  local_870._8_8_ = (FHairStrandsRestResource *)0x0;
  local_888 = (float)((uint)local_888._2_2_ << 0x10);
  local_848 = (void *)CONCAT26(local_848._6_2_,0x3f800100);
  TArray<FHairGroupsRendering,TSizedDefaultAllocator<32>_>::Init
            (&this->HairGroupsRendering,(FHairGroupsRendering *)local_870,param_1);
  local_884 = 0;
  uStack_880 = 0x3dcccccd;
  uStack_87c = 10;
  uStack_87a = 0;
  uStack_878 = 4;
  local_870._12_4_ = 0x3dcccccd;
  local_870._8_4_ = (uint)uStack_882 << 0x10;
  local_870._16_8_ = (FHairStrandsInterpolationResource *)0x40000000a;
  local_874 = 2;
  uStack_858._4_4_ = (float)((uint)uStack_858._4_4_ & 0xffffff00);
  local_850 = (FHairStrandsRaytracingResource *)0x40000000a;
  local_870._0_4_ = 0x3f800000;
  local_870._4_4_ = 0x3f800000;
  uStack_858 = (FHairStrandsClusterResource *)CONCAT44(uStack_858._4_4_,2);
  TArray<FHairGroupsInterpolation,TSizedDefaultAllocator<32>_>::Init
            (&this->HairGroupsInterpolation,(FHairGroupsInterpolation *)local_870,param_1);
  TArray<FHairGroupsLOD,TSizedDefaultAllocator<32>_>::Init(&this->HairGroupsLOD,&local_818,param_1);
  local_870._0_4_ = 0;
  local_870._4_4_ = 0;
  local_870._16_8_ = (FHairStrandsInterpolationResource *)0x0;
  uStack_858 = (FHairStrandsClusterResource *)0x0;
  local_870._8_8_ = (FHairStrandsRestResource *)0x0;
  local_850 = (FHairStrandsRaytracingResource *)0x0;
  local_848 = (void *)0x0;
  local_840.Data = (FScriptContainerElement *)0x0;
  local_838._0_4_ = 1;
  local_838._4_4_ = 0;
  TArray<FHairGroupInfoWithVisibility,TSizedDefaultAllocator<32>_>::Init
            (&this->HairGroupsInfo,(FHairGroupInfoWithVisibility *)local_870,param_1);
  if (local_848 != (void *)0x0) {
    FMemory::Free(local_848);
  }
  local_888 = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (&this->EffectiveLODBias,(float *)&local_888,param_1);
  if (local_818.LODs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_818.LODs.AllocatorInstance.Data);
  }
  return;
}

// CollectVertexFactoryTypesPerMaterialData @ 14dfbc360

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

TArray<FHairVertexFactoryTypesPerMaterialData,TSizedDefaultAllocator<32>_> * __thiscall
UGroomAsset::CollectVertexFactoryTypesPerMaterialData
          (UGroomAsset *this,
          TArray<FHairVertexFactoryTypesPerMaterialData,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,EShaderPlatform param_1)

{
  code *pcVar1;
  EShaderPlatform EVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  TArray<FHairVertexFactoryTypesPerMaterialData,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 local_res8 [8];
  TArray<FHairVertexFactoryTypesPerMaterialData,TSizedDefaultAllocator<32>_> *local_res10;
  EShaderPlatform local_res18;
  undefined1 local_res20 [8];
  undefined1 local_a8;
  undefined1 local_a7 [3];
  uint local_a4;
  FScriptContainerElement *local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  FPSOPrecacheVertexFactoryData local_78;
  FPSOPrecacheVertexFactoryData local_68;
  FPSOPrecacheVertexFactoryData local_58;
  
  __return_storage_ptr__->ArrayMax = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  local_80 = (longlong)(this->HairGroupsPlatformData).ArrayNum;
  local_a4 = 0;
  if (0 < local_80) {
    local_90 = 0;
    local_98 = 0;
    local_88 = 0;
    local_res10 = __return_storage_ptr__;
    local_res18 = param_1;
    do {
      lVar16 = local_88;
      lVar15 = local_90;
      uVar3 = local_a4;
      EVar2 = local_res18;
      uVar11 = ~local_a4;
      uVar5 = 0;
      if ((int)local_a4 < (this->HairGroupsPlatformData).ArrayNum) {
        uVar5 = uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        pTVar10 = (TArray<FHairVertexFactoryTypesPerMaterialData,TSizedDefaultAllocator<32>_> *)
                  (*pcVar1)();
        return pTVar10;
      }
      local_a0 = (this->HairGroupsPlatformData).AllocatorInstance.Data + lVar15;
      uVar5 = 0;
      if ((int)uVar3 < (this->HairGroupsRendering).ArrayNum) {
        uVar5 = uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        pTVar10 = (TArray<FHairVertexFactoryTypesPerMaterialData,TSizedDefaultAllocator<32>_> *)
                  (*pcVar1)();
        return pTVar10;
      }
      iVar6 = GetMaterialIndex(this,*(FName *)((this->HairGroupsRendering).AllocatorInstance.Data +
                                              lVar16));
      if (-1 < iVar6) {
        pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data;
        pFVar13 = pFVar12 + (longlong)__return_storage_ptr__->ArrayNum * 0x38;
        for (; pFVar12 != pFVar13; pFVar12 = pFVar12 + 0x38) {
          if ((*(short *)pFVar12 == iVar6) && (*(int *)(pFVar12 + 4) == 0)) {
            if (pFVar12 != (FScriptContainerElement *)0x0) goto LAB_14dfbc512;
            break;
          }
        }
        if (__return_storage_ptr__->ArrayNum == __return_storage_ptr__->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x838,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
          __return_storage_ptr__->ArrayNum = iVar7;
        }
        pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data +
                  (longlong)__return_storage_ptr__->ArrayNum * 0x38;
        __return_storage_ptr__->ArrayNum = __return_storage_ptr__->ArrayNum + 1;
        DefaultConstructItems<FHairVertexFactoryTypesPerMaterialData,int>(pFVar12,1);
        *(short *)pFVar12 = (short)iVar6;
        *(undefined4 *)(pFVar12 + 4) = 0;
LAB_14dfbc512:
        local_78.CustomDefaultVertexDeclaration = (FRHIVertexDeclaration *)0x0;
        local_78.VertexFactoryType = &FHairStrandsVertexFactory::StaticType;
        TArray<FPSOPrecacheVertexFactoryData,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
        ::AddUniqueImpl<FPSOPrecacheVertexFactoryData>
                  ((TArray<FPSOPrecacheVertexFactoryData,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                    *)(pFVar12 + 8),&local_78);
      }
      bVar4 = IsHairStrandsEnabled(Cards,EVar2);
      pFVar12 = local_a0;
      if (bVar4) {
        iVar6 = *(int *)(local_a0 + 0x768);
        iVar7 = 0;
        lVar15 = *(longlong *)(local_a0 + 0x760);
        lVar16 = (longlong)iVar6 * 0x428 + lVar15;
        while( true ) {
          if (*(int *)(pFVar12 + 0x768) != iVar6) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FHairGroupPlatformData::FCards::FLOD_const_,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(local_res8);
          }
          if (lVar15 == lVar16) break;
          if (*(int *)(lVar15 + 0x28) < 1) {
LAB_14dfbc6d4:
            iVar7 = iVar7 + 1;
            lVar15 = lVar15 + 0x428;
          }
          else {
            iVar8 = (this->HairGroupsCards).ArrayNum;
            pFVar13 = (this->HairGroupsCards).AllocatorInstance.Data;
            pFVar14 = pFVar13 + (longlong)iVar8 * 0xa0;
            while( true ) {
              if ((this->HairGroupsCards).ArrayNum != iVar8) {
                local_res20[0] = 0;
                `TCheckedPointerIterator<FHairGroupsCardsSourceDescription,int,0>::operator!='::__l2
                ::<lambda_1>::operator()(local_res20);
              }
              pFVar12 = local_a0;
              __return_storage_ptr__ = local_res10;
              if (pFVar13 == pFVar14) goto LAB_14dfbc6d4;
              if ((*(uint *)(pFVar13 + 0x80) == local_a4) && (*(int *)(pFVar13 + 0x84) == iVar7))
              break;
              pFVar13 = pFVar13 + 0xa0;
            }
            iVar8 = GetMaterialIndex(this,*(FName *)(pFVar13 + 8));
            __return_storage_ptr__ = local_res10;
            pFVar12 = local_a0;
            if (iVar8 < 0) goto LAB_14dfbc6d4;
            pFVar12 = (local_res10->AllocatorInstance).Data;
            pFVar13 = pFVar12 + (longlong)local_res10->ArrayNum * 0x38;
            for (; pFVar12 != pFVar13; pFVar12 = pFVar12 + 0x38) {
              if ((*(short *)pFVar12 == iVar8) && (*(int *)(pFVar12 + 4) == 1)) {
                if (pFVar12 != (FScriptContainerElement *)0x0) goto LAB_14dfbc691;
                break;
              }
            }
            iVar9 = local_res10->ArrayNum;
            if (iVar9 == local_res10->ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x838,&local_res10->AllocatorInstance,&local_res10->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar9 + 1;
            pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 0x38;
            DefaultConstructItems<FHairVertexFactoryTypesPerMaterialData,int>(pFVar12,1);
            *(short *)pFVar12 = (short)iVar8;
            *(undefined4 *)(pFVar12 + 4) = 1;
LAB_14dfbc691:
            local_68.CustomDefaultVertexDeclaration = (FRHIVertexDeclaration *)0x0;
            local_68.VertexFactoryType = &FHairCardsVertexFactory::StaticType;
            TArray<FPSOPrecacheVertexFactoryData,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<FPSOPrecacheVertexFactoryData>
                      ((TArray<FPSOPrecacheVertexFactoryData,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                        *)(pFVar12 + 8),&local_68);
            iVar7 = iVar7 + 1;
            lVar15 = lVar15 + 0x428;
            pFVar12 = local_a0;
          }
        }
      }
      iVar6 = *(int *)(pFVar12 + 0x778);
      iVar7 = 0;
      lVar15 = *(longlong *)(pFVar12 + 0x770);
      lVar16 = (longlong)iVar6 * 0x98 + lVar15;
      while( true ) {
        if (*(int *)(pFVar12 + 0x778) != iVar6) {
          local_a8 = 0;
          `TCheckedPointerIterator<FHairGroupPlatformData::FMeshes::FLOD_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(&local_a8);
        }
        if (lVar15 == lVar16) break;
        if (*(int *)(lVar15 + 8) < 1) {
LAB_14dfbc858:
          iVar7 = iVar7 + 1;
          lVar15 = lVar15 + 0x98;
        }
        else {
          iVar8 = (this->HairGroupsMeshes).ArrayNum;
          pFVar13 = (this->HairGroupsMeshes).AllocatorInstance.Data;
          pFVar14 = pFVar13 + (longlong)iVar8 * 0x80;
          while( true ) {
            if ((this->HairGroupsMeshes).ArrayNum != iVar8) {
              local_a7[0] = 0;
              `TCheckedPointerIterator<FHairGroupsMeshesSourceDescription,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(local_a7);
            }
            pFVar12 = local_a0;
            __return_storage_ptr__ = local_res10;
            if (pFVar13 == pFVar14) goto LAB_14dfbc858;
            if ((*(uint *)(pFVar13 + 0x68) == local_a4) && (*(int *)(pFVar13 + 0x6c) == iVar7))
            break;
            pFVar13 = pFVar13 + 0x80;
          }
          iVar8 = GetMaterialIndex(this,*(FName *)(pFVar13 + 8));
          __return_storage_ptr__ = local_res10;
          pFVar12 = local_a0;
          if (iVar8 < 0) goto LAB_14dfbc858;
          pFVar12 = (local_res10->AllocatorInstance).Data;
          pFVar13 = pFVar12 + (longlong)local_res10->ArrayNum * 0x38;
          for (; pFVar12 != pFVar13; pFVar12 = pFVar12 + 0x38) {
            if ((*(short *)pFVar12 == iVar8) && (*(int *)(pFVar12 + 4) == 2)) {
              if (pFVar12 != (FScriptContainerElement *)0x0) goto LAB_14dfbc80c;
              break;
            }
          }
          iVar9 = local_res10->ArrayNum;
          if (iVar9 == local_res10->ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x838,&local_res10->AllocatorInstance,&local_res10->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar9 + 1;
          pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 0x38;
          DefaultConstructItems<FHairVertexFactoryTypesPerMaterialData,int>(pFVar12,1);
          *(short *)pFVar12 = (short)iVar8;
          *(undefined4 *)(pFVar12 + 4) = 2;
LAB_14dfbc80c:
          local_58.CustomDefaultVertexDeclaration = (FRHIVertexDeclaration *)0x0;
          local_58.VertexFactoryType = &FHairCardsVertexFactory::StaticType;
          TArray<FPSOPrecacheVertexFactoryData,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          ::AddUniqueImpl<FPSOPrecacheVertexFactoryData>
                    ((TArray<FPSOPrecacheVertexFactoryData,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                      *)(pFVar12 + 8),&local_58);
          iVar7 = iVar7 + 1;
          lVar15 = lVar15 + 0x98;
          pFVar12 = local_a0;
        }
      }
      local_a4 = local_a4 + 1;
      local_98 = local_98 + 1;
      local_90 = local_90 + 2000;
      local_88 = local_88 + 0x30;
    } while (local_98 < local_80);
  }
  return __return_storage_ptr__;
}

// CreateDataflowContent @ 14dfbe230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectPtr<UDataflowBaseContent> __thiscall UGroomAsset::CreateDataflowContent(UGroomAsset *this)

{
  int *piVar1;
  code *pcVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  TObjectPtr<UObject>_u_0 this_00;
  longlong *plVar5;
  TObjectPtr<UDataflowBaseContent>_u_0 in_RDX;
  undefined1 auStack_e8 [32];
  TObjectPtr<UObject>_u_0 local_c8 [2];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8[0].DebugPtr = (UObject *)0x0;
  pUVar3 = UDataflowGroomContent::StaticClass();
  piVar1 = &this[-1].HairGroupsPlatformData.ArrayNum;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)piVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = UDataflowGroomContent::StaticClass();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar3);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._16_4_ = 0;
  local_b8._20_4_ = 0;
  local_b8._24_4_ = RF_NoFlags;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = piVar1;
  this_00.DebugPtr = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar5 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UDataflowBaseContent *)this_00.DebugPtr != (UDataflowBaseContent *)0x0)) {
    UE::GC::MarkAsReachable(this_00.DebugPtr);
  }
  this_00.DebugPtr[4].field_0x1a = 0;
  local_c8[0] = (TObjectPtr<UObject>_u_0)piVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (piVar1 != (int *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)piVar1);
  }
  UDataflowBaseContent::SetDataflowOwner
            ((UDataflowBaseContent *)this_00.DebugPtr,(TObjectPtr<UObject> *)&local_c8[0].ObjectPtr)
  ;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (piVar1 != (int *)0x0) {
      UE::GC::MarkAsReachable((UObject *)piVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (piVar1 != (int *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)piVar1);
    }
  }
  *(int **)&this_00.DebugPtr[4].field_0x8 = piVar1;
  UDataflowBaseContent::SetConstructionDirty((UDataflowBaseContent *)this_00.DebugPtr,true);
  UDataflowBaseContent::SetSimulationDirty((UDataflowBaseContent *)this_00.DebugPtr,true);
  pcVar2 = *(code **)(this->_padding_ + 0x10);
  local_c8[0].DebugPtr = this_00.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(this_00.DebugPtr);
  }
  (*pcVar2)(this,local_c8);
  *(TObjectPtr<UObject>_u_0 *)in_RDX = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(this_00.DebugPtr);
  }
  return (TObjectPtr<UDataflowBaseContent>)in_RDX;
}

// CreateDebugData @ 14dfbe400

void __thiscall UGroomAsset::CreateDebugData(UGroomAsset *this)

{
  return;
}

// GenerateClassStripFlags @ 14dfc3d50

uchar __thiscall UGroomAsset::GenerateClassStripFlags(UGroomAsset *this,FArchive *param_1)

{
  return '\0';
}

// GetAssetPathName @ 14dfc5ac0

FName __thiscall UGroomAsset::GetAssetPathName(UGroomAsset *this,int param_1)

{
  int iVar1;
  FName *pFVar2;
  FString *pFVar3;
  int iVar4;
  uint in_register_00000014;
  FName FVar5;
  int in_R8D;
  FName local_res20;
  FString local_28;
  FString local_18;
  
  FVar5.Number = in_register_00000014;
  FVar5.ComparisonIndex.Value = param_1;
  if (in_R8D < 0) {
    pFVar3 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    iVar1 = (pFVar3->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    pFVar2 = ::FName::FName(&local_res20,iVar4,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                            FNAME_Add);
    *(FName *)FVar5 = *pFVar2;
  }
  else {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    ::FString::PrintfImpl(&local_28,L"%s [LOD%d]");
    iVar4 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    pFVar2 = ::FName::FName(&local_res20,iVar4,(wchar_t *)local_28.Data.AllocatorInstance.Data,
                            FNAME_Add);
    *(FName *)FVar5 = *pFVar2;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return FVar5;
}

// GetAssetUserDataArray @ 14dfc5c80

TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> * __thiscall
UGroomAsset::GetAssetUserDataArray(UGroomAsset *this)

{
  return (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)&(this->EffectiveLODBias).ArrayNum;
}

// GetAssetUserDataOfClass @ 14dfc5c90

UAssetUserData * __thiscall
UGroomAsset::GetAssetUserDataOfClass(UGroomAsset *this,TSubclassOf<UAssetUserData> param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UAssetUserData *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < *(int *)&(this->HairGroupsPlatformData).AllocatorInstance.Data) {
    lVar9 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < *(int *)&(this->HairGroupsPlatformData).AllocatorInstance.Data) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UAssetUserData *)(*pcVar2)();
        return pUVar5;
      }
      pUVar5 = *(UAssetUserData **)(lVar9 + *(longlong *)&(this->EffectiveLODBias).ArrayNum);
      if (pUVar5 != (UAssetUserData *)0x0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_14dfc5d3c;
LAB_14dfc5d6a:
          pUVar7 = (UObject *)0x0;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_14dfc5d6a;
          UE::GC::MarkAsReachable(pUVar7);
LAB_14dfc5d3c:
          pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar6 == (UClass *)0x0) goto LAB_14dfc5d6a;
          iVar1 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar1 * 8)
              != &pUVar6->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_14dfc5d6a;
        }
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) +
             (longlong)*(int *)&pUVar7[1].field_0x10 * 8) == &pUVar7[1].field_0x8)) {
          return pUVar5;
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < *(int *)&(this->HairGroupsPlatformData).AllocatorInstance.Data);
  }
  return (UAssetUserData *)0x0;
}

// GetAutoLODBias @ 14dfc5dc0

float __thiscall UGroomAsset::GetAutoLODBias(UGroomAsset *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  fVar4 = 0.0;
  if ((-1 < param_1) && (param_1 < (this->HairGroupsLOD).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->HairGroupsLOD).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar4 = (float)(*pcVar1)();
        return fVar4;
      }
    }
    fVar4 = *(float *)((this->HairGroupsLOD).AllocatorInstance.Data + (longlong)param_1 * 0x18);
  }
  fVar4 = fVar4 + this->AutoLODBias;
  if (__real_3f800000 <= fVar4) {
    fVar4 = __real_3f800000;
  }
  if (fVar4 <= __real_bf800000) {
    fVar4 = __real_bf800000;
  }
  return fVar4;
}

// GetAutoLODBias @ 14dfc5e60

float __thiscall UGroomAsset::GetAutoLODBias(UGroomAsset *this)

{
  return this->AutoLODBias;
}

// GetAutoLODBiasMemberName @ 14dfc5e70

FName __cdecl UGroomAsset::GetAutoLODBiasMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"AutoLODBias");
  return in_RCX;
}

// GetBindingType @ 14dfc6280

EGroomBindingType __thiscall UGroomAsset::GetBindingType(UGroomAsset *this,int param_1,int param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  EGroomBindingType EVar5;
  uint uVar6;
  
  if ((-1 < param_1) && (param_1 < (this->HairGroupsLOD).ArrayNum)) {
    uVar6 = 0;
    if (param_1 < (this->HairGroupsLOD).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    if (((-1 < param_2) &&
        (lVar1 = (longlong)param_1 * 0x18,
        param_2 < *(int *)((this->HairGroupsLOD).AllocatorInstance.Data + lVar1 + 0x10))) &&
       (bVar4 = IsHairStrandsBindingEnable(), bVar4)) {
      uVar6 = 0;
      if (param_1 < (this->HairGroupsLOD).ArrayNum) {
        uVar6 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
      pFVar2 = (this->HairGroupsLOD).AllocatorInstance.Data;
      uVar6 = 0;
      if (param_2 < *(int *)(pFVar2 + lVar1 + 0x10)) {
        uVar6 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
      return *(EGroomBindingType *)
              ((longlong)param_2 * 0x1c + 0x16 + *(longlong *)(pFVar2 + lVar1 + 8));
    }
  }
  return Rigid;
}

// GetDataflowInstance @ 14dfc6920

FDataflowInstance * __thiscall UGroomAsset::GetDataflowInstance(UGroomAsset *this)

{
  return (FDataflowInstance *)&this->_padding_;
}

// GetDataflowInstance @ 14dfc6930

FDataflowInstance * __thiscall UGroomAsset::GetDataflowInstance(UGroomAsset *this)

{
  return (FDataflowInstance *)&this->_padding_;
}

// GetDataflowSettingsMemberName @ 14dfc6940

FName __cdecl UGroomAsset::GetDataflowSettingsMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"DataflowSettings");
  return in_RCX;
}

// GetDeformedGroupSections @ 14dfc6a10

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UGroomAsset::GetDeformedGroupSections(UGroomAsset *this)

{
  return &this->DeformedGroupSections;
}

// GetDeformedGroupSections @ 14dfc6a20

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UGroomAsset::GetDeformedGroupSections(UGroomAsset *this)

{
  return &this->DeformedGroupSections;
}

// GetDeformedGroupSectionsMemberName @ 14dfc6a30

FName __cdecl UGroomAsset::GetDeformedGroupSectionsMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"DeformedGroupSections");
  return in_RCX;
}

// GetDisableBelowMinLodStripping @ 14dfc6a60

FPerPlatformBool __thiscall UGroomAsset::GetDisableBelowMinLodStripping(UGroomAsset *this)

{
  undefined1 *in_RDX;
  
  *in_RDX = (this->DisableBelowMinLodStripping).Default;
  return (FPerPlatformBool)SUB81(in_RDX,0);
}

// GetDisableBelowMinLodStrippingMemberName @ 14dfc6a80

FName __cdecl UGroomAsset::GetDisableBelowMinLodStrippingMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"DisableBelowMinLodStripping");
  return in_RCX;
}

// GetEffectiveLODBias @ 14dfc6ab0

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
UGroomAsset::GetEffectiveLODBias(UGroomAsset *this)

{
  return &this->EffectiveLODBias;
}

// GetEffectiveLODBias @ 14dfc6ac0

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
UGroomAsset::GetEffectiveLODBias(UGroomAsset *this)

{
  return &this->EffectiveLODBias;
}

// GetEffectiveLODBiasMemberName @ 14dfc6ad0

FName __cdecl UGroomAsset::GetEffectiveLODBiasMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"EffectiveLODBias");
  return in_RCX;
}

// GetEnableGlobalInterpolation @ 14dfc6b00

bool __thiscall UGroomAsset::GetEnableGlobalInterpolation(UGroomAsset *this)

{
  return this->EnableGlobalInterpolation;
}

// GetEnableGlobalInterpolationMemberName @ 14dfc6b10

FName __cdecl UGroomAsset::GetEnableGlobalInterpolationMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"EnableGlobalInterpolation");
  return in_RCX;
}

// GetEnableSimulationCache @ 14dfc6b40

bool __thiscall UGroomAsset::GetEnableSimulationCache(UGroomAsset *this)

{
  return this->EnableSimulationCache;
}

// GetEnableSimulationCacheMemberName @ 14dfc6b50

FName __cdecl UGroomAsset::GetEnableSimulationCacheMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"EnableSimulationCache");
  return in_RCX;
}

// GetGeometryType @ 14dfc6b80

EGroomGeometryType __thiscall
UGroomAsset::GetGeometryType(UGroomAsset *this,int param_1,int param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  EGroomGeometryType EVar5;
  uint uVar6;
  
  if ((-1 < param_1) && (param_1 < (this->HairGroupsLOD).ArrayNum)) {
    uVar6 = 0;
    if (param_1 < (this->HairGroupsLOD).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    if ((-1 < param_2) &&
       (lVar1 = (longlong)param_1 * 0x18,
       param_2 < *(int *)((this->HairGroupsLOD).AllocatorInstance.Data + lVar1 + 0x10))) {
      uVar6 = 0;
      if (param_1 < (this->HairGroupsLOD).ArrayNum) {
        uVar6 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
      pFVar2 = (this->HairGroupsLOD).AllocatorInstance.Data;
      uVar6 = 0;
      if (param_2 < *(int *)(pFVar2 + lVar1 + 0x10)) {
        uVar6 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
      return *(EGroomGeometryType *)
              ((longlong)param_2 * 0x1c + 0x15 + *(longlong *)(pFVar2 + lVar1 + 8));
    }
  }
  return Strands;
}

// GetGuideType @ 14dfc6dc0

EGroomGuideType __thiscall UGroomAsset::GetGuideType(UGroomAsset *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  EGroomGuideType EVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->HairGroupsInterpolation).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->HairGroupsInterpolation).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
    }
    return (EGroomGuideType)
           (this->HairGroupsInterpolation).AllocatorInstance.Data[(longlong)param_1 * 0x28 + 8];
  }
  return Generated;
}

// GetHairGroupsCards @ 14dfc6f00

TArray<FHairGroupsCardsSourceDescription,TSizedDefaultAllocator<32>_> * __thiscall
UGroomAsset::GetHairGroupsCards(UGroomAsset *this)

{
  return &this->HairGroupsCards;
}

// GetHairGroupsCards @ 14dfc6f10

TArray<FHairGroupsCardsSourceDescription,TSizedDefaultAllocator<32>_> * __thiscall
UGroomAsset::GetHairGroupsCards(UGroomAsset *this)

{
  return &this->HairGroupsCards;
}

// GetHairGroupsCardsMemberName @ 14dfc6f20

FName __cdecl UGroomAsset::GetHairGroupsCardsMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"HairGroupsCards");
  return in_RCX;
}

// GetHairGroupsInfo @ 14dfc6f50

TArray<FHairGroupInfoWithVisibility,TSizedDefaultAllocator<32>_> * __thiscall
UGroomAsset::GetHairGroupsInfo(UGroomAsset *this)

{
  return &this->HairGroupsInfo;
}

// GetHairGroupsInfo @ 14dfc6f60

TArray<FHairGroupInfoWithVisibility,TSizedDefaultAllocator<32>_> * __thiscall
UGroomAsset::GetHairGroupsInfo(UGroomAsset *this)

{
  return &this->HairGroupsInfo;
}

// GetHairGroupsInfoMemberName @ 14dfc6f70

FName __cdecl UGroomAsset::GetHairGroupsInfoMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"HairGroupsInfo");
  return in_RCX;
}

// GetHairGroupsInterpolation @ 14dfc6fa0

TArray<FHairGroupsInterpolation,TSizedDefaultAllocator<32>_> * __thiscall
UGroomAsset::GetHairGroupsInterpolation(UGroomAsset *this)

{
  return &this->HairGroupsInterpolation;
}

// GetHairGroupsInterpolation @ 14dfc6fb0

TArray<FHairGroupsInterpolation,TSizedDefaultAllocator<32>_> * __thiscall
UGroomAsset::GetHairGroupsInterpolation(UGroomAsset *this)

{
  return &this->HairGroupsInterpolation;
}

// GetHairGroupsInterpolationMemberName @ 14dfc6fc0

FName __cdecl UGroomAsset::GetHairGroupsInterpolationMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"HairGroupsInterpolation");
  return in_RCX;
}

// GetHairGroupsLOD @ 14dfc6ff0

TArray<FHairGroupsLOD,TSizedDefaultAllocator<32>_> * __thiscall
UGroomAsset::GetHairGroupsLOD(UGroomAsset *this)

{
  return &this->HairGroupsLOD;
}

// GetHairGroupsLOD @ 14dfc7000

TArray<FHairGroupsLOD,TSizedDefaultAllocator<32>_> * __thiscall
UGroomAsset::GetHairGroupsLOD(UGroomAsset *this)

{
  return &this->HairGroupsLOD;
}

// GetHairGroupsLODMemberName @ 14dfc7010

FName __cdecl UGroomAsset::GetHairGroupsLODMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"HairGroupsLOD");
  return in_RCX;
}

// GetHairGroupsMaterials @ 14dfc7040

TArray<FHairGroupsMaterial,TSizedDefaultAllocator<32>_> * __thiscall
UGroomAsset::GetHairGroupsMaterials(UGroomAsset *this)

{
  return &this->HairGroupsMaterials;
}

// GetHairGroupsMaterials @ 14dfc7050

TArray<FHairGroupsMaterial,TSizedDefaultAllocator<32>_> * __thiscall
UGroomAsset::GetHairGroupsMaterials(UGroomAsset *this)

{
  return &this->HairGroupsMaterials;
}

// GetHairGroupsMaterialsMemberName @ 14dfc7060

FName __cdecl UGroomAsset::GetHairGroupsMaterialsMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"HairGroupsMaterials");
  return in_RCX;
}

// GetHairGroupsMeshes @ 14dfc7090

TArray<FHairGroupsMeshesSourceDescription,TSizedDefaultAllocator<32>_> * __thiscall
UGroomAsset::GetHairGroupsMeshes(UGroomAsset *this)

{
  return &this->HairGroupsMeshes;
}

// GetHairGroupsMeshes @ 14dfc70a0

TArray<FHairGroupsMeshesSourceDescription,TSizedDefaultAllocator<32>_> * __thiscall
UGroomAsset::GetHairGroupsMeshes(UGroomAsset *this)

{
  return &this->HairGroupsMeshes;
}

// GetHairGroupsMeshesMemberName @ 14dfc70b0

FName __cdecl UGroomAsset::GetHairGroupsMeshesMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"HairGroupsMeshes");
  return in_RCX;
}

// GetHairGroupsPhysics @ 14dfc70e0

TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_> * __thiscall
UGroomAsset::GetHairGroupsPhysics(UGroomAsset *this)

{
  return &this->HairGroupsPhysics;
}

// GetHairGroupsPhysics @ 14dfc70f0

TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_> * __thiscall
UGroomAsset::GetHairGroupsPhysics(UGroomAsset *this)

{
  return &this->HairGroupsPhysics;
}

// GetHairGroupsPhysicsMemberName @ 14dfc7100

FName __cdecl UGroomAsset::GetHairGroupsPhysicsMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"HairGroupsPhysics");
  return in_RCX;
}

// GetHairGroupsPlatformData @ 14dfc7130

TArray<FHairGroupPlatformData,TSizedDefaultAllocator<32>_> * __thiscall
UGroomAsset::GetHairGroupsPlatformData(UGroomAsset *this)

{
  return &this->HairGroupsPlatformData;
}

// GetHairGroupsPlatformData @ 14dfc7140

TArray<FHairGroupPlatformData,TSizedDefaultAllocator<32>_> * __thiscall
UGroomAsset::GetHairGroupsPlatformData(UGroomAsset *this)

{
  return &this->HairGroupsPlatformData;
}

// GetHairGroupsPlatformDataMemberName @ 14dfc7170

FName __cdecl UGroomAsset::GetHairGroupsPlatformDataMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"HairGroupsPlatformData");
  return in_RCX;
}

// GetHairGroupsRendering @ 14dfc71a0

TArray<FHairGroupsRendering,TSizedDefaultAllocator<32>_> * __thiscall
UGroomAsset::GetHairGroupsRendering(UGroomAsset *this)

{
  return &this->HairGroupsRendering;
}

// GetHairGroupsRendering @ 14dfc71b0

TArray<FHairGroupsRendering,TSizedDefaultAllocator<32>_> * __thiscall
UGroomAsset::GetHairGroupsRendering(UGroomAsset *this)

{
  return &this->HairGroupsRendering;
}

// GetHairGroupsRenderingMemberName @ 14dfc71c0

FName __cdecl UGroomAsset::GetHairGroupsRenderingMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"HairGroupsRendering");
  return in_RCX;
}

// GetHairGroupsResources @ 14dfc71f0

TArray<FHairGroupResources,TSizedDefaultAllocator<32>_> * __thiscall
UGroomAsset::GetHairGroupsResources(UGroomAsset *this)

{
  return &this->HairGroupsResources;
}

// GetHairGroupsResources @ 14dfc7200

TArray<FHairGroupResources,TSizedDefaultAllocator<32>_> * __thiscall
UGroomAsset::GetHairGroupsResources(UGroomAsset *this)

{
  return &this->HairGroupsResources;
}

// GetHairInterpolationType @ 14dfc7210

EGroomInterpolationType __thiscall UGroomAsset::GetHairInterpolationType(UGroomAsset *this)

{
  return this->HairInterpolationType;
}

// GetHairInterpolationTypeMemberName @ 14dfc7220

FName __cdecl UGroomAsset::GetHairInterpolationTypeMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"HairInterpolationType");
  return in_RCX;
}

// GetLODCount @ 14dfc74f0

int __thiscall UGroomAsset::GetLODCount(UGroomAsset *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  iVar2 = (this->HairGroupsLOD).ArrayNum;
  pFVar4 = (this->HairGroupsLOD).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0x18;
  iVar5 = -1;
  while( true ) {
    if ((this->HairGroupsLOD).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FHairGroupsLOD_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    iVar3 = *(int *)(pFVar4 + 0x10);
    if (*(int *)(pFVar4 + 0x10) < iVar5) {
      iVar3 = iVar5;
    }
    pFVar4 = pFVar4 + 0x18;
    iVar5 = iVar3;
  }
  return iVar5;
}

// GetLODMode @ 14dfc7570

EGroomLODMode __thiscall UGroomAsset::GetLODMode(UGroomAsset *this)

{
  EGroomLODMode EVar1;
  uint uVar2;
  
  EVar1 = this->LODMode;
  if (EVar1 == Default) {
    uVar2 = GetHairStrandsLODMode();
    EVar1 = (uVar2 != 0) + Manual;
  }
  return EVar1;
}

// GetLODModeMemberName @ 14dfc75a0

FName __cdecl UGroomAsset::GetLODModeMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"LODMode");
  return in_RCX;
}

// GetMaterialIndex @ 14dfc7800

int __thiscall UGroomAsset::GetMaterialIndex(UGroomAsset *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  
  lVar8 = (longlong)(this->HairGroupsMaterials).ArrayNum;
  uVar7 = 0;
  if (0 < lVar8) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar7 < (this->HairGroupsMaterials).ArrayNum) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(FName *)((this->HairGroupsMaterials).AllocatorInstance.Data + lVar6 + 8) == param_1) {
        return uVar7;
      }
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar5 < lVar8);
  }
  return -1;
}

// GetMaterialSlotNames @ 14dfc78c0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UGroomAsset::GetMaterialSlotNames
          (UGroomAsset *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar8 = (this->HairGroupsMaterials).AllocatorInstance.Data;
  iVar1 = (this->HairGroupsMaterials).ArrayNum;
  pFVar10 = pFVar8 + (longlong)iVar1 * 0x10;
  pFVar9 = pFVar8 + 8;
  while( true ) {
    if ((this->HairGroupsMaterials).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FHairGroupsMaterial_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar10) break;
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar2 <= pFVar9) && (pFVar9 < pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    pFVar8 = pFVar8 + 0x10;
    uVar3 = *(undefined8 *)pFVar9;
    pFVar9 = pFVar9 + 0x10;
    *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = uVar3;
  }
  return __return_storage_ptr__;
}

// GetMinLOD @ 14dfc7bd0

FPerPlatformInt __thiscall UGroomAsset::GetMinLOD(UGroomAsset *this)

{
  int *in_RDX;
  
  *in_RDX = (this->MinLOD).Default;
  return (FPerPlatformInt)(int)in_RDX;
}

// GetMinLODMemberName @ 14dfc7bf0

FName __cdecl UGroomAsset::GetMinLODMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"MinLOD");
  return in_RCX;
}

// GetNumHairGroups @ 14dfc7c20

int __thiscall UGroomAsset::GetNumHairGroups(UGroomAsset *this)

{
  return (this->HairGroupsPlatformData).ArrayNum;
}

// GetPrivateStaticClass @ 14dfc8300

UClass * __cdecl UGroomAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomAsset",
               &Z_Registration_Info_UClass_UGroomAsset.InnerSingleton,
               StaticRegisterNativesUGroomAsset,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGroomAsset>,InternalVTableHelperCtorCaller<UGroomAsset>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomAsset.InnerSingleton;
}

// GetResourceSizeEx @ 14dfc87f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UGroomAsset::GetResourceSizeEx(UGroomAsset *this,FResourceSizeEx *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  ulong64 uVar17;
  FHairStrandsBulkData *pFVar18;
  longlong lVar19;
  longlong *plVar20;
  FScriptContainerElement *pFVar21;
  longlong *plVar22;
  int *piVar23;
  FScriptContainerElement *pFVar24;
  longlong lVar25;
  FScriptContainerElement *pFVar26;
  FHairStrandsBulkData *pFVar27;
  undefined1 local_res18 [8];
  uint local_res20;
  
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->HairGroupsRendering).ArrayMax * 0x30);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->HairGroupsPhysics).ArrayMax * 0x2e8);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->HairGroupsInterpolation).ArrayMax * 0x28);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->HairGroupsLOD).ArrayMax * 0x18);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->HairGroupsCards).ArrayMax * 0xa0);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->HairGroupsMeshes).ArrayMax << 7);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->HairGroupsMaterials).ArrayMax << 4);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->HairGroupsPlatformData).ArrayMax * 2000);
  uVar11 = (this->HairGroupsPlatformData).ArrayNum;
  uVar16 = (ulonglong)(int)uVar11;
  pFVar27 = (FHairStrandsBulkData *)(this->HairGroupsPlatformData).AllocatorInstance.Data;
  piVar23 = (int *)&pFVar27[2].Data.PointToCurve.Data.field_0x10;
  pFVar18 = (FHairStrandsBulkData *)((longlong)pFVar27 + uVar16 * 2000);
  while( true ) {
    if ((this->HairGroupsPlatformData).ArrayNum != (int)uVar16) {
      `TCheckedPointerIterator<FHairGroupPlatformData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar27 == pFVar18) break;
    uVar8 = ::GetDataSize(pFVar27);
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(ulonglong)uVar8);
    uVar8 = FHairGroupPlatformData::FStrands::GetDataSize((FStrands *)(piVar23 + -0x12e));
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(ulonglong)uVar8);
    uVar8 = piVar23[-4];
    uVar16 = (ulonglong)(int)uVar8;
    local_res20 = 0;
    lVar25 = *(longlong *)(piVar23 + -6);
    lVar19 = uVar16 * 0x428 + lVar25;
    while( true ) {
      if (piVar23[-4] != (int)uVar16) {
        `TCheckedPointerIterator<FHairGroupPlatformData::FCards::FLOD_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res18);
      }
      if (lVar25 == lVar19) break;
      iVar15 = *(int *)(lVar25 + 0x2c);
      iVar12 = *(int *)(lVar25 + 0x3c);
      iVar13 = *(int *)(lVar25 + 0x4c);
      iVar14 = *(int *)(lVar25 + 0x6c);
      iVar6 = *(int *)(lVar25 + 0x7c);
      iVar7 = *(int *)(lVar25 + 0xcc);
      uVar9 = ::GetDataSize((FHairStrandsBulkData *)(lVar25 + 0xd0));
      uVar10 = ::GetDataSize((FHairStrandsInterpolationBulkData *)(lVar25 + 0x390));
      local_res20 = local_res20 +
                    uVar10 + uVar9 + (iVar7 + (iVar13 + iVar15) * 4 + iVar6 + iVar14 + iVar12) * 4;
      uVar16 = (ulonglong)uVar8;
      lVar25 = lVar25 + 0x428;
    }
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(ulonglong)local_res20);
    iVar15 = *piVar23;
    uVar8 = 0;
    lVar25 = *(longlong *)(piVar23 + -2);
    lVar19 = (longlong)iVar15 * 0x98 + lVar25;
    while( true ) {
      if (*piVar23 != iVar15) {
        `TCheckedPointerIterator<FHairGroupPlatformData::FMeshes::FLOD_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res18);
      }
      if (lVar25 == lVar19) break;
      piVar1 = (int *)(lVar25 + 0x2c);
      piVar2 = (int *)(lVar25 + 0xc);
      piVar3 = (int *)(lVar25 + 0x4c);
      piVar4 = (int *)(lVar25 + 0x3c);
      piVar5 = (int *)(lVar25 + 0x1c);
      lVar25 = lVar25 + 0x98;
      uVar8 = uVar8 + (*piVar3 + (*piVar1 + *piVar2) * 4 + *piVar4 + *piVar5) * 4;
    }
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(ulonglong)uVar8);
    pFVar27 = (FHairStrandsBulkData *)&pFVar27[2].Data.CurveMapping;
    uVar16 = (ulonglong)uVar11;
    piVar23 = piVar23 + 500;
  }
  local_res20 = (this->HairGroupsResources).ArrayNum;
  uVar16 = (ulonglong)(int)local_res20;
  pFVar24 = (this->HairGroupsResources).AllocatorInstance.Data;
  pFVar21 = pFVar24 + 0x48;
  pFVar26 = pFVar24 + uVar16 * 0x58;
LAB_14dfc8a90:
  if ((this->HairGroupsResources).ArrayNum != (int)uVar16) {
    `TCheckedPointerIterator<FHairGroupResources,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res18);
  }
  if (pFVar24 == pFVar26) {
    return;
  }
  uVar11 = 0;
  if (*(FHairStrandsRestResource **)pFVar24 != (FHairStrandsRestResource *)0x0) {
    uVar11 = FHairStrandsRestResource::GetResourcesSize(*(FHairStrandsRestResource **)pFVar24);
  }
  FResourceSizeEx::AddDedicatedVideoMemoryBytes(param_1,(ulonglong)uVar11);
  uVar17 = 0;
  if (*(FHairStrandsRestResource **)(pFVar21 + -0x40) != (FHairStrandsRestResource *)0x0) {
    uVar11 = FHairStrandsRestResource::GetResourcesSize
                       (*(FHairStrandsRestResource **)(pFVar21 + -0x40));
    uVar17 = (ulong64)uVar11;
  }
  lVar25 = *(longlong *)(pFVar21 + -0x38);
  if (lVar25 != 0) {
    lVar19 = *(longlong *)(lVar25 + 0x60);
    if (lVar19 == 0) {
      iVar15 = 0;
    }
    else {
      iVar15 = *(int *)(lVar19 + 0x14) * *(int *)(lVar19 + 0x10);
    }
    lVar25 = *(longlong *)(lVar25 + 0x80);
    if (lVar25 == 0) {
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)(lVar25 + 0x14) * *(int *)(lVar25 + 0x10);
    }
    uVar17 = (ulong64)(uint)((int)uVar17 + iVar12 + iVar15);
  }
  lVar25 = *(longlong *)(pFVar21 + -0x30);
  if (lVar25 != 0) {
    lVar19 = *(longlong *)(lVar25 + 0x60);
    if (lVar19 == 0) {
      iVar15 = 0;
    }
    else {
      iVar15 = *(int *)(lVar19 + 0x14) * *(int *)(lVar19 + 0x10);
    }
    lVar19 = *(longlong *)(lVar25 + 0x80);
    if (lVar19 == 0) {
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)(lVar19 + 0x14) * *(int *)(lVar19 + 0x10);
    }
    lVar25 = *(longlong *)(lVar25 + 0xa0);
    if (lVar25 == 0) {
      iVar13 = 0;
    }
    else {
      iVar13 = *(int *)(lVar25 + 0x14) * *(int *)(lVar25 + 0x10);
    }
    uVar17 = (ulong64)(uint)((int)uVar17 + iVar13 + iVar12 + iVar15);
  }
  lVar25 = *(longlong *)(pFVar21 + -0x28);
  if (lVar25 != 0) {
    lVar19 = *(longlong *)(lVar25 + 0x60);
    if (lVar19 == 0) {
      iVar15 = 0;
    }
    else {
      iVar15 = *(int *)(lVar19 + 0x14) * *(int *)(lVar19 + 0x10);
    }
    lVar25 = *(longlong *)(lVar25 + 0x80);
    if (lVar25 == 0) {
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)(lVar25 + 0x14) * *(int *)(lVar25 + 0x10);
    }
    uVar17 = (ulong64)(uint)((int)uVar17 + iVar12 + iVar15);
  }
  FResourceSizeEx::AddDedicatedVideoMemoryBytes(param_1,uVar17);
  iVar15 = *(int *)(pFVar21 + -0x10);
  uVar11 = 0;
  plVar22 = *(longlong **)(pFVar21 + -0x18);
  plVar20 = plVar22 + (longlong)iVar15 * 6;
LAB_14dfc8bc8:
  do {
    if (*(int *)(pFVar21 + -0x10) != iVar15) {
      `TCheckedPointerIterator<FHairGroupResources::FCards::FLOD_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (plVar22 == plVar20) break;
    iVar12 = 0;
    if (*plVar22 != 0) {
      lVar25 = *(longlong *)(*plVar22 + 0x1d8);
      iVar12 = (*(int *)(lVar25 + 0x7c) + (*(int *)(lVar25 + 0x4c) + *(int *)(lVar25 + 0x2c)) * 4 +
                *(int *)(lVar25 + 0x5c) + *(int *)(lVar25 + 0x3c)) * 4;
    }
    if (plVar22[1] != 0) {
      lVar25 = *(longlong *)(plVar22[1] + 0x60);
      if (lVar25 == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = *(int *)(lVar25 + 0x14) * *(int *)(lVar25 + 0x10);
      }
      iVar12 = iVar12 + iVar13;
    }
    if ((FHairStrandsRestResource *)plVar22[2] != (FHairStrandsRestResource *)0x0) {
      uVar8 = FHairStrandsRestResource::GetResourcesSize((FHairStrandsRestResource *)plVar22[2]);
      iVar12 = iVar12 + uVar8;
    }
    lVar25 = plVar22[3];
    if (lVar25 != 0) {
      lVar19 = *(longlong *)(lVar25 + 0x60);
      if (lVar19 == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = *(int *)(lVar19 + 0x14) * *(int *)(lVar19 + 0x10);
      }
      lVar25 = *(longlong *)(lVar25 + 0x80);
      if (lVar25 == 0) {
        iVar14 = 0;
      }
      else {
        iVar14 = *(int *)(lVar25 + 0x14) * *(int *)(lVar25 + 0x10);
      }
      iVar12 = iVar12 + iVar14 + iVar13;
    }
    lVar25 = plVar22[4];
    if (lVar25 != 0) {
      lVar19 = *(longlong *)(lVar25 + 0x60);
      if (lVar19 == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = *(int *)(lVar19 + 0x14) * *(int *)(lVar19 + 0x10);
      }
      lVar25 = *(longlong *)(lVar25 + 0x80);
      if (lVar25 != 0) {
        uVar11 = uVar11 + iVar12 + *(int *)(lVar25 + 0x14) * *(int *)(lVar25 + 0x10) + iVar13;
        plVar22 = plVar22 + 6;
        goto LAB_14dfc8bc8;
      }
      iVar12 = iVar12 + iVar13;
    }
    uVar11 = uVar11 + iVar12;
    plVar22 = plVar22 + 6;
  } while( true );
  FResourceSizeEx::AddDedicatedVideoMemoryBytes(param_1,(ulonglong)uVar11);
  iVar15 = *(int *)pFVar21;
  uVar11 = 0;
  plVar20 = *(longlong **)(pFVar21 + -8);
  plVar22 = plVar20 + (longlong)iVar15 * 3;
LAB_14dfc8cf0:
  do {
    if (*(int *)pFVar21 != iVar15) {
      `TCheckedPointerIterator<FHairGroupResources::FMeshes::FLOD_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (plVar20 == plVar22) break;
    iVar12 = 0;
    if (*plVar20 != 0) {
      lVar25 = *(longlong *)(*plVar20 + 0x1a0);
      iVar12 = (*(int *)(lVar25 + 0x4c) + (*(int *)(lVar25 + 0x2c) + *(int *)(lVar25 + 0xc)) * 4 +
                *(int *)(lVar25 + 0x3c) + *(int *)(lVar25 + 0x1c)) * 4;
    }
    lVar25 = plVar20[1];
    if (lVar25 != 0) {
      lVar19 = *(longlong *)(lVar25 + 0x60);
      if (lVar19 == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = *(int *)(lVar19 + 0x14) * *(int *)(lVar19 + 0x10);
      }
      lVar25 = *(longlong *)(lVar25 + 0x80);
      if (lVar25 != 0) {
        uVar11 = uVar11 + iVar12 + *(int *)(lVar25 + 0x14) * *(int *)(lVar25 + 0x10) + iVar13;
        plVar20 = plVar20 + 3;
        goto LAB_14dfc8cf0;
      }
      iVar12 = iVar12 + iVar13;
    }
    uVar11 = uVar11 + iVar12;
    plVar20 = plVar20 + 3;
  } while( true );
  FResourceSizeEx::AddDedicatedVideoMemoryBytes(param_1,(ulonglong)uVar11);
  uVar16 = (ulonglong)local_res20;
  pFVar24 = pFVar24 + 0x58;
  pFVar21 = pFVar21 + 0x58;
  goto LAB_14dfc8a90;
}

// GetRiggedSkeletalMesh @ 14dfc97d0

USkeletalMesh * __thiscall UGroomAsset::GetRiggedSkeletalMesh(UGroomAsset *this)

{
  return (this->RiggedSkeletalMesh).field0_0x0.DebugPtr;
}

// GetRiggedSkeletalMeshMemberName @ 14dfc97e0

FName __cdecl UGroomAsset::GetRiggedSkeletalMeshMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"RiggedSkeletalMesh");
  return in_RCX;
}

// HasDebugData @ 14dfcacf0

bool __thiscall UGroomAsset::HasDebugData(UGroomAsset *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = (this->HairGroupsPlatformData).ArrayNum;
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->HairGroupsPlatformData).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      if (*(int *)((this->HairGroupsPlatformData).AllocatorInstance.Data +
                  (longlong)(int)uVar6 * 2000 + 0x7c8) < 1) {
        return false;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  return true;
}

// HasGeometryType @ 14dfcadb0

bool __thiscall
UGroomAsset::HasGeometryType(UGroomAsset *this,uint param_1,EGroomGeometryType param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (((uint)(this->HairGroupsLOD).ArrayNum <= param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GroupIndex < uint32(GetHairGroupsLOD().Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomAsset.cpp"
                         ,0x395,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar6 = 0;
  if ((int)param_1 < (this->HairGroupsLOD).ArrayNum) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar8 = 0;
  lVar1 = (longlong)(int)param_1 * 0x18;
  uVar6 = *(uint *)((this->HairGroupsLOD).AllocatorInstance.Data + lVar1 + 0x10);
  if (uVar6 != 0) {
    do {
      uVar7 = 0;
      if ((int)param_1 < (this->HairGroupsLOD).ArrayNum) {
        uVar7 = ~param_1 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (this->HairGroupsLOD).AllocatorInstance.Data;
      uVar7 = 0;
      if ((int)uVar8 < *(int *)(pFVar2 + lVar1 + 0x10)) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (*(EGroomGeometryType *)
           ((longlong)(int)uVar8 * 0x1c + 0x15 + *(longlong *)(pFVar2 + lVar1 + 8)) == param_2) {
        return true;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar6);
  }
  return false;
}

// HasGeometryType @ 14dfcaf60

bool __thiscall UGroomAsset::HasGeometryType(UGroomAsset *this,EGroomGeometryType param_1)

{
  longlong lVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar2 = (this->HairGroupsLOD).ArrayNum;
  uVar10 = 0;
  if (uVar2 != 0) {
    do {
      if (((uint)(this->HairGroupsLOD).ArrayNum <= uVar10) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("GroupIndex < uint32(GetHairGroupsLOD().Num())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomAsset.cpp"
                             ,0x395,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      uVar7 = 0;
      if ((int)uVar10 < (this->HairGroupsLOD).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      uVar9 = 0;
      lVar1 = (longlong)(int)uVar10 * 0x18;
      uVar7 = *(uint *)((this->HairGroupsLOD).AllocatorInstance.Data + lVar1 + 0x10);
      if (uVar7 != 0) {
        do {
          uVar8 = 0;
          if ((int)uVar10 < (this->HairGroupsLOD).ArrayNum) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          pFVar3 = (this->HairGroupsLOD).AllocatorInstance.Data;
          uVar8 = 0;
          if ((int)uVar9 < *(int *)(pFVar3 + lVar1 + 0x10)) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if (*(EGroomGeometryType *)
               ((longlong)(int)uVar9 * 0x1c + 0x15 + *(longlong *)(pFVar3 + lVar1 + 8)) == param_1)
          {
            return true;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar7);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar2);
  }
  return false;
}

// InitCardsResources @ 14dfcbb10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UGroomAsset::InitCardsResources(UGroomAsset *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  FHairCardsRestResource *this_00;
  FHairCardsRestResource *pFVar7;
  FHairCardsInterpolationResource *this_01;
  FHairCardsInterpolationResource *pFVar8;
  FHairStrandsRestResource *this_02;
  FHairStrandsRestResource *pFVar9;
  FHairStrandsInterpolationResource *this_03;
  FHairStrandsInterpolationResource *pFVar10;
  void *_Dst;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong *plVar18;
  FHairCardsBulkData *pFVar19;
  FHairResourceName local_res8 [8];
  undefined1 local_res10 [8];
  FLLMScope local_res18 [2];
  uint local_res20;
  FName local_80;
  FName local_78;
  FScriptContainerElement *local_70;
  FScriptContainerElement *local_68;
  FScriptContainerElement *local_60;
  FMemScope local_58 [3];
  
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_Groom.UniqueName,false,None,Default,true);
  local_78 = LLMTagDeclaration_Groom.UniqueName;
  FMemScope::FMemScope(local_58,&local_78,true);
  uVar1 = (this->HairGroupsPlatformData).ArrayNum;
  uVar16 = 0;
  if (uVar1 != 0) {
    do {
      if ((((int)uVar16 < 0) || ((this->HairGroupsPlatformData).ArrayNum <= (int)uVar16)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetHairGroupsPlatformData().IsValidIndex(GroupIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomAsset.cpp"
                             ,0xd8f,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ReleaseCardsResource(this,uVar16);
      uVar11 = ~uVar16 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar16 < (this->HairGroupsPlatformData).ArrayNum) {
        uVar4 = uVar11;
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
      lVar14 = (longlong)(int)uVar16;
      pFVar12 = (this->HairGroupsPlatformData).AllocatorInstance.Data + lVar14 * 2000;
      uVar4 = 0;
      if ((int)uVar16 < (this->HairGroupsResources).ArrayNum) {
        uVar4 = uVar11;
      }
      local_60 = pFVar12;
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
      pFVar15 = (this->HairGroupsResources).AllocatorInstance.Data;
      uVar4 = 0;
      if ((int)uVar16 < (this->HairGroupsLOD).ArrayNum) {
        uVar4 = uVar11;
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
      uVar4 = *(uint *)((this->HairGroupsLOD).AllocatorInstance.Data + lVar14 * 0x18 + 0x10);
      local_res20 = uVar4;
      if ((*(uint *)(pFVar12 + 0x768) != uVar4) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("uint32(GroupData.Cards.LODs.Num()) == LODCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomAsset.cpp"
                             ,0xd9a,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar13 = pFVar15 + lVar14 * 0x58 + 0x30;
      iVar6 = *(int *)(pFVar15 + lVar14 * 0x58 + 0x38);
      pFVar17 = pFVar15 + lVar14 * 0x58 + 0x38;
      local_70 = pFVar13;
      local_68 = pFVar17;
      if (iVar6 < (int)uVar4) {
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x30,8,uVar4 - iVar6,(ForAnyElementType *)pFVar13,(int *)pFVar17,
                           (int *)(pFVar15 + lVar14 * 0x58 + 0x3c));
        DefaultConstructItems<FHairGroupResources::FCards::FLOD,int>
                  ((void *)(*(longlong *)&pFVar13->field_0x0 + (longlong)iVar5 * 0x30),uVar4 - iVar6
                  );
      }
      else {
        if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
        }
        if ((int)uVar4 < iVar6) {
          uVar11 = iVar6 - uVar4;
          if (((int)(uVar11 | uVar4) < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (uVar11 != 0) {
            _Dst = (void *)(*(longlong *)&pFVar13->field_0x0 + (longlong)(int)uVar4 * 0x30);
            iVar6 = (*(int *)pFVar17 - uVar11) - uVar4;
            if (iVar6 != 0) {
              memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar11 * 0x30),
                      (longlong)iVar6 * 0x30);
            }
            *(uint *)pFVar17 = *(int *)pFVar17 - uVar11;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,(ForAnyElementType *)pFVar13,*(int *)pFVar17,
                       (int *)(pFVar15 + lVar14 * 0x58 + 0x3c));
          }
        }
      }
      bVar3 = IsHairStrandsEnabled(Cards,SP_NumPlatforms);
      if (((bVar3) && ((this->HairGroupsCards).ArrayNum != 0)) && (uVar11 = 0, uVar4 != 0)) {
        do {
          uVar4 = 0;
          if ((int)uVar11 < *(int *)(pFVar12 + 0x768)) {
            uVar4 = ~uVar11 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar19 = (FHairCardsBulkData *)
                    ((longlong)(int)uVar11 * 0x428 + *(longlong *)(pFVar12 + 0x760));
          uVar4 = 0;
          if ((int)uVar11 < *(int *)pFVar17) {
            uVar4 = ~uVar11 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar6 = (this->HairGroupsCards).ArrayNum;
          pFVar12 = (this->HairGroupsCards).AllocatorInstance.Data;
          plVar18 = (longlong *)(*(longlong *)&local_70->field_0x0 + (longlong)(int)uVar11 * 0x30);
          pFVar15 = pFVar12 + (longlong)iVar6 * 0xa0;
          while( true ) {
            if ((this->HairGroupsCards).ArrayNum != iVar6) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<FHairGroupsCardsSourceDescription,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res10);
            }
            if (pFVar12 == pFVar15) goto LAB_14dfcc07a;
            if ((*(uint *)(pFVar12 + 0x80) == uVar16) && (*(uint *)(pFVar12 + 0x84) == uVar11))
            break;
            pFVar12 = pFVar12 + 0xa0;
          }
          if ((pFVar12 != (FScriptContainerElement *)0x0) &&
             ((*plVar18 == 0 && (0 < (pFVar19->Positions).ArrayNum)))) {
            GetAssetPathName(this,(int)&local_80);
            this_00 = ::operator_new(0x1e0);
            pFVar7 = (FHairCardsRestResource *)0x0;
            if (this_00 != (FHairCardsRestResource *)0x0) {
              pFVar7 = FHairCardsRestResource::FHairCardsRestResource
                                 (this_00,pFVar19,local_res8,&local_80);
            }
            *plVar18 = (longlong)pFVar7;
            this_01 = ::operator_new(0x88);
            pFVar8 = (FHairCardsInterpolationResource *)0x0;
            if (this_01 != (FHairCardsInterpolationResource *)0x0) {
              pFVar8 = FHairCardsInterpolationResource::FHairCardsInterpolationResource
                                 (this_01,(FHairCardsInterpolationBulkData *)(pFVar19 + 1),
                                  local_res8,&local_80);
            }
            plVar18[1] = (longlong)pFVar8;
            this_02 = ::operator_new(0x1f8);
            pFVar9 = (FHairStrandsRestResource *)0x0;
            if (this_02 != (FHairStrandsRestResource *)0x0) {
              pFVar9 = FHairStrandsRestResource::FHairStrandsRestResource
                                 (this_02,(FHairStrandsBulkData *)&pFVar19[1].CoverageTexture,Cards,
                                  local_res8,&local_80);
            }
            plVar18[2] = (longlong)pFVar9;
            this_03 = ::operator_new(0xa8);
            pFVar10 = (FHairStrandsInterpolationResource *)0x0;
            if (this_03 != (FHairStrandsInterpolationResource *)0x0) {
              pFVar10 = FHairStrandsInterpolationResource::FHairStrandsInterpolationResource
                                  (this_03,(FHairStrandsInterpolationBulkData *)
                                           ((longlong)&pFVar19[4].Header.BoundingBox.Min.field0_0x0
                                           + 0x10),local_res8,&local_80);
            }
            plVar18[3] = (longlong)pFVar10;
            BeginInitResource((FRenderResource *)*plVar18,(FRenderCommandPipe *)0x0);
            BeginInitResource((FRenderResource *)plVar18[1],(FRenderCommandPipe *)0x0);
            BeginInitResource((FRenderResource *)plVar18[2],(FRenderCommandPipe *)0x0);
            BeginInitResource((FRenderResource *)plVar18[3],(FRenderCommandPipe *)0x0);
            InitAtlasTexture<FHairCardsRestResource>
                      ((FHairCardsRestResource *)*plVar18,
                       (FHairGroupCardsTextures *)(pFVar12 + 0x30),(bool)pFVar12[0x20]);
          }
LAB_14dfcc07a:
          uVar11 = uVar11 + 1;
          pFVar12 = local_60;
          pFVar17 = local_68;
        } while (uVar11 < local_res20);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar1);
  }
  FMemScope::~FMemScope(local_58);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// InitGuideResources @ 14dfcc0e0

void __thiscall UGroomAsset::InitGuideResources(UGroomAsset *this)

{
  return;
}

// InitMeshesResources @ 14dfcc320

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UGroomAsset::InitMeshesResources(UGroomAsset *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  FHairMeshesRestResource *this_00;
  FName FVar9;
  FHairMeshesRestResource *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FHairMeshesBulkData *pFVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  FHairResourceName local_res10 [8];
  FLLMScope local_res18 [2];
  uint local_res20;
  FName local_70;
  FScriptContainerElement *local_68;
  FScriptContainerElement *local_60;
  FMemScope local_58;
  undefined1 local_50 [16];
  
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_Groom.UniqueName,false,None,Default,true);
  local_70 = LLMTagDeclaration_Groom.UniqueName;
  FMemScope::FMemScope(&local_58,&local_70,true);
  local_res20 = (this->HairGroupsPlatformData).ArrayNum;
  uVar16 = 0;
  if (local_res20 != 0) {
    do {
      if ((((int)uVar16 < 0) || ((this->HairGroupsPlatformData).ArrayNum <= (int)uVar16)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetHairGroupsPlatformData().IsValidIndex(GroupIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomAsset.cpp"
                             ,0xdd3,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ReleaseMeshesResource(this,uVar16);
      uVar11 = ~uVar16 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar16 < (this->HairGroupsPlatformData).ArrayNum) {
        uVar5 = uVar11;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar14 = (longlong)(int)uVar16;
      pFVar2 = (this->HairGroupsPlatformData).AllocatorInstance.Data;
      uVar5 = 0;
      if ((int)uVar16 < (this->HairGroupsResources).ArrayNum) {
        uVar5 = uVar11;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar12 = (this->HairGroupsResources).AllocatorInstance.Data;
      uVar5 = 0;
      if ((int)uVar16 < (this->HairGroupsLOD).ArrayNum) {
        uVar5 = uVar11;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar5 = *(uint *)((this->HairGroupsLOD).AllocatorInstance.Data + lVar14 * 0x18 + 0x10);
      if ((*(uint *)(pFVar2 + lVar14 * 2000 + 0x778) != uVar5) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("uint32(GroupData.Meshes.LODs.Num()) == LODCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomAsset.cpp"
                             ,0xdde,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar15 = pFVar12 + lVar14 * 0x58 + 0x40;
      iVar7 = *(int *)(pFVar12 + lVar14 * 0x58 + 0x48);
      pFVar1 = pFVar12 + lVar14 * 0x58 + 0x48;
      local_68 = pFVar1;
      local_60 = pFVar15;
      if (iVar7 < (int)uVar5) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,8,uVar5 - iVar7,(ForAnyElementType *)pFVar15,(int *)pFVar1,
                           (int *)(pFVar12 + lVar14 * 0x58 + 0x4c));
        DefaultConstructItems<FHairGroupResources::FMeshes::FLOD,int>
                  (*(FScriptContainerElement **)&pFVar15->field_0x0 + (longlong)iVar6 * 0x18,
                   uVar5 - iVar7);
      }
      else {
        if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
        }
        if ((int)uVar5 < iVar7) {
          uVar11 = iVar7 - uVar5;
          if (((int)(uVar11 | uVar5) < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (uVar11 != 0) {
            iVar7 = (*(int *)pFVar1 - uVar11) - uVar5;
            if (iVar7 != 0) {
              memmove(*(FScriptContainerElement **)&pFVar15->field_0x0 + (longlong)(int)uVar5 * 0x18
                      ,*(FScriptContainerElement **)&pFVar15->field_0x0 +
                       (longlong)(int)uVar5 * 0x18 + (longlong)(int)uVar11 * 0x18,
                      (longlong)iVar7 * 0x18);
            }
            *(uint *)pFVar1 = *(int *)pFVar1 - uVar11;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,(ForAnyElementType *)pFVar15,*(int *)pFVar1,
                       (int *)(pFVar12 + lVar14 * 0x58 + 0x4c));
          }
        }
      }
      bVar4 = IsHairStrandsEnabled(Meshes,SP_NumPlatforms);
      if (((bVar4) && ((this->HairGroupsMeshes).ArrayNum != 0)) && (uVar11 = 0, uVar5 != 0)) {
        do {
          iVar7 = (this->HairGroupsMeshes).ArrayNum;
          pFVar12 = (this->HairGroupsMeshes).AllocatorInstance.Data;
          pFVar15 = pFVar12 + (longlong)iVar7 * 0x80;
          while( true ) {
            if ((this->HairGroupsMeshes).ArrayNum != iVar7) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<FHairGroupsMeshesSourceDescription,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(local_res8);
            }
            if (pFVar12 == pFVar15) goto LAB_14dfcc7cc;
            if ((*(uint *)(pFVar12 + 0x68) == uVar16) && (*(uint *)(pFVar12 + 0x6c) == uVar11))
            break;
            pFVar12 = pFVar12 + 0x80;
          }
          if (pFVar12 != (FScriptContainerElement *)0x0) {
            uVar8 = 0;
            if ((int)uVar11 < *(int *)(pFVar2 + lVar14 * 2000 + 0x778)) {
              uVar8 = ~uVar11 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar13 = (FHairMeshesBulkData *)
                      ((longlong)(int)uVar11 * 0x98 + *(longlong *)(pFVar2 + lVar14 * 2000 + 0x770))
            ;
            uVar8 = 0;
            if ((int)uVar11 < *(int *)local_68) {
              uVar8 = ~uVar11 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar15 = *(FScriptContainerElement **)&local_60->field_0x0;
            if (0 < (pFVar13->Positions).ArrayNum) {
              this_00 = ::operator_new(0x1a8);
              pFVar10 = (FHairMeshesRestResource *)0x0;
              if (this_00 != (FHairMeshesRestResource *)0x0) {
                FVar9 = GetAssetPathName(this,(int)local_50);
                pFVar10 = FHairMeshesRestResource::FHairMeshesRestResource
                                    (this_00,pFVar13,local_res10,(FName *)FVar9);
              }
              *(FHairMeshesRestResource **)(pFVar15 + (longlong)(int)uVar11 * 0x18) = pFVar10;
              BeginInitResource((FRenderResource *)pFVar10,(FRenderCommandPipe *)0x0);
              InitAtlasTexture<FHairMeshesRestResource>
                        (*(FHairMeshesRestResource **)(pFVar15 + (longlong)(int)uVar11 * 0x18),
                         (FHairGroupCardsTextures *)(pFVar12 + 0x18),false);
            }
          }
LAB_14dfcc7cc:
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar5);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < local_res20);
  }
  FMemScope::~FMemScope(&local_58);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// InitResources @ 14dfccde0

void __thiscall UGroomAsset::InitResources(UGroomAsset *this)

{
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Groom.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_Groom.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  InitStrandsResources(this);
  InitCardsResources(this);
  InitMeshesResources(this);
  this->bIsInitialized = true;
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// InitStrandsResources @ 14dfcce70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UGroomAsset::InitStrandsResources(UGroomAsset *this)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FString *pFVar8;
  FName *pFVar9;
  FHairStrandsRestResource *this_00;
  FHairStrandsRestResource *pFVar10;
  FHairStrandsClusterResource *this_01;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  FHairStrandsRestResource *pFVar14;
  FHairResourceName local_res10 [8];
  FName local_res18;
  FName local_res20;
  FString local_48;
  
  bVar6 = IsHairStrandsEnabled(Strands,SP_NumPlatforms);
  if (bVar6) {
    pFVar8 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0);
    pFVar14 = (FHairStrandsRestResource *)0x0;
    iVar1 = (pFVar8->Data).ArrayNum;
    iVar11 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar11 = 0;
    }
    pFVar9 = ::FName::FName(&local_res20,iVar11,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                            FNAME_Add);
    local_res18 = *pFVar9;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    uVar2 = (this->HairGroupsPlatformData).ArrayNum;
    pFVar10 = pFVar14;
    if (uVar2 != 0) {
      do {
        uVar12 = (uint)pFVar10;
        uVar7 = 0;
        if ((int)uVar12 < (this->HairGroupsPlatformData).ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar13 = (longlong)(int)uVar12;
        pFVar3 = (this->HairGroupsPlatformData).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar12 < (this->HairGroupsResources).ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->HairGroupsResources).AllocatorInstance.Data;
        if (*(int *)(pFVar3 + lVar13 * 2000 + 0x2cc) != 0) {
          this_00 = ::operator_new(0x1f8);
          pFVar10 = pFVar14;
          if (this_00 != (FHairStrandsRestResource *)0x0) {
            pFVar10 = FHairStrandsRestResource::FHairStrandsRestResource
                                (this_00,(FHairStrandsBulkData *)(pFVar3 + lVar13 * 2000 + 0x2c0),
                                 Strands,local_res10,&local_res18);
          }
          *(FHairStrandsRestResource **)(pFVar4 + lVar13 * 0x58 + 8) = pFVar10;
          this_01 = ::operator_new(200);
          pFVar10 = pFVar14;
          if (this_01 != (FHairStrandsClusterResource *)0x0) {
            pFVar10 = (FHairStrandsRestResource *)
                      FHairStrandsClusterResource::FHairStrandsClusterResource
                                (this_01,(FHairStrandsClusterBulkData *)
                                         (pFVar3 + lVar13 * 2000 + 0x610),local_res10,&local_res18);
          }
          *(FHairStrandsRestResource **)(pFVar4 + lVar13 * 0x58 + 0x18) = pFVar10;
        }
        pFVar10 = (FHairStrandsRestResource *)(ulonglong)(uVar12 + 1);
      } while (uVar12 + 1 < uVar2);
    }
  }
  return;
}

// IsDeformationEnable @ 14dfcf930

bool __thiscall UGroomAsset::IsDeformationEnable(UGroomAsset *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if ((param_1 < 0) || ((this->HairGroupsInterpolation).ArrayNum <= param_1)) {
LAB_14dfcf9c7:
    if ((-1 < param_1) && (param_1 < (this->HairGroupsPhysics).ArrayNum)) {
      uVar4 = 0;
      if (param_1 < (this->HairGroupsPhysics).ArrayNum) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if ((this->HairGroupsPhysics).AllocatorInstance.Data[(longlong)param_1 * 0x2e8] !=
          (FScriptContainerElement)0x0) goto LAB_14dfcfa2a;
    }
    bVar2 = false;
  }
  else {
    uVar4 = 0;
    if (param_1 < (this->HairGroupsInterpolation).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if ((this->HairGroupsInterpolation).AllocatorInstance.Data[(longlong)param_1 * 0x28 + 8] !=
        (FScriptContainerElement)0x2) goto LAB_14dfcf9c7;
LAB_14dfcfa2a:
    bVar2 = true;
  }
  return bVar2;
}

// IsGlobalInterpolationEnable @ 14dfcfa60

bool __thiscall UGroomAsset::IsGlobalInterpolationEnable(UGroomAsset *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  
  if ((-1 < param_1) && (param_1 < (this->HairGroupsLOD).ArrayNum)) {
    uVar7 = (uint)~param_1 >> 0x1f;
    uVar5 = 0;
    if (param_1 < (this->HairGroupsLOD).ArrayNum) {
      uVar5 = uVar7;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (-1 < param_2) {
      lVar1 = (longlong)param_1 * 0x18;
      if (param_2 < *(int *)((this->HairGroupsLOD).AllocatorInstance.Data + lVar1 + 0x10)) {
        uVar5 = 0;
        if (param_1 < (this->HairGroupsLOD).ArrayNum) {
          uVar5 = uVar7;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        pFVar6 = (this->HairGroupsLOD).AllocatorInstance.Data + lVar1 + 8;
        uVar5 = 0;
        if (param_2 < *(int *)(pFVar6 + 8)) {
          uVar5 = (uint)~param_2 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        if (*(char *)((longlong)param_2 * 0x1c + 0x18 + *(longlong *)pFVar6) != '\x01') {
          uVar5 = 0;
          if (param_1 < (this->HairGroupsLOD).ArrayNum) {
            uVar5 = uVar7;
          }
          if (uVar5 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
          }
          pFVar6 = (this->HairGroupsLOD).AllocatorInstance.Data;
          uVar5 = 0;
          if (param_2 < *(int *)(pFVar6 + lVar1 + 0x10)) {
            uVar5 = (uint)~param_2 >> 0x1f;
          }
          if (uVar5 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
          }
          if ((*(char *)(*(longlong *)(pFVar6 + lVar1 + 8) + 0x18 + (longlong)param_2 * 0x1c) !=
               '\0') || (this->EnableGlobalInterpolation == false)) {
            return false;
          }
        }
        return true;
      }
    }
  }
  return this->EnableGlobalInterpolation;
}

// IsMaterialSlotNameValid @ 14dfcfdb0

bool __thiscall UGroomAsset::IsMaterialSlotNameValid(UGroomAsset *this,FName param_1)

{
  int iVar1;
  
  iVar1 = GetMaterialIndex(this,param_1);
  return iVar1 != -1;
}

// IsMaterialUsed @ 14dfcfdd0

bool __thiscall UGroomAsset::IsMaterialUsed(UGroomAsset *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  if ((param_1 < 0) || ((this->HairGroupsMaterials).ArrayNum <= param_1)) {
    return false;
  }
  if ((param_1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar1 = (this->HairGroupsRendering).ArrayNum;
  pFVar7 = (this->HairGroupsRendering).AllocatorInstance.Data;
  lVar2 = *(longlong *)
           ((this->HairGroupsMaterials).AllocatorInstance.Data + (longlong)param_1 * 0x10 + 8);
  pFVar6 = pFVar7 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->HairGroupsRendering).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FHairGroupsRendering_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar7 == pFVar6) break;
    if (*(longlong *)pFVar7 == lVar2) {
      return true;
    }
    pFVar7 = pFVar7 + 0x30;
  }
  iVar1 = (this->HairGroupsCards).ArrayNum;
  pFVar7 = (this->HairGroupsCards).AllocatorInstance.Data;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0xa0;
  while( true ) {
    if ((this->HairGroupsCards).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FHairGroupsCardsSourceDescription_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar7 == pFVar6) break;
    if (*(longlong *)(pFVar7 + 8) == lVar2) {
      return true;
    }
    pFVar7 = pFVar7 + 0xa0;
  }
  iVar1 = (this->HairGroupsMeshes).ArrayNum;
  pFVar7 = (this->HairGroupsMeshes).AllocatorInstance.Data;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0x80;
  while( true ) {
    if ((this->HairGroupsMeshes).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FHairGroupsMeshesSourceDescription_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar7 == pFVar6) break;
    if (*(longlong *)(pFVar7 + 8) == lVar2) {
      return true;
    }
    pFVar7 = pFVar7 + 0x80;
  }
  return false;
}

// IsSimulationEnable @ 14dfd0190

bool __thiscall UGroomAsset::IsSimulationEnable(UGroomAsset *this,int param_1,int param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar9 = (longlong)param_1;
  if ((-1 < param_1) && (param_1 < (this->HairGroupsLOD).ArrayNum)) {
    uVar8 = (uint)~param_1 >> 0x1f;
    uVar6 = 0;
    if (param_1 < (this->HairGroupsLOD).ArrayNum) {
      uVar6 = uVar8;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    lVar1 = lVar9 * 0x18;
    if ((param_2 < *(int *)((this->HairGroupsLOD).AllocatorInstance.Data + lVar1 + 0x10)) &&
       (bVar4 = IsHairStrandsSimulationEnable(), bVar4)) {
      if (((this->HairGroupsPhysics).ArrayNum != (this->HairGroupsLOD).ArrayNum) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetHairGroupsPhysics().Num() == GetHairGroupsLOD().Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomAsset.cpp"
                             ,0xe26,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (param_2 < 0) {
        uVar6 = 0;
        if (param_1 < (this->HairGroupsPhysics).ArrayNum) {
          uVar6 = uVar8;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        return (bool)(this->HairGroupsPhysics).AllocatorInstance.Data[lVar9 * 0x2e8 + 1];
      }
      if ((GHairMaxSimulatedLOD < 0) || (param_2 <= GHairMaxSimulatedLOD)) {
        uVar6 = 0;
        if (param_1 < (this->HairGroupsLOD).ArrayNum) {
          uVar6 = uVar8;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar2 = (this->HairGroupsLOD).AllocatorInstance.Data;
        uVar7 = (uint)~param_2 >> 0x1f;
        uVar6 = 0;
        if (param_2 < *(int *)(pFVar2 + lVar1 + 0x10)) {
          uVar6 = uVar7;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        lVar10 = (longlong)param_2 * 0x1c;
        if (*(char *)(*(longlong *)(pFVar2 + lVar1 + 8) + 0x14 + lVar10) != '\0') {
          uVar6 = 0;
          if (param_1 < (this->HairGroupsLOD).ArrayNum) {
            uVar6 = uVar8;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pFVar2 = (this->HairGroupsLOD).AllocatorInstance.Data;
          uVar6 = 0;
          if (param_2 < *(int *)(pFVar2 + lVar1 + 0x10)) {
            uVar6 = uVar7;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (*(char *)(*(longlong *)(pFVar2 + lVar1 + 8) + 0x17 + lVar10) == '\x01') {
            return true;
          }
          uVar6 = 0;
          if (param_1 < (this->HairGroupsLOD).ArrayNum) {
            uVar6 = uVar8;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pFVar2 = (this->HairGroupsLOD).AllocatorInstance.Data;
          uVar6 = 0;
          if (param_2 < *(int *)(pFVar2 + lVar1 + 0x10)) {
            uVar6 = uVar7;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (*(char *)(*(longlong *)(pFVar2 + lVar1 + 8) + 0x17 + lVar10) == '\0') {
            uVar6 = 0;
            if (param_1 < (this->HairGroupsPhysics).ArrayNum) {
              uVar6 = uVar8;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            if ((this->HairGroupsPhysics).AllocatorInstance.Data[lVar9 * 0x2e8 + 1] !=
                (FScriptContainerElement)0x0) {
              return true;
            }
          }
        }
        return false;
      }
    }
  }
  return false;
}

// IsSimulationEnable @ 14dfd0580

bool __thiscall UGroomAsset::IsSimulationEnable(UGroomAsset *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (0 < (this->HairGroupsPlatformData).ArrayNum) {
    lVar7 = 0;
    do {
      iVar5 = 0;
      while( true ) {
        uVar4 = 0;
        if ((int)uVar6 < (this->HairGroupsLOD).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if (*(int *)((this->HairGroupsLOD).AllocatorInstance.Data + lVar7 + 0x10) <= iVar5) break;
        bVar2 = IsSimulationEnable(this,uVar6,iVar5);
        if (bVar2) {
          return true;
        }
        iVar5 = iVar5 + 1;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x18;
    } while ((int)uVar6 < (this->HairGroupsPlatformData).ArrayNum);
  }
  return false;
}

// IsVisible @ 14dfd0850

bool __thiscall UGroomAsset::IsVisible(UGroomAsset *this,int param_1,int param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  if ((-1 < param_1) && (param_1 < (this->HairGroupsLOD).ArrayNum)) {
    uVar6 = 0;
    if (param_1 < (this->HairGroupsLOD).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if ((-1 < param_2) &&
       (lVar1 = (longlong)param_1 * 0x18,
       param_2 < *(int *)((this->HairGroupsLOD).AllocatorInstance.Data + lVar1 + 0x10))) {
      uVar6 = 0;
      if (param_1 < (this->HairGroupsLOD).ArrayNum) {
        uVar6 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (this->HairGroupsLOD).AllocatorInstance.Data;
      uVar6 = 0;
      if (param_2 < *(int *)(pFVar2 + lVar1 + 0x10)) {
        uVar6 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      return (bool)*(undefined1 *)
                    ((longlong)param_2 * 0x1c + 0x14 + *(longlong *)(pFVar2 + lVar1 + 8));
    }
  }
  return false;
}

// NeedsInterpolationData @ 14dfd09d0

bool __thiscall UGroomAsset::NeedsInterpolationData(UGroomAsset *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  
  lVar5 = (longlong)param_1;
  iVar6 = 0;
  uVar7 = (uint)~param_1 >> 0x1f;
  while( true ) {
    uVar4 = 0;
    if (param_1 < (this->HairGroupsLOD).ArrayNum) {
      uVar4 = uVar7;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (*(int *)((this->HairGroupsLOD).AllocatorInstance.Data + lVar5 * 0x18 + 0x10) <= iVar6)
    break;
    bVar2 = IsSimulationEnable(this,param_1,iVar6);
    if (bVar2) {
      return true;
    }
    bVar2 = IsGlobalInterpolationEnable(this,param_1,iVar6);
    if (bVar2) {
      return true;
    }
    if (this->EnableSimulationCache != false) {
      return true;
    }
    iVar6 = iVar6 + 1;
  }
  if (-1 < param_1) {
    if (param_1 < (this->HairGroupsInterpolation).ArrayNum) {
      uVar4 = 0;
      if (param_1 < (this->HairGroupsInterpolation).ArrayNum) {
        uVar4 = uVar7;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if ((this->HairGroupsInterpolation).AllocatorInstance.Data[lVar5 * 0x28 + 8] ==
          (FScriptContainerElement)0x2) {
        return true;
      }
      if (param_1 < 0) {
        return false;
      }
    }
    if (param_1 < (this->HairGroupsPhysics).ArrayNum) {
      uVar4 = 0;
      if (param_1 < (this->HairGroupsPhysics).ArrayNum) {
        uVar4 = uVar7;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if ((this->HairGroupsPhysics).AllocatorInstance.Data[lVar5 * 0x2e8] !=
          (FScriptContainerElement)0x0) {
        return true;
      }
    }
  }
  return false;
}

// NeedsInterpolationData @ 14dfd0ba0

bool __thiscall UGroomAsset::NeedsInterpolationData(UGroomAsset *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar7 = 0;
  if (0 < (this->HairGroupsPlatformData).ArrayNum) {
    lVar10 = 0;
    lVar8 = 0;
    lVar9 = 0;
    do {
      iVar6 = 0;
      uVar5 = ~uVar7 >> 0x1f;
      while( true ) {
        uVar4 = 0;
        if ((int)uVar7 < (this->HairGroupsLOD).ArrayNum) {
          uVar4 = uVar5;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if (*(int *)((this->HairGroupsLOD).AllocatorInstance.Data + lVar9 + 0x10) <= iVar6) break;
        bVar2 = IsSimulationEnable(this,uVar7,iVar6);
        if (bVar2) {
          return true;
        }
        bVar2 = IsGlobalInterpolationEnable(this,uVar7,iVar6);
        if (bVar2) {
          return true;
        }
        if (this->EnableSimulationCache != false) {
          return true;
        }
        iVar6 = iVar6 + 1;
      }
      if (-1 < (int)uVar7) {
        if ((int)uVar7 < (this->HairGroupsInterpolation).ArrayNum) {
          uVar4 = 0;
          if ((int)uVar7 < (this->HairGroupsInterpolation).ArrayNum) {
            uVar4 = uVar5;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          if ((this->HairGroupsInterpolation).AllocatorInstance.Data[lVar8 + 8] ==
              (FScriptContainerElement)0x2) {
            return true;
          }
          if ((int)uVar7 < 0) goto LAB_14dfd0d50;
        }
        if ((int)uVar7 < (this->HairGroupsPhysics).ArrayNum) {
          uVar4 = 0;
          if ((int)uVar7 < (this->HairGroupsPhysics).ArrayNum) {
            uVar4 = uVar5;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          if ((this->HairGroupsPhysics).AllocatorInstance.Data[lVar10] !=
              (FScriptContainerElement)0x0) {
            return true;
          }
        }
      }
LAB_14dfd0d50:
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x18;
      lVar8 = lVar8 + 0x28;
      lVar10 = lVar10 + 0x2e8;
    } while ((int)uVar7 < (this->HairGroupsPlatformData).ArrayNum);
  }
  return false;
}

// PostLoad @ 14dfd0fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall UGroomAsset::PostLoad(UGroomAsset *this)

{
  int *piVar1;
  TArray<FHairGroupsMaterial,TSizedDefaultAllocator<32>_> *pTVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  UObject *pUVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  FString *pFVar13;
  UClass *pUVar14;
  Type TVar15;
  wchar_t *pwVar16;
  ulonglong uVar17;
  longlong lVar18;
  TRefCountPtr<FBaseGraphTask> *pTVar19;
  FObjectPtr_u_0 FVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  ForAnyElementType FVar24;
  FSoftObjectPtr *this_00;
  FHairVertexFactoryTypesPerMaterialData *pFVar25;
  FScriptContainerElement *pFVar26;
  EShaderPlatform EVar27;
  FScriptContainerElement *pFVar28;
  undefined1 auStackY_248 [32];
  undefined1 local_1e8;
  undefined1 local_1e7;
  undefined1 local_1e6;
  undefined1 local_1e5;
  undefined1 local_1e4;
  undefined1 local_1e3;
  undefined1 local_1e2;
  undefined1 local_1e1;
  undefined1 local_1e0;
  undefined1 local_1df;
  undefined1 local_1de;
  undefined1 local_1dd [5];
  FScriptContainerElement *local_1d8;
  FLLMScope local_1d0;
  FLLMScope local_1cc;
  TArray<FHairVertexFactoryTypesPerMaterialData,TSizedDefaultAllocator<32>_> local_1c8;
  ulonglong local_1b8;
  void *local_1b0;
  undefined8 local_1a8;
  FMemScope local_1a0;
  UObject *local_198;
  UObject *local_190;
  FMemScope local_188;
  FName local_180;
  FName local_178;
  undefined8 local_170;
  undefined8 local_168;
  wchar_t *local_158;
  undefined8 uStack_150;
  wchar_t *local_148;
  undefined8 uStack_140;
  FHairGroupResources local_138;
  wchar_t *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  wchar_t *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FString local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TRefCountPtr<FBaseGraphTask> local_68 [4];
  TRefCountPtr<FBaseGraphTask> *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  FLLMScope::FLLMScope(&local_1cc,LLMTagDeclaration_Groom.UniqueName,false,None,Default,true);
  local_180 = LLMTagDeclaration_Groom.UniqueName;
  FMemScope::FMemScope(&local_188,&local_180,true);
  UObject::PostLoad((UObject *)this);
  bVar9 = IsGroomEnabled();
  if (!bVar9) goto LAB_14dfd23c7;
  pFVar13 = UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this,&local_b8,(UObject *)0x0,None);
  iVar4 = (pFVar13->Data).ArrayNum;
  iVar11 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar11 = 0;
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
  }
  uVar10 = CityHash32((char *)pwVar16,iVar11 * 2);
  this->AssetNameHash = uVar10;
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  iVar11 = (this->HairGroupsInterpolation).ArrayNum;
  pFVar21 = (this->HairGroupsInterpolation).AllocatorInstance.Data;
  pFVar23 = pFVar21 + (longlong)iVar11 * 0x28;
  while( true ) {
    if ((this->HairGroupsInterpolation).ArrayNum != iVar11) {
      local_1e8 = 0;
      `TCheckedPointerIterator<FHairGroupsInterpolation,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1e8);
    }
    if (pFVar21 == pFVar23) break;
    if (pFVar21[9] == (FScriptContainerElement)0x0) {
      if (pFVar21[0x1c] != (FScriptContainerElement)0x0) goto LAB_14dfd1137;
    }
    else {
      pFVar21[8] = (FScriptContainerElement)
                   ((pFVar21[0x1c] != (FScriptContainerElement)0x0) + '\x01');
LAB_14dfd1137:
      *(undefined4 *)(pFVar21 + 0x10) = *(undefined4 *)(pFVar21 + 0x20);
      *(undefined4 *)(pFVar21 + 0x14) = *(undefined4 *)(pFVar21 + 0x24);
      *(undefined8 *)(pFVar21 + 0x20) = 0;
      pFVar21[9] = (FScriptContainerElement)0x0;
      pFVar21[0x1c] = (FScriptContainerElement)0x0;
    }
    pFVar21 = pFVar21 + 0x28;
  }
  uVar10 = (this->HairGroupsCards).ArrayNum;
  uVar17 = (ulonglong)(int)uVar10;
  pFVar28 = (this->HairGroupsCards).AllocatorInstance.Data;
  pFVar23 = pFVar28 + 0x40;
  local_1d8 = pFVar28 + uVar17 * 0xa0;
  pFVar21 = pFVar28 + 0x44;
  pFVar22 = pFVar28 + 0x38;
  while( true ) {
    pFVar26 = local_1d8;
    if ((this->HairGroupsCards).ArrayNum != (int)uVar17) {
      local_1e7 = 0;
      `TCheckedPointerIterator<FHairGroupsCardsSourceDescription,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_1e7);
    }
    if (pFVar28 == pFVar26) break;
    if (pFVar23[-0x30] == (FScriptContainerElement)0x0) {
      pFVar23[-0x20] = (FScriptContainerElement)0x1;
      pFVar23[-0x30] = (FScriptContainerElement)0x1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)(pFVar23 + -0x28) != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)(pFVar23 + -0x28));
      }
      pFVar26 = pFVar23 + 0x50;
      *(undefined8 *)(pFVar23 + -0x18) = *(undefined8 *)(pFVar23 + -0x28);
      *(undefined8 *)(pFVar23 + -0x28) = 0;
      local_170 = 0;
      local_168 = 0;
      if (pFVar26 != (FScriptContainerElement *)&local_170) {
        if (*(void **)pFVar26 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar26);
        }
        *(undefined8 *)pFVar26 = 0;
        *(undefined8 *)(pFVar23 + 0x58) = 0;
      }
    }
    if (*(int *)pFVar23 == 0) {
      pFVar23[-0x10] = (FScriptContainerElement)0x0;
      if (*(int *)(pFVar23 + 4) < 6) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,6,(ForAnyElementType *)pFVar22,0,(int *)pFVar21);
      }
      pFVar26 = pFVar23 + 8;
      if (((*(FScriptContainerElement **)(pFVar23 + -8) <= pFVar26) &&
          (pFVar26 < *(FScriptContainerElement **)(pFVar23 + -8) +
                     (longlong)*(int *)(pFVar23 + 4) * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = *(int *)pFVar23;
      if (iVar11 == *(int *)(pFVar23 + 4)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)(pFVar23 + -8),(int *)(pFVar23 + 4));
      }
      *(int *)pFVar23 = iVar11 + 1;
      pUVar6 = *(UObject **)pFVar26;
      *(UObject **)(*(longlong *)(pFVar23 + -8) + (longlong)iVar11 * 8) = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      pFVar26 = pFVar23 + 0x10;
      if (((*(FScriptContainerElement **)(pFVar23 + -8) <= pFVar26) &&
          (pFVar26 < *(FScriptContainerElement **)(pFVar23 + -8) +
                     (longlong)*(int *)(pFVar23 + 4) * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = *(int *)pFVar23;
      if (iVar11 == *(int *)(pFVar23 + 4)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)(pFVar23 + -8),(int *)(pFVar23 + 4));
      }
      *(int *)pFVar23 = iVar11 + 1;
      pUVar6 = *(UObject **)pFVar26;
      *(UObject **)(*(longlong *)(pFVar23 + -8) + (longlong)iVar11 * 8) = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      pFVar26 = pFVar23 + 0x18;
      if (((*(FScriptContainerElement **)(pFVar23 + -8) <= pFVar26) &&
          (pFVar26 < *(FScriptContainerElement **)(pFVar23 + -8) +
                     (longlong)*(int *)(pFVar23 + 4) * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = *(int *)pFVar23;
      if (iVar11 == *(int *)(pFVar23 + 4)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)(pFVar23 + -8),(int *)(pFVar23 + 4));
      }
      *(int *)pFVar23 = iVar11 + 1;
      pUVar6 = *(UObject **)pFVar26;
      *(UObject **)(*(longlong *)(pFVar23 + -8) + (longlong)iVar11 * 8) = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      pFVar26 = pFVar23 + 0x20;
      if (((*(FScriptContainerElement **)(pFVar23 + -8) <= pFVar26) &&
          (pFVar26 < *(FScriptContainerElement **)(pFVar23 + -8) +
                     (longlong)*(int *)(pFVar23 + 4) * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = *(int *)pFVar23;
      if (iVar11 == *(int *)(pFVar23 + 4)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)(pFVar23 + -8),(int *)(pFVar23 + 4));
      }
      *(int *)pFVar23 = iVar11 + 1;
      pUVar6 = *(UObject **)pFVar26;
      *(UObject **)(*(longlong *)(pFVar23 + -8) + (longlong)iVar11 * 8) = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      pFVar26 = pFVar23 + 0x30;
      if (((*(FScriptContainerElement **)(pFVar23 + -8) <= pFVar26) &&
          (pFVar26 < *(FScriptContainerElement **)(pFVar23 + -8) +
                     (longlong)*(int *)(pFVar23 + 4) * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = *(int *)pFVar23;
      if (iVar11 == *(int *)(pFVar23 + 4)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)(pFVar23 + -8),(int *)(pFVar23 + 4));
      }
      *(int *)pFVar23 = iVar11 + 1;
      pUVar6 = *(UObject **)pFVar26;
      *(UObject **)(*(longlong *)(pFVar23 + -8) + (longlong)iVar11 * 8) = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      pFVar26 = pFVar23 + 0x28;
      if (((*(FScriptContainerElement **)(pFVar23 + -8) <= pFVar26) &&
          (pFVar26 < *(FScriptContainerElement **)(pFVar23 + -8) +
                     (longlong)*(int *)(pFVar23 + 4) * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = *(int *)pFVar23;
      if (iVar11 == *(int *)(pFVar23 + 4)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)(pFVar23 + -8),(int *)(pFVar23 + 4));
      }
      *(int *)pFVar23 = iVar11 + 1;
      pUVar6 = *(UObject **)pFVar26;
      *(UObject **)(*(longlong *)(pFVar23 + -8) + (longlong)iVar11 * 8) = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
    }
    pFVar28 = pFVar28 + 0xa0;
    uVar17 = (ulonglong)uVar10;
    pFVar23 = pFVar23 + 0xa0;
    pFVar21 = pFVar21 + 0xa0;
    pFVar22 = pFVar22 + 0xa0;
  }
  uVar10 = (this->HairGroupsMeshes).ArrayNum;
  uVar17 = (ulonglong)(int)uVar10;
  pFVar28 = (this->HairGroupsMeshes).AllocatorInstance.Data;
  pFVar26 = pFVar28 + uVar17 * 0x80;
  pFVar23 = pFVar28 + 0x28;
  pFVar21 = pFVar28 + 0x2c;
  pFVar22 = pFVar28 + 0x20;
  local_1d8 = pFVar26;
  while( true ) {
    if ((this->HairGroupsMeshes).ArrayNum != (int)uVar17) {
      local_1e6 = 0;
      `TCheckedPointerIterator<FHairGroupsMeshesSourceDescription,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_1e6);
    }
    if (pFVar28 == pFVar26) break;
    if (*(int *)pFVar23 == 0) {
      pFVar23[-0x10] = (FScriptContainerElement)0x1;
      if (*(int *)(pFVar23 + 4) < 6) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,6,(ForAnyElementType *)pFVar22,0,(int *)pFVar21);
      }
      pFVar26 = pFVar23 + 8;
      if (((*(FScriptContainerElement **)(pFVar23 + -8) <= pFVar26) &&
          (pFVar26 < *(FScriptContainerElement **)(pFVar23 + -8) +
                     (longlong)*(int *)(pFVar23 + 4) * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = *(int *)pFVar23;
      if (iVar11 == *(int *)(pFVar23 + 4)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)(pFVar23 + -8),(int *)(pFVar23 + 4));
      }
      *(int *)pFVar23 = iVar11 + 1;
      pUVar6 = *(UObject **)pFVar26;
      *(UObject **)(*(longlong *)(pFVar23 + -8) + (longlong)iVar11 * 8) = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      pFVar26 = pFVar23 + 0x10;
      if (((*(FScriptContainerElement **)(pFVar23 + -8) <= pFVar26) &&
          (pFVar26 < *(FScriptContainerElement **)(pFVar23 + -8) +
                     (longlong)*(int *)(pFVar23 + 4) * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = *(int *)pFVar23;
      if (iVar11 == *(int *)(pFVar23 + 4)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)(pFVar23 + -8),(int *)(pFVar23 + 4));
      }
      *(int *)pFVar23 = iVar11 + 1;
      pUVar6 = *(UObject **)pFVar26;
      *(UObject **)(*(longlong *)(pFVar23 + -8) + (longlong)iVar11 * 8) = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      pFVar26 = pFVar23 + 0x18;
      if (((*(FScriptContainerElement **)(pFVar23 + -8) <= pFVar26) &&
          (pFVar26 < *(FScriptContainerElement **)(pFVar23 + -8) +
                     (longlong)*(int *)(pFVar23 + 4) * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = *(int *)pFVar23;
      if (iVar11 == *(int *)(pFVar23 + 4)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)(pFVar23 + -8),(int *)(pFVar23 + 4));
      }
      *(int *)pFVar23 = iVar11 + 1;
      pUVar6 = *(UObject **)pFVar26;
      *(UObject **)(*(longlong *)(pFVar23 + -8) + (longlong)iVar11 * 8) = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      pFVar26 = pFVar23 + 0x20;
      if (((*(FScriptContainerElement **)(pFVar23 + -8) <= pFVar26) &&
          (pFVar26 < *(FScriptContainerElement **)(pFVar23 + -8) +
                     (longlong)*(int *)(pFVar23 + 4) * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = *(int *)pFVar23;
      if (iVar11 == *(int *)(pFVar23 + 4)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)(pFVar23 + -8),(int *)(pFVar23 + 4));
      }
      *(int *)pFVar23 = iVar11 + 1;
      pUVar6 = *(UObject **)pFVar26;
      *(UObject **)(*(longlong *)(pFVar23 + -8) + (longlong)iVar11 * 8) = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      pFVar26 = pFVar23 + 0x30;
      if (((*(FScriptContainerElement **)(pFVar23 + -8) <= pFVar26) &&
          (pFVar26 < *(FScriptContainerElement **)(pFVar23 + -8) +
                     (longlong)*(int *)(pFVar23 + 4) * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = *(int *)pFVar23;
      if (iVar11 == *(int *)(pFVar23 + 4)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)(pFVar23 + -8),(int *)(pFVar23 + 4));
      }
      *(int *)pFVar23 = iVar11 + 1;
      pUVar6 = *(UObject **)pFVar26;
      *(UObject **)(*(longlong *)(pFVar23 + -8) + (longlong)iVar11 * 8) = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      pFVar26 = pFVar23 + 0x28;
      if (((*(FScriptContainerElement **)(pFVar23 + -8) <= pFVar26) &&
          (pFVar26 < *(FScriptContainerElement **)(pFVar23 + -8) +
                     (longlong)*(int *)(pFVar23 + 4) * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = *(int *)pFVar23;
      if (iVar11 == *(int *)(pFVar23 + 4)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)(pFVar23 + -8),(int *)(pFVar23 + 4));
      }
      *(int *)pFVar23 = iVar11 + 1;
      pUVar6 = *(UObject **)pFVar26;
      *(UObject **)(*(longlong *)(pFVar23 + -8) + (longlong)iVar11 * 8) = pUVar6;
      pFVar26 = local_1d8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
        pFVar26 = local_1d8;
      }
    }
    uVar17 = (ulonglong)uVar10;
    pFVar28 = pFVar28 + 0x80;
    pFVar23 = pFVar23 + 0x80;
    pFVar21 = pFVar21 + 0x80;
    pFVar22 = pFVar22 + 0x80;
  }
  if (((this->HairGroupsPlatformData).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetNumHairGroups() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomAsset.cpp"
                         ,0x5e2,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = (this->HairGroupsRendering).ArrayNum;
  uVar17 = (ulonglong)(int)uVar10;
  pTVar2 = &this->HairGroupsMaterials;
  pFVar23 = (this->HairGroupsRendering).AllocatorInstance.Data;
  bVar9 = false;
  pFVar21 = pFVar23 + uVar17 * 0x30;
  while( true ) {
    if ((this->HairGroupsRendering).ArrayNum != (int)uVar17) {
      local_1e5 = 0;
      `TCheckedPointerIterator<FHairGroupsRendering,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1e5);
    }
    if (pFVar23 == pFVar21) break;
    if (*(longlong *)(pFVar23 + 8) != 0) {
      iVar11 = (this->HairGroupsMaterials).ArrayNum;
      pFVar22 = (pTVar2->AllocatorInstance).Data;
      lVar18 = *(longlong *)(*(longlong *)(pFVar23 + 8) + 0x18);
      pFVar28 = pFVar22 + (longlong)iVar11 * 0x10;
      while( true ) {
        if ((this->HairGroupsMaterials).ArrayNum != iVar11) {
          local_1e4 = 0;
          `TCheckedPointerIterator<FHairGroupsMaterial,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_1e4);
        }
        if (pFVar22 == pFVar28) break;
        if (*(longlong *)(pFVar22 + 8) == lVar18) goto LAB_14dfd1bb0;
        pFVar22 = pFVar22 + 0x10;
      }
      iVar11 = (this->HairGroupsMaterials).ArrayNum;
      piVar1 = &(this->HairGroupsMaterials).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->HairGroupsMaterials).ArrayNum = iVar11 + 1;
      pFVar22 = (pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      DefaultConstructItems<FHairGroupsMaterial,int>(pFVar22,1);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)(pFVar23 + 8) != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)(pFVar23 + 8));
      }
      *(longlong *)pFVar22 = *(longlong *)(pFVar23 + 8);
      *(longlong *)(pFVar22 + 8) = lVar18;
LAB_14dfd1bb0:
      bVar9 = true;
      *(longlong *)pFVar23 = lVar18;
      *(longlong *)(pFVar23 + 8) = 0;
    }
    uVar17 = (ulonglong)uVar10;
    pFVar23 = pFVar23 + 0x30;
  }
  if (bVar9) {
LAB_14dfd1e0b:
    bVar9 = true;
  }
  else {
    uVar10 = (this->HairGroupsCards).ArrayNum;
    uVar17 = (ulonglong)(int)uVar10;
    pTVar2 = &this->HairGroupsMaterials;
    pFVar23 = (this->HairGroupsCards).AllocatorInstance.Data;
    pFVar21 = pFVar23 + uVar17 * 0xa0;
    bVar9 = false;
    while( true ) {
      if ((this->HairGroupsCards).ArrayNum != (int)uVar17) {
        local_1e3 = 0;
        `TCheckedPointerIterator<FHairGroupsCardsSourceDescription,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_1e3);
      }
      if (pFVar23 == pFVar21) break;
      if (*(longlong *)pFVar23 != 0) {
        iVar11 = (this->HairGroupsMaterials).ArrayNum;
        pFVar22 = (pTVar2->AllocatorInstance).Data;
        lVar18 = *(longlong *)(*(longlong *)pFVar23 + 0x18);
        pFVar28 = pFVar22 + (longlong)iVar11 * 0x10;
        while( true ) {
          if ((this->HairGroupsMaterials).ArrayNum != iVar11) {
            local_1e2 = 0;
            `TCheckedPointerIterator<FHairGroupsMaterial,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_1e2);
          }
          if (pFVar22 == pFVar28) break;
          if (*(longlong *)(pFVar22 + 8) == lVar18) goto LAB_14dfd1cc2;
          pFVar22 = pFVar22 + 0x10;
        }
        iVar11 = (this->HairGroupsMaterials).ArrayNum;
        piVar1 = &(this->HairGroupsMaterials).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->HairGroupsMaterials).ArrayNum = iVar11 + 1;
        pFVar22 = (pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
        DefaultConstructItems<FHairGroupsMaterial,int>(pFVar22,1);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (*(UObject **)pFVar23 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(*(UObject **)pFVar23);
        }
        *(longlong *)pFVar22 = *(longlong *)pFVar23;
        *(longlong *)(pFVar22 + 8) = lVar18;
LAB_14dfd1cc2:
        bVar9 = true;
        *(longlong *)(pFVar23 + 8) = lVar18;
        *(longlong *)pFVar23 = 0;
      }
      uVar17 = (ulonglong)uVar10;
      pFVar23 = pFVar23 + 0xa0;
    }
    if (bVar9) goto LAB_14dfd1e0b;
    uVar10 = (this->HairGroupsMeshes).ArrayNum;
    uVar17 = (ulonglong)(int)uVar10;
    pTVar2 = &this->HairGroupsMaterials;
    pFVar23 = (this->HairGroupsMeshes).AllocatorInstance.Data;
    pFVar21 = pFVar23 + uVar17 * 0x80;
    bVar9 = false;
    while( true ) {
      if ((this->HairGroupsMeshes).ArrayNum != (int)uVar17) {
        local_1e1 = 0;
        `TCheckedPointerIterator<FHairGroupsMeshesSourceDescription,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_1e1);
      }
      if (pFVar23 == pFVar21) break;
      if (*(longlong *)pFVar23 != 0) {
        iVar11 = (this->HairGroupsMaterials).ArrayNum;
        pFVar22 = (pTVar2->AllocatorInstance).Data;
        lVar18 = *(longlong *)(*(longlong *)pFVar23 + 0x18);
        pFVar28 = pFVar22 + (longlong)iVar11 * 0x10;
        while( true ) {
          if ((this->HairGroupsMaterials).ArrayNum != iVar11) {
            local_1e0 = 0;
            `TCheckedPointerIterator<FHairGroupsMaterial,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_1e0);
          }
          if (pFVar22 == pFVar28) break;
          if (*(longlong *)(pFVar22 + 8) == lVar18) goto LAB_14dfd1ddc;
          pFVar22 = pFVar22 + 0x10;
        }
        iVar11 = (this->HairGroupsMaterials).ArrayNum;
        piVar1 = &(this->HairGroupsMaterials).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->HairGroupsMaterials).ArrayNum = iVar11 + 1;
        pFVar22 = (pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
        DefaultConstructItems<FHairGroupsMaterial,int>(pFVar22,1);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (*(UObject **)pFVar23 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(*(UObject **)pFVar23);
        }
        *(longlong *)pFVar22 = *(longlong *)pFVar23;
        *(longlong *)(pFVar22 + 8) = lVar18;
LAB_14dfd1ddc:
        bVar9 = true;
        *(longlong *)(pFVar23 + 8) = lVar18;
        *(longlong *)pFVar23 = 0;
      }
      uVar17 = (ulonglong)uVar10;
      pFVar23 = pFVar23 + 0x80;
    }
    if (bVar9) goto LAB_14dfd1e0b;
    bVar9 = false;
  }
  if ((GUpdateGroomGroupsNames == 0) && (bVar9)) {
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  }
  bVar9 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  uVar10 = 0;
  if ((!bVar9) && (0 < GHairStrandsLoadAsset)) {
    local_138.Strands.RaytracingResource = (FHairStrandsRaytracingResource *)0x0;
    local_138.Strands._33_4_ = 0;
    local_138.Strands._37_2_ = 0;
    local_138.Strands._39_1_ = 0;
    local_138.Guides.RestResource = (FHairStrandsRestResource *)0x0;
    local_138.Strands.RestResource = (FHairStrandsRestResource *)0x0;
    local_138.Strands.bIsCookedOut = false;
    local_138.Strands.InterpolationResource = (FHairStrandsInterpolationResource *)0x0;
    local_138.Strands.ClusterResource = (FHairStrandsClusterResource *)0x0;
    local_138.Cards.LODs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.Cards.LODs.ArrayNum = 0;
    local_138.Cards.LODs.ArrayMax = 0;
    local_138.Meshes.LODs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.Meshes.LODs.ArrayNum = 0;
    local_138.Meshes.LODs.ArrayMax = 0;
    local_138.Debug.Resource = (FHairStrandsDebugResources *)0x0;
    TArray<FHairGroupResources,TSizedDefaultAllocator<32>_>::Init
              (&this->HairGroupsResources,&local_138,(this->HairGroupsPlatformData).ArrayNum);
    if (local_138.Meshes.LODs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Meshes.LODs.AllocatorInstance.Data);
    }
    if (local_138.Cards.LODs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Cards.LODs.AllocatorInstance.Data);
    }
    FLLMScope::FLLMScope(&local_1d0,LLMTagDeclaration_Groom.UniqueName,false,None,Default,true);
    local_178 = LLMTagDeclaration_Groom.UniqueName;
    FMemScope::FMemScope(&local_1a0,&local_178,true);
    InitStrandsResources(this);
    InitCardsResources(this);
    InitMeshesResources(this);
    this->bIsInitialized = true;
    FMemScope::~FMemScope(&local_1a0);
    FLLMScope::~FLLMScope(&local_1d0);
  }
  iVar11 = (this->HairGroupsInterpolation).ArrayNum;
  if (((((iVar11 == 0) || ((this->HairGroupsPlatformData).ArrayNum != iVar11)) ||
       ((this->HairGroupsPhysics).ArrayNum != iVar11)) ||
      (((this->HairGroupsRendering).ArrayNum != iVar11 || ((this->HairGroupsLOD).ArrayNum != iVar11)
       ))) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AreGroupsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomAsset.cpp"
                                  ,0x608,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar11 = (this->HairGroupsPlatformData).ArrayNum;
  iVar4 = (this->HairGroupsInfo).ArrayNum;
  TArray<FHairGroupInfoWithVisibility,TSizedDefaultAllocator<32>_>::SetNum
            (&this->HairGroupsInfo,iVar11,Default);
  iVar5 = (this->HairGroupsPlatformData).ArrayNum;
  pFVar23 = (this->HairGroupsPlatformData).AllocatorInstance.Data;
  pFVar21 = pFVar23 + (longlong)iVar5 * 2000;
  while( true ) {
    if ((this->HairGroupsPlatformData).ArrayNum != iVar5) {
      local_1df = 0;
      `TCheckedPointerIterator<FHairGroupPlatformData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1df);
    }
    if (pFVar23 == pFVar21) break;
    uVar12 = 0;
    if ((int)uVar10 < (this->HairGroupsInfo).ArrayNum) {
      uVar12 = ~uVar10 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar22 = (this->HairGroupsInfo).AllocatorInstance.Data;
    lVar18 = (longlong)(int)uVar10 * 0x40;
    *(uint *)(pFVar22 + lVar18) = uVar10;
    *(undefined4 *)(pFVar22 + lVar18 + 0x10) = *(undefined4 *)(pFVar23 + 0x2c8);
    *(undefined4 *)(pFVar22 + lVar18 + 0x14) = *(undefined4 *)(pFVar23 + 8);
    *(undefined4 *)(pFVar22 + lVar18 + 0x18) = *(undefined4 *)(pFVar23 + 0x2cc);
    *(undefined4 *)(pFVar22 + lVar18 + 0x1c) = *(undefined4 *)(pFVar23 + 0xc);
    *(undefined4 *)(pFVar22 + lVar18 + 0x20) = *(undefined4 *)(pFVar23 + 0x2dc);
    if (iVar4 != iVar11) {
      pFVar22[lVar18 + 0x38] = (FScriptContainerElement)0x1;
    }
    uVar10 = uVar10 + 1;
    pFVar23 = pFVar23 + 2000;
  }
  bVar9 = IsResourcePSOPrecachingEnabled();
  if (bVar9) {
    lVar18 = (**(code **)(this->_padding_ + 0x180))(this);
    TVar15 = GMaxRHIFeatureLevel;
    if (lVar18 != 0) {
      lVar18 = (**(code **)(this->_padding_ + 0x180))(this);
      TVar15 = (uint)*(byte *)(lVar18 + 0x188);
    }
    if (TVar15 == Num) {
      EVar27 = SP_NumPlatforms;
    }
    else {
      EVar27 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar15];
    }
    CollectVertexFactoryTypesPerMaterialData(this,&local_1c8,EVar27);
    iVar11 = local_1c8.ArrayNum;
    local_1b8 = (ulonglong)((uint)local_1b8 & 0x8000) | 0x13c00;
    local_1b0 = (void *)0x0;
    pFVar25 = (FHairVertexFactoryTypesPerMaterialData *)
              (local_1c8.AllocatorInstance.Data + (longlong)local_1c8.ArrayNum * 0x38);
    local_1a8 = 0;
    FVar24.Data = local_1c8.AllocatorInstance.Data;
    while( true ) {
      if (local_1c8.ArrayNum != iVar11) {
        local_1de = 0;
        `TCheckedPointerIterator<FHairVertexFactoryTypesPerMaterialData,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_1de);
      }
      if ((FHairVertexFactoryTypesPerMaterialData *)FVar24.Data == pFVar25) break;
      sVar3 = ((FHairVertexFactoryTypesPerMaterialData *)FVar24.Data)->MaterialIndex;
      uVar10 = 0;
      if ((int)sVar3 < (this->HairGroupsMaterials).ArrayNum) {
        uVar10 = (uint)~(int)sVar3 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      plVar7 = *(longlong **)
                ((this->HairGroupsMaterials).AllocatorInstance.Data + (longlong)sVar3 * 0x10);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x3b0))
                  (plVar7,local_68,
                   &((FHairVertexFactoryTypesPerMaterialData *)FVar24.Data)->VertexFactoryDataList,
                   &local_1b8);
        pTVar19 = local_68;
        if (local_48 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
          pTVar19 = local_48;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar19,local_40);
        if (local_48 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
          FMemory::Free(local_48);
        }
      }
      FVar24.Data = FVar24.Data + 0x38;
    }
    if (local_1b0 != (void *)0x0) {
      FMemory::Free(local_1b0);
    }
    DestructItems<FHairVertexFactoryTypesPerMaterialData,int>
              ((FHairVertexFactoryTypesPerMaterialData *)local_1c8.AllocatorInstance.Data,
               local_1c8.ArrayNum);
    if ((FHairVertexFactoryTypesPerMaterialData *)local_1c8.AllocatorInstance.Data !=
        (FHairVertexFactoryTypesPerMaterialData *)0x0) {
      FMemory::Free(local_1c8.AllocatorInstance.Data);
    }
  }
  pFVar23 = (this->HairGroupsPhysics).AllocatorInstance.Data;
  iVar11 = (this->HairGroupsPhysics).ArrayNum;
  this_00 = (FSoftObjectPtr *)(pFVar23 + 8);
  pFVar21 = pFVar23 + (longlong)iVar11 * 0x2e8;
  while( true ) {
    if ((this->HairGroupsPhysics).ArrayNum != iVar11) {
      `TCheckedPointerIterator<FHairGroupsPhysics,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1dd);
    }
    if (pFVar23 == pFVar21) break;
    if (this_00[-1].field_0x22 == '\x04') {
      local_d8 = L"/HairStrands/Emitters/StableSpringsSystem.StableSpringsSystem";
      uStack_150._0_4_ = 0;
      uStack_150._4_4_ = 0;
      local_158 = (wchar_t *)0x0;
      iStack_d0 = 0x3d;
      pUVar14 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
      local_98._12_4_ = uStack_cc;
      local_98.Size = iStack_d0;
      local_a8.DataPtr = local_158;
      local_a8.Size = (int)uStack_150;
      local_a8._12_4_ = uStack_150._4_4_;
      local_98.DataPtr = local_d8;
      local_198 = StaticLoadObject(pUVar14,(UObject *)0x0,&local_98,&local_a8,0,(UPackageMap *)0x0,
                                   true,(FLinkerInstancingContext *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_198 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_198);
      }
      FVar20.Handle = (UObject *)&local_198;
LAB_14dfd237c:
      FSoftObjectPtr::operator=(this_00,(FObjectPtr)FVar20);
    }
    else if (this_00[-1].field_0x22 == '\x02') {
      local_c8 = L"/HairStrands/Emitters/StableRodsSystem.StableRodsSystem";
      uStack_140._0_4_ = 0;
      uStack_140._4_4_ = 0;
      local_148 = (wchar_t *)0x0;
      iStack_c0 = 0x37;
      pUVar14 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
      local_78._12_4_ = uStack_bc;
      local_78.Size = iStack_c0;
      local_88.DataPtr = local_148;
      local_88.Size = (int)uStack_140;
      local_88._12_4_ = uStack_140._4_4_;
      local_78.DataPtr = local_c8;
      local_190 = StaticLoadObject(pUVar14,(UObject *)0x0,&local_78,&local_88,0,(UPackageMap *)0x0,
                                   true,(FLinkerInstancingContext *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_190);
      }
      FVar20.Handle = (UObject *)&local_190;
      goto LAB_14dfd237c;
    }
    pFVar23 = pFVar23 + 0x2e8;
    this_00 = (FSoftObjectPtr *)&this_00[0x12].field_0x18;
  }
LAB_14dfd23c7:
  FMemScope::~FMemScope(&local_188);
  FLLMScope::~FLLMScope(&local_1cc);
  return;
}

// ReadDataflowContent @ 14dfd4960

void __thiscall
UGroomAsset::ReadDataflowContent(UGroomAsset *this,TObjectPtr<UDataflowBaseContent> *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  UDataflowBaseContent *pUVar3;
  
  if ((param_1->field0_0x0).DebugPtr != (UDataflowBaseContent *)0x0) {
    pUVar2 = UDataflowGroomContent::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar2);
    if (bVar1) {
      pUVar3 = (param_1->field0_0x0).DebugPtr;
      goto LAB_14dfd498a;
    }
  }
  pUVar3 = (UDataflowBaseContent *)0x0;
LAB_14dfd498a:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UDataflowBaseContent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
    return;
  }
  return;
}

// ReleaseCardsResource @ 14dfd4b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UGroomAsset::ReleaseCardsResource(UGroomAsset *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined ***pppuVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  undefined1 local_148 [16];
  code *local_138 [2];
  undefined **local_128;
  longlong local_120;
  undefined ***local_110;
  code *local_108 [2];
  undefined **local_f8;
  longlong local_f0;
  undefined ***local_e0;
  code *local_d8 [2];
  undefined **local_c8;
  longlong local_c0;
  undefined ***local_b0;
  code *local_a8 [2];
  undefined **local_98;
  longlong local_90;
  undefined ***local_80;
  code *local_78 [2];
  undefined **local_68;
  longlong local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  if (-1 < (int)param_1) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
    lVar7 = (longlong)(int)param_1;
    if ((int)param_1 < (this->HairGroupsResources).ArrayNum) {
      iVar1 = (this->HairGroupsResources).ArrayNum;
      uVar5 = 0;
      if ((int)param_1 < iVar1) {
        uVar5 = ~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (local_158 = lVar7, local_150 = (longlong)iVar1,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->HairGroupsResources).AllocatorInstance.Data;
      iVar1 = *(int *)(pFVar2 + lVar7 * 0x58 + 0x38);
      plVar8 = *(longlong **)(pFVar2 + lVar7 * 0x58 + 0x30);
      plVar9 = plVar8 + (longlong)iVar1 * 6;
      while( true ) {
        if (*(int *)(pFVar2 + lVar7 * 0x58 + 0x38) != iVar1) {
          `TCheckedPointerIterator<FHairGroupResources::FCards::FLOD,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_148);
        }
        if (plVar8 == plVar9) break;
        if (*plVar8 != 0) {
          local_110 = (undefined ***)0x0;
          local_128 = &
                      ___7__TFunction_OwnedObject_V<lambda_1>__4____InternalReleaseResource_UFHairCardsRestResource____YAXAEAPEAUFHairCardsRestResource___N_Z__00_0A__Function_Private_Core_UE__6B_
          ;
          local_138[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`InternalReleaseResource<FHairCardsRestResource>'::__l5::<lambda_1>,void,FRHICommandList_&>
                         ::Call;
          local_120 = *plVar8;
          FRenderCommandDispatcher::
          Enqueue<TRenderCommandTag<_InternalReleaseResource<FHairCardsRestResource>_::__l5::TSTR_ReleaseHairResourceCommand1048>_>
                    (&UE::RenderCommandPipe::Groom,
                     (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_138);
          if (local_138[0] != (code *)0x0) {
            pppuVar6 = &local_128;
            if (local_110 != (undefined ***)0x0) {
              pppuVar6 = local_110;
            }
            (*(code *)(*pppuVar6)[2])();
          }
          *plVar8 = 0;
        }
        if (plVar8[1] != 0) {
          local_f8 = &
                     ___7__TFunction_OwnedObject_V<lambda_1>__4____InternalReleaseResource_UFHairCardsInterpolationResource____YAXAEAPEAUFHairCardsInterpolationResource___N_Z__00_0A__Function_Private_Core_UE__6B_
          ;
          local_e0 = (undefined ***)0x0;
          local_108[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`InternalReleaseResource<FHairCardsInterpolationResource>'::__l5::<lambda_1>,void,FRHICommandList_&>
                         ::Call;
          local_f0 = plVar8[1];
          FRenderCommandDispatcher::
          Enqueue<TRenderCommandTag<_InternalReleaseResource<FHairCardsInterpolationResource>_::__l5::TSTR_ReleaseHairResourceCommand1048>_>
                    (&UE::RenderCommandPipe::Groom,
                     (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_108);
          if (local_108[0] != (code *)0x0) {
            pppuVar6 = &local_f8;
            if (local_e0 != (undefined ***)0x0) {
              pppuVar6 = local_e0;
            }
            (*(code *)(*pppuVar6)[2])();
          }
          plVar8[1] = 0;
        }
        if (plVar8[2] != 0) {
          local_c8 = &
                     ___7__TFunction_OwnedObject_V<lambda_1>__4____InternalReleaseResource_UFHairStrandsRestResource____YAXAEAPEAUFHairStrandsRestResource___N_Z__00_0A__Function_Private_Core_UE__6B_
          ;
          local_b0 = (undefined ***)0x0;
          local_d8[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`InternalReleaseResource<FHairStrandsRestResource>'::__l5::<lambda_1>,void,FRHICommandList_&>
                        ::Call;
          local_c0 = plVar8[2];
          FRenderCommandDispatcher::
          Enqueue<TRenderCommandTag<_InternalReleaseResource<FHairStrandsRestResource>_::__l5::TSTR_ReleaseHairResourceCommand1048>_>
                    (&UE::RenderCommandPipe::Groom,
                     (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_d8);
          if (local_d8[0] != (code *)0x0) {
            pppuVar6 = &local_c8;
            if (local_b0 != (undefined ***)0x0) {
              pppuVar6 = local_b0;
            }
            (*(code *)(*pppuVar6)[2])();
          }
          plVar8[2] = 0;
        }
        if (plVar8[3] != 0) {
          local_98 = &
                     ___7__TFunction_OwnedObject_V<lambda_1>__4____InternalReleaseResource_UFHairStrandsInterpolationResource____YAXAEAPEAUFHairStrandsInterpolationResource___N_Z__00_0A__Function_Private_Core_UE__6B_
          ;
          local_80 = (undefined ***)0x0;
          local_a8[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`InternalReleaseResource<FHairStrandsInterpolationResource>'::__l5::<lambda_1>,void,FRHICommandList_&>
                        ::Call;
          local_90 = plVar8[3];
          FRenderCommandDispatcher::
          Enqueue<TRenderCommandTag<_InternalReleaseResource<FHairStrandsInterpolationResource>_::__l5::TSTR_ReleaseHairResourceCommand1048>_>
                    (&UE::RenderCommandPipe::Groom,
                     (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_a8);
          if (local_a8[0] != (code *)0x0) {
            pppuVar6 = &local_98;
            if (local_80 != (undefined ***)0x0) {
              pppuVar6 = local_80;
            }
            (*(code *)(*pppuVar6)[2])();
          }
          plVar8[3] = 0;
        }
        if (plVar8[4] != 0) {
          local_68 = &
                     ___7__TFunction_OwnedObject_V<lambda_1>__4____InternalReleaseResource_UFHairStrandsRaytracingResource____YAXAEAPEAUFHairStrandsRaytracingResource___N_Z__00_0A__Function_Private_Core_UE__6B_
          ;
          local_50 = (undefined ***)0x0;
          local_78[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`InternalReleaseResource<FHairStrandsRaytracingResource>'::__l5::<lambda_1>,void,FRHICommandList_&>
                        ::Call;
          local_60 = plVar8[4];
          FRenderCommandDispatcher::
          Enqueue<TRenderCommandTag<_InternalReleaseResource<FHairStrandsRaytracingResource>_::__l5::TSTR_ReleaseHairResourceCommand1048>_>
                    (&UE::RenderCommandPipe::Groom,
                     (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_78);
          if (local_78[0] != (code *)0x0) {
            pppuVar6 = &local_68;
            if (local_50 != (undefined ***)0x0) {
              pppuVar6 = local_50;
            }
            (*(code *)(*pppuVar6)[2])();
          }
          plVar8[4] = 0;
        }
        plVar8 = plVar8 + 6;
      }
    }
  }
  return;
}

// ReleaseGuidesResource @ 14dfd4e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UGroomAsset::ReleaseGuidesResource(UGroomAsset *this,uint param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined ***pppuVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  code *local_48 [2];
  undefined **local_38;
  longlong local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  if (-1 < (int)param_1) {
    local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
    if ((int)param_1 < (this->HairGroupsResources).ArrayNum) {
      iVar1 = (this->HairGroupsResources).ArrayNum;
      uVar4 = 0;
      if ((int)param_1 < iVar1) {
        uVar4 = ~param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (local_58 = (longlong)(int)param_1, local_50 = (longlong)iVar1,
         bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar6 = (this->HairGroupsResources).AllocatorInstance.Data + (longlong)(int)param_1 * 0x58;
      local_30 = *(longlong *)pFVar6;
      if (local_30 != 0) {
        local_38 = &
                   ___7__TFunction_OwnedObject_V<lambda_1>__4____InternalReleaseResource_UFHairStrandsRestResource____YAXAEAPEAUFHairStrandsRestResource___N_Z__00_0A__Function_Private_Core_UE__6B_
        ;
        local_20 = (undefined ***)0x0;
        local_48[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`InternalReleaseResource<FHairStrandsRestResource>'::__l5::<lambda_1>,void,FRHICommandList_&>
                      ::Call;
        FRenderCommandDispatcher::
        Enqueue<TRenderCommandTag<_InternalReleaseResource<FHairStrandsRestResource>_::__l5::TSTR_ReleaseHairResourceCommand1048>_>
                  (&UE::RenderCommandPipe::Groom,
                   (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_48);
        if (local_48[0] != (code *)0x0) {
          pppuVar5 = &local_38;
          if (local_20 != (undefined ***)0x0) {
            pppuVar5 = local_20;
          }
          (*(code *)(*pppuVar5)[2])();
        }
        *(longlong *)pFVar6 = 0;
      }
    }
  }
  return;
}

// ReleaseMeshesResource @ 14dfd4f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UGroomAsset::ReleaseMeshesResource(UGroomAsset *this,uint param_1)

{
  longlong *plVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined ***pppuVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8 [16];
  code *local_a8 [2];
  undefined **local_98;
  longlong local_90;
  undefined ***local_80;
  code *local_78 [2];
  undefined **local_68;
  longlong local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  if (-1 < (int)param_1) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
    lVar8 = (longlong)(int)param_1;
    if ((int)param_1 < (this->HairGroupsResources).ArrayNum) {
      iVar2 = (this->HairGroupsResources).ArrayNum;
      uVar6 = 0;
      if ((int)param_1 < iVar2) {
        uVar6 = ~param_1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (local_c8 = lVar8, local_c0 = (longlong)iVar2,
         bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->HairGroupsResources).AllocatorInstance.Data;
      iVar2 = *(int *)(pFVar3 + lVar8 * 0x58 + 0x48);
      plVar9 = *(longlong **)(pFVar3 + lVar8 * 0x58 + 0x40);
      plVar1 = plVar9 + (longlong)iVar2 * 3;
      while( true ) {
        if (*(int *)(pFVar3 + lVar8 * 0x58 + 0x48) != iVar2) {
          `TCheckedPointerIterator<FHairGroupResources::FMeshes::FLOD,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_b8);
        }
        if (plVar9 == plVar1) break;
        if (*plVar9 != 0) {
          local_80 = (undefined ***)0x0;
          local_98 = &
                     ___7__TFunction_OwnedObject_V<lambda_1>__4____InternalReleaseResource_UFHairMeshesRestResource____YAXAEAPEAUFHairMeshesRestResource___N_Z__00_0A__Function_Private_Core_UE__6B_
          ;
          local_a8[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`InternalReleaseResource<FHairMeshesRestResource>'::__l5::<lambda_1>,void,FRHICommandList_&>
                        ::Call;
          local_90 = *plVar9;
          FRenderCommandDispatcher::
          Enqueue<TRenderCommandTag<_InternalReleaseResource<FHairMeshesRestResource>_::__l5::TSTR_ReleaseHairResourceCommand1048>_>
                    (&UE::RenderCommandPipe::Groom,
                     (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_a8);
          if (local_a8[0] != (code *)0x0) {
            pppuVar7 = &local_98;
            if (local_80 != (undefined ***)0x0) {
              pppuVar7 = local_80;
            }
            (*(code *)(*pppuVar7)[2])();
          }
          *plVar9 = 0;
        }
        if (plVar9[1] != 0) {
          local_50 = (undefined ***)0x0;
          local_78[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`InternalReleaseResource<FHairStrandsRaytracingResource>'::__l5::<lambda_1>,void,FRHICommandList_&>
                        ::Call;
          local_68 = &
                     ___7__TFunction_OwnedObject_V<lambda_1>__4____InternalReleaseResource_UFHairStrandsRaytracingResource____YAXAEAPEAUFHairStrandsRaytracingResource___N_Z__00_0A__Function_Private_Core_UE__6B_
          ;
          local_60 = plVar9[1];
          FRenderCommandDispatcher::
          Enqueue<TRenderCommandTag<_InternalReleaseResource<FHairStrandsRaytracingResource>_::__l5::TSTR_ReleaseHairResourceCommand1048>_>
                    (&UE::RenderCommandPipe::Groom,
                     (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_78);
          if (local_78[0] != (code *)0x0) {
            pppuVar7 = &local_68;
            if (local_50 != (undefined ***)0x0) {
              pppuVar7 = local_50;
            }
            (*(code *)(*pppuVar7)[2])();
          }
          plVar9[1] = 0;
        }
        plVar9 = plVar9 + 3;
      }
    }
  }
  return;
}

// ReleaseResource @ 14dfd5130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UGroomAsset::ReleaseResource(UGroomAsset *this)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined ***pppuVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  code *local_c8 [2];
  undefined **local_b8;
  longlong local_b0;
  undefined ***local_a0;
  code *local_98 [2];
  undefined **local_88;
  longlong *local_80;
  undefined ***local_70;
  code *local_68 [2];
  undefined **local_58;
  longlong local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  uVar1 = (this->HairGroupsPlatformData).ArrayNum;
  uVar8 = 0;
  this->bIsInitialized = false;
  if (uVar1 != 0) {
    do {
      if (-1 < (int)uVar8) {
        iVar2 = (this->HairGroupsResources).ArrayNum;
        if ((int)uVar8 < iVar2) {
          if ((int)uVar8 < 0) {
            local_d8 = (longlong)(int)uVar8;
            local_d0 = (longlong)iVar2;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          pFVar9 = (this->HairGroupsResources).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x58;
          lVar3 = *(longlong *)pFVar9;
          if (lVar3 != 0) {
            local_c8[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<`InternalReleaseResource<FHairStrandsRestResource>'::__l5::<lambda_1>,void,FRHICommandList_&>
                          ::Call;
            local_a0 = (undefined ***)0x0;
            local_b8 = &
                       ___7__TFunction_OwnedObject_V<lambda_1>__4____InternalReleaseResource_UFHairStrandsRestResource____YAXAEAPEAUFHairStrandsRestResource___N_Z__00_0A__Function_Private_Core_UE__6B_
            ;
            local_b0 = lVar3;
            FRenderCommandDispatcher::
            Enqueue<TRenderCommandTag<_InternalReleaseResource<FHairStrandsRestResource>_::__l5::TSTR_ReleaseHairResourceCommand1048>_>
                      (&UE::RenderCommandPipe::Groom,
                       (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_c8);
            if (local_c8[0] != (code *)0x0) {
              pppuVar7 = &local_b8;
              if (local_a0 != (undefined ***)0x0) {
                pppuVar7 = local_a0;
              }
              (*(code *)(*pppuVar7)[2])();
            }
            *(longlong *)pFVar9 = 0;
          }
        }
        iVar2 = (this->HairGroupsResources).ArrayNum;
        if ((int)uVar8 < iVar2) {
          if ((int)uVar8 < 0) {
            local_d8 = (longlong)(int)uVar8;
            local_d0 = (longlong)iVar2;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          pFVar9 = (this->HairGroupsResources).AllocatorInstance.Data;
          InternalReleaseResource<FHairStrandsRestResource>
                    ((FHairStrandsRestResource **)(pFVar9 + (longlong)(int)uVar8 * 0x58 + 8),true);
          plVar4 = *(longlong **)(pFVar9 + (longlong)(int)uVar8 * 0x58 + 0x18);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x58))(plVar4);
            local_70 = (undefined ***)0x0;
            local_88 = &
                       ___7__TFunction_OwnedObject_V<lambda_1>__4____InternalReleaseResource_UFHairStrandsClusterResource____YAXAEAPEAUFHairStrandsClusterResource___N_Z__00_0A__Function_Private_Core_UE__6B_
            ;
            local_98[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<`InternalReleaseResource<FHairStrandsClusterResource>'::__l5::<lambda_1>,void,FRHICommandList_&>
                          ::Call;
            local_80 = plVar4;
            FRenderCommandDispatcher::
            Enqueue<TRenderCommandTag<_InternalReleaseResource<FHairStrandsClusterResource>_::__l5::TSTR_ReleaseHairResourceCommand1048>_>
                      (&UE::RenderCommandPipe::Groom,
                       (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_98);
            if (local_98[0] != (code *)0x0) {
              pppuVar7 = &local_88;
              if (local_70 != (undefined ***)0x0) {
                pppuVar7 = local_70;
              }
              (*(code *)(*pppuVar7)[2])();
            }
            *(undefined8 *)(pFVar9 + (longlong)(int)uVar8 * 0x58 + 0x18) = 0;
          }
          InternalReleaseResource<FHairStrandsInterpolationResource>
                    ((FHairStrandsInterpolationResource **)
                     (pFVar9 + (longlong)(int)uVar8 * 0x58 + 0x10),true);
          if (*(longlong *)(pFVar9 + (longlong)(int)uVar8 * 0x58 + 0x20) != 0) {
            local_58 = &
                       ___7__TFunction_OwnedObject_V<lambda_1>__4____InternalReleaseResource_UFHairStrandsRaytracingResource____YAXAEAPEAUFHairStrandsRaytracingResource___N_Z__00_0A__Function_Private_Core_UE__6B_
            ;
            local_40 = (undefined ***)0x0;
            local_68[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<`InternalReleaseResource<FHairStrandsRaytracingResource>'::__l5::<lambda_1>,void,FRHICommandList_&>
                          ::Call;
            local_50 = *(longlong *)(pFVar9 + (longlong)(int)uVar8 * 0x58 + 0x20);
            FRenderCommandDispatcher::
            Enqueue<TRenderCommandTag<_InternalReleaseResource<FHairStrandsRaytracingResource>_::__l5::TSTR_ReleaseHairResourceCommand1048>_>
                      (&UE::RenderCommandPipe::Groom,
                       (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_68);
            if (local_68[0] != (code *)0x0) {
              pppuVar7 = &local_58;
              if (local_40 != (undefined ***)0x0) {
                pppuVar7 = local_40;
              }
              (*(code *)(*pppuVar7)[2])();
            }
            *(undefined8 *)(pFVar9 + (longlong)(int)uVar8 * 0x58 + 0x20) = 0;
          }
        }
      }
      ReleaseCardsResource(this,uVar8);
      ReleaseMeshesResource(this,uVar8);
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar1);
  }
  return;
}

// ReleaseStrandsResource @ 14dfd57d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UGroomAsset::ReleaseStrandsResource(UGroomAsset *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined ***pppuVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  code *local_78 [2];
  undefined **local_68;
  longlong *local_60;
  undefined ***local_50;
  code *local_48 [2];
  undefined **local_38;
  longlong local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  if (-1 < (int)param_1) {
    local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
    lVar8 = (longlong)(int)param_1;
    if ((int)param_1 < (this->HairGroupsResources).ArrayNum) {
      iVar1 = (this->HairGroupsResources).ArrayNum;
      uVar6 = 0;
      if ((int)param_1 < iVar1) {
        uVar6 = ~param_1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (local_88 = lVar8, local_80 = (longlong)iVar1,
         bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->HairGroupsResources).AllocatorInstance.Data;
      InternalReleaseResource<FHairStrandsRestResource>
                ((FHairStrandsRestResource **)(pFVar2 + lVar8 * 0x58 + 8),true);
      plVar3 = *(longlong **)(pFVar2 + lVar8 * 0x58 + 0x18);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x58))(plVar3);
        local_50 = (undefined ***)0x0;
        local_68 = &
                   ___7__TFunction_OwnedObject_V<lambda_1>__4____InternalReleaseResource_UFHairStrandsClusterResource____YAXAEAPEAUFHairStrandsClusterResource___N_Z__00_0A__Function_Private_Core_UE__6B_
        ;
        local_78[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`InternalReleaseResource<FHairStrandsClusterResource>'::__l5::<lambda_1>,void,FRHICommandList_&>
                      ::Call;
        local_60 = plVar3;
        FRenderCommandDispatcher::
        Enqueue<TRenderCommandTag<_InternalReleaseResource<FHairStrandsClusterResource>_::__l5::TSTR_ReleaseHairResourceCommand1048>_>
                  (&UE::RenderCommandPipe::Groom,
                   (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_78);
        if (local_78[0] != (code *)0x0) {
          pppuVar7 = &local_68;
          if (local_50 != (undefined ***)0x0) {
            pppuVar7 = local_50;
          }
          (*(code *)(*pppuVar7)[2])();
        }
        *(undefined8 *)(pFVar2 + lVar8 * 0x58 + 0x18) = 0;
      }
      InternalReleaseResource<FHairStrandsInterpolationResource>
                ((FHairStrandsInterpolationResource **)(pFVar2 + lVar8 * 0x58 + 0x10),true);
      local_30 = *(longlong *)(pFVar2 + lVar8 * 0x58 + 0x20);
      if (local_30 != 0) {
        local_38 = &
                   ___7__TFunction_OwnedObject_V<lambda_1>__4____InternalReleaseResource_UFHairStrandsRaytracingResource____YAXAEAPEAUFHairStrandsRaytracingResource___N_Z__00_0A__Function_Private_Core_UE__6B_
        ;
        local_20 = (undefined ***)0x0;
        local_48[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`InternalReleaseResource<FHairStrandsRaytracingResource>'::__l5::<lambda_1>,void,FRHICommandList_&>
                      ::Call;
        FRenderCommandDispatcher::
        Enqueue<TRenderCommandTag<_InternalReleaseResource<FHairStrandsRaytracingResource>_::__l5::TSTR_ReleaseHairResourceCommand1048>_>
                  (&UE::RenderCommandPipe::Groom,
                   (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_48);
        if (local_48[0] != (code *)0x0) {
          pppuVar7 = &local_38;
          if (local_20 != (undefined ***)0x0) {
            pppuVar7 = local_20;
          }
          (*(code *)(*pppuVar7)[2])();
        }
        *(undefined8 *)(pFVar2 + lVar8 * 0x58 + 0x20) = 0;
      }
    }
  }
  return;
}

// RemoveUserDataOfClass @ 14dfd6190

void __thiscall
UGroomAsset::RemoveUserDataOfClass(UGroomAsset *this,TSubclassOf<UAssetUserData> param_1)

{
  int *piVar1;
  void *_Dst;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  uint uVar9;
  UObject *pUVar10;
  UObject *pUVar11;
  
  pUVar11 = (UObject *)0x0;
  pUVar8 = pUVar11;
  pUVar10 = pUVar11;
  if (0 < *(int *)&(this->HairGroupsPlatformData).AllocatorInstance.Data) {
    do {
      uVar9 = (uint)pUVar8;
      uVar5 = 0;
      if ((int)uVar9 < *(int *)&(this->HairGroupsPlatformData).AllocatorInstance.Data) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)(&pUVar10->field_0x0 + *(longlong *)&(this->EffectiveLODBias).ArrayNum);
      if (lVar2 != 0) {
        pUVar8 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar8 != (UObject *)0x0) goto LAB_14dfd624e;
LAB_14dfd627c:
          pUVar8 = pUVar11;
        }
        else {
          if (pUVar8 == (UObject *)0x0) goto LAB_14dfd627c;
          UE::GC::MarkAsReachable(pUVar8);
LAB_14dfd624e:
          pUVar7 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar7 == (UClass *)0x0) goto LAB_14dfd627c;
          iVar6 = (int)pUVar7->_padding_;
          if ((*(int *)&pUVar8[1].field_0x10 < iVar6) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar8[1].field_0x8 + (longlong)iVar6 * 8)
              != &pUVar7->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_14dfd627c;
        }
        lVar2 = *(longlong *)(lVar2 + 0x10);
        if ((*(int *)&pUVar8[1].field_0x10 <= *(int *)(lVar2 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)&pUVar8[1].field_0x10 * 8) ==
            &pUVar8[1].field_0x8)) {
          piVar1 = &(this->EffectiveLODBias).ArrayNum;
          uVar5 = 0;
          if ((int)uVar9 < *(int *)&(this->HairGroupsPlatformData).AllocatorInstance.Data) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          _Dst = (void *)(*(longlong *)piVar1 + (longlong)(int)uVar9 * 8);
          iVar6 = (*(int *)&(this->HairGroupsPlatformData).AllocatorInstance.Data - uVar9) + -1;
          if (iVar6 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar6 << 3);
          }
          iVar6 = *(int *)&(this->HairGroupsPlatformData).AllocatorInstance.Data + -1;
          *(int *)&(this->HairGroupsPlatformData).AllocatorInstance.Data = iVar6;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(ForAnyElementType *)piVar1,iVar6,
                     (int *)((longlong)&(this->HairGroupsPlatformData).AllocatorInstance.Data + 4));
          return;
        }
      }
      pUVar8 = (UObject *)(ulonglong)(uVar9 + 1);
      pUVar10 = (UObject *)&pUVar10->field_0x8;
    } while ((int)(uVar9 + 1) < *(int *)&(this->HairGroupsPlatformData).AllocatorInstance.Data);
  }
  return;
}

// Serialize @ 14dfd6670

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGroomAsset::Serialize(UGroomAsset *this,FArchive *param_1)

{
  longlong *plVar1;
  int iVar2;
  byte bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  byte local_res10 [8];
  FName local_res18;
  FString local_28;
  
  local_res10[0] = 0;
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FPhysicsObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
  if ((iVar2 < 0x6b) && ((param_1->field_0x28 & 1) != 0)) {
    pFVar4 = (this->HairGroupsRendering).AllocatorInstance.Data;
    iVar2 = (this->HairGroupsRendering).ArrayNum;
    pFVar5 = pFVar4 + (longlong)iVar2 * 0x30;
    while( true ) {
      if ((this->HairGroupsRendering).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FHairGroupsRendering,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (pFVar4 == pFVar5) break;
      pFVar4[0x14] = (FScriptContainerElement)0x1;
      pFVar4 = pFVar4 + 0x30;
    }
  }
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FPhysicsObjectVersion::GUID);
  if (iVar2 < 3) {
    if (1 < (byte)LogHairStrands._0_1_) {
      local_res18 = (FName)this->_padding_;
      ::FName::ToString(&local_res18,&local_28);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    FStripDataFlags::FStripDataFlags
              ((FStripDataFlags *)&local_res18,param_1,local_res10[0],
               &GOldestLoadablePackageFileUEVersion);
    bVar3 = 1;
    iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimObjectVersion::GUID);
    if (0xd < iVar2) {
      plVar1 = *(longlong **)&param_1->field_0x8;
      if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,1);
      }
      else {
        local_res10[0] = *(byte *)*plVar1;
        *plVar1 = *plVar1 + 1;
      }
      bVar3 = local_res10[0] & 1;
    }
    if (((ulonglong)local_res18 & 1) != 0) {
      InternalSerializePlatformDatas(param_1,(UObject *)this,&this->HairGroupsPlatformData);
      return;
    }
    iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
    if (((iVar2 < 0x6e) && ((param_1->field_0x28 & 1) != 0)) && (bVar3 == 0)) {
      DummySerizalizationForLegacyPurpose(param_1);
      return;
    }
  }
  return;
}

// Serialize @ 14dfd6870

void __thiscall UGroomAsset::Serialize(UGroomAsset *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetDeformedGroupSections @ 14dfd6a90

void __thiscall
UGroomAsset::SetDeformedGroupSections
          (UGroomAsset *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->DeformedGroupSections,param_1);
  return;
}

// SetDisableBelowMinLodStripping @ 14dfd6ab0

void __thiscall
UGroomAsset::SetDisableBelowMinLodStripping(UGroomAsset *this,FPerPlatformBool param_1)

{
  (this->DisableBelowMinLodStripping).Default = param_1.Default;
  return;
}

// SetEffectiveLODBias @ 14dfd6ac0

void __thiscall
UGroomAsset::SetEffectiveLODBias
          (UGroomAsset *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->EffectiveLODBias,param_1);
  return;
}

// SetEnableGlobalInterpolation @ 14dfd6ae0

void __thiscall UGroomAsset::SetEnableGlobalInterpolation(UGroomAsset *this,bool param_1)

{
  this->EnableGlobalInterpolation = param_1;
  return;
}

// SetEnableSimulationCache @ 14dfd6af0

void __thiscall UGroomAsset::SetEnableSimulationCache(UGroomAsset *this,bool param_1)

{
  this->EnableSimulationCache = param_1;
  return;
}

// SetHairGroupsCards @ 14dfd6c30

void __thiscall
UGroomAsset::SetHairGroupsCards
          (UGroomAsset *this,
          TArray<FHairGroupsCardsSourceDescription,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FHairGroupsCardsSourceDescription,TSizedDefaultAllocator<32>_>::operator=
            (&this->HairGroupsCards,param_1);
  return;
}

// SetHairGroupsInfo @ 14dfd6c50

void __thiscall
UGroomAsset::SetHairGroupsInfo
          (UGroomAsset *this,
          TArray<FHairGroupInfoWithVisibility,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<FHairGroupInfoWithVisibility,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FHairGroupInfoWithVisibility *pFVar4;
  
  pTVar2 = &this->HairGroupsInfo;
  if (pTVar2 != param_1) {
    DestructItems<FHairGroupInfoWithVisibility,int>
              ((FHairGroupInfoWithVisibility *)(pTVar2->AllocatorInstance).Data,
               (this->HairGroupsInfo).ArrayNum);
    iVar3 = param_1->ArrayNum;
    piVar1 = &(this->HairGroupsInfo).ArrayMax;
    pFVar4 = (FHairGroupInfoWithVisibility *)(param_1->AllocatorInstance).Data;
    (this->HairGroupsInfo).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FHairGroupInfoWithVisibility,FHairGroupInfoWithVisibility,int>
              ((pTVar2->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return;
}

// SetHairGroupsInterpolation @ 14dfd6cf0

void __thiscall
UGroomAsset::SetHairGroupsInterpolation
          (UGroomAsset *this,TArray<FHairGroupsInterpolation,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FHairGroupsInterpolation,TSizedDefaultAllocator<32>_>::operator=
            (&this->HairGroupsInterpolation,param_1);
  return;
}

// SetHairGroupsLOD @ 14dfd6d10

void __thiscall
UGroomAsset::SetHairGroupsLOD
          (UGroomAsset *this,TArray<FHairGroupsLOD,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FHairGroupsLOD,TSizedDefaultAllocator<32>_>::operator=(&this->HairGroupsLOD,param_1);
  return;
}

// SetHairGroupsMaterials @ 14dfd6d30

void __thiscall
UGroomAsset::SetHairGroupsMaterials
          (UGroomAsset *this,TArray<FHairGroupsMaterial,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FHairGroupsMaterial,TSizedDefaultAllocator<32>_>::operator=
            (&this->HairGroupsMaterials,param_1);
  return;
}

// SetHairGroupsMeshes @ 14dfd6d50

void __thiscall
UGroomAsset::SetHairGroupsMeshes
          (UGroomAsset *this,
          TArray<FHairGroupsMeshesSourceDescription,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FHairGroupsMeshesSourceDescription,TSizedDefaultAllocator<32>_>::operator=
            (&this->HairGroupsMeshes,param_1);
  return;
}

// SetHairGroupsPhysics @ 14dfd6d70

void __thiscall
UGroomAsset::SetHairGroupsPhysics
          (UGroomAsset *this,TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_>::operator=
            (&this->HairGroupsPhysics,param_1);
  return;
}

// SetHairGroupsPlatformData @ 14dfd6d90

void __thiscall
UGroomAsset::SetHairGroupsPlatformData
          (UGroomAsset *this,TArray<FHairGroupPlatformData,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<FHairGroupPlatformData,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FHairGroupPlatformData *pFVar4;
  
  pTVar2 = &this->HairGroupsPlatformData;
  if (pTVar2 != param_1) {
    DestructItems<FHairGroupPlatformData,int>
              ((FHairGroupPlatformData *)(pTVar2->AllocatorInstance).Data,
               (this->HairGroupsPlatformData).ArrayNum);
    iVar3 = param_1->ArrayNum;
    piVar1 = &(this->HairGroupsPlatformData).ArrayMax;
    pFVar4 = (FHairGroupPlatformData *)(param_1->AllocatorInstance).Data;
    (this->HairGroupsPlatformData).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2000,0x10,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FHairGroupPlatformData,FHairGroupPlatformData,int>
              ((pTVar2->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return;
}

// SetHairGroupsRendering @ 14dfd6e30

void __thiscall
UGroomAsset::SetHairGroupsRendering
          (UGroomAsset *this,TArray<FHairGroupsRendering,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FHairGroupsRendering,TSizedDefaultAllocator<32>_>::operator=
            (&this->HairGroupsRendering,param_1);
  return;
}

// SetHairInterpolationType @ 14dfd6e50

void __thiscall
UGroomAsset::SetHairInterpolationType(UGroomAsset *this,EGroomInterpolationType param_1)

{
  this->HairInterpolationType = param_1;
  return;
}

// SetHairWidth @ 14dfd6e60

void __thiscall UGroomAsset::SetHairWidth(UGroomAsset *this,float param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->HairGroupsRendering).ArrayNum;
  pFVar2 = (this->HairGroupsRendering).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->HairGroupsRendering).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FHairGroupsRendering,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    *(float *)(pFVar2 + 0x10) = param_1;
    pFVar2 = pFVar2 + 0x30;
  }
  return;
}

// SetMinLOD @ 14dfd7050

void __thiscall UGroomAsset::SetMinLOD(UGroomAsset *this,FPerPlatformInt param_1)

{
  (this->MinLOD).Default = param_1.Default;
  return;
}

// SetNumGroup @ 14dfd79e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UGroomAsset::SetNumGroup(UGroomAsset *this,uint param_1,bool param_2,bool param_3)

{
  int *piVar1;
  TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_> *this_00;
  TArray<FHairGroupsRendering,TSizedDefaultAllocator<32>_> *this_01;
  TArray<FHairGroupsInterpolation,TSizedDefaultAllocator<32>_> *this_02;
  TArray<FHairGroupsLOD,TSizedDefaultAllocator<32>_> *this_03;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FHairGroupPlatformData *pFVar7;
  FHairGroupsPhysics *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  UGroomAsset *pUVar14;
  undefined1 auStackY_cb8 [32];
  undefined1 local_c75 [5];
  undefined4 local_c70;
  ForAnyElementType local_c68;
  undefined8 local_c60;
  FScriptContainerElement *local_c58;
  undefined2 local_c50;
  undefined2 uStack_c4e;
  undefined2 local_c48;
  ushort uStack_c46;
  undefined4 uStack_c44;
  undefined4 uStack_c40;
  undefined4 uStack_c3c;
  undefined4 local_c38;
  undefined4 local_c34;
  uint uStack_c30;
  undefined4 uStack_c2c;
  undefined4 uStack_c28;
  FHairGroupsLOD local_c20;
  UGroomAsset *local_c08;
  FHairGroupInfoWithVisibility local_c00;
  FHairGroupsInterpolation local_bc0;
  FHairGroupResources local_b98;
  FHairGroupsRendering local_b40;
  undefined1 local_b08 [120];
  FHairMaterialConstraints local_a90;
  undefined **local_8a8;
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_8a0;
  void *local_860;
  undefined4 local_858;
  void *local_850;
  ForAnyElementType local_838;
  FHairGroupPlatformData local_818;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_cb8;
  local_c08 = this;
  ReleaseResource(this);
  if (param_2) {
    piVar1 = &(this->HairGroupsPlatformData).ArrayMax;
    pFVar7 = (FHairGroupPlatformData *)(this->HairGroupsPlatformData).AllocatorInstance.Data;
    iVar5 = (this->HairGroupsPlatformData).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FHairGroupPlatformData,int>(pFVar7,iVar5);
      (this->HairGroupsPlatformData).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2000,0x10,0,&(this->HairGroupsPlatformData).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FHairGroupPlatformData,int>(pFVar7,iVar5);
      (this->HairGroupsPlatformData).ArrayNum = 0;
    }
  }
  if (param_1 != (this->HairGroupsPlatformData).ArrayNum) {
    memset(&local_818,0,2000);
    pFVar7 = FHairGroupPlatformData::FHairGroupPlatformData(&local_818);
    TArray<FHairGroupPlatformData,TSizedDefaultAllocator<32>_>::Init
              (&this->HairGroupsPlatformData,pFVar7,param_1);
    FHairGroupPlatformData::~FHairGroupPlatformData(&local_818);
    local_b98.Strands.RaytracingResource = (FHairStrandsRaytracingResource *)0x0;
    local_b98.Strands._33_4_ = 0;
    local_b98.Strands._37_2_ = 0;
    local_b98.Strands._39_1_ = 0;
    local_b98.Strands.bIsCookedOut = false;
    local_b98.Cards.LODs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b98.Guides.RestResource = (FHairStrandsRestResource *)0x0;
    local_b98.Strands.RestResource = (FHairStrandsRestResource *)0x0;
    local_b98.Cards.LODs.ArrayNum = 0;
    local_b98.Cards.LODs.ArrayMax = 0;
    local_b98.Strands.InterpolationResource = (FHairStrandsInterpolationResource *)0x0;
    local_b98.Strands.ClusterResource = (FHairStrandsClusterResource *)0x0;
    local_b98.Meshes.LODs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b98.Meshes.LODs.ArrayNum = 0;
    local_b98.Meshes.LODs.ArrayMax = 0;
    local_b98.Debug.Resource = (FHairStrandsDebugResources *)0x0;
    TArray<FHairGroupResources,TSizedDefaultAllocator<32>_>::Init
              (&this->HairGroupsResources,&local_b98,param_1);
    if (local_b98.Meshes.LODs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b98.Meshes.LODs.AllocatorInstance.Data);
    }
    if (local_b98.Cards.LODs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b98.Cards.LODs.AllocatorInstance.Data);
    }
  }
  piVar1 = &(this->HairGroupsPhysics).ArrayNum;
  uVar10 = *piVar1;
  if (param_1 != uVar10) {
    this_00 = &this->HairGroupsPhysics;
    if (param_3) {
      pFVar8 = FHairGroupsPhysics::FHairGroupsPhysics((FHairGroupsPhysics *)local_b08);
      TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_>::Init(this_00,pFVar8,param_1);
      if (local_838.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_838.Data);
      }
      local_8a8 = &___7FIndexedCurve__6B_;
      if (local_850 != (void *)0x0) {
        FMemory::Free(local_850);
      }
      local_858 = 0;
      if (local_860 != (void *)0x0) {
        FMemory::Free(local_860);
      }
      TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_8a0);
      FHairMaterialConstraints::~FHairMaterialConstraints(&local_a90);
      if ((void *)local_b08._32_8_ != (void *)0x0) {
        FMemory::Free((void *)local_b08._32_8_);
      }
    }
    else if ((int)uVar10 < (int)param_1) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x2e8,8,param_1 - uVar10,&this_00->AllocatorInstance,piVar1,
                         &(this->HairGroupsPhysics).ArrayMax);
      DefaultConstructItems<FHairGroupsPhysics,int>
                ((this_00->AllocatorInstance).Data + (longlong)iVar5 * 0x2e8,param_1 - uVar10);
    }
    else {
      if ((int)param_1 < 0) goto LAB_14dfd829d;
      if ((int)param_1 < (int)uVar10) {
        uVar10 = uVar10 - param_1;
        if (((int)(uVar10 | param_1) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (uVar10 != 0) {
          TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (this_00,param_1,uVar10);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x2e8,8,&this_00->AllocatorInstance,(this->HairGroupsPhysics).ArrayNum,
                     &(this->HairGroupsPhysics).ArrayMax);
        }
      }
    }
  }
  this_01 = &this->HairGroupsRendering;
  uVar10 = (this->HairGroupsRendering).ArrayNum;
  piVar1 = &(this->HairGroupsRendering).ArrayNum;
  if (param_1 != uVar10) {
    if (param_3) {
      uStack_c30 = uStack_c30 & 0xffffff00;
      local_c34 = 0x3c23d70a;
      uStack_c2c = 0x3f800000;
      uStack_c28 = 0x3f800000;
      local_b40.GeometrySettings._4_4_ = uStack_c30;
      local_b40.GeometrySettings.HairWidth = 0.01;
      local_b40.GeometrySettings.HairRootScale = 1.0;
      local_b40.GeometrySettings.HairTipScale = 1.0;
      local_c50._0_1_ = false;
      local_c50._1_1_ = true;
      local_b40.ShadowSettings.bUseHairRaytracingGeometry = false;
      local_b40.ShadowSettings.bVoxelize = true;
      local_b40.ShadowSettings._10_2_ = uStack_c4e;
      local_b40.MaterialSlotName.ComparisonIndex.Value = 0;
      local_b40.MaterialSlotName.Number = 0;
      local_c58 = (FScriptContainerElement *)CONCAT44(__real_3f800000,__real_3f800000);
      local_b40.ShadowSettings.HairRaytracingRadiusScale = __real_3f800000;
      local_b40.ShadowSettings.HairShadowDensity = __real_3f800000;
      local_b40.Material.field0_0x0.DebugPtr = (TObjectPtr<UMaterialInterface>_u_0)0x0;
      local_b40.AdvancedSettings.bUseStableRasterization = false;
      local_b40.AdvancedSettings.bScatterSceneLighting = false;
      TArray<FHairGroupsRendering,TSizedDefaultAllocator<32>_>::Init(this_01,&local_b40,param_1);
    }
    else if ((int)uVar10 < (int)param_1) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x30,8,param_1 - uVar10,&this_01->AllocatorInstance,piVar1,
                         &(this->HairGroupsRendering).ArrayMax);
      DefaultConstructItems<FHairGroupsRendering,int>
                ((this_01->AllocatorInstance).Data + (longlong)iVar5 * 0x30,param_1 - uVar10);
    }
    else {
      if ((int)param_1 < 0) goto LAB_14dfd829d;
      if ((int)param_1 < (int)uVar10) {
        uVar10 = uVar10 - param_1;
        if (((int)(uVar10 | param_1) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (uVar10 != 0) {
          pFVar9 = (this_01->AllocatorInstance).Data + (longlong)(int)param_1 * 0x30;
          iVar5 = (*piVar1 - uVar10) - param_1;
          if (iVar5 != 0) {
            memmove(pFVar9,pFVar9 + (longlong)(int)uVar10 * 0x30,(longlong)iVar5 * 0x30);
          }
          *piVar1 = *piVar1 - uVar10;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,&this_01->AllocatorInstance,*piVar1,
                     &(this->HairGroupsRendering).ArrayMax);
        }
      }
    }
  }
  this_02 = &this->HairGroupsInterpolation;
  uVar10 = (this->HairGroupsInterpolation).ArrayNum;
  piVar1 = &(this->HairGroupsInterpolation).ArrayNum;
  if (param_1 != uVar10) {
    if (param_3) {
      local_c48 = 0;
      uStack_c44 = 0x3dcccccd;
      uStack_c40 = 10;
      uStack_c3c = 4;
      iVar5 = (uint)uStack_c46 << 0x10;
      local_bc0.InterpolationSettings.HairToGuideDensity = 0.1;
      local_bc0.InterpolationSettings.GuideType = (char)iVar5;
      local_bc0.InterpolationSettings.bOverrideGuides_DEPRECATED = (bool)(char)((uint)iVar5 >> 8);
      local_bc0.InterpolationSettings._2_2_ = (short)((uint)iVar5 >> 0x10);
      local_bc0.InterpolationSettings.RiggedGuideNumCurves = 10;
      local_bc0.InterpolationSettings.RiggedGuideNumPoints = 4;
      local_c38 = 2;
      local_bc0.RiggingSettings.bEnableRigging_DEPRECATED = false;
      local_bc0.RiggingSettings.NumCurves_DEPRECATED = 10;
      local_bc0.RiggingSettings.NumPoints_DEPRECATED = 4;
      local_bc0.DecimationSettings.CurveDecimation = 1.0;
      local_bc0.DecimationSettings.VertexDecimation = 1.0;
      local_bc0.InterpolationSettings.InterpolationQuality = High;
      local_bc0.InterpolationSettings.InterpolationDistance = Parametric;
      local_bc0.InterpolationSettings.bRandomizeGuide = false;
      local_bc0.InterpolationSettings.bUseUniqueGuide = false;
      TArray<FHairGroupsInterpolation,TSizedDefaultAllocator<32>_>::Init(this_02,&local_bc0,param_1)
      ;
    }
    else if ((int)uVar10 < (int)param_1) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x28,4,param_1 - uVar10,&this_02->AllocatorInstance,piVar1,
                         &(this->HairGroupsInterpolation).ArrayMax);
      DefaultConstructItems<FHairGroupsInterpolation,int>
                ((this_02->AllocatorInstance).Data + (longlong)iVar5 * 0x28,param_1 - uVar10);
    }
    else {
      if ((int)param_1 < 0) goto LAB_14dfd829d;
      if ((int)param_1 < (int)uVar10) {
        uVar10 = uVar10 - param_1;
        if (((int)(uVar10 | param_1) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (uVar10 != 0) {
          pFVar9 = (this_02->AllocatorInstance).Data + (longlong)(int)param_1 * 0x28;
          iVar5 = (*piVar1 - uVar10) - param_1;
          if (iVar5 != 0) {
            memmove(pFVar9,pFVar9 + (longlong)(int)uVar10 * 0x28,(longlong)iVar5 * 0x28);
          }
          *piVar1 = *piVar1 - uVar10;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,4,&this_02->AllocatorInstance,*piVar1,
                     &(this->HairGroupsInterpolation).ArrayMax);
        }
      }
    }
  }
  piVar1 = &(this->HairGroupsLOD).ArrayNum;
  uVar10 = *piVar1;
  pUVar14 = this;
  if (param_1 != uVar10) {
    this_03 = &this->HairGroupsLOD;
    if (param_3) {
      local_c20.AutoLODBias = 0.0;
      local_c20._4_4_ = 0;
      local_c20.LODs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c20.LODs.ArrayNum = 0;
      local_c20.LODs.ArrayMax = 0;
      TArray<FHairGroupsLOD,TSizedDefaultAllocator<32>_>::Init(this_03,&local_c20,param_1);
      if (local_c20.LODs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c20.LODs.AllocatorInstance.Data);
      }
    }
    else if ((int)uVar10 < (int)param_1) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,param_1 - uVar10,&this_03->AllocatorInstance,piVar1,
                         &(this->HairGroupsLOD).ArrayMax);
      DefaultConstructItems<FHairGroupsLOD,int>
                ((this_03->AllocatorInstance).Data + (longlong)iVar5 * 0x18,param_1 - uVar10);
    }
    else {
      if ((int)param_1 < 0) {
LAB_14dfd829d:
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
      }
      if ((int)param_1 < (int)uVar10) {
        uVar10 = uVar10 - param_1;
        if (((int)(uVar10 | param_1) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (uVar10 != 0) {
          TArray<FHairGroupsLOD,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_03,param_1,uVar10);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,&this_03->AllocatorInstance,(this->HairGroupsLOD).ArrayNum,
                     &(this->HairGroupsLOD).ArrayMax);
        }
      }
    }
    iVar5 = (this->HairGroupsLOD).ArrayNum;
    pFVar13 = (this_03->AllocatorInstance).Data;
    pFVar9 = pFVar13 + 8;
    pFVar12 = pFVar13 + (longlong)iVar5 * 0x18;
    local_c58 = pFVar12;
    while( true ) {
      if ((this->HairGroupsLOD).ArrayNum != iVar5) {
        `TCheckedPointerIterator<FHairGroupsLOD,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_c75);
      }
      pUVar14 = local_c08;
      if (pFVar13 == pFVar12) break;
      if (*(int *)(pFVar9 + 8) == 0) {
        local_c70 = 0;
        local_c68.Data = (FScriptContainerElement *)0x0;
        local_c60 = 0;
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x41c,&local_c68,(int *)((longlong)&local_c60 + 4));
        FVar3.Data = local_c68.Data;
        lVar11 = (longlong)iVar6 * 0x1c;
        local_c60 = CONCAT44(local_c60._4_4_,iVar6 + 1);
        DefaultConstructItems<FHairLODSettings,int>(local_c68.Data + lVar11,1);
        *(undefined4 *)(FVar3.Data + lVar11 + 0xc) = 0x3f800000;
        *(undefined4 *)(FVar3.Data + lVar11) = 0x3f800000;
        *(undefined4 *)pFVar13 = local_c70;
        if (pFVar9 != (FScriptContainerElement *)&local_c68) {
          if (*(void **)pFVar9 != (void *)0x0) {
            FMemory::Free(*(void **)pFVar9);
          }
          *(FScriptContainerElement **)pFVar9 = local_c68.Data;
          *(undefined4 *)(pFVar9 + 8) = (undefined4)local_c60;
          *(undefined4 *)(pFVar9 + 0xc) = local_c60._4_4_;
          local_c60 = 0;
          local_c68.Data = (FScriptContainerElement *)0x0;
        }
        pFVar12 = local_c58;
        if (local_c68.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c68.Data);
          pFVar12 = local_c58;
        }
      }
      pFVar13 = pFVar13 + 0x18;
      pFVar9 = pFVar9 + 0x18;
    }
  }
  if (param_1 != (pUVar14->HairGroupsInfo).ArrayNum) {
    if (param_3) {
      local_c00._57_4_ = 0;
      local_c00._61_2_ = 0;
      local_c00._63_1_ = 0;
      local_c00._padding_ = 0;
      local_c00._padding_ = 0;
      local_c00._padding_ = 0;
      local_c00._padding_ = 0;
      local_c00._padding_ = 0;
      local_c00._padding_ = 0;
      local_c00._padding_ = 0;
      local_c00.bIsVisible = true;
      TArray<FHairGroupInfoWithVisibility,TSizedDefaultAllocator<32>_>::Init
                (&pUVar14->HairGroupsInfo,&local_c00,param_1);
      if ((void *)local_c00._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_c00._padding_);
      }
    }
    else {
      TArray<FHairGroupInfoWithVisibility,TSizedDefaultAllocator<32>_>::SetNum
                (&pUVar14->HairGroupsInfo,param_1,Default);
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&pUVar14->EffectiveLODBias,param_1,Default);
  return;
}

// SetRiggedSkeletalMesh @ 14dfd82c0

void __thiscall UGroomAsset::SetRiggedSkeletalMesh(UGroomAsset *this,USkeletalMesh *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USkeletalMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->RiggedSkeletalMesh).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->RiggedSkeletalMesh).field0_0x0.DebugPtr = param_1;
  return;
}

// SetScatterSceneLighting @ 14dfd8310

void __thiscall UGroomAsset::SetScatterSceneLighting(UGroomAsset *this,bool param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->HairGroupsRendering).ArrayNum;
  pFVar2 = (this->HairGroupsRendering).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->HairGroupsRendering).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FHairGroupsRendering,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2[0x2d] = (FScriptContainerElement)param_1;
    pFVar2 = pFVar2 + 0x30;
  }
  return;
}

// SetStableRasterization @ 14dfd8450

void __thiscall UGroomAsset::SetStableRasterization(UGroomAsset *this,bool param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->HairGroupsRendering).ArrayNum;
  pFVar2 = (this->HairGroupsRendering).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->HairGroupsRendering).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FHairGroupsRendering,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    pFVar2[0x2c] = (FScriptContainerElement)param_1;
    pFVar2 = pFVar2 + 0x30;
  }
  return;
}

// StaticRegisterNativesUGroomAsset @ 14dfd88f0

void __cdecl UGroomAsset::StaticRegisterNativesUGroomAsset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x19;
  local_18.DataPtr = Z_Construct_UClass_UGroomAsset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateHairGroupsInfo @ 14dfda9c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UGroomAsset::UpdateHairGroupsInfo(UGroomAsset *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  
  iVar1 = (this->HairGroupsPlatformData).ArrayNum;
  iVar2 = (this->HairGroupsInfo).ArrayNum;
  TArray<FHairGroupInfoWithVisibility,TSizedDefaultAllocator<32>_>::SetNum
            (&this->HairGroupsInfo,iVar1,Default);
  iVar3 = (this->HairGroupsPlatformData).ArrayNum;
  uVar10 = 0;
  pFVar9 = (this->HairGroupsPlatformData).AllocatorInstance.Data;
  pFVar11 = pFVar9 + (longlong)iVar3 * 2000;
  while( true ) {
    if ((this->HairGroupsPlatformData).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FHairGroupPlatformData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar11) break;
    uVar7 = 0;
    if ((int)uVar10 < (this->HairGroupsInfo).ArrayNum) {
      uVar7 = ~uVar10 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar4 = (this->HairGroupsInfo).AllocatorInstance.Data;
    lVar8 = (longlong)(int)uVar10 * 0x40;
    *(uint *)(pFVar4 + lVar8) = uVar10;
    *(undefined4 *)(pFVar4 + lVar8 + 0x10) = *(undefined4 *)(pFVar9 + 0x2c8);
    *(undefined4 *)(pFVar4 + lVar8 + 0x14) = *(undefined4 *)(pFVar9 + 8);
    *(undefined4 *)(pFVar4 + lVar8 + 0x18) = *(undefined4 *)(pFVar9 + 0x2cc);
    *(undefined4 *)(pFVar4 + lVar8 + 0x1c) = *(undefined4 *)(pFVar9 + 0xc);
    *(undefined4 *)(pFVar4 + lVar8 + 0x20) = *(undefined4 *)(pFVar9 + 0x2dc);
    if (iVar2 != iVar1) {
      pFVar4[lVar8 + 0x38] = (FScriptContainerElement)0x1;
    }
    uVar10 = uVar10 + 1;
    pFVar9 = pFVar9 + 2000;
  }
  return;
}

// UpdatePhysicsSystems @ 14dfdae70

void __thiscall UGroomAsset::UpdatePhysicsSystems(UGroomAsset *this)

{
  int iVar1;
  UClass *pUVar2;
  FSoftObjectPtr *this_00;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  TStringView<wchar_t> *pTVar5;
  TStringView<wchar_t> *pTVar6;
  UObject *local_res8;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  pFVar4 = (this->HairGroupsPhysics).AllocatorInstance.Data;
  iVar1 = (this->HairGroupsPhysics).ArrayNum;
  this_00 = (FSoftObjectPtr *)(pFVar4 + 8);
  pFVar3 = pFVar4 + (longlong)iVar1 * 0x2e8;
  do {
    if ((this->HairGroupsPhysics).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FHairGroupsPhysics,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar4 == pFVar3) {
      return;
    }
    if (this_00[-1].field_0x22 == '\x04') {
      pUVar2 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
      pTVar6 = &local_48;
      local_38._12_4_ = uStack_5c;
      local_38.Size = 0x3d;
      pTVar5 = &local_38;
      local_48.DataPtr = (wchar_t *)0x0;
      local_48.Size = 0;
      local_48._12_4_ = 0;
      local_38.DataPtr = L"/HairStrands/Emitters/StableSpringsSystem.StableSpringsSystem";
LAB_14dfdaf81:
      local_res8 = StaticLoadObject(pUVar2,(UObject *)0x0,pTVar5,pTVar6,0,(UPackageMap *)0x0,true,
                                    (FLinkerInstancingContext *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      FSoftObjectPtr::operator=(this_00,(FObjectPtr)&local_res8);
    }
    else if (this_00[-1].field_0x22 == '\x02') {
      pUVar2 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
      pTVar6 = &local_38;
      local_48._12_4_ = uStack_4c;
      local_48.Size = 0x37;
      pTVar5 = &local_48;
      local_38.DataPtr = (wchar_t *)0x0;
      local_38.Size = 0;
      local_38._12_4_ = 0;
      local_48.DataPtr = L"/HairStrands/Emitters/StableRodsSystem.StableRodsSystem";
      goto LAB_14dfdaf81;
    }
    pFVar4 = pFVar4 + 0x2e8;
    this_00 = (FSoftObjectPtr *)&this_00[0x12].field_0x18;
  } while( true );
}

// ValidateSimulationCache @ 14dfdb0f0

void __thiscall UGroomAsset::ValidateSimulationCache(UGroomAsset *this)

{
  this->EnableSimulationCache = true;
  return;
}

// WriteDataflowContent @ 14dfdb110

void __thiscall
UGroomAsset::WriteDataflowContent(UGroomAsset *this,TObjectPtr<UDataflowBaseContent> *param_1)

{
  UDataflowBaseContent *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  FName this_01;
  FString *pFVar4;
  UDataflow *local_res10;
  FString local_18;
  
  if ((param_1->field0_0x0).DebugPtr != (UDataflowBaseContent *)0x0) {
    pUVar3 = UDataflowGroomContent::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar3);
    if ((bVar2) &&
       (this_00 = (param_1->field0_0x0).DebugPtr, this_00 != (UDataflowBaseContent *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      pcVar1 = *(code **)(this_00->_padding_ + 0x2b8);
      local_res10 = FDataflowInstance::GetDataflowAsset((FDataflowInstance *)&this->_padding_);
      (*pcVar1)(this_00,&local_res10);
      this_01 = FDataflowInstance::GetDataflowTerminal((FDataflowInstance *)&this->_padding_);
      pFVar4 = ::FName::ToString((FName *)this_01,&local_18);
      ::FString::operator=(&this_00->DataflowTerminal,pFVar4);
      UDataflowBaseContent::SetConstructionDirty(this_00,true);
      UDataflowBaseContent::SetSimulationDirty(this_00,true);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// __VTableCtorCaller @ 14dfdb8c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UGroomAsset::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined ***)pUVar1 = &_vftable__for__UObject__;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined ***)(pUVar1 + 1) = &_vftable__for__IInterface_AssetUserData__;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined ***)&pUVar1[1].field_0x8 = &_vftable__for__IDataflowContentOwner__;
    *(undefined8 *)(pUVar1 + 2) = 2;
    *(undefined ***)&pUVar1[2].field_0x8 = &_vftable__for__IDataflowInstanceInterface__;
    pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0;
    FGroomDataflowSettings::FGroomDataflowSettings
              ((FGroomDataflowSettings *)&pUVar1[2].field_0x18,(UObject *)0x0,(UDataflow *)0x0,
               (FName)0x0);
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x18 = 0;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 8) = 0;
    *(undefined8 *)&pUVar1[8].field_0x8 = 0;
    *(undefined8 *)&pUVar1[8].field_0x10 = 0;
    *(undefined2 *)&pUVar1[8].field_0x18 = 0;
    pUVar1[8].field_0x1a = 8;
    *(undefined8 *)&pUVar1[8].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 9) = 0;
    *(undefined8 *)&pUVar1[9].field_0x8 = 0;
    *(undefined4 *)&pUVar1[9].field_0x10 = 0;
    pUVar1[9].field_0x14 = 0;
    *(undefined8 *)&pUVar1[9].field_0x18 = 0;
    *(undefined8 *)&pUVar1[9].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 10) = 0;
    *(undefined8 *)&pUVar1[10].field_0x8 = 0;
    *(undefined8 *)&pUVar1[10].field_0x10 = 0;
    *(undefined8 *)&pUVar1[10].field_0x18 = 0;
    *(undefined8 *)&pUVar1[10].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xb) = 0;
    pUVar1[0xb].field_0x8 = 0;
    *(undefined4 *)&pUVar1[0xb].field_0xc = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// _getUObject @ 14dfdbab0

UObject * __thiscall UGroomAsset::_getUObject(UGroomAsset *this)

{
  return (UObject *)&this[-1].HairGroupsResources;
}

// _getUObject`adjustor{8}' @ 14dfdbabc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl UGroomAsset::_getUObject`adjustor{8}'
   (void)const __ptr64 */

UObject * __thiscall UGroomAsset::_getUObject_adjustor_8__(UGroomAsset *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UGroomAsset *)&this[-1].bIsInitialized);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{48}' @ 14dfdbacc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl UGroomAsset::_getUObject`adjustor{48}'
   (void)const __ptr64 */

UObject * __thiscall UGroomAsset::_getUObject_adjustor_48__(UGroomAsset *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UGroomAsset *)&this[-1].HairGroupsPlatformData.ArrayNum);
  return (UObject *)pUVar1;
}

// execCreateGroomDataflow @ 14dfdd7e0

void __cdecl UGroomAsset::execCreateGroomDataflow(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execGetDeformedGroupSections @ 14dfdd800

void __cdecl
UGroomAsset::execGetDeformedGroupSections(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<int,TSizedDefaultAllocator<32>_> *)(param_1 + 9));
  return;
}

// execGetEnableGlobalInterpolation @ 14dfdd830

void __cdecl
UGroomAsset::execGetEnableGlobalInterpolation(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[8].field_0x18;
  return;
}

// execGetEnableSimulationCache @ 14dfdd860

void __cdecl
UGroomAsset::execGetEnableSimulationCache(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[8].field_0x19;
  return;
}

// execGetHairGroupsCards @ 14dfdd920

void __cdecl UGroomAsset::execGetHairGroupsCards(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FHairGroupsCardsSourceDescription,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<FHairGroupsCardsSourceDescription,TSizedDefaultAllocator<32>_> *)
                     &param_1[7].field_0x10);
  return;
}

// execGetHairGroupsInterpolation @ 14dfdd950

void __cdecl
UGroomAsset::execGetHairGroupsInterpolation(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FHairGroupsInterpolation,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<FHairGroupsInterpolation,TSizedDefaultAllocator<32>_> *)
                     &param_1[6].field_0x18);
  return;
}

// execGetHairGroupsLOD @ 14dfdd980

void __cdecl UGroomAsset::execGetHairGroupsLOD(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FHairGroupsLOD,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<FHairGroupsLOD,TSizedDefaultAllocator<32>_> *)(param_1 + 7));
  return;
}

// execGetHairGroupsMaterials @ 14dfdd9b0

void __cdecl UGroomAsset::execGetHairGroupsMaterials(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FHairGroupsMaterial,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<FHairGroupsMaterial,TSizedDefaultAllocator<32>_> *)
                     &param_1[8].field_0x8);
  return;
}

// execGetHairGroupsMeshes @ 14dfdd9e0

void __cdecl UGroomAsset::execGetHairGroupsMeshes(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FHairGroupsMeshesSourceDescription,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<FHairGroupsMeshesSourceDescription,TSizedDefaultAllocator<32>_> *)
                     &param_1[7].field_0x20);
  return;
}

// execGetHairGroupsPhysics @ 14dfdda10

void __cdecl UGroomAsset::execGetHairGroupsPhysics(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_> *)&param_1[6].field_0x8
            );
  return;
}

// execGetHairGroupsRendering @ 14dfdda40

void __cdecl UGroomAsset::execGetHairGroupsRendering(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FHairGroupsRendering,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<FHairGroupsRendering,TSizedDefaultAllocator<32>_> *)
                     &param_1[5].field_0x20);
  return;
}

// execGetHairInterpolationType @ 14dfdda70

void __cdecl
UGroomAsset::execGetHairInterpolationType(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[8].field_0x1a;
  return;
}

// execGetRiggedSkeletalMesh @ 14dfddb00

void __cdecl UGroomAsset::execGetRiggedSkeletalMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[8].field_0x20;
  return;
}

// execSetDeformedGroupSections @ 14dfddce0

void __cdecl
UGroomAsset::execSetDeformedGroupSections(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(param_1 + 9),pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetEnableGlobalInterpolation @ 14dfddda0

void __cdecl
UGroomAsset::execSetEnableGlobalInterpolation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[8].field_0x18 = local_res8[0] != 0;
  return;
}

// execSetEnableSimulationCache @ 14dfdde30

void __cdecl
UGroomAsset::execSetEnableSimulationCache(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[8].field_0x19 = local_res8[0] != 0;
  return;
}

// execSetHairGroupsCards @ 14dfde0b0

void __cdecl UGroomAsset::execSetHairGroupsCards(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FHairGroupsCardsSourceDescription,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FHairGroupsCardsSourceDescription,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FHairGroupsCardsSourceDescription,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FHairGroupsCardsSourceDescription,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FHairGroupsCardsSourceDescription,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FHairGroupsCardsSourceDescription,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FHairGroupsCardsSourceDescription,TSizedDefaultAllocator<32>_> *)
             &param_1[7].field_0x10,pTVar2);
  DestructItems<FHairGroupsCardsSourceDescription,int>
            ((FHairGroupsCardsSourceDescription *)local_18.AllocatorInstance.Data,local_18.ArrayNum)
  ;
  if ((FHairGroupsCardsSourceDescription *)local_18.AllocatorInstance.Data !=
      (FHairGroupsCardsSourceDescription *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetHairGroupsInterpolation @ 14dfde170

void __cdecl
UGroomAsset::execSetHairGroupsInterpolation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FHairGroupsInterpolation,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FHairGroupsInterpolation,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FHairGroupsInterpolation,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FHairGroupsInterpolation,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FHairGroupsInterpolation,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FHairGroupsInterpolation,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FHairGroupsInterpolation,TSizedDefaultAllocator<32>_> *)&param_1[6].field_0x18,
             pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetHairGroupsLOD @ 14dfde230

void __cdecl UGroomAsset::execSetHairGroupsLOD(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FHairGroupsLOD,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FHairGroupsLOD,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FHairGroupsLOD,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FHairGroupsLOD,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FHairGroupsLOD,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FHairGroupsLOD,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FHairGroupsLOD,TSizedDefaultAllocator<32>_> *)(param_1 + 7),pTVar2);
  DestructItems<FHairGroupsLOD,int>
            ((FHairGroupsLOD *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FHairGroupsLOD *)local_18.AllocatorInstance.Data != (FHairGroupsLOD *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetHairGroupsMaterials @ 14dfde2f0

void __cdecl UGroomAsset::execSetHairGroupsMaterials(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FHairGroupsMaterial,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FHairGroupsMaterial,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FHairGroupsMaterial,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<FHairGroupsMaterial,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FHairGroupsMaterial,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FHairGroupsMaterial,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FHairGroupsMaterial,TSizedDefaultAllocator<32>_> *)&param_1[8].field_0x8,pTVar2
            );
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetHairGroupsMeshes @ 14dfde3b0

void __cdecl UGroomAsset::execSetHairGroupsMeshes(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FHairGroupsMeshesSourceDescription,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FHairGroupsMeshesSourceDescription,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FHairGroupsMeshesSourceDescription,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FHairGroupsMeshesSourceDescription,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FHairGroupsMeshesSourceDescription,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FHairGroupsMeshesSourceDescription,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FHairGroupsMeshesSourceDescription,TSizedDefaultAllocator<32>_> *)
             &param_1[7].field_0x20,pTVar2);
  DestructItems<FHairGroupsMeshesSourceDescription,int>
            ((FHairGroupsMeshesSourceDescription *)local_18.AllocatorInstance.Data,local_18.ArrayNum
            );
  if ((FHairGroupsMeshesSourceDescription *)local_18.AllocatorInstance.Data !=
      (FHairGroupsMeshesSourceDescription *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetHairGroupsPhysics @ 14dfde470

void __cdecl UGroomAsset::execSetHairGroupsPhysics(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FHairGroupsPhysics,TSizedDefaultAllocator<32>_> *)&param_1[6].field_0x8,pTVar2)
  ;
  DestructItems<FHairGroupsPhysics,int>
            ((FHairGroupsPhysics *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FHairGroupsPhysics *)local_18.AllocatorInstance.Data != (FHairGroupsPhysics *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetHairGroupsRendering @ 14dfde530

void __cdecl UGroomAsset::execSetHairGroupsRendering(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FHairGroupsRendering,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FHairGroupsRendering,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FHairGroupsRendering,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<FHairGroupsRendering,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FHairGroupsRendering,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FHairGroupsRendering,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FHairGroupsRendering,TSizedDefaultAllocator<32>_> *)&param_1[5].field_0x20,
             pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetHairInterpolationType @ 14dfde5f0

void __cdecl
UGroomAsset::execSetHairInterpolationType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[8].field_0x1a = local_res8[0];
  return;
}

// execSetRiggedSkeletalMesh @ 14dfde790

void __cdecl UGroomAsset::execSetRiggedSkeletalMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  *(UObject **)&param_1[8].field_0x20 = pUVar2;
  return;
}

