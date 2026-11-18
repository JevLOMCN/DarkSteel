// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148a29630

UClass * __cdecl UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"UWorldPartitionDestructibleHLODMeshComponent",
               &Z_Registration_Info_UClass_UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent.
                InnerSingleton,
               StaticRegisterNativesUDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent,0x440,
               0x10,CLASS_Intrinsic|CLASS_Deprecated|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent>,
               InternalVTableHelperCtorCaller<UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent>
               ,local_res8,UWorldPartitionDestructibleHLODComponent::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent.
         InnerSingleton;
}

// UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent @ 148a42670

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent * __thiscall
UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent::
UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent
          (UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent *this,FVTableHelper *param_1)

{
  UWorldPartitionDestructibleHLODComponent::UWorldPartitionDestructibleHLODComponent
            ((UWorldPartitionDestructibleHLODComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent @ 148a426b0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent * __thiscall
UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent::
UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent
          (UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent *this,
          FObjectInitializer *param_1)

{
  UWorldPartitionDestructibleHLODComponent::UWorldPartitionDestructibleHLODComponent
            ((UWorldPartitionDestructibleHLODComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// ~UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent @ 148a44640

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __thiscall
UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent::
~UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent
          (UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  UWorldPartitionDestructibleHLODComponent::~UWorldPartitionDestructibleHLODComponent
            ((UWorldPartitionDestructibleHLODComponent *)this);
  return;
}

// GetPrivateStaticClass @ 148a5a030

UClass * __cdecl
UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"UWorldPartitionDestructibleHLODMeshComponent",
               &Z_Registration_Info_UClass_UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent.
                InnerSingleton,
               StaticRegisterNativesUDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent,0x440,
               0x10,CLASS_Intrinsic|CLASS_Deprecated|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent>,
               InternalVTableHelperCtorCaller<UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent>
               ,local_res8,UWorldPartitionDestructibleHLODComponent::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent.
         InnerSingleton;
}

// StaticRegisterNativesUDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent @ 148a6a360

void __cdecl
UDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent::
StaticRegisterNativesUDEPRECATED_UWorldPartitionDestructibleHLODMeshComponent(void)

{
  return;
}

