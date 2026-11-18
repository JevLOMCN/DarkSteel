// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetaHumanSDKRuntime
// Functions: 11

// StaticClass @ 14df89c90

UClass * __cdecl UMetaHumanComponentUE::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaHumanComponentUE.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetaHumanSDKRuntime",L"MetaHumanComponentUE",
               &Z_Registration_Info_UClass_UMetaHumanComponentUE.InnerSingleton,
               StaticRegisterNativesUMetaHumanComponentUE,0x1b8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UMetaHumanComponentUE>,
               InternalVTableHelperCtorCaller<UMetaHumanComponentUE>,local_res8,
               UMetaHumanComponentBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaHumanComponentUE.InnerSingleton;
}

// UMetaHumanComponentUE @ 14df8c7f0

UMetaHumanComponentUE * __thiscall
UMetaHumanComponentUE::UMetaHumanComponentUE(UMetaHumanComponentUE *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UMetaHumanComponentBase::UMetaHumanComponentBase((UMetaHumanComponentBase *)this,param_1);
  this_00 = &(this->PostProcessAnimBP).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->PostProcessAnimBP).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->PostProcessAnimBP).SoftObjectPtr = 0;
  *(undefined8 *)&(this->PostProcessAnimBP).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->PostProcessAnimBP).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  return this;
}

// UMetaHumanComponentUE @ 14df8c860

UMetaHumanComponentUE * __thiscall
UMetaHumanComponentUE::UMetaHumanComponentUE(UMetaHumanComponentUE *this)

{
  undefined1 *this_00;
  
  UMetaHumanComponentBase::UMetaHumanComponentBase((UMetaHumanComponentBase *)this);
  this_00 = &(this->PostProcessAnimBP).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->PostProcessAnimBP).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->PostProcessAnimBP).SoftObjectPtr = 0;
  *(undefined8 *)&(this->PostProcessAnimBP).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->PostProcessAnimBP).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  return this;
}

// ~UMetaHumanComponentUE @ 14df8c970

void __thiscall UMetaHumanComponentUE::~UMetaHumanComponentUE(UMetaHumanComponentUE *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pvVar1 = *(void **)&(this->PostProcessAnimBP).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UMetaHumanComponentBase::~UMetaHumanComponentBase((UMetaHumanComponentBase *)this);
  return;
}

// BeginPlay @ 14df8cd40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMetaHumanComponentUE::BeginPlay(UMetaHumanComponentUE *this)

{
  USkeletalMeshComponent *pUVar1;
  UAnimInstance *pUVar2;
  FName local_res8;
  
  UActorComponent::BeginPlay((UActorComponent *)this);
  SetupCustomizableBodyPart(this,(FMetaHumanCustomizableBodyPart *)&this->_padding_);
  SetupCustomizableBodyPart(this,(FMetaHumanCustomizableBodyPart *)&this->_padding_);
  SetupCustomizableBodyPart(this,(FMetaHumanCustomizableBodyPart *)&this->_padding_);
  pUVar1 = UMetaHumanComponentBase::GetSkelMeshComponentByName
                     ((UMetaHumanComponentBase *)this,(FString *)&this->_padding_);
  if (pUVar1 != (USkeletalMeshComponent *)0x0) {
    pUVar2 = USkeletalMeshComponent::GetPostProcessInstance(pUVar1);
    PostInitAnimBP(this,pUVar1,pUVar2);
  }
  pUVar1 = UMetaHumanComponentBase::GetBodySkelMeshComponent((UMetaHumanComponentBase *)this);
  if (pUVar1 != (USkeletalMeshComponent *)0x0) {
    pUVar2 = USkeletalMeshComponent::GetPostProcessInstance(pUVar1);
    if (pUVar2 != (UAnimInstance *)0x0) {
      ::FName::FName(&local_res8,L"Enable Body Correctives");
      MetaHumanComponentHelpers::ConnectVariable<FBoolProperty,bool>
                (pUVar2,&local_res8,(bool *)((longlong)&this->_padding_ + 1));
    }
  }
  return;
}

// GetPrivateStaticClass @ 14df8d120

UClass * __cdecl UMetaHumanComponentUE::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaHumanComponentUE.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetaHumanSDKRuntime",L"MetaHumanComponentUE",
               &Z_Registration_Info_UClass_UMetaHumanComponentUE.InnerSingleton,
               StaticRegisterNativesUMetaHumanComponentUE,0x1b8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UMetaHumanComponentUE>,
               InternalVTableHelperCtorCaller<UMetaHumanComponentUE>,local_res8,
               UMetaHumanComponentBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaHumanComponentUE.InnerSingleton;
}

// OnRegister @ 14df8d710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMetaHumanComponentUE::OnRegister(UMetaHumanComponentUE *this)

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
  pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
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
                    ((UObjectBaseUtility *)this->_padding_,RF_ArchetypeObject|RF_ClassDefaultObject)
  ;
  if (bVar5) {
    UObject::GetDetailedInfo((UObject *)this,&FStack_a8);
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)this->_padding_,&FStack_b8,(UObject *)0x0,None);
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
              ((UObjectBaseUtility *)this->_padding_,&FStack_98,(UObject *)0x0,None);
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
  if (((uint)this->_padding_ >> 0x1e & 1) != 0) {
    if ((UObjectBaseUtility *)this->_padding_ != (UObjectBaseUtility *)0x0) {
      pFVar8 = UObjectBaseUtility::GetFullName
                         ((UObjectBaseUtility *)this->_padding_,&FStack_68,(UObject *)0x0,None);
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
  if (this->_padding_ == 0) {
    pUVar2 = (UObjectBaseUtility *)this->_padding_;
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
  if ((this->_padding_ & 1) != 0) {
    pUVar2 = (UObjectBaseUtility *)this->_padding_;
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
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  if (iVar1 != 2) {
    (**(code **)(this->_padding_ + 0x448))(this,0,0);
  }
  if ((this->_padding_ & 0x80000) != 0) {
    lVar3 = this->_padding_;
    bVar6 = UWorld::IsGameWorld((UWorld *)this->_padding_);
    if (((!bVar6) || (lVar3 == 0)) || ((*(byte *)(lVar3 + 0x5c) & 2) != 0)) {
      (**(code **)(this->_padding_ + 0x2b8))(this,1);
    }
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnUnregister @ 14df8d720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMetaHumanComponentUE::OnUnregister(UMetaHumanComponentUE *this)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  UWorld *this_00;
  
  if ((this->_padding_ & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x62b,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  if (*(int *)((longlong)&this->_padding_ + 4) == 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsPreRegistering()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x62e,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)((longlong)&this->_padding_ + 4) == 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsPreUnregistering()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x62f,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar2 = this->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  if ((lVar2 & 0x300000000) != 0) {
    this_00 = UActorComponent::GetWorld((UActorComponent *)this);
    if (this_00 != (UWorld *)0x0) {
      UWorld::ClearActorComponentEndOfFrameUpdate(this_00,(UActorComponent *)this);
      return;
    }
  }
  return;
}

// PostInitAnimBP @ 14df8dc60

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
UMetaHumanComponentUE::PostInitAnimBP
          (UMetaHumanComponentUE *this,USkeletalMeshComponent *param_1,UAnimInstance *param_2)

{
  USkeletalMeshComponent *pUVar1;
  FName local_res18;
  FName local_res20;
  
  if (param_2 != (UAnimInstance *)0x0) {
    pUVar1 = UMetaHumanComponentBase::GetSkelMeshComponentByName
                       ((UMetaHumanComponentBase *)this,(FString *)&this->_padding_);
    if ((pUVar1 != (USkeletalMeshComponent *)0x0) && (pUVar1 == param_1)) {
      local_res18.ComparisonIndex.Value = (uint)(byte)this->_padding_;
      ::FName::FName(&local_res20,L"BodyTypeIndex");
      MetaHumanComponentHelpers::ConnectVariable<FIntProperty,int>
                (param_2,&local_res20,(int *)&local_res18);
      local_res18.ComparisonIndex.Value = (uint)this->_padding_;
      ::FName::FName(&local_res20,L"Rig Logic LOD Threshold");
      MetaHumanComponentHelpers::ConnectVariable<FIntProperty,int>
                (param_2,&local_res20,(int *)&local_res18);
      if ((char)this->_padding_ == '\x12') {
        local_res18.ComparisonIndex.Value = local_res18.ComparisonIndex.Value & 0xffffff00;
        ::FName::FName(&local_res20,L"Enable Neck Correctives");
        MetaHumanComponentHelpers::ConnectVariable<FBoolProperty,bool>
                  (param_2,&local_res20,(bool *)&local_res18);
        local_res18.ComparisonIndex.Value = local_res18.ComparisonIndex.Value & 0xffffff00;
        ::FName::FName(&local_res20,L"Enable Neck Procedural Control Rig");
        MetaHumanComponentHelpers::ConnectVariable<FBoolProperty,bool>
                  (param_2,&local_res20,(bool *)&local_res18);
      }
      else {
        ::FName::FName(&local_res18,L"Enable Neck Correctives");
        MetaHumanComponentHelpers::ConnectVariable<FBoolProperty,bool>
                  (param_2,&local_res18,(bool *)((longlong)&this->_padding_ + 4));
        local_res18.ComparisonIndex.Value = (uint)this->_padding_;
        ::FName::FName(&local_res20,L"Neck Correctives LOD Threshold");
        MetaHumanComponentHelpers::ConnectVariable<FIntProperty,int>
                  (param_2,&local_res20,(int *)&local_res18);
        ::FName::FName(&local_res18,L"Enable Neck Procedural Control Rig");
        MetaHumanComponentHelpers::ConnectVariable<FBoolProperty,bool>
                  (param_2,&local_res18,(bool *)((longlong)&this->_padding_ + 4));
        local_res18.ComparisonIndex.Value = (uint)this->_padding_;
        ::FName::FName(&local_res20,L"Neck Procedural Control Rig LOD Threshold");
        MetaHumanComponentHelpers::ConnectVariable<FIntProperty,int>
                  (param_2,&local_res20,(int *)&local_res18);
      }
    }
    UMetaHumanComponentBase::PostConnectAnimBPVariables
              ((UMetaHumanComponentBase *)this,(FMetaHumanCustomizableBodyPart *)&this->_padding_,
               param_1,param_2);
    UMetaHumanComponentBase::PostConnectAnimBPVariables
              ((UMetaHumanComponentBase *)this,(FMetaHumanCustomizableBodyPart *)&this->_padding_,
               param_1,param_2);
    UMetaHumanComponentBase::PostConnectAnimBPVariables
              ((UMetaHumanComponentBase *)this,(FMetaHumanCustomizableBodyPart *)&this->_padding_,
               param_1,param_2);
    USkeletalMeshComponent::TickAnimation(param_1,0.0,false);
    (**(code **)(param_1->_padding_ + 0x410))(param_1,0,2,0);
    (**(code **)(param_1->_padding_ + 0xb88))(param_1,0);
    USkinnedMeshComponent::RefreshFollowerComponents((USkinnedMeshComponent *)param_1);
  }
  return;
}

// SetupCustomizableBodyPart @ 14df8e020

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
UMetaHumanComponentUE::SetupCustomizableBodyPart
          (UMetaHumanComponentUE *this,FMetaHumanCustomizableBodyPart *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  UObject *pUVar3;
  UStruct *pUVar4;
  code *pcVar5;
  TObjectPtr<UClass>_u_0 TVar6;
  FWeakObjectPtr FVar7;
  bool bVar8;
  USkeletalMeshComponent *this_00;
  USkeletalMesh *pUVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  FName *pFVar12;
  FProperty *pFVar13;
  UPhysicsAsset *pUVar14;
  TObjectPtr<UClass>_u_0 TVar15;
  USkeletalMeshComponent *pUVar16;
  UAssetManager *pUVar17;
  UAnimInstance *pUVar18;
  TObjectPtr<UClass>_u_0 TVar19;
  TObjectPtr<UClass>_u_0 local_res10;
  UPhysicsAsset *local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_138;
  FWeakObjectPtr local_130;
  USkeletalMeshComponent *local_128;
  undefined8 local_120;
  UMetaHumanComponentUE *local_118;
  FString local_110;
  uint local_100;
  uint uStack_fc;
  char *pcStack_f8;
  char *local_f0;
  undefined1 local_e8 [8];
  FSoftObjectPath local_e0;
  FName local_c0;
  FName local_b8;
  TSharedPtr<FStreamableHandle,1> local_b0;
  source_location local_98;
  undefined1 local_78 [32];
  void *local_58;
  FWeakObjectPtr local_48;
  undefined2 local_40;
  
  this_00 = UMetaHumanComponentBase::GetSkelMeshComponentByName
                      ((UMetaHumanComponentBase *)this,&param_1->ComponentName);
  if (this_00 == (USkeletalMeshComponent *)0x0) {
    return;
  }
  *(undefined1 *)((longlong)&this_00->_padding_ + 4) = 4;
  TVar15.DebugPtr = (UClass *)0x0;
  local_res18 = (UPhysicsAsset *)0x0;
  local_res10.DebugPtr = (UClass *)0x0;
  pUVar9 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
  if (pUVar9 != (USkeletalMesh *)0x0) {
    USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar9,PostProcessAnimBlueprint,ReadOnly);
    pUVar11 = (pUVar9->PostProcessAnimBlueprint).Class.field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar11 != (UClass *)0x0) goto LAB_14df8e0d5;
    }
    else if (pUVar11 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
LAB_14df8e0d5:
      pUVar10 = Z_Construct_UClass_UAnimInstance_NoRegister();
      if (pUVar10 != (UClass *)0x0) {
        iVar2 = (int)pUVar10->_padding_;
        if (((int)pUVar11->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar10->_padding_)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          if ((pUVar11->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar11);
          }
          pUVar3 = (pUVar11->ClassDefaultObject).field0_0x0.DebugPtr;
          puVar1 = &pUVar3->field_0x10;
          if (pUVar3 == (UObject *)0x0) {
LAB_14df8e156:
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result && Result->IsA(T::StaticClass())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                               ,0x93,L"");
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (pUVar3 == (UObject *)0x0) goto LAB_14df8e20d;
          }
          else {
            pUVar11 = Z_Construct_UClass_UAnimInstance_NoRegister();
            iVar2 = (int)pUVar11->_padding_;
            if ((*(int *)(*(longlong *)puVar1 + 0x38) < iVar2) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(*(longlong *)puVar1 + 0x30) + (longlong)iVar2 * 8) !=
                &pUVar11->_padding_)) goto LAB_14df8e156;
          }
          pUVar4 = *(UStruct **)puVar1;
          pFVar12 = ::FName::FName(&local_c0,0x16,OverridePhysicsAssetPropertyName.DataPtr,FNAME_Add
                                  );
          pFVar13 = UStruct::FindPropertyByName(pUVar4,*pFVar12);
          if (pFVar13 != (FProperty *)0x0) {
            FProperty::GetValue_InContainer(pFVar13,pUVar3,&local_res18);
          }
          pUVar4 = *(UStruct **)puVar1;
          pFVar12 = ::FName::FName(&local_b8,0x11,ControlRigClassPropertyName.DataPtr,FNAME_Add);
          pFVar13 = UStruct::FindPropertyByName(pUVar4,*pFVar12);
          if (pFVar13 != (FProperty *)0x0) {
            FProperty::GetValue_InContainer(pFVar13,pUVar3,&local_res10);
          }
        }
      }
    }
  }
LAB_14df8e20d:
  pUVar11 = TSoftClassPtr<UAnimInstance>::Get(&this->PostProcessAnimBP);
  if (pUVar11 != (UClass *)0x0) {
    pUVar11 = (param_1->ControlRigClass).Class.field0_0x0.DebugPtr;
    if ((pUVar11 == (UClass *)0x0) ||
       (pUVar10 = Z_Construct_UClass_UControlRig_NoRegister(), pUVar10 == (UClass *)0x0)) {
LAB_14df8e26f:
      if ((param_1->PhysicsAsset).field0_0x0.DebugPtr == (UPhysicsAsset *)0x0) goto LAB_14df8e519;
      pUVar14 = (param_1->PhysicsAsset).field0_0x0.DebugPtr;
LAB_14df8e27d:
      bVar8 = pUVar14 == local_res18;
    }
    else {
      iVar2 = (int)pUVar10->_padding_;
      if (((int)pUVar11->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar10->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if ((!bVar8) || ((param_1->ControlRigClass).Class.field0_0x0.DebugPtr == (UClass *)0x0))
      goto LAB_14df8e26f;
      pUVar14 = (param_1->PhysicsAsset).field0_0x0.DebugPtr;
      if (pUVar14 != (UPhysicsAsset *)0x0) goto LAB_14df8e27d;
      bVar8 = local_res18 == (UPhysicsAsset *)0x0;
    }
    if (bVar8) {
      pUVar11 = (param_1->ControlRigClass).Class.field0_0x0.DebugPtr;
      TVar19.DebugPtr = TVar15.DebugPtr;
      if ((pUVar11 != (UClass *)0x0) &&
         (pUVar10 = Z_Construct_UClass_UControlRig_NoRegister(), pUVar10 != (UClass *)0x0)) {
        iVar2 = (int)pUVar10->_padding_;
        if (((int)pUVar11->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar10->_padding_)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          TVar19.DebugPtr = (param_1->ControlRigClass).Class.field0_0x0.DebugPtr;
        }
      }
      TVar6 = local_res10;
      if ((local_res10.DebugPtr != (UClass *)0x0) &&
         (pUVar11 = Z_Construct_UClass_UControlRig_NoRegister(), pUVar11 != (UClass *)0x0)) {
        iVar2 = (int)pUVar11->_padding_;
        if (((int)(TVar6.DebugPtr)->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)((TVar6.DebugPtr)->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar11->_padding_)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          TVar15 = local_res10;
        }
      }
      if (TVar19.DebugPtr == TVar15.DebugPtr) goto LAB_14df8e519;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_128 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_128);
    FVar7 = local_res20;
    local_e8 = *(undefined1 (*) [8])&(this->PostProcessAnimBP).SoftObjectPtr;
    FSoftObjectPath::FSoftObjectPath
              (&local_e0,(FSoftObjectPath *)&(this->PostProcessAnimBP).SoftObjectPtr.field_0x8);
    local_130 = FVar7;
    bVar8 = FWeakObjectPtr::IsValid(&local_130);
    if (bVar8) {
      if (local_e0.AssetPath.PackageName == (FName)0x0) {
        pUVar16 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&local_130);
        pUVar9 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar16);
        if ((pUVar9 != (USkeletalMesh *)0x0) && (((uint)pUVar9->_padding_ >> 0x1e & 1) == 0)) {
          local_120 = 0;
          USkeletalMeshComponent::SetOverridePostProcessAnimBP
                    (pUVar16,(TSubclassOf<UAnimInstance>)&local_120,true);
        }
      }
      else {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UMetaHumanComponentUE *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        local_138.ObjectIndex = 0;
        local_138.ObjectSerialNumber = 0;
        local_118 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UMetaHumanComponentUE *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=(&local_138,(FObjectPtr)&local_118);
        pUVar17 = UAssetManager::Get();
        local_100 = 0x70;
        uStack_fc = 0x28;
        local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_110.Data.ArrayNum = 0;
        local_110.Data.ArrayMax = 0;
        pcStack_f8 = 
        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MetaHuman\\MetaHumanSDK\\Source\\MetaHumanSDKRuntime\\Private\\MetaHumanComponentBase.cpp"
        ;
        local_f0 = 
        "void __cdecl UMetaHumanComponentBase::LoadAndRunAnimBP(class TSoftClassPtr<class UAnimInstance>,struct TWeakObjectPtr<class USkeletalMeshComponent,struct FWeakObjectPtr>,bool,bool)"
        ;
        local_78._0_4_ = local_138.ObjectIndex;
        local_78._4_4_ = local_138.ObjectSerialNumber;
        local_78._8_8_ = local_e8;
        FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(local_78 + 0x10),&local_e0);
        local_98._Column = uStack_fc;
        local_98._Line = local_100;
        local_48 = local_130;
        local_40._0_1_ = true;
        local_40._1_1_ = true;
        local_98._File = pcStack_f8;
        local_98._Function = local_f0;
        FStreamableManager::
        RequestAsyncLoad<FSoftObjectPath_const_&,_UMetaHumanComponentBase::LoadAndRunAnimBP_::__l2::<lambda_1>,void>
                  (&pUVar17->StreamableManager,&local_b0,&local_e0,(<lambda_1> *)local_78,0,false,
                   false,&local_110,(FSourceLocation *)&local_98);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b0.SharedReferenceCount.ReferenceController);
        if (local_58 != (void *)0x0) {
          FMemory::Free(local_58);
        }
      }
    }
    if (local_e0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.SubPathString.Data.AllocatorInstance.Data);
    }
    pUVar16 = (USkeletalMeshComponent *)0x0;
    goto LAB_14df8e61c;
  }
LAB_14df8e519:
  TVar15 = local_res10;
  if (local_res18 == (UPhysicsAsset *)0x0) {
    if ((local_res10.DebugPtr != (UClass *)0x0) &&
       (pUVar11 = Z_Construct_UClass_UControlRig_NoRegister(), pUVar11 != (UClass *)0x0)) {
      iVar2 = (int)pUVar11->_padding_;
      if (((int)(TVar15.DebugPtr)->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)((TVar15.DebugPtr)->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar11->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if ((bVar8) && (local_res10.DebugPtr != (UClass *)0x0)) goto LAB_14df8e55e;
    }
  }
  else {
LAB_14df8e55e:
    pUVar18 = USkeletalMeshComponent::GetPostProcessInstance(this_00);
    UMetaHumanComponentBase::PostConnectAnimBPVariables
              ((UMetaHumanComponentBase *)this,param_1,this_00,pUVar18);
  }
  pUVar9 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
  if (pUVar9 == (USkeletalMesh *)0x0) {
    return;
  }
  if (((uint)pUVar9->_padding_ >> 0x1e & 1) != 0) {
    return;
  }
  USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar9,PostProcessAnimBlueprint,ReadOnly);
  pUVar11 = (pUVar9->PostProcessAnimBlueprint).Class.field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar11 != (UClass *)0x0) goto LAB_14df8e5d6;
  }
  else if (pUVar11 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
LAB_14df8e5d6:
    pUVar10 = Z_Construct_UClass_UAnimInstance_NoRegister();
    if (pUVar10 != (UClass *)0x0) {
      iVar2 = (int)pUVar10->_padding_;
      if (((int)pUVar11->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar10->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        return;
      }
    }
  }
  pUVar18 = USkeletalMeshComponent::GetAnimInstance(this_00);
  if (pUVar18 != (UAnimInstance *)0x0) {
    return;
  }
  pUVar16 = UMetaHumanComponentBase::GetBodySkelMeshComponent((UMetaHumanComponentBase *)this);
LAB_14df8e61c:
  USkinnedMeshComponent::SetLeaderPoseComponent
            ((USkinnedMeshComponent *)this_00,(USkinnedMeshComponent *)pUVar16,false,false);
  return;
}

// StaticRegisterNativesUMetaHumanComponentUE @ 14df8e670

void __cdecl UMetaHumanComponentUE::StaticRegisterNativesUMetaHumanComponentUE(void)

{
  return;
}

