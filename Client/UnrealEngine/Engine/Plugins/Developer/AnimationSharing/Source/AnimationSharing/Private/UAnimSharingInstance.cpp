// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationSharing
// Functions: 46

// StaticClass @ 14e2a8b50

UClass * __cdecl UAnimSharingInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSharingInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationSharing",L"AnimSharingInstance",
               &Z_Registration_Info_UClass_UAnimSharingInstance.InnerSingleton,
               StaticRegisterNativesUAnimSharingInstance,0x130,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAnimSharingInstance>,
               InternalVTableHelperCtorCaller<UAnimSharingInstance>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSharingInstance.InnerSingleton;
}

// UAnimSharingInstance @ 14e2ab9e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAnimSharingInstance * __thiscall
UAnimSharingInstance::UAnimSharingInstance(UAnimSharingInstance *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimSharingInstance__6B_;
  (this->RegisteredActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredActors).ArrayNum = 0;
  (this->RegisteredActors).ArrayMax = 0;
  (this->PerActorData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerActorData).ArrayNum = 0;
  (this->PerActorData).ArrayMax = 0;
  (this->PerComponentData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerComponentData).ArrayNum = 0;
  (this->PerComponentData).ArrayMax = 0;
  (this->PerStateData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerStateData).ArrayNum = 0;
  (this->PerStateData).ArrayMax = 0;
  (this->BlendInstanceStack).AvailableInstances.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BlendInstanceStack).AvailableInstances.ArrayNum = 0;
  (this->BlendInstanceStack).AvailableInstances.ArrayMax = 0;
  (this->BlendInstanceStack).InUseInstances.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlendInstanceStack).InUseInstances.ArrayNum = 0;
  (this->BlendInstanceStack).InUseInstances.ArrayMax = 0;
  (this->StateProcessor).field0_0x0.DebugPtr = (UAnimationSharingStateProcessor *)0x0;
  (this->OwnerSetup).WeakPtr = (FWeakObjectPtr)0x0;
  (this->BlendInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlendInstances).ArrayNum = 0;
  (this->BlendInstances).ArrayMax = 0;
  (this->OnDemandInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OnDemandInstances).ArrayNum = 0;
  (this->OnDemandInstances).ArrayMax = 0;
  (this->AdditiveInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditiveInstances).ArrayNum = 0;
  (this->AdditiveInstances).ArrayMax = 0;
  (this->UsedAnimationSequences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedAnimationSequences).ArrayNum = 0;
  (this->UsedAnimationSequences).ArrayMax = 0;
  (this->StateEnum).field0_0x0.DebugPtr = (UEnum *)0x0;
  (this->SharingActor).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->ScalabilitySettings).BlendSignificanceValue.Default = 0.0;
  (this->ScalabilitySettings).UseBlendTransitions.Default = true;
  (this->ScalabilitySettings).MaximumNumberConcurrentBlends = 1;
  (this->ScalabilitySettings).TickSignificanceValue = 0.0;
  return this;
}

// UAnimSharingInstance @ 14e2abab0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAnimSharingInstance * __thiscall
UAnimSharingInstance::UAnimSharingInstance(UAnimSharingInstance *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimSharingInstance__6B_;
  (this->RegisteredActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredActors).ArrayNum = 0;
  (this->RegisteredActors).ArrayMax = 0;
  (this->PerActorData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerActorData).ArrayNum = 0;
  (this->PerActorData).ArrayMax = 0;
  (this->PerComponentData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerComponentData).ArrayNum = 0;
  (this->PerComponentData).ArrayMax = 0;
  (this->PerStateData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerStateData).ArrayNum = 0;
  (this->PerStateData).ArrayMax = 0;
  (this->BlendInstanceStack).AvailableInstances.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BlendInstanceStack).AvailableInstances.ArrayNum = 0;
  (this->BlendInstanceStack).AvailableInstances.ArrayMax = 0;
  (this->BlendInstanceStack).InUseInstances.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlendInstanceStack).InUseInstances.ArrayNum = 0;
  (this->BlendInstanceStack).InUseInstances.ArrayMax = 0;
  (this->StateProcessor).field0_0x0.DebugPtr = (UAnimationSharingStateProcessor *)0x0;
  (this->OwnerSetup).WeakPtr = (FWeakObjectPtr)0x0;
  (this->BlendInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlendInstances).ArrayNum = 0;
  (this->BlendInstances).ArrayMax = 0;
  (this->OnDemandInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OnDemandInstances).ArrayNum = 0;
  (this->OnDemandInstances).ArrayMax = 0;
  (this->AdditiveInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditiveInstances).ArrayNum = 0;
  (this->AdditiveInstances).ArrayMax = 0;
  (this->UsedAnimationSequences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedAnimationSequences).ArrayNum = 0;
  (this->UsedAnimationSequences).ArrayMax = 0;
  (this->StateEnum).field0_0x0.DebugPtr = (UEnum *)0x0;
  (this->SharingActor).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->ScalabilitySettings).BlendSignificanceValue.Default = 0.0;
  (this->ScalabilitySettings).UseBlendTransitions.Default = true;
  (this->ScalabilitySettings).MaximumNumberConcurrentBlends = 1;
  (this->ScalabilitySettings).TickSignificanceValue = 0.0;
  return this;
}

// ~UAnimSharingInstance @ 14e2ac330

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAnimSharingInstance::~UAnimSharingInstance(UAnimSharingInstance *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAnimSharingInstance__6B_;
  pFVar1 = (this->UsedAnimationSequences).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AdditiveInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FOnDemandInstance,int>
            ((FOnDemandInstance *)(this->OnDemandInstances).AllocatorInstance.Data,
             (this->OnDemandInstances).ArrayNum);
  pFVar1 = (this->OnDemandInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FBlendInstance,int>
            ((FBlendInstance *)(this->BlendInstances).AllocatorInstance.Data,
             (this->BlendInstances).ArrayNum);
  pFVar1 = (this->BlendInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstanceStack<FTransitionBlendInstance>::~FInstanceStack<FTransitionBlendInstance>
            (&this->BlendInstanceStack);
  DestructItems<FPerStateData,int>
            ((FPerStateData *)(this->PerStateData).AllocatorInstance.Data,
             (this->PerStateData).ArrayNum);
  pFVar1 = (this->PerStateData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerComponentData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPerActorData,int>
            ((FPerActorData *)(this->PerActorData).AllocatorInstance.Data,
             (this->PerActorData).ArrayNum);
  pFVar1 = (this->PerActorData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RegisteredActors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14e2ac720

bool __thiscall
`UAnimSharingInstance::SetupBlend'::__l5::<lambda_1>::operator()(void *this,FBlendInstance *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  if ((((param_1->bActive == false) && (param_1->StateFrom == *(uchar *)((longlong)this + 8))) &&
      (param_1->StateTo == *(uchar *)((longlong)this + 9))) &&
     (param_1->bOnDemand == (bool)*(char *)((longlong)this + 10))) {
    lVar2 = *(longlong *)this;
    uVar1 = *(uint *)((longlong)this + 0xc);
    uVar6 = 0;
    if ((int)uVar1 < *(int *)(lVar2 + 0x40)) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if (param_1->FromPermutationIndex ==
        (uint)*(byte *)(*(longlong *)(lVar2 + 0x38) + 2 + (longlong)(int)uVar1 * 0x48)) {
      return true;
    }
  }
  return false;
}

// operator() @ 14e2aca10

FString * __thiscall
`UAnimSharingInstance::TickDebugInformation'::__l16::<lambda_2>::operator()
          (void *this,FString *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  UEnum *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FString *pFVar8;
  FText *pFVar9;
  uint uVar10;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58 [2];
  
  uVar1 = *(uint *)(*(longlong *)((longlong)this + 8) + 0x10);
  if (((uVar1 == 0xffffffff) || ((int)uVar1 < 0)) ||
     (lVar3 = *(longlong *)this, *(int *)(lVar3 + 0xa8) <= (int)uVar1)) {
    iVar2 = *(int *)(*(longlong *)((longlong)this + 8) + 0x14);
    if (((iVar2 == -1) || (iVar2 < 0)) || (*(int *)(*(longlong *)this + 0xb8) <= iVar2)) {
      pFVar9 = UEnum::GetDisplayNameTextByValue
                         (*(UEnum **)(*(longlong *)this + 0xf0),local_58,
                          (ulonglong)*(byte *)((longlong)this + 0x10));
      FText::ToString(pFVar9);
      ::FString::PrintfImpl(__return_storage_ptr__,L"State - %s %1.2f");
      local_68.TextData.Reference = local_58[0].TextData.Reference;
    }
    else {
      pFVar9 = UEnum::GetDisplayNameTextByValue
                         (*(UEnum **)(*(longlong *)this + 0xf0),&local_68,
                          (ulonglong)*(byte *)((longlong)this + 0x10));
      FText::ToString(pFVar9);
      ::FString::PrintfImpl(__return_storage_ptr__,L"On demand state - %s [%i]");
    }
  }
  else {
    uVar10 = ~uVar1 >> 0x1f;
    uVar7 = 0;
    if ((int)uVar1 < *(int *)(lVar3 + 0xa8)) {
      uVar7 = uVar10;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar5)();
      return pFVar8;
    }
    (**(code **)(**(longlong **)this + 0x180))();
    uVar7 = 0;
    if ((int)uVar1 < *(int *)(lVar3 + 0xa8)) {
      uVar7 = uVar10;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar5)();
      return pFVar8;
    }
    lVar3 = *(longlong *)this;
    pUVar4 = *(UEnum **)(lVar3 + 0xf0);
    uVar7 = 0;
    if ((int)uVar1 < *(int *)(lVar3 + 0xa8)) {
      uVar7 = uVar10;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar5)();
      return pFVar8;
    }
    pFVar9 = UEnum::GetDisplayNameTextByValue
                       (pUVar4,&local_78,
                        (ulonglong)
                        *(byte *)(*(longlong *)(lVar3 + 0xa0) + 0xd + (longlong)(int)uVar1 * 0x38));
    FText::ToString(pFVar9);
    lVar3 = *(longlong *)this;
    pUVar4 = *(UEnum **)(lVar3 + 0xf0);
    uVar7 = 0;
    if ((int)uVar1 < *(int *)(lVar3 + 0xa8)) {
      uVar7 = uVar10;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar5)();
      return pFVar8;
    }
    pFVar9 = UEnum::GetDisplayNameTextByValue
                       (pUVar4,&local_88,
                        (ulonglong)
                        *(byte *)(*(longlong *)(lVar3 + 0xa0) + 0xc + (longlong)(int)uVar1 * 0x38));
    FText::ToString(pFVar9);
    ::FString::PrintfImpl(__return_storage_ptr__,L"Blending states - %s to %s [%1.3f] (%i)");
    local_68.TextData.Reference = local_78.TextData.Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      local_68.TextData.Reference = local_78.TextData.Reference;
    }
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14e2acdc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
`UAnimSharingInstance::TickDebugInformation'::__l16::<lambda_3>::operator()
          (void *this,FString *__return_storage_ptr__)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FString *pFVar8;
  FText *pFVar9;
  longlong lVar10;
  FText local_a8;
  FText local_98;
  FString local_88;
  FString local_78;
  FText local_68;
  FString local_58 [2];
  
  lVar4 = *(longlong *)((longlong)this + 8);
  uVar3 = *(uint *)(lVar4 + 0x10);
  if (((uVar3 == 0xffffffff) || ((int)uVar3 < 0)) ||
     (lVar10 = *(longlong *)this, *(int *)(lVar10 + 0xa8) <= (int)uVar3)) {
    UAnimSharingInstance::GetDebugStateString
              (*(UAnimSharingInstance **)this,local_58,*(uchar *)((longlong)this + 0x10),
               (uint)*(byte *)(lVar4 + 2),*(uint *)(lVar4 + 0x14));
    pFVar9 = UEnum::GetDisplayNameTextByValue
                       (*(UEnum **)(*(longlong *)this + 0xf0),&local_68,
                        (ulonglong)*(byte *)((longlong)this + 0x10));
    FText::ToString(pFVar9);
    ::FString::PrintfImpl(__return_storage_ptr__,L"State - %s Sig %1.2f\n  %s");
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
  }
  else {
    uVar7 = 0;
    if ((int)uVar3 < *(int *)(lVar10 + 0xa8)) {
      uVar7 = ~uVar3 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar5)();
      return pFVar8;
    }
    lVar4 = *(longlong *)(lVar10 + 0xa0);
    lVar10 = (longlong)(int)uVar3 * 0x38;
    bVar1 = *(byte *)(lVar10 + 0xd + lVar4);
    bVar2 = *(byte *)(lVar10 + 0xc + lVar4);
    uVar7 = 0;
    if ((int)uVar3 < *(int *)(*(longlong *)this + 0xa8)) {
      uVar7 = ~uVar3 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar5)();
      return pFVar8;
    }
    (**(code **)(**(longlong **)this + 0x180))();
    UAnimSharingInstance::GetDebugStateString
              (*(UAnimSharingInstance **)this,&local_78,bVar1,*(uint *)(lVar10 + 0x14 + lVar4),
               *(uint *)(lVar10 + 0x34 + lVar4));
    UAnimSharingInstance::GetDebugStateString
              (*(UAnimSharingInstance **)this,&local_88,bVar2,*(uint *)(lVar10 + 0x10 + lVar4),
               *(uint *)(lVar10 + 0x30 + lVar4));
    pFVar9 = UEnum::GetDisplayNameTextByValue
                       (*(UEnum **)(*(longlong *)this + 0xf0),&local_98,(ulonglong)bVar1);
    FText::ToString(pFVar9);
    pFVar9 = UEnum::GetDisplayNameTextByValue
                       (*(UEnum **)(*(longlong *)this + 0xf0),&local_a8,(ulonglong)bVar2);
    FText::ToString(pFVar9);
    ::FString::PrintfImpl
              (__return_storage_ptr__,
               L"Blending states - %s to %s [%1.3f] (%i)\n  From: %s\n  To: %s");
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
    local_58[0].Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
      local_58[0].Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    }
  }
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// BeginDestroy @ 14e2ad9b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAnimSharingInstance::BeginDestroy(UAnimSharingInstance *this)

{
  int *piVar1;
  UWorld *this_00;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  UObject::BeginDestroy((UObject *)this);
  UnregisterAllActors(this);
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  if (this_00 != (UWorld *)0x0) {
    UWorld::DestroyActor(this_00,(this->SharingActor).field0_0x0.DebugPtr,false,true);
  }
  DestructItems<FPerStateData,int>
            ((FPerStateData *)(this->PerStateData).AllocatorInstance.Data,
             (this->PerStateData).ArrayNum);
  piVar1 = &(this->PerStateData).ArrayMax;
  (this->PerStateData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,8,0,&(this->PerStateData).AllocatorInstance,0,piVar1);
  }
  (this->StateProcessor).field0_0x0.DebugPtr = (UAnimationSharingStateProcessor *)0x0;
  (this->StateEnum).field0_0x0.DebugPtr = (UEnum *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->OwnerSetup).WeakPtr = local_res8;
  DestructItems<FBlendInstance,int>
            ((FBlendInstance *)(this->BlendInstances).AllocatorInstance.Data,
             (this->BlendInstances).ArrayNum);
  piVar1 = &(this->BlendInstances).ArrayMax;
  (this->BlendInstances).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->BlendInstances).AllocatorInstance,0,piVar1);
  }
  DestructItems<FOnDemandInstance,int>
            ((FOnDemandInstance *)(this->OnDemandInstances).AllocatorInstance.Data,
             (this->OnDemandInstances).ArrayNum);
  piVar1 = &(this->OnDemandInstances).ArrayMax;
  (this->OnDemandInstances).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&(this->OnDemandInstances).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->AdditiveInstances).ArrayMax;
  (this->AdditiveInstances).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->AdditiveInstances).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->UsedAnimationSequences).ArrayMax;
  (this->UsedAnimationSequences).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->UsedAnimationSequences).AllocatorInstance,0,piVar1);
  }
  this->AnimSharingManager = (UAnimationSharingManager *)0x0;
  this->SignificanceManager = (USignificanceManager *)0x0;
  return;
}

// CalculateBlendTime @ 14e2add70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall UAnimSharingInstance::CalculateBlendTime(UAnimSharingInstance *this,uchar param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->PerStateData).ArrayNum <= (int)(uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PerStateData.IsValidIndex(StateIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\AnimationSharing\\Source\\AnimationSharing\\Private\\AnimationSharingManager.cpp"
                       ,0x979,L"Invalid State index");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  if ((this->PerStateData).ArrayNum <= (int)(uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  return *(float *)((this->PerStateData).AllocatorInstance.Data + (ulonglong)param_1 * 0xc0 + 4);
}

// DeterminePermutationIndex @ 14e2ae850

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall
UAnimSharingInstance::DeterminePermutationIndex
          (UAnimSharingInstance *this,uint param_1,uchar param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  if (((this->PerStateData).ArrayNum <= (int)(uint)param_2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  pFVar2 = (this->PerStateData).AllocatorInstance.Data;
  iVar1 = *(int *)(pFVar2 + (ulonglong)param_2 * 0xc0 + 0x28);
  if (iVar1 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = rand();
    uVar6 = (uint)((float)(uVar5 & 0x7fff) * (float)iVar1 * __real_38000100);
    uVar5 = iVar1 - 1U;
    if ((int)uVar6 < (int)(iVar1 - 1U)) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 0) goto LAB_14e2ae8f6;
  }
  if ((int)uVar5 < *(int *)(pFVar2 + (ulonglong)param_2 * 0xc0 + 0x28)) {
    return uVar5;
  }
LAB_14e2ae8f6:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Components.IsValidIndex(PermutationIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\AnimationSharing\\Source\\AnimationSharing\\Private\\AnimationSharingManager.cpp"
                     ,0x850,L"Not enough LeaderComponents initialised!");
  if (!bVar4) {
    return uVar5;
  }
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return uVar5;
}

// DetermineStateForActor @ 14e2ae940

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uchar __thiscall
UAnimSharingInstance::DetermineStateForActor(UAnimSharingInstance *this,uint param_1,bool *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  UAnimationSharingStateProcessor *this_00;
  code *pcVar3;
  bool bVar4;
  uchar uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement FVar9;
  longlong lVar10;
  uint local_res10 [2];
  bool *local_res18;
  
  lVar10 = (longlong)(int)param_1;
  uVar8 = ~param_1 >> 0x1f;
  uVar6 = 0;
  if ((int)param_1 < (this->PerActorData).ArrayNum) {
    uVar6 = uVar8;
  }
  local_res18 = param_2;
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  pFVar1 = (this->PerActorData).AllocatorInstance.Data + lVar10 * 0x48;
  this_00 = (this->StateProcessor).field0_0x0.DebugPtr;
  local_res10[0] = 0;
  uVar6 = *(uint *)(pFVar1 + 0x14);
  if (this->bNativeStateProcessor == false) {
    if (uVar6 == 0xffffffff) {
      FVar9 = (FScriptContainerElement)0xff;
    }
    else {
      uVar7 = 0;
      if ((int)uVar6 < (this->OnDemandInstances).ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return uVar5;
        }
      }
      FVar9 = (this->OnDemandInstances).AllocatorInstance.Data[(longlong)(int)uVar6 * 0x30 + 3];
    }
    FVar2 = *pFVar1;
    uVar6 = 0;
    if ((int)param_1 < (this->RegisteredActors).ArrayNum) {
      uVar6 = uVar8;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    UAnimationSharingStateProcessor::ProcessActorState
              (this_00,(int *)local_res10,
               *(AActor **)((this->RegisteredActors).AllocatorInstance.Data + lVar10 * 8),
               (uchar)FVar2,(uchar)FVar9,local_res18);
  }
  else {
    pcVar3 = *(code **)(this_00->_padding_ + 0x2b0);
    if (uVar6 == 0xffffffff) {
      FVar9 = (FScriptContainerElement)0xff;
    }
    else {
      uVar7 = 0;
      if ((int)uVar6 < (this->OnDemandInstances).ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return uVar5;
        }
      }
      FVar9 = (this->OnDemandInstances).AllocatorInstance.Data[(longlong)(int)uVar6 * 0x30 + 3];
    }
    FVar2 = *pFVar1;
    uVar6 = 0;
    if ((int)param_1 < (this->RegisteredActors).ArrayNum) {
      uVar6 = uVar8;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    (*pcVar3)(this_00,local_res10,
              *(undefined8 *)((this->RegisteredActors).AllocatorInstance.Data + lVar10 * 8),FVar2,
              FVar9,local_res18);
  }
  uVar5 = (uchar)local_res10[0];
  if ((local_res10[0] != (local_res10[0] & 0xff)) || ((int)local_res10[0] < 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  return uVar5;
}

// FreeAdditiveInstance @ 14e2aef80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UAnimSharingInstance::FreeAdditiveInstance
          (UAnimSharingInstance *this,uchar param_1,FAdditiveAnimationInstance *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FAdditiveAnimationInstance *local_18 [2];
  
  if (param_2->AdditiveInstance != (UAnimSharingAdditiveInstance *)0x0) {
    (**(code **)(param_2->SkeletalMeshComponent->_padding_ + 0x420))
              (param_2->SkeletalMeshComponent,0);
    (**(code **)(param_2->SkeletalMeshComponent->_padding_ + 0x4d0))
              (param_2->SkeletalMeshComponent,param_2->BaseComponent);
  }
  if ((this->PerStateData).ArrayNum <= (int)(uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar4 = (this->PerStateData).AllocatorInstance.Data + (ulonglong)param_1 * 0xc0 + 0xa0;
  local_18[0] = param_2;
  if ((*(FAdditiveAnimationInstance ***)&pFVar4->field_0x0 <= local_18) &&
     (local_18 < *(FAdditiveAnimationInstance ***)&pFVar4->field_0x0 + *(int *)(pFVar4 + 0xc))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = *(int *)&pFVar4[8].field_0x0;
  if (iVar3 == *(int *)(pFVar4 + 0xc)) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar4,(int *)(pFVar4 + 0xc));
  }
  *(int *)&pFVar4[8].field_0x0 = iVar3 + 1;
  *(FAdditiveAnimationInstance **)(*(longlong *)&pFVar4->field_0x0 + (longlong)iVar3 * 8) =
       local_18[0];
  TArray<FAdditiveAnimationInstance_*,TSizedDefaultAllocator<32>_>::RemoveSwap
            ((TArray<FAdditiveAnimationInstance_*,TSizedDefaultAllocator<32>_> *)(pFVar4 + 0x10),
             local_18,Default);
  return;
}

// FreeBlendInstance @ 14e2af0d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UAnimSharingInstance::FreeBlendInstance
          (UAnimSharingInstance *this,FTransitionBlendInstance *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FTransitionBlendInstance *local_18 [2];
  
  if (param_1->TransitionInstance != (UAnimSharingTransitionInstance *)0x0) {
    (**(code **)(param_1->SkeletalMeshComponent->_padding_ + 0x420))
              (param_1->SkeletalMeshComponent,0);
    (**(code **)(param_1->SkeletalMeshComponent->_padding_ + 0x4d0))
              (param_1->SkeletalMeshComponent,param_1->FromComponent);
    (**(code **)(param_1->SkeletalMeshComponent->_padding_ + 0x4d0))
              (param_1->SkeletalMeshComponent,param_1->ToComponent);
  }
  pFVar2 = (this->BlendInstanceStack).AvailableInstances.AllocatorInstance.Data;
  local_18[0] = param_1;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar2 + (longlong)(this->BlendInstanceStack).AvailableInstances.ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->BlendInstanceStack).AvailableInstances.ArrayNum;
  piVar1 = &(this->BlendInstanceStack).AvailableInstances.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->BlendInstanceStack,piVar1);
  }
  (this->BlendInstanceStack).AvailableInstances.ArrayNum = iVar5 + 1;
  *(FTransitionBlendInstance **)
   ((this->BlendInstanceStack).AvailableInstances.AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_18[0];
  TArray<FTransitionBlendInstance_*,TSizedDefaultAllocator<32>_>::RemoveSwap
            (&(this->BlendInstanceStack).InUseInstances,local_18,Default);
  return;
}

// GetAnimAssetNameAndData @ 14e2af370

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
UAnimSharingInstance::GetAnimAssetNameAndData
          (UAnimSharingInstance *this,uint param_1,uint param_2,FString *param_3,float *param_4,
          float *param_5)

{
  FScriptContainerElement *pFVar1;
  USkeletalMeshComponent *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  Type TVar5;
  UAnimSingleNodeInstance *this_01;
  UAnimInstance *this_02;
  longlong lVar6;
  float fVar7;
  FName local_res8;
  FName local_78;
  FName local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  TArray<FAnimNode_AssetPlayerRelevancyBase_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  uVar4 = 0;
  if ((int)param_1 < (this->PerStateData).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
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
  lVar6 = (longlong)(int)param_1 * 0xc0;
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)((this->PerStateData).AllocatorInstance.Data + lVar6 + 0x28))) {
    uVar4 = 0;
    if ((int)param_1 < (this->PerStateData).ArrayNum) {
      uVar4 = ~param_1 >> 0x1f;
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
    pFVar1 = (this->PerStateData).AllocatorInstance.Data;
    uVar4 = 0;
    if ((int)param_2 < *(int *)(pFVar1 + lVar6 + 0x28)) {
      uVar4 = ~param_2 >> 0x1f;
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
    this_00 = *(USkeletalMeshComponent **)
               (*(longlong *)(pFVar1 + lVar6 + 0x20) + (longlong)(int)param_2 * 8);
    TVar5 = USkeletalMeshComponent::GetAnimationMode(this_00);
    if (TVar5 == AnimationBlueprint) {
      this_02 = USkeletalMeshComponent::GetAnimInstance(this_00);
      if (this_02 != (UAnimInstance *)0x0) {
        local_78.ComparisonIndex.Value = *(uint *)&this_02->field_0x18;
        local_78.Number = *(uint *)&this_02->field_0x1c;
        ::FName::ToString(&local_78,&local_58);
        if (param_3 != &local_58) {
          pFVar1 = (param_3->Data).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (param_3->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
          (param_3->Data).ArrayNum = local_58.Data.ArrayNum;
          (param_3->Data).ArrayMax = local_58.Data.ArrayMax;
          local_58.Data.ArrayNum = 0;
          local_58.Data.ArrayMax = 0;
          local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          ::FName::FName(&AnimGraphName,L"AnimGraph");
          _Init_thread_footer(&::_TSS0);
        }
        UAnimInstance::GetInstanceRelevantAssetPlayers(this_02,&local_38,&AnimGraphName);
        if (0 < local_38.ArrayNum) {
          lVar6 = (**(code **)(**(longlong **)local_38.AllocatorInstance.Data + 0xa0))();
          if (lVar6 != 0) {
            local_70 = *(FName *)(lVar6 + 0x18);
            ::FName::ToString(&local_70,&local_48);
            if (param_3 != &local_48) {
              pFVar1 = (param_3->Data).AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              (param_3->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
              (param_3->Data).ArrayNum = local_48.Data.ArrayNum;
              (param_3->Data).ArrayMax = local_48.Data.ArrayMax;
              local_48.Data.ArrayNum = 0;
              local_48.Data.ArrayMax = 0;
              local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
          }
          if ((local_38.ArrayNum < 1) &&
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
          fVar7 = (float)(**(code **)(**(longlong **)local_38.AllocatorInstance.Data + 0xc0))();
          *param_4 = fVar7;
          if ((local_38.ArrayNum < 1) &&
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
          fVar7 = (float)(**(code **)(**(longlong **)local_38.AllocatorInstance.Data + 0xb8))();
          *param_5 = fVar7;
        }
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
      }
    }
    else if ((TVar5 == AnimationSingleNode) &&
            (this_01 = USkeletalMeshComponent::GetSingleNodeInstance(this_00),
            this_01 != (UAnimSingleNodeInstance *)0x0)) {
      lVar6 = (**(code **)(*(longlong *)this_01 + 0x398))(this_01);
      if (lVar6 != 0) {
        local_res8 = *(FName *)(lVar6 + 0x18);
        ::FName::ToString(&local_res8,&local_68);
        if (param_3 != &local_68) {
          pFVar1 = (param_3->Data).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (param_3->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
          (param_3->Data).ArrayNum = local_68.Data.ArrayNum;
          (param_3->Data).ArrayMax = local_68.Data.ArrayMax;
          local_68.Data.ArrayNum = 0;
          local_68.Data.ArrayMax = 0;
          local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      fVar7 = UAnimSingleNodeInstance::GetCurrentTime(this_01);
      *param_4 = fVar7;
      fVar7 = UAnimSingleNodeInstance::GetLength(this_01);
      *param_5 = fVar7;
    }
  }
  return;
}

// GetComponent @ 14e2af970

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USkeletalMeshComponent * __thiscall
UAnimSharingInstance::GetComponent(UAnimSharingInstance *this,FPerComponentData *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  USkeletalMeshComponent *pUVar4;
  uint uVar5;
  bool bVar6;
  FName local_res10;
  FString local_18;
  
  bVar6 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
  if (bVar3) {
    pUVar4 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    return pUVar4;
  }
  if (2 < (byte)LogAnimationSharing._0_1_) {
    uVar1 = param_1->ActorIndex;
    uVar5 = 0;
    if ((int)uVar1 < (this->RegisteredActors).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (USkeletalMeshComponent *)(*pcVar2)();
      return pUVar4;
    }
    if (*(longlong *)((this->RegisteredActors).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) !=
        0) {
      uVar1 = param_1->ActorIndex;
      uVar5 = 0;
      if ((int)uVar1 < (this->RegisteredActors).ArrayNum) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (USkeletalMeshComponent *)(*pcVar2)();
        return pUVar4;
      }
      local_res10 = *(FName *)(*(longlong *)
                                ((this->RegisteredActors).AllocatorInstance.Data +
                                (longlong)(int)uVar1 * 8) + 0x18);
      ::FName::ToString(&local_res10,&local_18);
      bVar6 = true;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
    if ((bVar6) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return (USkeletalMeshComponent *)0x0;
}

// GetDebugStateString @ 14e2afaf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
UAnimSharingInstance::GetDebugStateString
          (UAnimSharingInstance *this,FString *__return_storage_ptr__,uchar param_1,uint param_2,
          uint param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  longlong lVar7;
  float local_48;
  float local_44;
  float local_40 [2];
  FString local_38;
  FString local_28;
  
  lVar7 = (longlong)(int)param_3;
  if (((param_3 == 0xffffffff) || ((int)param_3 < 0)) ||
     ((this->OnDemandInstances).ArrayNum <= (int)param_3)) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_40[0] = 0.0;
    local_44 = 0.0;
    GetAnimAssetNameAndData(this,(uint)param_1,param_2,&local_28,local_40,&local_44);
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s [%.2f / %.2f] {%d}");
  }
  else {
    uVar5 = 0;
    if ((int)param_3 < (this->OnDemandInstances).ArrayNum) {
      uVar5 = ~param_3 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar2)();
      return pFVar6;
    }
    pFVar1 = (this->OnDemandInstances).AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_48 = 0.0;
    param_3 = 0;
    GetAnimAssetNameAndData
              (this,(uint)(byte)pFVar1[lVar7 * 0x30 + 3],*(uint *)(pFVar1 + lVar7 * 0x30 + 0x14),
               &local_38,&local_48,(float *)&param_3);
    FVar3.Data = local_38.Data.AllocatorInstance.Data;
    ::FString::PrintfImpl(__return_storage_ptr__,L"On Demand [%i] Anim %s [%.2f / %.2f] {%d}");
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e2b0340

UClass * __cdecl UAnimSharingInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSharingInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationSharing",L"AnimSharingInstance",
               &Z_Registration_Info_UClass_UAnimSharingInstance.InnerSingleton,
               StaticRegisterNativesUAnimSharingInstance,0x130,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAnimSharingInstance>,
               InternalVTableHelperCtorCaller<UAnimSharingInstance>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSharingInstance.InnerSingleton;
}

// KickoffInstances @ 14e2b0b60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAnimSharingInstance::KickoffInstances(UAnimSharingInstance *this)

{
  int *piVar1;
  undefined4 uVar2;
  FScriptContainerElement FVar3;
  int iVar4;
  int iVar5;
  FName FVar6;
  undefined8 *puVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  FScriptContainerElement *pFVar11;
  uint *puVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_AnimationSharing_KickoffInstances> FVar17;
  uint uVar18;
  ulonglong uVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  FObjectPtr_u_0 FVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  longlong lVar25;
  uint *puVar26;
  uint uVar27;
  FScriptContainerElement *pFVar28;
  int *piVar29;
  FScriptContainerElement *pFVar30;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_108;
  undefined1 local_107 [7];
  FScriptContainerElement *local_100;
  FColor_u_0 local_f8;
  uint local_f4;
  UObject *local_f0;
  UObject *local_e8;
  FName local_e0;
  FScriptContainerElement *local_d8;
  FName local_d0;
  FString local_c8;
  FName local_b8;
  uint *local_a8;
  UObject *local_a0;
  UObject *local_98;
  UObject *local_90;
  UObject *local_88;
  FString local_80;
  FString local_70;
  FName local_60 [4];
  
  FVar17 = StatPtr_STAT_AnimationSharing_KickoffInstances;
  if (StatPtr_STAT_AnimationSharing_KickoffInstances ==
      (FThreadSafeStaticStat<FStat_STAT_AnimationSharing_KickoffInstances>)0x0) {
    pFVar16 = ::FName::FName(local_60,"STAT_AnimationSharing_KickoffInstances");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_AnimationSharing_KickoffInstances>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimationSharing_KickoffInstances
                        ,*pFVar16,L"KickoffInstances","STATGROUP_AnimationSharing",
                        "STATCAT_Advanced",L"Animation Sharing Manager",true,true,ST_int64,true,
                        false,MCR_Invalid);
  }
  FVar6 = *(FName *)FVar17;
  bVar10 = false;
  bVar9 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  bVar14 = false;
  bVar13 = false;
  if ((FVar6.ComparisonIndex.Value.Value != 0) || (FVar6.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar10 = false;
      bVar9 = true;
      bVar14 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e0.ComparisonIndex.Value = FVar6.ComparisonIndex.Value.Value;
        local_e0.Number = FVar6.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e0,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\AnimationSharing\\Source\\AnimationSharing\\Private\\AnimationSharingManager.cpp"
                   ,0x939);
        bVar10 = true;
        bVar9 = true;
        bVar14 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_d0 = FVar6;
      FThreadStats::AddMessage(FVar6,CycleScopeStart);
      bVar13 = true;
      goto LAB_14e2b0cc0;
    }
  }
  bVar10 = bVar14;
  bVar9 = bVar13;
  bVar13 = false;
  local_d0 = local_b8;
LAB_14e2b0cc0:
  local_f4 = (this->BlendInstances).ArrayNum;
  uVar19 = (ulonglong)(int)local_f4;
  pFVar30 = (this->BlendInstances).AllocatorInstance.Data;
  pFVar24 = pFVar30 + 0x20;
  pFVar28 = pFVar30 + uVar19 * 0x38;
  local_d8 = pFVar28;
  do {
    local_100 = pFVar24;
    if ((this->BlendInstances).ArrayNum != (int)uVar19) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FBlendInstance,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    FVar6 = local_d0;
    pFVar11 = local_100;
    if (pFVar30 == pFVar28) {
      iVar4 = (this->OnDemandInstances).ArrayNum;
      pFVar24 = (this->OnDemandInstances).AllocatorInstance.Data;
      pFVar30 = pFVar24 + (longlong)iVar4 * 0x30;
      while( true ) {
        if ((this->OnDemandInstances).ArrayNum != iVar4) {
          `TCheckedPointerIterator<FOnDemandInstance,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_107);
        }
        if (pFVar24 == pFVar30) break;
        if (*pFVar24 == (FScriptContainerElement)0x0) {
          *pFVar24 = (FScriptContainerElement)0x1;
          *(float *)(pFVar24 + 8) = this->WorldTime;
        }
        pFVar24 = pFVar24 + 0x30;
      }
      if (bVar9) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar13) {
        FThreadStats::AddMessage(FVar6,CycleScopeEnd);
      }
      return;
    }
    if (*pFVar30 == (FScriptContainerElement)0x0) {
      pFVar30[1] = (FScriptContainerElement)0x0;
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
      piVar29 = *(int **)local_100;
      iVar4 = *(int *)(local_100 + 8);
      piVar1 = piVar29 + iVar4;
      while( true ) {
        if (*(int *)(pFVar11 + 8) != iVar4) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        uVar23 = 0;
        uVar15 = 0;
        if (piVar29 == piVar1) break;
        iVar5 = *piVar29;
        uVar21 = *(int *)(pFVar30 + 0x28) - 1;
        if ((int)uVar21 < *(int *)(pFVar30 + 0x28)) {
          uVar23 = ~uVar21 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (iVar5 == *(int *)(*(longlong *)(pFVar30 + 0x20) + -4 +
                             (longlong)*(int *)(pFVar30 + 0x28) * 4)) {
          ::FString::PrintfImpl(&local_70,L"%i");
          uVar23 = local_70.Data.ArrayNum - 1;
          if (local_70.Data.ArrayNum == 0) {
            uVar23 = uVar15;
          }
          ::FString::AppendChars(&local_c8,(wchar_t *)local_70.Data.AllocatorInstance.Data,uVar23);
          FVar20.Data = local_70.Data.AllocatorInstance.Data;
        }
        else {
          ::FString::PrintfImpl(&local_80,L"%i, ");
          uVar23 = local_80.Data.ArrayNum - 1;
          if (local_80.Data.ArrayNum == 0) {
            uVar23 = uVar15;
          }
          ::FString::AppendChars(&local_c8,(wchar_t *)local_80.Data.AllocatorInstance.Data,uVar23);
          FVar20.Data = local_80.Data.AllocatorInstance.Data;
        }
        if (FVar20.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar20.Data);
        }
        piVar29 = piVar29 + 1;
      }
      FVar3 = pFVar30[0xc];
      uVar21 = *(uint *)(pFVar30 + 0x10);
      if (((this->PerStateData).ArrayNum <= (int)(uint)(byte)FVar3) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar27 = *(uint *)(pFVar30 + 0x14);
      uVar18 = *(int *)((this->PerStateData).AllocatorInstance.Data +
                       (ulonglong)(byte)FVar3 * 0xc0 + 0x28) - 1;
      if (uVar18 < uVar21) {
        uVar21 = uVar18;
      }
      *(uint *)(pFVar30 + 0x10) = uVar21;
      FVar3 = pFVar30[0xd];
      if (((this->PerStateData).ArrayNum <= (int)(uint)(byte)FVar3) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar21 = *(int *)((this->PerStateData).AllocatorInstance.Data +
                       (ulonglong)(byte)FVar3 * 0xc0 + 0x28) - 1;
      if (uVar21 < uVar27) {
        uVar27 = uVar21;
      }
      *(uint *)(pFVar30 + 0x14) = uVar27;
      FVar3 = pFVar30[0xc];
      if (((this->PerStateData).ArrayNum <= (int)(uint)(byte)FVar3) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar24 = (this->PerStateData).AllocatorInstance.Data;
      uVar21 = *(uint *)(pFVar30 + 0x10);
      lVar25 = (ulonglong)(byte)FVar3 * 0xc0;
      uVar27 = uVar23;
      if ((int)uVar21 < *(int *)(pFVar24 + lVar25 + 0x28)) {
        uVar27 = ~uVar21 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_e8 = *(UObject **)(*(longlong *)(pFVar24 + lVar25 + 0x20) + (longlong)(int)uVar21 * 8);
      FVar3 = pFVar30[0xd];
      if (((this->PerStateData).ArrayNum <= (int)(uint)(byte)FVar3) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar24 = (this->PerStateData).AllocatorInstance.Data;
      uVar21 = *(uint *)(pFVar30 + 0x14);
      lVar25 = (ulonglong)(byte)FVar3 * 0xc0;
      if ((int)uVar21 < *(int *)(pFVar24 + lVar25 + 0x28)) {
        uVar23 = ~uVar21 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_f0 = *(UObject **)(*(longlong *)(pFVar24 + lVar25 + 0x20) + (longlong)(int)uVar21 * 8);
      FVar3 = pFVar30[0xd];
      if (((this->PerStateData).ArrayNum <= (int)(uint)(byte)FVar3) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (((this->PerStateData).AllocatorInstance.Data[(ulonglong)(byte)FVar3 * 0xc0] !=
           (FScriptContainerElement)0x0) && (*(int *)(pFVar30 + 0x34) != -1)) {
        FVar3 = pFVar30[0xd];
        if (((this->PerStateData).ArrayNum <= (int)(uint)(byte)FVar3) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar23 = *(uint *)(pFVar30 + 0x34);
        pFVar24 = (this->PerStateData).AllocatorInstance.Data;
        lVar25 = (ulonglong)(byte)FVar3 * 0xc0;
        uVar21 = uVar15;
        if ((int)uVar23 < (this->OnDemandInstances).ArrayNum) {
          uVar21 = ~uVar23 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar23 = *(uint *)((this->OnDemandInstances).AllocatorInstance.Data +
                          (longlong)(int)uVar23 * 0x30 + 0x14);
        uVar21 = uVar15;
        if ((int)uVar23 < *(int *)(pFVar24 + lVar25 + 0x28)) {
          uVar21 = ~uVar23 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_f0 = *(UObject **)(*(longlong *)(pFVar24 + lVar25 + 0x20) + (longlong)(int)uVar23 * 8)
        ;
      }
      FVar3 = pFVar30[0xc];
      if (((this->PerStateData).ArrayNum <= (int)(uint)(byte)FVar3) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((this->PerStateData).AllocatorInstance.Data[(ulonglong)(byte)FVar3 * 0xc0] !=
          (FScriptContainerElement)0x0) {
        uVar23 = *(uint *)(pFVar30 + 0x30);
        if (uVar23 != 0xffffffff) {
          uVar21 = uVar15;
          if ((int)uVar23 < (this->OnDemandInstances).ArrayNum) {
            uVar21 = ~uVar23 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar3 = pFVar30[0xc];
          uVar23 = *(uint *)((this->OnDemandInstances).AllocatorInstance.Data +
                            (longlong)(int)uVar23 * 0x30 + 0x14);
          if (((this->PerStateData).ArrayNum <= (int)(uint)(byte)FVar3) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar24 = (this->PerStateData).AllocatorInstance.Data;
          lVar25 = (ulonglong)(byte)FVar3 * 0xc0;
          if ((int)uVar23 < *(int *)(pFVar24 + lVar25 + 0x28)) {
            uVar15 = ~uVar23 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_e8 = *(UObject **)
                      (*(longlong *)(pFVar24 + lVar25 + 0x20) + (longlong)(int)uVar23 * 8);
        }
      }
      puVar26 = *(uint **)(pFVar30 + 0x20);
      iVar4 = *(int *)(pFVar30 + 0x28);
      local_a8 = puVar26 + iVar4;
      while( true ) {
        puVar12 = local_a8;
        if (*(int *)(pFVar30 + 0x28) != iVar4) {
          local_108 = 0;
          `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_108);
        }
        if (puVar26 == puVar12) break;
        uVar23 = *(uint *)(pFVar30 + 0x14);
        uVar15 = *puVar26;
        if ((uVar23 != (uVar23 & 0xff)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IntFitsIn<OutType>(In)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
           bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar21 = 0;
        if ((int)uVar15 < (this->PerActorData).ArrayNum) {
          uVar21 = ~uVar15 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (this->PerActorData).AllocatorInstance.Data[(longlong)(int)uVar15 * 0x48 + 2] =
             SUB41(uVar23,0);
        uVar23 = 0;
        if ((int)uVar15 < (this->PerActorData).ArrayNum) {
          uVar23 = ~uVar15 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        puVar26 = puVar26 + 1;
        (this->PerActorData).AllocatorInstance.Data[(longlong)(int)uVar15 * 0x48 + 3] =
             (FScriptContainerElement)0x1;
      }
      puVar7 = *(undefined8 **)(pFVar30 + 0x18);
      uVar2 = *(undefined4 *)(pFVar30 + 8);
      (**(code **)(*(longlong *)*puVar7 + 0x420))((longlong *)*puVar7,1);
      lVar25 = puVar7[1];
      *(undefined4 *)(puVar7 + 4) = uVar2;
      if (lVar25 != 0) {
        if (*(char *)(lVar25 + 0x43c) == '\0') {
          puVar7[2] = local_f0;
          local_90 = local_f0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f0 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_f0);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar25 + 0x428),(FObjectPtr)&local_90);
          lVar25 = puVar7[1];
          puVar7[3] = local_e8;
          local_88 = local_e8;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e8 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_e8);
          }
          FVar22.Handle = (UObject *)&local_88;
        }
        else {
          puVar7[2] = local_e8;
          local_a0 = local_e8;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e8 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_e8);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar25 + 0x428),(FObjectPtr)&local_a0);
          lVar25 = puVar7[1];
          puVar7[3] = local_f0;
          local_98 = local_f0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f0 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_f0);
          }
          FVar22.Handle = (UObject *)&local_98;
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar25 + 0x430),(FObjectPtr)FVar22);
        *(undefined4 *)(puVar7[1] + 0x438) = uVar2;
        bVar14 = *(char *)(puVar7[1] + 0x43c) == '\0';
        *(bool *)((longlong)puVar7 + 0x24) = bVar14;
        *(bool *)(puVar7[1] + 0x43c) = bVar14;
        (**(code **)(*(longlong *)*puVar7 + 0x4c0))((longlong *)*puVar7,puVar7[2]);
        (**(code **)(*(longlong *)*puVar7 + 0x4c0))((longlong *)*puVar7,puVar7[3]);
      }
      *pFVar30 = (FScriptContainerElement)0x1;
      pFVar24 = local_100;
      pFVar28 = local_d8;
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        pFVar24 = local_100;
        pFVar28 = local_d8;
      }
    }
    uVar19 = (ulonglong)local_f4;
    pFVar30 = pFVar30 + 0x38;
    pFVar24 = pFVar24 + 0x38;
  } while( true );
}

// RemoveAdditiveInstance @ 14e2b2e90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAnimSharingInstance::RemoveAdditiveInstance(UAnimSharingInstance *this,int param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = (uint)~param_1 >> 0x1f;
  uVar8 = 0;
  if (param_1 < (this->AdditiveInstances).ArrayNum) {
    uVar8 = uVar9;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->AdditiveInstances).ArrayNum;
  uVar8 = iVar7 - 1;
  if ((1 < iVar7) && (param_1 != uVar8)) {
    uVar6 = 0;
    if ((int)uVar8 < iVar7) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar8 = *(uint *)((this->AdditiveInstances).AllocatorInstance.Data +
                     (longlong)(int)uVar8 * 0x28 + 8);
    if (uVar8 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar8 < (this->PerActorData).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      *(int *)((this->PerActorData).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x48 + 0x18) =
           param_1;
    }
  }
  uVar8 = 0;
  if (param_1 < (this->AdditiveInstances).ArrayNum) {
    uVar8 = uVar9;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar2 = (this->AdditiveInstances).ArrayNum;
  pFVar3 = (this->AdditiveInstances).AllocatorInstance.Data;
  iVar7 = iVar2 + ~param_1;
  if (1 < iVar7) {
    iVar7 = 1;
  }
  if (iVar7 != 0) {
    memmove(pFVar3 + (longlong)param_1 * 0x28,pFVar3 + (longlong)(iVar2 - iVar7) * 0x28,
            (longlong)iVar7 * 0x28);
  }
  piVar1 = &(this->AdditiveInstances).ArrayNum;
  *piVar1 = *piVar1 + -1;
  return;
}

// RemoveBlendInstance @ 14e2b3240

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAnimSharingInstance::RemoveBlendInstance(UAnimSharingInstance *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 local_res10 [8];
  
  uVar8 = 0;
  if (param_1 < (this->BlendInstances).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = (this->BlendInstances).ArrayNum;
  uVar8 = iVar2 - 1;
  if ((1 < iVar2) && (param_1 != uVar8)) {
    uVar6 = 0;
    if ((int)uVar8 < iVar2) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->BlendInstances).AllocatorInstance.Data;
    puVar9 = *(uint **)(pFVar3 + (longlong)(int)uVar8 * 0x38 + 0x20);
    iVar2 = *(int *)(pFVar3 + (longlong)(int)uVar8 * 0x38 + 0x28);
    puVar1 = puVar9 + iVar2;
    while( true ) {
      if (*(int *)(pFVar3 + (longlong)(int)uVar8 * 0x38 + 0x28) != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (puVar9 == puVar1) break;
      uVar6 = *puVar9;
      uVar7 = 0;
      if ((int)uVar6 < (this->PerActorData).ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar9 = puVar9 + 1;
      *(int *)((this->PerActorData).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x48 + 0x10) =
           param_1;
    }
  }
  uVar8 = 0;
  if (param_1 < (this->BlendInstances).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  TArray<FBlendInstance,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            (&this->BlendInstances,param_1);
  return;
}

// RemoveComponent @ 14e2b3430

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAnimSharingInstance::RemoveComponent(UAnimSharingInstance *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  uint *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  
  iVar10 = (this->PerComponentData).ArrayNum;
  if ((1 < iVar10) && (uVar12 = iVar10 - 1, param_1 != uVar12)) {
    uVar8 = 0;
    if ((int)uVar12 < iVar10) {
      uVar8 = ~uVar12 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar8 = *(uint *)((this->PerComponentData).AllocatorInstance.Data +
                     (longlong)(int)uVar12 * 0xc + 8);
    uVar9 = 0;
    if ((int)uVar8 < (this->PerActorData).ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar2 = (longlong)(int)uVar8 * 0x48;
    pFVar4 = (this->PerActorData).AllocatorInstance.Data;
    puVar5 = *(uint **)(pFVar4 + lVar2 + 0x20);
    for (puVar11 = puVar5; puVar11 != puVar5 + *(int *)(pFVar4 + lVar2 + 0x28);
        puVar11 = puVar11 + 1) {
      if (*puVar11 == uVar12) {
        uVar12 = (uint)((longlong)puVar11 - (longlong)puVar5 >> 2);
        if (uVar12 != 0xffffffff) {
          uVar9 = 0;
          if ((int)uVar8 < (this->PerActorData).ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar4 = (this->PerActorData).AllocatorInstance.Data;
          uVar8 = 0;
          if ((int)uVar12 < *(int *)(pFVar4 + lVar2 + 0x28)) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(int *)(*(longlong *)(pFVar4 + lVar2 + 0x20) + (longlong)(int)uVar12 * 4) = param_1;
        }
        break;
      }
    }
  }
  uVar12 = 0;
  if (param_1 < (this->PerComponentData).ArrayNum) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar3 = (this->PerComponentData).ArrayNum;
  pFVar4 = (this->PerComponentData).AllocatorInstance.Data;
  iVar10 = iVar3 + ~param_1;
  if (1 < iVar10) {
    iVar10 = 1;
  }
  if (iVar10 != 0) {
    memmove(pFVar4 + (longlong)param_1 * 0xc,pFVar4 + (longlong)(iVar3 - iVar10) * 0xc,
            (longlong)iVar10 * 0xc);
  }
  piVar1 = &(this->PerComponentData).ArrayNum;
  *piVar1 = *piVar1 + -1;
  return;
}

// RemoveFromCurrentBlend @ 14e2b36c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAnimSharingInstance::RemoveFromCurrentBlend(UAnimSharingInstance *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint local_res10 [2];
  
  uVar9 = (uint)~param_1 >> 0x1f;
  uVar7 = 0;
  if (param_1 < (this->PerActorData).ArrayNum) {
    uVar7 = uVar9;
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
  lVar1 = (longlong)param_1 * 0x48;
  if ((this->PerActorData).AllocatorInstance.Data[lVar1 + 3] != (FScriptContainerElement)0x0) {
    uVar7 = 0;
    if (param_1 < (this->PerActorData).ArrayNum) {
      uVar7 = uVar9;
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
    if (*(int *)((this->PerActorData).AllocatorInstance.Data + lVar1 + 0x10) != -1) {
      uVar7 = 0;
      if (param_1 < (this->PerActorData).ArrayNum) {
        uVar7 = uVar9;
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
      iVar2 = *(int *)((this->PerActorData).AllocatorInstance.Data + lVar1 + 0x10);
      if ((-1 < iVar2) && (iVar2 < (this->BlendInstances).ArrayNum)) {
        uVar7 = 0;
        if (param_1 < (this->PerActorData).ArrayNum) {
          uVar7 = uVar9;
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
        uVar7 = *(uint *)((this->PerActorData).AllocatorInstance.Data + lVar1 + 0x10);
        uVar8 = 0;
        if ((int)uVar7 < (this->BlendInstances).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if (uVar8 == 0) {
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
        pFVar3 = (this->BlendInstances).AllocatorInstance.Data;
        lVar4 = *(longlong *)(pFVar3 + (longlong)(int)uVar7 * 0x38 + 0x18);
        lVar10 = 0x18;
        if (*(char *)(lVar4 + 0x24) != '\0') {
          lVar10 = 0x10;
        }
        SetLeaderComponentForActor(this,param_1,*(USkeletalMeshComponent **)(lVar10 + lVar4));
        local_res10[0] = param_1;
        TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Remove
                  ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
                   (pFVar3 + (longlong)(int)uVar7 * 0x38 + 0x20),local_res10);
        uVar7 = 0;
        if (param_1 < (this->PerActorData).ArrayNum) {
          uVar7 = uVar9;
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
        *(undefined4 *)((this->PerActorData).AllocatorInstance.Data + lVar1 + 0x10) = 0xffffffff;
      }
    }
  }
  return;
}

// RemoveFromCurrentOnDemand @ 14e2b3930

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
UAnimSharingInstance::RemoveFromCurrentOnDemand(UAnimSharingInstance *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint local_res10 [2];
  
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar5 = 0;
  if (param_1 < (this->PerActorData).ArrayNum) {
    uVar5 = uVar6;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar1 = (longlong)param_1 * 0x48;
  if ((this->PerActorData).AllocatorInstance.Data[lVar1 + 4] != (FScriptContainerElement)0x0) {
    uVar5 = 0;
    if (param_1 < (this->PerActorData).ArrayNum) {
      uVar5 = uVar6;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)((this->PerActorData).AllocatorInstance.Data + lVar1 + 0x14) != -1) {
      uVar5 = 0;
      if (param_1 < (this->PerActorData).ArrayNum) {
        uVar5 = uVar6;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar2 = *(int *)((this->PerActorData).AllocatorInstance.Data + lVar1 + 0x14);
      if ((-1 < iVar2) && (iVar2 < (this->OnDemandInstances).ArrayNum)) {
        uVar5 = 0;
        if (param_1 < (this->PerActorData).ArrayNum) {
          uVar5 = uVar6;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        uVar5 = *(uint *)((this->PerActorData).AllocatorInstance.Data + lVar1 + 0x14);
        uVar6 = 0;
        if ((int)uVar5 < (this->OnDemandInstances).ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        local_res10[0] = param_1;
        TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Remove
                  ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
                   ((this->OnDemandInstances).AllocatorInstance.Data +
                   (longlong)(int)uVar5 * 0x30 + 0x20),local_res10);
      }
    }
  }
  return;
}

// RemoveOnDemandInstance @ 14e2b3b30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAnimSharingInstance::RemoveOnDemandInstance(UAnimSharingInstance *this,int param_1)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20;
  
  uVar11 = (uint)~param_1 >> 0x1f;
  uVar9 = 0;
  if (param_1 < (this->OnDemandInstances).ArrayNum) {
    uVar9 = uVar11;
  }
  local_res20 = uVar11;
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
  iVar3 = (this->OnDemandInstances).ArrayNum;
  uVar9 = iVar3 - 1;
  if ((1 < iVar3) && (param_1 != uVar9)) {
    uVar11 = 0;
    if ((int)uVar9 < iVar3) {
      uVar11 = ~uVar9 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar7 = (this->OnDemandInstances).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x30 + 0x20;
    local_res18 = *(uint *)(pFVar7 + 8);
    uVar8 = (ulonglong)(int)local_res18;
    puVar12 = *(uint **)pFVar7;
    puVar1 = puVar12 + uVar8;
    while( true ) {
      if (*(int *)(pFVar7 + 8) != (int)uVar8) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      uVar11 = local_res20;
      if (puVar12 == puVar1) break;
      uVar11 = *puVar12;
      uVar10 = ~uVar11 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar11 < (this->PerActorData).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = (longlong)(int)uVar11 * 0x48;
      if (*(int *)((this->PerActorData).AllocatorInstance.Data + lVar2 + 0x14) == param_1) {
LAB_14e2b3d42:
        uVar6 = 0;
        if ((int)uVar11 < (this->PerActorData).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(int *)((this->PerActorData).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x48 + 0x14)
             = param_1;
      }
      else {
        uVar6 = 0;
        if ((int)uVar11 < (this->PerActorData).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(uint *)((this->PerActorData).AllocatorInstance.Data + lVar2 + 0x14) == uVar9)
        goto LAB_14e2b3d42;
      }
      puVar12 = puVar12 + 1;
      uVar8 = (ulonglong)local_res18;
    }
  }
  uVar9 = 0;
  if (param_1 < (this->OnDemandInstances).ArrayNum) {
    uVar9 = uVar11;
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
  TArray<FOnDemandInstance,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            (&this->OnDemandInstances,param_1);
  return;
}

// SetComponentTick @ 14e2b4a00

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
UAnimSharingInstance::SetComponentTick(UAnimSharingInstance *this,uchar param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  
  if ((this->PerStateData).ArrayNum <= (int)(uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((-1 < (int)param_2) &&
     ((int)param_2 <
      *(int *)((this->PerStateData).AllocatorInstance.Data + (ulonglong)param_1 * 0xc0 + 0x88))) {
    if ((this->PerStateData).ArrayNum <= (int)(uint)param_1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = (this->PerStateData).AllocatorInstance.Data + (ulonglong)param_1 * 0xc0 + 0x70;
    if (*(int *)(pFVar4 + 0x18) <= (int)param_2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar3 = *(FScriptContainerElement **)(pFVar4 + 0x10);
    if (*(FScriptContainerElement **)(pFVar4 + 0x10) == (FScriptContainerElement *)0x0) {
      pFVar3 = pFVar4;
    }
    *(uint *)(pFVar3 + (ulonglong)(param_2 >> 5) * 4) =
         *(uint *)(pFVar3 + (ulonglong)(param_2 >> 5) * 4) | 1 << ((byte)param_2 & 0x1f);
  }
  return;
}

// SetComponentUsage @ 14e2b4b40

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
UAnimSharingInstance::SetComponentUsage
          (UAnimSharingInstance *this,bool param_1,uchar param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  
  uVar5 = (uint)param_2;
  if ((int)uVar5 < (this->PerStateData).ArrayNum) {
    if (((this->PerStateData).ArrayNum <= (int)uVar5) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((-1 < (int)param_3) &&
       ((int)param_3 <
        *(int *)((this->PerStateData).AllocatorInstance.Data + (ulonglong)param_2 * 0xc0 + 0x48))) {
      if (((this->PerStateData).ArrayNum <= (int)uVar5) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar6 = (this->PerStateData).AllocatorInstance.Data + (ulonglong)param_2 * 0xc0 + 0x30;
      if ((*(int *)(pFVar6 + 0x18) <= (int)param_3) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar4 = *(FScriptContainerElement **)(pFVar6 + 0x10);
      if (*(FScriptContainerElement **)(pFVar6 + 0x10) == (FScriptContainerElement *)0x0) {
        pFVar4 = pFVar6;
      }
      uVar3 = 1 << ((byte)param_3 & 0x1f);
      uVar5 = *(uint *)(pFVar4 + (ulonglong)(param_3 >> 5) * 4);
      if (param_1) {
        uVar3 = uVar3 | uVar5;
      }
      else {
        uVar3 = ~uVar3 & uVar5;
      }
      *(uint *)(pFVar4 + (ulonglong)(param_3 >> 5) * 4) = uVar3;
    }
  }
  return;
}

// SetLeaderComponentForActor @ 14e2b4cb0

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
UAnimSharingInstance::SetLeaderComponentForActor
          (UAnimSharingInstance *this,uint param_1,USkeletalMeshComponent *param_2)

{
  uint *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  USkeletalMeshComponent *this_00;
  uint uVar8;
  undefined4 in_register_00000014;
  longlong lVar9;
  uint *puVar10;
  USkeletalMeshComponent *local_res8;
  undefined1 local_res10 [8];
  
  lVar9 = (longlong)(int)param_1;
  if (param_2 != (USkeletalMeshComponent *)0x0) {
    (**(code **)(param_2->_padding_ + 0x420))
              (param_2,CONCAT71((int7)(CONCAT44(in_register_00000014,param_1) >> 8),1));
  }
  uVar8 = 0;
  if ((int)param_1 < (this->PerActorData).ArrayNum) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (this->PerActorData).AllocatorInstance.Data;
  if (pFVar3[lVar9 * 0x48 + 5] != (FScriptContainerElement)0x0) {
    uVar8 = *(uint *)(pFVar3 + lVar9 * 0x48 + 0x18);
    if ((-1 < (int)uVar8) && ((int)uVar8 < (this->AdditiveInstances).ArrayNum)) {
      uVar7 = 0;
      if ((int)uVar8 < (this->AdditiveInstances).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((USkeletalMeshComponent *)
          **(longlong **)
            ((this->AdditiveInstances).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x28 + 0x18)
          != param_2) {
        uVar8 = *(uint *)(pFVar3 + lVar9 * 0x48 + 0x18);
        uVar7 = 0;
        if ((int)uVar8 < (this->AdditiveInstances).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
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
        *(USkeletalMeshComponent **)
         ((this->AdditiveInstances).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x28 + 0x10) =
             param_2;
        uVar8 = *(uint *)(pFVar3 + lVar9 * 0x48 + 0x18);
        uVar7 = 0;
        if ((int)uVar8 < (this->AdditiveInstances).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
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
        puVar4 = *(undefined8 **)
                  ((this->AdditiveInstances).AllocatorInstance.Data +
                  (longlong)(int)uVar8 * 0x28 + 0x18);
        if (puVar4[1] == 0) {
          return;
        }
        (**(code **)(*(longlong *)*puVar4 + 0x4d0))((longlong *)*puVar4,puVar4[3]);
        lVar9 = puVar4[1];
        puVar4[3] = param_2;
        local_res8 = param_2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_2 != (USkeletalMeshComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_2);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar9 + 0x428),(FObjectPtr)&local_res8);
                    /* WARNING: Could not recover jumptable at 0x00014e2b4ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(longlong *)*puVar4 + 0x4c0))((longlong *)*puVar4,puVar4[3]);
        return;
      }
    }
  }
  puVar10 = *(uint **)(pFVar3 + lVar9 * 0x48 + 0x20);
  iVar2 = *(int *)(pFVar3 + lVar9 * 0x48 + 0x28);
  puVar1 = puVar10 + iVar2;
  while( true ) {
    if (*(int *)(pFVar3 + lVar9 * 0x48 + 0x28) != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (puVar10 == puVar1) {
      return;
    }
    uVar8 = *puVar10;
    uVar7 = 0;
    if ((int)uVar8 < (this->PerComponentData).ArrayNum) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    this_00 = GetComponent(this,(FPerComponentData *)
                                ((this->PerComponentData).AllocatorInstance.Data +
                                (longlong)(int)uVar8 * 0xc));
    if (this_00 != (USkeletalMeshComponent *)0x0) {
      USkinnedMeshComponent::SetLeaderPoseComponent
                ((USkinnedMeshComponent *)this_00,(USkinnedMeshComponent *)param_2,true,false);
    }
    puVar10 = puVar10 + 1;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// SetPermutationFollowerComponent @ 14e2b5180

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
UAnimSharingInstance::SetPermutationFollowerComponent
          (UAnimSharingInstance *this,uchar param_1,uint param_2,uint param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if ((this->PerStateData).ArrayNum <= (int)(uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->PerStateData).AllocatorInstance.Data;
  uVar4 = *(int *)(pFVar1 + (ulonglong)param_1 * 0xc0 + 0x28) - 1;
  if (uVar4 < param_3) {
    param_3 = uVar4;
  }
  uVar4 = 0;
  if ((int)param_3 < *(int *)(pFVar1 + (ulonglong)param_1 * 0xc0 + 0x28)) {
    uVar4 = ~param_3 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SetLeaderComponentForActor
            (this,param_2,
             *(USkeletalMeshComponent **)
              (*(longlong *)(pFVar1 + (ulonglong)param_1 * 0xc0 + 0x20) + (longlong)(int)param_3 * 8
              ));
  if (param_3 != (param_3 & 0xff)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = 0;
  if ((int)param_2 < (this->PerActorData).ArrayNum) {
    uVar4 = ~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->PerActorData).AllocatorInstance.Data[(longlong)(int)param_2 * 0x48 + 2] = SUB41(param_3,0);
  uVar4 = 0;
  if ((int)param_3 < *(int *)(pFVar1 + (ulonglong)param_1 * 0xc0 + 0x28)) {
    uVar4 = ~param_3 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// Setup @ 14e2b55c0

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

bool __thiscall
UAnimSharingInstance::Setup
          (UAnimSharingInstance *this,UAnimationSharingManager *param_1,
          FPerSkeletonAnimationSharingSetup *param_2,FAnimationSharingScalability *param_3,
          uint param_4)

{
  undefined1 *puVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement FVar4;
  byte bVar5;
  int iVar6;
  USkeletalMesh *pUVar7;
  UAnimationSharingStateProcessor *pUVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined3 uVar11;
  FPerPlatformFloat FVar12;
  FPerPlatformInt FVar13;
  FPerPlatformFloat FVar14;
  FAnimationStateEntry *pFVar15;
  bool bVar16;
  undefined1 uVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  UClass *pUVar21;
  UClass *pUVar22;
  longlong lVar23;
  UEnum *pUVar24;
  UWorld *this_00;
  FActorSpawnParameters *pFVar25;
  AActor *pAVar26;
  USignificanceManager *pUVar27;
  FText *pFVar28;
  USkeletalMeshComponent *this_01;
  TQuat<double> *pTVar29;
  FTransitionBlendInstance *this_02;
  longlong *plVar30;
  ulonglong uVar31;
  FScriptContainerElement *pFVar32;
  TRefCountPtr<ITextData> TVar33;
  FScriptContainerElement *pFVar34;
  ForAnyElementType FVar35;
  uint uVar36;
  FAnimationStateEntry *pFVar37;
  FPerStateData *pFVar38;
  uint uVar39;
  FPerSkeletonAnimationSharingSetup *pFVar40;
  double dVar41;
  undefined1 auStackY_298 [32];
  undefined1 local_256 [6];
  FPerSkeletonAnimationSharingSetup *local_250;
  uint local_248;
  FAnimationStateEntry *local_240;
  USkeletalMesh *local_238;
  FString local_230;
  ulonglong local_220;
  FAnimationStateEntry *local_218;
  FName local_210;
  FName local_208;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FText local_1d0;
  FText local_1c0;
  TRotator<double> local_1b0;
  TVector<double>_u_0 local_198 [2];
  double local_168;
  TQuat<double> local_158;
  undefined1 local_138 [64];
  undefined1 local_f8 [112];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pUVar21 = (param_2->StateProcessorClass).Class.field0_0x0.DebugPtr;
  pUVar7 = (param_2->SkeletalMesh).field0_0x0.DebugPtr;
  local_250 = param_2;
  local_238 = pUVar7;
  if (pUVar21 == (UClass *)0x0) goto LAB_14e2b56e7;
  if ((pUVar21->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar21);
  }
  pUVar8 = (UAnimationSharingStateProcessor *)(pUVar21->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar8 == (UAnimationSharingStateProcessor *)0x0) {
LAB_14e2b5653:
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Result && Result->IsA(T::StaticClass())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                        ,0x93,L"");
    if (bVar16) {
      pcVar9 = (code *)swi(3);
      uVar17 = (*pcVar9)();
      return (bool)uVar17;
    }
    if (pUVar8 == (UAnimationSharingStateProcessor *)0x0) goto LAB_14e2b56e7;
  }
  else {
    pUVar21 = UAnimationSharingStateProcessor::StaticClass();
    iVar6 = (int)pUVar21->_padding_;
    if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar6 * 8)
        != &pUVar21->_padding_)) goto LAB_14e2b5653;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this->StateProcessor).field0_0x0.DebugPtr = pUVar8;
  pUVar21 = (param_2->StateProcessorClass).Class.field0_0x0.DebugPtr;
  if ((pUVar21 == (UClass *)0x0) ||
     (pUVar22 = UAnimationSharingStateProcessor::StaticClass(), pUVar22 == (UClass *)0x0)) {
LAB_14e2b56d3:
    pUVar21 = (UClass *)0x0;
  }
  else {
    iVar6 = (int)pUVar22->_padding_;
    if (((int)pUVar21->_padding_ < iVar6) ||
       ((longlong *)*(undefined1 **)(pUVar21->_padding_ + (longlong)iVar6 * 8) !=
        &pUVar22->_padding_)) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    if (!bVar16) goto LAB_14e2b56d3;
    pUVar21 = (param_2->StateProcessorClass).Class.field0_0x0.DebugPtr;
  }
  this->bNativeStateProcessor = (bool)((byte)(pUVar21->ClassFlags >> 7) & 1);
LAB_14e2b56e7:
  bVar16 = false;
  if ((pUVar7 == (USkeletalMesh *)0x0) ||
     ((this->StateProcessor).field0_0x0.DebugPtr == (UAnimationSharingStateProcessor *)0x0)) {
    if (1 < (byte)LogAnimationSharing._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
    }
    bVar16 = true;
  }
  else {
    this->SkeletonID = param_4;
    lVar23 = (**(code **)(pUVar7->_padding_ + 0x3e0))(pUVar7,local_138);
    pUVar8 = (this->StateProcessor).field0_0x0.DebugPtr;
    dVar41 = *(double *)(lVar23 + 0x20) + *(double *)(lVar23 + 0x20);
    local_168 = *(double *)(lVar23 + 0x28) + *(double *)(lVar23 + 0x28);
    auVar10._8_4_ = SUB84(dVar41,0);
    auVar10._0_8_ = *(double *)(lVar23 + 0x18) + *(double *)(lVar23 + 0x18);
    auVar10._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    *(undefined1 (*) [16])&(this->SkeletalMeshBounds).field0_0x0 = auVar10;
    (this->SkeletalMeshBounds).field0_0x0._s_0.Z = local_168;
    uVar11 = *(undefined3 *)&param_3->field_0x1;
    FVar12.Default = (param_3->BlendSignificanceValue).Default;
    FVar13.Default = (param_3->MaximumNumberConcurrentBlends).Default;
    FVar14.Default = (param_3->TickSignificanceValue).Default;
    (this->ScalabilitySettings).UseBlendTransitions =
         (FPerPlatformBool)(param_3->UseBlendTransitions).Default;
    *(undefined3 *)&(this->ScalabilitySettings).field_0x1 = uVar11;
    (this->ScalabilitySettings).BlendSignificanceValue = (FPerPlatformFloat)FVar12.Default;
    (this->ScalabilitySettings).MaximumNumberConcurrentBlends = (FPerPlatformInt)FVar13.Default;
    (this->ScalabilitySettings).TickSignificanceValue = (FPerPlatformFloat)FVar14.Default;
    pUVar24 = UAnimationSharingStateProcessor::GetAnimationStateEnum(pUVar8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar24);
    }
    (this->StateEnum).field0_0x0.DebugPtr = pUVar24;
    iVar6 = (pUVar24->Names).NumValues;
    iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0xc0,8,iVar6,&(this->PerStateData).AllocatorInstance,
                        &(this->PerStateData).ArrayNum,&(this->PerStateData).ArrayMax);
    DefaultConstructItems<FPerStateData,int>
              ((this->PerStateData).AllocatorInstance.Data + (longlong)iVar19 * 0xc0,iVar6);
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    pFVar25 = FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_f8);
    pUVar21 = Z_Construct_UClass_AActor_NoRegister();
    pAVar26 = UWorld::SpawnActor(this_00,pUVar21,(TVector<double> *)0x0,(TRotator<double> *)0x0,
                                 pFVar25);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar26 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar26);
    }
    (this->SharingActor).field0_0x0.DebugPtr = pAVar26;
    if (local_f8._64_8_ != 0) {
      plVar30 = (longlong *)(local_f8 + 0x50);
      if ((longlong *)local_f8._104_8_ != (longlong *)0x0) {
        plVar30 = (longlong *)local_f8._104_8_;
      }
      (**(code **)(*plVar30 + 0x10))();
    }
    ((this->SharingActor).field0_0x0.DebugPtr)->bReplayRewindable = '\x01';
    pUVar27 = USignificanceManager::Get(this_00);
    this->AnimSharingManager = param_1;
    this->SignificanceManager = pUVar27;
    this->NumSetups = 0;
    local_248 = (local_250->AnimationStates).ArrayNum;
    uVar31 = (ulonglong)(int)local_248;
    pFVar37 = (FAnimationStateEntry *)(local_250->AnimationStates).AllocatorInstance.Data;
    local_218 = pFVar37 + uVar31;
    while( true ) {
      pFVar15 = local_218;
      pFVar40 = local_250;
      local_240 = pFVar37;
      if ((local_250->AnimationStates).ArrayNum != (int)uVar31) {
        local_256[0] = 0;
        `TCheckedPointerIterator<FAnimationStateEntry_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_256);
      }
      if (pFVar37 == pFVar15) break;
      FVar4 = (FScriptContainerElement)pFVar37->State;
      local_220 = (ulonglong)(byte)FVar4;
      uVar36 = 0;
      pUVar24 = (this->StateEnum).field0_0x0.DebugPtr;
      if (0 < (pUVar24->Names).NumValues) {
        lVar23 = 0;
        do {
          if ((((int)uVar36 < 0) || ((pUVar24->Names).NumValues <= (int)uVar36)) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                  ,0xd78,L""), bVar18)) {
            pcVar9 = (code *)swi(3);
            uVar17 = (*pcVar9)();
            return (bool)uVar17;
          }
          iVar6 = (pUVar24->Names).NumValues;
          if ((iVar6 < 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar18)) {
            pcVar9 = (code *)swi(3);
            uVar17 = (*pcVar9)();
            return (bool)uVar17;
          }
          uVar20 = 0;
          if ((int)uVar36 < iVar6) {
            uVar20 = ~uVar36 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar18)) {
            pcVar9 = (code *)swi(3);
            uVar17 = (*pcVar9)();
            return (bool)uVar17;
          }
          uVar31 = (pUVar24->Names).TaggedValues;
          iVar6 = (pUVar24->Names).NumValues;
          if ((iVar6 < 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar18)) {
            pcVar9 = (code *)swi(3);
            uVar17 = (*pcVar9)();
            return (bool)uVar17;
          }
          uVar20 = 0;
          if ((int)uVar36 < iVar6) {
            uVar20 = ~uVar36 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar18)) {
            pcVar9 = (code *)swi(3);
            uVar17 = (*pcVar9)();
            return (bool)uVar17;
          }
          if (*(ulonglong *)((uVar31 & 0xfffffffffffffffe) + lVar23) == local_220)
          goto LAB_14e2b5a1e;
          uVar36 = uVar36 + 1;
          lVar23 = lVar23 + 8;
        } while ((int)uVar36 < (pUVar24->Names).NumValues);
      }
      uVar36 = 0xffffffff;
LAB_14e2b5a1e:
      pFVar32 = (this->PerStateData).AllocatorInstance.Data;
      pFVar34 = pFVar32 + (longlong)(this->PerStateData).ArrayNum * 0xc0;
      if (pFVar32 != pFVar34) {
        do {
          if (pFVar32[0x11] == FVar4) {
            if ((byte)LogAnimationSharing._0_1_ < 2) goto LAB_14e2b5aac;
            pFVar28 = UEnum::GetDisplayNameTextByValue
                                ((this->StateEnum).field0_0x0.DebugPtr,&local_1d0,
                                 (ulonglong)(byte)FVar4);
            FText::ToString(pFVar28);
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
            TVar33.Reference = local_1d0.TextData.Reference;
            goto LAB_14e2b5aa1;
          }
          pFVar32 = pFVar32 + 0xc0;
        } while (pFVar32 != pFVar34);
      }
      uVar20 = 0;
      if ((int)uVar36 < (this->PerStateData).ArrayNum) {
        uVar20 = ~uVar36 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar9 = (code *)swi(3);
        uVar17 = (*pcVar9)();
        return (bool)uVar17;
      }
      pFVar38 = (FPerStateData *)
                ((this->PerStateData).AllocatorInstance.Data + (longlong)(int)uVar36 * 0xc0);
      pFVar38->StateEnumValue = (uchar)FVar4;
      SetupState(this,pFVar38,local_240,local_238,local_250,this->SkeletonID);
      if ((pFVar38->Components).ArrayNum == 0) {
        if (1 < (byte)LogAnimationSharing._0_1_) {
          pFVar28 = UEnum::GetDisplayNameTextByValue
                              ((this->StateEnum).field0_0x0.DebugPtr,&local_1c0,
                               (ulonglong)(byte)FVar4);
          FText::ToString(pFVar28);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
          TVar33.Reference = local_1c0.TextData.Reference;
LAB_14e2b5aa1:
          if (TVar33.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*TVar33.Reference + 0x10))();
          }
        }
LAB_14e2b5aac:
        bVar16 = true;
      }
      pFVar37 = local_240 + 1;
      uVar31 = (ulonglong)local_248;
    }
    if (bVar16) {
      DestructItems<FPerStateData,int>
                ((FPerStateData *)(this->PerStateData).AllocatorInstance.Data,
                 (this->PerStateData).ArrayNum);
      (this->PerStateData).ArrayNum = 0;
      if ((this->PerStateData).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc0,8,0,&(this->PerStateData).AllocatorInstance,0,&(this->PerStateData).ArrayMax
                  );
      }
    }
    else if ((this->ScalabilitySettings).UseBlendTransitions.Default != false) {
      uVar36 = this->SkeletonID;
      dVar41 = (this->SkeletalMeshBounds).field0_0x0._s_0.Z;
      uVar39 = 0;
      uVar20 = (this->ScalabilitySettings).MaximumNumberConcurrentBlends.Default;
      if (uVar20 != 0) {
        do {
          local_230.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          dVar2 = (this->SkeletalMeshBounds).field0_0x0._s_0.Z;
          local_230.Data.ArrayNum = 0;
          local_230.Data.ArrayMax = 0;
          dVar3 = (this->SkeletalMeshBounds).field0_0x0._s_0.X;
          ::FString::AppendInt(&local_230,uVar39);
          pUVar7 = local_238;
          local_210 = (FName)local_238->_padding_;
          ::FName::ToString(&local_210,&local_1e0);
          ::FString::ConcatFC(&local_1f0,&local_1e0,L"_BlendComponent");
          ::FString::ConcatFF(&local_200,&local_1f0,&local_230);
          FVar35.Data = (FScriptContainerElement *)L"";
          if (local_200.Data.ArrayNum != 0) {
            FVar35.Data = local_200.Data.AllocatorInstance.Data;
          }
          ::FName::FName(&local_208,(wchar_t *)FVar35.Data);
          if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_200.Data.AllocatorInstance.Data);
          }
          if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
          }
          if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          }
          if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_230.Data.AllocatorInstance.Data);
          }
          this_01 = NewObject<USkeletalMeshComponent>
                              ((UObject *)(this->SharingActor).field0_0x0.DebugPtr,local_208,
                               RF_NoFlags,(UObject *)0x0,false,(FObjectInstancingGraph *)0x0,
                               (UPackage *)0x0);
          UActorComponent::RegisterComponent((UActorComponent *)this_01);
          local_1b0.Pitch = (double)this_01->_padding_;
          local_1b0.Yaw = (double)this_01->_padding_;
          local_1b0.Roll = (double)this_01->_padding_;
          pTVar29 = FRotationConversionCache::RotatorToQuat
                              ((FRotationConversionCache *)&this_01->_padding_,&local_158,&local_1b0
                              );
          local_198[0]._s_0.Y = 0.0;
          local_198[0]._0_8_ = (double)uVar39 * dVar3;
          local_198[0]._16_8_ = (double)(float)((double)uVar36 * (dVar41 + dVar41)) + dVar2;
          USceneComponent::SetRelativeLocationAndRotation
                    ((USceneComponent *)this_01,(TVector<double> *)&local_198[0]._s_0,pTVar29,false,
                     (FHitResult *)0x0,None);
          (**(code **)(this_01->_padding_ + 0xb48))(this_01,pUVar7,1);
          USceneComponent::SetVisibility
                    ((USceneComponent *)this_01,GLeaderComponentsVisible == 1,DirtyOnly);
          bVar5 = (byte)this_01->_padding_;
          *(byte *)&this_01->_padding_ =
               (bVar5 ^ pFVar40->bEnableMaterialParameterCaching) & 1 ^ bVar5;
          FTickFunction::AddPrerequisite
                    ((FTickFunction *)&this_01->_padding_,(UObject *)this->AnimSharingManager,
                     (FTickFunction *)&this->AnimSharingManager->TickFunction);
          this_02 = ::operator_new(0x28);
          if (this_02 == (FTransitionBlendInstance *)0x0) {
            this_02 = (FTransitionBlendInstance *)0x0;
          }
          else {
            this_02->SkeletalMeshComponent = (USkeletalMeshComponent *)0x0;
            this_02->TransitionInstance = (UAnimSharingTransitionInstance *)0x0;
            this_02->FromComponent = (USkeletalMeshComponent *)0x0;
            this_02->ToComponent = (USkeletalMeshComponent *)0x0;
            this_02->BlendTime = 0.0;
            this_02->bBlendState = false;
          }
          pUVar21 = (pFVar40->BlendAnimBlueprint).Class.field0_0x0.DebugPtr;
          if ((pUVar21 == (UClass *)0x0) ||
             (pUVar22 = UAnimSharingTransitionInstance::StaticClass(), pUVar22 == (UClass *)0x0)) {
LAB_14e2b5ea7:
            pUVar21 = (UClass *)0x0;
          }
          else {
            iVar6 = (int)pUVar22->_padding_;
            if (((int)pUVar21->_padding_ < iVar6) ||
               ((longlong *)*(undefined1 **)(pUVar21->_padding_ + (longlong)iVar6 * 8) !=
                &pUVar22->_padding_)) {
              bVar18 = false;
            }
            else {
              bVar18 = true;
            }
            if (!bVar18) goto LAB_14e2b5ea7;
            pUVar21 = (local_250->BlendAnimBlueprint).Class.field0_0x0.DebugPtr;
          }
          pFVar40 = local_250;
          FTransitionBlendInstance::Initialise(this_02,this_01,pUVar21);
          FInstanceStack<FTransitionBlendInstance>::AddInstance(&this->BlendInstanceStack,this_02);
          uVar39 = uVar39 + 1;
        } while (uVar39 < uVar20);
      }
    }
  }
  return !bVar16;
}

// SetupAdditiveInstance @ 14e2b5f50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall
UAnimSharingInstance::SetupAdditiveInstance
          (UAnimSharingInstance *this,uchar param_1,uchar param_2,uchar param_3)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  code *pcVar9;
  longlong *plVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  longlong *plVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  float fVar20;
  longlong *local_68;
  UObject *local_60;
  UObject *local_58 [4];
  
  if (((this->PerStateData).ArrayNum <= (int)(uint)param_1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return uVar12;
  }
  pFVar4 = (this->PerStateData).AllocatorInstance.Data;
  lVar19 = (ulonglong)param_1 * 0xc0;
  if (*(int *)(pFVar4 + lVar19 + 0xa8) == 0) {
    return 0xffffffff;
  }
  if ((*(int *)(pFVar4 + lVar19 + 0xa8) < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return uVar12;
  }
  pFVar18 = pFVar4 + lVar19 + 0xb0;
  local_68 = *(longlong **)
              (*(longlong *)(pFVar4 + lVar19 + 0xa0) + -8 +
              (longlong)*(int *)(pFVar4 + lVar19 + 0xa8) * 8);
  *(int *)(pFVar4 + lVar19 + 0xa8) = *(int *)(pFVar4 + lVar19 + 0xa8) + -1;
  if (((*(longlong ***)&pFVar18->field_0x0 <= &local_68) &&
      (&local_68 < *(longlong ***)&pFVar18->field_0x0 + *(int *)(pFVar18 + 0xc))) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return uVar12;
  }
  iVar13 = *(int *)&pFVar18[8].field_0x0;
  if (iVar13 == *(int *)(pFVar18 + 0xc)) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)pFVar18,(int *)(pFVar18 + 0xc));
  }
  plVar10 = local_68;
  piVar1 = &(this->AdditiveInstances).ArrayMax;
  *(int *)&pFVar18[8].field_0x0 = iVar13 + 1;
  *(longlong **)(*(longlong *)&pFVar18->field_0x0 + (longlong)iVar13 * 8) = local_68;
  iVar13 = (this->AdditiveInstances).ArrayNum;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&(this->AdditiveInstances).AllocatorInstance,piVar1);
  }
  pFVar18 = (this->AdditiveInstances).AllocatorInstance.Data;
  (this->AdditiveInstances).ArrayNum = iVar13 + 1;
  lVar14 = (longlong)iVar13;
  pFVar18[lVar14 * 0x28] = (FScriptContainerElement)0x0;
  *(longlong **)(pFVar18 + lVar14 * 0x28 + 0x18) = plVar10;
  if (((this->PerStateData).ArrayNum <= (int)(uint)param_2) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return uVar12;
  }
  pFVar5 = (this->PerStateData).AllocatorInstance.Data;
  if ((*(int *)(pFVar5 + (ulonglong)param_2 * 0xc0 + 0x28) <= (int)(uint)param_3) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return uVar12;
  }
  *(undefined8 *)(pFVar18 + lVar14 * 0x28 + 0x10) =
       *(undefined8 *)
        (*(longlong *)(pFVar5 + (ulonglong)param_2 * 0xc0 + 0x20) + (ulonglong)param_3 * 8);
  lVar15 = (**(code **)(this->_padding_ + 0x180))(this);
  dVar2 = *(double *)(lVar15 + 0x8f8);
  fVar20 = (float)(**(code **)(**(longlong **)(pFVar4 + lVar19 + 0x18) + 0x2c0))();
  pFVar18[lVar14 * 0x28 + 1] = (FScriptContainerElement)param_1;
  *(float *)(pFVar18 + lVar14 * 0x28 + 4) = fVar20 + (float)dVar2;
  if (((this->PerStateData).ArrayNum <= (int)(uint)param_1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return uVar12;
  }
  pFVar5 = (this->PerStateData).AllocatorInstance.Data;
  plVar6 = *(longlong **)(pFVar5 + lVar19 + 0x20);
  iVar13 = *(int *)(pFVar5 + lVar19 + 0x28);
  plVar17 = plVar6;
  do {
    if (plVar17 == plVar6 + iVar13) {
      uVar16 = 0xffffffff;
LAB_14e2b627d:
      *(undefined4 *)(pFVar18 + lVar14 * 0x28 + 0x20) = uVar16;
      pUVar7 = *(UObject **)(pFVar4 + lVar19 + 0x18);
      iVar3 = (this->AdditiveInstances).ArrayNum;
      pUVar8 = *(UObject **)(pFVar18 + lVar14 * 0x28 + 0x10);
      (**(code **)(*(longlong *)*plVar10 + 0x420))
                ((longlong *)*plVar10,CONCAT71((int7)((ulonglong)(plVar6 + iVar13) >> 8),1));
      lVar19 = plVar10[1];
      if (lVar19 != 0) {
        plVar10[3] = (longlong)pUVar8;
        local_60 = pUVar8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar8);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar19 + 0x428),(FObjectPtr)&local_60);
        lVar19 = plVar10[1];
        plVar10[2] = (longlong)pUVar7;
        local_58[0] = pUVar7;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar19 + 0x430),(FObjectPtr)local_58);
        *(undefined4 *)(plVar10[1] + 0x438) = 0x3f800000;
        *(undefined1 *)(plVar10 + 4) = 1;
        *(undefined1 *)(plVar10[1] + 0x43c) = 1;
        (**(code **)(*(longlong *)*plVar10 + 0x4c0))((longlong *)*plVar10,plVar10[3]);
      }
      SetComponentUsage(this,true,(uchar)pFVar18[lVar14 * 0x28 + 1],
                        *(uint *)(pFVar18 + lVar14 * 0x28 + 0x20));
      SetComponentTick(this,(uchar)pFVar18[lVar14 * 0x28 + 1],
                       *(uint *)(pFVar18 + lVar14 * 0x28 + 0x20));
      return iVar3 - 1;
    }
    if (*plVar17 == *plVar10) {
      uVar16 = (undefined4)((longlong)plVar17 - (longlong)plVar6 >> 3);
      goto LAB_14e2b627d;
    }
    plVar17 = plVar17 + 1;
  } while( true );
}

// SetupBlend @ 14e2b63c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall
UAnimSharingInstance::SetupBlend
          (UAnimSharingInstance *this,uchar param_1,uchar param_2,uint param_3)

{
  int *piVar1;
  TArray<FBlendInstance,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement FVar3;
  FBlendInstance *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  FBlendInstance *pFVar13;
  FScriptContainerElement *pFVar14;
  float fVar15;
  uint local_res20 [2];
  undefined8 *local_68 [2];
  UAnimSharingInstance *local_58;
  uchar uStack_50;
  uchar uStack_4f;
  FScriptContainerElement FStack_4e;
  undefined1 uStack_4d;
  uint uStack_4c;
  UAnimSharingInstance *local_48;
  undefined8 uStack_40;
  
  iVar10 = (this->BlendInstanceStack).AvailableInstances.ArrayNum;
  local_res20[0] = param_3;
  if (((this->PerStateData).ArrayNum <= (int)(uint)param_2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return uVar8;
  }
  FVar3 = (this->PerStateData).AllocatorInstance.Data[(ulonglong)param_2 * 0xc0];
  if (iVar10 == 0) {
    return 0xffffffff;
  }
  pTVar2 = &this->BlendInstances;
  pFVar4 = (FBlendInstance *)(pTVar2->AllocatorInstance).Data;
  iVar10 = (this->BlendInstances).ArrayNum;
  uStack_40 = CONCAT44(local_res20[0],CONCAT13(uStack_4d,CONCAT12(FVar3,CONCAT11(param_2,param_1))))
  ;
  FStack_4e = FVar3;
  pFVar13 = pFVar4;
  local_58 = this;
  local_48 = this;
  uStack_50 = param_1;
  uStack_4f = param_2;
  uStack_4c = local_res20[0];
  do {
    if (pFVar13 == pFVar4 + iVar10) {
LAB_14e2b654f:
      iVar10 = (this->BlendInstances).ArrayNum;
      piVar1 = &(this->BlendInstances).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->BlendInstances).ArrayNum = iVar10 + 1;
      pFVar14 = (pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x38;
      DefaultConstructItems<FBlendInstance,int>(pFVar14,1);
      iVar10 = (this->BlendInstances).ArrayNum;
      pFVar14[0xc] = (FScriptContainerElement)param_1;
      uVar8 = iVar10 - 1;
      *pFVar14 = (FScriptContainerElement)0x0;
      *(undefined8 *)(pFVar14 + 0x30) = 0xffffffffffffffff;
      pFVar14[0xd] = (FScriptContainerElement)param_2;
      fVar15 = CalculateBlendTime(this,param_2);
      *(float *)(pFVar14 + 8) = fVar15;
      pFVar14[2] = FVar3;
      lVar12 = (**(code **)(this->_padding_ + 0x180))(this);
      local_68[0] = (undefined8 *)0x0;
      *(float *)(pFVar14 + 4) = (float)*(double *)(lVar12 + 0x8f8) + *(float *)(pFVar14 + 8);
      iVar10 = (this->BlendInstanceStack).AvailableInstances.ArrayNum;
      if (iVar10 != 0) {
        if ((iVar10 < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return uVar8;
        }
        iVar10 = (this->BlendInstanceStack).AvailableInstances.ArrayNum;
        local_68[0] = *(undefined8 **)
                       ((this->BlendInstanceStack).AvailableInstances.AllocatorInstance.Data +
                       (longlong)iVar10 * 8 + -8);
        (this->BlendInstanceStack).AvailableInstances.ArrayNum = iVar10 + -1;
        pFVar5 = (this->BlendInstanceStack).InUseInstances.AllocatorInstance.Data;
        if (((pFVar5 <= (FScriptContainerElement *)local_68) &&
            ((FScriptContainerElement *)local_68 <
             pFVar5 + (longlong)(this->BlendInstanceStack).InUseInstances.ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return uVar8;
        }
        iVar10 = (this->BlendInstanceStack).InUseInstances.ArrayNum;
        piVar1 = &(this->BlendInstanceStack).InUseInstances.ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->BlendInstanceStack).InUseInstances.AllocatorInstance,
                              piVar1);
        }
        (this->BlendInstanceStack).InUseInstances.ArrayNum = iVar10 + 1;
        *(undefined8 **)
         ((this->BlendInstanceStack).InUseInstances.AllocatorInstance.Data + (longlong)iVar10 * 8) =
             local_68[0];
      }
      *(undefined8 **)(pFVar14 + 0x18) = local_68[0];
      (**(code **)(*(longlong *)*local_68[0] + 0x420))((longlong *)*local_68[0],1);
      lVar12 = (longlong)(int)local_res20[0];
      uVar9 = 0;
      if ((int)local_res20[0] < (this->PerActorData).ArrayNum) {
        uVar9 = ~local_res20[0] >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return uVar8;
      }
      *(uint *)(pFVar14 + 0x10) =
           (uint)(byte)(this->PerActorData).AllocatorInstance.Data[lVar12 * 0x48 + 2];
      uVar11 = (**(code **)(this->_padding_ + 0x2b0))(this,local_res20[0],(ulonglong)param_2);
      *(undefined4 *)(pFVar14 + 0x14) = uVar11;
      if ((pFVar14 == (FScriptContainerElement *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("BlendInstance",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\AnimationSharing\\Source\\AnimationSharing\\Private\\AnimationSharingManager.cpp"
                             ,0x87c,L"Unable to create blendcontainer"), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return uVar8;
      }
LAB_14e2b67aa:
      if (((*(uint **)(pFVar14 + 0x20) <= local_res20) &&
          (local_res20 < *(uint **)(pFVar14 + 0x20) + *(int *)(pFVar14 + 0x2c))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return uVar8;
      }
      iVar10 = *(int *)(pFVar14 + 0x28);
      if (iVar10 == *(int *)(pFVar14 + 0x2c)) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)(pFVar14 + 0x20),(int *)(pFVar14 + 0x2c));
      }
      *(int *)(pFVar14 + 0x28) = iVar10 + 1;
                    /* WARNING: Load size is inaccurate */
      *(uint *)(pFVar14[0x20] + (longlong)iVar10 * 4) = local_res20[0];
      lVar12 = (longlong)(int)local_res20[0];
      uVar9 = 0;
      if ((int)local_res20[0] < (this->PerActorData).ArrayNum) {
        uVar9 = ~local_res20[0] >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return uVar8;
      }
      (this->PerActorData).AllocatorInstance.Data[lVar12 * 0x48 + 3] = (FScriptContainerElement)0x1;
      return uVar8;
    }
    bVar7 = `UAnimSharingInstance::SetupBlend'::__l5::<lambda_1>::operator()(&local_48,pFVar13);
    if (bVar7) {
      uVar8 = (uint)(((longlong)pFVar13 - (longlong)pFVar4) / 0x38);
      if (uVar8 != 0xffffffff) {
        uVar9 = 0;
        if ((int)uVar8 < (this->BlendInstances).ArrayNum) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return uVar8;
        }
        pFVar14 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x38;
        if (pFVar14 != (FScriptContainerElement *)0x0) goto LAB_14e2b67aa;
      }
      goto LAB_14e2b654f;
    }
    pFVar13 = pFVar13 + 1;
  } while( true );
}

// SetupBlendBetweenOnDemands @ 14e2b6900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall
UAnimSharingInstance::SetupBlendBetweenOnDemands
          (UAnimSharingInstance *this,uchar param_1,uint param_2,uint param_3)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  if ((this->OnDemandInstances).ArrayNum <= (int)(uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  FVar1 = (this->OnDemandInstances).AllocatorInstance.Data[(ulonglong)param_1 * 0x30 + 3];
  uVar4 = 0;
  if ((int)param_2 < (this->OnDemandInstances).ArrayNum) {
    uVar4 = ~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  uVar4 = SetupBlend(this,(uchar)FVar1,
                     (uchar)(this->OnDemandInstances).AllocatorInstance.Data
                            [(longlong)(int)param_2 * 0x30 + 3],param_3);
  if (uVar4 != 0xffffffff) {
    uVar5 = 0;
    if ((int)uVar4 < (this->BlendInstances).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
    *(uint *)((this->BlendInstances).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x38 + 0x30) =
         (uint)param_1;
    uVar5 = 0;
    if ((int)uVar4 < (this->BlendInstances).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
    *(uint *)((this->BlendInstances).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x38 + 0x34) =
         param_2;
  }
  return uVar4;
}

// SetupBlendFromOnDemand @ 14e2b6ad0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall
UAnimSharingInstance::SetupBlendFromOnDemand
          (UAnimSharingInstance *this,uchar param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  if ((int)param_2 < (this->OnDemandInstances).ArrayNum) {
    uVar3 = ~param_2 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar3 = SetupBlend(this,(uchar)(this->OnDemandInstances).AllocatorInstance.Data
                                 [(longlong)(int)param_2 * 0x30 + 3],param_1,param_3);
  if (uVar3 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar3 < (this->BlendInstances).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
    *(uint *)((this->BlendInstances).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x38 + 0x30) =
         param_2;
  }
  return uVar3;
}

// SetupBlendToOnDemand @ 14e2b6bf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall
UAnimSharingInstance::SetupBlendToOnDemand
          (UAnimSharingInstance *this,uchar param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  if ((int)param_2 < (this->OnDemandInstances).ArrayNum) {
    uVar3 = ~param_2 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar3 = SetupBlend(this,param_1,
                     (uchar)(this->OnDemandInstances).AllocatorInstance.Data
                            [(longlong)(int)param_2 * 0x30 + 3],param_3);
  if (uVar3 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar3 < (this->BlendInstances).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
    *(uint *)((this->BlendInstances).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x38 + 0x34) =
         param_2;
  }
  return uVar3;
}

// SetupFollowerComponent @ 14e2b6d10

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
UAnimSharingInstance::SetupFollowerComponent(UAnimSharingInstance *this,uchar param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FText *this_00;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  uint local_res18 [2];
  FText local_38;
  
  local_res18[0] = param_2;
  if (((this->PerStateData).ArrayNum <= (int)(uint)param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar7 = (this->PerStateData).AllocatorInstance.Data + (ulonglong)param_1 * 0xc0;
  if (*(int *)(pFVar7 + 0x28) == 0) {
    if (2 < (byte)LogAnimationSharing._0_1_) {
      this_00 = UEnum::GetDisplayNameTextByValue
                          ((this->StateEnum).field0_0x0.DebugPtr,&local_38,(ulonglong)param_1);
      FText::ToString(this_00);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
        return;
      }
    }
  }
  else {
    if (*pFVar7 == (FScriptContainerElement)0x0) {
      uVar3 = (**(code **)(this->_padding_ + 0x2b0))(this,local_res18[0],param_1);
      SetPermutationFollowerComponent(this,param_1,local_res18[0],uVar3);
      return;
    }
    uVar3 = SetupOnDemandInstance(this,param_1);
    if (uVar3 != 0xffffffff) {
      uVar4 = 0;
      if ((int)uVar3 < (this->OnDemandInstances).ArrayNum) {
        uVar4 = ~uVar3 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar8 = (longlong)(int)uVar3 * 0x30;
      uVar4 = *(uint *)((this->OnDemandInstances).AllocatorInstance.Data + lVar8 + 0x14);
      uVar5 = 0;
      if ((int)uVar4 < *(int *)(pFVar7 + 0x28)) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      SetLeaderComponentForActor
                (this,local_res18[0],
                 *(USkeletalMeshComponent **)
                  (*(longlong *)(pFVar7 + 0x20) + (longlong)(int)uVar4 * 8));
      uVar4 = 0;
      if ((int)uVar3 < (this->OnDemandInstances).ArrayNum) {
        uVar4 = ~uVar3 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar7 = (this->OnDemandInstances).AllocatorInstance.Data;
      if (((*(uint **)(pFVar7 + lVar8 + 0x20) <= local_res18) &&
          (local_res18 < *(uint **)(pFVar7 + lVar8 + 0x20) + *(int *)(pFVar7 + lVar8 + 0x2c))) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar6 = *(int *)(pFVar7 + lVar8 + 0x28);
      if (iVar6 == *(int *)(pFVar7 + lVar8 + 0x2c)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)(pFVar7 + lVar8 + 0x20),
                           (int *)(pFVar7 + lVar8 + 0x2c));
      }
      *(int *)(pFVar7 + lVar8 + 0x28) = iVar6 + 1;
      *(uint *)(*(longlong *)(pFVar7 + lVar8 + 0x20) + (longlong)iVar6 * 4) = local_res18[0];
      lVar8 = (longlong)(int)local_res18[0];
      uVar4 = 0;
      if ((int)local_res18[0] < (this->PerActorData).ArrayNum) {
        uVar4 = ~local_res18[0] >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(uint *)((this->PerActorData).AllocatorInstance.Data + lVar8 * 0x48 + 0x14) = uVar3;
      lVar8 = (longlong)(int)local_res18[0];
      uVar3 = 0;
      if ((int)local_res18[0] < (this->PerActorData).ArrayNum) {
        uVar3 = ~local_res18[0] >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (this->PerActorData).AllocatorInstance.Data[lVar8 * 0x48 + 4] = (FScriptContainerElement)0x1;
      lVar8 = (longlong)(int)local_res18[0];
      uVar3 = 0;
      if ((int)local_res18[0] < (this->PerActorData).ArrayNum) {
        uVar3 = ~local_res18[0] >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (this->PerActorData).AllocatorInstance.Data[lVar8 * 0x48 + 2] = (FScriptContainerElement)0x0;
    }
  }
  return;
}

// SetupOnDemandInstance @ 14e2b7150

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall
UAnimSharingInstance::SetupOnDemandInstance(UAnimSharingInstance *this,uchar param_1)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  USkeletalMeshComponent *this_00;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement FVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if (((this->PerStateData).ArrayNum <= (int)(uint)param_1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return uVar8;
  }
  pFVar4 = (this->PerStateData).AllocatorInstance.Data;
  lVar14 = (ulonglong)param_1 * 0xc0;
  piVar1 = &(this->OnDemandInstances).ArrayNum;
  uVar8 = *(uint *)(pFVar4 + lVar14 + 8);
  if (((uVar8 == 0xffffffff) || ((int)uVar8 < 0)) || (*piVar1 <= (int)uVar8)) {
    if (*(int *)(pFVar4 + lVar14 + 0x28) == 0) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar9 = TBitArray<FDefaultBitArrayAllocator>::FindAndSetFirstZeroBit
                        ((TBitArray<FDefaultBitArrayAllocator> *)(pFVar4 + lVar14 + 0x30),0);
      if (uVar9 == 0xffffffff) {
        if (((this->PerStateData).ArrayNum <= (int)(uint)param_1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return uVar8;
        }
        fVar16 = this->WorldTime;
        uVar8 = 0xffffffff;
        fVar17 = *(float *)((this->PerStateData).AllocatorInstance.Data +
                           (ulonglong)param_1 * 0xc0 + 0xc);
        uVar9 = 0;
        if (0 < *piVar1) {
          lVar14 = 0;
          fVar18 = __real_7f7fffff;
          fVar20 = __real_7f7fffff;
          uVar11 = 0xffffffff;
          do {
            uVar12 = 0;
            if ((int)uVar9 < (this->OnDemandInstances).ArrayNum) {
              uVar12 = ~uVar9 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return uVar8;
            }
            pFVar4 = (this->OnDemandInstances).AllocatorInstance.Data;
            fVar19 = fVar18;
            uVar12 = uVar11;
            if ((pFVar4[lVar14 + 3] == (FScriptContainerElement)param_1) &&
               (((fVar2 = *(float *)(pFVar4 + lVar14 + 8), fVar16 - fVar17 < fVar2 ||
                 (fVar19 = fVar2, uVar12 = uVar9, fVar18 <= fVar2)) &&
                (fVar19 = fVar18, uVar12 = uVar11, fVar2 < fVar20)))) {
              fVar20 = fVar2;
              uVar8 = uVar9;
            }
            uVar9 = uVar9 + 1;
            lVar14 = lVar14 + 0x30;
            fVar18 = fVar19;
            uVar11 = uVar12;
          } while ((int)uVar9 < *piVar1);
          if (uVar12 != 0xffffffff) {
            return uVar12;
          }
          if (uVar8 != 0xffffffff) {
            return uVar8;
          }
        }
        if (2 < (byte)LogAnimationSharing._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
        }
        uVar8 = 0xffffffff;
      }
      else {
        iVar10 = (this->OnDemandInstances).ArrayNum;
        piVar1 = &(this->OnDemandInstances).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&(this->OnDemandInstances).AllocatorInstance,piVar1);
        }
        pFVar15 = (this->OnDemandInstances).AllocatorInstance.Data;
        (this->OnDemandInstances).ArrayNum = iVar10 + 1;
        pFVar15 = pFVar15 + (longlong)iVar10 * 0x30;
        DefaultConstructItems<FOnDemandInstance,int>(pFVar15,1);
        uVar8 = (this->OnDemandInstances).ArrayNum - 1;
        *(uint *)(pFVar4 + lVar14 + 8) = uVar8;
        *(undefined2 *)pFVar15 = 0;
        pFVar15[3] = (FScriptContainerElement)param_1;
        if (pFVar4[lVar14 + 3] == (FScriptContainerElement)0x0) {
          FVar7 = (FScriptContainerElement)0xff;
        }
        else {
          FVar7 = pFVar4[lVar14 + 0x10];
        }
        pFVar15[4] = FVar7;
        *(uint *)(pFVar15 + 0x14) = uVar9;
        pFVar15[2] = pFVar4[lVar14 + 2];
        *(undefined4 *)(pFVar15 + 8) = 0;
        *(undefined4 *)(pFVar15 + 0x18) = 0xffffffff;
        lVar13 = (**(code **)(this->_padding_ + 0x180))(this);
        dVar3 = *(double *)(lVar13 + 0x8f8);
        uVar11 = 0;
        if ((int)uVar9 < *(int *)(pFVar4 + lVar14 + 0x98)) {
          uVar11 = ~uVar9 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return uVar8;
        }
        fVar17 = (float)dVar3 +
                 *(float *)(*(longlong *)(pFVar4 + lVar14 + 0x90) + (longlong)(int)uVar9 * 4);
        *(float *)(pFVar15 + 0x10) = fVar17;
        fVar16 = CalculateBlendTime(this,param_1);
        *(float *)(pFVar15 + 0xc) = fVar17 - fVar16;
        uVar11 = 0;
        if ((int)uVar9 < *(int *)(pFVar4 + lVar14 + 0x28)) {
          uVar11 = ~uVar9 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return uVar8;
        }
        this_00 = *(USkeletalMeshComponent **)
                   (*(longlong *)(pFVar4 + lVar14 + 0x20) + (longlong)(int)uVar9 * 8);
        (**(code **)(this_00->_padding_ + 0x420))(this_00);
        USkeletalMeshComponent::SetPosition(this_00,0.0,false);
        USkeletalMeshComponent::Play(this_00,false);
      }
    }
  }
  return uVar8;
}

// SetupState @ 14e2b7c70

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
UAnimSharingInstance::SetupState
          (UAnimSharingInstance *this,FPerStateData *param_1,FAnimationStateEntry *param_2,
          USkeletalMesh *param_3,FPerSkeletonAnimationSharingSetup *param_4,uint param_5)

{
  TArray<USkeletalMeshComponent_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  uint *puVar4;
  TArray<TObjectPtr<UAnimSequence>,TSizedDefaultAllocator<32>_> *pTVar5;
  double dVar6;
  byte bVar7;
  UAnimSequence *pUVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  UEnum *pUVar11;
  code *pcVar12;
  double dVar13;
  float fVar14;
  USkeletalMesh *pUVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  UClass *pUVar19;
  FString *pFVar20;
  TQuat<double> *pTVar21;
  UAnimInstance *this_00;
  FAdditiveAnimationInstance *this_01;
  UClass *pUVar22;
  USkeletalMeshComponent *pUVar23;
  ForElementType<unsigned_int> FVar24;
  ForAnyElementType FVar25;
  int iVar26;
  FScriptContainerElement *pFVar27;
  int iVar28;
  int *piVar29;
  FAnimationStateEntry *pFVar30;
  UAnimationAsset *pUVar31;
  uint uVar32;
  longlong lVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FAnimationStateEntry *local_res18;
  USkeletalMesh *local_res20;
  USkeletalMeshComponent *local_308;
  USkeletalMeshComponent *local_300;
  uint local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  ForAnyElementType local_2e8;
  undefined8 local_2e0;
  uint local_2d8;
  uint local_2d0;
  uint local_2c8;
  UAnimSequence *local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FName local_278;
  FName local_270;
  FName local_268;
  FName local_260;
  FName local_258;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  TRotator<double> local_190;
  TVector<double>_u_0 local_178;
  TRotator<double> local_158;
  TVector<double>_u_0 local_138 [2];
  double local_108;
  TQuat<double> local_f8;
  TQuat<double> local_d8 [4];
  
  dVar6 = (this->SkeletalMeshBounds).field0_0x0._s_0.Z;
  uVar32 = this->SkeletonID;
  local_2f8 = 0;
  param_1->bIsOnDemand = param_2->bOnDemand;
  param_1->bIsAdditive = param_2->bAdditive;
  fVar36 = (float)((dVar6 + dVar6) * (double)uVar32);
  local_res18 = param_2;
  local_res20 = param_3;
  if ((param_2->bAdditive == false) || ((param_2->AnimationSetups).ArrayNum < 1)) {
    param_1->AdditiveAnimationSequence = (UAnimSequence *)0x0;
  }
  else {
    pUVar8 = *(UAnimSequence **)(param_2->AnimationSetups).AllocatorInstance.Data;
    param_1->AdditiveAnimationSequence = pUVar8;
    if (pUVar8 != (UAnimSequence *)0x0) {
      pTVar5 = &this->UsedAnimationSequences;
      local_2c0 = pUVar8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      pFVar9 = (pTVar5->AllocatorInstance).Data;
      if (((pFVar9 <= (FScriptContainerElement *)&local_2c0) &&
          ((FScriptContainerElement *)&local_2c0 <
           pFVar9 + (longlong)(this->UsedAnimationSequences).ArrayMax * 8)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar17 = (this->UsedAnimationSequences).ArrayNum;
      piVar29 = &(this->UsedAnimationSequences).ArrayMax;
      if (iVar17 == *piVar29) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar5->AllocatorInstance,piVar29);
      }
      (this->UsedAnimationSequences).ArrayNum = iVar17 + 1;
      *(UAnimSequence **)((pTVar5->AllocatorInstance).Data + (longlong)iVar17 * 8) = local_2c0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_2c0 != (UAnimSequence *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_2c0);
      }
    }
  }
  iVar28 = 0;
  param_1->BlendTime = local_res18->BlendTime;
  param_1->bReturnToPreviousState = local_res18->bReturnToPreviousState;
  param_1->bShouldForwardToState = local_res18->bSetNextState;
  param_1->ForwardStateValue = local_res18->NextState;
  iVar17 = (local_res18->AnimationSetups).ArrayNum;
  pFVar27 = (local_res18->AnimationSetups).AllocatorInstance.Data;
  iVar26 = (local_res18->MaximumNumberOfConcurrentInstances).Default;
  pFVar9 = pFVar27 + (longlong)iVar17 * 0x18;
  pFVar30 = local_res18;
  while( true ) {
    if ((pFVar30->AnimationSetups).ArrayNum != iVar17) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FAnimationSetup_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
      pFVar30 = local_res18;
    }
    if (pFVar27 == pFVar9) break;
    iVar28 = iVar28 + (uint)(pFVar27[0x14] != (FScriptContainerElement)0x0);
    pFVar27 = pFVar27 + 0x18;
  }
  if (iVar28 < 1) {
    local_2c8 = 0;
  }
  else {
    fVar35 = (float)iVar26 / (float)iVar28;
    local_2c8 = -((int)ROUND(__real_bf000000 - (fVar35 + fVar35)) >> 1);
  }
  (**(code **)(this->_padding_ + 0x180))(this);
  fVar14 = __real_3f800000;
  fVar35 = __real_3f666666;
  pTVar1 = &param_1->Components;
  local_2d8 = 0;
  if (0 < (local_res18->AnimationSetups).ArrayNum) {
    local_2b0 = 0;
    do {
      lVar33 = local_2b0;
      pFVar30 = local_res18;
      uVar32 = 0;
      if ((int)local_2d8 < (local_res18->AnimationSetups).ArrayNum) {
        uVar32 = ~local_2d8 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar9 = (pFVar30->AnimationSetups).AllocatorInstance.Data;
      lVar10 = *(longlong *)(pFVar9 + lVar33 + 8);
      if ((lVar10 == 0) ||
         (pUVar19 = UAnimSharingStateInstance::StaticClass(), pUVar19 == (UClass *)0x0)) {
LAB_14e2b7fe2:
        pUVar31 = *(UAnimationAsset **)(pFVar9 + lVar33);
        local_2b8 = 0;
LAB_14e2b7fec:
        if (pUVar31 != (UAnimationAsset *)0x0) goto LAB_14e2b7faa;
        if (1 < (byte)LogAnimationSharing._0_1_) {
          pUVar11 = (this->StateEnum).field0_0x0.DebugPtr;
          uVar32 = local_2f8;
          if (pUVar11 != (UEnum *)0x0) {
            local_278 = (FName)pUVar11->_padding_;
            uVar32 = local_2f8 | 1;
            local_2f8 = uVar32;
            ::FName::ToString(&local_278,&local_250);
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
          if (((uVar32 & 1) != 0) &&
             (local_2f8 = uVar32 & 0xfffffffe,
             local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_250.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        iVar17 = (int)pUVar19->_padding_;
        if ((*(int *)(lVar10 + 0x38) < iVar17) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar17 * 8) !=
            &pUVar19->_padding_)) {
          bVar16 = false;
        }
        else {
          bVar16 = true;
        }
        if (!bVar16) goto LAB_14e2b7fe2;
        local_2b8 = *(longlong *)(pFVar9 + lVar33 + 8);
        pUVar31 = *(UAnimationAsset **)(pFVar9 + lVar33);
        if (local_2b8 == 0) goto LAB_14e2b7fec;
LAB_14e2b7faa:
        if ((pFVar9[lVar33 + 0x14] != (FScriptContainerElement)0x0) &&
           ((local_2b8 != 0 || (pUVar31 != (UAnimationAsset *)0x0)))) {
          local_2d0 = local_2c8;
          if ((local_res18->bOnDemand == false) &&
             (local_2d0 = 1, 1 < (int)*(uint *)(pFVar9 + lVar33 + 0x10))) {
            local_2d0 = *(uint *)(pFVar9 + lVar33 + 0x10);
          }
          uVar32 = 0;
          lVar33 = local_2b0;
          if (local_2d0 != 0) {
            uVar18 = this->NumSetups;
            do {
              pFVar30 = local_res18;
              dVar6 = (double)fVar36;
              if (param_1->bIsAdditive == false) {
                local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_2a8.Data.ArrayNum = 0;
                local_2a8.Data.ArrayMax = 0;
                ::FString::AppendInt(&local_2a8,uVar32);
                local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_288.Data.ArrayNum = 0;
                local_288.Data.ArrayMax = 0;
                ::FString::AppendInt(&local_288,local_2d8);
                pFVar20 = UEnum::GetNameStringByIndex
                                    ((this->StateEnum).field0_0x0.DebugPtr,&local_1b0,
                                     (uint)pFVar30->State);
                local_270 = (FName)local_res20->_padding_;
                ::FName::ToString(&local_270,&local_1f0);
                ::FString::ConcatFC(&local_200,&local_1f0,L"_");
                ::FString::ConcatFF(&local_210,&local_200,pFVar20);
                ::FString::ConcatFF(&local_220,&local_210,&local_288);
                ::FString::ConcatFF(&local_240,&local_220,&local_2a8);
                FVar25.Data = (FScriptContainerElement *)L"";
                if (local_240.Data.ArrayNum != 0) {
                  FVar25.Data = local_240.Data.AllocatorInstance.Data;
                }
                ::FName::FName(&local_268,(wchar_t *)FVar25.Data);
                if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_240.Data.AllocatorInstance.Data);
                }
                if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_220.Data.AllocatorInstance.Data);
                }
                if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_210.Data.AllocatorInstance.Data);
                }
                if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_200.Data.AllocatorInstance.Data);
                }
                if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
                }
                if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
                }
                if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_288.Data.AllocatorInstance.Data);
                }
                if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
                }
                local_308 = NewObject<USkeletalMeshComponent>
                                      ((UObject *)(this->SharingActor).field0_0x0.DebugPtr,local_268
                                       ,RF_NoFlags,(UObject *)0x0,false,
                                       (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
                UActorComponent::RegisterComponent((UActorComponent *)local_308);
                pUVar23 = local_308;
                uVar18 = this->NumSetups;
                dVar13 = (double)fVar36;
                local_190.Pitch = (double)local_308->_padding_;
                local_190.Yaw = (double)local_308->_padding_;
                local_190.Roll = (double)local_308->_padding_;
                dVar6 = (this->SkeletalMeshBounds).field0_0x0._s_0.X;
                pTVar21 = FRotationConversionCache::RotatorToQuat
                                    ((FRotationConversionCache *)&local_308->_padding_,&local_f8,
                                     &local_190);
                local_178._s_0.Y = 0.0;
                local_178._s_0.X = (double)uVar18 * dVar6;
                local_178._s_0.Z = dVar13;
                local_108 = dVar13;
                USceneComponent::SetRelativeLocationAndRotation
                          ((USceneComponent *)pUVar23,(TVector<double> *)&local_178._s_0,pTVar21,
                           false,(FHitResult *)0x0,None);
                (**(code **)(local_308->_padding_ + 0xb48))(local_308,local_res20,1);
                *(undefined1 *)((longlong)&local_308->_padding_ + 4) = 0;
                USkinnedMeshComponent::SetForcedLOD((USkinnedMeshComponent *)local_308,1);
                USceneComponent::SetVisibility
                          ((USceneComponent *)local_308,GLeaderComponentsVisible == 1,DirtyOnly);
                pFVar30 = local_res18;
                local_308->field_0xada =
                     (local_308->bPropagateCurvesToFollowers ^ local_res18->bRequiresCurves) & 1 ^
                     local_308->field_0xada;
                bVar7 = (byte)local_308->_padding_;
                *(byte *)&local_308->_padding_ =
                     (bVar7 ^ param_4->bEnableMaterialParameterCaching) & 1 ^ bVar7;
                if (pUVar31 != (UAnimationAsset *)0x0) {
                  if ((local_2b8 == 0) || (local_res18->bOnDemand != false)) {
                    USkeletalMeshComponent::PlayAnimation(local_308,pUVar31,true);
                    if (param_1->bIsOnDemand == false) {
                      if (uVar32 != 0) {
                        fVar34 = (float)(**(code **)(pUVar31->_padding_ + 0x2c0))(pUVar31);
                        USkeletalMeshComponent::SetPosition
                                  (local_308,fVar34 * fVar35 * ((float)uVar32 / (float)local_2d0),
                                   false);
                      }
                    }
                    else {
                      USkeletalMeshComponent::Stop(local_308);
                    }
                    pTVar3 = &param_1->AnimationLengths;
                    local_2f0 = (**(code **)(pUVar31->_padding_ + 0x2c0))(pUVar31);
                    pFVar9 = (pTVar3->AllocatorInstance).Data;
                    if (((pFVar9 <= (FScriptContainerElement *)&local_2f0) &&
                        ((FScriptContainerElement *)&local_2f0 <
                         pFVar9 + (longlong)(param_1->AnimationLengths).ArrayMax * 4)) &&
                       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar16)) {
                      pcVar12 = (code *)swi(3);
                      (*pcVar12)();
                      return;
                    }
                    iVar17 = (param_1->AnimationLengths).ArrayNum;
                    piVar29 = &(param_1->AnimationLengths).ArrayMax;
                    if (iVar17 == *piVar29) {
                      iVar17 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,&pTVar3->AllocatorInstance,piVar29);
                    }
                    (param_1->AnimationLengths).ArrayNum = iVar17 + 1;
                    *(undefined4 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar17 * 4) =
                         local_2f0;
                  }
                  else {
                    (**(code **)(local_308->_padding_ + 0xc70))();
                    this_00 = USkeletalMeshComponent::GetAnimInstance(local_308);
                    if (this_00 != (UAnimInstance *)0x0) {
                      pUVar19 = UAnimSharingStateInstance::StaticClass();
                      iVar17 = (int)pUVar19->_padding_;
                      if ((iVar17 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
                         ((longlong *)
                          *(undefined1 **)
                           (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) +
                           (longlong)iVar17 * 8) == &pUVar19->_padding_)) {
                        if (UE::GC::GIsIncrementalReachabilityPending != false) {
                          UE::GC::MarkAsReachable((UObject *)pUVar31);
                        }
                        *(UAnimationAsset **)&this_00->field_0x428 = pUVar31;
                        if (uVar32 != 0) {
                          fVar34 = (float)(**(code **)(pUVar31->_padding_ + 0x2c0))(pUVar31);
                          *(float *)(this_00 + 1) =
                               fVar34 * fVar35 * ((float)uVar32 / (float)local_2d0);
                        }
                        fVar34 = fVar14;
                        if (param_1->bIsOnDemand != false) {
                          fVar34 = 0.0;
                        }
                        *(float *)&this_00[1].field_0x4 = fVar34;
                        if (UE::GC::GIsIncrementalReachabilityPending != false) {
                          UE::GC::MarkAsReachable((UObject *)this);
                        }
                        *(UAnimSharingInstance **)&this_00[1].field_0x10 = this;
                        this_00[1].field_0x9 = pFVar30->State;
                        uVar18 = (param_1->Components).ArrayNum;
                        if (((uVar18 != (uVar18 & 0xff)) || ((int)uVar18 < 0)) &&
                           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IntFitsIn<OutType>(In)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                                ,0xaa,
                                                L"Loss of data caused by narrowing conversion, In = %lld"
                                               ), bVar16)) {
                          pcVar12 = (code *)swi(3);
                          (*pcVar12)();
                          return;
                        }
                        this_00[1].field_0xa = (char)uVar18;
                        pTVar3 = &param_1->AnimationLengths;
                        local_2f4 = (**(code **)(pUVar31->_padding_ + 0x2c0))(pUVar31);
                        pFVar9 = (pTVar3->AllocatorInstance).Data;
                        if (((pFVar9 <= (FScriptContainerElement *)&local_2f4) &&
                            ((FScriptContainerElement *)&local_2f4 <
                             pFVar9 + (longlong)(param_1->AnimationLengths).ArrayMax * 4)) &&
                           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar16)) {
                          pcVar12 = (code *)swi(3);
                          (*pcVar12)();
                          return;
                        }
                        iVar17 = (param_1->AnimationLengths).ArrayNum;
                        piVar29 = &(param_1->AnimationLengths).ArrayMax;
                        if (iVar17 == *piVar29) {
                          iVar17 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x404,&pTVar3->AllocatorInstance,piVar29);
                        }
                        (param_1->AnimationLengths).ArrayNum = iVar17 + 1;
                        *(undefined4 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar17 * 4) =
                             local_2f4;
                        UAnimInstance::InitializeAnimation(this_00,false);
                      }
                    }
                  }
                }
                piVar29 = &(param_1->Components).ArrayMax;
                FTickFunction::AddPrerequisite
                          ((FTickFunction *)&local_308->_padding_,
                           (UObject *)this->AnimSharingManager,
                           (FTickFunction *)&this->AnimSharingManager->TickFunction);
                pFVar9 = (pTVar1->AllocatorInstance).Data;
                if (((pFVar9 <= (FScriptContainerElement *)&local_308) &&
                    ((FScriptContainerElement *)&local_308 < pFVar9 + (longlong)*piVar29 * 8)) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar16)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                iVar17 = (param_1->Components).ArrayNum;
                pUVar23 = local_308;
                if (iVar17 == *piVar29) {
                  iVar17 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&pTVar1->AllocatorInstance,piVar29);
                  pUVar23 = local_308;
                }
              }
              else {
                local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_298.Data.ArrayNum = 0;
                local_298.Data.ArrayMax = 0;
                dVar13 = (this->SkeletalMeshBounds).field0_0x0._s_0.X;
                ::FString::AppendInt(&local_298,uVar32);
                pFVar20 = UEnum::GetNameStringByIndex
                                    ((this->StateEnum).field0_0x0.DebugPtr,&local_1a0,
                                     (uint)pFVar30->State);
                pUVar15 = local_res20;
                local_260 = (FName)local_res20->_padding_;
                ::FName::ToString(&local_260,&local_1c0);
                ::FString::ConcatFC(&local_1d0,&local_1c0,L"_");
                ::FString::ConcatFF(&local_1e0,&local_1d0,pFVar20);
                ::FString::ConcatFF(&local_230,&local_1e0,&local_298);
                FVar25.Data = (FScriptContainerElement *)L"";
                if (local_230.Data.ArrayNum != 0) {
                  FVar25.Data = local_230.Data.AllocatorInstance.Data;
                }
                ::FName::FName(&local_258,(wchar_t *)FVar25.Data);
                if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_230.Data.AllocatorInstance.Data);
                }
                if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
                }
                if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
                }
                if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
                }
                if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
                }
                if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_298.Data.AllocatorInstance.Data);
                }
                local_300 = NewObject<USkeletalMeshComponent>
                                      ((UObject *)(this->SharingActor).field0_0x0.DebugPtr,local_258
                                       ,RF_NoFlags,(UObject *)0x0,false,
                                       (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
                UActorComponent::RegisterComponent((UActorComponent *)local_300);
                pUVar23 = local_300;
                local_158.Pitch = (double)local_300->_padding_;
                local_158.Yaw = (double)local_300->_padding_;
                local_158.Roll = (double)local_300->_padding_;
                pTVar21 = FRotationConversionCache::RotatorToQuat
                                    ((FRotationConversionCache *)&local_300->_padding_,local_d8,
                                     &local_158);
                local_138[0]._s_0.Y = 0.0;
                local_138[0]._0_8_ = (double)uVar18 * dVar13;
                local_138[0]._16_8_ = dVar6;
                local_108 = dVar6;
                USceneComponent::SetRelativeLocationAndRotation
                          ((USceneComponent *)pUVar23,(TVector<double> *)&local_138[0]._s_0,pTVar21,
                           false,(FHitResult *)0x0,None);
                (**(code **)(local_300->_padding_ + 0xb48))(local_300,pUVar15,1);
                USceneComponent::SetVisibility
                          ((USceneComponent *)local_300,GLeaderComponentsVisible == 1,DirtyOnly);
                bVar7 = (byte)local_300->_padding_;
                *(byte *)&local_300->_padding_ =
                     (bVar7 ^ param_4->bEnableMaterialParameterCaching) & 1 ^ bVar7;
                FTickFunction::AddPrerequisite
                          ((FTickFunction *)&local_300->_padding_,
                           (UObject *)this->AnimSharingManager,
                           (FTickFunction *)&this->AnimSharingManager->TickFunction);
                this_01 = ::operator_new(0x28);
                if (this_01 == (FAdditiveAnimationInstance *)0x0) {
                  this_01 = (FAdditiveAnimationInstance *)0x0;
                }
                else {
                  this_01->SkeletalMeshComponent = (USkeletalMeshComponent *)0x0;
                  this_01->AdditiveInstance = (UAnimSharingAdditiveInstance *)0x0;
                  this_01->AdditiveAnimationSequence = (UAnimSequence *)0x0;
                  this_01->BaseComponent = (USkeletalMeshComponent *)0x0;
                  this_01->bLoopingState = false;
                }
                pUVar19 = (param_4->AdditiveAnimBlueprint).Class.field0_0x0.DebugPtr;
                if ((pUVar19 == (UClass *)0x0) ||
                   (pUVar22 = UAnimSharingAdditiveInstance::StaticClass(), pUVar22 == (UClass *)0x0)
                   ) {
LAB_14e2b89ce:
                  pUVar19 = (UClass *)0x0;
                }
                else {
                  iVar17 = (int)pUVar22->_padding_;
                  if (((int)pUVar19->_padding_ < iVar17) ||
                     ((longlong *)*(undefined1 **)(pUVar19->_padding_ + (longlong)iVar17 * 8) !=
                      &pUVar22->_padding_)) {
                    bVar16 = false;
                  }
                  else {
                    bVar16 = true;
                  }
                  if (!bVar16) goto LAB_14e2b89ce;
                  pUVar19 = (param_4->AdditiveAnimBlueprint).Class.field0_0x0.DebugPtr;
                }
                FAdditiveAnimationInstance::Initialise(this_01,local_300,pUVar19);
                FInstanceStack<FAdditiveAnimationInstance>::AddInstance
                          (&param_1->AdditiveInstanceStack,this_01);
                pTVar3 = &param_1->AnimationLengths;
                local_2ec = (**(code **)(pUVar31->_padding_ + 0x2c0))(pUVar31);
                pFVar9 = (pTVar3->AllocatorInstance).Data;
                if (((pFVar9 <= (FScriptContainerElement *)&local_2ec) &&
                    ((FScriptContainerElement *)&local_2ec <
                     pFVar9 + (longlong)(param_1->AnimationLengths).ArrayMax * 4)) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar16)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                iVar17 = (param_1->AnimationLengths).ArrayNum;
                piVar29 = &(param_1->AnimationLengths).ArrayMax;
                if (iVar17 == *piVar29) {
                  iVar17 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&pTVar3->AllocatorInstance,piVar29);
                }
                (param_1->AnimationLengths).ArrayNum = iVar17 + 1;
                piVar29 = &(param_1->Components).ArrayMax;
                *(undefined4 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar17 * 4) = local_2ec
                ;
                pFVar9 = (pTVar1->AllocatorInstance).Data;
                if (((pFVar9 <= (FScriptContainerElement *)&local_300) &&
                    ((FScriptContainerElement *)&local_300 < pFVar9 + (longlong)*piVar29 * 8)) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar16)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                iVar17 = (param_1->Components).ArrayNum;
                pUVar23 = local_300;
                if (iVar17 == *piVar29) {
                  iVar17 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&pTVar1->AllocatorInstance,piVar29);
                  pUVar23 = local_300;
                }
              }
              uVar32 = uVar32 + 1;
              (param_1->Components).ArrayNum = iVar17 + 1;
              *(USkeletalMeshComponent **)((pTVar1->AllocatorInstance).Data + (longlong)iVar17 * 8)
                   = pUVar23;
              this->NumSetups = this->NumSetups + 1;
              uVar18 = this->NumSetups;
              lVar33 = local_2b0;
            } while (uVar32 < local_2d0);
          }
        }
      }
      local_2b0 = lVar33 + 0x18;
      local_2d8 = local_2d8 + 1;
    } while ((int)local_2d8 < (local_res18->AnimationSetups).ArrayNum);
  }
  pFVar27 = (param_1->AnimationLengths).AllocatorInstance.Data;
  fVar36 = 0.0;
  iVar17 = (param_1->AnimationLengths).ArrayNum;
  pFVar9 = pFVar27 + (longlong)iVar17 * 4;
  while( true ) {
    if ((param_1->AnimationLengths).ArrayNum != iVar17) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar27 == pFVar9) break;
    fVar36 = fVar36 + *(float *)pFVar27;
    pFVar27 = pFVar27 + 4;
  }
  iVar17 = (param_1->AnimationLengths).ArrayNum;
  if (iVar17 < 1) {
    fVar36 = 0.0;
  }
  else {
    fVar35 = (float)iVar17;
    if (fVar14 <= fVar35) {
      fVar35 = fVar14;
    }
    fVar36 = fVar36 / fVar35;
  }
  param_1->WiggleTime = fVar36 * local_res18->WiggleTimePercentage;
  fVar36 = __real_38000100;
  if (((param_1->bIsOnDemand != false) && (param_1->bIsAdditive == false)) &&
     (1 < (local_res18->AnimationSetups).ArrayNum)) {
    iVar17 = (param_1->Components).ArrayNum;
    local_2e8.Data = (FScriptContainerElement *)0x0;
    local_2e0 = 0;
    iVar26 = 0;
    if (0 < iVar17) {
      do {
        uVar32 = rand();
        uVar18 = (uint)((float)(uVar32 & 0x7fff) * fVar36 * (float)iVar17);
        uVar32 = iVar17 - 1U;
        if ((int)uVar18 < (int)(iVar17 - 1U)) {
          uVar32 = uVar18;
        }
        uVar18 = 0;
        if ((int)uVar32 < (param_1->Components).ArrayNum) {
          uVar18 = ~uVar32 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar9 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar32 * 8;
        if (((local_2e8.Data <= pFVar9) && (pFVar9 < local_2e8.Data + (longlong)local_2e0._4_4_ * 8)
            ) && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar17 = (int)local_2e0;
        if ((int)local_2e0 == local_2e0._4_4_) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_2e8,(int *)((longlong)&local_2e0 + 4));
        }
        local_2e0 = CONCAT44(local_2e0._4_4_,iVar17 + 1);
        *(undefined8 *)(local_2e8.Data + (longlong)iVar17 * 8) = *(undefined8 *)pFVar9;
        uVar18 = 0;
        if ((int)(uVar32 + 1) <= (param_1->Components).ArrayNum) {
          uVar18 = ~uVar32 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar9 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar32 * 8;
        iVar17 = ((param_1->Components).ArrayNum - uVar32) + -1;
        if (iVar17 != 0) {
          memmove(pFVar9,pFVar9 + 8,(longlong)iVar17 << 3);
        }
        piVar29 = &(param_1->Components).ArrayNum;
        *piVar29 = *piVar29 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar1->AllocatorInstance,(param_1->Components).ArrayNum,
                   &(param_1->Components).ArrayMax);
        iVar17 = (param_1->Components).ArrayNum;
      } while (0 < iVar17);
      iVar26 = (int)local_2e0;
    }
    FVar25.Data = local_2e8.Data;
    if (pTVar1 != (TArray<USkeletalMeshComponent_*,TSizedDefaultAllocator<32>_> *)&local_2e8) {
      iVar17 = (param_1->Components).ArrayMax;
      piVar29 = &(param_1->Components).ArrayMax;
      (param_1->Components).ArrayNum = iVar26;
      if ((iVar26 == 0) && (iVar17 == 0)) {
        *piVar29 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar26,iVar17,&pTVar1->AllocatorInstance,iVar26,piVar29);
        if (iVar26 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,FVar25.Data,(longlong)iVar26 << 3);
        }
      }
    }
    if (local_2e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data);
    }
  }
  iVar17 = (param_1->Components).ArrayNum;
  pTVar2 = &param_1->InUseComponentFrameBits;
  (param_1->InUseComponentFrameBits).NumBits = iVar17;
  uVar32 = iVar17 + 0x1f;
  uVar18 = uVar32 >> 5;
  if (uVar32 >> 5 != 0) {
    if ((param_1->InUseComponentFrameBits).MaxBits + 0x1fU >> 5 < uVar18) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&pTVar2->AllocatorInstance,0,uVar18,4);
      (param_1->InUseComponentFrameBits).MaxBits = uVar18 << 5;
    }
    FVar24 = (param_1->InUseComponentFrameBits).AllocatorInstance.SecondaryData;
    if (FVar24 == (ForElementType<unsigned_int>)0x0) {
      FVar24 = (ForElementType<unsigned_int>)pTVar2;
    }
    memset((void *)FVar24,0,(ulonglong)uVar18 << 2);
    iVar17 = (param_1->InUseComponentFrameBits).NumBits;
    uVar18 = iVar17 >> 0x1f & 0x1f;
    uVar32 = iVar17 + uVar18;
    iVar17 = (uVar32 & 0x1f) - uVar18;
    if (iVar17 != 0) {
      FVar24 = (param_1->InUseComponentFrameBits).AllocatorInstance.SecondaryData;
      if (FVar24 == (ForElementType<unsigned_int>)0x0) {
        FVar24 = (ForElementType<unsigned_int>)pTVar2;
      }
      puVar4 = (uint *)((longlong)FVar24 + (longlong)((int)uVar32 >> 5) * 4);
      *puVar4 = *puVar4 & 0xffffffffU >> (-(char)iVar17 & 0x1fU);
    }
  }
  iVar17 = (param_1->Components).ArrayNum;
  pTVar2 = &param_1->PreviousInUseComponentFrameBits;
  (param_1->PreviousInUseComponentFrameBits).NumBits = iVar17;
  uVar32 = iVar17 + 0x1f;
  uVar18 = uVar32 >> 5;
  if (uVar32 >> 5 != 0) {
    if ((param_1->PreviousInUseComponentFrameBits).MaxBits + 0x1fU >> 5 < uVar18) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&pTVar2->AllocatorInstance,0,uVar18,4);
      (param_1->PreviousInUseComponentFrameBits).MaxBits = uVar18 << 5;
    }
    FVar24 = (param_1->PreviousInUseComponentFrameBits).AllocatorInstance.SecondaryData;
    if (FVar24 == (ForElementType<unsigned_int>)0x0) {
      FVar24 = (ForElementType<unsigned_int>)pTVar2;
    }
    if (uVar18 < 9) {
      iVar17 = -1;
    }
    else {
      iVar17 = 0xff;
    }
    memset((void *)FVar24,iVar17,(ulonglong)uVar18 << 2);
    iVar17 = (param_1->PreviousInUseComponentFrameBits).NumBits;
    uVar18 = iVar17 >> 0x1f & 0x1f;
    uVar32 = iVar17 + uVar18;
    iVar17 = (uVar32 & 0x1f) - uVar18;
    if (iVar17 != 0) {
      FVar24 = (param_1->PreviousInUseComponentFrameBits).AllocatorInstance.SecondaryData;
      if (FVar24 == (ForElementType<unsigned_int>)0x0) {
        FVar24 = (ForElementType<unsigned_int>)pTVar2;
      }
      puVar4 = (uint *)((longlong)FVar24 + (longlong)((int)uVar32 >> 5) * 4);
      *puVar4 = *puVar4 & 0xffffffffU >> (-(char)iVar17 & 0x1fU);
    }
  }
  iVar17 = (param_1->Components).ArrayNum;
  pTVar2 = &param_1->FollowerTickRequiredFrameBits;
  (param_1->FollowerTickRequiredFrameBits).NumBits = iVar17;
  uVar32 = iVar17 + 0x1f;
  uVar18 = uVar32 >> 5;
  if (uVar32 >> 5 != 0) {
    if ((param_1->FollowerTickRequiredFrameBits).MaxBits + 0x1fU >> 5 < uVar18) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&pTVar2->AllocatorInstance,0,uVar18,4);
      (param_1->FollowerTickRequiredFrameBits).MaxBits = uVar18 << 5;
    }
    FVar24 = (param_1->FollowerTickRequiredFrameBits).AllocatorInstance.SecondaryData;
    if (FVar24 == (ForElementType<unsigned_int>)0x0) {
      FVar24 = (ForElementType<unsigned_int>)pTVar2;
    }
    memset((void *)FVar24,0,(ulonglong)uVar18 << 2);
    iVar17 = (param_1->FollowerTickRequiredFrameBits).NumBits;
    uVar18 = iVar17 >> 0x1f & 0x1f;
    uVar32 = iVar17 + uVar18;
    iVar17 = (uVar32 & 0x1f) - uVar18;
    if (iVar17 != 0) {
      FVar24 = (param_1->FollowerTickRequiredFrameBits).AllocatorInstance.SecondaryData;
      if (FVar24 == (ForElementType<unsigned_int>)0x0) {
        FVar24 = (ForElementType<unsigned_int>)pTVar2;
      }
      puVar4 = (uint *)((longlong)FVar24 + (longlong)((int)uVar32 >> 5) * 4);
      *puVar4 = *puVar4 & 0xffffffffU >> (0x20U - (char)iVar17 & 0x1f);
    }
  }
  return;
}

// StaticRegisterNativesUAnimSharingInstance @ 14e2b90d0

void __cdecl UAnimSharingInstance::StaticRegisterNativesUAnimSharingInstance(void)

{
  return;
}

// SwitchBetweenOnDemands @ 14e2b9250

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
UAnimSharingInstance::SwitchBetweenOnDemands
          (UAnimSharingInstance *this,uint param_1,uint param_2,uint param_3)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint local_res20 [2];
  
  local_res20[0] = param_3;
  if (param_1 != 0xffffffff) {
    uVar5 = 0;
    if ((int)param_1 < (this->OnDemandInstances).ArrayNum) {
      uVar5 = ~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Remove
              ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
               ((this->OnDemandInstances).AllocatorInstance.Data +
               (longlong)(int)param_1 * 0x30 + 0x20),local_res20);
  }
  uVar5 = 0;
  if ((int)param_2 < (this->OnDemandInstances).ArrayNum) {
    uVar5 = ~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->OnDemandInstances).AllocatorInstance.Data;
  lVar7 = (longlong)(int)local_res20[0];
  uVar5 = *(uint *)(pFVar2 + (longlong)(int)param_2 * 0x30 + 0x14);
  FVar1 = pFVar2[(longlong)(int)param_2 * 0x30 + 3];
  uVar6 = 0;
  if ((int)local_res20[0] < (this->PerActorData).ArrayNum) {
    uVar6 = ~local_res20[0] >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (this->PerActorData).AllocatorInstance.Data[lVar7 * 0x48 + 2] = (FScriptContainerElement)0x0;
  if ((this->PerStateData).ArrayNum <= (int)(uint)(byte)FVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->PerStateData).AllocatorInstance.Data;
  uVar6 = 0;
  if ((int)uVar5 < *(int *)(pFVar2 + (ulonglong)(byte)FVar1 * 0xc0 + 0x28)) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SetLeaderComponentForActor
            (this,local_res20[0],
             *(USkeletalMeshComponent **)
              (*(longlong *)(pFVar2 + (ulonglong)(byte)FVar1 * 0xc0 + 0x20) +
              (longlong)(int)uVar5 * 8));
  return;
}

// TickActorStates @ 14e2b9720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAnimSharingInstance::TickActorStates(UAnimSharingInstance *this)

{
  uint *puVar1;
  float fVar2;
  FScriptContainerElement FVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  FScriptContainerElement FVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_AnimationSharing_TickActorStates> FVar20;
  USkeletalMeshComponent *this_00;
  longlong lVar21;
  FName FVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  uint *puVar26;
  longlong lVar27;
  float fVar28;
  bool local_res18 [8];
  FScriptContainerElement local_res20;
  undefined1 local_c8 [4];
  uint local_c4;
  uint local_c0;
  FColor_u_0 local_bc;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  
  FVar20 = StatPtr_STAT_AnimationSharing_TickActorStates;
  if (StatPtr_STAT_AnimationSharing_TickActorStates ==
      (FThreadSafeStaticStat<FStat_STAT_AnimationSharing_TickActorStates>)0x0) {
    pFVar19 = ::FName::FName(&local_a8,"STAT_AnimationSharing_TickActorStates");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_AnimationSharing_TickActorStates>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimationSharing_TickActorStates,
                        *pFVar19,L"TickActorStates","STATGROUP_AnimationSharing","STATCAT_Advanced",
                        L"Animation Sharing Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar20;
  bVar8 = false;
  bVar7 = false;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  bVar13 = false;
  bVar12 = false;
  if ((FVar22.ComparisonIndex.Value.Value != 0) || (FVar22.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_bc.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_bc._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar8 = false;
      bVar7 = true;
      bVar13 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value;
        local_b8.Number = FVar22.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b8,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\AnimationSharing\\Source\\AnimationSharing\\Private\\AnimationSharingManager.cpp"
                   ,0x66d);
        bVar8 = true;
        bVar7 = true;
        bVar13 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_b0 = FVar22;
      FThreadStats::AddMessage(FVar22,CycleScopeStart);
      bVar12 = true;
      goto LAB_14e2b98a2;
    }
  }
  bVar8 = bVar13;
  bVar7 = bVar12;
  bVar12 = false;
  local_b0 = local_a0;
  FVar22 = local_a0;
LAB_14e2b98a2:
  uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar10 = __real_3f800000;
  fVar9 = __real_322bcc77;
  local_c4 = 0;
  if (0 < (this->RegisteredActors).ArrayNum) {
    lVar21 = 0;
    do {
      uVar24 = local_c4;
      uVar23 = ~local_c4;
      uVar16 = 0;
      if ((int)local_c4 < (this->RegisteredActors).ArrayNum) {
        uVar16 = uVar23 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(longlong *)((this->RegisteredActors).AllocatorInstance.Data + lVar21 * 8) != 0) {
        uVar16 = 0;
        if ((int)uVar24 < (this->PerActorData).ArrayNum) {
          uVar16 = uVar23 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (this->PerActorData).AllocatorInstance.Data;
        if ((*(int *)(pFVar4 + lVar21 * 0x48 + 0x28) == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("ActorData.ComponentIndices.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\AnimationSharing\\Source\\AnimationSharing\\Private\\AnimationSharingManager.cpp"
                                ,0x676,L"Registered Actor without SkeletalMeshComponents"), bVar13))
        {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar2 = (this->ScalabilitySettings).TickSignificanceValue.Default;
        pFVar4[lVar21 * 0x48 + 0xc] =
             (FScriptContainerElement)
             (fVar2 < *(float *)(pFVar4 + lVar21 * 0x48 + 8) ||
             fVar2 == *(float *)(pFVar4 + lVar21 * 0x48 + 8));
        puVar26 = *(uint **)(pFVar4 + lVar21 * 0x48 + 0x20);
        iVar18 = *(int *)(pFVar4 + lVar21 * 0x48 + 0x28);
        puVar1 = puVar26 + iVar18;
        while( true ) {
          if (*(int *)(pFVar4 + lVar21 * 0x48 + 0x28) != iVar18) {
            local_c8[0] = 0;
            `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_c8);
          }
          uVar24 = local_c4;
          if (puVar26 == puVar1) break;
          uVar24 = *puVar26;
          uVar16 = 0;
          if ((int)uVar24 < (this->PerComponentData).ArrayNum) {
            uVar16 = ~uVar24 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          this_00 = GetComponent(this,(FPerComponentData *)
                                      ((this->PerComponentData).AllocatorInstance.Data +
                                      (longlong)(int)uVar24 * 0xc));
          if ((this_00 != (USkeletalMeshComponent *)0x0) &&
             (fVar2 = this->WorldTime,
             fVar28 = UPrimitiveComponent::GetLastRenderTime((UPrimitiveComponent *)this_00),
             fVar2 - fVar10 < fVar28)) {
            *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ | 0x40;
            pFVar4[lVar21 * 0x48 + 0xc] = (FScriptContainerElement)0x1;
          }
          puVar26 = puVar26 + 1;
        }
        local_res18[0] = false;
        FVar14 = (FScriptContainerElement)DetermineStateForActor(this,local_c4,local_res18);
        uVar25 = (ulonglong)(byte)FVar14;
        if (((this->ScalabilitySettings).UseBlendTransitions.Default == false) ||
           (fVar2 = (this->ScalabilitySettings).BlendSignificanceValue.Default, bVar13 = true,
           *(float *)(pFVar4 + lVar21 * 0x48 + 8) <= fVar2 &&
           fVar2 != *(float *)(pFVar4 + lVar21 * 0x48 + 8))) {
          bVar13 = false;
        }
        if (FVar14 == pFVar4[lVar21 * 0x48]) {
          if ((pFVar4[lVar21 * 0x48 + 4] == (FScriptContainerElement)0x0) &&
             (pFVar4[lVar21 * 0x48 + 3] == (FScriptContainerElement)0x0)) {
            SetComponentUsage(this,true,(uchar)pFVar4[lVar21 * 0x48],
                              (uint)(byte)pFVar4[lVar21 * 0x48 + 2]);
          }
        }
        else {
          uVar16 = (uint)(byte)FVar14;
          if (pFVar4[lVar21 * 0x48 + 4] == (FScriptContainerElement)0x0) {
LAB_14e2b9b8a:
            bVar15 = false;
          }
          else {
            if (((this->PerStateData).ArrayNum <= (int)uVar16) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((this->PerStateData).AllocatorInstance.Data[uVar25 * 0xc0] !=
                (FScriptContainerElement)0x0) goto LAB_14e2b9b8a;
            bVar15 = true;
          }
          local_res20 = pFVar4[lVar21 * 0x48];
          if ((local_res18[0] == false) || (bVar15)) {
            pFVar4[lVar21 * 0x48 + 1] = local_res20;
            pFVar4[lVar21 * 0x48] = FVar14;
          }
          else {
            if (((this->PerStateData).ArrayNum <= (int)uVar16) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((this->PerStateData).AllocatorInstance.Data[uVar25 * 0xc0 + 1] ==
                (FScriptContainerElement)0x0) {
              if (((this->PerStateData).ArrayNum <= (int)uVar16) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar24 = local_c4;
              if ((this->PerStateData).AllocatorInstance.Data[uVar25 * 0xc0] ==
                  (FScriptContainerElement)0x0) {
                if (bVar13) {
                  uVar16 = SetupBlend(this,(uchar)pFVar4[lVar21 * 0x48],(uchar)FVar14,local_c4);
                  *(uint *)(pFVar4 + lVar21 * 0x48 + 0x10) = uVar16;
                  if (uVar16 == 0xffffffff) goto LAB_14e2ba08a;
                }
                else {
LAB_14e2ba08a:
                  SetupFollowerComponent(this,(uchar)FVar14,uVar24);
                }
                pFVar4[lVar21 * 0x48 + 1] = local_res20;
                pFVar4[lVar21 * 0x48] = FVar14;
              }
              else {
                if (pFVar4[lVar21 * 0x48 + 4] != (FScriptContainerElement)0x0) {
                  uVar23 = *(uint *)(pFVar4 + lVar21 * 0x48 + 0x14);
                  uVar24 = 0;
                  if ((int)uVar23 < (this->OnDemandInstances).ArrayNum) {
                    uVar24 = ~uVar23 >> 0x1f;
                  }
                  if ((uVar24 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  uVar24 = local_c4;
                  if ((this->OnDemandInstances).AllocatorInstance.Data
                      [(longlong)(int)uVar23 * 0x30 + 3] == FVar14) goto LAB_14e2ba0d9;
                }
                uVar23 = SetupOnDemandInstance(this,(uchar)FVar14);
                uVar24 = local_c4;
                lVar27 = (longlong)(int)uVar23;
                if (uVar23 == 0xffffffff) goto LAB_14e2ba0d9;
                RemoveFromCurrentBlend(this,local_c4);
                RemoveFromCurrentOnDemand(this,uVar24);
                if (bVar13) {
                  if (((this->PerStateData).ArrayNum <= (int)uVar16) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar13)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  if ((float)(*(uint *)((this->PerStateData).AllocatorInstance.Data +
                                       uVar25 * 0xc0 + 4) & uVar11) <= fVar9) goto LAB_14e2b9f33;
                  if (pFVar4[lVar21 * 0x48 + 4] == (FScriptContainerElement)0x0) {
                    FVar3 = pFVar4[lVar21 * 0x48];
                    uVar16 = 0;
                    if ((int)uVar23 < (this->OnDemandInstances).ArrayNum) {
                      uVar16 = ~uVar23 >> 0x1f;
                    }
                    if ((uVar16 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    uVar16 = SetupBlend(this,(uchar)FVar3,
                                        (uchar)(this->OnDemandInstances).AllocatorInstance.Data
                                               [lVar27 * 0x30 + 3],uVar24);
                    if (uVar16 != 0xffffffff) {
                      uVar17 = 0;
                      if ((int)uVar16 < (this->BlendInstances).ArrayNum) {
                        uVar17 = ~uVar16 >> 0x1f;
                      }
                      if ((uVar17 == 0) &&
                         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar13)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      *(uint *)((this->BlendInstances).AllocatorInstance.Data +
                               (longlong)(int)uVar16 * 0x38 + 0x34) = uVar23;
                    }
                  }
                  else {
                    uVar16 = *(uint *)(pFVar4 + lVar21 * 0x48 + 0x14);
                    if ((uVar16 != (uVar16 & 0xff)) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IntFitsIn<OutType>(In)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                            ,0xae,
                                            L"Loss of data caused by narrowing conversion, In = %llu"
                                           ), bVar13)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    uVar16 = SetupBlendBetweenOnDemands(this,(uchar)uVar16,uVar23,uVar24);
                  }
                  *(uint *)(pFVar4 + lVar21 * 0x48 + 0x10) = uVar16;
                  if (uVar16 == 0xffffffff) goto LAB_14e2b9f33;
                }
                else {
LAB_14e2b9f33:
                  SwitchBetweenOnDemands
                            (this,*(uint *)(pFVar4 + lVar21 * 0x48 + 0x14),uVar23,uVar24);
                }
                uVar16 = 0;
                if ((int)uVar23 < (this->OnDemandInstances).ArrayNum) {
                  uVar16 = ~uVar23 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                local_c0 = uVar24;
                pFVar5 = (this->OnDemandInstances).AllocatorInstance.Data;
                if (((*(uint **)(pFVar5 + lVar27 * 0x30 + 0x20) <= &local_c0) &&
                    (&local_c0 <
                     *(uint **)(pFVar5 + lVar27 * 0x30 + 0x20) +
                     *(int *)(pFVar5 + lVar27 * 0x30 + 0x2c))) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar13)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar18 = *(int *)(pFVar5 + lVar27 * 0x30 + 0x28);
                if (iVar18 == *(int *)(pFVar5 + lVar27 * 0x30 + 0x2c)) {
                  iVar18 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,(ForAnyElementType *)(pFVar5 + lVar27 * 0x30 + 0x20),
                                      (int *)(pFVar5 + lVar27 * 0x30 + 0x2c));
                }
                *(int *)(pFVar5 + lVar27 * 0x30 + 0x28) = iVar18 + 1;
                *(uint *)(*(longlong *)(pFVar5 + lVar27 * 0x30 + 0x20) + (longlong)iVar18 * 4) =
                     local_c0;
                *(uint *)(pFVar4 + lVar21 * 0x48 + 0x14) = uVar23;
                pFVar4[lVar21 * 0x48 + 4] = (FScriptContainerElement)0x1;
                pFVar4[lVar21 * 0x48 + 1] = local_res20;
                pFVar4[lVar21 * 0x48] = FVar14;
              }
            }
            else {
              uVar24 = local_c4;
              if (pFVar4[lVar21 * 0x48 + 5] == (FScriptContainerElement)0x0) {
                uVar16 = SetupAdditiveInstance
                                   (this,(uchar)FVar14,(uchar)pFVar4[lVar21 * 0x48],
                                    (uchar)pFVar4[lVar21 * 0x48 + 2]);
                uVar24 = local_c4;
                if (uVar16 != 0xffffffff) {
                  pFVar4[lVar21 * 0x48 + 5] = (FScriptContainerElement)0x1;
                  *(uint *)(pFVar4 + lVar21 * 0x48 + 0x18) = uVar16;
                  uVar24 = 0;
                  if ((int)uVar16 < (this->AdditiveInstances).ArrayNum) {
                    uVar24 = ~uVar16 >> 0x1f;
                  }
                  if ((uVar24 == 0) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar13)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  *(uint *)((this->AdditiveInstances).AllocatorInstance.Data +
                           (longlong)(int)uVar16 * 0x28 + 8) = local_c4;
                  uVar24 = local_c4;
                }
              }
            }
          }
        }
LAB_14e2ba0d9:
        if (pFVar4[lVar21 * 0x48 + 0xc] != (FScriptContainerElement)0x0) {
          SetComponentTick(this,(uchar)pFVar4[lVar21 * 0x48],(uint)(byte)pFVar4[lVar21 * 0x48 + 2]);
        }
      }
      local_c4 = uVar24 + 1;
      lVar21 = lVar21 + 1;
      FVar22 = local_b0;
    } while ((int)local_c4 < (this->RegisteredActors).ArrayNum);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar22,CycleScopeEnd);
  }
  return;
}

// TickAdditiveInstances @ 14e2ba1b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UAnimSharingInstance::TickAdditiveInstances(UAnimSharingInstance *this)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  FAdditiveAnimationInstance *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_AnimationSharing_UpdateAdditives> FVar13;
  longlong lVar14;
  FName FVar15;
  longlong lVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  FScriptContainerElement *local_res20;
  FAdditiveAnimationInstance *local_68;
  FName local_60;
  FName local_58;
  
  FVar13 = StatPtr_STAT_AnimationSharing_UpdateAdditives;
  if (StatPtr_STAT_AnimationSharing_UpdateAdditives ==
      (FThreadSafeStaticStat<FStat_STAT_AnimationSharing_UpdateAdditives>)0x0) {
    pFVar12 = ::FName::FName(&local_60,"STAT_AnimationSharing_UpdateAdditives");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_AnimationSharing_UpdateAdditives>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimationSharing_UpdateAdditives,
                        *pFVar12,L"UpdateAdditives","STATGROUP_AnimationSharing","STATCAT_Advanced",
                        L"Animation Sharing Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar13;
  bVar6 = false;
  bVar5 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  bVar8 = false;
  bVar7 = false;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (FVar15.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar5 = true;
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar15.ComparisonIndex.Value.Value;
        local_res18.Number = FVar15.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\AnimationSharing\\Source\\AnimationSharing\\Private\\AnimationSharingManager.cpp"
                   ,0x642);
        bVar6 = true;
        bVar5 = true;
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar7 = true;
      goto LAB_14e2ba32e;
    }
  }
  bVar6 = bVar8;
  bVar5 = bVar7;
  bVar7 = false;
  FVar15 = local_58;
LAB_14e2ba32e:
  uVar17 = 0;
  if (0 < (this->AdditiveInstances).ArrayNum) {
    lVar16 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar17 < (this->AdditiveInstances).ArrayNum) {
        uVar9 = ~uVar17 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->AdditiveInstances).AllocatorInstance.Data;
      pFVar18 = pFVar2 + lVar16 + 0x20;
      local_res20 = pFVar18;
      SetComponentUsage(this,true,(uchar)pFVar2[lVar16 + 1],*(uint *)pFVar18);
      SetComponentTick(this,(uchar)pFVar2[lVar16 + 1],*(uint *)pFVar18);
      if (pFVar2[lVar16] == (FScriptContainerElement)0x0) {
        pFVar2[lVar16] = (FScriptContainerElement)0x1;
        lVar14 = *(longlong *)(*(longlong *)(pFVar2 + lVar16 + 0x18) + 8);
        if (lVar14 != 0) {
          *(undefined1 *)(*(longlong *)(pFVar2 + lVar16 + 0x18) + 0x20) = 0;
          *(undefined1 *)(lVar14 + 0x43c) = 0;
        }
        if (*(uint *)(pFVar2 + lVar16 + 8) != 0xffffffff) {
          SetLeaderComponentForActor
                    (this,*(uint *)(pFVar2 + lVar16 + 8),
                     (USkeletalMeshComponent *)**(undefined8 **)(pFVar2 + lVar16 + 0x18));
        }
      }
      else {
        lVar14 = (**(code **)(this->_padding_ + 0x180))(this);
        if (*(float *)(pFVar2 + lVar16 + 4) <= (float)*(double *)(lVar14 + 0x8f8)) {
          uVar9 = *(uint *)(pFVar2 + lVar16 + 8);
          if ((-1 < (int)uVar9) && ((int)uVar9 < (this->PerActorData).ArrayNum)) {
            uVar10 = 0;
            if ((int)uVar9 < (this->PerActorData).ArrayNum) {
              uVar10 = ~uVar9 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            (this->PerActorData).AllocatorInstance.Data[(longlong)(int)uVar9 * 0x48 + 5] =
                 (FScriptContainerElement)0x0;
            uVar9 = *(uint *)(pFVar2 + lVar16 + 8);
            uVar10 = 0;
            if ((int)uVar9 < (this->PerActorData).ArrayNum) {
              uVar10 = ~uVar9 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(undefined4 *)
             ((this->PerActorData).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x48 + 0x18) =
                 0xffffffff;
            SetLeaderComponentForActor
                      (this,*(uint *)(pFVar2 + lVar16 + 8),
                       *(USkeletalMeshComponent **)(*(longlong *)(pFVar2 + lVar16 + 0x18) + 0x18));
          }
          pFVar3 = *(FAdditiveAnimationInstance **)(pFVar2 + lVar16 + 0x18);
          FVar1 = pFVar2[lVar16 + 1];
          if (pFVar3->AdditiveInstance != (UAnimSharingAdditiveInstance *)0x0) {
            (**(code **)(pFVar3->SkeletalMeshComponent->_padding_ + 0x420))
                      (pFVar3->SkeletalMeshComponent,0);
            (**(code **)(pFVar3->SkeletalMeshComponent->_padding_ + 0x4d0))
                      (pFVar3->SkeletalMeshComponent,pFVar3->BaseComponent);
          }
          if (((this->PerStateData).ArrayNum <= (int)(uint)(byte)FVar1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar18 = (this->PerStateData).AllocatorInstance.Data +
                    (ulonglong)(byte)FVar1 * 0xc0 + 0xa0;
          local_68 = pFVar3;
          if (((*(FAdditiveAnimationInstance ***)&pFVar18->field_0x0 <= &local_68) &&
              (&local_68 <
               *(FAdditiveAnimationInstance ***)&pFVar18->field_0x0 + *(int *)(pFVar18 + 0xc))) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar11 = *(int *)&pFVar18[8].field_0x0;
          if (iVar11 == *(int *)(pFVar18 + 0xc)) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)pFVar18,(int *)(pFVar18 + 0xc));
          }
          *(int *)&pFVar18[8].field_0x0 = iVar11 + 1;
          *(FAdditiveAnimationInstance **)(*(longlong *)&pFVar18->field_0x0 + (longlong)iVar11 * 8)
               = local_68;
          TArray<FAdditiveAnimationInstance_*,TSizedDefaultAllocator<32>_>::RemoveSwap
                    ((TArray<FAdditiveAnimationInstance_*,TSizedDefaultAllocator<32>_> *)
                     (pFVar18 + 0x10),&local_68,Default);
          RemoveAdditiveInstance(this,uVar17);
          uVar17 = uVar17 - 1;
          lVar14 = lVar16 + 1;
          lVar16 = lVar16 + -0x28;
          SetComponentUsage(this,false,(uchar)pFVar2[lVar14],*(uint *)local_res20);
        }
      }
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 0x28;
    } while ((int)uVar17 < (this->AdditiveInstances).ArrayNum);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar15,CycleScopeEnd);
  }
  return;
}

// TickAnimationStates @ 14e2ba720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAnimSharingInstance::TickAnimationStates(UAnimSharingInstance *this)

{
  longlong *plVar1;
  uchar *puVar2;
  longlong lVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  TBitArray<FDefaultBitArrayAllocator> *_Dst;
  ForElementType<unsigned_int> *_Dst_00;
  undefined1 uVar11;
  ulonglong uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  ForElementType<unsigned_int> *this_01;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20;
  longlong local_78;
  
  pFVar19 = (this->PerStateData).AllocatorInstance.Data;
  local_res20 = (this->PerStateData).ArrayNum;
  uVar12 = (ulonglong)(int)local_res20;
  pFVar17 = pFVar19 + 0x50;
  pFVar15 = pFVar19 + 0x30;
  pFVar14 = pFVar19 + uVar12 * 0xc0;
  pFVar20 = pFVar19 + 0x70;
  pFVar21 = pFVar19 + 0x20;
  do {
    if ((this->PerStateData).ArrayNum != (int)uVar12) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FPerStateData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    uVar13 = 0;
    if (pFVar19 == pFVar14) {
      return;
    }
    if (0 < *(int *)(pFVar19 + 0x28)) {
      local_78 = 0;
      local_res18 = 1;
      do {
        uVar18 = local_res18;
        if ((((int)uVar13 < 0) || (*(int *)(pFVar17 + 0x18) <= (int)uVar13)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar10 = pFVar17;
        if (*(FScriptContainerElement **)(pFVar17 + 0x10) != (FScriptContainerElement *)0x0) {
          pFVar10 = *(FScriptContainerElement **)(pFVar17 + 0x10);
        }
        uVar8 = uVar13;
        if ((int)uVar13 < 0) {
          uVar8 = uVar13 + 0x1f;
        }
        lVar3 = (longlong)((int)uVar8 >> 5) * 4;
        uVar8 = *(uint *)(pFVar10 + lVar3);
        if ((((int)uVar13 < 0) || (*(int *)(pFVar15 + 0x18) <= (int)uVar13)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar10 = pFVar15;
        if (*(FScriptContainerElement **)(pFVar15 + 0x10) != (FScriptContainerElement *)0x0) {
          pFVar10 = *(FScriptContainerElement **)(pFVar15 + 0x10);
        }
        uVar16 = uVar18 & *(uint *)(pFVar10 + lVar3);
        if ((((int)uVar13 < 0) || (*(int *)(pFVar20 + 0x18) <= (int)uVar13)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar10 = pFVar20;
        if (*(FScriptContainerElement **)(pFVar20 + 0x10) != (FScriptContainerElement *)0x0) {
          pFVar10 = *(FScriptContainerElement **)(pFVar20 + 0x10);
        }
        uVar4 = *(uint *)(pFVar10 + lVar3);
        if ((uVar16 != 0) == ((uVar8 & uVar18) != 0)) {
          if (uVar16 == 0) {
            uVar16 = ~uVar13 >> 0x1f;
            uVar8 = 0;
            if ((int)uVar13 < *(int *)(pFVar21 + 8)) {
              uVar8 = uVar16;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            cVar7 = (**(code **)(**(longlong **)(local_78 + *(longlong *)pFVar21) + 0x430))();
            if (cVar7 != '\0') {
              uVar8 = 0;
              if ((int)uVar13 < *(int *)(pFVar19 + 0x28)) {
                uVar8 = uVar16;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar8 = 0;
              if ((int)uVar13 < *(int *)(pFVar21 + 8)) {
                uVar8 = uVar16;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              (**(code **)(**(longlong **)(local_78 + *(longlong *)pFVar21) + 0x420))
                        (*(longlong **)(local_78 + *(longlong *)pFVar21),0);
            }
          }
        }
        else {
          uVar8 = ~uVar13 >> 0x1f;
          if (uVar16 == 0) {
            uVar16 = 0;
            if ((int)uVar13 < *(int *)(pFVar19 + 0x28)) {
              uVar16 = uVar8;
            }
            if ((uVar16 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar16 = 0;
            if ((int)uVar13 < *(int *)(pFVar21 + 8)) {
              uVar16 = uVar8;
            }
            if ((uVar16 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            (**(code **)(**(longlong **)(local_78 + *(longlong *)pFVar21) + 0x420))
                      (*(longlong **)(local_78 + *(longlong *)pFVar21),0);
          }
          else {
            uVar16 = 0;
            if ((int)uVar13 < *(int *)(pFVar19 + 0x28)) {
              uVar16 = uVar8;
            }
            if ((uVar16 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar16 = 0;
            if ((int)uVar13 < *(int *)(pFVar21 + 8)) {
              uVar16 = uVar8;
            }
            if ((uVar16 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            (**(code **)(**(longlong **)(local_78 + *(longlong *)pFVar21) + 0x420))
                      (*(longlong **)(local_78 + *(longlong *)pFVar21),1);
          }
        }
        uVar8 = 0;
        if ((int)uVar13 < *(int *)(pFVar21 + 8)) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(byte *)(*(longlong *)(*(longlong *)pFVar21 + local_78) + 0x808) =
             -((uVar18 & uVar4) != 0) & 0x40U |
             *(byte *)(*(longlong *)(*(longlong *)pFVar21 + local_78) + 0x808) & 0xbf;
        uVar8 = 0;
        if ((int)uVar13 < *(int *)(pFVar21 + 8)) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar11 = 4;
        if ((uVar18 & uVar4) != 0) {
          uVar11 = 0;
        }
        uVar13 = uVar13 + 1;
        plVar1 = (longlong *)(*(longlong *)pFVar21 + local_78);
        local_78 = local_78 + 8;
        local_res18 = local_res18 << 1 | (uint)((int)local_res18 < 0);
        *(undefined1 *)(*plVar1 + 0x804) = uVar11;
      } while ((int)uVar13 < *(int *)(pFVar19 + 0x28));
    }
    this_00 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar19 + 0x30);
    if ((TBitArray<FDefaultBitArrayAllocator> *)(pFVar19 + 0x50) != this_00) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)(pFVar19 + 0x50),this_00);
    }
    *(int *)(pFVar19 + 0x48) = *(int *)(pFVar19 + 0x68);
    uVar13 = *(int *)(pFVar19 + 0x68) + 0x1f;
    uVar18 = uVar13 >> 5;
    if (uVar13 >> 5 != 0) {
      if (*(int *)(pFVar19 + 0x4c) + 0x1fU >> 5 < uVar18) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation((ForElementType<unsigned_int> *)this_00,0,uVar18,4);
        *(uint *)(pFVar19 + 0x4c) = uVar18 << 5;
      }
      _Dst = this_00;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar19 + 0x40) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        _Dst = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar19 + 0x40);
      }
      memset(_Dst,0,(ulonglong)uVar18 << 2);
      uVar18 = *(int *)(pFVar19 + 0x48) >> 0x1f & 0x1f;
      uVar13 = *(int *)(pFVar19 + 0x48) + uVar18;
      iVar9 = (uVar13 & 0x1f) - uVar18;
      if (iVar9 != 0) {
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar19 + 0x40) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          this_00 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar19 + 0x40);
        }
        puVar2 = (this_00->AllocatorInstance).InlineData + (longlong)((int)uVar13 >> 5) * 4;
        *(uint *)puVar2 = *(uint *)puVar2 & 0xffffffffU >> (0x20U - (char)iVar9 & 0x1f);
      }
    }
    iVar9 = *(int *)(pFVar19 + 0x88);
    this_01 = (ForElementType<unsigned_int> *)(pFVar19 + 0x70);
    *(int *)(pFVar19 + 0x88) = iVar9;
    uVar13 = iVar9 + 0x1f;
    uVar18 = uVar13 >> 5;
    if (uVar13 >> 5 != 0) {
      if (*(int *)(pFVar19 + 0x8c) + 0x1fU >> 5 < uVar18) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(this_01,0,uVar18,4);
        *(uint *)(pFVar19 + 0x8c) = uVar18 << 5;
      }
      _Dst_00 = this_01;
      if (*(ForElementType<unsigned_int> **)(pFVar19 + 0x80) != (ForElementType<unsigned_int> *)0x0)
      {
        _Dst_00 = *(ForElementType<unsigned_int> **)(pFVar19 + 0x80);
      }
      memset(_Dst_00,0,(ulonglong)uVar18 << 2);
      uVar18 = *(int *)(pFVar19 + 0x88) >> 0x1f & 0x1f;
      uVar13 = *(int *)(pFVar19 + 0x88) + uVar18;
      iVar9 = (uVar13 & 0x1f) - uVar18;
      if (iVar9 != 0) {
        if (*(ForElementType<unsigned_int> **)(pFVar19 + 0x80) !=
            (ForElementType<unsigned_int> *)0x0) {
          this_01 = *(ForElementType<unsigned_int> **)(pFVar19 + 0x80);
        }
        *(uint *)(this_01->InlineData + (longlong)((int)uVar13 >> 5) * 4) =
             *(uint *)(this_01->InlineData + (longlong)((int)uVar13 >> 5) * 4) &
             0xffffffffU >> (0x20U - (char)iVar9 & 0x1f);
      }
    }
    pFVar17 = pFVar17 + 0xc0;
    pFVar15 = pFVar15 + 0xc0;
    uVar12 = (ulonglong)local_res20;
    pFVar20 = pFVar20 + 0xc0;
    *(undefined4 *)(pFVar19 + 8) = 0xffffffff;
    pFVar19 = pFVar19 + 0xc0;
    pFVar21 = pFVar21 + 0xc0;
  } while( true );
}

// TickBlendInstances @ 14e2badf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UAnimSharingInstance::TickBlendInstances(UAnimSharingInstance *this)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement FVar3;
  FTransitionBlendInstance *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_AnimationSharing_UpdateBlends> FVar16;
  ulonglong uVar17;
  uint *puVar18;
  FName FVar19;
  longlong lVar20;
  uint *puVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  longlong lVar24;
  uint *puVar25;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined1 local_b4 [4];
  uint local_b0;
  uint local_ac;
  uint *local_a8;
  FScriptContainerElement *local_a0;
  FTransitionBlendInstance *local_98;
  longlong local_90;
  uint *local_88;
  longlong local_80;
  FColor_u_0 local_78 [2];
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_50 [2];
  
  FVar16 = StatPtr_STAT_AnimationSharing_UpdateBlends;
  if (StatPtr_STAT_AnimationSharing_UpdateBlends ==
      (FThreadSafeStaticStat<FStat_STAT_AnimationSharing_UpdateBlends>)0x0) {
    pFVar15 = ::FName::FName(local_50,"STAT_AnimationSharing_UpdateBlends");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_AnimationSharing_UpdateBlends>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimationSharing_UpdateBlends,
                        *pFVar15,L"UpdateBlends","STATGROUP_AnimationSharing","STATCAT_Advanced",
                        L"Animation Sharing Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar16;
  bVar8 = false;
  bVar7 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  bVar10 = false;
  bVar9 = false;
  if ((FVar19.ComparisonIndex.Value.Value != 0) || (FVar19.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_78[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_78[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar8 = false;
      bVar7 = true;
      bVar10 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_70.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_70.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_70,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\AnimationSharing\\Source\\AnimationSharing\\Private\\AnimationSharingManager.cpp"
                   ,0x72d);
        bVar8 = true;
        bVar7 = true;
        bVar10 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_68 = FVar19;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar9 = true;
      goto LAB_14e2baf45;
    }
  }
  bVar8 = bVar10;
  bVar7 = bVar9;
  bVar9 = false;
  local_68 = local_60;
  FVar19 = local_60;
LAB_14e2baf45:
  local_b0 = 0;
  if (0 < (this->BlendInstances).ArrayNum) {
    local_90 = 0;
    do {
      lVar24 = local_90;
      uVar12 = 0;
      if ((int)local_b0 < (this->BlendInstances).ArrayNum) {
        uVar12 = ~local_b0 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar23 = (this->BlendInstances).AllocatorInstance.Data;
      lVar24 = lVar24 * 0x38;
      local_a0 = pFVar23;
      local_80 = lVar24;
      if ((pFVar23[lVar24] == (FScriptContainerElement)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Instance.bActive",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\AnimationSharing\\Source\\AnimationSharing\\Private\\AnimationSharingManager.cpp"
                              ,0x731,L"Blends should be active at this point"), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (this->WorldTime < *(float *)(pFVar23 + lVar24 + 4)) {
        if (pFVar23[lVar24 + 1] == (FScriptContainerElement)0x0) {
          local_ac = *(uint *)(pFVar23 + lVar24 + 0x28);
          uVar17 = (ulonglong)(int)local_ac;
          puVar18 = *(uint **)(pFVar23 + lVar24 + 0x20);
          local_88 = puVar18 + uVar17;
          while( true ) {
            puVar21 = local_88;
            local_a8 = puVar18;
            if (*(int *)(pFVar23 + lVar24 + 0x28) != (int)uVar17) {
              local_b6 = 0;
              `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_b6);
            }
            if (puVar18 == puVar21) break;
            uVar12 = *puVar18;
            lVar20 = (longlong)(int)uVar12;
            SetLeaderComponentForActor
                      (this,uVar12,
                       (USkeletalMeshComponent *)**(undefined8 **)(pFVar23 + lVar24 + 0x18));
            uVar13 = 0;
            if ((int)uVar12 < (this->PerActorData).ArrayNum) {
              uVar13 = ~uVar12 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar23 = (this->PerActorData).AllocatorInstance.Data;
            puVar21 = *(uint **)(pFVar23 + lVar20 * 0x48 + 0x20);
            iVar14 = *(int *)(pFVar23 + lVar20 * 0x48 + 0x28);
            puVar18 = puVar21 + iVar14;
            while( true ) {
              if (*(int *)(pFVar23 + lVar20 * 0x48 + 0x28) != iVar14) {
                local_b5 = 0;
                `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_b5);
              }
              if (puVar21 == puVar18) break;
              uVar12 = *puVar21;
              uVar13 = 0;
              if ((int)uVar12 < (this->PerComponentData).ArrayNum) {
                uVar13 = ~uVar12 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              GetComponent(this,(FPerComponentData *)
                                ((this->PerComponentData).AllocatorInstance.Data +
                                (longlong)(int)uVar12 * 0xc));
              puVar21 = puVar21 + 1;
            }
            uVar17 = (ulonglong)local_ac;
            puVar18 = local_a8 + 1;
            pFVar23 = local_a0;
            lVar24 = local_80;
          }
          pFVar23[lVar24 + 1] = (FScriptContainerElement)0x1;
        }
        puVar21 = *(uint **)(pFVar23 + lVar24 + 0x20);
        bVar10 = false;
        iVar14 = *(int *)(pFVar23 + lVar24 + 0x28);
        puVar18 = puVar21 + iVar14;
        while( true ) {
          pFVar23 = local_a0;
          if (*(int *)(local_a0 + lVar24 + 0x28) != iVar14) {
            local_b4[0] = 0;
            `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_b4);
          }
          if (puVar21 == puVar18) goto LAB_14e2bb7f8;
          uVar12 = *puVar21;
          uVar13 = 0;
          if ((int)uVar12 < (this->PerActorData).ArrayNum) {
            uVar13 = ~uVar12 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((this->PerActorData).AllocatorInstance.Data[(longlong)(int)uVar12 * 0x48 + 0xc] !=
              (FScriptContainerElement)0x0) break;
          puVar21 = puVar21 + 1;
        }
        bVar10 = true;
        pFVar23 = local_a0;
LAB_14e2bb7f8:
        FVar2 = pFVar23[lVar24 + 0xc];
        if (((this->PerStateData).ArrayNum <= (int)(uint)(byte)FVar2) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (((this->PerStateData).AllocatorInstance.Data[(ulonglong)(byte)FVar2 * 0xc0] ==
             (FScriptContainerElement)0x0) &&
           (SetComponentUsage(this,true,(uchar)pFVar23[lVar24 + 0xc],
                              *(uint *)(pFVar23 + lVar24 + 0x10)), bVar10)) {
          SetComponentTick(this,(uchar)pFVar23[lVar24 + 0xc],*(uint *)(pFVar23 + lVar24 + 0x10));
        }
        FVar2 = pFVar23[lVar24 + 0xd];
        if (((this->PerStateData).ArrayNum <= (int)(uint)(byte)FVar2) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (((this->PerStateData).AllocatorInstance.Data[(ulonglong)(byte)FVar2 * 0xc0] ==
             (FScriptContainerElement)0x0) &&
           (SetComponentUsage(this,true,(uchar)pFVar23[lVar24 + 0xd],
                              *(uint *)(pFVar23 + lVar24 + 0x14)), bVar10)) {
          SetComponentTick(this,(uchar)pFVar23[lVar24 + 0xd],*(uint *)(pFVar23 + lVar24 + 0x14));
        }
      }
      else {
        FVar2 = pFVar23[lVar24 + 0xd];
        if (((this->PerStateData).ArrayNum <= (int)(uint)(byte)FVar2) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar3 = pFVar23[lVar24 + 0xc];
        FVar2 = (this->PerStateData).AllocatorInstance.Data[(ulonglong)(byte)FVar2 * 0xc0];
        if (((this->PerStateData).ArrayNum <= (int)(uint)(byte)FVar3) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (FVar2 == (FScriptContainerElement)0x0) {
          if ((this->PerStateData).AllocatorInstance.Data[(ulonglong)(byte)FVar3 * 0xc0] ==
              (FScriptContainerElement)0x0) {
            local_ac = *(uint *)(pFVar23 + lVar24 + 0x28);
            uVar17 = (ulonglong)(int)local_ac;
            puVar18 = *(uint **)(pFVar23 + lVar24 + 0x20);
            local_88 = puVar18 + uVar17;
            while( true ) {
              puVar21 = local_88;
              local_a8 = puVar18;
              if (*(int *)(pFVar23 + lVar24 + 0x28) != (int)uVar17) {
                local_res20[0] = 0;
                `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_res20);
              }
              if (puVar18 == puVar21) break;
              uVar12 = *puVar18;
              lVar20 = (longlong)(int)uVar12;
              uVar13 = 0;
              if ((int)uVar12 < (this->PerActorData).ArrayNum) {
                uVar13 = ~uVar12 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if ((this->PerActorData).AllocatorInstance.Data[lVar20 * 0x48] ==
                  pFVar23[lVar24 + 0xd]) {
                SetPermutationFollowerComponent
                          (this,(uchar)pFVar23[lVar24 + 0xd],uVar12,
                           *(uint *)(local_a0 + lVar24 + 0x14));
                uVar13 = 0;
                if ((int)uVar12 < (this->PerActorData).ArrayNum) {
                  uVar13 = ~uVar12 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pFVar23 = (this->PerActorData).AllocatorInstance.Data;
                puVar25 = *(uint **)(pFVar23 + lVar20 * 0x48 + 0x20);
                iVar14 = *(int *)(pFVar23 + lVar20 * 0x48 + 0x28);
                puVar21 = puVar25 + iVar14;
                while( true ) {
                  if (*(int *)(pFVar23 + lVar20 * 0x48 + 0x28) != iVar14) {
                    local_b8 = 0;
                    `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(&local_b8);
                  }
                  puVar18 = local_a8;
                  lVar24 = local_80;
                  if (puVar25 == puVar21) break;
                  uVar12 = *puVar25;
                  uVar13 = 0;
                  if ((int)uVar12 < (this->PerComponentData).ArrayNum) {
                    uVar13 = ~uVar12 >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  GetComponent(this,(FPerComponentData *)
                                    ((this->PerComponentData).AllocatorInstance.Data +
                                    (longlong)(int)uVar12 * 0xc));
                  puVar25 = puVar25 + 1;
                }
              }
              uVar17 = (ulonglong)local_ac;
              puVar18 = puVar18 + 1;
              pFVar23 = local_a0;
            }
          }
        }
        else {
          local_ac = *(uint *)(pFVar23 + lVar24 + 0x28);
          uVar17 = (ulonglong)(int)local_ac;
          puVar18 = *(uint **)(pFVar23 + lVar24 + 0x20);
          local_88 = puVar18 + uVar17;
          while( true ) {
            puVar21 = local_88;
            local_a8 = puVar18;
            if (*(int *)(pFVar23 + lVar24 + 0x28) != (int)uVar17) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res10);
            }
            if (puVar18 == puVar21) break;
            lVar22 = 0x18;
            uVar12 = *puVar18;
            lVar20 = (longlong)(int)uVar12;
            if (*(char *)(*(longlong *)(pFVar23 + lVar24 + 0x18) + 0x24) != '\0') {
              lVar22 = 0x10;
            }
            SetLeaderComponentForActor
                      (this,uVar12,
                       *(USkeletalMeshComponent **)(lVar22 + *(longlong *)(pFVar23 + lVar24 + 0x18))
                      );
            uVar13 = 0;
            if ((int)uVar12 < (this->PerActorData).ArrayNum) {
              uVar13 = ~uVar12 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            (this->PerActorData).AllocatorInstance.Data[lVar20 * 0x48 + 2] =
                 (FScriptContainerElement)0x0;
            uVar13 = 0;
            if ((int)uVar12 < (this->PerActorData).ArrayNum) {
              uVar13 = ~uVar12 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar23 = (this->PerActorData).AllocatorInstance.Data;
            puVar21 = *(uint **)(pFVar23 + lVar20 * 0x48 + 0x20);
            iVar14 = *(int *)(pFVar23 + lVar20 * 0x48 + 0x28);
            puVar18 = puVar21 + iVar14;
            while( true ) {
              if (*(int *)(pFVar23 + lVar20 * 0x48 + 0x28) != iVar14) {
                local_res18[0] = 0;
                `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_res18);
              }
              if (puVar21 == puVar18) break;
              uVar12 = *puVar21;
              uVar13 = 0;
              if ((int)uVar12 < (this->PerComponentData).ArrayNum) {
                uVar13 = ~uVar12 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              GetComponent(this,(FPerComponentData *)
                                ((this->PerComponentData).AllocatorInstance.Data +
                                (longlong)(int)uVar12 * 0xc));
              puVar21 = puVar21 + 1;
            }
            uVar17 = (ulonglong)local_ac;
            puVar18 = local_a8 + 1;
            pFVar23 = local_a0;
            lVar24 = local_80;
          }
        }
        pFVar4 = *(FTransitionBlendInstance **)(pFVar23 + lVar24 + 0x18);
        if (pFVar4->TransitionInstance != (UAnimSharingTransitionInstance *)0x0) {
          (**(code **)(pFVar4->SkeletalMeshComponent->_padding_ + 0x420))
                    (pFVar4->SkeletalMeshComponent,0);
          (**(code **)(pFVar4->SkeletalMeshComponent->_padding_ + 0x4d0))
                    (pFVar4->SkeletalMeshComponent,pFVar4->FromComponent);
          (**(code **)(pFVar4->SkeletalMeshComponent->_padding_ + 0x4d0))
                    (pFVar4->SkeletalMeshComponent,pFVar4->ToComponent);
        }
        pFVar5 = (this->BlendInstanceStack).AvailableInstances.AllocatorInstance.Data;
        local_98 = pFVar4;
        if (((pFVar5 <= (FScriptContainerElement *)&local_98) &&
            ((FScriptContainerElement *)&local_98 <
             pFVar5 + (longlong)(this->BlendInstanceStack).AvailableInstances.ArrayMax * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar14 = (this->BlendInstanceStack).AvailableInstances.ArrayNum;
        piVar1 = &(this->BlendInstanceStack).AvailableInstances.ArrayMax;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)&this->BlendInstanceStack,piVar1);
        }
        (this->BlendInstanceStack).AvailableInstances.ArrayNum = iVar14 + 1;
        *(FTransitionBlendInstance **)
         ((this->BlendInstanceStack).AvailableInstances.AllocatorInstance.Data +
         (longlong)iVar14 * 8) = local_98;
        TArray<FTransitionBlendInstance_*,TSizedDefaultAllocator<32>_>::RemoveSwap
                  (&(this->BlendInstanceStack).InUseInstances,&local_98,Default);
        puVar21 = *(uint **)(pFVar23 + lVar24 + 0x20);
        iVar14 = *(int *)(pFVar23 + lVar24 + 0x28);
        puVar18 = puVar21 + iVar14;
        while( true ) {
          if (*(int *)(pFVar23 + local_80 + 0x28) != iVar14) {
            local_b7 = 0;
            `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_b7);
          }
          uVar12 = local_b0;
          if (puVar21 == puVar18) break;
          uVar12 = *puVar21;
          uVar13 = 0;
          if ((int)uVar12 < (this->PerActorData).ArrayNum) {
            uVar13 = ~uVar12 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(undefined4 *)
           ((this->PerActorData).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x48 + 0x10) =
               0xffffffff;
          uVar13 = 0;
          if ((int)uVar12 < (this->PerActorData).ArrayNum) {
            uVar13 = ~uVar12 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          puVar21 = puVar21 + 1;
          (this->PerActorData).AllocatorInstance.Data[(longlong)(int)uVar12 * 0x48 + 3] =
               (FScriptContainerElement)0x0;
          pFVar23 = local_a0;
        }
        RemoveBlendInstance(this,local_b0);
        local_b0 = uVar12 - 1;
        local_90 = local_90 + -1;
      }
      local_b0 = local_b0 + 1;
      local_90 = local_90 + 1;
      FVar19 = local_68;
    } while ((int)local_b0 < (this->BlendInstances).ArrayNum);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  return;
}

// TickDebugInformation @ 14e2bb990

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAnimSharingInstance::TickDebugInformation(UAnimSharingInstance *this)

{
  FScriptContainerElement FVar1;
  int iVar2;
  longlong lVar3;
  AActor *pAVar4;
  USceneComponent *pUVar5;
  code *pcVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  FText *pFVar15;
  UWorld *pUVar16;
  USkeletalMeshComponent *pUVar17;
  UObject *pUVar18;
  ulonglong uVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  FString *pFVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  FColor *pFVar25;
  longlong lVar26;
  undefined1 local_res10 [8];
  FColor_u_0 local_res18 [2];
  ulonglong local_res20;
  longlong local_200;
  FName local_1f8;
  FString local_1f0;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  TVector<double>_u_0 local_188;
  UAnimSharingInstance *local_170;
  FScriptContainerElement *local_168;
  FScriptContainerElement local_160;
  UAnimSharingInstance *local_158;
  FScriptContainerElement *local_150;
  FScriptContainerElement local_148;
  FText local_140;
  FText local_130;
  FText local_120;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  
  fVar10 = __real_3c83126f;
  fVar7 = __real_3f800000;
  if ((GLeaderComponentsVisible != 0) && (1 < GAnimationSharingDebugging)) {
    pFVar21 = (this->PerStateData).AllocatorInstance.Data;
    iVar2 = (this->PerStateData).ArrayNum;
    uVar19 = (ulonglong)iVar2;
    local_res20 = CONCAT44(local_res20._4_4_,iVar2);
    pFVar24 = pFVar21 + 0x40;
    pFVar23 = pFVar21 + uVar19 * 0xc0;
    while( true ) {
      if ((this->PerStateData).ArrayNum != (int)uVar19) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FPerStateData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar21 == pFVar23) break;
      uVar20 = 0;
      if (0 < *(int *)(pFVar24 + 8)) {
        lVar26 = 0;
        do {
          if ((((int)uVar20 < 0) || (*(int *)(pFVar24 + 0x48) <= (int)uVar20)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5c6,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((((int)uVar20 < 0) || (*(int *)(pFVar24 + 8) <= (int)uVar20)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5c6,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar15 = UEnum::GetDisplayNameTextByValue
                              ((this->StateEnum).field0_0x0.DebugPtr,&local_140,
                               (ulonglong)(byte)pFVar24[-0x2f]);
          FText::ToString(pFVar15);
          ::FString::PrintfImpl(&local_1c8,L"[%s]\n In Use %s - Required %s");
          if (local_140.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
          }
          uVar13 = 0;
          if ((int)uVar20 < *(int *)(pFVar24 + -0x18)) {
            uVar13 = ~uVar20 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar3 = *(longlong *)(lVar26 + *(longlong *)(pFVar24 + -0x20));
          local_1e0 = *(double *)(lVar3 + 0x210);
          dStack_1d8 = *(double *)(lVar3 + 0x218);
          local_1d0 = *(double *)(lVar3 + 0x220);
          uVar13 = 0;
          if ((int)uVar20 < *(int *)(pFVar24 + -0x18)) {
            uVar13 = ~uVar20 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_188._s_0.X = local_1e0;
          local_188._s_0.Y = dStack_1d8;
          local_188._s_0.Z =
               local_1d0 +
               *(double *)(*(longlong *)(lVar26 + *(longlong *)(pFVar24 + -0x20)) + 0x138);
          pUVar16 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
          DrawDebugString(pUVar16,(TVector<double> *)&local_188._s_0,&local_1c8,(AActor *)0x0,
                          &FColor::White,fVar10,false,fVar7);
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
          uVar20 = uVar20 + 1;
          lVar26 = lVar26 + 8;
        } while ((int)uVar20 < *(int *)(pFVar24 + 8));
      }
      uVar19 = local_res20 & 0xffffffff;
      pFVar21 = pFVar21 + 0xc0;
      pFVar24 = pFVar24 + 0xc0;
    }
  }
  fVar9 = __real_bf800000;
  dVar8 = __real_4059000000000000;
  uVar20 = 0;
  if (0 < (this->RegisteredActors).ArrayNum) {
    local_200 = 0;
    local_res20 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar20 < (this->RegisteredActors).ArrayNum) {
        uVar13 = ~uVar20 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pAVar4 = *(AActor **)((this->RegisteredActors).AllocatorInstance.Data + local_200);
      if (pAVar4 != (AActor *)0x0) {
        uVar13 = 0;
        if ((int)uVar20 < (this->PerActorData).ArrayNum) {
          uVar13 = ~uVar20 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar24 = (this->PerActorData).AllocatorInstance.Data + local_res20;
        FVar1 = *pFVar24;
        if (((pFVar24[3] == (FScriptContainerElement)0x0) ||
            (local_res18[0] = FColor::Blue.field0_0x0, *(int *)(pFVar24 + 0x10) == -1)) &&
           ((pFVar24[4] == (FScriptContainerElement)0x0 ||
            (local_res18[0] = FColor::Red.field0_0x0, *(int *)(pFVar24 + 0x14) == -1)))) {
          local_res18[0] = FColor::Green.field0_0x0;
        }
        local_170 = this;
        local_168 = pFVar24;
        local_160 = FVar1;
        `UAnimSharingInstance::TickDebugInformation'::__l16::<lambda_2>::operator()
                  (&local_170,&local_198);
        local_158 = this;
        local_150 = pFVar24;
        local_148 = FVar1;
        `UAnimSharingInstance::TickDebugInformation'::__l16::<lambda_3>::operator()
                  (&local_158,&local_1a8);
        fVar11 = GAnimationSharingDebugFontScale;
        pFVar25 = (FColor *)local_res18;
        if (GAnimationSharingDisableDebugMaterials != 0) {
          pFVar25 = &FColor::Green;
        }
        local_110._s_0.Z = dVar8;
        pFVar22 = &local_1a8;
        if (GAnimationSharingDebugging < 3) {
          pFVar22 = &local_198;
        }
        local_110._s_0.X = 0.0;
        local_110._s_0.Y = 0.0;
        pUVar16 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
        DrawDebugString(pUVar16,(TVector<double> *)&local_110._s_0,pFVar22,pAVar4,pFVar25,fVar10,
                        false,fVar11);
        if (1 < GAnimationSharingDebugging) {
          pFVar15 = UEnum::GetDisplayNameTextByValue
                              ((this->StateEnum).field0_0x0.DebugPtr,&local_120,
                               (ulonglong)(byte)pFVar24[1]);
          FText::ToString(pFVar15);
          pFVar15 = UEnum::GetDisplayNameTextByValue
                              ((this->StateEnum).field0_0x0.DebugPtr,&local_130,
                               (ulonglong)(byte)*pFVar24);
          FText::ToString(pFVar15);
          local_1f8 = (FName)pAVar4->_padding_;
          ::FName::ToString(&local_1f8,&local_1f0);
          ::FString::PrintfImpl(&local_1b8,L"%s\n\tState %s [%i]\n\t%s\n\tBlending %i On-Demand %i")
          ;
          if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
          }
          if (local_130.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
          }
          if (local_120.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
          }
          UEngine::AddOnScreenDebugMessage
                    (GEngine,0x539,fVar7,FColor::White,&local_1b8,true,
                     &UE::Math::TVector2<double>::UnitVector);
          if ((*(int *)(pFVar24 + 0x28) < 1) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar13 = **(uint **)(pFVar24 + 0x20);
          uVar14 = 0;
          if ((int)uVar13 < (this->PerComponentData).ArrayNum) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pUVar17 = GetComponent(this,(FPerComponentData *)
                                      ((this->PerComponentData).AllocatorInstance.Data +
                                      (longlong)(int)uVar13 * 0xc));
          if ((pUVar17 != (USkeletalMeshComponent *)0x0) &&
             (pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar17->_padding_),
             pUVar18 != (UObject *)0x0)) {
            local_f8._0_4_ = *(undefined4 *)&pUVar18[0xd].field_0x8;
            local_f8._4_4_ = *(undefined4 *)&pUVar18[0xd].field_0xc;
            local_f8._8_4_ = *(undefined4 *)&pUVar18[0xd].field_0x10;
            local_f8._12_4_ = *(undefined4 *)&pUVar18[0xd].field_0x14;
            local_f8._s_0.Z = (double)*(undefined8 *)&pUVar18[0xd].field_0x18;
            pUVar5 = (pAVar4->RootComponent).field0_0x0.DebugPtr;
            local_e0._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            local_e0._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            local_e0._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            local_e0._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            local_e0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            if (pUVar5 != (USceneComponent *)0x0) {
              local_b8 = (pUVar5->ComponentToWorld).Translation.ZW.m128d_f64[0];
              local_c8 = *(undefined4 *)(pUVar5->ComponentToWorld).Translation.XY.m128d_f64;
              uStack_c4 = *(undefined4 *)
                           ((longlong)(pUVar5->ComponentToWorld).Translation.XY.m128d_f64 + 4);
              uStack_c0 = *(undefined4 *)((pUVar5->ComponentToWorld).Translation.XY.m128d_f64 + 1);
              uStack_bc = *(undefined4 *)
                           ((longlong)(pUVar5->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
              local_e0._0_4_ = local_c8;
              local_e0._4_4_ = uStack_c4;
              local_e0._8_4_ = uStack_c0;
              local_e0._12_4_ = uStack_bc;
              local_e0._s_0.Z = local_b8;
            }
            pUVar16 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
            DrawDebugLine(pUVar16,(TVector<double> *)&local_e0._s_0,
                          (TVector<double> *)&local_f8._s_0,&FColor::Magenta,false,fVar9,'\0',0.0);
          }
          if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
          }
        }
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
      }
      local_res20 = local_res20 + 0x48;
      local_200 = local_200 + 8;
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < (this->RegisteredActors).ArrayNum);
  }
  return;
}

// TickOnDemandInstances @ 14e2bc210

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAnimSharingInstance::TickOnDemandInstances(UAnimSharingInstance *this)

{
  float fVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FScriptContainerElement FVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_AnimationSharing_UpdateOnDemands> FVar16;
  ulonglong uVar17;
  longlong lVar18;
  FName FVar19;
  longlong lVar20;
  uint uVar21;
  uint *puVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  uint *puVar26;
  byte local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_b0;
  undefined1 local_af [3];
  uint local_ac;
  longlong local_a8;
  bool local_a0 [8];
  longlong local_98;
  uint *local_90;
  FColor_u_0 local_88 [2];
  uint *local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_58 [3];
  
  FVar16 = StatPtr_STAT_AnimationSharing_UpdateOnDemands;
  if (StatPtr_STAT_AnimationSharing_UpdateOnDemands ==
      (FThreadSafeStaticStat<FStat_STAT_AnimationSharing_UpdateOnDemands>)0x0) {
    pFVar15 = ::FName::FName(local_58,"STAT_AnimationSharing_UpdateOnDemands");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_AnimationSharing_UpdateOnDemands>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimationSharing_UpdateOnDemands,
                        *pFVar15,L"UpdateOnDemands","STATGROUP_AnimationSharing","STATCAT_Advanced",
                        L"Animation Sharing Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar16;
  bVar7 = false;
  bVar8 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  bVar9 = false;
  bVar10 = false;
  if ((FVar19.ComparisonIndex.Value.Value != 0) || (FVar19.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_88[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_88[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar7 = false;
      bVar8 = true;
      bVar9 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_78.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\AnimationSharing\\Source\\AnimationSharing\\Private\\AnimationSharingManager.cpp"
                   ,0x58e);
        bVar7 = true;
        bVar8 = true;
        bVar9 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_70 = FVar19;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar9 = true;
      goto LAB_14e2bc3a4;
    }
  }
  bVar8 = bVar10;
  bVar7 = bVar9;
  bVar9 = false;
  local_70 = local_68;
  FVar19 = local_68;
LAB_14e2bc3a4:
  local_ac = 0;
  if (0 < (this->OnDemandInstances).ArrayNum) {
    local_98 = 0;
    do {
      lVar18 = local_98;
      uVar24 = local_ac;
      local_90 = (uint *)CONCAT44(local_90._4_4_,~local_ac >> 0x1f);
      uVar14 = 0;
      if ((int)local_ac < (this->OnDemandInstances).ArrayNum) {
        uVar14 = ~local_ac >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (this->OnDemandInstances).AllocatorInstance.Data;
      lVar18 = lVar18 * 0x30;
      local_a8 = lVar18;
      if ((pFVar4[lVar18] == (FScriptContainerElement)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Instance.bActive",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\AnimationSharing\\Source\\AnimationSharing\\Private\\AnimationSharingManager.cpp"
                              ,0x592,L"Container should be active at this point"), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      SetComponentUsage(this,true,(uchar)pFVar4[lVar18 + 3],*(uint *)(pFVar4 + lVar18 + 0x14));
      puVar26 = *(uint **)(pFVar4 + lVar18 + 0x20);
      iVar3 = *(int *)(pFVar4 + lVar18 + 0x28);
      puVar22 = puVar26 + iVar3;
      while( true ) {
        if (*(int *)(pFVar4 + lVar18 + 0x28) != iVar3) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (puVar26 == puVar22) goto LAB_14e2bc533;
        uVar14 = *puVar26;
        uVar21 = 0;
        if ((int)uVar14 < (this->PerActorData).ArrayNum) {
          uVar21 = ~uVar14 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((this->PerActorData).AllocatorInstance.Data[(longlong)(int)uVar14 * 0x48 + 0xc] !=
            (FScriptContainerElement)0x0) break;
        puVar26 = puVar26 + 1;
      }
      SetComponentTick(this,(uchar)pFVar4[lVar18 + 3],*(uint *)(pFVar4 + lVar18 + 0x14));
LAB_14e2bc533:
      if (this->WorldTime < *(float *)(pFVar4 + lVar18 + 0x10)) {
        if ((pFVar4[lVar18 + 1] == (FScriptContainerElement)0x0) &&
           (*(float *)(pFVar4 + lVar18 + 0xc) <= this->WorldTime)) {
          puVar22 = *(uint **)(pFVar4 + lVar18 + 0x20);
          iVar3 = *(int *)(pFVar4 + lVar18 + 0x28);
          local_80 = puVar22 + iVar3;
          while( true ) {
            puVar26 = local_80;
            if (*(int *)(pFVar4 + local_a8 + 0x28) != iVar3) {
              local_af[0] = 0;
              `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_af);
            }
            if (puVar22 == puVar26) break;
            uVar14 = *puVar22;
            lVar18 = (longlong)(int)uVar14;
            if ((this->ScalabilitySettings).UseBlendTransitions.Default == false) {
LAB_14e2bd065:
              local_res8 = 0;
            }
            else {
              uVar21 = ~uVar14 >> 0x1f;
              uVar24 = 0;
              if ((int)uVar14 < (this->PerActorData).ArrayNum) {
                uVar24 = uVar21;
              }
              if ((uVar24 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              fVar1 = (this->ScalabilitySettings).BlendSignificanceValue.Default;
              pFVar5 = (this->PerActorData).AllocatorInstance.Data + lVar18 * 0x48 + 8;
              uVar24 = local_ac;
              if (*(float *)pFVar5 <= fVar1 && fVar1 != *(float *)pFVar5) goto LAB_14e2bd065;
              FVar11 = (FScriptContainerElement)DetermineStateForActor(this,uVar14,local_a0);
              uVar24 = 0;
              if ((int)uVar14 < (this->PerActorData).ArrayNum) {
                uVar24 = uVar21;
              }
              if ((uVar24 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if ((this->PerActorData).AllocatorInstance.Data[lVar18 * 0x48] == FVar11) {
                uVar24 = 0;
                if ((int)uVar14 < (this->PerActorData).ArrayNum) {
                  uVar24 = uVar21;
                }
                if ((uVar24 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              if (pFVar4[local_a8 + 2] == (FScriptContainerElement)0x0) {
                FVar11 = pFVar4[local_a8 + 4];
                if (FVar11 != (FScriptContainerElement)0xff) goto LAB_14e2bcf20;
                uVar24 = 0;
                if ((int)uVar14 < (this->PerActorData).ArrayNum) {
                  uVar24 = uVar21;
                }
                if ((uVar24 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar24 = local_ac;
                if ((this->PerActorData).AllocatorInstance.Data[lVar18 * 0x48] !=
                    pFVar4[local_a8 + 3]) {
                  uVar24 = 0;
                  if ((int)uVar14 < (this->PerActorData).ArrayNum) {
                    uVar24 = uVar21;
                  }
                  if ((uVar24 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  FVar11 = (this->PerActorData).AllocatorInstance.Data[lVar18 * 0x48];
                  goto LAB_14e2bcf16;
                }
              }
              else {
                uVar24 = 0;
                if ((int)uVar14 < (this->PerActorData).ArrayNum) {
                  uVar24 = uVar21;
                }
                if ((uVar24 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                FVar11 = (this->PerActorData).AllocatorInstance.Data[lVar18 * 0x48 + 1];
LAB_14e2bcf16:
                uVar24 = local_ac;
                if (FVar11 != (FScriptContainerElement)0xff) {
LAB_14e2bcf20:
                  uVar24 = local_ac;
                  iVar13 = 0;
                  if ((int)local_ac < (this->OnDemandInstances).ArrayNum) {
                    iVar13 = (int)local_90;
                  }
                  if ((iVar13 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  lVar18 = local_a8;
                  uVar14 = SetupBlend(this,(uchar)(this->OnDemandInstances).AllocatorInstance.Data
                                                  [local_a8 + 3],(uchar)FVar11,uVar14);
                  if (uVar14 != 0xffffffff) {
                    uVar21 = 0;
                    if ((int)uVar14 < (this->BlendInstances).ArrayNum) {
                      uVar21 = ~uVar14 >> 0x1f;
                    }
                    if ((uVar21 == 0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar10)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    *(uint *)((this->BlendInstances).AllocatorInstance.Data +
                             (longlong)(int)uVar14 * 0x38 + 0x30) = uVar24;
                    uVar21 = 0;
                    if ((int)uVar14 < (this->BlendInstances).ArrayNum) {
                      uVar21 = ~uVar14 >> 0x1f;
                    }
                    if ((uVar21 == 0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar10)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    *(undefined4 *)(pFVar4 + lVar18 + 0x18) =
                         *(undefined4 *)
                          ((this->BlendInstances).AllocatorInstance.Data +
                          (longlong)(int)uVar14 * 0x38 + 0x14);
                  }
                }
              }
              local_res8 = 1;
            }
            pFVar4[local_a8 + 1] =
                 (FScriptContainerElement)((byte)pFVar4[local_a8 + 1] | local_res8);
            puVar22 = puVar22 + 1;
          }
        }
      }
      else {
        SetComponentUsage(this,false,(uchar)pFVar4[lVar18 + 3],*(uint *)(pFVar4 + lVar18 + 0x14));
        uVar24 = *(uint *)(pFVar4 + lVar18 + 0x28);
        uVar17 = (ulonglong)(int)uVar24;
        puVar22 = *(uint **)(pFVar4 + lVar18 + 0x20);
        local_80 = puVar22 + uVar17;
        while( true ) {
          puVar26 = local_80;
          local_90 = puVar22;
          if (*(int *)(pFVar4 + lVar18 + 0x28) != (int)uVar17) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          if (puVar22 == puVar26) break;
          uVar14 = *puVar22;
          lVar20 = (longlong)(int)uVar14;
          uVar25 = ~uVar14 >> 0x1f;
          uVar21 = 0;
          if ((int)uVar14 < (this->PerActorData).ArrayNum) {
            uVar21 = uVar25;
          }
          if ((uVar21 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar11 = (this->PerActorData).AllocatorInstance.Data[lVar20 * 0x48];
          if (pFVar4[lVar18 + 2] == (FScriptContainerElement)0x0) {
            FVar2 = pFVar4[lVar18 + 4];
            if (FVar2 != (FScriptContainerElement)0xff) {
              uVar21 = *(uint *)(pFVar4 + lVar18 + 0x18);
              goto LAB_14e2bc675;
            }
            if (FVar11 != pFVar4[lVar18 + 3]) {
              if (((this->PerStateData).ArrayNum <= (int)(uint)(byte)FVar11) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if (((this->PerStateData).AllocatorInstance.Data[(ulonglong)(byte)FVar11 * 0xc0] ==
                   (FScriptContainerElement)0x0) ||
                 (pFVar4[lVar18 + 1] == (FScriptContainerElement)0x0)) {
                if (*(uint *)(pFVar4 + lVar18 + 0x18) == 0xffffffff) {
                  SetupFollowerComponent(this,(uchar)FVar11,uVar14);
                  if (((this->PerStateData).ArrayNum <= (int)(uint)(byte)FVar11) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  if ((this->PerStateData).AllocatorInstance.Data[(ulonglong)(byte)FVar11 * 0xc0] !=
                      (FScriptContainerElement)0x0) {
                    uVar21 = 0;
                    if ((int)uVar14 < (this->PerActorData).ArrayNum) {
                      uVar21 = uVar25;
                    }
                    if ((uVar21 == 0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar10)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    uVar21 = *(uint *)((this->PerActorData).AllocatorInstance.Data +
                                      lVar20 * 0x48 + 0x14);
                    lVar23 = (longlong)(int)uVar21;
                    if (uVar21 != 0xffffffff) {
                      uVar12 = 0;
                      if ((int)uVar21 < (this->OnDemandInstances).ArrayNum) {
                        uVar12 = ~uVar21 >> 0x1f;
                      }
                      if ((uVar12 == 0) &&
                         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar10)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      pFVar5 = (this->OnDemandInstances).AllocatorInstance.Data;
                      if (pFVar5[lVar23 * 0x30] == (FScriptContainerElement)0x0) {
                        pFVar5[lVar23 * 0x30] = (FScriptContainerElement)0x1;
                        *(float *)(pFVar5 + lVar23 * 0x30 + 8) = this->WorldTime;
                      }
                    }
                  }
                }
                else {
                  SetPermutationFollowerComponent
                            (this,(uchar)FVar11,uVar14,*(uint *)(pFVar4 + lVar18 + 0x18));
                }
                uVar21 = 0;
                if ((int)uVar14 < (this->PerActorData).ArrayNum) {
                  uVar21 = uVar25;
                }
                if ((uVar21 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                FVar2 = (this->PerActorData).AllocatorInstance.Data[lVar20 * 0x48];
                uVar21 = 0;
                if ((int)uVar14 < (this->PerActorData).ArrayNum) {
                  uVar21 = uVar25;
                }
                if ((uVar21 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                (this->PerActorData).AllocatorInstance.Data[lVar20 * 0x48 + 1] = FVar2;
                uVar21 = 0;
                if ((int)uVar14 < (this->PerActorData).ArrayNum) {
                  uVar21 = uVar25;
                }
                if ((uVar21 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                (this->PerActorData).AllocatorInstance.Data[lVar20 * 0x48] = FVar11;
              }
            }
          }
          else {
            uVar21 = 0;
            if ((int)uVar14 < (this->PerActorData).ArrayNum) {
              uVar21 = uVar25;
            }
            if ((uVar21 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FVar2 = (this->PerActorData).AllocatorInstance.Data[lVar20 * 0x48 + 1];
            uVar21 = *(uint *)(pFVar4 + lVar18 + 0x18);
LAB_14e2bc675:
            if (uVar21 == 0xffffffff) {
              SetupFollowerComponent(this,(uchar)FVar2,uVar14);
              if (((this->PerStateData).ArrayNum <= (int)(uint)(byte)FVar2) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if ((this->PerStateData).AllocatorInstance.Data[(ulonglong)(byte)FVar2 * 0xc0] !=
                  (FScriptContainerElement)0x0) {
                uVar21 = 0;
                if ((int)uVar14 < (this->PerActorData).ArrayNum) {
                  uVar21 = uVar25;
                }
                if ((uVar21 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar21 = *(uint *)((this->PerActorData).AllocatorInstance.Data +
                                  lVar20 * 0x48 + 0x14);
                lVar23 = (longlong)(int)uVar21;
                if (uVar21 != 0xffffffff) {
                  uVar12 = 0;
                  if ((int)uVar21 < (this->OnDemandInstances).ArrayNum) {
                    uVar12 = ~uVar21 >> 0x1f;
                  }
                  if ((uVar12 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pFVar5 = (this->OnDemandInstances).AllocatorInstance.Data;
                  if (pFVar5[lVar23 * 0x30] == (FScriptContainerElement)0x0) {
                    pFVar5[lVar23 * 0x30] = (FScriptContainerElement)0x1;
                    *(float *)(pFVar5 + lVar23 * 0x30 + 8) = this->WorldTime;
                  }
                }
              }
            }
            else {
              SetPermutationFollowerComponent(this,(uchar)FVar2,uVar14,uVar21);
            }
            uVar21 = 0;
            if ((int)uVar14 < (this->PerActorData).ArrayNum) {
              uVar21 = uVar25;
            }
            if ((uVar21 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FVar11 = (this->PerActorData).AllocatorInstance.Data[lVar20 * 0x48];
            uVar21 = 0;
            if ((int)uVar14 < (this->PerActorData).ArrayNum) {
              uVar21 = uVar25;
            }
            if ((uVar21 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            (this->PerActorData).AllocatorInstance.Data[lVar20 * 0x48 + 1] = FVar11;
            uVar21 = 0;
            if ((int)uVar14 < (this->PerActorData).ArrayNum) {
              uVar21 = uVar25;
            }
            if ((uVar21 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            (this->PerActorData).AllocatorInstance.Data[lVar20 * 0x48] = FVar2;
          }
          uVar17 = (ulonglong)uVar24;
          puVar22 = local_90 + 1;
        }
        puVar26 = *(uint **)(pFVar4 + lVar18 + 0x20);
        iVar3 = *(int *)(pFVar4 + lVar18 + 0x28);
        puVar22 = puVar26 + iVar3;
        while( true ) {
          if (*(int *)(pFVar4 + lVar18 + 0x28) != iVar3) {
            local_b0 = 0;
            `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_b0);
          }
          uVar24 = local_ac;
          if (puVar26 == puVar22) break;
          uVar24 = *puVar26;
          uVar21 = ~uVar24 >> 0x1f;
          uVar14 = 0;
          if ((int)uVar24 < (this->PerActorData).ArrayNum) {
            uVar14 = uVar21;
          }
          if ((uVar14 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar14 = 0;
          if ((int)uVar24 < (this->PerActorData).ArrayNum) {
            uVar14 = uVar21;
          }
          if ((uVar14 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(undefined4 *)
           ((this->PerActorData).AllocatorInstance.Data + (longlong)(int)uVar24 * 0x48 + 0x14) =
               0xffffffff;
          uVar14 = 0;
          if ((int)uVar24 < (this->PerActorData).ArrayNum) {
            uVar14 = uVar21;
          }
          if ((uVar14 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          puVar26 = puVar26 + 1;
          (this->PerActorData).AllocatorInstance.Data[(longlong)(int)uVar24 * 0x48 + 4] =
               (FScriptContainerElement)0x0;
        }
        RemoveOnDemandInstance(this,local_ac);
        uVar24 = uVar24 - 1;
        local_98 = local_98 + -1;
      }
      local_ac = uVar24 + 1;
      local_98 = local_98 + 1;
      FVar19 = local_70;
    } while ((int)local_ac < (this->OnDemandInstances).ArrayNum);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  return;
}

// UnregisterAllActors @ 14e2bdff0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAnimSharingInstance::UnregisterAllActors(UAnimSharingInstance *this)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  USkeletalMeshComponent *this_00;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong local_res18;
  FScriptContainerElement *local_res20;
  FReadAccessScope local_68;
  
  uVar10 = 0;
  if (0 < (this->RegisteredActors).ArrayNum) {
    local_res10 = 0;
    local_res18 = 0;
    do {
      lVar12 = local_res18;
      uVar7 = 0;
      if ((int)uVar10 < (this->RegisteredActors).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(longlong *)((this->RegisteredActors).AllocatorInstance.Data + lVar12) != 0) {
        uVar7 = 0;
        if ((int)uVar10 < (this->PerActorData).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
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
        pFVar9 = (this->PerActorData).AllocatorInstance.Data + local_res10;
        puVar11 = *(uint **)(pFVar9 + 0x20);
        iVar3 = *(int *)(pFVar9 + 0x28);
        puVar2 = puVar11 + iVar3;
        local_res20 = pFVar9;
        while( true ) {
          if (*(int *)(pFVar9 + 0x28) != iVar3) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if (puVar11 == puVar2) break;
          uVar7 = *puVar11;
          uVar8 = 0;
          if ((int)uVar7 < (this->PerComponentData).ArrayNum) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          this_00 = GetComponent(this,(FPerComponentData *)
                                      ((this->PerComponentData).AllocatorInstance.Data +
                                      (longlong)(int)uVar7 * 0xc));
          if (this_00 != (USkeletalMeshComponent *)0x0) {
            USkinnedMeshComponent::SetLeaderPoseComponent
                      ((USkinnedMeshComponent *)this_00,(USkinnedMeshComponent *)0x0,true,false);
            lVar12 = this_00->_padding_;
            pbVar1 = (byte *)((longlong)&this_00->_padding_ + 2);
            *pbVar1 = *pbVar1 | 2;
            (**(code **)(lVar12 + 0x420))(this_00,1);
            *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ & 0xbf;
          }
          puVar11 = puVar11 + 1;
        }
        *(undefined4 *)(pFVar9 + 0x28) = 0;
        if (*(int *)(pFVar9 + 0x2c) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,(ForAnyElementType *)(pFVar9 + 0x20),0,(int *)(pFVar9 + 0x2c));
        }
        pFVar9 = local_res20;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_res20 + 0x30),
                   &local_68);
        if ((*(int *)(pFVar9 + 0x40) != 0) &&
           (plVar4 = *(longlong **)(pFVar9 + 0x38), plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x68))(plVar4,0xffffffff);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_68);
        lVar12 = local_res18;
      }
      local_res18 = lVar12 + 8;
      local_res10 = local_res10 + 0x48;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (this->RegisteredActors).ArrayNum);
  }
  DestructItems<FPerActorData,int>
            ((FPerActorData *)(this->PerActorData).AllocatorInstance.Data,
             (this->PerActorData).ArrayNum);
  (this->PerActorData).ArrayNum = 0;
  if ((this->PerActorData).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,&(this->PerActorData).AllocatorInstance,0,&(this->PerActorData).ArrayMax);
  }
  (this->PerComponentData).ArrayNum = 0;
  if ((this->PerComponentData).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->PerComponentData).AllocatorInstance,0,
               &(this->PerComponentData).ArrayMax);
  }
  (this->RegisteredActors).ArrayNum = 0;
  if ((this->RegisteredActors).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->RegisteredActors).AllocatorInstance,0,
               &(this->RegisteredActors).ArrayMax);
  }
  return;
}

