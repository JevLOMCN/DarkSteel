// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 6

// StaticClass @ 14a90d550

UClass * __cdecl UPoseSearchNormalizationSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchNormalizationSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchNormalizationSet",
               &Z_Registration_Info_UClass_UPoseSearchNormalizationSet.InnerSingleton,
               StaticRegisterNativesUPoseSearchNormalizationSet,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchNormalizationSet>,
               InternalVTableHelperCtorCaller<UPoseSearchNormalizationSet>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchNormalizationSet.InnerSingleton;
}

// UPoseSearchNormalizationSet @ 14a91a390

UPoseSearchNormalizationSet * __thiscall
UPoseSearchNormalizationSet::UPoseSearchNormalizationSet
          (UPoseSearchNormalizationSet *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UPoseSearchNormalizationSet__6B_;
  (this->Databases).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Databases).ArrayNum = 0;
  (this->Databases).ArrayMax = 0;
  return this;
}

// UPoseSearchNormalizationSet @ 14a91a3d0

UPoseSearchNormalizationSet * __thiscall
UPoseSearchNormalizationSet::UPoseSearchNormalizationSet
          (UPoseSearchNormalizationSet *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UPoseSearchNormalizationSet__6B_;
  (this->Databases).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Databases).ArrayNum = 0;
  (this->Databases).ArrayMax = 0;
  return this;
}

// ~UPoseSearchNormalizationSet @ 14a91b000

void __thiscall
UPoseSearchNormalizationSet::~UPoseSearchNormalizationSet(UPoseSearchNormalizationSet *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPoseSearchNormalizationSet__6B_;
  pFVar1 = (this->Databases).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 14a92c110

UClass * __cdecl UPoseSearchNormalizationSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchNormalizationSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchNormalizationSet",
               &Z_Registration_Info_UClass_UPoseSearchNormalizationSet.InnerSingleton,
               StaticRegisterNativesUPoseSearchNormalizationSet,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchNormalizationSet>,
               InternalVTableHelperCtorCaller<UPoseSearchNormalizationSet>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchNormalizationSet.InnerSingleton;
}

// StaticRegisterNativesUPoseSearchNormalizationSet @ 14a93ee50

void __cdecl UPoseSearchNormalizationSet::StaticRegisterNativesUPoseSearchNormalizationSet(void)

{
  return;
}

