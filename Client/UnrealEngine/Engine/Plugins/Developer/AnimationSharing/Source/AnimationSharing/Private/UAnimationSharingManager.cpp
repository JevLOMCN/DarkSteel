// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationSharing
// Functions: 42

// StaticClass @ 14e2a7b10

UClass * __cdecl UAnimationSharingManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationSharingManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationSharing",L"AnimationSharingManager",
               &Z_Registration_Info_UClass_UAnimationSharingManager.InnerSingleton,
               StaticRegisterNativesUAnimationSharingManager,0xf0,8,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimationSharingManager>,
               InternalVTableHelperCtorCaller<UAnimationSharingManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationSharingManager.InnerSingleton;
}

// UAnimationSharingManager @ 14e2abcd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAnimationSharingManager * __thiscall
UAnimationSharingManager::UAnimationSharingManager
          (UAnimationSharingManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimationSharingManager__6B_;
  (this->Skeletons).ArrayNum = 0;
  (this->Skeletons).ArrayMax = 0;
  (this->PerSkeletonData).ArrayNum = 0;
  (this->PerSkeletonData).ArrayMax = 0;
  *(undefined8 *)&(this->SkeletonIDToSkeletonIndexMap).field_0x8 = 0;
  (this->Skeletons).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerSkeletonData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&this->SkeletonIDToSkeletonIndexMap = 0;
  *(undefined8 *)&(this->SkeletonIDToSkeletonIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->SkeletonIDToSkeletonIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->SkeletonIDToSkeletonIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkeletonIDToSkeletonIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkeletonIDToSkeletonIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->SkeletonIDToSkeletonIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->SkeletonIDToSkeletonIndexMap).field_0x48 = 0;
  this->NextSkeletonID = 0;
  (this->AnimationSharingSetups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationSharingSetups).ArrayNum = 0;
  (this->AnimationSharingSetups).ArrayMax = 0;
  (this->ScalabilitySettings).UseBlendTransitions.Default = true;
  (this->ScalabilitySettings).BlendSignificanceValue.Default = 0.0;
  (this->ScalabilitySettings).MaximumNumberConcurrentBlends = 1;
  (this->ScalabilitySettings).TickSignificanceValue = 0.0;
  FTickFunction::FTickFunction((FTickFunction *)&this->TickFunction);
  (this->TickFunction)._padding_ = (longlong)&___7FTickAnimationSharingFunction__6B_;
  (this->TickFunction).Manager = (UAnimationSharingManager *)0x0;
  return this;
}

// UAnimationSharingManager @ 14e2abda0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAnimationSharingManager * __thiscall
UAnimationSharingManager::UAnimationSharingManager
          (UAnimationSharingManager *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimationSharingManager__6B_;
  (this->Skeletons).ArrayNum = 0;
  (this->Skeletons).ArrayMax = 0;
  (this->PerSkeletonData).ArrayNum = 0;
  (this->PerSkeletonData).ArrayMax = 0;
  *(undefined8 *)&(this->SkeletonIDToSkeletonIndexMap).field_0x8 = 0;
  (this->Skeletons).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerSkeletonData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&this->SkeletonIDToSkeletonIndexMap = 0;
  *(undefined8 *)&(this->SkeletonIDToSkeletonIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->SkeletonIDToSkeletonIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->SkeletonIDToSkeletonIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkeletonIDToSkeletonIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkeletonIDToSkeletonIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->SkeletonIDToSkeletonIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->SkeletonIDToSkeletonIndexMap).field_0x48 = 0;
  this->NextSkeletonID = 0;
  (this->AnimationSharingSetups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationSharingSetups).ArrayNum = 0;
  (this->AnimationSharingSetups).ArrayMax = 0;
  (this->ScalabilitySettings).UseBlendTransitions.Default = true;
  (this->ScalabilitySettings).BlendSignificanceValue.Default = 0.0;
  (this->ScalabilitySettings).MaximumNumberConcurrentBlends = 1;
  (this->ScalabilitySettings).TickSignificanceValue = 0.0;
  FTickFunction::FTickFunction((FTickFunction *)&this->TickFunction);
  (this->TickFunction)._padding_ = (longlong)&___7FTickAnimationSharingFunction__6B_;
  (this->TickFunction).Manager = (UAnimationSharingManager *)0x0;
  return this;
}

// ~UAnimationSharingManager @ 14e2ac460

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAnimationSharingManager::~UAnimationSharingManager(UAnimationSharingManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UAnimationSharingManager__6B_;
  FTickFunction::~FTickFunction((FTickFunction *)&this->TickFunction);
  pFVar1 = (this->AnimationSharingSetups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->SkeletonIDToSkeletonIndexMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SkeletonIDToSkeletonIndexMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_char,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_char,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_char,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SkeletonIDToSkeletonIndexMap);
  pFVar1 = (this->PerSkeletonData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Skeletons).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddSetup @ 14e2ad730

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
UAnimationSharingManager::AddSetup(UAnimationSharingManager *this,UAnimationSharingSetup *param_1)

{
  int *piVar1;
  TArray<TWeakObjectPtr<UAnimationSharingSetup_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  FWeakObjectPtr *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UWorld *pUVar8;
  FScriptContainerElement *this_00;
  FPerSkeletonAnimationSharingSetup *pFVar9;
  FPerSkeletonAnimationSharingSetup *pFVar10;
  undefined1 local_res10 [8];
  FName local_res18;
  UAnimationSharingSetup *local_res20;
  FWeakObjectPtr local_58;
  FString local_50;
  FAnimationSharingScalability local_40;
  
  if (param_1 == (UAnimationSharingSetup *)0x0) {
    if (1 < (byte)LogAnimationSharing._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
      return;
    }
  }
  else {
    pTVar2 = &this->AnimationSharingSetups;
    this_00 = (pTVar2->AllocatorInstance).Data;
    pFVar3 = this_00 + (longlong)(this->AnimationSharingSetups).ArrayNum * 8;
    for (; this_00 != pFVar3; this_00 = this_00 + 8) {
      bVar6 = TWeakObjectPtr<UAnimationSharingSetup_const_,FWeakObjectPtr>::
              UEOpEquals<UAnimationSharingSetup,bool>
                        ((TWeakObjectPtr<UAnimationSharingSetup_const_,FWeakObjectPtr> *)this_00,
                         param_1);
      if (bVar6) {
        if ((byte)LogAnimationSharing._0_1_ < 2) {
          return;
        }
        local_res18 = (FName)param_1->_padding_;
        ::FName::ToString(&local_res18,&local_50);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
        if (local_50.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
        return;
      }
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_res20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_res20);
    pFVar4 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
    if (((pFVar4 <= &local_58) && (&local_58 < pFVar4 + (this->AnimationSharingSetups).ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = (this->AnimationSharingSetups).ArrayNum;
    piVar1 = &(this->AnimationSharingSetups).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->AnimationSharingSetups).ArrayNum = iVar7 + 1;
    *(FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_58;
    iVar7 = (param_1->SkeletonSetups).ArrayNum;
    local_40.UseBlendTransitions.Default =
         (param_1->ScalabilitySettings).UseBlendTransitions.Default;
    local_40._1_3_ = *(undefined3 *)&(param_1->ScalabilitySettings).field_0x1;
    local_40.BlendSignificanceValue.Default =
         (param_1->ScalabilitySettings).BlendSignificanceValue.Default;
    local_40.MaximumNumberConcurrentBlends.Default =
         (param_1->ScalabilitySettings).MaximumNumberConcurrentBlends.Default;
    local_40.TickSignificanceValue.Default =
         (param_1->ScalabilitySettings).TickSignificanceValue.Default;
    pFVar9 = (FPerSkeletonAnimationSharingSetup *)(param_1->SkeletonSetups).AllocatorInstance.Data;
    pFVar10 = pFVar9 + iVar7;
    while( true ) {
      if ((param_1->SkeletonSetups).ArrayNum != iVar7) {
        `TCheckedPointerIterator<FPerSkeletonAnimationSharingSetup_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res10);
      }
      if (pFVar9 == pFVar10) break;
      SetupPerSkeletonData(this,pFVar9,param_1,&local_40);
      pFVar9 = pFVar9 + 1;
    }
    pUVar8 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
    TMulticastDelegate<void___cdecl(UAnimationSharingManager_*,UWorld_const_*),FDefaultDelegateUserPolicy>
    ::Broadcast(&FAnimSharingModule::OnAnimationSharingManagerSetupAdded,this,pUVar8);
  }
  return;
}

// AnimationSharingEnabled @ 14e2ad990

bool __cdecl UAnimationSharingManager::AnimationSharingEnabled(void)

{
  return GAnimationSharingEnabled == 1;
}

// BeginDestroy @ 14e2adb70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAnimationSharingManager::BeginDestroy(UAnimationSharingManager *this)

{
  int *piVar1;
  
  UObject::BeginDestroy((UObject *)this);
  piVar1 = &(this->PerSkeletonData).ArrayMax;
  (this->PerSkeletonData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->PerSkeletonData).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->AnimationSharingSetups).ArrayMax;
  (this->AnimationSharingSetups).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->AnimationSharingSetups).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->Skeletons).ArrayMax;
  (this->Skeletons).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Skeletons).AllocatorInstance,0,piVar1);
  }
  FTickFunction::UnRegisterTickFunction((FTickFunction *)&this->TickFunction);
  (this->TickFunction).Manager = (UAnimationSharingManager *)0x0;
  return;
}

// CheckDataForActor @ 14e2ade20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UAnimationSharingManager::CheckDataForActor(UAnimationSharingManager *this,AActor *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  FName FVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  FName local_res18;
  FName local_res20;
  FName local_88;
  FName local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  uVar12 = 0;
  if (0 < (this->PerSkeletonData).ArrayNum) {
    lVar13 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar12 < (this->PerSkeletonData).ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      lVar2 = *(longlong *)((this->PerSkeletonData).AllocatorInstance.Data + lVar13);
      plVar3 = *(longlong **)(lVar2 + 0x28);
      for (plVar10 = plVar3; plVar10 != plVar3 + *(int *)(lVar2 + 0x30); plVar10 = plVar10 + 1) {
        if ((AActor *)*plVar10 == (AActor *)0x0) {
          bVar6 = param_1 == (AActor *)0x0;
        }
        else {
          bVar6 = (AActor *)*plVar10 == param_1;
        }
        if (bVar6) {
          uVar9 = (uint)((longlong)plVar10 - (longlong)plVar3 >> 3);
          if (uVar9 != 0xffffffff) {
            if (uVar12 == 0xffffffff) goto LAB_14e2adf04;
            uVar8 = 0;
            if ((int)uVar12 < (this->PerSkeletonData).ArrayNum) {
              uVar8 = ~uVar12 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            lVar13 = *(longlong *)
                      ((this->PerSkeletonData).AllocatorInstance.Data + (longlong)(int)uVar12 * 8);
            if (((int)uVar9 < 0) || (*(int *)(lVar13 + 0x40) <= (int)uVar9)) {
              if ((byte)LogAnimationSharing._0_1_ < 3) {
                return false;
              }
              if (param_1 == (AActor *)0x0) {
                ::FString::FString(&local_58,L"None");
              }
              else {
                local_88 = (FName)param_1->_padding_;
                ::FName::ToString(&local_88,&local_58);
              }
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
              local_48.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
            }
            else {
              uVar12 = 0;
              if ((int)uVar9 < *(int *)(lVar13 + 0x40)) {
                uVar12 = ~uVar9 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
              iVar1 = *(int *)(*(longlong *)(lVar13 + 0x38) + 0x28 + (longlong)(int)uVar9 * 0x48);
              lVar2 = *(longlong *)(lVar13 + 0x38) + (longlong)(int)uVar9 * 0x48;
              if (iVar1 == 0) {
                if ((byte)LogAnimationSharing._0_1_ < 3) {
                  return false;
                }
                if (param_1 == (AActor *)0x0) {
                  ::FString::FString(&local_78,L"None");
                }
                else {
                  local_res18 = (FName)param_1->_padding_;
                  ::FName::ToString(&local_res18,&local_78);
                }
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
                local_48.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
              }
              else {
                FVar11 = *(FName *)(lVar2 + 0x20);
                local_res18 = (FName)((longlong)FVar11 + (longlong)iVar1 * 4);
                while( true ) {
                  FVar5 = local_res18;
                  if (*(int *)(lVar2 + 0x28) != iVar1) {
                    `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(local_res8);
                  }
                  if (FVar11 == FVar5) {
                    return true;
                  }
                  if ((*(int *)FVar11 < 0) || (*(int *)(lVar13 + 0x50) <= *(int *)FVar11)) break;
                  FVar11 = (FName)((longlong)FVar11 + 4);
                }
                if ((byte)LogAnimationSharing._0_1_ < 3) {
                  return false;
                }
                if (param_1 == (AActor *)0x0) {
                  ::FString::FString(&local_68,L"None");
                }
                else {
                  local_res20 = (FName)param_1->_padding_;
                  ::FName::ToString(&local_res20,&local_68);
                }
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
                local_48.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
              }
            }
            goto LAB_14e2ae1d4;
          }
          break;
        }
      }
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 8;
    } while ((int)uVar12 < (this->PerSkeletonData).ArrayNum);
  }
LAB_14e2adf04:
  if (2 < (byte)LogAnimationSharing._0_1_) {
    if (param_1 == (AActor *)0x0) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      local_80 = (FName)param_1->_padding_;
      ::FName::ToString(&local_80,&local_48);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
LAB_14e2ae1d4:
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// ClearActorData @ 14e2ae210

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAnimationSharingManager::ClearActorData(UAnimationSharingManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->PerSkeletonData).AllocatorInstance.Data;
  iVar2 = (this->PerSkeletonData).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->PerSkeletonData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UAnimSharingInstance>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    UAnimSharingInstance::UnregisterAllActors(*(UAnimSharingInstance **)pFVar4);
    pFVar4 = pFVar4 + 8;
  }
  pFVar4 = (this->PerSkeletonData).AllocatorInstance.Data;
  iVar2 = (this->PerSkeletonData).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->PerSkeletonData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UAnimSharingInstance>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    lVar3 = *(longlong *)pFVar4;
    DestructItems<FBlendInstance,int>(*(FBlendInstance **)(lVar3 + 0xa0),*(int *)(lVar3 + 0xa8));
    *(undefined4 *)(lVar3 + 0xa8) = 0;
    if (*(int *)(lVar3 + 0xac) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,(ForAnyElementType *)(lVar3 + 0xa0),0,(int *)(lVar3 + 0xac));
    }
    DestructItems<FOnDemandInstance,int>
              (*(FOnDemandInstance **)(lVar3 + 0xb0),*(int *)(lVar3 + 0xb8));
    *(undefined4 *)(lVar3 + 0xb8) = 0;
    if (*(int *)(lVar3 + 0xbc) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,(ForAnyElementType *)(lVar3 + 0xb0),0,(int *)(lVar3 + 0xbc));
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// CreateActorHandle @ 14e2ae360

uint __thiscall
UAnimationSharingManager::CreateActorHandle
          (UAnimationSharingManager *this,uchar param_1,uint param_2)

{
  undefined1 local_res10 [24];
  
  if (0xffffff < param_2) {
    `UAnimationSharingManager::CreateActorHandle'::__l2::<lambda_1>::operator()(local_res10);
  }
  return (uint)param_1 << 0x18 | param_2;
}

// CreateAnimSharingInstance @ 14e2ae3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAnimSharingInstance * __thiscall
UAnimationSharingManager::CreateAnimSharingInstance(UAnimationSharingManager *this)

{
  UClass *pUVar1;
  UAnimSharingInstance *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAnimSharingInstance::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = this;
  pUVar2 = (UAnimSharingInstance *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// CreateAnimationSharingManager @ 14e2ae670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UAnimationSharingManager::CreateAnimationSharingManager
          (UObject *param_1,UAnimationSharingSetup *param_2)

{
  bool bVar1;
  UWorld *pUVar2;
  code *local_38 [2];
  undefined **local_28;
  UAnimationSharingSetup *local_20;
  undefined8 local_10;
  
  pUVar2 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (pUVar2 != (UWorld *)0x0) {
    local_10 = 0;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FAnimSharingModule::CreateAnimationSharingManager'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FAnimSharingModule::CreateAnimationSharingManager'::__l2::<lambda_1>,UAnimationSharingManager_*,UWorld_*>
                  ::Call;
    local_20 = param_2;
    bVar1 = FAnimSharingModule::CreateAnimationSharingManager
                      (pUVar2,(TFunction<UAnimationSharingManager_*___cdecl(UWorld_*)> *)local_38);
    return bVar1;
  }
  return false;
}

// GetActorDataByHandle @ 14e2af1e0

FPerActorData * __thiscall
UAnimationSharingManager::GetActorDataByHandle(UAnimationSharingManager *this,uint param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  byte *pbVar5;
  FPerActorData *pFVar6;
  uint uVar7;
  
  pFVar6 = (FPerActorData *)0x0;
  if (((param_1 == 0xffffffff) ||
      (pbVar5 = TMapBase<unsigned_char,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,unsigned_char,0>_>
                ::Find((TMapBase<unsigned_char,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,unsigned_char,0>_>
                        *)&this->SkeletonIDToSkeletonIndexMap,(uchar)(param_1 >> 0x18)),
      pbVar5 == (byte *)0x0)) || (*pbVar5 == 0xff)) {
    return (FPerActorData *)0x0;
  }
  uVar7 = param_1 & 0xffffff;
  uVar4 = (uint)*pbVar5;
  if ((int)uVar4 < (this->PerSkeletonData).ArrayNum) {
    if (((this->PerSkeletonData).ArrayNum <= (int)uVar4) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FPerActorData *)(*pcVar2)();
      return pFVar6;
    }
    if ((int)uVar7 <
        *(int *)(*(longlong *)
                  ((this->PerSkeletonData).AllocatorInstance.Data + (ulonglong)uVar4 * 8) + 0x40)) {
      if (((this->PerSkeletonData).ArrayNum <= (int)uVar4) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FPerActorData *)(*pcVar2)();
        return pFVar6;
      }
      lVar1 = *(longlong *)((this->PerSkeletonData).AllocatorInstance.Data + (ulonglong)uVar4 * 8);
      if ((*(int *)(lVar1 + 0x40) <= (int)uVar7) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FPerActorData *)(*pcVar2)();
        return pFVar6;
      }
      pFVar6 = (FPerActorData *)(*(longlong *)(lVar1 + 0x38) + (ulonglong)uVar7 * 0x48);
    }
  }
  return pFVar6;
}

// GetActorIndexFromHandle @ 14e2af350

uint __thiscall
UAnimationSharingManager::GetActorIndexFromHandle(UAnimationSharingManager *this,uint param_1)

{
  return param_1 & 0xffffff;
}

// GetAnimationSharingManager @ 14e2af7a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAnimationSharingManager * __cdecl
UAnimationSharingManager::GetAnimationSharingManager(UObject *param_1)

{
  UWorld *pUVar1;
  TTuple<UWorld_const_*,TObjectPtr<UAnimationSharingManager>_> *pTVar2;
  UAnimationSharingManager *pUVar3;
  
  pUVar1 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (pUVar1 == (UWorld *)0x0) {
    return (UAnimationSharingManager *)0x0;
  }
  pTVar2 = TSet<TTuple<UWorld_const_*,TObjectPtr<UAnimationSharingManager>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TObjectPtr<UAnimationSharingManager>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UWorld_const_*,TObjectPtr<UAnimationSharingManager>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TObjectPtr<UAnimationSharingManager>,0>,FDefaultSetAllocator>
                   *)&FAnimSharingModule::WorldAnimSharingManagers,pUVar1);
  if (pTVar2 == (TTuple<UWorld_const_*,TObjectPtr<UAnimationSharingManager>_> *)0x0) {
    pUVar3 = (UAnimationSharingManager *)0x0;
  }
  else {
    pUVar3 = *(UAnimationSharingManager **)&pTVar2->field_0x8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UAnimationSharingManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
      return pUVar3;
    }
  }
  return pUVar3;
}

// GetManagerForWorld @ 14e2b0220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAnimationSharingManager * __cdecl UAnimationSharingManager::GetManagerForWorld(UWorld *param_1)

{
  UAnimationSharingManager *pUVar1;
  TTuple<UWorld_const_*,TObjectPtr<UAnimationSharingManager>_> *pTVar2;
  
  pTVar2 = TSet<TTuple<UWorld_const_*,TObjectPtr<UAnimationSharingManager>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TObjectPtr<UAnimationSharingManager>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UWorld_const_*,TObjectPtr<UAnimationSharingManager>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TObjectPtr<UAnimationSharingManager>,0>,FDefaultSetAllocator>
                   *)&FAnimSharingModule::WorldAnimSharingManagers,param_1);
  if (pTVar2 != (TTuple<UWorld_const_*,TObjectPtr<UAnimationSharingManager>_> *)0x0) {
    pUVar1 = *(UAnimationSharingManager **)&pTVar2->field_0x8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UAnimationSharingManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return pUVar1;
  }
  return (UAnimationSharingManager *)0x0;
}

// GetPrivateStaticClass @ 14e2b0570

UClass * __cdecl UAnimationSharingManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationSharingManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationSharing",L"AnimationSharingManager",
               &Z_Registration_Info_UClass_UAnimationSharingManager.InnerSingleton,
               StaticRegisterNativesUAnimationSharingManager,0xf0,8,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimationSharingManager>,
               InternalVTableHelperCtorCaller<UAnimationSharingManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationSharingManager.InnerSingleton;
}

// GetScalabilitySettings @ 14e2b0780

FAnimationSharingScalability * __thiscall
UAnimationSharingManager::GetScalabilitySettings
          (UAnimationSharingManager *this,UAnimationSharingSetup *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FAnimationSharingScalability *pFVar5;
  FScriptContainerElement *pFVar6;
  
  iVar2 = (this->PerSkeletonData).ArrayNum;
  if (param_1 == (UAnimationSharingSetup *)0x0) {
    if (iVar2 != 0) {
      if ((iVar2 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FAnimationSharingScalability *)(*pcVar3)();
        return pFVar5;
      }
      return (FAnimationSharingScalability *)
             (*(longlong *)(this->PerSkeletonData).AllocatorInstance.Data + 0x100);
    }
  }
  else {
    pFVar6 = (this->PerSkeletonData).AllocatorInstance.Data;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 8) {
      if ((*(longlong *)pFVar6 != 0) &&
         (bVar4 = TWeakObjectPtr<UAnimationSharingSetup_const_,FWeakObjectPtr>::
                  UEOpEquals<UAnimationSharingSetup,bool>
                            ((TWeakObjectPtr<UAnimationSharingSetup_const_,FWeakObjectPtr> *)
                             (*(longlong *)pFVar6 + 0x94),param_1), bVar4)) {
        if (*(longlong *)pFVar6 == 0) {
          return &this->ScalabilitySettings;
        }
        return (FAnimationSharingScalability *)(*(longlong *)pFVar6 + 0x100);
      }
    }
  }
  return &this->ScalabilitySettings;
}

// GetSkeletonIndexFromHandle @ 14e2b0860

uchar __thiscall
UAnimationSharingManager::GetSkeletonIndexFromHandle(UAnimationSharingManager *this,uint param_1)

{
  uchar *puVar1;
  
  puVar1 = TMapBase<unsigned_char,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,unsigned_char,0>_>
           ::Find((TMapBase<unsigned_char,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,unsigned_char,0>_>
                   *)&this->SkeletonIDToSkeletonIndexMap,(uchar)(param_1 >> 0x18));
  if (puVar1 != (uchar *)0x0) {
    return *puVar1;
  }
  return 0xff;
}

// GetTickFunction @ 14e2b0890

FTickAnimationSharingFunction * __thiscall
UAnimationSharingManager::GetTickFunction(UAnimationSharingManager *this)

{
  return &this->TickFunction;
}

// GetWorld @ 14e2b08d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UAnimationSharingManager::GetWorld(UAnimationSharingManager *this)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UWorld *)this->_padding_;
  if (pUVar2 != (UWorld *)0x0) {
    pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UWorld *)0x0;
}

// Initialise @ 14e2b0a70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UAnimationSharingManager::Initialise(UAnimationSharingManager *this,UAnimationSharingSetup *param_1)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  (this->TickFunction).Manager = this;
  lVar1 = (**(code **)(lVar1 + 0x180))();
  FTickFunction::RegisterTickFunction
            ((FTickFunction *)&this->TickFunction,*(ULevel **)(lVar1 + 0x30));
  if (param_1 != (UAnimationSharingSetup *)0x0) {
    AddSetup(this,param_1);
  }
  return;
}

// LogData @ 14e2b1640

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAnimationSharingManager::LogData(UAnimationSharingManager *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UObject *pUVar7;
  uint uVar8;
  ulonglong uVar9;
  int *piVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 local_res10 [8];
  uint local_res18;
  longlong local_res20;
  FString local_c8;
  FString local_b8;
  longlong local_a8;
  int *local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FName local_68;
  longlong local_60;
  FName local_58;
  FName local_50 [2];
  
  piVar1 = &(this->PerSkeletonData).ArrayNum;
  local_a0 = piVar1;
  if (4 < (byte)LogAnimationSharing._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
  }
  local_res18 = 0;
  if (0 < *piVar1) {
    local_res20 = 0;
    do {
      lVar11 = local_res20;
      uVar6 = local_res18;
      uVar9 = 0;
      uVar15 = 0;
      if ((int)local_res18 < (this->PerSkeletonData).ArrayNum) {
        uVar15 = ~local_res18 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar14 = *(longlong *)((this->PerSkeletonData).AllocatorInstance.Data + lVar11);
      local_60 = lVar14;
      if (lVar14 != 0) {
        if (4 < (byte)LogAnimationSharing._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
        }
        uVar12 = uVar9;
        if (0 < *(int *)(lVar14 + 0x30)) {
          do {
            uVar15 = (uint)uVar9;
            if (4 < (byte)LogAnimationSharing._0_1_) {
              uVar8 = 0;
              if ((int)uVar15 < *(int *)(lVar14 + 0x30)) {
                uVar8 = ~uVar15 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              lVar3 = *(longlong *)(uVar12 + *(longlong *)(lVar14 + 0x28));
              if (lVar3 == 0) {
                ::FString::FString(&local_98,L"None");
              }
              else {
                local_68 = *(FName *)(lVar3 + 0x18);
                ::FName::ToString(&local_68,&local_98);
              }
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
              if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
            }
            uVar9 = (ulonglong)(uVar15 + 1);
            uVar12 = uVar12 + 8;
          } while ((int)(uVar15 + 1) < *(int *)(lVar14 + 0x30));
        }
        uVar15 = 0;
        if (4 < (byte)LogAnimationSharing._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
        }
        if (0 < *(int *)(lVar14 + 0x40)) {
          local_a8 = 0;
          do {
            lVar11 = local_a8;
            uVar6 = 0;
            if ((int)uVar15 < *(int *)(lVar14 + 0x40)) {
              uVar6 = ~uVar15 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            bVar5 = true;
            lVar11 = *(longlong *)(lVar14 + 0x38) + lVar11;
            local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_c8.Data.ArrayNum = 0;
            local_c8.Data.ArrayMax = 0;
            piVar10 = *(int **)(lVar11 + 0x20);
            iVar2 = *(int *)(lVar11 + 0x28);
            piVar1 = piVar10 + iVar2;
            while( true ) {
              if (*(int *)(lVar11 + 0x28) != iVar2) {
                local_res10[0] = 0;
                `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_res10);
              }
              lVar14 = local_60;
              if (piVar10 == piVar1) break;
              if (bVar5) {
                bVar5 = false;
              }
              else {
                ::FString::AppendChars(&local_c8,L", ",2);
              }
              local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_b8.Data.ArrayNum = 0;
              local_b8.Data.ArrayMax = 0;
              ::FString::AppendInt(&local_b8,*piVar10);
              iVar13 = local_b8.Data.ArrayNum + -1;
              if (local_b8.Data.ArrayNum == 0) {
                iVar13 = 0;
              }
              ::FString::AppendChars
                        (&local_c8,(wchar_t *)local_b8.Data.AllocatorInstance.Data,iVar13);
              if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              }
              piVar10 = piVar10 + 1;
            }
            if (4 < (byte)LogAnimationSharing._0_1_) {
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
            }
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
            uVar15 = uVar15 + 1;
            local_a8 = local_a8 + 0x48;
            lVar11 = local_res20;
            uVar6 = local_res18;
          } while ((int)uVar15 < *(int *)(lVar14 + 0x40));
        }
        uVar9 = 0;
        if (4 < (byte)LogAnimationSharing._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
        }
        uVar12 = uVar9;
        if (0 < *(int *)(lVar14 + 0x50)) {
          do {
            uVar8 = (uint)uVar9;
            uVar15 = 0;
            if ((int)uVar8 < *(int *)(lVar14 + 0x50)) {
              uVar15 = ~uVar8 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)(lVar14 + 0x48) + uVar12));
            if (4 < (byte)LogAnimationSharing._0_1_) {
              if ((pUVar7 == (UObject *)0x0) || (*(longlong *)&pUVar7[4].field_0x8 == 0)) {
                ::FString::FString(&local_78,L"None");
              }
              else {
                local_58 = *(FName *)(*(longlong *)&pUVar7[4].field_0x8 + 0x18);
                ::FName::ToString(&local_58,&local_78);
              }
              if (pUVar7 == (UObject *)0x0) {
                ::FString::FString(&local_88,L"None");
              }
              else {
                local_50[0].ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
                local_50[0].Number = *(uint *)&pUVar7->field_0x1c;
                ::FName::ToString(local_50,&local_88);
              }
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
              if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78.Data.AllocatorInstance.Data);
              }
            }
            uVar9 = (ulonglong)(uVar8 + 1);
            uVar12 = uVar12 + 0xc;
            lVar11 = local_res20;
          } while ((int)(uVar8 + 1) < *(int *)(lVar14 + 0x50));
        }
      }
      local_res18 = uVar6 + 1;
      local_res20 = lVar11 + 8;
    } while ((int)local_res18 < *local_a0);
  }
  return;
}

// RegisterActor @ 14e2b1f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UAnimationSharingManager::RegisterActor
          (UAnimationSharingManager *this,AActor *param_1,
          TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  USkeleton *pUVar5;
  UClass *pUVar6;
  USkeleton *pUVar7;
  USkeletalMesh *pUVar8;
  USkeleton *pUVar9;
  undefined8 *puVar10;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  USkeleton *local_80;
  USkeleton *local_78;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> local_70;
  undefined8 local_58;
  undefined8 *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if ((GAnimationSharingEnabled != 1) || (param_1 == (AActor *)0x0)) goto LAB_14e2b21ae;
  local_50 = (undefined8 *)0x0;
  local_44 = 1;
  local_48 = 0;
  pUVar5 = (USkeleton *)Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 != (USkeleton *)0x0) goto LAB_14e2b1fd9;
LAB_14e2b200a:
    pUVar9 = (USkeleton *)0x0;
  }
  else {
    if (pUVar5 == (USkeleton *)0x0) goto LAB_14e2b200a;
    UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_14e2b1fd9:
    pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar6 == (UClass *)0x0) goto LAB_14e2b200a;
    iVar2 = (int)pUVar6->_padding_;
    if ((*(int *)&(pUVar5->BoneTree).AllocatorInstance.Data < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) != &pUVar6->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pUVar9 = pUVar5;
    if (!bVar4) goto LAB_14e2b200a;
  }
  pUVar7 = (USkeleton *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar9 == pUVar7) {
    local_80 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (USkeleton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    AActor::
    ForEachComponent_Internal<USkeletalMeshComponent,1,0,_AActor::GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_80,
               (TArray<USkeletalMeshComponent_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                *)&local_58);
  }
  else {
    local_78 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (USkeleton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    AActor::
    ForEachComponent_Internal<USkeletalMeshComponent,0,0,_AActor::GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_78,
               (TArray<USkeletalMeshComponent_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                *)&local_58);
  }
  if ((local_48 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwnedComponents.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\AnimationSharing\\Source\\AnimationSharing\\Private\\AnimationSharingManager.cpp"
                         ,0x202,L"No SkeletalMeshComponents found in actor!"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar2 = local_48;
  puVar10 = &local_58;
  if (local_50 != (undefined8 *)0x0) {
    puVar10 = local_50;
  }
  puVar1 = puVar10 + local_48;
  pUVar5 = (USkeleton *)0x0;
  while( true ) {
    if (local_48 != iVar2) {
      local_88[0] = 0;
      `TCheckedPointerIterator<USkeletalMeshComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_88);
    }
    if (puVar10 == puVar1) break;
    pUVar8 = USkeletalMeshComponent::GetSkeletalMeshAsset((USkeletalMeshComponent *)*puVar10);
    pUVar9 = (USkeleton *)(**(code **)(pUVar8->_padding_ + 0x400))(pUVar8);
    if (pUVar5 == (USkeleton *)0x0) {
      puVar10 = puVar10 + 1;
      pUVar5 = pUVar9;
    }
    else {
      if (((pUVar5 != pUVar9) &&
          (bVar4 = USkeleton::IsCompatibleMesh(pUVar5,(USkinnedAsset *)pUVar8,true), !bVar4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\AnimationSharing\\Source\\AnimationSharing\\Private\\AnimationSharingManager.cpp"
                             ,0x214,L"Multiple different skeletons within same actor"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      puVar10 = puVar10 + 1;
    }
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_70._16_4_ = 0;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_70,param_2);
  RegisterActorWithSkeleton(this,param_1,pUVar5,&local_70);
  if (local_50 != (undefined8 *)0x0) {
    FMemory::Free(local_50);
  }
LAB_14e2b21ae:
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return;
}

// RegisterActorWithSkeleton @ 14e2b21e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UAnimationSharingManager::RegisterActorWithSkeleton
          (UAnimationSharingManager *this,AActor *param_1,USkeleton *param_2,
          TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *param_3)

{
  int *piVar1;
  UAnimSharingInstance *this_00;
  UObject *pUVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 *puVar5;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *pTVar6;
  bool bVar7;
  FScriptContainerElement FVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  float fVar23;
  undefined1 auStack_128 [32];
  AActor **local_108;
  FScriptContainerElement *local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  bool local_d8 [4];
  undefined8 local_d4;
  AActor *local_c8;
  uint local_c0;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *local_b8;
  UClass *local_b0;
  UClass *local_a8;
  UObject *local_a0;
  FScriptContainerElement *local_98;
  undefined8 *local_90;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *local_88;
  FReadAccessScope local_80;
  undefined8 local_68;
  undefined8 *local_60;
  uint local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_b8 = param_3;
  if (GAnimationSharingEnabled != 1) goto LAB_14e2b28d6;
  pFVar20 = (this->Skeletons).AllocatorInstance.Data;
  for (pFVar19 = pFVar20; pFVar19 != pFVar20 + (longlong)(this->Skeletons).ArrayNum * 8;
      pFVar19 = pFVar19 + 8) {
    if (*(USkeleton **)pFVar19 == param_2) {
      uVar9 = (uint)((longlong)pFVar19 - (longlong)pFVar20 >> 3);
      goto LAB_14e2b224b;
    }
  }
  uVar9 = 0xffffffff;
LAB_14e2b224b:
  if (uVar9 == 0xffffffff) goto LAB_14e2b28d6;
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  local_54 = 1;
  pUVar12 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar12 != (UClass *)0x0) goto LAB_14e2b22ac;
LAB_14e2b22dd:
    pUVar13 = (UClass *)0x0;
  }
  else {
    if (pUVar12 == (UClass *)0x0) goto LAB_14e2b22dd;
    UE::GC::MarkAsReachable((UObject *)pUVar12);
LAB_14e2b22ac:
    pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar13 == (UClass *)0x0) goto LAB_14e2b22dd;
    iVar10 = (int)pUVar13->_padding_;
    if (((int)pUVar12->_padding_ < iVar10) ||
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar10 * 8) !=
        &pUVar13->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    pUVar13 = pUVar12;
    if (!bVar7) goto LAB_14e2b22dd;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == pUVar14) {
    local_b0 = pUVar12;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    AActor::
    ForEachComponent_Internal<USkeletalMeshComponent,1,0,_AActor::GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_b0,
               (TArray<USkeletalMeshComponent_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                *)&local_68);
  }
  else {
    local_a8 = pUVar12;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    AActor::
    ForEachComponent_Internal<USkeletalMeshComponent,0,0,_AActor::GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_a8,
               (TArray<USkeletalMeshComponent_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                *)&local_68);
  }
  if ((local_58 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwnedComponents.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\AnimationSharing\\Source\\AnimationSharing\\Private\\AnimationSharingManager.cpp"
                         ,0x234,L"No SkeletalMeshComponents found in actor!"), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar10 = (this->PerSkeletonData).ArrayNum;
  uVar16 = 0;
  if ((int)uVar9 < iVar10) {
    uVar16 = ~uVar9 >> 0x1f;
  }
  if (uVar16 == 0) {
    local_108 = (AActor **)(longlong)(int)uVar9;
    local_100 = (FScriptContainerElement *)(longlong)iVar10;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_00 = *(UAnimSharingInstance **)
             ((this->PerSkeletonData).AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
  if (this_00->AnimSharingManager != (UAnimationSharingManager *)0x0) {
    local_c8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar20 = (this_00->RegisteredActors).AllocatorInstance.Data;
    if ((pFVar20 <= (FScriptContainerElement *)&local_c8) &&
       (lVar17 = (longlong)(this_00->RegisteredActors).ArrayMax,
       (FScriptContainerElement *)&local_c8 < pFVar20 + lVar17 * 8)) {
      local_f0 = (longlong)(this_00->RegisteredActors).ArrayNum;
      local_e8 = 8;
      local_108 = &local_c8;
      local_100 = pFVar20;
      local_f8 = lVar17;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar9 = (this_00->RegisteredActors).ArrayNum;
    piVar1 = &(this_00->RegisteredActors).ArrayMax;
    if (uVar9 == *piVar1) {
      uVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this_00->RegisteredActors).AllocatorInstance,piVar1);
    }
    pFVar20 = (this_00->RegisteredActors).AllocatorInstance.Data;
    (this_00->RegisteredActors).ArrayNum = uVar9 + 1;
    *(AActor **)(pFVar20 + (longlong)(int)uVar9 * 8) = local_c8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_c8);
    }
    iVar10 = (this_00->PerActorData).ArrayNum;
    piVar1 = &(this_00->PerActorData).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x848,&(this_00->PerActorData).AllocatorInstance,piVar1);
    }
    pFVar20 = (this_00->PerActorData).AllocatorInstance.Data;
    (this_00->PerActorData).ArrayNum = iVar10 + 1;
    lVar17 = (longlong)iVar10;
    *(undefined8 *)(pFVar20 + lVar17 * 0x48) = 0;
    *(undefined8 *)(pFVar20 + lVar17 * 0x48 + 8) = 0;
    *(undefined8 *)(pFVar20 + lVar17 * 0x48 + 0x1c) = 0;
    *(undefined8 *)(pFVar20 + lVar17 * 0x48 + 0x24) = 0;
    *(undefined8 *)(pFVar20 + lVar17 * 0x48 + 0x2c) = 0;
    *(undefined8 *)(pFVar20 + lVar17 * 0x48 + 0x34) = 0;
    *(undefined8 *)(pFVar20 + lVar17 * 0x48 + 0x3c) = 0;
    *(undefined4 *)(pFVar20 + lVar17 * 0x48 + 0x44) = 0;
    *(undefined8 *)(pFVar20 + lVar17 * 0x48 + 0x14) = 0xffffffffffffffff;
    *(undefined4 *)(pFVar20 + lVar17 * 0x48 + 0x10) = 0xffffffff;
    local_98 = pFVar20;
    fVar23 = USignificanceManager::GetSignificance(this_00->SignificanceManager,(UObject *)param_1);
    local_88 = (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               (pFVar20 + (lVar17 * 9 + 6) * 8);
    *(float *)(pFVar20 + lVar17 * 0x48 + 8) = fVar23;
    TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (local_88,local_b8);
    local_d8[0] = true;
    FVar8 = (FScriptContainerElement)
            UAnimSharingInstance::DetermineStateForActor(this_00,uVar9,local_d8);
    pFVar20[lVar17 * 0x48 + 1] = FVar8;
    pFVar20[lVar17 * 0x48] = FVar8;
    uVar18 = (ulonglong)(int)local_58;
    local_c0 = local_58;
    puVar22 = &local_68;
    if (local_60 != (undefined8 *)0x0) {
      puVar22 = local_60;
    }
    local_90 = puVar22 + uVar18;
    uVar21 = uVar18;
    while( true ) {
      puVar5 = local_90;
      if ((int)uVar18 != (int)uVar21) {
        local_d8[1] = false;
        `TCheckedPointerIterator<USkeletalMeshComponent_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d8 + 1);
      }
      if (puVar22 == puVar5) break;
      iVar10 = (this_00->PerComponentData).ArrayNum;
      piVar1 = &(this_00->PerComponentData).ArrayMax;
      pUVar2 = (UObject *)*puVar22;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&(this_00->PerComponentData).AllocatorInstance,piVar1);
      }
      lVar15 = (longlong)iVar10;
      (this_00->PerComponentData).ArrayNum = iVar10 + 1;
      pFVar20 = (this_00->PerComponentData).AllocatorInstance.Data;
      *(undefined8 *)(pFVar20 + lVar15 * 0xc) = 0;
      *(uint *)(pFVar20 + lVar15 * 0xc + 8) = uVar9;
      local_a0 = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(pFVar20 + lVar15 * 0xc),(FObjectPtr)&local_a0);
      (**(code **)(*(longlong *)pUVar2 + 0x420))(pUVar2,0);
      pFVar20 = local_98;
      pUVar2[1].field_0x1a = pUVar2[1].field_0x1a & 0xfd;
      pUVar2[0x33].field_0x11 = pUVar2[0x33].field_0x11 | 0x40;
      local_d4._0_4_ = (this_00->PerComponentData).ArrayNum + -1;
      pFVar19 = *(FScriptContainerElement **)(local_98 + lVar17 * 0x48 + 0x20);
      if ((pFVar19 <= (FScriptContainerElement *)&local_d4) &&
         ((FScriptContainerElement *)&local_d4 <
          pFVar19 + (longlong)*(int *)(local_98 + lVar17 * 0x48 + 0x2c) * 4)) {
        local_f0 = (longlong)*(int *)(local_98 + lVar17 * 0x48 + 0x28);
        local_e8 = 4;
        local_108 = (AActor **)&local_d4;
        local_100 = pFVar19;
        local_f8 = (longlong)*(int *)(local_98 + lVar17 * 0x48 + 0x2c);
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar10 = *(int *)(pFVar20 + lVar17 * 0x48 + 0x28);
      if (iVar10 == *(int *)(pFVar20 + lVar17 * 0x48 + 0x2c)) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)(pFVar20 + lVar17 * 0x48 + 0x20),
                            (int *)(pFVar20 + lVar17 * 0x48 + 0x2c));
      }
      uVar21 = (ulonglong)local_c0;
      *(int *)(pFVar20 + lVar17 * 0x48 + 0x28) = iVar10 + 1;
      puVar22 = puVar22 + 1;
      *(int *)(*(longlong *)(pFVar20 + lVar17 * 0x48 + 0x20) + (longlong)iVar10 * 4) = (int)local_d4
      ;
      uVar18 = (ulonglong)local_58;
    }
    UAnimSharingInstance::SetupFollowerComponent(this_00,(uchar)pFVar20[lVar17 * 0x48],uVar9);
    iVar10 = (this_00->PerStateData).ArrayNum;
    FVar8 = pFVar20[lVar17 * 0x48];
    if ((iVar10 <= (int)(uint)(byte)FVar8) &&
       (local_108 = (AActor **)(ulonglong)(byte)FVar8,
       local_100 = (FScriptContainerElement *)(longlong)iVar10,
       bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((this_00->PerStateData).AllocatorInstance.Data[(longlong)(ulonglong)(byte)FVar8 * 0xc0] !=
        (FScriptContainerElement)0x0) {
      uVar16 = *(uint *)(pFVar20 + lVar17 * 0x48 + 0x14);
      if (uVar16 != 0xffffffff) {
        iVar10 = (this_00->OnDemandInstances).ArrayNum;
        uVar11 = 0;
        if ((int)uVar16 < iVar10) {
          uVar11 = ~uVar16 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (local_108 = (AActor **)(longlong)(int)uVar16,
           local_100 = (FScriptContainerElement *)(longlong)iVar10,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (this_00->OnDemandInstances).AllocatorInstance.Data[(longlong)(int)uVar16 * 0x30] =
             (FScriptContainerElement)0x1;
        uVar16 = *(uint *)(pFVar20 + lVar17 * 0x48 + 0x14);
        iVar10 = (this_00->OnDemandInstances).ArrayNum;
        fVar23 = this_00->WorldTime;
        uVar11 = 0;
        if ((int)uVar16 < iVar10) {
          uVar11 = ~uVar16 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (local_108 = (AActor **)(longlong)(int)uVar16,
           local_100 = (FScriptContainerElement *)(longlong)iVar10,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(float *)((this_00->OnDemandInstances).AllocatorInstance.Data +
                  (longlong)(int)uVar16 * 0x30 + 8) = fVar23;
      }
    }
    uVar16 = this_00->SkeletonID;
    if ((uVar16 != (uVar16 & 0xff)) &&
       (local_108 = (AActor **)(ulonglong)uVar16,
       bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("IntFitsIn<OutType>(In)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                          ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar7))
    {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (0xffffff < uVar9) {
      `UAnimationSharingManager::CreateActorHandle'::__l2::<lambda_1>::operator()
                ((void *)((longlong)&local_d4 + 4));
    }
    pTVar6 = local_88;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,&local_80);
    if ((*(int *)&pTVar6->field_0x10 != 0) &&
       (plVar3 = *(longlong **)&pTVar6->field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))(plVar3,uVar16 << 0x18 | uVar9);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_80);
    param_3 = local_b8;
  }
  if (local_60 != (undefined8 *)0x0) {
    FMemory::Free(local_60);
  }
LAB_14e2b28d6:
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  return;
}

// RegisterActorWithSkeletonBP @ 14e2b2900

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
UAnimationSharingManager::RegisterActorWithSkeletonBP
          (UAnimationSharingManager *this,AActor *param_1,USkeleton *param_2)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UAnimationSharingManager::RegisterActorWithSkeletonBP'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  RegisterActorWithSkeleton
            (this,param_1,param_2,
             (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)local_48);
  return;
}

// RemoveSetup @ 14e2b3e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAnimationSharingManager::RemoveSetup
          (UAnimationSharingManager *this,UAnimationSharingSetup *param_1)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  FScriptContainerElement *this_00;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FWeakObjectPtr local_b4;
  undefined1 local_ac [12];
  FName local_a0;
  longlong local_98;
  UAnimationSharingSetup *local_90;
  FName local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  undefined1 *local_50;
  undefined1 *local_48;
  
  bVar5 = false;
  if (param_1 == (UAnimationSharingSetup *)0x0) {
    if ((byte)LogAnimationSharing._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
    return;
  }
  pFVar7 = (this->AnimationSharingSetups).AllocatorInstance.Data;
  iVar8 = (this->AnimationSharingSetups).ArrayNum;
  this_00 = pFVar7;
joined_r0x00014e2b3e91:
  if (this_00 == pFVar7 + (longlong)iVar8 * 8) {
LAB_14e2b3eab:
    if ((byte)LogAnimationSharing._0_1_ < 2) {
      return;
    }
    local_88 = (FName)param_1->_padding_;
    ::FName::ToString(&local_88,&local_60);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
    if (local_60.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
    return;
  }
  bVar4 = TWeakObjectPtr<UAnimationSharingSetup_const_,FWeakObjectPtr>::
          UEOpEquals<UAnimationSharingSetup,bool>
                    ((TWeakObjectPtr<UAnimationSharingSetup_const_,FWeakObjectPtr> *)this_00,param_1
                    );
  if (!bVar4) {
    this_00 = this_00 + 8;
    goto joined_r0x00014e2b3e91;
  }
  if ((int)((longlong)this_00 - (longlong)pFVar7 >> 3) == -1) goto LAB_14e2b3eab;
  uVar9 = 0;
  if (0 < (this->PerSkeletonData).ArrayNum) {
    lVar14 = 0;
    do {
      uVar12 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < (this->PerSkeletonData).ArrayNum) {
        uVar6 = uVar12;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar4 = TWeakObjectPtr<UAnimationSharingSetup_const_,FWeakObjectPtr>::
              UEOpEquals<UAnimationSharingSetup,bool>
                        ((TWeakObjectPtr<UAnimationSharingSetup_const_,FWeakObjectPtr> *)
                         (*(longlong *)((this->PerSkeletonData).AllocatorInstance.Data + lVar14) +
                         0x94),param_1);
      if (bVar4) {
        uVar6 = 0;
        if ((int)uVar9 < (this->PerSkeletonData).ArrayNum) {
          uVar6 = uVar12;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((0 < *(int *)(*(longlong *)((this->PerSkeletonData).AllocatorInstance.Data + lVar14) +
                         0x30)) && (1 < (byte)LogAnimationSharing._0_1_)) {
          local_ac._4_8_ = param_1->_padding_;
          ::FName::ToString((FName *)(local_ac + 4),&local_70);
          uVar6 = 0;
          if ((int)uVar9 < (this->Skeletons).ArrayNum) {
            uVar6 = uVar12;
          }
          if ((uVar6 == 0) &&
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
          if (*(longlong *)((this->Skeletons).AllocatorInstance.Data + lVar14) != 0) {
            uVar6 = 0;
            if ((int)uVar9 < (this->Skeletons).ArrayNum) {
              uVar6 = uVar12;
            }
            if ((uVar6 == 0) &&
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
            bVar5 = true;
            local_a0 = *(FName *)(*(longlong *)((this->Skeletons).AllocatorInstance.Data + lVar14) +
                                 0x18);
            ::FName::ToString(&local_a0,&local_80);
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
          if ((bVar5) &&
             (bVar5 = false, local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
        }
        uVar6 = 0;
        if ((int)uVar9 < (this->PerSkeletonData).ArrayNum) {
          uVar6 = uVar12;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UAnimSharingInstance::UnregisterAllActors
                  (*(UAnimSharingInstance **)
                    ((this->PerSkeletonData).AllocatorInstance.Data + lVar14));
        uVar6 = 0;
        if ((int)uVar9 < (this->PerSkeletonData).ArrayNum) {
          uVar6 = uVar12;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_98 = (longlong)(int)uVar9 * 8;
        pFVar7 = (this->PerSkeletonData).AllocatorInstance.Data + local_98;
        iVar8 = (this->PerSkeletonData).ArrayNum + ~uVar9;
        if (iVar8 != 0) {
          memmove(pFVar7,pFVar7 + 8,(longlong)iVar8 << 3);
        }
        piVar1 = &(this->PerSkeletonData).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->PerSkeletonData).AllocatorInstance,(this->PerSkeletonData).ArrayNum,
                   &(this->PerSkeletonData).ArrayMax);
        uVar6 = 0;
        if ((int)uVar9 < (this->Skeletons).ArrayNum) {
          uVar6 = uVar12;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar7 = (this->Skeletons).AllocatorInstance.Data + local_98;
        iVar8 = (this->Skeletons).ArrayNum + ~uVar9;
        if (iVar8 != 0) {
          memmove(pFVar7,pFVar7 + 8,(longlong)iVar8 << 3);
        }
        piVar1 = &(this->Skeletons).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Skeletons).AllocatorInstance,(this->Skeletons).ArrayNum,
                   &(this->Skeletons).ArrayMax);
        uVar9 = uVar9 - 1;
        lVar14 = lVar14 + -8;
      }
      uVar9 = uVar9 + 1;
      lVar14 = lVar14 + 8;
    } while ((int)uVar9 < (this->PerSkeletonData).ArrayNum);
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_b4.ObjectIndex = 0;
  local_b4.ObjectSerialNumber = 0;
  local_90 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_b4,(FObjectPtr)&local_90);
  pFVar2 = (FWeakObjectPtr *)(this->AnimationSharingSetups).AllocatorInstance.Data;
  if (((pFVar2 <= &local_b4) && (&local_b4 < pFVar2 + (this->AnimationSharingSetups).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar8 = (this->AnimationSharingSetups).ArrayNum;
  if (iVar8 != 0) {
    pFVar7 = (this->AnimationSharingSetups).AllocatorInstance.Data;
    iVar13 = 0;
    iVar10 = 0;
    bVar5 = TWeakObjectPtr<UAnimationSharingSetup_const_,FWeakObjectPtr>::
            UEOpEquals<UAnimationSharingSetup_const_,bool>
                      ((TWeakObjectPtr<UAnimationSharingSetup_const_,FWeakObjectPtr> *)pFVar7,
                       (TWeakObjectPtr<UAnimationSharingSetup_const_,FWeakObjectPtr> *)&local_b4);
    bVar5 = !bVar5;
    iVar11 = iVar10;
joined_r0x00014e2b43e9:
    do {
      iVar10 = iVar10 + 1;
      if (iVar10 < iVar8) {
        bVar4 = TWeakObjectPtr<UAnimationSharingSetup_const_,FWeakObjectPtr>::
                UEOpEquals<UAnimationSharingSetup_const_,bool>
                          ((TWeakObjectPtr<UAnimationSharingSetup_const_,FWeakObjectPtr> *)
                           (pFVar7 + (longlong)iVar10 * 8),
                           (TWeakObjectPtr<UAnimationSharingSetup_const_,FWeakObjectPtr> *)&local_b4
                          );
        if (bVar5 == !bVar4) goto joined_r0x00014e2b43e9;
      }
      if (bVar5 != false) {
        if (iVar13 != iVar11) {
          memmove(pFVar7 + (longlong)iVar13 * 8,pFVar7 + (longlong)iVar11 * 8,
                  (longlong)(iVar10 - iVar11) << 3);
        }
        iVar13 = iVar13 + (iVar10 - iVar11);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar11 = iVar10;
    } while (iVar10 < iVar8);
    (this->AnimationSharingSetups).ArrayNum = iVar13;
  }
  TSet<TTuple<unsigned_char,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_char,unsigned_char,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<unsigned_char,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_char,unsigned_char,0>,FDefaultSetAllocator>
           *)&this->SkeletonIDToSkeletonIndexMap,(this->PerSkeletonData).ArrayNum);
  uVar9 = 0;
  if ((this->PerSkeletonData).ArrayNum < 1) {
    return;
  }
  while( true ) {
    local_res20[0] = (undefined1)uVar9;
    uVar6 = 0;
    if ((int)uVar9 < (this->PerSkeletonData).ArrayNum) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    local_res18[0] =
         *(undefined1 *)
          (*(longlong *)((this->PerSkeletonData).AllocatorInstance.Data + (longlong)(int)uVar9 * 8)
          + 0x9c);
    local_50 = local_res18;
    local_48 = local_res20;
    TSet<TTuple<unsigned_char,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_char,unsigned_char,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_char_&&,unsigned_char_&&>_>
              ((TSet<TTuple<unsigned_char,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_char,unsigned_char,0>,FDefaultSetAllocator>
                *)&this->SkeletonIDToSkeletonIndexMap,
               (TPairInitializer<unsigned_char_&&,unsigned_char_&&> *)local_ac,(bool *)&local_50);
    uVar9 = uVar9 + 1;
    if ((this->PerSkeletonData).ArrayNum <= (int)uVar9) {
      return;
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// SetDebugMaterial @ 14e2b4c90

void __cdecl
UAnimationSharingManager::SetDebugMaterial(USkeletalMeshComponent *param_1,uchar param_2)

{
  return;
}

// SetDebugMaterialForActor @ 14e2b4ca0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UAnimationSharingManager::SetDebugMaterialForActor
          (UAnimSharingInstance *param_1,uint param_2,uchar param_3)

{
  return;
}

// SetLeaderComponentsVisibility @ 14e2b4fd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAnimationSharingManager::SetLeaderComponentsVisibility(UAnimationSharingManager *this,bool param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  undefined8 *puVar7;
  FScriptContainerElement *pFVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 local_res18 [8];
  uint local_res20;
  
  pFVar8 = (this->PerSkeletonData).AllocatorInstance.Data;
  uVar2 = (this->PerSkeletonData).ArrayNum;
  uVar5 = (ulonglong)(int)uVar2;
  pFVar6 = pFVar8 + uVar5 * 8;
  while( true ) {
    if ((this->PerSkeletonData).ArrayNum != (int)uVar5) {
      `TCheckedPointerIterator<TObjectPtr<UAnimSharingInstance>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar8 == pFVar6) break;
    lVar4 = *(longlong *)pFVar8;
    local_res20 = *(uint *)(lVar4 + 0x60);
    uVar5 = (ulonglong)(int)local_res20;
    lVar11 = *(longlong *)(lVar4 + 0x58);
    piVar9 = (int *)(lVar11 + 0x28);
    lVar10 = uVar5 * 0xc0 + lVar11;
    while( true ) {
      if (*(int *)(lVar4 + 0x60) != (int)uVar5) {
        `TCheckedPointerIterator<FPerStateData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (lVar11 == lVar10) break;
      puVar7 = *(undefined8 **)(piVar9 + -2);
      iVar3 = *piVar9;
      puVar1 = puVar7 + iVar3;
      while( true ) {
        if (*piVar9 != iVar3) {
          `TCheckedPointerIterator<USkeletalMeshComponent_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (puVar7 == puVar1) break;
        USceneComponent::SetVisibility((USceneComponent *)*puVar7,param_1,DirtyOnly);
        puVar7 = puVar7 + 1;
      }
      uVar5 = (ulonglong)local_res20;
      lVar11 = lVar11 + 0xc0;
      piVar9 = piVar9 + 0x30;
    }
    puVar7 = *(undefined8 **)(lVar4 + 0x68);
    iVar3 = *(int *)(lVar4 + 0x70);
    puVar1 = puVar7 + iVar3;
    while( true ) {
      if (*(int *)(lVar4 + 0x70) != iVar3) {
        `TCheckedPointerIterator<FTransitionBlendInstance_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (puVar7 == puVar1) break;
      if (*(USceneComponent **)*puVar7 != (USceneComponent *)0x0) {
        USceneComponent::SetVisibility(*(USceneComponent **)*puVar7,param_1,DirtyOnly);
      }
      puVar7 = puVar7 + 1;
    }
    puVar7 = *(undefined8 **)(lVar4 + 0x78);
    iVar3 = *(int *)(lVar4 + 0x80);
    puVar1 = puVar7 + iVar3;
    while( true ) {
      if (*(int *)(lVar4 + 0x80) != iVar3) {
        `TCheckedPointerIterator<FTransitionBlendInstance_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (puVar7 == puVar1) break;
      if (*(USceneComponent **)*puVar7 != (USceneComponent *)0x0) {
        USceneComponent::SetVisibility(*(USceneComponent **)*puVar7,param_1,DirtyOnly);
      }
      puVar7 = puVar7 + 1;
    }
    pFVar8 = pFVar8 + 8;
    uVar5 = (ulonglong)uVar2;
  }
  return;
}

// SetupPerSkeletonData @ 14e2b7570

void __thiscall
UAnimationSharingManager::SetupPerSkeletonData
          (UAnimationSharingManager *this,FPerSkeletonAnimationSharingSetup *param_1)

{
  FAnimationSharingScalability local_18;
  
  local_18.UseBlendTransitions.Default = true;
  local_18.BlendSignificanceValue.Default = 0.0;
  local_18.MaximumNumberConcurrentBlends.Default = 1;
  local_18.TickSignificanceValue.Default = 0.0;
  SetupPerSkeletonData(this,param_1,(UAnimationSharingSetup *)0x0,&local_18);
  return;
}

// SetupPerSkeletonData @ 14e2b75b0

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
UAnimationSharingManager::SetupPerSkeletonData
          (UAnimationSharingManager *this,FPerSkeletonAnimationSharingSetup *param_1,
          UAnimationSharingSetup *param_2,FAnimationSharingScalability *param_3)

{
  TArray<TObjectPtr<USkeleton_const_>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  TObjectPtr<USkeleton>_u_0 TVar4;
  FScriptContainerElement *pFVar5;
  TObjectPtr<USkeleton>_u_0 *pTVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  UAnimSharingInstance *this_00;
  FScriptContainerElement *pFVar13;
  UClass *pUVar14;
  UClass *pUVar15;
  undefined1 local_118;
  undefined1 local_117 [7];
  UAnimSharingInstance *local_110;
  TObjectPtr<USkeleton>_u_0 local_108;
  undefined1 local_100 [12];
  FName local_f4;
  UAnimationSharingSetup *local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  undefined1 *local_48;
  undefined1 *local_40;
  
  pUVar14 = (UClass *)0x0;
  local_100._0_4_ = 0;
  TVar4 = (TObjectPtr<USkeleton>_u_0)(param_1->Skeleton).field0_0x0.DebugPtr;
  if ((uint)(this->PerSkeletonData).ArrayNum < 0xff) {
    pUVar12 = (param_1->StateProcessorClass).Class.field0_0x0.DebugPtr;
    pUVar11 = pUVar14;
    pUVar15 = pUVar14;
    if ((pUVar12 != (UClass *)0x0) &&
       (pUVar10 = UAnimationSharingStateProcessor::StaticClass(), pUVar10 != (UClass *)0x0)) {
      iVar9 = (int)pUVar10->_padding_;
      if (((int)pUVar12->_padding_ < iVar9) ||
         ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar9 * 8) !=
          &pUVar10->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if ((bVar8) &&
         (pUVar12 = (param_1->StateProcessorClass).Class.field0_0x0.DebugPtr,
         pUVar12 != (UClass *)0x0)) {
        pUVar11 = UAnimationSharingStateProcessor::StaticClass();
        if (pUVar11 != (UClass *)0x0) {
          iVar9 = (int)pUVar11->_padding_;
          if (((int)pUVar12->_padding_ < iVar9) ||
             ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar9 * 8) !=
              &pUVar11->_padding_)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) {
            pUVar15 = (param_1->StateProcessorClass).Class.field0_0x0.DebugPtr;
          }
        }
        if ((pUVar15->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar15);
        }
        pUVar15 = (UClass *)(pUVar15->ClassDefaultObject).field0_0x0.DebugPtr;
        pUVar12 = UAnimationSharingStateProcessor::StaticClass();
        iVar9 = (int)pUVar12->_padding_;
        if (((*(int *)(pUVar15->_padding_ + 0x38) < iVar9) ||
            ((longlong *)
             *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar9 * 8) !=
             &pUVar12->_padding_)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ret->IsA(T::StaticClass())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0x1181,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pUVar11 = (UClass *)
                  UAnimationSharingStateProcessor::GetAnimationStateEnum
                            ((UAnimationSharingStateProcessor *)pUVar15);
      }
    }
    if (((TVar4.DebugPtr == (USkeleton *)0x0) || (pUVar11 == (UClass *)0x0)) ||
       (pUVar15 == (UClass *)0x0)) {
      if (1 < (byte)LogAnimationSharing._0_1_) {
        if (pUVar15 != (UClass *)0x0) {
          local_d8 = (FName)pUVar15->_padding_;
          pUVar14 = (UClass *)0x8;
          ::FName::ToString(&local_d8,&local_68);
        }
        if (pUVar11 != (UClass *)0x0) {
          local_d0 = (FName)pUVar11->_padding_;
          pUVar14 = (UClass *)(ulonglong)((uint)pUVar14 | 0x10);
          ::FName::ToString(&local_d0,&local_78);
        }
        if (TVar4.DebugPtr != (USkeleton *)0x0) {
          local_c8 = (FName)(TVar4.DebugPtr)->_padding_;
          pUVar14 = (UClass *)(ulonglong)((uint)pUVar14 | 0x20);
          ::FName::ToString(&local_c8,&local_88);
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
        if ((((ulonglong)pUVar14 & 0x20) != 0) &&
           (pUVar14 = (UClass *)(ulonglong)((uint)pUVar14 & 0xffffffdf),
           local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if ((((ulonglong)pUVar14 & 0x10) != 0) &&
           (pUVar14 = (UClass *)(ulonglong)((uint)pUVar14 & 0xffffffef),
           local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (((ulonglong)pUVar14 & 8) != 0) {
LAB_14e2b7a43:
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    else {
      this_00 = (UAnimSharingInstance *)(**(code **)(this->_padding_ + 0x2b0))(this);
      pFVar13 = (this->Skeletons).AllocatorInstance.Data;
      pTVar1 = &this->Skeletons;
      pFVar5 = pFVar13 + (longlong)(this->Skeletons).ArrayNum * 8;
      for (; pFVar13 != pFVar5; pFVar13 = pFVar13 + 8) {
        if ((*(USkeleton **)pFVar13 != (USkeleton *)0x0) &&
           (*(USkeleton **)pFVar13 == TVar4.DebugPtr)) {
          if ((byte)LogAnimationSharing._0_1_ < 2) {
            return;
          }
          if (param_2 != (UAnimationSharingSetup *)0x0) {
            local_100._4_8_ = param_2->_padding_;
            ::FName::ToString((FName *)(local_100 + 4),&local_a8);
          }
          local_f4 = (FName)(TVar4.DebugPtr)->_padding_;
          ::FName::ToString(&local_f4,&local_b8);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          local_68.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
          if (param_2 == (UAnimationSharingSetup *)0x0) {
            return;
          }
          goto LAB_14e2b7a43;
        }
      }
      uVar3 = this->NextSkeletonID;
      this->NextSkeletonID = uVar3 + 1;
      bVar8 = UAnimSharingInstance::Setup(this_00,this,param_1,param_3,uVar3);
      if (bVar8) {
        local_e8 = param_2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_2 != (UAnimationSharingSetup *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_2);
        }
        FWeakObjectPtr::operator=(&(this_00->OwnerSetup).WeakPtr,(FObjectPtr)&local_e8);
        local_118 = (undefined1)uVar3;
        local_117[0] = (undefined1)(this->PerSkeletonData).ArrayNum;
        local_48 = &local_118;
        local_40 = local_117;
        TSet<TTuple<unsigned_char,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_char,unsigned_char,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<unsigned_char_&&,unsigned_char_&&>_>
                  ((TSet<TTuple<unsigned_char,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_char,unsigned_char,0>,FDefaultSetAllocator>
                    *)&this->SkeletonIDToSkeletonIndexMap,
                   (TPairInitializer<unsigned_char_&&,unsigned_char_&&> *)local_100,
                   (bool *)&local_48);
        local_110 = this_00;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UAnimSharingInstance *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        pFVar5 = (this->PerSkeletonData).AllocatorInstance.Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_110) &&
            ((FScriptContainerElement *)&local_110 <
             pFVar5 + (longlong)(this->PerSkeletonData).ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar9 = (this->PerSkeletonData).ArrayNum;
        piVar2 = &(this->PerSkeletonData).ArrayMax;
        if (iVar9 == *piVar2) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->PerSkeletonData).AllocatorInstance,piVar2);
        }
        (this->PerSkeletonData).ArrayNum = iVar9 + 1;
        *(UAnimSharingInstance **)
         ((this->PerSkeletonData).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_110;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_110 != (UAnimSharingInstance *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_110);
        }
        local_108 = TVar4;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
        }
        pTVar6 = (TObjectPtr<USkeleton>_u_0 *)(pTVar1->AllocatorInstance).Data;
        if (((pTVar6 <= &local_108) && (&local_108 < pTVar6 + (this->Skeletons).ArrayMax)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar9 = (this->Skeletons).ArrayNum;
        piVar2 = &(this->Skeletons).ArrayMax;
        if (iVar9 == *piVar2) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->Skeletons).ArrayNum = iVar9 + 1;
        ((TObjectPtr<USkeleton>_u_0 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 8))->
        DebugPtr = (USkeleton *)local_108;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_108.DebugPtr != (USkeleton *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_108.DebugPtr);
        }
      }
      else if (1 < (byte)LogAnimationSharing._0_1_) {
        local_e0 = (FName)(TVar4.DebugPtr)->_padding_;
        ::FName::ToString(&local_e0,&local_98);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      if (0xff < this->NextSkeletonID) {
        if (1 < (byte)LogAnimationSharing._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
        }
        this->NextSkeletonID = 0;
      }
    }
  }
  else if (1 < (byte)LogAnimationSharing._0_1_) {
    if (TVar4.DebugPtr != (USkeleton *)0x0) {
      local_c0 = (FName)(TVar4.DebugPtr)->_padding_;
      pUVar14 = (UClass *)0x40;
      ::FName::ToString(&local_c0,&local_58);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
    if ((pUVar14 != (UClass *)0x0) &&
       (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// StaticRegisterNativesUAnimationSharingManager @ 14e2b9130

void __cdecl UAnimationSharingManager::StaticRegisterNativesUAnimationSharingManager(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UAnimationSharingManager_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 14e2b9460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAnimationSharingManager::Tick(UAnimationSharingManager *this,float param_1)

{
  double dVar1;
  UAnimSharingInstance *this_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_AnimationSharing_Tick> FVar9;
  longlong lVar10;
  FNameEntryId FVar11;
  FName FVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  FColor_u_0 local_res8 [4];
  FName local_res18;
  uint local_res20;
  uint uStackX_24;
  FName local_68;
  FName local_60;
  
  uVar14 = 0;
  FVar9 = StatPtr_STAT_AnimationSharing_Tick;
  if (StatPtr_STAT_AnimationSharing_Tick ==
      (FThreadSafeStaticStat<FStat_STAT_AnimationSharing_Tick>)0x0) {
    pFVar8 = ::FName::FName(&local_68,"STAT_AnimationSharing_Tick");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_AnimationSharing_Tick>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimationSharing_Tick,*pFVar8,
                       L"Tick","STATGROUP_AnimationSharing","STATCAT_Advanced",
                       L"Animation Sharing Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar7 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar11.Value;
        local_res18.Number = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\AnimationSharing\\Source\\AnimationSharing\\Private\\AnimationSharingManager.cpp"
                   ,0x1a4);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = FVar11.Value;
      uStackX_24 = uVar7;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
      goto LAB_14e2b95c3;
    }
  }
  bVar4 = false;
  FVar12 = local_60;
LAB_14e2b95c3:
  lVar10 = (**(code **)(this->_padding_ + 0x180))(this);
  dVar1 = *(double *)(lVar10 + 0x8f8);
  uVar15 = uVar14;
  if (0 < (this->PerSkeletonData).ArrayNum) {
    do {
      uVar13 = (uint)uVar14;
      uVar7 = 0;
      if ((int)uVar13 < (this->PerSkeletonData).ArrayNum) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(UAnimSharingInstance **)((this->PerSkeletonData).AllocatorInstance.Data + uVar15);
      this_00->WorldTime = (float)dVar1;
      UAnimSharingInstance::TickBlendInstances(this_00);
      UAnimSharingInstance::TickOnDemandInstances(this_00);
      UAnimSharingInstance::TickAdditiveInstances(this_00);
      UAnimSharingInstance::TickActorStates(this_00);
      UAnimSharingInstance::KickoffInstances(this_00);
      if (0 < GAnimationSharingDebugging) {
        UAnimSharingInstance::TickDebugInformation(this_00);
      }
      UAnimSharingInstance::TickAnimationStates(this_00);
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar15 = uVar15 + 8;
    } while ((int)(uVar13 + 1) < (this->PerSkeletonData).ArrayNum);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage(FVar12,CycleScopeEnd);
  }
  return;
}

// UnregisterActor @ 14e2bd610

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
UAnimationSharingManager::UnregisterActor(UAnimationSharingManager *this,AActor *param_1)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  longlong *plVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  USkeletalMeshComponent *this_00;
  longlong lVar12;
  ulonglong uVar13;
  uint *puVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  UAnimSharingInstance *this_01;
  ulonglong uVar20;
  uint uVar21;
  undefined1 local_res20 [8];
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined1 local_b4 [4];
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  FScriptContainerElement *local_98;
  FScriptContainerElement *local_90;
  UAnimSharingInstance *local_88;
  ulonglong local_80;
  FScriptContainerElement *local_78;
  longlong local_70;
  FReadAccessScope local_68;
  
  if ((GAnimationSharingEnabled == 1) && (local_a8 = 0, 0 < (this->PerSkeletonData).ArrayNum)) {
    local_70 = 0;
    do {
      lVar12 = local_70;
      uVar21 = 0;
      if ((int)local_a8 < (this->PerSkeletonData).ArrayNum) {
        uVar21 = ~local_a8 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_01 = *(UAnimSharingInstance **)((this->PerSkeletonData).AllocatorInstance.Data + lVar12);
      pFVar18 = (this_01->RegisteredActors).AllocatorInstance.Data;
      for (pFVar15 = pFVar18; local_88 = this_01,
          pFVar15 != pFVar18 + (longlong)(this_01->RegisteredActors).ArrayNum * 8;
          pFVar15 = pFVar15 + 8) {
        if (*(AActor **)pFVar15 == (AActor *)0x0) {
          bVar8 = param_1 == (AActor *)0x0;
        }
        else {
          bVar8 = *(AActor **)pFVar15 == param_1;
        }
        if (bVar8) {
          local_80 = (longlong)pFVar15 - (longlong)pFVar18 >> 3;
          uVar21 = (uint)local_80;
          if (uVar21 != 0xffffffff) {
            uVar10 = 0;
            if ((int)uVar21 < (this_01->PerActorData).ArrayNum) {
              uVar10 = ~uVar21 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar18 = (this_01->PerActorData).AllocatorInstance.Data;
            iVar2 = (this_01->PerActorData).ArrayNum;
            if ((iVar2 < 2) || (uVar21 == iVar2 - 1U)) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            puVar14 = *(uint **)(pFVar18 + (longlong)(int)uVar21 * 0x48 + 0x20);
            iVar2 = *(int *)(pFVar18 + (longlong)(int)uVar21 * 0x48 + 0x28);
            puVar4 = puVar14 + iVar2;
            while( true ) {
              if (*(int *)(pFVar18 + (longlong)(int)uVar21 * 0x48 + 0x28) != iVar2) {
                local_res20[0] = 0;
                `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_res20);
              }
              if (puVar14 == puVar4) break;
              uVar10 = *puVar14;
              uVar11 = 0;
              if ((int)uVar10 < (this_01->PerComponentData).ArrayNum) {
                uVar11 = ~uVar10 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              this_00 = UAnimSharingInstance::GetComponent
                                  (this_01,(FPerComponentData *)
                                           ((this_01->PerComponentData).AllocatorInstance.Data +
                                           (longlong)(int)uVar10 * 0xc));
              if (this_00 != (USkeletalMeshComponent *)0x0) {
                USkinnedMeshComponent::SetLeaderPoseComponent
                          ((USkinnedMeshComponent *)this_00,(USkinnedMeshComponent *)0x0,true,false)
                ;
                lVar12 = this_00->_padding_;
                pbVar1 = (byte *)((longlong)&this_00->_padding_ + 2);
                *pbVar1 = *pbVar1 | 2;
                (**(code **)(lVar12 + 0x420))(this_00,1);
              }
              UAnimSharingInstance::RemoveComponent(this_01,uVar10);
              puVar14 = puVar14 + 1;
            }
            local_a0 = (this_01->BlendInstances).ArrayNum;
            uVar13 = (ulonglong)(int)local_a0;
            pFVar15 = (this_01->BlendInstances).AllocatorInstance.Data;
            uVar21 = (this_01->PerActorData).ArrayNum - 1;
            pFVar18 = pFVar15 + 0x28;
            local_78 = pFVar15 + uVar13 * 0x38;
            uVar20 = local_80;
            local_a4 = uVar21;
            while( true ) {
              pFVar7 = local_78;
              local_98 = pFVar15;
              local_90 = pFVar18;
              if ((this_01->BlendInstances).ArrayNum != (int)uVar13) {
                local_b8 = 0;
                `TCheckedPointerIterator<FBlendInstance,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_b8);
              }
              if (pFVar15 == pFVar7) break;
              local_b0 = (uint)uVar20;
              uVar13 = uVar20 & 0xffffffff;
              if ((*(uint **)(pFVar18 + -8) <= &local_b0) &&
                 (&local_b0 < *(uint **)(pFVar18 + -8) + *(int *)(pFVar18 + 4))) {
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar9) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar13 = (ulonglong)local_b0;
              }
              iVar2 = *(int *)pFVar18;
              iVar19 = 0;
              if (iVar2 != 0) {
                piVar3 = *(int **)(pFVar18 + -8);
                lVar12 = 0;
                bVar9 = *piVar3 != (int)uVar13;
                iVar16 = 0;
                do {
                  iVar17 = iVar16;
                  do {
                    lVar12 = lVar12 + 1;
                    iVar17 = iVar17 + 1;
                    if (iVar2 <= lVar12) break;
                  } while (bVar9 == (piVar3[lVar12] != (int)uVar13));
                  if (bVar9 != false) {
                    if (iVar19 != iVar16) {
                      memmove(piVar3 + iVar19,piVar3 + iVar16,(longlong)(iVar17 - iVar16) << 2);
                      uVar13 = (ulonglong)local_b0;
                    }
                    iVar19 = iVar19 + (iVar17 - iVar16);
                  }
                  bVar9 = (bool)(bVar9 ^ 1);
                  iVar16 = iVar17;
                } while (lVar12 < iVar2);
                *(int *)local_90 = iVar19;
                pFVar15 = local_98;
                pFVar18 = local_90;
                uVar20 = local_80;
                uVar21 = local_a4;
              }
              if (bVar8) {
                puVar4 = *(uint **)(pFVar18 + -8);
                for (puVar14 = puVar4; puVar14 != puVar4 + iVar19; puVar14 = puVar14 + 1) {
                  if (*puVar14 == uVar21) {
                    uVar10 = (uint)((longlong)puVar14 - (longlong)puVar4 >> 2);
                    goto LAB_14e2bd9f5;
                  }
                }
                uVar10 = 0xffffffff;
LAB_14e2bd9f5:
                if (uVar10 != 0xffffffff) {
                  uVar11 = 0;
                  if ((int)uVar10 < *(int *)pFVar18) {
                    uVar11 = ~uVar10 >> 0x1f;
                  }
                  if ((uVar11 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  *(int *)(*(longlong *)(pFVar18 + -8) + (longlong)(int)uVar10 * 4) = (int)uVar20;
                }
              }
              pFVar15 = pFVar15 + 0x38;
              uVar13 = (ulonglong)local_a0;
              pFVar18 = pFVar18 + 0x38;
              this_01 = local_88;
            }
            local_a0 = (this_01->OnDemandInstances).ArrayNum;
            uVar13 = (ulonglong)(int)local_a0;
            pFVar15 = (this_01->OnDemandInstances).AllocatorInstance.Data;
            pFVar18 = pFVar15 + 0x28;
            local_78 = pFVar15 + uVar13 * 0x30;
            while( true ) {
              pFVar7 = local_78;
              local_98 = pFVar18;
              local_90 = pFVar15;
              if ((this_01->OnDemandInstances).ArrayNum != (int)uVar13) {
                local_b7 = 0;
                `TCheckedPointerIterator<FOnDemandInstance,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_b7);
              }
              uVar10 = (uint)uVar20;
              if (pFVar15 == pFVar7) break;
              uVar13 = uVar20 & 0xffffffff;
              local_ac = uVar10;
              if ((*(uint **)(pFVar18 + -8) <= &local_ac) &&
                 (&local_ac < *(uint **)(pFVar18 + -8) + *(int *)(pFVar18 + 4))) {
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar9) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar13 = (ulonglong)local_ac;
              }
              iVar2 = *(int *)pFVar18;
              iVar19 = 0;
              if (iVar2 != 0) {
                piVar3 = *(int **)(pFVar18 + -8);
                lVar12 = 0;
                bVar9 = *piVar3 != (int)uVar13;
                iVar16 = 0;
                do {
                  iVar17 = iVar16;
                  do {
                    lVar12 = lVar12 + 1;
                    iVar17 = iVar17 + 1;
                    if (iVar2 <= lVar12) break;
                  } while (bVar9 == (piVar3[lVar12] != (int)uVar13));
                  if (bVar9 != false) {
                    if (iVar19 != iVar16) {
                      memmove(piVar3 + iVar19,piVar3 + iVar16,(longlong)(iVar17 - iVar16) << 2);
                      uVar13 = (ulonglong)local_ac;
                    }
                    iVar19 = iVar19 + (iVar17 - iVar16);
                  }
                  bVar9 = (bool)(bVar9 ^ 1);
                  iVar16 = iVar17;
                } while (lVar12 < iVar2);
                *(int *)local_98 = iVar19;
                pFVar15 = local_90;
                pFVar18 = local_98;
                uVar20 = local_80;
                uVar21 = local_a4;
              }
              if (bVar8) {
                puVar4 = *(uint **)(pFVar18 + -8);
                for (puVar14 = puVar4; puVar14 != puVar4 + iVar19; puVar14 = puVar14 + 1) {
                  if (*puVar14 == uVar21) {
                    uVar10 = (uint)((longlong)puVar14 - (longlong)puVar4 >> 2);
                    goto LAB_14e2bdbf8;
                  }
                }
                uVar10 = 0xffffffff;
LAB_14e2bdbf8:
                if (uVar10 != 0xffffffff) {
                  uVar11 = 0;
                  if ((int)uVar10 < *(int *)pFVar18) {
                    uVar11 = ~uVar10 >> 0x1f;
                  }
                  if ((uVar11 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  *(int *)(*(longlong *)(pFVar18 + -8) + (longlong)(int)uVar10 * 4) = (int)uVar20;
                }
              }
              pFVar15 = pFVar15 + 0x30;
              uVar13 = (ulonglong)local_a0;
              pFVar18 = pFVar18 + 0x30;
              this_01 = local_88;
            }
            iVar2 = (this_01->AdditiveInstances).ArrayNum;
            pFVar15 = (this_01->AdditiveInstances).AllocatorInstance.Data;
            pFVar18 = pFVar15 + (longlong)iVar2 * 0x28;
            while( true ) {
              if ((this_01->AdditiveInstances).ArrayNum != iVar2) {
                local_b6 = 0;
                `TCheckedPointerIterator<FAdditiveInstance,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_b6);
              }
              if (pFVar15 == pFVar18) break;
              if (*(uint *)(pFVar15 + 8) == uVar10) {
                *(undefined4 *)(pFVar15 + 8) = 0xffffffff;
                pFVar15 = pFVar15 + 0x28;
              }
              else {
                if ((bVar8) && (*(uint *)(pFVar15 + 8) == uVar21)) {
                  *(uint *)(pFVar15 + 8) = uVar10;
                }
                pFVar15 = pFVar15 + 0x28;
              }
            }
            if (bVar8) {
              uVar11 = 0;
              if ((int)uVar21 < (this_01->PerActorData).ArrayNum) {
                uVar11 = ~uVar21 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar12 = (longlong)(int)uVar21;
              pFVar18 = (this_01->PerActorData).AllocatorInstance.Data;
              puVar14 = *(uint **)(pFVar18 + lVar12 * 0x48 + 0x20);
              iVar2 = *(int *)(pFVar18 + lVar12 * 0x48 + 0x28);
              puVar4 = puVar14 + iVar2;
              while( true ) {
                if (*(int *)(pFVar18 + lVar12 * 0x48 + 0x28) != iVar2) {
                  local_b5 = 0;
                  `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(&local_b5);
                }
                uVar21 = local_a4;
                if (puVar14 == puVar4) break;
                uVar21 = *puVar14;
                uVar11 = 0;
                if ((int)uVar21 < (this_01->PerComponentData).ArrayNum) {
                  uVar11 = ~uVar21 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                puVar14 = puVar14 + 1;
                *(uint *)((this_01->PerComponentData).AllocatorInstance.Data +
                         (longlong)(int)uVar21 * 0xc + 8) = uVar10;
              }
              uVar11 = 0;
              if ((int)local_a4 < (this_01->PerActorData).ArrayNum) {
                uVar11 = ~local_a4 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar18 = (this_01->PerActorData).AllocatorInstance.Data;
              uVar11 = this_01->SkeletonID;
              if ((uVar11 != (uVar11 & 0xff)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IntFitsIn<OutType>(In)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                     ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"
                                    ), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if (0xffffff < uVar10) {
                local_b4[0] = 0;
                `UAnimationSharingManager::CreateActorHandle'::__l2::<lambda_1>::operator()
                          (local_b4);
              }
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                         (pFVar18 + (longlong)(int)uVar21 * 0x48 + 0x30),&local_68);
              if ((*(int *)(pFVar18 + (longlong)(int)uVar21 * 0x48 + 0x40) != 0) &&
                 (plVar5 = *(longlong **)(pFVar18 + (longlong)(int)uVar21 * 0x48 + 0x38),
                 plVar5 != (longlong *)0x0)) {
                (**(code **)(*plVar5 + 0x68))(plVar5,uVar11 << 0x18 | uVar10);
              }
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_68);
            }
            uVar21 = 0;
            if ((int)uVar10 < (this_01->PerActorData).ArrayNum) {
              uVar21 = ~uVar10 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            TArray<FPerActorData,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                      (&this_01->PerActorData,uVar10);
            uVar21 = 0;
            if ((int)uVar10 < (this_01->RegisteredActors).ArrayNum) {
              uVar21 = ~uVar10 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar2 = (this_01->RegisteredActors).ArrayNum;
            pFVar18 = (this_01->RegisteredActors).AllocatorInstance.Data;
            iVar19 = ~uVar10 + iVar2;
            if (1 < iVar19) {
              iVar19 = 1;
            }
            if (iVar19 != 0) {
              memmove(pFVar18 + (longlong)(int)uVar10 * 8,pFVar18 + (longlong)(iVar2 - iVar19) * 8,
                      (longlong)iVar19 << 3);
            }
            piVar3 = &(this_01->RegisteredActors).ArrayNum;
            *piVar3 = *piVar3 + -1;
            lVar12 = local_70;
          }
          break;
        }
      }
      local_a8 = local_a8 + 1;
      local_70 = lVar12 + 8;
    } while ((int)local_a8 < (this->PerSkeletonData).ArrayNum);
  }
  return;
}

// UnregisterAllActors @ 14e2be340

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAnimationSharingManager::UnregisterAllActors(UAnimationSharingManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->PerSkeletonData).AllocatorInstance.Data;
  iVar2 = (this->PerSkeletonData).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->PerSkeletonData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UAnimSharingInstance>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    UAnimSharingInstance::UnregisterAllActors(*(UAnimSharingInstance **)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// UpdateSignificanceForActorHandle @ 14e2be430

void __thiscall
UAnimationSharingManager::UpdateSignificanceForActorHandle
          (UAnimationSharingManager *this,uint param_1,float param_2)

{
  FPerActorData *pFVar1;
  
  pFVar1 = GetActorDataByHandle(this,param_1);
  if (pFVar1 != (FPerActorData *)0x0) {
    pFVar1->SignificanceValue = param_2;
  }
  return;
}

// execAnimationSharingEnabled @ 14e2be4e0

void __cdecl
UAnimationSharingManager::execAnimationSharingEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  bVar1 = GAnimationSharingEnabled == 1;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = bVar1;
  return;
}

// execCreateAnimationSharingManager @ 14e2be510

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
UAnimationSharingManager::execCreateAnimationSharingManager
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  bool bVar3;
  UWorld *pUVar4;
  undefined8 local_res10;
  UObject *local_res18 [2];
  code *local_38 [2];
  undefined **local_28;
  undefined8 local_20;
  undefined8 local_10;
  
  local_res18[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  uVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = UEngine::GetWorldFromContextObject(GEngine,local_res18[0],LogAndReturnNull);
  if (pUVar4 != (UWorld *)0x0) {
    local_10 = 0;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FAnimSharingModule::CreateAnimationSharingManager'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_20 = uVar2;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FAnimSharingModule::CreateAnimationSharingManager'::__l2::<lambda_1>,UAnimationSharingManager_*,UWorld_*>
                  ::Call;
    bVar3 = FAnimSharingModule::CreateAnimationSharingManager
                      (pUVar4,(TFunction<UAnimationSharingManager_*___cdecl(UWorld_*)> *)local_38);
    *(bool *)param_3 = bVar3;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetAnimationSharingManager @ 14e2be630

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
UAnimationSharingManager::execGetAnimationSharingManager
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWorld *pUVar2;
  TTuple<UWorld_const_*,TObjectPtr<UAnimationSharingManager>_> *pTVar3;
  UObject *pUVar4;
  UObject *local_res10;
  
  pUVar4 = (UObject *)0x0;
  local_res10 = (UObject *)0x0;
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
  pUVar2 = UEngine::GetWorldFromContextObject(GEngine,local_res10,LogAndReturnNull);
  if (pUVar2 != (UWorld *)0x0) {
    pTVar3 = TSet<TTuple<UWorld_const_*,TObjectPtr<UAnimationSharingManager>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TObjectPtr<UAnimationSharingManager>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<UWorld_const_*,TObjectPtr<UAnimationSharingManager>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TObjectPtr<UAnimationSharingManager>,0>,FDefaultSetAllocator>
                     *)&FAnimSharingModule::WorldAnimSharingManagers,pUVar2);
    if (((pTVar3 != (TTuple<UWorld_const_*,TObjectPtr<UAnimationSharingManager>_> *)0x0) &&
        (pUVar4 = *(UObject **)&pTVar3->field_0x8,
        UE::GC::GIsIncrementalReachabilityPending != false)) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
  }
  *(UObject **)param_3 = pUVar4;
  return;
}

// execRegisterActorWithSkeletonBP @ 14e2be9c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UAnimationSharingManager::execRegisterActorWithSkeletonBP
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  USkeleton *pUVar2;
  AActor *pAVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  USkeleton *local_res10;
  AActor *local_res20;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  local_res20 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = (USkeleton *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pAVar3 = local_res20;
  pUVar2 = local_res10;
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UAnimationSharingManager::RegisterActorWithSkeletonBP'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  RegisterActorWithSkeleton
            ((UAnimationSharingManager *)param_1,pAVar3,pUVar2,
             (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)local_58);
  return;
}

// operator() @ 1505957e0

bool __thiscall
`UAnimationSharingManager::CreateActorHandle'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4097645640744436108>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4097645640744436108>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

