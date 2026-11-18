// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplay
// Functions: 31

// StaticClass @ 14d982b10

UClass * __cdecl UAudioParameterComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioParameterComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"AudioParameterComponent",
               &Z_Registration_Info_UClass_UAudioParameterComponent.InnerSingleton,
               StaticRegisterNativesUAudioParameterComponent,0xf8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAudioParameterComponent>,
               InternalVTableHelperCtorCaller<UAudioParameterComponent>,local_res8,
               UAudioGameplayComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioParameterComponent.InnerSingleton;
}

// UAudioParameterComponent @ 14d987d80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAudioParameterComponent * __thiscall
UAudioParameterComponent::UAudioParameterComponent
          (UAudioParameterComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IAudioParameterControllerInterface__;
  this->_padding_ = (longlong)&_vftable__for__IActorSoundParameterInterface__;
  (this->ActiveComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveComponents).ArrayNum = 0;
  (this->ActiveComponents).ArrayMax = 0;
  (this->Parameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parameters).ArrayNum = 0;
  (this->Parameters).ArrayMax = 0;
  return this;
}

// UAudioParameterComponent @ 14d987e00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAudioParameterComponent * __thiscall
UAudioParameterComponent::UAudioParameterComponent
          (UAudioParameterComponent *this,FObjectInitializer *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&UAudioGameplayComponent::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UAudioGameplayComponent::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UAudioGameplayComponent::_vftable__for__IAsyncPhysicsStateProcessor__
  ;
  *(byte *)((longlong)&this->_padding_ + 2) = *(byte *)((longlong)&this->_padding_ + 2) & 0xf1;
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->_padding_,false);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IAudioParameterControllerInterface__;
  this->_padding_ = (longlong)&_vftable__for__IActorSoundParameterInterface__;
  (this->ActiveComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveComponents).ArrayNum = 0;
  (this->ActiveComponents).ArrayMax = 0;
  (this->Parameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parameters).ArrayNum = 0;
  (this->Parameters).ArrayMax = 0;
  return this;
}

// ~UAudioParameterComponent @ 14d9887e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAudioParameterComponent::~UAudioParameterComponent(UAudioParameterComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IAudioParameterControllerInterface__;
  this->_padding_ = (longlong)&_vftable__for__IActorSoundParameterInterface__;
  DestructItems<FAudioParameter,int>
            ((FAudioParameter *)(this->Parameters).AllocatorInstance.Data,
             (this->Parameters).ArrayNum);
  pFVar1 = (this->Parameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActiveComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IInterface__6B_;
  this->_padding_ = (longlong)&___7IInterface__6B_;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// operator() @ 14d988c00

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
`UAudioParameterComponent::GetAllAudioComponents'::__l2::<lambda_1>::operator()
          (void *this,AActor *param_1)

{
  ForAnyElementType *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  longlong lVar8;
  UClass *local_res10;
  UClass *local_res18;
  ForAnyElementType local_28;
  ulonglong local_20;
  
  if (param_1 == (AActor *)0x0) {
    return;
  }
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  pUVar5 = Z_Construct_UClass_UAudioComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 != (UClass *)0x0) goto LAB_14d988c56;
  }
  else if (pUVar5 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_14d988c56:
    pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar6 != (UClass *)0x0) {
      iVar4 = (int)pUVar6->_padding_;
      if (((int)pUVar5->_padding_ < iVar4) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar4 * 8) !=
          &pUVar6->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      pUVar6 = pUVar5;
      if (bVar3) goto LAB_14d988c8a;
    }
  }
  pUVar6 = (UClass *)0x0;
LAB_14d988c8a:
  pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar6 == pUVar7) {
    local_res10 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    AActor::
    ForEachComponent_Internal<UAudioComponent,1,0,_AActor::GetComponents<UAudioComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_res10,
               (TArray<UAudioComponent_*,TSizedDefaultAllocator<32>_> *)&local_28);
  }
  else {
    local_res18 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    AActor::
    ForEachComponent_Internal<UAudioComponent,0,0,_AActor::GetComponents<UAudioComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_res18,
               (TArray<UAudioComponent_*,TSizedDefaultAllocator<32>_> *)&local_28);
  }
  pFVar1 = *(ForAnyElementType **)this;
  if ((pFVar1 == &local_28) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x986,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar8 = (longlong)(int)local_20;
  if ((int)local_20 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,(int)local_20,pFVar1,(int *)(pFVar1 + 1),
                       (int *)((longlong)&pFVar1[1].Data + 4));
    memmove(pFVar1->Data + (longlong)iVar4 * 8,local_28.Data,lVar8 << 3);
    local_20 = local_20 & 0xffffffff00000000;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// operator() @ 14d988e60

void __thiscall
`UAudioParameterComponent::SetParameterInternal'::__l36::<lambda_1>::operator()
          (void *this,FActiveSound *param_1)

{
  int iVar1;
  IParameterTransmitter *pIVar2;
  FAudioParameter *pFVar3;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  pIVar2 = (param_1->InstanceTransmitter).Object;
  if (pIVar2 != (IParameterTransmitter *)0x0) {
    iVar1 = *(int *)((longlong)this + 0x10);
    pFVar3 = *(FAudioParameter **)((longlong)this + 8);
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10 = iVar1;
    if (iVar1 == 0) {
      local_c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa0,8,iVar1,0,&local_18,iVar1,&local_c);
      ConstructItems<FAudioParameter,FAudioParameter,int>(local_18.Data,pFVar3,iVar1);
    }
    (**(code **)((longlong)*pIVar2 + 0x40))(pIVar2,&local_18);
    DestructItems<FAudioParameter,int>((FAudioParameter *)local_18.Data,local_10);
    if ((FAudioParameter *)local_18.Data != (FAudioParameter *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
  return;
}

// GetActorSoundParams_Implementation @ 14d98d180

void __thiscall
UAudioParameterComponent::GetActorSoundParams_Implementation
          (UAudioParameterComponent *this,
          TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_>::
  Append<FAudioParameter,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  return;
}

// GetAllAudioComponents @ 14d98d1e0

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
UAudioParameterComponent::GetAllAudioComponents
          (UAudioParameterComponent *this,
          TArray<UAudioComponent_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  USceneComponent *this_00;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  AActor *pAVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  TArray<UAudioComponent_*,TSizedDefaultAllocator<32>_> *local_res10;
  UClass *local_res18;
  UClass *local_res20;
  TArray<UAudioComponent_*,TSizedDefaultAllocator<32>_> local_68;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_58;
  
  pAVar6 = (AActor *)this->_padding_;
  this_00 = (pAVar6->RootComponent).field0_0x0.DebugPtr;
  if (this_00 != (USceneComponent *)0x0) {
    pAVar6 = USceneComponent::GetAttachmentRootActor(this_00);
  }
  if (pAVar6 != (AActor *)0x0) {
    local_res10 = param_1;
    `UAudioParameterComponent::GetAllAudioComponents'::__l2::<lambda_1>::operator()
              (&local_res10,pAVar6);
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    AActor::GetAttachedActors(pAVar6,&local_58,false,true);
    iVar3 = local_58.ArrayNum;
    pFVar1 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 8;
    FVar11.Data = local_58.AllocatorInstance.Data;
    while( true ) {
      pUVar9 = (UClass *)0x0;
      if (local_58.ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar11.Data == pFVar1) break;
      pAVar6 = *(AActor **)FVar11.Data;
      if (pAVar6 != (AActor *)0x0) {
        local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.ArrayNum = 0;
        local_68.ArrayMax = 0;
        pUVar7 = Z_Construct_UClass_UAudioComponent_NoRegister();
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UClass *)0x0) goto LAB_14d98d2bf;
        }
        else if (pUVar7 != (UClass *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
LAB_14d98d2bf:
          pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
          if (pUVar8 != (UClass *)0x0) {
            iVar5 = (int)pUVar8->_padding_;
            if (((int)pUVar7->_padding_ < iVar5) ||
               ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar5 * 8) !=
                &pUVar8->_padding_)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              pUVar9 = pUVar7;
            }
          }
        }
        pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
        if (pUVar9 == pUVar8) {
          local_res18 = pUVar7;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          AActor::
          ForEachComponent_Internal<UAudioComponent,1,0,_AActor::GetComponents<UAudioComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                    (pAVar6,(TSubclassOf<UActorComponent>)&local_res18,&local_68);
        }
        else {
          local_res20 = pUVar7;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          AActor::
          ForEachComponent_Internal<UAudioComponent,0,0,_AActor::GetComponents<UAudioComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                    (pAVar6,(TSubclassOf<UActorComponent>)&local_res20,&local_68);
        }
        if ((param_1 == &local_68) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x986,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar10 = (longlong)local_68.ArrayNum;
        if (local_68.ArrayNum != 0) {
          iVar5 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,local_68.ArrayNum,&param_1->AllocatorInstance,&param_1->ArrayNum,
                             &param_1->ArrayMax);
          memmove((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8,
                  local_68.AllocatorInstance.Data,lVar10 << 3);
          local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
        }
        if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.AllocatorInstance.Data);
        }
      }
      FVar11.Data = FVar11.Data + 8;
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
  return;
}

// GetPrivateStaticClass @ 14d98e020

UClass * __cdecl UAudioParameterComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioParameterComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"AudioParameterComponent",
               &Z_Registration_Info_UClass_UAudioParameterComponent.InnerSingleton,
               StaticRegisterNativesUAudioParameterComponent,0xf8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAudioParameterComponent>,
               InternalVTableHelperCtorCaller<UAudioParameterComponent>,local_res8,
               UAudioGameplayComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioParameterComponent.InnerSingleton;
}

// LogParameter @ 14d98e9a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAudioParameterComponent::LogParameter(UAudioParameterComponent *this,FAudioParameter *param_1)

{
  EAudioParameterType EVar1;
  longlong lVar2;
  UEnum *this_00;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FName local_res18;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if ((byte)LogAudioParameterComponent._0_1_ < 7) {
    return;
  }
  lVar2 = this->_padding_;
  if (lVar2 == 0) {
    return;
  }
  pFVar4 = (FScriptContainerElement *)0x0;
  this_00 = StaticEnum<enum_EAudioParameterType>();
  pFVar5 = pFVar4;
  if (this_00 != (UEnum *)0x0) {
    pFVar3 = UEnum::GetNameStringByIndex(this_00,&local_68,(uint)param_1->ParamType);
    if (&local_38 != pFVar3) {
      pFVar5 = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  EVar1 = param_1->ParamType;
  if (EVar1 == Boolean) {
    pFVar3 = UKismetStringLibrary::Conv_BoolToString(&local_68,param_1->BoolParam);
  }
  else {
    if (EVar1 == Integer) {
      pFVar3 = UKismetStringLibrary::Conv_IntToString(&local_68,param_1->IntParam);
      if (&local_58 != pFVar3) {
        pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
        (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar3->Data).ArrayNum = 0;
        (pFVar3->Data).ArrayMax = 0;
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      goto LAB_14d98eb03;
    }
    if (EVar1 != Float) goto LAB_14d98eb03;
    pFVar3 = ::FString::SanitizeFloat(&local_68,(double)param_1->FloatParam,1);
  }
  if (&local_58 != pFVar3) {
    pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_14d98eb03:
  if (6 < (byte)LogAudioParameterComponent._0_1_) {
    ::FName::ToString(&param_1->ParamName,&local_48);
    local_res18 = *(FName *)(lVar2 + 0x18);
    ::FName::ToString(&local_res18,&local_68);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogAudioParameterComponent)
    ;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return;
}

// ResetParameters @ 14d9908d0

void __thiscall UAudioParameterComponent::ResetParameters(UAudioParameterComponent *this)

{
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_>::Reset
            ((TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (int)this->_padding_);
  return;
}

// SetBoolArrayParameter @ 14d990b00

void __thiscall
UAudioParameterComponent::SetBoolArrayParameter
          (UAudioParameterComponent *this,FName param_1,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_2)

{
  FAudioParameter *pFVar1;
  FAudioParameter local_a8;
  
  pFVar1 = FAudioParameter::FAudioParameter(&local_a8,param_1,param_2);
  SetParameterInternal((UAudioParameterComponent *)&this[-1]._padding_,pFVar1);
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetBoolParameter @ 14d990d60

void __thiscall
UAudioParameterComponent::SetBoolParameter
          (UAudioParameterComponent *this,FName param_1,bool param_2)

{
  FAudioParameter local_a8;
  
  local_a8.IntParam = 0;
  local_a8.StringParam.Data.ArrayNum = 0;
  local_a8.StringParam.Data.ArrayMax = 0;
  local_a8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_a8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayFloatParam.ArrayNum = 0;
  local_a8.ArrayFloatParam.ArrayMax = 0;
  local_a8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayBoolParam.ArrayNum = 0;
  local_a8.ArrayBoolParam.ArrayMax = 0;
  local_a8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayIntParam.ArrayNum = 0;
  local_a8.ArrayIntParam.ArrayMax = 0;
  local_a8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayObjectParam.ArrayNum = 0;
  local_a8.ArrayObjectParam.ArrayMax = 0;
  local_a8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayStringParam.ArrayNum = 0;
  local_a8.ArrayStringParam.ArrayMax = 0;
  local_a8.TypeName.ComparisonIndex.Value = 0;
  local_a8.TypeName.Number = 0;
  local_a8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ObjectProxies.ArrayNum = 0;
  local_a8.ObjectProxies.ArrayMax = 0;
  local_a8.FloatParam = 0.0;
  local_a8.ParamType = Boolean;
  local_a8.ParamName = param_1;
  local_a8.BoolParam = param_2;
  SetParameterInternal((UAudioParameterComponent *)&this[-1]._padding_,&local_a8);
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetFloatArrayParameter @ 14d990fd0

void __thiscall
UAudioParameterComponent::SetFloatArrayParameter
          (UAudioParameterComponent *this,FName param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  FAudioParameter *pFVar1;
  FAudioParameter local_a8;
  
  pFVar1 = FAudioParameter::FAudioParameter(&local_a8,param_1,param_2);
  SetParameterInternal((UAudioParameterComponent *)&this[-1]._padding_,pFVar1);
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetFloatParameter @ 14d991230

void __thiscall
UAudioParameterComponent::SetFloatParameter
          (UAudioParameterComponent *this,FName param_1,float param_2)

{
  FAudioParameter local_a8;
  
  local_a8.IntParam = 0;
  local_a8.StringParam.Data.ArrayNum = 0;
  local_a8.StringParam.Data.ArrayMax = 0;
  local_a8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_a8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayFloatParam.ArrayNum = 0;
  local_a8.ArrayFloatParam.ArrayMax = 0;
  local_a8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayBoolParam.ArrayNum = 0;
  local_a8.ArrayBoolParam.ArrayMax = 0;
  local_a8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayIntParam.ArrayNum = 0;
  local_a8.ArrayIntParam.ArrayMax = 0;
  local_a8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayObjectParam.ArrayNum = 0;
  local_a8.ArrayObjectParam.ArrayMax = 0;
  local_a8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayStringParam.ArrayNum = 0;
  local_a8.ArrayStringParam.ArrayMax = 0;
  local_a8.TypeName.ComparisonIndex.Value = 0;
  local_a8.TypeName.Number = 0;
  local_a8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ObjectProxies.ArrayNum = 0;
  local_a8.ObjectProxies.ArrayMax = 0;
  local_a8.BoolParam = false;
  local_a8.ParamType = Float;
  local_a8.ParamName = param_1;
  local_a8.FloatParam = param_2;
  SetParameterInternal((UAudioParameterComponent *)&this[-1]._padding_,&local_a8);
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetIntArrayParameter @ 14d9914a0

void __thiscall
UAudioParameterComponent::SetIntArrayParameter
          (UAudioParameterComponent *this,FName param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FAudioParameter *pFVar1;
  FAudioParameter local_a8;
  
  pFVar1 = FAudioParameter::FAudioParameter(&local_a8,param_1,param_2);
  SetParameterInternal((UAudioParameterComponent *)&this[-1]._padding_,pFVar1);
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetIntParameter @ 14d991700

void __thiscall
UAudioParameterComponent::SetIntParameter(UAudioParameterComponent *this,FName param_1,int param_2)

{
  FAudioParameter local_a8;
  
  local_a8.StringParam.Data.ArrayNum = 0;
  local_a8.StringParam.Data.ArrayMax = 0;
  local_a8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayFloatParam.ArrayNum = 0;
  local_a8.ArrayFloatParam.ArrayMax = 0;
  local_a8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_a8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayBoolParam.ArrayNum = 0;
  local_a8.ArrayBoolParam.ArrayMax = 0;
  local_a8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayIntParam.ArrayNum = 0;
  local_a8.ArrayIntParam.ArrayMax = 0;
  local_a8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayObjectParam.ArrayNum = 0;
  local_a8.ArrayObjectParam.ArrayMax = 0;
  local_a8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayStringParam.ArrayNum = 0;
  local_a8.ArrayStringParam.ArrayMax = 0;
  local_a8.TypeName.ComparisonIndex.Value = 0;
  local_a8.TypeName.Number = 0;
  local_a8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ObjectProxies.ArrayNum = 0;
  local_a8.ObjectProxies.ArrayMax = 0;
  local_a8.FloatParam = 0.0;
  local_a8.BoolParam = false;
  local_a8.ParamType = Integer;
  local_a8.ParamName = param_1;
  local_a8.IntParam = param_2;
  SetParameterInternal((UAudioParameterComponent *)&this[-1]._padding_,&local_a8);
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetObjectArrayParameter @ 14d991970

void __thiscall
UAudioParameterComponent::SetObjectArrayParameter
          (UAudioParameterComponent *this,FName param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FAudioParameter *pFVar1;
  FAudioParameter local_a8;
  
  pFVar1 = FAudioParameter::FAudioParameter(&local_a8,param_1,param_2);
  SetParameterInternal((UAudioParameterComponent *)&this[-1]._padding_,pFVar1);
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetObjectParameter @ 14d991bf0

void __thiscall
UAudioParameterComponent::SetObjectParameter
          (UAudioParameterComponent *this,FName param_1,UObject *param_2)

{
  FAudioParameter local_a8;
  
  local_a8.FloatParam = 0.0;
  local_a8.BoolParam = false;
  local_a8.IntParam = 0;
  local_a8.ParamName = param_1;
  local_a8.ObjectParam.field0_0x0 = (TObjectPtr<UObject>_u_0)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  local_a8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.StringParam.Data.ArrayNum = 0;
  local_a8.StringParam.Data.ArrayMax = 0;
  local_a8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayFloatParam.ArrayNum = 0;
  local_a8.ArrayFloatParam.ArrayMax = 0;
  local_a8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayBoolParam.ArrayNum = 0;
  local_a8.ArrayBoolParam.ArrayMax = 0;
  local_a8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayIntParam.ArrayNum = 0;
  local_a8.ArrayIntParam.ArrayMax = 0;
  local_a8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayObjectParam.ArrayNum = 0;
  local_a8.ArrayObjectParam.ArrayMax = 0;
  local_a8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayStringParam.ArrayNum = 0;
  local_a8.ArrayStringParam.ArrayMax = 0;
  local_a8.ParamType = Object;
  local_a8.TypeName.ComparisonIndex.Value = 0;
  local_a8.TypeName.Number = 0;
  local_a8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ObjectProxies.ArrayNum = 0;
  local_a8.ObjectProxies.ArrayMax = 0;
  SetParameterInternal((UAudioParameterComponent *)&this[-1]._padding_,&local_a8);
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetParameter @ 14d991f80

void __thiscall
UAudioParameterComponent::SetParameter(UAudioParameterComponent *this,FAudioParameter *param_1)

{
  SetParameterInternal((UAudioParameterComponent *)&this[-1]._padding_,param_1);
  return;
}

// SetParameterInternal @ 14d991fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAudioParameterComponent::SetParameterInternal
          (UAudioParameterComponent *this,FAudioParameter *param_1)

{
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  FAudioParameter *pFVar7;
  FAudioDevice *this_00;
  longlong *plVar8;
  FName *pFVar9;
  TStatId TVar10;
  ulong64 uVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  ulong uVar14;
  ForAnyElementType FVar15;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  FName local_98;
  FName local_90;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> local_88;
  TArray<UAudioComponent_*,TSizedDefaultAllocator<32>_> local_78;
  code *local_68 [5];
  undefined8 *local_40;
  
  if (param_1->ParamName != (FName)0x0) {
    pTVar1 = &this->Parameters;
    iVar2 = (this->Parameters).ArrayNum;
    pFVar7 = FAudioParameter::FindOrAddParam(pTVar1,param_1->ParamName);
    if (pFVar7 != (FAudioParameter *)0x0) {
      if (((AudioParameterComponentConsoleVariables::bSetParamOnlyOnValueChange != 0) &&
          (iVar2 == (this->Parameters).ArrayNum)) &&
         (bVar5 = AudioParameterComponentUtils::TestEquivalence(pFVar7,param_1), bVar5)) {
        return;
      }
      FAudioParameter::Merge(pFVar7,param_1,false,true,false);
    }
    LogParameter(this,param_1);
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    GetAllAudioComponents(this,&local_78);
    uVar12 = (ulonglong)local_78.ArrayNum;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    pFVar13 = local_78.AllocatorInstance.Data + uVar12 * 8;
    local_res18 = local_78.ArrayNum;
    FVar15.Data = local_78.AllocatorInstance.Data;
    uVar14 = _tls_index;
    local_res20 = pFVar13;
    while( true ) {
      if (local_78.ArrayNum != (int)uVar12) {
        `TCheckedPointerIterator<UAudioComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar15.Data == pFVar13) break;
      if (((*(longlong *)FVar15.Data != 0) &&
          (cVar6 = (**(code **)(*(longlong *)(*(longlong *)FVar15.Data + 0x250) + 0xa8))(),
          cVar6 != '\0')) &&
         ((cVar6 = (**(code **)(*(longlong *)(*(longlong *)FVar15.Data + 0x250) + 0xb0))(),
          cVar6 == '\0' &&
          (this_00 = (FAudioDevice *)
                     (**(code **)(*(longlong *)(*(longlong *)FVar15.Data + 0x250) + 0x88))(),
          this_00 != (FAudioDevice *)0x0)))) {
        if (&local_88 != pTVar1) {
          DestructItems<FAudioParameter,int>
                    ((FAudioParameter *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
          iVar2 = (this->Parameters).ArrayNum;
          pFVar7 = (FAudioParameter *)(pTVar1->AllocatorInstance).Data;
          local_88.ArrayNum = iVar2;
          if ((iVar2 == 0) && (local_88.ArrayMax == 0)) {
            local_88.ArrayNum = 0;
            local_88.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xa0,8,iVar2,local_88.ArrayMax,&local_88.AllocatorInstance,iVar2,
                       &local_88.ArrayMax);
            ConstructItems<FAudioParameter,FAudioParameter,int>
                      (local_88.AllocatorInstance.Data,pFVar7,iVar2);
          }
        }
        plVar8 = (longlong *)(**(code **)(*(longlong *)(*(longlong *)FVar15.Data + 0x250) + 0xa0))()
        ;
        if (plVar8 != (longlong *)0x0) {
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar14 * 8) +
                       0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
            ::FName::FName(&ProxyFeatureName,"AudioParameterComponent");
            _Init_thread_footer(&::_TSS1);
          }
          (**(code **)(*plVar8 + 0x358))(plVar8,&local_88,ProxyFeatureName);
        }
        pFVar13 = local_res20;
        if (local_88.ArrayNum != 0) {
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar14 * 8) +
                       0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
            StatPtr_STAT_AudioSetParameters =
                 (FThreadSafeStaticStat<_private:_void___cdecl_UAudioParameterComponent::SetParameterInternal(FAudioParameter_&&)_::_36_::FStat_STAT_AudioSetParameters>
                  )0x0;
            pFVar9 = ::FName::FName(&local_98,"STAT_AudioSetParameters");
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetParameters,*pFVar9,
                       L"FAudioThreadTask.SoundParameterControllerInterface.SetParameters",
                       "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",
                       true,true,ST_int64,true,false,MCR_Invalid);
            _Init_thread_footer(&::_TSS2);
          }
          TVar10.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioSetParameters;
          if (StatPtr_STAT_AudioSetParameters ==
              (FThreadSafeStaticStat<_private:_void___cdecl_UAudioParameterComponent::SetParameterInternal(FAudioParameter_&&)_::_36_::FStat_STAT_AudioSetParameters>
               )0x0) {
            pFVar9 = ::FName::FName(&local_90,"STAT_AudioSetParameters");
            TVar10.StatIdPtr =
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSetParameters,*pFVar9,
                            L"FAudioThreadTask.SoundParameterControllerInterface.SetParameters",
                            "STATGROUP_AudioThreadCommands","STATCAT_Advanced",
                            L"Audio Thread Commands",true,true,ST_int64,true,false,MCR_Invalid);
          }
          FVar3.Data = local_88.AllocatorInstance.Data;
          iVar2 = local_88.ArrayNum;
          iVar4 = local_88.ArrayMax;
          local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_88.ArrayNum = 0;
          local_88.ArrayMax = 0;
          local_68[0] = (code *)0x0;
          local_40 = (undefined8 *)0x0;
          local_40 = FMemory::Malloc(0x20,8);
          local_40[1] = this_00;
          local_40[2] = FVar3.Data;
          *local_40 = &UE::Core::Private::Function::
                       TFunction_OwnedObject<`UAudioParameterComponent::SetParameterInternal'::`36'::<lambda_1>,1,1>
                       ::_vftable_;
          *(int *)(local_40 + 3) = iVar2;
          *(int *)((longlong)local_40 + 0x1c) = iVar4;
          if (local_40 != (undefined8 *)&DAT_fffffffffffffff8) {
            local_68[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<`UAudioParameterComponent::SetParameterInternal'::__l36::<lambda_1>,void,FActiveSound_&>
                          ::Call;
          }
          uVar11 = (**(code **)(*(longlong *)(*(longlong *)FVar15.Data + 0x250) + 0x90))();
          FAudioDevice::SendCommandToActiveSounds
                    (this_00,uVar11,(TUniqueFunction<void___cdecl(FActiveSound_&)> *)local_68,TVar10
                    );
          DestructItems<FAudioParameter,int>((FAudioParameter *)0x0,0);
          pFVar13 = local_res20;
          uVar14 = _tls_index;
        }
      }
      uVar12 = (ulonglong)local_res18;
      FVar15.Data = FVar15.Data + 8;
    }
    DestructItems<FAudioParameter,int>
              ((FAudioParameter *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
    if ((FAudioParameter *)local_88.AllocatorInstance.Data != (FAudioParameter *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  return;
}

// SetParameters @ 14d992740

void __thiscall
UAudioParameterComponent::SetParameters
          (UAudioParameterComponent *this,
          TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FName FVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ForAnyElementType FVar12;
  FAudioParameter *pFVar13;
  FAudioParameter *pFVar14;
  FAudioParameter *pFVar15;
  UAudioParameterComponent *local_res8;
  undefined1 local_res10 [8];
  uint local_res18;
  FAudioParameter *local_res20;
  TArray<UAudioComponent_*,TSizedDefaultAllocator<32>_> local_68;
  ForAnyElementType local_58;
  int local_50;
  int local_4c [3];
  ulonglong uVar11;
  
  local_res18 = param_1->ArrayNum;
  uVar8 = (ulonglong)(int)local_res18;
  pFVar14 = (FAudioParameter *)(param_1->AllocatorInstance).Data;
  local_res20 = pFVar14 + uVar8;
  local_res8 = this;
  do {
    pFVar13 = local_res20;
    if (param_1->ArrayNum != (int)uVar8) {
      `TCheckedPointerIterator<FAudioParameter,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
      this = local_res8;
    }
    if (pFVar14 == pFVar13) {
      uVar11 = 0;
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.ArrayNum = 0;
      local_68.ArrayMax = 0;
      uVar8 = uVar11;
      uVar10 = uVar11;
      while( true ) {
        if ((int)uVar8 != 0) {
          `TCheckedPointerIterator<TObjectPtr<UAudioComponent>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res8);
          uVar8 = (ulonglong)(uint)local_68.ArrayNum;
        }
        if (uVar10 == 0) break;
        uVar10 = uVar10 + 8;
      }
      GetAllAudioComponents((UAudioParameterComponent *)&this[-1]._padding_,&local_68);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (FVar12.Data = local_68.AllocatorInstance.Data, 0 < local_68.ArrayNum)) {
        do {
          if (*(UObject **)FVar12.Data != (UObject *)0x0) {
            UE::GC::MarkAsReachable(*(UObject **)FVar12.Data);
          }
          uVar9 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar9;
          FVar12.Data = FVar12.Data + 8;
        } while ((int)uVar9 < local_68.ArrayNum);
      }
      iVar7 = local_68.ArrayNum;
      pFVar3 = local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 8;
      FVar12.Data = local_68.AllocatorInstance.Data;
      while( true ) {
        if (local_68.ArrayNum != iVar7) {
          `TCheckedPointerIterator<TObjectPtr<UAudioComponent>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_res8);
        }
        if (FVar12.Data == pFVar3) break;
        if ((*(longlong *)FVar12.Data != 0) &&
           (cVar6 = (**(code **)(*(longlong *)(*(longlong *)FVar12.Data + 0x250) + 0xa8))(),
           cVar6 != '\0')) {
          iVar4 = param_1->ArrayNum;
          pFVar14 = (FAudioParameter *)(param_1->AllocatorInstance).Data;
          local_58.Data = (FScriptContainerElement *)0x0;
          local_50 = iVar4;
          if (iVar4 == 0) {
            local_4c[0] = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xa0,8,iVar4,0,&local_58,iVar4,local_4c);
            ConstructItems<FAudioParameter,FAudioParameter,int>(local_58.Data,pFVar14,iVar4);
          }
          (**(code **)(*(longlong *)(*(longlong *)FVar12.Data + 0x250) + 0x80))
                    ((longlong *)(*(longlong *)FVar12.Data + 0x250),&local_58);
          DestructItems<FAudioParameter,int>((FAudioParameter *)local_58.Data,local_50);
          if ((FAudioParameter *)local_58.Data != (FAudioParameter *)0x0) {
            FMemory::Free(local_58.Data);
          }
        }
        FVar12.Data = FVar12.Data + 8;
      }
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
      return;
    }
    FVar5 = pFVar14->ParamName;
    plVar1 = &this->_padding_;
    if (FVar5 != (FName)0x0) {
      iVar7 = (int)this->_padding_;
      pFVar13 = (FAudioParameter *)*plVar1;
      pFVar15 = pFVar13 + iVar7;
      while( true ) {
        if ((int)this->_padding_ != iVar7) {
          `TCheckedPointerIterator<FAudioParameter,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pFVar13 == pFVar15) break;
        if (pFVar13->ParamName == FVar5) goto LAB_14d992819;
        pFVar13 = pFVar13 + 1;
      }
      iVar7 = (int)this->_padding_;
      piVar2 = (int *)((longlong)&this->_padding_ + 4);
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8a0,(ForAnyElementType *)plVar1,piVar2);
      }
      *(int *)&this->_padding_ = iVar7 + 1;
      pFVar13 = (FAudioParameter *)(*plVar1 + (longlong)iVar7 * 0xa0);
      DefaultConstructItems<FAudioParameter,int>(pFVar13,1);
      pFVar13->ParamName = FVar5;
      this = local_res8;
      if (pFVar13 == (FAudioParameter *)0x0) goto LAB_14d992833;
LAB_14d992819:
      FAudioParameter::Merge(pFVar13,pFVar14,false,true,false);
      this = local_res8;
    }
LAB_14d992833:
    pFVar14 = pFVar14 + 1;
    uVar8 = (ulonglong)local_res18;
  } while( true );
}

// SetParameters_Blueprint @ 14d992a70

void __thiscall
UAudioParameterComponent::SetParameters_Blueprint
          (UAudioParameterComponent *this,
          TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FAudioParameter *pFVar2;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (FAudioParameter *)(param_1->AllocatorInstance).Data;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = iVar1;
  if (iVar1 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,iVar1,0,&local_18,iVar1,&local_c);
    ConstructItems<FAudioParameter,FAudioParameter,int>(local_18.Data,pFVar2,iVar1);
  }
  (**(code **)(this->_padding_ + 0x80))(this,&local_18);
  DestructItems<FAudioParameter,int>((FAudioParameter *)local_18.Data,local_10);
  if ((FAudioParameter *)local_18.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// SetStringArrayParameter @ 14d992c90

void __thiscall
UAudioParameterComponent::SetStringArrayParameter
          (UAudioParameterComponent *this,FName param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FAudioParameter *pFVar1;
  FAudioParameter local_a8;
  
  pFVar1 = FAudioParameter::FAudioParameter(&local_a8,param_1,param_2);
  SetParameterInternal((UAudioParameterComponent *)&this[-1]._padding_,pFVar1);
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetStringParameter @ 14d992f00

void __thiscall
UAudioParameterComponent::SetStringParameter
          (UAudioParameterComponent *this,FName param_1,FString *param_2)

{
  FAudioParameter local_a8;
  
  local_a8.FloatParam = 0.0;
  local_a8.IntParam = 0;
  local_a8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_a8.BoolParam = false;
  local_a8.ParamName = param_1;
  ::FString::FString(&local_a8.StringParam,param_2);
  local_a8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayFloatParam.ArrayNum = 0;
  local_a8.ArrayFloatParam.ArrayMax = 0;
  local_a8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayBoolParam.ArrayNum = 0;
  local_a8.ArrayBoolParam.ArrayMax = 0;
  local_a8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayIntParam.ArrayNum = 0;
  local_a8.ArrayIntParam.ArrayMax = 0;
  local_a8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayObjectParam.ArrayNum = 0;
  local_a8.ArrayObjectParam.ArrayMax = 0;
  local_a8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayStringParam.ArrayNum = 0;
  local_a8.ArrayStringParam.ArrayMax = 0;
  local_a8.ParamType = String;
  local_a8.TypeName.ComparisonIndex.Value = 0;
  local_a8.TypeName.Number = 0;
  local_a8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ObjectProxies.ArrayNum = 0;
  local_a8.ObjectProxies.ArrayMax = 0;
  SetParameterInternal((UAudioParameterComponent *)&this[-1]._padding_,&local_a8);
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetTriggerParameter @ 14d993160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAudioParameterComponent::SetTriggerParameter(UAudioParameterComponent *this,FName param_1)

{
  if (2 < (byte)LogAudio._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    return;
  }
  return;
}

// StaticRegisterNativesUAudioParameterComponent @ 14d993720

void __cdecl UAudioParameterComponent::StaticRegisterNativesUAudioParameterComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UAudioParameterComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// _getUObject @ 14d9962e0

UObject * __thiscall UAudioParameterComponent::_getUObject(UAudioParameterComponent *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{160}' @ 14d9962ec

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UAudioParameterComponent::_getUObject`adjustor{160}' (void)const __ptr64 */

UObject * __thiscall
UAudioParameterComponent::_getUObject_adjustor_160__(UAudioParameterComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UAudioParameterComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{168}' @ 14d996300

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UAudioParameterComponent::_getUObject`adjustor{168}' (void)const __ptr64 */

UObject * __thiscall
UAudioParameterComponent::_getUObject_adjustor_168__(UAudioParameterComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UAudioParameterComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// execGetParameters @ 14d996ff0

void __cdecl
UAudioParameterComponent::execGetParameters(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *)&param_1[5].field_0x20);
  return;
}

