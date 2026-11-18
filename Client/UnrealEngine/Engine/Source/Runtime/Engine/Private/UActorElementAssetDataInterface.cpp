// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147b296f0

UClass * __cdecl UActorElementAssetDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorElementAssetDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorElementAssetDataInterface",
               &Z_Registration_Info_UClass_UActorElementAssetDataInterface.InnerSingleton,
               StaticRegisterNativesUActorElementAssetDataInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UActorElementAssetDataInterface>,
               InternalVTableHelperCtorCaller<UActorElementAssetDataInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorElementAssetDataInterface.InnerSingleton;
}

// UActorElementAssetDataInterface @ 147b3a380

UActorElementAssetDataInterface * __thiscall
UActorElementAssetDataInterface::UActorElementAssetDataInterface
          (UActorElementAssetDataInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementAssetDataInterface__;
  return this;
}

// UActorElementAssetDataInterface @ 147b3a3c0

UActorElementAssetDataInterface * __thiscall
UActorElementAssetDataInterface::UActorElementAssetDataInterface
          (UActorElementAssetDataInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementAssetDataInterface__;
  return this;
}

// ~UActorElementAssetDataInterface @ 147b3d420

void __thiscall
UActorElementAssetDataInterface::~UActorElementAssetDataInterface
          (UActorElementAssetDataInterface *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7ITypedElementAssetDataInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetAssetData @ 147b63aa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAssetData * __thiscall
UActorElementAssetDataInterface::GetAssetData
          (UActorElementAssetDataInterface *this,FAssetData *__return_storage_ptr__,
          FTypedElementHandle *param_1)

{
  AActor *pAVar1;
  
  pAVar1 = ActorElementDataUtil::GetActorFromHandle(param_1,false);
  FAssetData::FAssetData(__return_storage_ptr__,(UObject *)pAVar1,None);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147b6b290

UClass * __cdecl UActorElementAssetDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorElementAssetDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorElementAssetDataInterface",
               &Z_Registration_Info_UClass_UActorElementAssetDataInterface.InnerSingleton,
               StaticRegisterNativesUActorElementAssetDataInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UActorElementAssetDataInterface>,
               InternalVTableHelperCtorCaller<UActorElementAssetDataInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorElementAssetDataInterface.InnerSingleton;
}

// StaticRegisterNativesUActorElementAssetDataInterface @ 147b8eac0

void __cdecl
UActorElementAssetDataInterface::StaticRegisterNativesUActorElementAssetDataInterface(void)

{
  return;
}

// _getUObject @ 147b91f20

UObject * __thiscall
UActorElementAssetDataInterface::_getUObject(UActorElementAssetDataInterface *this)

{
  return (UObject *)&this[-1].field_0x8;
}

