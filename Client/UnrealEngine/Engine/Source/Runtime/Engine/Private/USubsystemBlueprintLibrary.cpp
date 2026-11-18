// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// StaticClass @ 1487d6970

UClass * __cdecl USubsystemBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubsystemBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SubsystemBlueprintLibrary",
               &Z_Registration_Info_UClass_USubsystemBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUSubsystemBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<USubsystemBlueprintLibrary>,
               InternalVTableHelperCtorCaller<USubsystemBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubsystemBlueprintLibrary.InnerSingleton;
}

// USubsystemBlueprintLibrary @ 14880a020

USubsystemBlueprintLibrary * __thiscall
USubsystemBlueprintLibrary::USubsystemBlueprintLibrary
          (USubsystemBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7USubsystemBlueprintLibrary__6B_;
  return this;
}

// USubsystemBlueprintLibrary @ 14880a050

USubsystemBlueprintLibrary * __thiscall
USubsystemBlueprintLibrary::USubsystemBlueprintLibrary
          (USubsystemBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7USubsystemBlueprintLibrary__6B_;
  return this;
}

// ~USubsystemBlueprintLibrary @ 14880d3f0

void __thiscall
USubsystemBlueprintLibrary::~USubsystemBlueprintLibrary(USubsystemBlueprintLibrary *this)

{
  *(undefined ***)this = &___7USubsystemBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetAudioEngineSubsystem @ 14883cfd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UAudioEngineSubsystem * __cdecl
USubsystemBlueprintLibrary::GetAudioEngineSubsystem
          (UObject *param_1,TSubclassOf<UAudioEngineSubsystem> param_2)

{
  int iVar1;
  UClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  UWorld *this;
  UAudioEngineSubsystem *pUVar5;
  UClass *pUVar6;
  TObjectPtr<USubsystem> TVar7;
  FSubsystemArray *pFVar8;
  undefined1 local_res18 [8];
  FAudioDeviceHandle local_28;
  
  if (param_1 == (UObject *)0x0) {
    return (UAudioEngineSubsystem *)0x0;
  }
  this = UEngine::GetWorldFromContextObject(GEngine,param_1,ReturnNull);
  if (this == (UWorld *)0x0) {
    return (UAudioEngineSubsystem *)0x0;
  }
  UWorld::GetAudioDevice(this,&local_28);
  bVar4 = FAudioDeviceHandle::IsValid(&local_28);
  if (!bVar4) {
    FAudioDeviceHandle::~FAudioDeviceHandle(&local_28);
    return (UAudioEngineSubsystem *)0x0;
  }
  bVar4 = FAudioDeviceHandle::IsValid(&local_28);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                         ,0x60,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar5 = (UAudioEngineSubsystem *)(*pcVar3)();
    return pUVar5;
  }
  pUVar2 = *(UClass **)param_2.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar2 == (UClass *)0x0)) {
    if (pUVar2 != (UClass *)0x0) goto LAB_14883d08d;
LAB_14883d104:
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3014280564560625717>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                       ,0x35,"SubsystemClass");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UAudioEngineSubsystem *)(*pcVar3)();
      return pUVar5;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
LAB_14883d08d:
    pUVar6 = UAudioEngineSubsystem::StaticClass();
    if (pUVar6 == (UClass *)0x0) goto LAB_14883d104;
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14883d104;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    TVar7 = TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
            ::FindRef((TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
                       *)&((local_28.Device)->SubsystemCollection).field_0x8,
                      (TObjectPtr<UClass_const_>)local_res18);
    pUVar5 = *(UAudioEngineSubsystem **)TVar7.field0_0x0;
    if (pUVar5 != (UAudioEngineSubsystem *)0x0) goto LAB_14883d133;
    pFVar8 = FSubsystemCollectionBase::FindAndPopulateSubsystemArrayInternal
                       ((FSubsystemCollectionBase *)&(local_28.Device)->SubsystemCollection,pUVar2);
    if (0 < (pFVar8->Subsystems).ArrayNum) {
      pUVar5 = *(UAudioEngineSubsystem **)(pFVar8->Subsystems).AllocatorInstance.Data;
      goto LAB_14883d133;
    }
  }
  pUVar5 = (UAudioEngineSubsystem *)0x0;
LAB_14883d133:
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_28);
  return pUVar5;
}

// GetEngineSubsystem @ 14883dfb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UEngineSubsystem * __cdecl
USubsystemBlueprintLibrary::GetEngineSubsystem(TSubclassOf<UEngineSubsystem> param_1)

{
  int iVar1;
  UClass *pUVar2;
  code *pcVar3;
  UEngine *pUVar4;
  bool bVar5;
  UClass *pUVar6;
  TObjectPtr<USubsystem> TVar7;
  FSubsystemArray *pFVar8;
  UEngineSubsystem *pUVar9;
  FObjectSubsystemCollection<UEngineSubsystem> *this;
  undefined1 local_res10 [8];
  
  pUVar2 = *(UClass **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  else if (pUVar2 == (UClass *)0x0) goto LAB_14883e07b;
  pUVar4 = GEngine;
  this = &GEngine->EngineSubsystemCollection;
  pUVar6 = UEngineSubsystem::StaticClass();
  if (pUVar6 != (UClass *)0x0) {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      TVar7 = TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
              ::FindRef((TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
                         *)&(pUVar4->EngineSubsystemCollection).field_0x8,
                        (TObjectPtr<UClass_const_>)local_res10);
      if (*(UEngineSubsystem **)TVar7.field0_0x0 == (UEngineSubsystem *)0x0) {
        pFVar8 = FSubsystemCollectionBase::FindAndPopulateSubsystemArrayInternal
                           ((FSubsystemCollectionBase *)this,pUVar2);
        if ((pFVar8->Subsystems).ArrayNum < 1) {
          return (UEngineSubsystem *)0x0;
        }
        return *(UEngineSubsystem **)(pFVar8->Subsystems).AllocatorInstance.Data;
      }
      return *(UEngineSubsystem **)TVar7.field0_0x0;
    }
  }
LAB_14883e07b:
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3014280564560625717>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                     ,0x35,"SubsystemClass");
  if (!bVar5) {
    return (UEngineSubsystem *)0x0;
  }
  pcVar3 = (code *)swi(3);
  pUVar9 = (UEngineSubsystem *)(*pcVar3)();
  return pUVar9;
}

// GetGameInstanceSubsystem @ 14883e180

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UGameInstanceSubsystem * __cdecl
USubsystemBlueprintLibrary::GetGameInstanceSubsystem
          (UObject *param_1,TSubclassOf<UGameInstanceSubsystem> param_2)

{
  int iVar1;
  UGameInstance *pUVar2;
  UClass *pUVar3;
  code *pcVar4;
  bool bVar5;
  UWorld *pUVar6;
  UClass *pUVar7;
  TObjectPtr<USubsystem> TVar8;
  FSubsystemArray *pFVar9;
  UGameInstanceSubsystem *pUVar10;
  undefined1 local_res18 [16];
  
  if (param_1 == (UObject *)0x0) {
    return (UGameInstanceSubsystem *)0x0;
  }
  pUVar6 = UEngine::GetWorldFromContextObject(GEngine,param_1,ReturnNull);
  if (pUVar6 == (UWorld *)0x0) {
    return (UGameInstanceSubsystem *)0x0;
  }
  pUVar2 = (pUVar6->OwningGameInstance).field0_0x0.DebugPtr;
  if (pUVar2 == (UGameInstance *)0x0) {
    return (UGameInstanceSubsystem *)0x0;
  }
  pUVar3 = *(UClass **)param_2.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar3 == (UClass *)0x0)) {
    if (pUVar3 == (UClass *)0x0) goto LAB_14883e274;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar7 = UGameInstanceSubsystem::StaticClass();
  if (pUVar7 != (UClass *)0x0) {
    iVar1 = (int)pUVar7->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      TVar8 = TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
              ::FindRef((TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
                         *)&(pUVar2->SubsystemCollection).field_0x8,
                        (TObjectPtr<UClass_const_>)local_res18);
      if (*(UGameInstanceSubsystem **)TVar8.field0_0x0 == (UGameInstanceSubsystem *)0x0) {
        pFVar9 = FSubsystemCollectionBase::FindAndPopulateSubsystemArrayInternal
                           ((FSubsystemCollectionBase *)&pUVar2->SubsystemCollection,pUVar3);
        if ((pFVar9->Subsystems).ArrayNum < 1) {
          return (UGameInstanceSubsystem *)0x0;
        }
        return *(UGameInstanceSubsystem **)(pFVar9->Subsystems).AllocatorInstance.Data;
      }
      return *(UGameInstanceSubsystem **)TVar8.field0_0x0;
    }
  }
LAB_14883e274:
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3014280564560625717>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                     ,0x35,"SubsystemClass");
  if (!bVar5) {
    return (UGameInstanceSubsystem *)0x0;
  }
  pcVar4 = (code *)swi(3);
  pUVar10 = (UGameInstanceSubsystem *)(*pcVar4)();
  return pUVar10;
}

// GetLocalPlayerSubSystemFromPlayerController @ 14883e3e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayerSubsystem * __cdecl
USubsystemBlueprintLibrary::GetLocalPlayerSubSystemFromPlayerController
          (APlayerController *param_1,TSubclassOf<ULocalPlayerSubsystem> param_2)

{
  TObjectPtr<UPlayer> *this;
  ULocalPlayer *this_00;
  bool bVar1;
  UClass *pUVar2;
  ULocalPlayerSubsystem *pUVar3;
  UObject *local_res8;
  
  if ((param_1 != (APlayerController *)0x0) &&
     (this = &param_1->Player, (this->field0_0x0).DebugPtr != (UPlayer *)0x0)) {
    pUVar2 = Z_Construct_UClass_ULocalPlayer_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this,pUVar2);
    if ((bVar1) &&
       (this_00 = (ULocalPlayer *)(this->field0_0x0).DebugPtr, this_00 != (ULocalPlayer *)0x0)) {
      local_res8 = *(UObject **)param_2.Class.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      pUVar3 = ULocalPlayer::GetSubsystemBase
                         (this_00,(TSubclassOf<ULocalPlayerSubsystem>)&local_res8);
      return pUVar3;
    }
  }
  return (ULocalPlayerSubsystem *)0x0;
}

// GetLocalPlayerSubsystem @ 14883e470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayerSubsystem * __cdecl
USubsystemBlueprintLibrary::GetLocalPlayerSubsystem
          (UObject *param_1,TSubclassOf<ULocalPlayerSubsystem> param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  APlayerController *this;
  ULocalPlayerSubsystem *pUVar5;
  UObject *local_res8;
  
  if (param_1 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UUserWidget_NoRegister();
    lVar2 = *(longlong *)&param_1->field_0x10;
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      param_1 = (UObject *)(**(code **)(*(longlong *)param_1 + 0x2e0))(param_1);
      goto LAB_14883e66b;
    }
  }
  if (param_1 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_APlayerController_NoRegister();
    lVar2 = *(longlong *)&param_1->field_0x10;
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      if (param_1 != (UObject *)0x0) {
        pUVar4 = Z_Construct_UClass_APawn_NoRegister();
        iVar1 = (int)pUVar4->_padding_;
        if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar4->_padding_)) {
          this = *(APlayerController **)&param_1[0x12].field_0x20;
          if (this == (APlayerController *)0x0) {
            return (ULocalPlayerSubsystem *)0x0;
          }
          pUVar4 = Z_Construct_UClass_APlayerController_NoRegister();
          iVar1 = (int)pUVar4->_padding_;
          if (*(int *)(this->_padding_ + 0x38) < iVar1) {
            return (ULocalPlayerSubsystem *)0x0;
          }
          bVar3 = (longlong *)
                  *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
                  &pUVar4->_padding_;
LAB_14883e58a:
          if (!bVar3) {
            return (ULocalPlayerSubsystem *)0x0;
          }
          param_1 = (UObject *)APlayerController::GetLocalPlayer(this);
          goto LAB_14883e66b;
        }
        if (param_1 != (UObject *)0x0) {
          pUVar4 = Z_Construct_UClass_AActor_NoRegister();
          iVar1 = (int)pUVar4->_padding_;
          if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar4->_padding_)) {
LAB_14883e5d2:
            this = (APlayerController *)AActor::GetInstigatorController((AActor *)param_1);
            if (this == (APlayerController *)0x0) {
              return (ULocalPlayerSubsystem *)0x0;
            }
            pUVar4 = Z_Construct_UClass_APlayerController_NoRegister();
            iVar1 = (int)pUVar4->_padding_;
            if (*(int *)(this->_padding_ + 0x38) < iVar1) {
              return (ULocalPlayerSubsystem *)0x0;
            }
            bVar3 = (longlong *)
                    *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
                    &pUVar4->_padding_;
            goto LAB_14883e58a;
          }
          if (param_1 != (UObject *)0x0) {
            pUVar4 = Z_Construct_UClass_UActorComponent_NoRegister();
            iVar1 = (int)pUVar4->_padding_;
            if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
                &pUVar4->_padding_)) {
              param_1 = *(UObject **)&param_1[4].field_0x8;
              goto LAB_14883e5d2;
            }
            if (param_1 != (UObject *)0x0) {
              pUVar4 = Z_Construct_UClass_ULocalPlayer_NoRegister();
              iVar1 = (int)pUVar4->_padding_;
              if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8)
                  == &pUVar4->_padding_)) goto LAB_14883e66b;
            }
          }
        }
      }
    }
    else if (*(longlong *)&param_1[0x16].field_0x8 != 0) {
      pUVar4 = Z_Construct_UClass_ULocalPlayer_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)&param_1[0x16].field_0x8,pUVar4);
      if (bVar3) {
        param_1 = *(UObject **)&param_1[0x16].field_0x8;
        goto LAB_14883e66b;
      }
    }
  }
  param_1 = (UObject *)0x0;
LAB_14883e66b:
  if ((ULocalPlayer *)param_1 == (ULocalPlayer *)0x0) {
    return (ULocalPlayerSubsystem *)0x0;
  }
  local_res8 = *(UObject **)param_2.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  pUVar5 = ULocalPlayer::GetSubsystemBase
                     ((ULocalPlayer *)param_1,(TSubclassOf<ULocalPlayerSubsystem>)&local_res8);
  return pUVar5;
}

// GetPrivateStaticClass @ 1488409c0

UClass * __cdecl USubsystemBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubsystemBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SubsystemBlueprintLibrary",
               &Z_Registration_Info_UClass_USubsystemBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUSubsystemBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<USubsystemBlueprintLibrary>,
               InternalVTableHelperCtorCaller<USubsystemBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubsystemBlueprintLibrary.InnerSingleton;
}

// GetWorldFrom @ 1488445b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __cdecl USubsystemBlueprintLibrary::GetWorldFrom(UObject *param_1)

{
  UWorld *pUVar1;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = UEngine::GetWorldFromContextObject(GEngine,param_1,ReturnNull);
    return pUVar1;
  }
  return (UWorld *)0x0;
}

// GetWorldSubsystem @ 148844690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorldSubsystem * __cdecl
USubsystemBlueprintLibrary::GetWorldSubsystem(UObject *param_1,TSubclassOf<UWorldSubsystem> param_2)

{
  int iVar1;
  UClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  UWorld *pUVar5;
  UClass *pUVar6;
  TObjectPtr<USubsystem> TVar7;
  FSubsystemArray *pFVar8;
  UWorldSubsystem *pUVar9;
  undefined1 local_res18 [16];
  
  if (param_1 == (UObject *)0x0) {
    return (UWorldSubsystem *)0x0;
  }
  pUVar5 = UEngine::GetWorldFromContextObject(GEngine,param_1,ReturnNull);
  if (pUVar5 == (UWorld *)0x0) {
    return (UWorldSubsystem *)0x0;
  }
  pUVar2 = *(UClass **)param_2.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar2 == (UClass *)0x0)) {
    if (pUVar2 == (UClass *)0x0) goto LAB_148844777;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar6 = UWorldSubsystem::StaticClass();
  if (pUVar6 != (UClass *)0x0) {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      TVar7 = TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
              ::FindRef((TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
                         *)&(pUVar5->SubsystemCollection).field_0x8,
                        (TObjectPtr<UClass_const_>)local_res18);
      if (*(UWorldSubsystem **)TVar7.field0_0x0 == (UWorldSubsystem *)0x0) {
        pFVar8 = FSubsystemCollectionBase::FindAndPopulateSubsystemArrayInternal
                           ((FSubsystemCollectionBase *)&pUVar5->SubsystemCollection,pUVar2);
        if ((pFVar8->Subsystems).ArrayNum < 1) {
          return (UWorldSubsystem *)0x0;
        }
        return *(UWorldSubsystem **)(pFVar8->Subsystems).AllocatorInstance.Data;
      }
      return *(UWorldSubsystem **)TVar7.field0_0x0;
    }
  }
LAB_148844777:
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3014280564560625717>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                     ,0x35,"SubsystemClass");
  if (!bVar4) {
    return (UWorldSubsystem *)0x0;
  }
  pcVar3 = (code *)swi(3);
  pUVar9 = (UWorldSubsystem *)(*pcVar3)();
  return pUVar9;
}

// StaticRegisterNativesUSubsystemBlueprintLibrary @ 14885ac80

void __cdecl USubsystemBlueprintLibrary::StaticRegisterNativesUSubsystemBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_USubsystemBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetAudioEngineSubsystem @ 1488659c0

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
USubsystemBlueprintLibrary::execGetAudioEngineSubsystem
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  UClass *pUVar5;
  bool bVar6;
  UWorld *this;
  UClass *pUVar7;
  TObjectPtr<USubsystem> TVar8;
  FSubsystemArray *pFVar9;
  longlong lVar10;
  UClass *local_res10;
  UObject *local_res18;
  UClass *local_res20;
  undefined1 local_38 [8];
  FAudioDeviceHandle local_30;
  
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar5 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  if (local_res18 == (UObject *)0x0) {
LAB_148865c2b:
    *(undefined8 *)param_3 = 0;
    return;
  }
  this = UEngine::GetWorldFromContextObject(GEngine,local_res18,ReturnNull);
  if (this == (UWorld *)0x0) goto LAB_148865c2b;
  UWorld::GetAudioDevice(this,&local_30);
  bVar6 = FAudioDeviceHandle::IsValid(&local_30);
  if (!bVar6) {
    FAudioDeviceHandle::~FAudioDeviceHandle(&local_30);
    goto LAB_148865c2b;
  }
  bVar6 = FAudioDeviceHandle::IsValid(&local_30);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                       ,0x60,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar5 == (UClass *)0x0)) {
    if (pUVar5 != (UClass *)0x0) goto LAB_148865b42;
LAB_148865bdc:
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3014280564560625717>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                       ,0x35,"SubsystemClass");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_148865b42:
    pUVar7 = UAudioEngineSubsystem::StaticClass();
    if (pUVar7 == (UClass *)0x0) goto LAB_148865bdc;
    iVar1 = (int)pUVar7->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_)
       ) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_148865bdc;
    local_res20 = pUVar5;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    TVar8 = TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
            ::FindRef((TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
                       *)&((local_30.Device)->SubsystemCollection).field_0x8,
                      (TObjectPtr<UClass_const_>)local_38);
    lVar10 = *(longlong *)TVar8.field0_0x0;
    if (lVar10 != 0) goto LAB_148865c0b;
    pFVar9 = FSubsystemCollectionBase::FindAndPopulateSubsystemArrayInternal
                       ((FSubsystemCollectionBase *)&(local_30.Device)->SubsystemCollection,pUVar5);
    if (0 < (pFVar9->Subsystems).ArrayNum) {
      uVar3 = *(undefined8 *)(pFVar9->Subsystems).AllocatorInstance.Data;
      FAudioDeviceHandle::~FAudioDeviceHandle(&local_30);
      *(undefined8 *)param_3 = uVar3;
      return;
    }
  }
  lVar10 = 0;
LAB_148865c0b:
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_30);
  *(longlong *)param_3 = lVar10;
  return;
}

// execGetEngineSubsystem @ 148865c50

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
USubsystemBlueprintLibrary::execGetEngineSubsystem(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  UEngine *pUVar4;
  UClass *pUVar5;
  bool bVar6;
  UClass *pUVar7;
  TObjectPtr<USubsystem> TVar8;
  FSubsystemArray *pFVar9;
  longlong lVar10;
  FObjectSubsystemCollection<UEngineSubsystem> *this;
  UClass *local_res10;
  UClass *local_res18;
  undefined1 local_res20 [8];
  
  local_res10 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar5 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar5 == (UClass *)0x0)) {
    if (pUVar5 != (UClass *)0x0) goto LAB_148865d15;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_148865d15:
    pUVar4 = GEngine;
    this = &GEngine->EngineSubsystemCollection;
    pUVar7 = UEngineSubsystem::StaticClass();
    if (pUVar7 != (UClass *)0x0) {
      iVar1 = (int)pUVar7->_padding_;
      if (((int)pUVar5->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        local_res18 = pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        TVar8 = TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
                ::FindRef((TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
                           *)&(pUVar4->EngineSubsystemCollection).field_0x8,
                          (TObjectPtr<UClass_const_>)local_res20);
        lVar10 = *(longlong *)TVar8.field0_0x0;
        if (lVar10 != 0) {
LAB_148865d8b:
          *(longlong *)param_3 = lVar10;
          return;
        }
        pFVar9 = FSubsystemCollectionBase::FindAndPopulateSubsystemArrayInternal
                           ((FSubsystemCollectionBase *)this,pUVar5);
        if (0 < (pFVar9->Subsystems).ArrayNum) {
          lVar10 = *(longlong *)(pFVar9->Subsystems).AllocatorInstance.Data;
          goto LAB_148865d8b;
        }
        goto LAB_148865dc7;
      }
    }
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3014280564560625717>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                     ,0x35,"SubsystemClass");
  if (bVar6) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_148865dc7:
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetGameInstanceSubsystem @ 148865de0

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
USubsystemBlueprintLibrary::execGetGameInstanceSubsystem
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UGameInstance *pUVar3;
  code *pcVar4;
  UClass *pUVar5;
  bool bVar6;
  UWorld *pUVar7;
  UClass *pUVar8;
  TObjectPtr<USubsystem> TVar9;
  FSubsystemArray *pFVar10;
  longlong lVar11;
  UClass *local_res10;
  UObject *local_res18;
  UClass *local_res20;
  undefined1 local_28 [16];
  
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar5 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  if (local_res18 == (UObject *)0x0) {
LAB_148865fd5:
    *(undefined8 *)param_3 = 0;
    return;
  }
  pUVar7 = UEngine::GetWorldFromContextObject(GEngine,local_res18,ReturnNull);
  if ((pUVar7 == (UWorld *)0x0) ||
     (pUVar3 = (pUVar7->OwningGameInstance).field0_0x0.DebugPtr, pUVar3 == (UGameInstance *)0x0))
  goto LAB_148865fd5;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar5 == (UClass *)0x0)) {
    if (pUVar5 != (UClass *)0x0) goto LAB_148865f0e;
LAB_148865f95:
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3014280564560625717>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                       ,0x35,"SubsystemClass");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_148865f0e:
    pUVar8 = UGameInstanceSubsystem::StaticClass();
    if (pUVar8 == (UClass *)0x0) goto LAB_148865f95;
    iVar1 = (int)pUVar8->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar8->_padding_)
       ) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_148865f95;
    local_res20 = pUVar5;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    TVar9 = TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
            ::FindRef((TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
                       *)&(pUVar3->SubsystemCollection).field_0x8,
                      (TObjectPtr<UClass_const_>)local_28);
    lVar11 = *(longlong *)TVar9.field0_0x0;
    if (lVar11 != 0) goto LAB_148865fc4;
    pFVar10 = FSubsystemCollectionBase::FindAndPopulateSubsystemArrayInternal
                        ((FSubsystemCollectionBase *)&pUVar3->SubsystemCollection,pUVar5);
    if (0 < (pFVar10->Subsystems).ArrayNum) {
      *(undefined8 *)param_3 = *(undefined8 *)(pFVar10->Subsystems).AllocatorInstance.Data;
      return;
    }
  }
  lVar11 = 0;
LAB_148865fc4:
  *(longlong *)param_3 = lVar11;
  return;
}

// execGetLocalPlayerSubSystemFromPlayerController @ 148865ff0

void __cdecl
USubsystemBlueprintLibrary::execGetLocalPlayerSubSystemFromPlayerController
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  code *pcVar4;
  UClass *pUVar5;
  bool bVar6;
  UClass *pUVar7;
  TObjectPtr<USubsystem> TVar8;
  FSubsystemArray *pFVar9;
  longlong lVar10;
  UClass *local_res10;
  longlong local_res18;
  UClass *local_res20;
  undefined1 local_28 [16];
  
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar5 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  lVar3 = local_res18;
  if ((local_res18 == 0) || (*(longlong *)(local_res18 + 0x378) == 0)) {
LAB_1488661f7:
    *(undefined8 *)param_3 = 0;
    return;
  }
  pUVar7 = Z_Construct_UClass_ULocalPlayer_NoRegister();
  bVar6 = FObjectPtr::IsA((FObjectPtr *)(lVar3 + 0x378),pUVar7);
  if ((!bVar6) || (lVar3 = *(longlong *)(lVar3 + 0x378), lVar3 == 0)) goto LAB_1488661f7;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar5 == (UClass *)0x0)) {
    if (pUVar5 != (UClass *)0x0) goto LAB_148866130;
LAB_1488661b7:
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3014280564560625717>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                       ,0x35,"SubsystemClass");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_148866130:
    pUVar7 = ULocalPlayerSubsystem::StaticClass();
    if (pUVar7 == (UClass *)0x0) goto LAB_1488661b7;
    iVar1 = (int)pUVar7->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_)
       ) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_1488661b7;
    local_res20 = pUVar5;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    TVar8 = TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
            ::FindRef((TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
                       *)(lVar3 + 0x168),(TObjectPtr<UClass_const_>)local_28);
    lVar10 = *(longlong *)TVar8.field0_0x0;
    if (lVar10 != 0) goto LAB_1488661e6;
    pFVar9 = FSubsystemCollectionBase::FindAndPopulateSubsystemArrayInternal
                       ((FSubsystemCollectionBase *)(lVar3 + 0x160),pUVar5);
    if (0 < (pFVar9->Subsystems).ArrayNum) {
      *(undefined8 *)param_3 = *(undefined8 *)(pFVar9->Subsystems).AllocatorInstance.Data;
      return;
    }
  }
  lVar10 = 0;
LAB_1488661e6:
  *(longlong *)param_3 = lVar10;
  return;
}

// execGetLocalPlayerSubsystem @ 148866220

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
USubsystemBlueprintLibrary::execGetLocalPlayerSubsystem
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  UClass *pUVar4;
  bool bVar5;
  UClass *pUVar6;
  ULocalPlayer *this;
  APlayerController *this_00;
  TObjectPtr<USubsystem> TVar7;
  FSubsystemArray *pFVar8;
  longlong lVar9;
  UClass *local_res10;
  ULocalPlayer *local_res18;
  UClass *local_res20;
  undefined1 local_28 [16];
  
  local_res18 = (ULocalPlayer *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar4 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  this = local_res18;
  if (local_res18 == (ULocalPlayer *)0x0) {
LAB_1488664ab:
    this = (ULocalPlayer *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UUserWidget_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      if (this != (ULocalPlayer *)0x0) {
        pUVar6 = Z_Construct_UClass_APlayerController_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          pUVar6 = Z_Construct_UClass_APawn_NoRegister();
          iVar1 = (int)pUVar6->_padding_;
          if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar6->_padding_)) {
            pUVar6 = Z_Construct_UClass_AActor_NoRegister();
            iVar1 = (int)pUVar6->_padding_;
            if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar6->_padding_)) {
              pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
              iVar1 = (int)pUVar6->_padding_;
              if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
                  &pUVar6->_padding_)) {
                pUVar6 = Z_Construct_UClass_ULocalPlayer_NoRegister();
                iVar1 = (int)pUVar6->_padding_;
                if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
                    &pUVar6->_padding_)) goto LAB_1488664ad;
                goto LAB_1488664ab;
              }
              this = (ULocalPlayer *)(this->LastViewLocation).field0_0x0._s_0.Y;
            }
            this_00 = (APlayerController *)AActor::GetInstigatorController((AActor *)this);
            if (this_00 == (APlayerController *)0x0) goto LAB_1488665ac;
            pUVar6 = Z_Construct_UClass_APlayerController_NoRegister();
            iVar1 = (int)pUVar6->_padding_;
            if (*(int *)(this_00->_padding_ + 0x38) < iVar1) goto LAB_1488665ac;
            bVar5 = (longlong *)
                    *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
                    == &pUVar6->_padding_;
          }
          else {
            this_00 = (APlayerController *)this[1]._padding_;
            if (this_00 == (APlayerController *)0x0) goto LAB_1488665ac;
            pUVar6 = Z_Construct_UClass_APlayerController_NoRegister();
            iVar1 = (int)pUVar6->_padding_;
            if (*(int *)(this_00->_padding_ + 0x38) < iVar1) goto LAB_1488665ac;
            bVar5 = (longlong *)
                    *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
                    == &pUVar6->_padding_;
          }
          if (!bVar5) goto LAB_1488665ac;
          this = APlayerController::GetLocalPlayer(this_00);
          goto LAB_1488664ad;
        }
        if (this[1].Size.field0_0x0._s_0.Y != 0.0) {
          pUVar6 = Z_Construct_UClass_ULocalPlayer_NoRegister();
          bVar5 = FObjectPtr::IsA((FObjectPtr *)&this[1].Size.field0_0x0._s_0.Y,pUVar6);
          if (bVar5) {
            this = *(ULocalPlayer **)((longlong)&this[1].Size.field0_0x0 + 8);
            goto LAB_1488664ad;
          }
        }
      }
      goto LAB_1488664ab;
    }
    this = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(this);
  }
LAB_1488664ad:
  if (this == (ULocalPlayer *)0x0) {
LAB_1488665ac:
    *(undefined8 *)param_3 = 0;
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar4 == (UClass *)0x0)) {
    if (pUVar4 != (UClass *)0x0) goto LAB_1488664e5;
LAB_14886656c:
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3014280564560625717>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                       ,0x35,"SubsystemClass");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_1488664e5:
    pUVar6 = ULocalPlayerSubsystem::StaticClass();
    if (pUVar6 == (UClass *)0x0) goto LAB_14886656c;
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14886656c;
    local_res20 = pUVar4;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    TVar7 = TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
            ::FindRef((TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
                       *)&(this->SubsystemCollection).field_0x8,(TObjectPtr<UClass_const_>)local_28)
    ;
    lVar9 = *(longlong *)TVar7.field0_0x0;
    if (lVar9 != 0) goto LAB_14886659b;
    pFVar8 = FSubsystemCollectionBase::FindAndPopulateSubsystemArrayInternal
                       ((FSubsystemCollectionBase *)&this->SubsystemCollection,pUVar4);
    if (0 < (pFVar8->Subsystems).ArrayNum) {
      *(undefined8 *)param_3 = *(undefined8 *)(pFVar8->Subsystems).AllocatorInstance.Data;
      return;
    }
  }
  lVar9 = 0;
LAB_14886659b:
  *(longlong *)param_3 = lVar9;
  return;
}

// execGetWorldSubsystem @ 1488665d0

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
USubsystemBlueprintLibrary::execGetWorldSubsystem(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  UClass *pUVar4;
  bool bVar5;
  UWorld *pUVar6;
  UClass *pUVar7;
  TObjectPtr<USubsystem> TVar8;
  FSubsystemArray *pFVar9;
  longlong lVar10;
  UClass *local_res10;
  UObject *local_res18;
  UClass *local_res20;
  undefined1 local_28 [16];
  
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar4 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  if (local_res18 == (UObject *)0x0) {
LAB_1488667b8:
    *(undefined8 *)param_3 = 0;
    return;
  }
  pUVar6 = UEngine::GetWorldFromContextObject(GEngine,local_res18,ReturnNull);
  if (pUVar6 == (UWorld *)0x0) goto LAB_1488667b8;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar4 == (UClass *)0x0)) {
    if (pUVar4 != (UClass *)0x0) goto LAB_1488666f1;
LAB_148866778:
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3014280564560625717>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                       ,0x35,"SubsystemClass");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_1488666f1:
    pUVar7 = UWorldSubsystem::StaticClass();
    if (pUVar7 == (UClass *)0x0) goto LAB_148866778;
    iVar1 = (int)pUVar7->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_148866778;
    local_res20 = pUVar4;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    TVar8 = TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
            ::FindRef((TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
                       *)&(pUVar6->SubsystemCollection).field_0x8,
                      (TObjectPtr<UClass_const_>)local_28);
    lVar10 = *(longlong *)TVar8.field0_0x0;
    if (lVar10 != 0) goto LAB_1488667a7;
    pFVar9 = FSubsystemCollectionBase::FindAndPopulateSubsystemArrayInternal
                       ((FSubsystemCollectionBase *)&pUVar6->SubsystemCollection,pUVar4);
    if (0 < (pFVar9->Subsystems).ArrayNum) {
      *(undefined8 *)param_3 = *(undefined8 *)(pFVar9->Subsystems).AllocatorInstance.Data;
      return;
    }
  }
  lVar10 = 0;
LAB_1488667a7:
  *(longlong *)param_3 = lVar10;
  return;
}

