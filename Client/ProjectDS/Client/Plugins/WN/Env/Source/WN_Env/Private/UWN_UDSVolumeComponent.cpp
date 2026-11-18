// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Env
// Functions: 10

// StaticClass @ 14a044230

UClass * __cdecl UWN_UDSVolumeComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_UDSVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Env",L"WN_UDSVolumeComponent",
               &Z_Registration_Info_UClass_UWN_UDSVolumeComponent.InnerSingleton,
               StaticRegisterNativesUWN_UDSVolumeComponent,0x6a0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_UDSVolumeComponent>,
               InternalVTableHelperCtorCaller<UWN_UDSVolumeComponent>,local_res8,
               UWN_VolumeComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_UDSVolumeComponent.InnerSingleton;
}

// UWN_UDSVolumeComponent @ 14a047550

UWN_UDSVolumeComponent * __thiscall
UWN_UDSVolumeComponent::UWN_UDSVolumeComponent(UWN_UDSVolumeComponent *this,FVTableHelper *param_1)

{
  UWN_VolumeComponent::UWN_VolumeComponent((UWN_VolumeComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  return this;
}

// UWN_UDSVolumeComponent @ 14a0475c0

UWN_UDSVolumeComponent * __thiscall
UWN_UDSVolumeComponent::UWN_UDSVolumeComponent
          (UWN_UDSVolumeComponent *this,FObjectInitializer *param_1)

{
  UWN_VolumeComponent::UWN_VolumeComponent((UWN_VolumeComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  return this;
}

// ~UWN_UDSVolumeComponent @ 14a048510

void __thiscall UWN_UDSVolumeComponent::~UWN_UDSVolumeComponent(UWN_UDSVolumeComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  UWN_VolumeComponent::~UWN_VolumeComponent((UWN_VolumeComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14a04b7e0

UClass * __cdecl UWN_UDSVolumeComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_UDSVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Env",L"WN_UDSVolumeComponent",
               &Z_Registration_Info_UClass_UWN_UDSVolumeComponent.InnerSingleton,
               StaticRegisterNativesUWN_UDSVolumeComponent,0x6a0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_UDSVolumeComponent>,
               InternalVTableHelperCtorCaller<UWN_UDSVolumeComponent>,local_res8,
               UWN_VolumeComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_UDSVolumeComponent.InnerSingleton;
}

// StaticRegisterNativesUWN_UDSVolumeComponent @ 14a04bad0

void __cdecl UWN_UDSVolumeComponent::StaticRegisterNativesUWN_UDSVolumeComponent(void)

{
  return;
}

// BeginPlay @ 14a050440

void __thiscall UWN_UDSVolumeComponent::BeginPlay(UWN_UDSVolumeComponent *this)

{
  UWN_VolumeComponent::BeginPlay((UWN_VolumeComponent *)this);
  RegisterGlobalVolume(this);
  return;
}

// InitializeComponent @ 14a055300

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_UDSVolumeComponent::InitializeComponent(UWN_UDSVolumeComponent *this)

{
  UActorComponent::InitializeComponent((UActorComponent *)this);
  RegisterGlobalVolume(this);
  return;
}

// OnRegister @ 14a062540

void __thiscall UWN_UDSVolumeComponent::OnRegister(UWN_UDSVolumeComponent *this)

{
  bool bVar1;
  
  UWN_VolumeComponent::OnRegister((UWN_VolumeComponent *)this);
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar1) {
    RegisterGlobalVolume(this);
    return;
  }
  return;
}

// RegisterGlobalVolume @ 14a063400

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_UDSVolumeComponent::RegisterGlobalVolume(UWN_UDSVolumeComponent *this)

{
  int iVar1;
  AWN_UDS_GlobalVolume *pAVar2;
  code *pcVar3;
  bool bVar4;
  UWorld *this_00;
  UWN_UDS_Subsystem *this_01;
  UClass *pUVar5;
  
  this_00 = *(UWorld **)&this->field_0xb0;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    if (this_00 == (UWorld *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_601661361243553758>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Env\\Source\\WN_Env\\Private\\WN_UDSVolumeComponent.cpp"
                         ,0x22,"world != nullptr");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  this_01 = UWorld::GetSubsystem<UWN_UDS_Subsystem>(this_00);
  if ((this_01 != (UWN_UDS_Subsystem *)0x0) &&
     (pAVar2 = *(AWN_UDS_GlobalVolume **)&this->field_0xa8, pAVar2 != (AWN_UDS_GlobalVolume *)0x0))
  {
    pUVar5 = Z_Construct_UClass_AWN_UDS_GlobalVolume_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      UWN_UDS_Subsystem::RegisterUDSGlobalVolume(this_01,pAVar2);
    }
  }
  return;
}

