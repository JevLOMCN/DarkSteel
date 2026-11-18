// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 15

// StaticClass @ 14a90d490

UClass * __cdecl UPoseSearchInteractionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchInteractionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchInteractionLibrary",
               &Z_Registration_Info_UClass_UPoseSearchInteractionLibrary.InnerSingleton,
               StaticRegisterNativesUPoseSearchInteractionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchInteractionLibrary>,
               InternalVTableHelperCtorCaller<UPoseSearchInteractionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchInteractionLibrary.InnerSingleton;
}

// UPoseSearchInteractionLibrary @ 14a91a210

UPoseSearchInteractionLibrary * __thiscall
UPoseSearchInteractionLibrary::UPoseSearchInteractionLibrary
          (UPoseSearchInteractionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPoseSearchInteractionLibrary__6B_;
  return this;
}

// UPoseSearchInteractionLibrary @ 14a91a240

UPoseSearchInteractionLibrary * __thiscall
UPoseSearchInteractionLibrary::UPoseSearchInteractionLibrary
          (UPoseSearchInteractionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPoseSearchInteractionLibrary__6B_;
  return this;
}

// ~UPoseSearchInteractionLibrary @ 14a91af40

void __thiscall
UPoseSearchInteractionLibrary::~UPoseSearchInteractionLibrary(UPoseSearchInteractionLibrary *this)

{
  *(undefined ***)this = &___7UPoseSearchInteractionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetCachedInteraction @ 14a92b090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPoseSearchBlueprintResult * __cdecl
UPoseSearchInteractionLibrary::GetCachedInteraction
          (FPoseSearchBlueprintResult *__return_storage_ptr__,UObject *param_1,bool param_2)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  UWorld *this;
  UPoseSearchInteractionSubsystem *pUVar9;
  FInteractionIsland *this_00;
  undefined8 local_60 [2];
  undefined8 local_50 [2];
  undefined8 local_40 [3];
  
  pTVar1 = &__return_storage_ptr__->ActorRootTransforms;
  (__return_storage_ptr__->SelectedAnim).field0_0x0.DebugPtr = (UObject *)0x0;
  pTVar2 = &__return_storage_ptr__->ActorRootBoneTransforms;
  __return_storage_ptr__->SelectedTime = 0.0;
  pTVar3 = &__return_storage_ptr__->AnimContexts;
  __return_storage_ptr__->bIsContinuingPoseSearch = false;
  __return_storage_ptr__->WantedPlayRate = 1.0;
  __return_storage_ptr__->bLoop = false;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  __return_storage_ptr__->bIsMirrored = false;
  (__return_storage_ptr__->BlendParameters).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->BlendParameters).field0_0x0._s_0.Y = (double)uVar6;
  (__return_storage_ptr__->BlendParameters).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (__return_storage_ptr__->SelectedDatabase).field0_0x0.DebugPtr = (UPoseSearchDatabase *)0x0;
  __return_storage_ptr__->SearchCost = 3.4028235e+38;
  __return_storage_ptr__->bIsInteraction = false;
  __return_storage_ptr__->Role = UE::PoseSearch::DefaultRole;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ActorRootTransforms).ArrayNum = 0;
  (__return_storage_ptr__->ActorRootTransforms).ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ActorRootBoneTransforms).ArrayNum = 0;
  (__return_storage_ptr__->ActorRootBoneTransforms).ArrayMax = 0;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AnimContexts).ArrayNum = 0;
  (__return_storage_ptr__->AnimContexts).ArrayMax = 0;
  if ((((param_1 != (UObject *)0x0) &&
       (this = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1), this != (UWorld *)0x0
       )) && (pUVar9 = UWorld::GetSubsystem<UPoseSearchInteractionSubsystem>(this),
             pUVar9 != (UPoseSearchInteractionSubsystem *)0x0)) &&
     (pUVar9 = UWorld::GetSubsystem<UPoseSearchInteractionSubsystem>(this),
     pUVar9 != (UPoseSearchInteractionSubsystem *)0x0)) {
    this_00 = UPoseSearchInteractionSubsystem::FindIsland(pUVar9,param_1,param_2);
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    FVar5 = UE::PoseSearch::DefaultRole;
    if (this_00 == (FInteractionIsland *)0x0) {
      (__return_storage_ptr__->SelectedAnim).field0_0x0.DebugPtr = (UObject *)0x0;
      (__return_storage_ptr__->BlendParameters).field0_0x0._s_0.X = (double)uVar6;
      (__return_storage_ptr__->BlendParameters).field0_0x0._s_0.Y = (double)uVar7;
      __return_storage_ptr__->SelectedTime = 0.0;
      (__return_storage_ptr__->BlendParameters).field0_0x0._s_0.Z = (double)uVar8;
      __return_storage_ptr__->bIsContinuingPoseSearch = false;
      __return_storage_ptr__->WantedPlayRate = 1.0;
      __return_storage_ptr__->bLoop = false;
      __return_storage_ptr__->bIsMirrored = false;
      (__return_storage_ptr__->SelectedDatabase).field0_0x0.DebugPtr = (UPoseSearchDatabase *)0x0;
      __return_storage_ptr__->Role = FVar5;
      __return_storage_ptr__->SearchCost = 3.4028235e+38;
      __return_storage_ptr__->bIsInteraction = false;
      if (pTVar1 != (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)local_60) {
        pFVar4 = (pTVar1->AllocatorInstance).Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->ActorRootTransforms).ArrayNum = 0;
        (__return_storage_ptr__->ActorRootTransforms).ArrayMax = 0;
      }
      if (pTVar2 != (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)local_50) {
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->ActorRootBoneTransforms).ArrayNum = 0;
        (__return_storage_ptr__->ActorRootBoneTransforms).ArrayMax = 0;
      }
      if (pTVar3 != (TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_> *)local_40) {
        pFVar4 = (pTVar3->AllocatorInstance).Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->AnimContexts).ArrayNum = 0;
        (__return_storage_ptr__->AnimContexts).ArrayMax = 0;
      }
    }
    else {
      UE::PoseSearch::FInteractionIsland::GetResult_AnyThread
                (this_00,param_1,__return_storage_ptr__,param_2);
    }
  }
  return __return_storage_ptr__;
}

// GetMontageContinuingProperties @ 14a92bd00

FPoseSearchContinuingProperties * __cdecl
UPoseSearchInteractionLibrary::GetMontageContinuingProperties
          (FPoseSearchContinuingProperties *__return_storage_ptr__,UAnimInstance *param_1)

{
  UAnimMontage *pUVar1;
  undefined8 uVar2;
  FAnimMontageInstance *pFVar3;
  
  (__return_storage_ptr__->PlayingAsset).field0_0x0.DebugPtr = (UObject *)0x0;
  __return_storage_ptr__->PlayingAssetAccumulatedTime = 0.0;
  __return_storage_ptr__->bIsPlayingAssetMirrored = false;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->PlayingAssetBlendParameters).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->PlayingAssetBlendParameters).field0_0x0._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->PlayingAssetBlendParameters).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (__return_storage_ptr__->PlayingAssetDatabase).field0_0x0.DebugPtr = (UPoseSearchDatabase *)0x0;
  __return_storage_ptr__->InterruptMode = DoNotInterrupt;
  __return_storage_ptr__->bIsContinuingInteraction = false;
  pFVar3 = UAnimInstance::GetActiveMontageInstance(param_1);
  if (pFVar3 != (FAnimMontageInstance *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (pFVar3->Montage).field0_0x0.DebugPtr, pUVar1 != (UAnimMontage *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (__return_storage_ptr__->PlayingAsset).field0_0x0 =
         (TObjectPtr<UObject_const_>_u_0)(pFVar3->Montage).field0_0x0;
    __return_storage_ptr__->PlayingAssetAccumulatedTime = (pFVar3->DeltaTimeRecord).Previous;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a92bed0

UClass * __cdecl UPoseSearchInteractionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchInteractionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchInteractionLibrary",
               &Z_Registration_Info_UClass_UPoseSearchInteractionLibrary.InnerSingleton,
               StaticRegisterNativesUPoseSearchInteractionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchInteractionLibrary>,
               InternalVTableHelperCtorCaller<UPoseSearchInteractionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchInteractionLibrary.InnerSingleton;
}

// MotionMatchInteraction @ 14a933230

FPoseSearchBlueprintResult * __cdecl
UPoseSearchInteractionLibrary::MotionMatchInteraction
          (FPoseSearchBlueprintResult *__return_storage_ptr__,
          TArray<FPoseSearchInteractionAvailability,TSizedDefaultAllocator<32>_> *param_1,
          UObject *param_2,FName param_3,bool param_4)

{
  int iVar1;
  FPoseSearchInteractionAvailability *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  FPoseSearchBlueprintResult *pFVar7;
  undefined4 uStack_2c;
  TArrayView<FPoseSearchInteractionAvailability_const_,int> local_28;
  
  __return_storage_ptr__->WantedPlayRate = 1.0;
  (__return_storage_ptr__->SelectedAnim).field0_0x0.DebugPtr = (UObject *)0x0;
  __return_storage_ptr__->SelectedTime = 0.0;
  __return_storage_ptr__->bIsContinuingPoseSearch = false;
  __return_storage_ptr__->bLoop = false;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  __return_storage_ptr__->bIsMirrored = false;
  (__return_storage_ptr__->BlendParameters).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->BlendParameters).field0_0x0._s_0.Y = (double)uVar5;
  (__return_storage_ptr__->BlendParameters).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (__return_storage_ptr__->SelectedDatabase).field0_0x0.DebugPtr = (UPoseSearchDatabase *)0x0;
  __return_storage_ptr__->SearchCost = 3.4028235e+38;
  __return_storage_ptr__->bIsInteraction = false;
  __return_storage_ptr__->Role = UE::PoseSearch::DefaultRole;
  (__return_storage_ptr__->ActorRootTransforms).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ActorRootTransforms).ArrayNum = 0;
  (__return_storage_ptr__->ActorRootTransforms).ArrayMax = 0;
  (__return_storage_ptr__->ActorRootBoneTransforms).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ActorRootBoneTransforms).ArrayNum = 0;
  (__return_storage_ptr__->ActorRootBoneTransforms).ArrayMax = 0;
  (__return_storage_ptr__->AnimContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AnimContexts).ArrayNum = 0;
  (__return_storage_ptr__->AnimContexts).ArrayMax = 0;
  pFVar2 = (FPoseSearchInteractionAvailability *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FPoseSearchBlueprintResult *)(*pcVar4)();
      return pFVar7;
    }
  }
  local_28._12_4_ = uStack_2c;
  local_28.ArrayNum = iVar1;
  local_28.DataPtr = pFVar2;
  MotionMatchInteraction
            (__return_storage_ptr__,&local_28,param_2,param_3,(IPoseHistory *)0x0,param_4);
  DestructItems<FPoseSearchInteractionAvailability,int>
            ((FPoseSearchInteractionAvailability *)(param_1->AllocatorInstance).Data,
             param_1->ArrayNum);
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return __return_storage_ptr__;
}

// MotionMatchInteraction @ 14a933360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPoseSearchInteractionLibrary::MotionMatchInteraction
          (FPoseSearchBlueprintResult *param_1,
          TArrayView<FPoseSearchInteractionAvailability_const_,int> *param_2,UObject *param_3,
          FName param_4,IPoseHistory *param_5,bool param_6)

{
  UWorld *this;
  UPoseSearchInteractionSubsystem *pUVar1;
  TObjectPtr<UObject>_u_0 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined2 local_9b;
  undefined1 local_99;
  undefined8 local_98;
  double local_90;
  double dStack_88;
  double local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined2 local_6b;
  undefined1 local_69;
  FName local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  undefined8 local_38;
  TArrayView<FPoseSearchInteractionAvailability_const_,int> local_28;
  
  if ((((param_3 != (UObject *)0x0) &&
       (this = (UWorld *)(**(code **)(*(longlong *)param_3 + 0x180))(), this != (UWorld *)0x0)) &&
      (pUVar1 = UWorld::GetSubsystem<UPoseSearchInteractionSubsystem>(this),
      pUVar1 != (UPoseSearchInteractionSubsystem *)0x0)) &&
     (pUVar1 = UWorld::GetSubsystem<UPoseSearchInteractionSubsystem>(this),
     pUVar1 != (UPoseSearchInteractionSubsystem *)0x0)) {
    local_28.DataPtr = param_2->DataPtr;
    local_28.ArrayNum = param_2->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
    UPoseSearchInteractionSubsystem::Query_AnyThread
              (pUVar1,&local_28,param_3,param_1,param_4,param_5,param_6);
    return;
  }
  local_98 = 0x3f800000;
  local_a8.DebugPtr = (UObject *)0x0;
  local_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_9b = 0;
  local_99 = 0;
  local_6b = 0;
  local_69 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_6c = 0;
  local_78 = 0;
  local_60 = (void *)0x0;
  local_58 = 0;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = (void *)0x0;
  local_38 = 0;
  local_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_70 = 0x7f7fffff;
  local_68 = UE::PoseSearch::DefaultRole;
  FPoseSearchBlueprintResult::operator=(param_1,(FPoseSearchBlueprintResult *)&local_a8.ObjectPtr);
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  return;
}

// MotionMatchInteraction @ 14a9334c0

bool __cdecl
UPoseSearchInteractionLibrary::MotionMatchInteraction
          (FPoseSearchBlueprintResult *param_1,
          TArrayView<FPoseSearchInteractionAvailability_const_,int> *param_2,UObject *param_3,
          FName param_4,IPoseHistory *param_5,bool param_6,bool param_7,float param_8)

{
  UPoseSearchDatabase *this;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  void *pvVar7;
  float fVar8;
  TObjectPtr<UObject>_u_0 local_228;
  undefined4 local_220;
  undefined1 local_21c;
  undefined2 local_21b;
  undefined1 local_219;
  undefined8 local_218;
  double local_210;
  double dStack_208;
  double local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined1 local_1ec;
  undefined2 local_1eb;
  undefined1 local_1e9;
  FName local_1e8;
  void *local_1e0;
  undefined8 local_1d8;
  void *local_1d0;
  undefined8 local_1c8;
  void *local_1c0;
  undefined8 local_1b8;
  TObjectPtr<UObject>_u_0 local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a4;
  undefined2 local_1a3;
  undefined1 local_1a1;
  undefined8 local_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined1 local_174;
  undefined2 local_173;
  undefined1 local_171;
  FName local_170;
  void *local_168;
  undefined8 local_160;
  void *local_158;
  undefined8 local_150;
  void *local_148;
  undefined8 local_140;
  TObjectPtr<UObject>_u_0 local_138;
  undefined4 local_130;
  undefined1 local_12c;
  undefined2 local_12b;
  undefined1 local_129;
  undefined8 local_128;
  double local_120;
  double dStack_118;
  double local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_fc;
  undefined2 local_fb;
  undefined1 local_f9;
  FName local_f8;
  void *local_f0;
  undefined8 local_e8;
  void *local_e0;
  undefined8 local_d8;
  void *local_d0;
  undefined8 local_c8;
  TObjectPtr<UObject>_u_0 local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_a8;
  undefined2 local_a4;
  double local_a0;
  double dStack_98;
  double local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  FName local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  TArrayView<FPoseSearchInteractionAvailability_const_,int> local_38;
  FInteractionValidator local_28;
  
  if (param_2->ArrayNum != 0) {
    UE::PoseSearch::FInteractionValidator::FInteractionValidator(&local_28,param_3);
    local_78 = UE::PoseSearch::DefaultRole;
    local_a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_38.DataPtr = param_2->DataPtr;
    local_38.ArrayNum = param_2->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
    local_b8.DebugPtr = (UObject *)0x0;
    local_b0 = 0;
    local_ac = 0;
    local_a8 = 0x3f800000;
    local_a4 = 0;
    local_88 = 0;
    local_80 = 0x7f7fffff;
    local_7c = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_60 = (void *)0x0;
    local_58 = 0;
    local_50 = (void *)0x0;
    local_48 = 0;
    MotionMatchInteraction
              ((FPoseSearchBlueprintResult *)&local_b8.ObjectPtr,&local_38,param_3,param_4,param_5,
               param_6);
    if (((int)local_68 != (int)local_58) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("SearchResult.ActorRootTransforms.Num() == SearchResult.ActorRootBoneTransforms.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionLibrary.cpp"
                           ,0x31,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = local_b8.DebugPtr != (UObject *)0x0;
    if (bVar2) {
      FPoseSearchBlueprintResult::operator=
                (param_1,(FPoseSearchBlueprintResult *)&local_b8.ObjectPtr);
    }
    if (local_50 != (void *)0x0) {
      FMemory::Free(local_50);
    }
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    UE::PoseSearch::FInteractionValidator::~FInteractionValidator(&local_28);
    if (bVar2) {
      return true;
    }
  }
  if (param_1->bIsInteraction == false) {
    return false;
  }
  if (!param_7) {
    local_128 = 0x3f800000;
    local_12b = 0;
    local_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_129 = 0;
    local_fb = 0;
    local_f9 = 0;
    local_130 = 0;
    local_12c = 0;
    local_fc = 0;
    local_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_138.DebugPtr = (UObject *)0x0;
    local_108 = 0;
    local_100 = 0x7f7fffff;
    local_f8 = UE::PoseSearch::DefaultRole;
    local_f0 = (void *)0x0;
    local_e8 = 0;
    local_e0 = (void *)0x0;
    local_d8 = 0;
    local_d0 = (void *)0x0;
    local_c8 = 0;
    FPoseSearchBlueprintResult::operator=
              (param_1,(FPoseSearchBlueprintResult *)&local_138.ObjectPtr);
    if (local_d0 != (void *)0x0) {
      FMemory::Free(local_d0);
    }
    pvVar7 = local_f0;
    if (local_e0 != (void *)0x0) {
      FMemory::Free(local_e0);
      pvVar7 = local_f0;
    }
    goto LAB_14a9339ca;
  }
  this = (param_1->SelectedDatabase).field0_0x0.DebugPtr;
  if ((this == (UPoseSearchDatabase *)0x0) ||
     (iVar4 = UPoseSearchDatabase::GetPoseIndex
                        (this,(param_1->SelectedAnim).field0_0x0.DebugPtr,param_1->SelectedTime,
                         param_1->bIsMirrored,&param_1->BlendParameters), iVar4 == -1)) {
    local_1a0 = 0x3f800000;
    local_1a3 = 0;
    local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_190 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1a1 = 0;
    local_173 = 0;
    local_171 = 0;
    local_1a8 = 0;
    local_1a4 = 0;
    local_174 = 0;
    local_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1b0.DebugPtr = (UObject *)0x0;
    local_180 = 0;
    local_178 = 0x7f7fffff;
    local_170 = UE::PoseSearch::DefaultRole;
    local_168 = (void *)0x0;
    local_160 = 0;
    local_158 = (void *)0x0;
    local_150 = 0;
    local_148 = (void *)0x0;
    local_140 = 0;
    FPoseSearchBlueprintResult::operator=
              (param_1,(FPoseSearchBlueprintResult *)&local_1b0.ObjectPtr);
    if (local_148 != (void *)0x0) {
      FMemory::Free(local_148);
    }
    pvVar7 = local_168;
    if (local_158 != (void *)0x0) {
      FMemory::Free(local_158);
      pvVar7 = local_168;
    }
    goto LAB_14a9339ca;
  }
  if ((param_1->SelectedAnim).field0_0x0.DebugPtr != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UAnimationAsset_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar5);
    if ((bVar2) && (pUVar6 = (param_1->SelectedAnim).field0_0x0.DebugPtr, pUVar6 != (UObject *)0x0))
    {
LAB_14a93372d:
      fVar8 = (float)(**(code **)(*(longlong *)pUVar6 + 0x2c0))();
      if (param_1->SelectedTime <= fVar8 - param_8 && fVar8 - param_8 != param_1->SelectedTime) {
        (param_1->ActorRootTransforms).ArrayNum = 0;
        if ((param_1->ActorRootTransforms).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,0,&(param_1->ActorRootTransforms).AllocatorInstance,0,
                     &(param_1->ActorRootTransforms).ArrayMax);
        }
        (param_1->ActorRootBoneTransforms).ArrayNum = 0;
        if ((param_1->ActorRootBoneTransforms).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,0,&(param_1->ActorRootBoneTransforms).AllocatorInstance,0,
                     &(param_1->ActorRootBoneTransforms).ArrayMax);
        }
        (param_1->AnimContexts).ArrayNum = 0;
        if (-1 < (param_1->AnimContexts).ArrayMax) {
          return false;
        }
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(param_1->AnimContexts).AllocatorInstance,0,
                   &(param_1->AnimContexts).ArrayMax);
        return false;
      }
    }
    else if ((param_1->SelectedAnim).field0_0x0.DebugPtr != (UObject *)0x0) {
      pUVar5 = Z_Construct_UClass_UMultiAnimAsset_NoRegister();
      bVar2 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar5);
      if (((bVar2) &&
          (pUVar6 = (param_1->SelectedAnim).field0_0x0.DebugPtr, pUVar6 != (UObject *)0x0)) &&
         (pUVar6 = (UObject *)(**(code **)(*(longlong *)pUVar6 + 0x2d8))(pUVar6,&param_1->Role),
         pUVar6 != (UObject *)0x0)) goto LAB_14a93372d;
    }
  }
  local_218 = 0x3f800000;
  local_21b = 0;
  local_210 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_208 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_219 = 0;
  local_1eb = 0;
  local_1e9 = 0;
  local_220 = 0;
  local_21c = 0;
  local_1ec = 0;
  local_200 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_228.DebugPtr = (UObject *)0x0;
  local_1f8 = 0;
  local_1f0 = 0x7f7fffff;
  local_1e8 = UE::PoseSearch::DefaultRole;
  local_1e0 = (void *)0x0;
  local_1d8 = 0;
  local_1d0 = (void *)0x0;
  local_1c8 = 0;
  local_1c0 = (void *)0x0;
  local_1b8 = 0;
  FPoseSearchBlueprintResult::operator=(param_1,(FPoseSearchBlueprintResult *)&local_228.ObjectPtr);
  if (local_1c0 != (void *)0x0) {
    FMemory::Free(local_1c0);
  }
  pvVar7 = local_1e0;
  if (local_1d0 != (void *)0x0) {
    FMemory::Free(local_1d0);
    pvVar7 = local_1e0;
  }
LAB_14a9339ca:
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  return false;
}

// MotionMatchInteraction_Pure @ 14a933a00

FPoseSearchBlueprintResult * __cdecl
UPoseSearchInteractionLibrary::MotionMatchInteraction_Pure
          (FPoseSearchBlueprintResult *__return_storage_ptr__,
          TArray<FPoseSearchInteractionAvailability,TSizedDefaultAllocator<32>_> *param_1,
          UObject *param_2,FName param_3,bool param_4)

{
  int iVar1;
  FPoseSearchInteractionAvailability *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  FPoseSearchBlueprintResult *pFVar7;
  undefined4 uStack_2c;
  TArrayView<FPoseSearchInteractionAvailability_const_,int> local_28;
  
  __return_storage_ptr__->WantedPlayRate = 1.0;
  (__return_storage_ptr__->SelectedAnim).field0_0x0.DebugPtr = (UObject *)0x0;
  __return_storage_ptr__->SelectedTime = 0.0;
  __return_storage_ptr__->bIsContinuingPoseSearch = false;
  __return_storage_ptr__->bLoop = false;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  __return_storage_ptr__->bIsMirrored = false;
  (__return_storage_ptr__->BlendParameters).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->BlendParameters).field0_0x0._s_0.Y = (double)uVar5;
  (__return_storage_ptr__->BlendParameters).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (__return_storage_ptr__->SelectedDatabase).field0_0x0.DebugPtr = (UPoseSearchDatabase *)0x0;
  __return_storage_ptr__->SearchCost = 3.4028235e+38;
  __return_storage_ptr__->bIsInteraction = false;
  __return_storage_ptr__->Role = UE::PoseSearch::DefaultRole;
  (__return_storage_ptr__->ActorRootTransforms).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ActorRootTransforms).ArrayNum = 0;
  (__return_storage_ptr__->ActorRootTransforms).ArrayMax = 0;
  (__return_storage_ptr__->ActorRootBoneTransforms).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ActorRootBoneTransforms).ArrayNum = 0;
  (__return_storage_ptr__->ActorRootBoneTransforms).ArrayMax = 0;
  (__return_storage_ptr__->AnimContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AnimContexts).ArrayNum = 0;
  (__return_storage_ptr__->AnimContexts).ArrayMax = 0;
  pFVar2 = (FPoseSearchInteractionAvailability *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FPoseSearchBlueprintResult *)(*pcVar4)();
      return pFVar7;
    }
  }
  local_28._12_4_ = uStack_2c;
  local_28.ArrayNum = iVar1;
  local_28.DataPtr = pFVar2;
  MotionMatchInteraction
            (__return_storage_ptr__,&local_28,param_2,param_3,(IPoseHistory *)0x0,param_4);
  DestructItems<FPoseSearchInteractionAvailability,int>
            ((FPoseSearchInteractionAvailability *)(param_1->AllocatorInstance).Data,
             param_1->ArrayNum);
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPoseSearchInteractionLibrary @ 14a93edc0

void __cdecl UPoseSearchInteractionLibrary::StaticRegisterNativesUPoseSearchInteractionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UPoseSearchInteractionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetMontageContinuingProperties @ 14a947c50

void __cdecl
UPoseSearchInteractionLibrary::execGetMontageContinuingProperties
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FAnimMontageInstance *pFVar5;
  UAnimMontage *pUVar6;
  float fVar7;
  UAnimInstance *local_res10;
  
  local_res10 = (UAnimInstance *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  fVar7 = 0.0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pFVar5 = UAnimInstance::GetActiveMontageInstance(local_res10);
  pUVar6 = (UAnimMontage *)0x0;
  if (pFVar5 != (FAnimMontageInstance *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 = (pFVar5->Montage).field0_0x0.DebugPtr, pUVar6 != (UAnimMontage *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    fVar7 = (pFVar5->DeltaTimeRecord).Previous;
    pUVar6 = (pFVar5->Montage).field0_0x0.DebugPtr;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UAnimMontage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  *(UAnimMontage **)param_3 = pUVar6;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar3;
  *(undefined1 *)((longlong)param_3 + 0xc) = 0;
  *(undefined8 *)((longlong)param_3 + 0x20) = uVar4;
  *(float *)((longlong)param_3 + 8) = fVar7;
  *(undefined2 *)((longlong)param_3 + 0x28) = 0;
  *(undefined8 *)((longlong)param_3 + 0x30) = 0;
  return;
}

// execMotionMatchInteraction @ 14a9495b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPoseSearchInteractionLibrary::execMotionMatchInteraction
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  FName FVar4;
  int iVar5;
  FPoseSearchInteractionAvailability *pFVar6;
  UObject *pUVar7;
  bool bVar8;
  UWorld *this;
  UPoseSearchInteractionSubsystem *pUVar9;
  bool bVar10;
  int local_res10 [4];
  FName local_res20;
  ForAnyElementType local_f8;
  int local_f0;
  int local_ec;
  FPoseSearchInteractionAvailability *local_e8;
  undefined8 local_e0;
  UObject *local_d8;
  TObjectPtr<UObject>_u_0 local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_94;
  FName local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  FPoseSearchInteractionAvailability *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<FPoseSearchInteractionAvailability_const_,int> local_48;
  
  local_e8 = (FPoseSearchInteractionAvailability *)0x0;
  local_e0 = 0;
  FArrayProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_d8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar7 = local_d8;
  pFVar6 = local_e8;
  FVar4 = local_res20;
  bVar10 = local_res10[0] != 0;
  iVar5 = (int)local_e0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = (int)local_e0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((int)local_e0 == 0) {
    local_ec = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,(int)local_e0,0,&local_f8,(int)local_e0,&local_ec);
    ConstructItems<FPoseSearchInteractionAvailability,FPoseSearchInteractionAvailability,int>
              (local_f8.Data,pFVar6,iVar5);
  }
  iVar5 = local_f0;
  local_d0.DebugPtr = (UObject *)0x0;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0x3f800000;
  local_bc = 0;
  local_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_a0 = 0;
  local_98 = 0x7f7fffff;
  local_94 = 0;
  local_90 = UE::PoseSearch::DefaultRole;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = (FPoseSearchInteractionAvailability *)local_f8.Data;
  local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uStack_b4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uStack_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uStack_ac = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  if ((local_f0 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iStack_50 = iVar5;
  if ((((pUVar7 == (UObject *)0x0) ||
       (this = (UWorld *)(**(code **)(*(longlong *)pUVar7 + 0x180))(pUVar7), this == (UWorld *)0x0))
      || (pUVar9 = UWorld::GetSubsystem<UPoseSearchInteractionSubsystem>(this),
         pUVar9 == (UPoseSearchInteractionSubsystem *)0x0)) ||
     (pUVar9 = UWorld::GetSubsystem<UPoseSearchInteractionSubsystem>(this),
     pUVar9 == (UPoseSearchInteractionSubsystem *)0x0)) {
    local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uStack_b4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uStack_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uStack_ac = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_90 = UE::PoseSearch::DefaultRole;
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
  }
  else {
    local_48._12_4_ = uStack_4c;
    local_48.ArrayNum = iStack_50;
    local_48.DataPtr = local_58;
    UPoseSearchInteractionSubsystem::Query_AnyThread
              (pUVar9,&local_48,pUVar7,(FPoseSearchBlueprintResult *)&local_d0.ObjectPtr,FVar4,
               (IPoseHistory *)0x0,bVar10);
  }
  DestructItems<FPoseSearchInteractionAvailability,int>
            ((FPoseSearchInteractionAvailability *)local_f8.Data,local_f0);
  if ((FPoseSearchInteractionAvailability *)local_f8.Data !=
      (FPoseSearchInteractionAvailability *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  FPoseSearchBlueprintResult::operator=(param_3,(FPoseSearchBlueprintResult *)&local_d0.ObjectPtr);
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  DestructItems<FPoseSearchInteractionAvailability,int>(local_e8,(int)local_e0);
  if (local_e8 != (FPoseSearchInteractionAvailability *)0x0) {
    FMemory::Free(local_e8);
  }
  return;
}

// execMotionMatchInteraction_Pure @ 14a949930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPoseSearchInteractionLibrary::execMotionMatchInteraction_Pure
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  FName FVar4;
  int iVar5;
  FPoseSearchInteractionAvailability *pFVar6;
  UObject *pUVar7;
  bool bVar8;
  UWorld *this;
  UPoseSearchInteractionSubsystem *pUVar9;
  bool bVar10;
  int local_res10 [4];
  FName local_res20;
  ForAnyElementType local_f8;
  int local_f0;
  int local_ec;
  FPoseSearchInteractionAvailability *local_e8;
  undefined8 local_e0;
  UObject *local_d8;
  TObjectPtr<UObject>_u_0 local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_94;
  FName local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  FPoseSearchInteractionAvailability *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<FPoseSearchInteractionAvailability_const_,int> local_48;
  
  local_e8 = (FPoseSearchInteractionAvailability *)0x0;
  local_e0 = 0;
  FArrayProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_d8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar7 = local_d8;
  pFVar6 = local_e8;
  FVar4 = local_res20;
  bVar10 = local_res10[0] != 0;
  iVar5 = (int)local_e0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = (int)local_e0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((int)local_e0 == 0) {
    local_ec = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,(int)local_e0,0,&local_f8,(int)local_e0,&local_ec);
    ConstructItems<FPoseSearchInteractionAvailability,FPoseSearchInteractionAvailability,int>
              (local_f8.Data,pFVar6,iVar5);
  }
  iVar5 = local_f0;
  local_d0.DebugPtr = (UObject *)0x0;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0x3f800000;
  local_bc = 0;
  local_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_a0 = 0;
  local_98 = 0x7f7fffff;
  local_94 = 0;
  local_90 = UE::PoseSearch::DefaultRole;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = (FPoseSearchInteractionAvailability *)local_f8.Data;
  local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uStack_b4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uStack_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uStack_ac = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  if ((local_f0 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iStack_50 = iVar5;
  if ((((pUVar7 == (UObject *)0x0) ||
       (this = (UWorld *)(**(code **)(*(longlong *)pUVar7 + 0x180))(pUVar7), this == (UWorld *)0x0))
      || (pUVar9 = UWorld::GetSubsystem<UPoseSearchInteractionSubsystem>(this),
         pUVar9 == (UPoseSearchInteractionSubsystem *)0x0)) ||
     (pUVar9 = UWorld::GetSubsystem<UPoseSearchInteractionSubsystem>(this),
     pUVar9 == (UPoseSearchInteractionSubsystem *)0x0)) {
    local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uStack_b4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uStack_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uStack_ac = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_90 = UE::PoseSearch::DefaultRole;
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
  }
  else {
    local_48._12_4_ = uStack_4c;
    local_48.ArrayNum = iStack_50;
    local_48.DataPtr = local_58;
    UPoseSearchInteractionSubsystem::Query_AnyThread
              (pUVar9,&local_48,pUVar7,(FPoseSearchBlueprintResult *)&local_d0.ObjectPtr,FVar4,
               (IPoseHistory *)0x0,bVar10);
  }
  DestructItems<FPoseSearchInteractionAvailability,int>
            ((FPoseSearchInteractionAvailability *)local_f8.Data,local_f0);
  if ((FPoseSearchInteractionAvailability *)local_f8.Data !=
      (FPoseSearchInteractionAvailability *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  FPoseSearchBlueprintResult::operator=(param_3,(FPoseSearchBlueprintResult *)&local_d0.ObjectPtr);
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  DestructItems<FPoseSearchInteractionAvailability,int>(local_e8,(int)local_e0);
  if (local_e8 != (FPoseSearchInteractionAvailability *)0x0) {
    FMemory::Free(local_e8);
  }
  return;
}

