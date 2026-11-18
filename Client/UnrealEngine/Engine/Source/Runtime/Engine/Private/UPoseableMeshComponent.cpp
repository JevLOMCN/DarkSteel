// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 31

// StaticClass @ 147893570

UClass * __cdecl UPoseableMeshComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseableMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PoseableMeshComponent",
               &Z_Registration_Info_UClass_UPoseableMeshComponent.InnerSingleton,
               StaticRegisterNativesUPoseableMeshComponent,0xab0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseableMeshComponent>,
               InternalVTableHelperCtorCaller<UPoseableMeshComponent>,local_res8,
               USkinnedMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseableMeshComponent.InnerSingleton;
}

// UPoseableMeshComponent @ 1478aaa20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPoseableMeshComponent * __thiscall
UPoseableMeshComponent::UPoseableMeshComponent(UPoseableMeshComponent *this,FVTableHelper *param_1)

{
  USkinnedMeshComponent::USkinnedMeshComponent((USkinnedMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&_vftable__for__ILODSyncInterface__;
  this->_padding_ = (longlong)&_vftable__for__IClothSimulationDataProvider__;
  (this->BoneSpaceTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneSpaceTransforms).ArrayNum = 0;
  (this->BoneSpaceTransforms).ArrayMax = 0;
  FBoneContainer::FBoneContainer(&this->RequiredBones);
  return this;
}

// UPoseableMeshComponent @ 1478aaac0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPoseableMeshComponent * __thiscall
UPoseableMeshComponent::UPoseableMeshComponent
          (UPoseableMeshComponent *this,FObjectInitializer *param_1)

{
  USkinnedMeshComponent::USkinnedMeshComponent((USkinnedMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&_vftable__for__ILODSyncInterface__;
  this->_padding_ = (longlong)&_vftable__for__IClothSimulationDataProvider__;
  (this->BoneSpaceTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneSpaceTransforms).ArrayNum = 0;
  (this->BoneSpaceTransforms).ArrayMax = 0;
  FBoneContainer::FBoneContainer(&this->RequiredBones);
  this->bNeedsRefreshTransform = false;
  return this;
}

// ~UPoseableMeshComponent @ 1478ac5e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPoseableMeshComponent::~UPoseableMeshComponent(UPoseableMeshComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&_vftable__for__ILODSyncInterface__;
  this->_padding_ = (longlong)&_vftable__for__IClothSimulationDataProvider__;
  FBoneContainer::~FBoneContainer(&this->RequiredBones);
  pFVar1 = (this->BoneSpaceTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  USkinnedMeshComponent::~USkinnedMeshComponent((USkinnedMeshComponent *)this);
  return;
}

// AllocateTransformData @ 1478b3c00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UPoseableMeshComponent::AllocateTransformData(UPoseableMeshComponent *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  USkinnedAsset *pUVar6;
  longlong lVar7;
  uint uVar8;
  ForAnyElementType local_38;
  int local_30 [2];
  FCurveFilterSettings local_28;
  TArrayView<unsigned_short_const_,int> local_18;
  
  bVar3 = USkinnedMeshComponent::AllocateTransformData((USkinnedMeshComponent *)this);
  if (!bVar3) {
    piVar1 = &(this->BoneSpaceTransforms).ArrayMax;
    (this->BoneSpaceTransforms).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,0,&(this->BoneSpaceTransforms).AllocatorInstance,0,piVar1);
    }
    return false;
  }
  pUVar6 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
  lVar7 = (**(code **)(*(longlong *)pUVar6 + 800))(pUVar6);
  if ((this->BoneSpaceTransforms).ArrayNum != *(int *)(lVar7 + 0x28)) {
    pUVar6 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
    lVar7 = (**(code **)(*(longlong *)pUVar6 + 800))(pUVar6);
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              (&this->BoneSpaceTransforms,
               (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(lVar7 + 0x30));
    uVar8 = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30[0] = 0;
    local_30[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(this->BoneSpaceTransforms).ArrayNum,&local_38,local_30,local_30 + 1);
    if (0 < (this->BoneSpaceTransforms).ArrayNum) {
      do {
        uVar5 = 0;
        if ((int)uVar8 < local_30[0]) {
          uVar5 = ~uVar8 >> 0x1f;
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
        *(short *)(local_38.Data + (longlong)(int)uVar8 * 2) = (short)uVar8;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (this->BoneSpaceTransforms).ArrayNum);
    }
    pUVar6 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
    local_18.ArrayNum = local_30[0];
    local_18.DataPtr = (ushort *)local_38.Data;
    local_28.FilterCurves = (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
    local_28.FilterMode = DisallowAll;
    local_28.LODIndex = 0;
    if (local_30[0] < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    FBoneContainer::InitializeTo(&this->RequiredBones,&local_18,&local_28,(UObject *)pUVar6);
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  FillComponentSpaceTransforms(this);
  (**(code **)(this->_padding_ + 0xbc8))(this);
  return true;
}

// CopyPoseFromSkeletalComponent @ 1478bfb50

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
UPoseableMeshComponent::CopyPoseFromSkeletalComponent
          (UPoseableMeshComponent *this,USkeletalMeshComponent *param_1)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  USkinnedAsset *pUVar7;
  USkinnedAsset *pUVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  FName local_res8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  bVar5 = FWeakObjectPtr::IsValid(&(this->RequiredBones).Asset.WeakPtr);
  if (((bVar5) && ((this->RequiredBones).RefSkeleton != (FReferenceSkeleton *)0x0)) &&
     (0 < (this->RequiredBones).BoneIndicesArray.ArrayNum)) {
    USkeletalMeshComponent::GetBoneSpaceTransforms(param_1,&local_98);
    if (local_98.ArrayNum != 0) {
      pUVar7 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)param_1);
      this_00 = &this->BoneSpaceTransforms;
      pUVar8 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
      if ((pUVar8 == pUVar7) && (local_98.ArrayNum == (this->BoneSpaceTransforms).ArrayNum)) {
        pFVar1 = (this_00->AllocatorInstance).Data;
        uVar4._0_4_ = (this->BoneSpaceTransforms).ArrayNum;
        uVar4._4_4_ = (this->BoneSpaceTransforms).ArrayMax;
        (this_00->AllocatorInstance).Data = local_98.AllocatorInstance.Data;
        (this->BoneSpaceTransforms).ArrayNum = local_98.ArrayNum;
        (this->BoneSpaceTransforms).ArrayMax = local_98.ArrayMax;
        local_98.AllocatorInstance.Data = pFVar1;
        local_98._8_8_ = uVar4;
      }
      else {
        pUVar7 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
        lVar9 = (**(code **)(*(longlong *)pUVar7 + 800))(pUVar7);
        TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
                  (this_00,(TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                           (lVar9 + 0x30));
        pUVar7 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)param_1);
        lVar9 = (**(code **)(*(longlong *)pUVar7 + 800))(pUVar7);
        uVar12 = 0;
        lVar9 = (longlong)*(int *)(lVar9 + 0x28);
        if (0 < lVar9) {
          lVar13 = 0;
          do {
            USkinnedMeshComponent::GetBoneName((USkinnedMeshComponent *)param_1,(int)&local_res8);
            uVar6 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)this,local_res8);
            if (uVar6 != 0xffffffff) {
              uVar10 = 0;
              if ((int)uVar12 < local_98.ArrayNum) {
                uVar10 = ~uVar12 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              local_78 = *(undefined8 *)(local_98.AllocatorInstance.Data + lVar13 + 0x10);
              uStack_70 = *(undefined8 *)(local_98.AllocatorInstance.Data + lVar13 + 0x10 + 8);
              local_68 = *(undefined8 *)(local_98.AllocatorInstance.Data + lVar13 + 0x20);
              uStack_60 = *(undefined8 *)(local_98.AllocatorInstance.Data + lVar13 + 0x20 + 8);
              pFVar1 = local_98.AllocatorInstance.Data + lVar13;
              local_88 = *(undefined4 *)pFVar1;
              uStack_84 = *(undefined4 *)(pFVar1 + 4);
              uStack_80 = *(undefined4 *)(pFVar1 + 8);
              uStack_7c = *(undefined4 *)(pFVar1 + 0xc);
              local_58 = *(undefined8 *)(local_98.AllocatorInstance.Data + lVar13 + 0x30);
              uStack_50 = *(undefined8 *)(local_98.AllocatorInstance.Data + lVar13 + 0x30 + 8);
              local_38 = *(undefined8 *)(local_98.AllocatorInstance.Data + lVar13 + 0x50);
              uStack_30 = *(undefined8 *)(local_98.AllocatorInstance.Data + lVar13 + 0x50 + 8);
              local_48 = *(undefined8 *)(local_98.AllocatorInstance.Data + lVar13 + 0x40);
              uStack_40 = *(undefined8 *)(local_98.AllocatorInstance.Data + lVar13 + 0x40 + 8);
              uVar10 = 0;
              if ((int)uVar6 < (this->BoneSpaceTransforms).ArrayNum) {
                uVar10 = ~uVar6 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar2 = (this_00->AllocatorInstance).Data;
              lVar11 = (longlong)(int)uVar6 * 0x60;
              pFVar1 = pFVar2 + lVar11;
              *(undefined4 *)pFVar1 = local_88;
              *(undefined4 *)(pFVar1 + 4) = uStack_84;
              *(undefined4 *)(pFVar1 + 8) = uStack_80;
              *(undefined4 *)(pFVar1 + 0xc) = uStack_7c;
              *(undefined8 *)(pFVar2 + lVar11 + 0x10) = local_78;
              *(undefined8 *)(pFVar2 + lVar11 + 0x10 + 8) = uStack_70;
              *(undefined8 *)(pFVar2 + lVar11 + 0x20) = local_68;
              *(undefined8 *)(pFVar2 + lVar11 + 0x20 + 8) = uStack_60;
              *(undefined8 *)(pFVar2 + lVar11 + 0x30) = local_58;
              *(undefined8 *)(pFVar2 + lVar11 + 0x30 + 8) = uStack_50;
              *(undefined8 *)(pFVar2 + lVar11 + 0x40) = local_48;
              *(undefined8 *)(pFVar2 + lVar11 + 0x40 + 8) = uStack_40;
              *(undefined8 *)(pFVar2 + lVar11 + 0x50) = local_38;
              *(undefined8 *)(pFVar2 + lVar11 + 0x50 + 8) = uStack_30;
            }
            uVar12 = uVar12 + 1;
            lVar13 = lVar13 + 0x60;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
      }
      this->bNeedsRefreshTransform = true;
    }
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
  }
  return;
}

// FillComponentSpaceTransforms @ 1478cd420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPoseableMeshComponent::FillComponentSpaceTransforms(UPoseableMeshComponent *this)

{
  byte *pbVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined4 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_FillComponentSpaceTransforms> FVar18;
  USkinnedAsset *pUVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  FName local_c0;
  FName local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  FVar18 = StatPtr_STAT_FillComponentSpaceTransforms;
  if (StatPtr_STAT_FillComponentSpaceTransforms ==
      (FThreadSafeStaticStat<FStat_STAT_FillComponentSpaceTransforms>)0x0) {
    pFVar17 = ::FName::FName(&local_90,"STAT_FillComponentSpaceTransforms");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_FillComponentSpaceTransforms>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FillComponentSpaceTransforms,
                        *pFVar17,L"FillComponentSpaceTransforms","STATGROUP_Anim","STATCAT_Advanced"
                        ,L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_c0 = *(FName *)FVar18;
  bVar11 = false;
  bVar14 = false;
  bVar16 = false;
  bVar12 = false;
  if ((local_c0.ComparisonIndex.Value.Value != 0) ||
     (bVar10 = bVar11, bVar13 = bVar14, local_c0.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar11 = false;
      bVar14 = true;
      bVar16 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = local_c0.ComparisonIndex.Value.Value;
        local_res20.Number = local_c0.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\PoseableMeshComponent.cpp"
                   ,0x53);
        bVar11 = true;
        bVar14 = true;
        bVar16 = true;
        bVar12 = true;
      }
    }
    bVar10 = bVar11;
    bVar13 = bVar14;
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_c0,CycleScopeStart);
      bVar16 = true;
      bVar12 = true;
      goto LAB_1478cd5a4;
    }
  }
  bVar14 = bVar12;
  bVar11 = bVar16;
  bVar16 = false;
  bVar12 = false;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
LAB_1478cd5a4:
  pUVar19 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
  if (pUVar19 != (USkinnedAsset *)0x0) {
    pUVar19 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
    lVar20 = (**(code **)(*(longlong *)pUVar19 + 800))(pUVar19);
    if ((*(int *)(lVar20 + 0x28) != (this->BoneSpaceTransforms).ArrayNum) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("GetSkinnedAsset()->GetRefSkeleton().GetNum() == BoneSpaceTransforms.Num()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\PoseableMeshComponent.cpp"
                            ,0x5b,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar19 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
    lVar20 = (**(code **)(*(longlong *)pUVar19 + 800))(pUVar19);
    if ((*(int *)(lVar20 + 0x28) != (int)(&this->_padding_)[(longlong)(int)this->_padding_ * 2]) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("GetSkinnedAsset()->GetRefSkeleton().GetNum() == GetNumComponentSpaceTransforms()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\PoseableMeshComponent.cpp"
                            ,0x5c,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar19 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
    lVar20 = (**(code **)(*(longlong *)pUVar19 + 800))(pUVar19);
    if ((*(int *)(lVar20 + 0x28) != (int)(&this->_padding_)[(longlong)(int)this->_padding_ * 2]) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("GetSkinnedAsset()->GetRefSkeleton().GetNum() == GetBoneVisibilityStates().Num()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\PoseableMeshComponent.cpp"
                            ,0x5d,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar2 = (this->BoneSpaceTransforms).AllocatorInstance.Data;
    lVar20 = (&this->_padding_)[(longlong)*(int *)((longlong)&this->_padding_ + 4) * 2];
    if (((this->BoneSpaceTransforms).ArrayNum < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (this->BoneSpaceTransforms).AllocatorInstance.Data;
    lVar24 = (longlong)*(int *)((longlong)&this->_padding_ + 4);
    local_88 = *(undefined8 *)(pFVar3 + 0x10);
    uStack_80 = *(undefined8 *)(pFVar3 + 0x18);
    local_78 = *(undefined8 *)(pFVar3 + 0x20);
    uStack_70 = *(undefined8 *)(pFVar3 + 0x28);
    uVar6 = *(undefined4 *)pFVar3;
    uVar7 = *(undefined4 *)(pFVar3 + 4);
    uVar8 = *(undefined4 *)(pFVar3 + 8);
    uVar9 = *(undefined4 *)(pFVar3 + 0xc);
    local_68 = *(undefined8 *)(pFVar3 + 0x30);
    uStack_60 = *(undefined8 *)(pFVar3 + 0x38);
    local_48 = *(undefined8 *)(pFVar3 + 0x50);
    uStack_40 = *(undefined8 *)(pFVar3 + 0x58);
    local_58 = *(undefined8 *)(pFVar3 + 0x40);
    uStack_50 = *(undefined8 *)(pFVar3 + 0x48);
    if (((int)(&this->_padding_)[lVar24 * 2] < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar4 = (undefined4 *)(&this->_padding_)[lVar24 * 2];
    uVar23 = 1;
    *puVar4 = uVar6;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = uVar9;
    *(undefined8 *)(puVar4 + 4) = local_88;
    *(undefined8 *)(puVar4 + 6) = uStack_80;
    *(undefined8 *)(puVar4 + 8) = local_78;
    *(undefined8 *)(puVar4 + 10) = uStack_70;
    *(undefined8 *)(puVar4 + 0xc) = local_68;
    *(undefined8 *)(puVar4 + 0xe) = uStack_60;
    *(undefined8 *)(puVar4 + 0x10) = local_58;
    *(undefined8 *)(puVar4 + 0x12) = uStack_50;
    *(undefined8 *)(puVar4 + 0x14) = local_48;
    *(undefined8 *)(puVar4 + 0x16) = uStack_40;
    if (1 < (this->BoneSpaceTransforms).ArrayNum) {
      lVar24 = 0xc;
      do {
        pUVar19 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
        lVar21 = (**(code **)(*(longlong *)pUVar19 + 800))();
        uVar22 = 0;
        if ((int)uVar23 < *(int *)(lVar21 + 0x28)) {
          uVar22 = ~uVar23 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        UE::Math::TTransform<double>::Multiply
                  ((TTransform<double> *)((longlong)(int)uVar23 * 0x60 + lVar20),
                   (TTransform<double> *)(pFVar2 + (longlong)(int)uVar23 * 0x60),
                   (TTransform<double> *)
                   ((longlong)*(int *)(*(longlong *)(lVar21 + 0x20) + 8 + lVar24) * 0x60 + lVar20));
        uVar23 = uVar23 + 1;
        lVar24 = lVar24 + 0xc;
        bVar10 = bVar11;
        bVar16 = bVar12;
        bVar13 = bVar14;
      } while ((int)uVar23 < (this->BoneSpaceTransforms).ArrayNum);
    }
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 | 2;
  }
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar16) {
    FThreadStats::AddMessage(local_c0,CycleScopeEnd);
  }
  return;
}

// GetBoneLocationByName @ 1478cfc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
UPoseableMeshComponent::GetBoneLocationByName
          (UPoseableMeshComponent *this,TVector<double> *__return_storage_ptr__,FName param_1,
          Type param_2)

{
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  GetBoneTransformByName(this,&local_78,param_1,param_2);
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_78.Translation.XY.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_78.Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_78.Translation.ZW.m128d_f64[0];
  return __return_storage_ptr__;
}

// GetBoneRotationByName @ 1478cfca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TRotator<double> * __thiscall
UPoseableMeshComponent::GetBoneRotationByName
          (UPoseableMeshComponent *this,TRotator<double> *__return_storage_ptr__,FName param_1,
          Type param_2)

{
  undefined1 auStack_b8 [32];
  TQuat<double> local_98;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  GetBoneTransformByName(this,&local_78,param_1,param_2);
  local_98.X = local_78.Rotation.XY.m128d_f64[0];
  local_98.Y = local_78.Rotation.XY.m128d_f64[1];
  local_98.Z = local_78.Rotation.ZW.m128d_f64[0];
  local_98.W = local_78.Rotation.ZW.m128d_f64[1];
  UE::Math::TRotator<double>::TRotator<double>(__return_storage_ptr__,&local_98);
  return __return_storage_ptr__;
}

// GetBoneScaleByName @ 1478cfd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
UPoseableMeshComponent::GetBoneScaleByName
          (UPoseableMeshComponent *this,TVector<double> *__return_storage_ptr__,FName param_1,
          Type param_2)

{
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  GetBoneTransformByName(this,&local_78,param_1,param_2);
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_78.Scale3D.XY.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_78.Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_78.Scale3D.ZW.m128d_f64[0];
  return __return_storage_ptr__;
}

// GetBoneTransformByName @ 1478cfd70

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TTransform<double> * __thiscall
UPoseableMeshComponent::GetBoneTransformByName
          (UPoseableMeshComponent *this,TTransform<double> *__return_storage_ptr__,FName param_1,
          Type param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  USkinnedAsset *pUVar6;
  USkeletalMeshComponent *this_00;
  UClass *pUVar7;
  UAnimInstance *this_01;
  FBoneContainer *pFVar8;
  ForAnyElementType FVar9;
  FString local_40;
  FString local_30;
  
  pUVar6 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
  if ((((pUVar6 == (USkinnedAsset *)0x0) ||
       (bVar5 = FWeakObjectPtr::IsValid(&(this->RequiredBones).Asset.WeakPtr), !bVar5)) ||
      ((this->RequiredBones).RefSkeleton == (FReferenceSkeleton *)0x0)) ||
     ((this->RequiredBones).BoneIndicesArray.ArrayNum < 1)) {
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float0001.m128_f32[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar2;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)fVar3;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)fVar4;
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
         (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar2;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar3;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)fVar4;
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float1110.m128_f32[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar2;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar3;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)fVar4;
  }
  else {
    this_00 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (this_00 == (USkeletalMeshComponent *)0x0) {
      GetBoneTransformByNameHelper<UPoseableMeshComponent>
                (__return_storage_ptr__,param_1,param_2,&this->RequiredBones,this);
    }
    else {
      pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        ::FString::PrintfImpl
                  (&local_30,
                   L"Cannot return valid bone transform. Leader Pose Component is not of type USkeletalMeshComponent"
                  );
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_30.Data.ArrayNum != 0) {
          FVar9.Data = local_30.Data.AllocatorInstance.Data;
        }
        FFrame::KismetExecutionMessage((wchar_t *)FVar9.Data,Warning,(FName)0x0);
        local_40.Data.AllocatorInstance.Data = local_30.Data.AllocatorInstance.Data;
      }
      else {
        this_01 = USkeletalMeshComponent::GetAnimInstance(this_00);
        if (this_01 != (UAnimInstance *)0x0) {
          pFVar8 = UAnimInstance::GetRequiredBones(this_01);
          GetBoneTransformByNameHelper<USkeletalMeshComponent>
                    (__return_storage_ptr__,param_1,param_2,pFVar8,this_00);
          return __return_storage_ptr__;
        }
        ::FString::PrintfImpl
                  (&local_40,
                   L"Cannot return valid bone transform. Leader Pose Component has no anim instance"
                  );
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_40.Data.ArrayNum != 0) {
          FVar9.Data = local_40.Data.AllocatorInstance.Data;
        }
        FFrame::KismetExecutionMessage((wchar_t *)FVar9.Data,Warning,(FName)0x0);
      }
      fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
      fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
           (double)GlobalVectorConstants::Float0001.m128_f32[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar2;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)fVar3;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)fVar4;
      fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
      fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
           (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar2;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar3;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)fVar4;
      fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
      fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
           (double)GlobalVectorConstants::Float1110.m128_f32[0];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar2;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar3;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)fVar4;
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1478d9fb0

UClass * __cdecl UPoseableMeshComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseableMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PoseableMeshComponent",
               &Z_Registration_Info_UClass_UPoseableMeshComponent.InnerSingleton,
               StaticRegisterNativesUPoseableMeshComponent,0xab0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseableMeshComponent>,
               InternalVTableHelperCtorCaller<UPoseableMeshComponent>,local_res8,
               USkinnedMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseableMeshComponent.InnerSingleton;
}

// MarkRefreshTransformDirty @ 1478e2e40

void __thiscall UPoseableMeshComponent::MarkRefreshTransformDirty(UPoseableMeshComponent *this)

{
  this->bNeedsRefreshTransform = true;
  return;
}

// RefreshBoneTransforms @ 1478e8bc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPoseableMeshComponent::RefreshBoneTransforms
          (UPoseableMeshComponent *this,FActorComponentTickFunction *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_RefreshBoneTransforms> FVar6;
  USkinnedAsset *pUVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_28;
  
  FVar11.Value = 0;
  FVar6 = StatPtr_STAT_RefreshBoneTransforms;
  if (StatPtr_STAT_RefreshBoneTransforms ==
      (FThreadSafeStaticStat<FStat_STAT_RefreshBoneTransforms>)0x0) {
    pFVar5 = ::FName::FName(&local_res20,"STAT_RefreshBoneTransforms");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_RefreshBoneTransforms>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RefreshBoneTransforms,*pFVar5,
                       L"RefreshBoneTransforms","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar9.Value;
        local_res18.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\PoseableMeshComponent.cpp"
                   ,0x37);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar9.Value;
      local_res18.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_1478e8d1e;
    }
  }
  bVar3 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_1478e8d1e:
  pUVar7 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
  if ((pUVar7 != (USkinnedAsset *)0x0) &&
     ((int)(&this->_padding_)[(longlong)(int)this->_padding_ * 2] != 0)) {
    FillComponentSpaceTransforms(this);
    (**(code **)(this->_padding_ + 0xbc8))(this);
    USceneComponent::UpdateChildTransforms((USceneComponent *)this,None,None);
    (**(code **)(this->_padding_ + 0x5b0))(this);
    UActorComponent::MarkRenderTransformDirty((UActorComponent *)this);
    UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
    this->bNeedsRefreshTransform = false;
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res18);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ResetBoneTransformByName @ 1478ebb70

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
UPoseableMeshComponent::ResetBoneTransformByName(UPoseableMeshComponent *this,FName param_1)

{
  undefined4 *puVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  USkinnedAsset *pUVar8;
  longlong lVar9;
  uint uVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  FName local_res10;
  FString local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  FString local_28;
  
  local_res10 = param_1;
  pUVar8 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
  if (pUVar8 != (USkinnedAsset *)0x0) {
    uVar7 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)this,local_res10);
    if (uVar7 == 0xffffffff) {
      ::FName::ToString(&local_res10,&local_28);
      ::FString::PrintfImpl(&local_98,L"Invalid Bone Name \'%s\'");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_98.Data.ArrayNum != 0) {
        FVar11.Data = local_98.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar11.Data,Warning,(FName)0x0);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    else {
      pUVar8 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
      lVar9 = (**(code **)(*(longlong *)pUVar8 + 800))(pUVar8);
      uVar10 = 0;
      if ((int)uVar7 < *(int *)(lVar9 + 0x38)) {
        uVar10 = ~uVar7 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar9 = *(longlong *)(lVar9 + 0x30);
      lVar12 = (longlong)(int)uVar7 * 0x60;
      puVar3 = (undefined8 *)(lVar9 + 0x10 + lVar12);
      local_78 = *puVar3;
      uStack_70 = puVar3[1];
      puVar3 = (undefined8 *)(lVar9 + 0x20 + lVar12);
      local_68 = *puVar3;
      uStack_60 = puVar3[1];
      puVar1 = (undefined4 *)(lVar9 + lVar12);
      local_88 = *puVar1;
      uStack_84 = puVar1[1];
      uStack_80 = puVar1[2];
      uStack_7c = puVar1[3];
      puVar3 = (undefined8 *)(lVar9 + 0x30 + lVar12);
      local_58 = *puVar3;
      uStack_50 = puVar3[1];
      puVar3 = (undefined8 *)(lVar9 + 0x50 + lVar12);
      local_38 = *puVar3;
      uStack_30 = puVar3[1];
      puVar3 = (undefined8 *)(lVar9 + 0x40 + lVar12);
      local_48 = *puVar3;
      uStack_40 = puVar3[1];
      uVar10 = 0;
      if ((int)uVar7 < (this->BoneSpaceTransforms).ArrayNum) {
        uVar10 = ~uVar7 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->BoneSpaceTransforms).AllocatorInstance.Data;
      pFVar2 = pFVar4 + lVar12;
      *(undefined4 *)pFVar2 = local_88;
      *(undefined4 *)(pFVar2 + 4) = uStack_84;
      *(undefined4 *)(pFVar2 + 8) = uStack_80;
      *(undefined4 *)(pFVar2 + 0xc) = uStack_7c;
      *(undefined8 *)(pFVar4 + lVar12 + 0x10) = local_78;
      *(undefined8 *)(pFVar4 + lVar12 + 0x10 + 8) = uStack_70;
      *(undefined8 *)(pFVar4 + lVar12 + 0x20) = local_68;
      *(undefined8 *)(pFVar4 + lVar12 + 0x20 + 8) = uStack_60;
      *(undefined8 *)(pFVar4 + lVar12 + 0x30) = local_58;
      *(undefined8 *)(pFVar4 + lVar12 + 0x30 + 8) = uStack_50;
      *(undefined8 *)(pFVar4 + lVar12 + 0x40) = local_48;
      *(undefined8 *)(pFVar4 + lVar12 + 0x40 + 8) = uStack_40;
      *(undefined8 *)(pFVar4 + lVar12 + 0x50) = local_38;
      *(undefined8 *)(pFVar4 + lVar12 + 0x50 + 8) = uStack_30;
    }
  }
  return;
}

// SetBoneLocationByName @ 1478efcd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPoseableMeshComponent::SetBoneLocationByName
          (UPoseableMeshComponent *this,FName param_1,TVector<double> *param_2,Type param_3)

{
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  GetBoneTransformByName(this,&local_78,param_1,param_3);
  local_78.Translation.XY.m128d_f64[0] = (param_2->field0_0x0)._s_0.X;
  local_78.Translation.XY.m128d_f64[1] = (param_2->field0_0x0)._s_0.Y;
  local_78.Translation.ZW.m128d_f64[0] = (param_2->field0_0x0)._s_0.Z;
  local_78.Translation.ZW.m128d_f64[1] = 0.0;
  SetBoneTransformByName(this,param_1,&local_78,param_3);
  return;
}

// SetBoneRotationByName @ 1478efd70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPoseableMeshComponent::SetBoneRotationByName
          (UPoseableMeshComponent *this,FName param_1,TRotator<double> *param_2,Type param_3)

{
  TQuat<double> *pTVar1;
  undefined1 auStack_c8 [32];
  TQuat<double> local_a8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  GetBoneTransformByName(this,&local_88,param_1,param_3);
  pTVar1 = UE::Math::TRotator<double>::Quaternion(param_2,&local_a8);
  local_88.Rotation.XY.m128d_f64[0] = pTVar1->X;
  local_88.Rotation.XY.m128d_f64[1] = pTVar1->Y;
  local_88.Rotation.ZW.m128d_f64[0] = pTVar1->Z;
  local_88.Rotation.ZW.m128d_f64[1] = pTVar1->W;
  SetBoneTransformByName(this,param_1,&local_88,param_3);
  return;
}

// SetBoneScaleByName @ 1478efe10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPoseableMeshComponent::SetBoneScaleByName
          (UPoseableMeshComponent *this,FName param_1,TVector<double> *param_2,Type param_3)

{
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  GetBoneTransformByName(this,&local_78,param_1,param_3);
  local_78.Scale3D.XY.m128d_f64[0] = (param_2->field0_0x0)._s_0.X;
  local_78.Scale3D.XY.m128d_f64[1] = (param_2->field0_0x0)._s_0.Y;
  local_78.Scale3D.ZW.m128d_f64[0] = (param_2->field0_0x0)._s_0.Z;
  local_78.Scale3D.ZW.m128d_f64[1] = 0.0;
  SetBoneTransformByName(this,param_1,&local_78,param_3);
  return;
}

// SetBoneTransformByName @ 1478efeb0

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

void __thiscall
UPoseableMeshComponent::SetBoneTransformByName
          (UPoseableMeshComponent *this,FName param_1,TTransform<double> *param_2,Type param_3)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  USkinnedAsset *pUVar21;
  TTransform<double> *pTVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  FA2CSPose local_128;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_158;
  pUVar21 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this);
  if ((((pUVar21 != (USkinnedAsset *)0x0) &&
       (bVar17 = FWeakObjectPtr::IsValid(&(this->RequiredBones).Asset.WeakPtr), bVar17)) &&
      ((this->RequiredBones).RefSkeleton != (FReferenceSkeleton *)0x0)) &&
     (0 < (this->RequiredBones).BoneIndicesArray.ArrayNum)) {
    bVar17 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if ((bVar17) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("!LeaderPoseComponent.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\PoseableMeshComponent.cpp"
                            ,0x8e,L""), bVar17)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar18 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)this,param_1);
    lVar23 = (longlong)(int)uVar18;
    if (-1 < (int)uVar18) {
      pTVar1 = &this->BoneSpaceTransforms;
      iVar20 = (this->BoneSpaceTransforms).ArrayNum;
      if ((int)uVar18 < iVar20) {
        dVar5 = (param_2->Rotation).XY.m128d_f64[0];
        dVar6 = (param_2->Rotation).XY.m128d_f64[1];
        dVar7 = (param_2->Rotation).ZW.m128d_f64[0];
        dVar8 = (param_2->Rotation).ZW.m128d_f64[1];
        dVar9 = (param_2->Translation).XY.m128d_f64[0];
        dVar10 = (param_2->Translation).XY.m128d_f64[1];
        dVar11 = (param_2->Translation).ZW.m128d_f64[0];
        dVar12 = (param_2->Translation).ZW.m128d_f64[1];
        dVar13 = (param_2->Scale3D).XY.m128d_f64[0];
        dVar14 = (param_2->Scale3D).XY.m128d_f64[1];
        dVar15 = (param_2->Scale3D).ZW.m128d_f64[0];
        dVar16 = (param_2->Scale3D).ZW.m128d_f64[1];
        if (((int)uVar18 < 0) &&
           (local_138 = lVar23, local_130 = (longlong)iVar20,
           bVar17 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        lVar24 = lVar23 * 0x60;
        *(double *)(pFVar3 + lVar24) = dVar5;
        *(double *)(pFVar3 + lVar24 + 8) = dVar6;
        *(double *)(pFVar3 + lVar24 + 0x10) = dVar7;
        *(double *)(pFVar3 + lVar24 + 0x10 + 8) = dVar8;
        *(double *)(pFVar3 + lVar24 + 0x20) = dVar9;
        *(double *)(pFVar3 + lVar24 + 0x20 + 8) = dVar10;
        *(double *)(pFVar3 + lVar24 + 0x30) = dVar11;
        *(double *)(pFVar3 + lVar24 + 0x30 + 8) = dVar12;
        *(double *)(pFVar3 + lVar24 + 0x40) = dVar13;
        *(double *)(pFVar3 + lVar24 + 0x40 + 8) = dVar14;
        *(double *)(pFVar3 + lVar24 + 0x50) = dVar15;
        *(double *)(pFVar3 + lVar24 + 0x50 + 8) = dVar16;
        if (param_3 == WorldSpace) {
          iVar20 = (this->BoneSpaceTransforms).ArrayNum;
          uVar19 = 0;
          if ((int)uVar18 < iVar20) {
            uVar19 = ~uVar18 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (local_138 = lVar23, local_130 = (longlong)iVar20,
             bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          UE::Math::TTransform<double>::SetToRelativeTransform
                    ((TTransform<double> *)((pTVar1->AllocatorInstance).Data + lVar24),
                     (TTransform<double> *)&this->_padding_);
        }
        iVar20 = FBoneContainer::GetParentBoneIndex(&this->RequiredBones,uVar18);
        if (-1 < iVar20) {
          local_128._padding_ = 0;
          local_128._padding_ = 0;
          local_128.ComponentSpaceFlags.ArrayNum = 0;
          local_128.ComponentSpaceFlags.ArrayMax = 0;
          local_128.BoneContainer = (FBoneContainer *)0x0;
          local_128.ComponentSpaceFlags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FA2CSPose::AllocateLocalPoses(&local_128,&this->RequiredBones,pTVar1);
          iVar2 = (this->BoneSpaceTransforms).ArrayNum;
          uVar19 = 0;
          if ((int)uVar18 < iVar2) {
            uVar19 = ~uVar18 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (local_138 = lVar23, local_130 = (longlong)iVar2,
             bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (pTVar1->AllocatorInstance).Data;
          pTVar22 = FA2CSPose::GetComponentSpaceTransform(&local_128,&local_f8,iVar20);
          UE::Math::TTransform<double>::SetToRelativeTransform
                    ((TTransform<double> *)(pFVar3 + lVar24),pTVar22);
          if (local_128.ComponentSpaceFlags.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             ) {
            FMemory::Free(local_128.ComponentSpaceFlags.AllocatorInstance.Data);
          }
          if ((void *)local_128._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_128._padding_);
          }
        }
        this->bNeedsRefreshTransform = true;
      }
    }
  }
  return;
}

// ShouldUpdateTransform @ 1478f7720

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UPoseableMeshComponent::ShouldUpdateTransform(UPoseableMeshComponent *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = USkinnedMeshComponent::ShouldUpdateTransform((USkinnedMeshComponent *)this,param_1);
  if ((!bVar1) && (this->bNeedsRefreshTransform == false)) {
    return false;
  }
  return true;
}

// StaticRegisterNativesUPoseableMeshComponent @ 1478f82b0

void __cdecl UPoseableMeshComponent::StaticRegisterNativesUPoseableMeshComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UPoseableMeshComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCopyPoseFromSkeletalComponent @ 147902460

void __cdecl
UPoseableMeshComponent::execCopyPoseFromSkeletalComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  USkeletalMeshComponent *local_res10;
  
  local_res10 = (USkeletalMeshComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  CopyPoseFromSkeletalComponent((UPoseableMeshComponent *)param_1,local_res10);
  return;
}

// execGetBoneLocationByName @ 147902970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPoseableMeshComponent::execGetBoneLocationByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auStack_b8 [32];
  byte local_98 [8];
  FName local_90;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_98[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetBoneTransformByName((UPoseableMeshComponent *)param_1,&local_88,local_90,(uint)local_98[0]);
  *(double *)param_3 = local_88.Translation.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 8) = local_88.Translation.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x10) = local_88.Translation.ZW.m128d_f64[0];
  return;
}

// execGetBoneRotationByName @ 147902a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPoseableMeshComponent::execGetBoneRotationByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auStack_f8 [32];
  byte local_d8 [8];
  FName local_d0;
  TRotator<double> local_c8;
  TQuat<double> local_a8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_d8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetBoneTransformByName((UPoseableMeshComponent *)param_1,&local_88,local_d0,(uint)local_d8[0]);
  local_a8.X = local_88.Rotation.XY.m128d_f64[0];
  local_a8.Y = local_88.Rotation.XY.m128d_f64[1];
  local_a8.Z = local_88.Rotation.ZW.m128d_f64[0];
  local_a8.W = local_88.Rotation.ZW.m128d_f64[1];
  UE::Math::TRotator<double>::TRotator<double>(&local_c8,&local_a8);
  *(double *)param_3 = local_c8.Pitch;
  *(double *)((longlong)param_3 + 8) = local_c8.Yaw;
  *(double *)((longlong)param_3 + 0x10) = local_c8.Roll;
  return;
}

// execGetBoneScaleByName @ 147902bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPoseableMeshComponent::execGetBoneScaleByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auStack_b8 [32];
  byte local_98 [8];
  FName local_90;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_98[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetBoneTransformByName((UPoseableMeshComponent *)param_1,&local_88,local_90,(uint)local_98[0]);
  *(double *)param_3 = local_88.Scale3D.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 8) = local_88.Scale3D.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x10) = local_88.Scale3D.ZW.m128d_f64[0];
  return;
}

// execGetBoneTransformByName @ 147902ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPoseableMeshComponent::execGetBoneTransformByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TTransform<double> *pTVar3;
  undefined1 auStack_b8 [32];
  byte local_98 [8];
  FName local_90;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_98[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = GetBoneTransformByName
                     ((UPoseableMeshComponent *)param_1,&local_88,local_90,(uint)local_98[0]);
  dVar2 = (pTVar3->Rotation).XY.m128d_f64[1];
  *(double *)param_3 = (pTVar3->Rotation).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 8) = dVar2;
  dVar2 = (pTVar3->Rotation).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x10) = (pTVar3->Rotation).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x18) = dVar2;
  dVar2 = (pTVar3->Translation).XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x20) = (pTVar3->Translation).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x28) = dVar2;
  dVar2 = (pTVar3->Translation).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x30) = (pTVar3->Translation).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x38) = dVar2;
  dVar2 = (pTVar3->Scale3D).XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x40) = (pTVar3->Scale3D).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x48) = dVar2;
  dVar2 = (pTVar3->Scale3D).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x50) = (pTVar3->Scale3D).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x58) = dVar2;
  return;
}

// execResetBoneTransformByName @ 147907c90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPoseableMeshComponent::execResetBoneTransformByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  FProperty *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  USkinnedAsset *pUVar7;
  longlong lVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  FName local_res10 [2];
  FName local_res20;
  FString local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  FString local_38;
  
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20 = local_res10[0];
  pUVar7 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)param_1);
  if (pUVar7 != (USkinnedAsset *)0x0) {
    uVar6 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)param_1,local_res20);
    if (uVar6 != 0xffffffff) {
      pUVar7 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)param_1);
      lVar8 = (**(code **)(*(longlong *)pUVar7 + 800))(pUVar7);
      uVar9 = 0;
      if ((int)uVar6 < *(int *)(lVar8 + 0x38)) {
        uVar9 = ~uVar6 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar8 = *(longlong *)(lVar8 + 0x30);
      lVar11 = (longlong)(int)uVar6 * 0x60;
      puVar2 = (undefined8 *)(lVar8 + 0x10 + lVar11);
      local_88 = *puVar2;
      uStack_80 = puVar2[1];
      puVar2 = (undefined8 *)(lVar8 + 0x20 + lVar11);
      local_78 = *puVar2;
      uStack_70 = puVar2[1];
      puVar1 = (undefined4 *)(lVar8 + lVar11);
      local_98 = *puVar1;
      uStack_94 = puVar1[1];
      uStack_90 = puVar1[2];
      uStack_8c = puVar1[3];
      puVar2 = (undefined8 *)(lVar8 + 0x30 + lVar11);
      local_68 = *puVar2;
      uStack_60 = puVar2[1];
      puVar2 = (undefined8 *)(lVar8 + 0x50 + lVar11);
      local_48 = *puVar2;
      uStack_40 = puVar2[1];
      puVar2 = (undefined8 *)(lVar8 + 0x40 + lVar11);
      local_58 = *puVar2;
      uStack_50 = puVar2[1];
      uVar9 = 0;
      if ((int)uVar6 < *(int *)&param_1[0x3b].field_0x10) {
        uVar9 = ~uVar6 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar8 = *(longlong *)&param_1[0x3b].field_0x8;
      puVar1 = (undefined4 *)(lVar8 + lVar11);
      *puVar1 = local_98;
      puVar1[1] = uStack_94;
      puVar1[2] = uStack_90;
      puVar1[3] = uStack_8c;
      puVar2 = (undefined8 *)(lVar8 + 0x10 + lVar11);
      *puVar2 = local_88;
      puVar2[1] = uStack_80;
      puVar2 = (undefined8 *)(lVar8 + 0x20 + lVar11);
      *puVar2 = local_78;
      puVar2[1] = uStack_70;
      puVar2 = (undefined8 *)(lVar8 + 0x30 + lVar11);
      *puVar2 = local_68;
      puVar2[1] = uStack_60;
      puVar2 = (undefined8 *)(lVar8 + 0x40 + lVar11);
      *puVar2 = local_58;
      puVar2[1] = uStack_50;
      puVar2 = (undefined8 *)(lVar8 + 0x50 + lVar11);
      *puVar2 = local_48;
      puVar2[1] = uStack_40;
      return;
    }
    ::FName::ToString(&local_res20,&local_38);
    ::FString::PrintfImpl(&local_a8,L"Invalid Bone Name \'%s\'");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_a8.Data.ArrayNum != 0) {
      FVar10.Data = local_a8.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar10.Data,Warning,(FName)0x0);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// execSetBoneLocationByName @ 1479094c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPoseableMeshComponent::execSetBoneLocationByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  Type TVar3;
  undefined1 auStack_e8 [32];
  byte local_c8 [8];
  FName local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_c8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  FVar2 = local_c0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TVar3 = (Type)local_c8[0];
  GetBoneTransformByName((UPoseableMeshComponent *)param_1,&local_98,local_c0,TVar3);
  local_98.Translation.XY.m128d_f64[0] = local_b8;
  local_98.Translation.XY.m128d_f64[1] = dStack_b0;
  local_98.Translation.ZW.m128d_f64[0] = local_a8;
  local_98.Translation.ZW.m128d_f64[1] = 0.0;
  SetBoneTransformByName((UPoseableMeshComponent *)param_1,FVar2,&local_98,TVar3);
  return;
}

// execSetBoneRotationByName @ 147909640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPoseableMeshComponent::execSetBoneRotationByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  TQuat<double> *pTVar3;
  Type TVar4;
  undefined1 auStack_108 [32];
  byte local_e8 [8];
  FName local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  TRotator<double> local_b8;
  TQuat<double> local_98;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_e8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
  }
  FVar2 = local_e0;
  local_b8.Pitch = local_d8;
  local_b8.Yaw = dStack_d0;
  local_b8.Roll = local_c8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TVar4 = (Type)local_e8[0];
  GetBoneTransformByName((UPoseableMeshComponent *)param_1,&local_78,local_e0,TVar4);
  pTVar3 = UE::Math::TRotator<double>::Quaternion(&local_b8,&local_98);
  local_78.Rotation.XY.m128d_f64[0] = pTVar3->X;
  local_78.Rotation.XY.m128d_f64[1] = pTVar3->Y;
  local_78.Rotation.ZW.m128d_f64[0] = pTVar3->Z;
  local_78.Rotation.ZW.m128d_f64[1] = pTVar3->W;
  SetBoneTransformByName((UPoseableMeshComponent *)param_1,FVar2,&local_78,TVar4);
  return;
}

// execSetBoneScaleByName @ 1479097e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPoseableMeshComponent::execSetBoneScaleByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  Type TVar3;
  undefined1 auStack_e8 [32];
  byte local_c8 [8];
  FName local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_c8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  FVar2 = local_c0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TVar3 = (Type)local_c8[0];
  GetBoneTransformByName((UPoseableMeshComponent *)param_1,&local_98,local_c0,TVar3);
  local_98.Scale3D.XY.m128d_f64[0] = local_b8;
  local_98.Scale3D.XY.m128d_f64[1] = dStack_b0;
  local_98.Scale3D.ZW.m128d_f64[0] = local_a8;
  local_98.Scale3D.ZW.m128d_f64[1] = 0.0;
  SetBoneTransformByName((UPoseableMeshComponent *)param_1,FVar2,&local_98,TVar3);
  return;
}

// execSetBoneTransformByName @ 147909970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPoseableMeshComponent::execSetBoneTransformByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  TTransform<double> *pTVar12;
  undefined1 auStack_b8 [32];
  byte local_98 [8];
  FName local_90;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_88.Rotation.ZW.m128d_f64[0] = (double)fVar6;
  local_88.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  local_88.Translation.ZW.m128d_f64[0] = (double)fVar7;
  local_88.Translation.ZW.m128d_f64[1] = (double)fVar10;
  local_88.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar4,0);
  local_88.Translation.XY.m128d_f64[0] = (double)fVar2;
  local_88.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  local_88.Scale3D.ZW.m128d_f64[0] = (double)fVar8;
  local_88.Scale3D.ZW.m128d_f64[1] = (double)fVar11;
  local_88.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_88.Scale3D.XY.m128d_f64[0] = (double)fVar3;
  local_88.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_98[0] = 0;
  pTVar12 = &local_88;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar12 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetBoneTransformByName((UPoseableMeshComponent *)param_1,local_90,pTVar12,(uint)local_98[0]);
  return;
}

