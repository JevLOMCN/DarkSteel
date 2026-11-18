// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b439d20

UClass * __cdecl UDS_CapsuleComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CapsuleComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CapsuleComponent",
               &Z_Registration_Info_UClass_UDS_CapsuleComponent.InnerSingleton,
               StaticRegisterNativesUDS_CapsuleComponent,0x580,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CapsuleComponent>,
               InternalVTableHelperCtorCaller<UDS_CapsuleComponent>,local_res8,
               UCapsuleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CapsuleComponent.InnerSingleton;
}

// UDS_CapsuleComponent @ 14b43c010

UDS_CapsuleComponent * __thiscall
UDS_CapsuleComponent::UDS_CapsuleComponent(UDS_CapsuleComponent *this,FVTableHelper *param_1)

{
  UCapsuleComponent::UCapsuleComponent((UCapsuleComponent *)this,param_1);
  this->bCanOverlap = true;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  return this;
}

// UDS_CapsuleComponent @ 14b43c080

UDS_CapsuleComponent * __thiscall
UDS_CapsuleComponent::UDS_CapsuleComponent(UDS_CapsuleComponent *this,FObjectInitializer *param_1)

{
  UCapsuleComponent::UCapsuleComponent((UCapsuleComponent *)this,param_1);
  this->bCanOverlap = true;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  return this;
}

// ~UDS_CapsuleComponent @ 14b43cdc0

void __thiscall UDS_CapsuleComponent::~UDS_CapsuleComponent(UDS_CapsuleComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  UCapsuleComponent::~UCapsuleComponent((UCapsuleComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14b43e2c0

UClass * __cdecl UDS_CapsuleComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CapsuleComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CapsuleComponent",
               &Z_Registration_Info_UClass_UDS_CapsuleComponent.InnerSingleton,
               StaticRegisterNativesUDS_CapsuleComponent,0x580,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CapsuleComponent>,
               InternalVTableHelperCtorCaller<UDS_CapsuleComponent>,local_res8,
               UCapsuleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CapsuleComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_CapsuleComponent @ 14b43e8b0

void __cdecl UDS_CapsuleComponent::StaticRegisterNativesUDS_CapsuleComponent(void)

{
  return;
}

// UpdateOverlapsImpl @ 14bc6db90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UDS_CapsuleComponent::UpdateOverlapsImpl
          (UDS_CapsuleComponent *this,TArrayView<FOverlapInfo_const_,int> *param_1,bool param_2,
          TArrayView<FOverlapInfo_const_,int> *param_3)

{
  bool bVar1;
  
  if (this->bCanOverlap == false) {
    return false;
  }
  bVar1 = UPrimitiveComponent::UpdateOverlapsImpl
                    ((UPrimitiveComponent *)this,param_1,param_2,param_3);
  return bVar1;
}

