// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 16

// StaticClass @ 149f1a690

UClass * __cdecl UPCGGenSourceComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGenSourceComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGenSourceComponent",
               &Z_Registration_Info_UClass_UPCGGenSourceComponent.InnerSingleton,
               StaticRegisterNativesUPCGGenSourceComponent,200,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGenSourceComponent>,
               InternalVTableHelperCtorCaller<UPCGGenSourceComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGenSourceComponent.InnerSingleton;
}

// UPCGGenSourceComponent @ 149f322c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGGenSourceComponent * __thiscall
UPCGGenSourceComponent::UPCGGenSourceComponent(UPCGGenSourceComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0xc0 = &___7UPCGGenSourceComponent__6B_;
  return this;
}

// ~UPCGGenSourceComponent @ 149f346f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGGenSourceComponent::~UPCGGenSourceComponent(UPCGGenSourceComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0xc0 = &___7IPCGGenSourceBase__6B_;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// BeginPlay @ 149f3c9c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGGenSourceComponent::BeginPlay(UPCGGenSourceComponent *this)

{
  UWorld *pUVar1;
  UPCGSubsystem *pUVar2;
  FPCGGenSourceManager *this_00;
  FPCGGenSourceManager *pFVar3;
  
  UActorComponent::BeginPlay((UActorComponent *)this);
  if (*(AActor **)&this->field_0xa8 != (AActor *)0x0) {
    pUVar1 = AActor::GetWorld(*(AActor **)&this->field_0xa8);
    pUVar2 = UPCGSubsystem::GetInstance(pUVar1);
    if (pUVar2 != (UPCGSubsystem *)0x0) {
      this_00 = (FPCGGenSourceManager *)0x0;
      if (pUVar2->RuntimeGenScheduler != (FPCGRuntimeGenScheduler *)0x0) {
        this_00 = pUVar2->RuntimeGenScheduler->GenSourceManager;
      }
      if (this_00 != (FPCGGenSourceManager *)0x0) {
        pFVar3 = (FPCGGenSourceManager *)&this->field_0xc0;
        if (this == (UPCGGenSourceComponent *)0x0) {
          pFVar3 = (FPCGGenSourceManager *)0x0;
        }
        FPCGGenSourceManager::RegisterGenSource(this_00,(IPCGGenSourceBase *)pFVar3,(FName)0x0);
        return;
      }
    }
  }
  return;
}

// EndPlay @ 149f424f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGGenSourceComponent::EndPlay(UPCGGenSourceComponent *this,Type param_1)

{
  UWorld *pUVar1;
  UPCGSubsystem *pUVar2;
  FPCGGenSourceManager *this_00;
  FPCGGenSourceManager *pFVar3;
  
  if (*(AActor **)&this->field_0xa8 != (AActor *)0x0) {
    pUVar1 = AActor::GetWorld(*(AActor **)&this->field_0xa8);
    pUVar2 = UPCGSubsystem::GetInstance(pUVar1);
    if (pUVar2 != (UPCGSubsystem *)0x0) {
      this_00 = (FPCGGenSourceManager *)0x0;
      if (pUVar2->RuntimeGenScheduler != (FPCGRuntimeGenScheduler *)0x0) {
        this_00 = pUVar2->RuntimeGenScheduler->GenSourceManager;
      }
      if (this_00 != (FPCGGenSourceManager *)0x0) {
        pFVar3 = (FPCGGenSourceManager *)&this->field_0xc0;
        if (this == (UPCGGenSourceComponent *)0x0) {
          pFVar3 = (FPCGGenSourceManager *)0x0;
        }
        FPCGGenSourceManager::UnregisterGenSource(this_00,(IPCGGenSourceBase *)pFVar3);
      }
    }
  }
  UActorComponent::EndPlay((UActorComponent *)this,param_1);
  return;
}

// GetDirection @ 149f496f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TOptional<UE::Math::TVector<double>_> * __thiscall
UPCGGenSourceComponent::GetDirection
          (UPCGGenSourceComponent *this,
          TOptional<UE::Math::TVector<double>_> *__return_storage_ptr__)

{
  double dVar1;
  USceneComponent *this_00;
  double dVar2;
  double dVar3;
  TVector<double>_u_0 *pTVar4;
  TVector<double>_u_0 local_28;
  
  if (*(longlong *)&this[-1].field_0xb0 != 0) {
    this_00 = *(USceneComponent **)(*(longlong *)&this[-1].field_0xb0 + 0x1b8);
    if (this_00 == (USceneComponent *)0x0) {
      pTVar4 = &local_28;
      local_28._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
      local_28._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
      local_28._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
    }
    else {
      pTVar4 = &USceneComponent::GetForwardVector(this_00,(TVector<double> *)&local_28._s_0)->
                field0_0x0;
    }
    dVar2 = (((TVector<double>_u_0 *)&(pTVar4->_s_0).X)->_s_0).X;
    dVar3 = (pTVar4->_s_0).Y;
    __return_storage_ptr__->bIsSet = true;
    dVar1 = (pTVar4->_s_0).Z;
    (__return_storage_ptr__->TypedValue).field0_0x0._s_0.X = dVar2;
    (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Y = dVar3;
    (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Z = dVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetGenSourceManager @ 149f4aa20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGGenSourceManager * __thiscall
UPCGGenSourceComponent::GetGenSourceManager(UPCGGenSourceComponent *this)

{
  UWorld *pUVar1;
  UPCGSubsystem *pUVar2;
  
  if (*(AActor **)&this->field_0xa8 != (AActor *)0x0) {
    pUVar1 = AActor::GetWorld(*(AActor **)&this->field_0xa8);
    pUVar2 = UPCGSubsystem::GetInstance(pUVar1);
    if ((pUVar2 != (UPCGSubsystem *)0x0) &&
       (pUVar2->RuntimeGenScheduler != (FPCGRuntimeGenScheduler *)0x0)) {
      return pUVar2->RuntimeGenScheduler->GenSourceManager;
    }
  }
  return (FPCGGenSourceManager *)0x0;
}

// GetPosition @ 149f4ca10

TOptional<UE::Math::TVector<double>_> * __thiscall
UPCGGenSourceComponent::GetPosition
          (UPCGGenSourceComponent *this,
          TOptional<UE::Math::TVector<double>_> *__return_storage_ptr__)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  if (*(longlong *)&this[-1].field_0xb0 == 0) {
    __return_storage_ptr__->bIsSet = false;
    return __return_storage_ptr__;
  }
  lVar2 = *(longlong *)(*(longlong *)&this[-1].field_0xb0 + 0x1b8);
  if (lVar2 != 0) {
    dVar3 = *(double *)(lVar2 + 0x218);
    dVar1 = *(double *)(lVar2 + 0x220);
    (__return_storage_ptr__->TypedValue).field0_0x0._s_0.X = *(double *)(lVar2 + 0x210);
    (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Y = dVar3;
    __return_storage_ptr__->bIsSet = true;
    (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Z = dVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = true;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (__return_storage_ptr__->TypedValue).field0_0x0._s_0.X = (double)uVar4;
  (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Y = (double)uVar5;
  (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Z = (double)uVar6;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149f4d0b0

UClass * __cdecl UPCGGenSourceComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGenSourceComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGenSourceComponent",
               &Z_Registration_Info_UClass_UPCGGenSourceComponent.InnerSingleton,
               StaticRegisterNativesUPCGGenSourceComponent,200,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGenSourceComponent>,
               InternalVTableHelperCtorCaller<UPCGGenSourceComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGenSourceComponent.InnerSingleton;
}

// OnComponentCreated @ 149f568a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGGenSourceComponent::OnComponentCreated(UPCGGenSourceComponent *this)

{
  UWorld *pUVar1;
  UPCGSubsystem *pUVar2;
  FPCGGenSourceManager *this_00;
  FPCGGenSourceManager *pFVar3;
  
  UActorComponent::OnComponentCreated((UActorComponent *)this);
  if (*(AActor **)&this->field_0xa8 != (AActor *)0x0) {
    pUVar1 = AActor::GetWorld(*(AActor **)&this->field_0xa8);
    pUVar2 = UPCGSubsystem::GetInstance(pUVar1);
    if (pUVar2 != (UPCGSubsystem *)0x0) {
      this_00 = (FPCGGenSourceManager *)0x0;
      if (pUVar2->RuntimeGenScheduler != (FPCGRuntimeGenScheduler *)0x0) {
        this_00 = pUVar2->RuntimeGenScheduler->GenSourceManager;
      }
      if (this_00 != (FPCGGenSourceManager *)0x0) {
        pFVar3 = (FPCGGenSourceManager *)&this->field_0xc0;
        if (this == (UPCGGenSourceComponent *)0x0) {
          pFVar3 = (FPCGGenSourceManager *)0x0;
        }
        FPCGGenSourceManager::RegisterGenSource(this_00,(IPCGGenSourceBase *)pFVar3,(FName)0x0);
        return;
      }
    }
  }
  return;
}

// OnComponentDestroyed @ 149f56920

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
UPCGGenSourceComponent::OnComponentDestroyed(UPCGGenSourceComponent *this,bool param_1)

{
  UWorld *pUVar1;
  UPCGSubsystem *pUVar2;
  FPCGGenSourceManager *this_00;
  FPCGGenSourceManager *pFVar3;
  
  UActorComponent::OnComponentDestroyed((UActorComponent *)this,param_1);
  if (*(AActor **)&this->field_0xa8 != (AActor *)0x0) {
    pUVar1 = AActor::GetWorld(*(AActor **)&this->field_0xa8);
    pUVar2 = UPCGSubsystem::GetInstance(pUVar1);
    if (pUVar2 != (UPCGSubsystem *)0x0) {
      this_00 = (FPCGGenSourceManager *)0x0;
      if (pUVar2->RuntimeGenScheduler != (FPCGRuntimeGenScheduler *)0x0) {
        this_00 = pUVar2->RuntimeGenScheduler->GenSourceManager;
      }
      if (this_00 != (FPCGGenSourceManager *)0x0) {
        pFVar3 = (FPCGGenSourceManager *)&this->field_0xc0;
        if (this == (UPCGGenSourceComponent *)0x0) {
          pFVar3 = (FPCGGenSourceManager *)0x0;
        }
        FPCGGenSourceManager::UnregisterGenSource(this_00,(IPCGGenSourceBase *)pFVar3);
        return;
      }
    }
  }
  return;
}

// OnRegister @ 149f573b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGGenSourceComponent::OnRegister(UPCGGenSourceComponent *this)

{
  int iVar1;
  UObjectBaseUtility *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FUObjectItem *pFVar7;
  FString *pFVar8;
  bool bVar9;
  FString FStack_c8;
  FString FStack_b8;
  FString FStack_a8;
  FString FStack_98;
  FString FStack_88;
  FString FStack_78;
  FString FStack_68;
  FString FStack_58;
  FString FStack_48;
  FString FStack_38;
  FString FStack_28;
  
  bVar6 = false;
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1544,"UActorComponent::OnRegister",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
               ,0x608);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1544);
  }
  pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
  if (((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) {
    UObject::GetDetailedInfo((UObject *)this,&FStack_c8);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsUnreachable()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x60b,L"%s");
    if (FStack_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_c8.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = UObjectBaseUtility::IsTemplate
                    (*(UObjectBaseUtility **)&this->field_0x20,
                     RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar5) {
    UObject::GetDetailedInfo((UObject *)this,&FStack_a8);
    UObjectBaseUtility::GetFullName
              (*(UObjectBaseUtility **)&this->field_0x20,&FStack_b8,(UObject *)0x0,None);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GetOuter()->IsTemplate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x60c,L"\'%s\' (%s)");
    if (FStack_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_b8.Data.AllocatorInstance.Data);
    }
    if (FStack_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_a8.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar5) {
    UObject::GetDetailedInfo((UObject *)this,&FStack_88);
    UObjectBaseUtility::GetFullName
              (*(UObjectBaseUtility **)&this->field_0x20,&FStack_98,(UObject *)0x0,None);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsTemplate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x60d,L"\'%s\' (%s)");
    if (FStack_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_98.Data.AllocatorInstance.Data);
    }
    if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((*(uint *)&this->field_0x8 >> 0x1e & 1) != 0) {
    if (*(UObjectBaseUtility **)&this->field_0xa8 != (UObjectBaseUtility *)0x0) {
      pFVar8 = UObjectBaseUtility::GetFullName
                         (*(UObjectBaseUtility **)&this->field_0xa8,&FStack_68,(UObject *)0x0,None);
      if ((pFVar8->Data).ArrayNum == 0) {
        bVar6 = true;
      }
      else {
        bVar6 = true;
      }
    }
    UObject::GetDetailedInfo((UObject *)this,&FStack_78);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidChecked(this)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x60e,L"OnRegister: %s to %s");
    if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
    }
    if ((bVar6) && (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(longlong *)&this->field_0xb0 == 0) {
    pUVar2 = *(UObjectBaseUtility **)&this->field_0xa8;
    if (pUVar2 != (UObjectBaseUtility *)0x0) {
      UObjectBaseUtility::GetFullName(pUVar2,&FStack_48,(UObject *)0x0,None);
    }
    UObject::GetDetailedInfo((UObject *)this,&FStack_58);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorldPrivate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x610,L"OnRegister: %s to %s");
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
    }
    if ((pUVar2 != (UObjectBaseUtility *)0x0) &&
       (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((this->field_0x98 & 1) != 0) {
    pUVar2 = *(UObjectBaseUtility **)&this->field_0xa8;
    if (pUVar2 != (UObjectBaseUtility *)0x0) {
      UObjectBaseUtility::GetFullName(pUVar2,&FStack_28,(UObject *)0x0,None);
    }
    UObject::GetDetailedInfo((UObject *)this,&FStack_38);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x611,L"OnRegister: %s to %s");
    if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
    }
    if ((pUVar2 != (UObjectBaseUtility *)0x0) &&
       (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar1 = *(int *)&this->field_0x94;
  this->field_0x98 = this->field_0x98 | 1;
  *(undefined4 *)&this->field_0x94 = 0;
  if (iVar1 != 2) {
    (**(code **)(*(longlong *)this + 0x448))(this,0,0);
  }
  if ((this->field_0x9a & 8) != 0) {
    lVar3 = *(longlong *)&this->field_0xa8;
    bVar6 = UWorld::IsGameWorld(*(UWorld **)&this->field_0xb0);
    if (((!bVar6) || (lVar3 == 0)) || ((*(byte *)(lVar3 + 0x5c) & 2) != 0)) {
      (**(code **)(*(longlong *)this + 0x2b8))(this,1);
    }
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnUnregister @ 149f573c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPCGGenSourceComponent::OnUnregister(UPCGGenSourceComponent *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  
  if ((this->field_0x98 & 1) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x62b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->field_0x98 = this->field_0x98 & 0xfe;
  if (*(int *)&this->field_0x94 == 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsPreRegistering()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x62e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)&this->field_0x94 == 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsPreUnregistering()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x62f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&this->field_0x94 = 0;
  if ((this->field_0x8c & 3) != 0) {
    this_00 = UActorComponent::GetWorld((UActorComponent *)this);
    if (this_00 != (UWorld *)0x0) {
      UWorld::ClearActorComponentEndOfFrameUpdate(this_00,(UActorComponent *)this);
      return;
    }
  }
  return;
}

// StaticRegisterNativesUPCGGenSourceComponent @ 149f63940

void __cdecl UPCGGenSourceComponent::StaticRegisterNativesUPCGGenSourceComponent(void)

{
  return;
}

// _getUObject @ 149f6f5d0

UObject * __thiscall UPCGGenSourceComponent::_getUObject(UPCGGenSourceComponent *this)

{
  return (UObject *)&this[-1].field_0xa0;
}

// _getUObject`adjustor{152}' @ 149f6f5dc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UPCGGenSourceComponent::_getUObject`adjustor{152}' (void)const __ptr64 */

UObject * __thiscall
UPCGGenSourceComponent::_getUObject_adjustor_152__(UPCGGenSourceComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UPCGGenSourceComponent *)&this[-1].field_0x30);
  return (UObject *)pUVar1;
}

