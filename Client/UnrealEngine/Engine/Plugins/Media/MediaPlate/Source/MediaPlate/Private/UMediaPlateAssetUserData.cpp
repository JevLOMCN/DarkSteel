// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaPlate
// Functions: 7

// StaticClass @ 14ea86b20

UClass * __cdecl UMediaPlateAssetUserData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaPlateAssetUserData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaPlate",L"MediaPlateAssetUserData",
               &Z_Registration_Info_UClass_UMediaPlateAssetUserData.InnerSingleton,
               StaticRegisterNativesUMediaPlateAssetUserData,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMediaPlateAssetUserData>,
               InternalVTableHelperCtorCaller<UMediaPlateAssetUserData>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaPlateAssetUserData.InnerSingleton;
}

// UMediaPlateAssetUserData @ 14ea89410

UMediaPlateAssetUserData * __thiscall
UMediaPlateAssetUserData::UMediaPlateAssetUserData
          (UMediaPlateAssetUserData *this,FVTableHelper *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7UMediaPlateAssetUserData__6B_;
  *(undefined8 *)&this->OnPostEditChangeOwner = 0;
  *(undefined8 *)&(this->OnPostEditChangeOwner).field_0x8 = 0;
  *(undefined4 *)&(this->OnPostEditChangeOwner).field_0x10 = 0;
  return this;
}

// UMediaPlateAssetUserData @ 14ea89450

UMediaPlateAssetUserData * __thiscall
UMediaPlateAssetUserData::UMediaPlateAssetUserData
          (UMediaPlateAssetUserData *this,FObjectInitializer *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7UMediaPlateAssetUserData__6B_;
  *(undefined8 *)&this->OnPostEditChangeOwner = 0;
  *(undefined8 *)&(this->OnPostEditChangeOwner).field_0x8 = 0;
  *(undefined4 *)&(this->OnPostEditChangeOwner).field_0x10 = 0;
  return this;
}

// ~UMediaPlateAssetUserData @ 14ea89910

void __thiscall UMediaPlateAssetUserData::~UMediaPlateAssetUserData(UMediaPlateAssetUserData *this)

{
  this->_padding_ = (longlong)&___7UMediaPlateAssetUserData__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPostEditChangeOwner);
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  return;
}

// GetPrivateStaticClass @ 14ea8b3a0

UClass * __cdecl UMediaPlateAssetUserData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaPlateAssetUserData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaPlate",L"MediaPlateAssetUserData",
               &Z_Registration_Info_UClass_UMediaPlateAssetUserData.InnerSingleton,
               StaticRegisterNativesUMediaPlateAssetUserData,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMediaPlateAssetUserData>,
               InternalVTableHelperCtorCaller<UMediaPlateAssetUserData>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaPlateAssetUserData.InnerSingleton;
}

// PostEditChangeOwner @ 14ea8d4f0

void __thiscall
UMediaPlateAssetUserData::PostEditChangeOwner
          (UMediaPlateAssetUserData *this,FPropertyChangedEvent *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnPostEditChangeOwner,
             &local_28);
  if ((*(int *)&(this->OnPostEditChangeOwner).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnPostEditChangeOwner).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// StaticRegisterNativesUMediaPlateAssetUserData @ 14ea8fe50

void __cdecl UMediaPlateAssetUserData::StaticRegisterNativesUMediaPlateAssetUserData(void)

{
  return;
}

