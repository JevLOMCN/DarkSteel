// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147b2ab70

UClass * __cdecl USMInstanceElementAssetDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USMInstanceElementAssetDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SMInstanceElementAssetDataInterface",
               &Z_Registration_Info_UClass_USMInstanceElementAssetDataInterface.InnerSingleton,
               StaticRegisterNativesUSMInstanceElementAssetDataInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USMInstanceElementAssetDataInterface>,
               InternalVTableHelperCtorCaller<USMInstanceElementAssetDataInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USMInstanceElementAssetDataInterface.InnerSingleton;
}

// USMInstanceElementAssetDataInterface @ 147b3b700

USMInstanceElementAssetDataInterface * __thiscall
USMInstanceElementAssetDataInterface::USMInstanceElementAssetDataInterface
          (USMInstanceElementAssetDataInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementAssetDataInterface__;
  return this;
}

// USMInstanceElementAssetDataInterface @ 147b3b740

USMInstanceElementAssetDataInterface * __thiscall
USMInstanceElementAssetDataInterface::USMInstanceElementAssetDataInterface
          (USMInstanceElementAssetDataInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementAssetDataInterface__;
  return this;
}

// ~USMInstanceElementAssetDataInterface @ 147b3d9f0

void __thiscall
USMInstanceElementAssetDataInterface::~USMInstanceElementAssetDataInterface
          (USMInstanceElementAssetDataInterface *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7ITypedElementAssetDataInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetAssetData @ 147b63b00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FAssetData * __thiscall
USMInstanceElementAssetDataInterface::GetAssetData
          (USMInstanceElementAssetDataInterface *this,FAssetData *__return_storage_ptr__,
          FTypedElementHandle *param_1)

{
  UObject *pUVar1;
  FSMInstanceManager local_28;
  
  SMInstanceElementDataUtil::GetSMInstanceFromHandle(&local_28,param_1,false);
  if ((((local_28.InstanceId.ISMComponent != (UInstancedStaticMeshComponent *)0x0) &&
       (local_28.InstanceId.InstanceIndex != -1)) &&
      (local_28.InstanceManager != (ISMInstanceManager *)0x0)) &&
     (pUVar1 = (UObject *)(local_28.InstanceId.ISMComponent)->_padding_, pUVar1 != (UObject *)0x0))
  {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    FAssetData::FAssetData(__return_storage_ptr__,pUVar1,None);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->PackageName).ComparisonIndex = 0;
  (__return_storage_ptr__->PackageName).Number = 0;
  (__return_storage_ptr__->PackagePath).ComparisonIndex = 0;
  (__return_storage_ptr__->PackagePath).Number = 0;
  (__return_storage_ptr__->AssetName).ComparisonIndex = 0;
  (__return_storage_ptr__->AssetName).Number = 0;
  (__return_storage_ptr__->AssetClass).ComparisonIndex = 0;
  (__return_storage_ptr__->AssetClass).Number = 0;
  (__return_storage_ptr__->AssetClassPath).PackageName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetClassPath).PackageName.Number = 0;
  (__return_storage_ptr__->AssetClassPath).AssetName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetClassPath).AssetName.Number = 0;
  __return_storage_ptr__->PackageFlags = 0;
  (__return_storage_ptr__->TagsAndValues).field0_0x0.Loose = (FAssetDataTagMap *)0x0;
  (__return_storage_ptr__->TaggedAssetBundles).Object = (FAssetBundleData *)0x0;
  (__return_storage_ptr__->TaggedAssetBundles).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->ChunkIDs).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (__return_storage_ptr__->ChunkArrayRegistryHandle).Index = -1;
  (__return_storage_ptr__->ChunkIDs).ArrayNum = 0;
  (__return_storage_ptr__->ChunkIDs).ArrayMax = 2;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147b6c550

UClass * __cdecl USMInstanceElementAssetDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USMInstanceElementAssetDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SMInstanceElementAssetDataInterface",
               &Z_Registration_Info_UClass_USMInstanceElementAssetDataInterface.InnerSingleton,
               StaticRegisterNativesUSMInstanceElementAssetDataInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USMInstanceElementAssetDataInterface>,
               InternalVTableHelperCtorCaller<USMInstanceElementAssetDataInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USMInstanceElementAssetDataInterface.InnerSingleton;
}

// StaticRegisterNativesUSMInstanceElementAssetDataInterface @ 147b8ecd0

void __cdecl
USMInstanceElementAssetDataInterface::StaticRegisterNativesUSMInstanceElementAssetDataInterface
          (void)

{
  return;
}

// _getUObject @ 147b92020

UObject * __thiscall
USMInstanceElementAssetDataInterface::_getUObject(USMInstanceElementAssetDataInterface *this)

{
  return (UObject *)&this[-1].field_0x8;
}

