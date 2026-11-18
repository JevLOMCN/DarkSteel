// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147269070

UClass * __cdecl UDeviceProfileFragment::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeviceProfileFragment.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DeviceProfileFragment",
               &Z_Registration_Info_UClass_UDeviceProfileFragment.InnerSingleton,
               StaticRegisterNativesUDeviceProfileFragment,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"DeviceProfiles",InternalConstructor<UDeviceProfileFragment>,
               InternalVTableHelperCtorCaller<UDeviceProfileFragment>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeviceProfileFragment.InnerSingleton;
}

// UDeviceProfileFragment @ 14726cd20

UDeviceProfileFragment * __thiscall
UDeviceProfileFragment::UDeviceProfileFragment(UDeviceProfileFragment *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDeviceProfileFragment__6B_;
  (this->CVars).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CVars).ArrayNum = 0;
  (this->CVars).ArrayMax = 0;
  return this;
}

// ~UDeviceProfileFragment @ 14726d490

void __thiscall UDeviceProfileFragment::~UDeviceProfileFragment(UDeviceProfileFragment *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDeviceProfileFragment__6B_;
  DestructItems<FString,int>((FString *)(this->CVars).AllocatorInstance.Data,(this->CVars).ArrayNum)
  ;
  pFVar1 = (this->CVars).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14726f680

UClass * __cdecl UDeviceProfileFragment::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeviceProfileFragment.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DeviceProfileFragment",
               &Z_Registration_Info_UClass_UDeviceProfileFragment.InnerSingleton,
               StaticRegisterNativesUDeviceProfileFragment,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"DeviceProfiles",InternalConstructor<UDeviceProfileFragment>,
               InternalVTableHelperCtorCaller<UDeviceProfileFragment>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeviceProfileFragment.InnerSingleton;
}

// StaticRegisterNativesUDeviceProfileFragment @ 147270a30

void __cdecl UDeviceProfileFragment::StaticRegisterNativesUDeviceProfileFragment(void)

{
  return;
}

// UDeviceProfileFragment @ 147abdb90

UDeviceProfileFragment * __thiscall
UDeviceProfileFragment::UDeviceProfileFragment
          (UDeviceProfileFragment *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDeviceProfileFragment__6B_;
  (this->CVars).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CVars).ArrayNum = 0;
  (this->CVars).ArrayMax = 0;
  return this;
}

