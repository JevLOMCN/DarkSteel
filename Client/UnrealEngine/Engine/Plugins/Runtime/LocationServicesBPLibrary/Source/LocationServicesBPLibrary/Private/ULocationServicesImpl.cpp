// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocationServicesBPLibrary
// Functions: 12

// StaticClass @ 14f03a870

UClass * __cdecl ULocationServicesImpl::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocationServicesImpl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LocationServicesBPLibrary",L"LocationServicesImpl",
               &Z_Registration_Info_UClass_ULocationServicesImpl.InnerSingleton,
               StaticRegisterNativesULocationServicesImpl,0x40,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULocationServicesImpl>,
               InternalVTableHelperCtorCaller<ULocationServicesImpl>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocationServicesImpl.InnerSingleton;
}

// ULocationServicesImpl @ 14f03b060

ULocationServicesImpl * __thiscall
ULocationServicesImpl::ULocationServicesImpl(ULocationServicesImpl *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULocationServicesImpl__6B_;
  *(undefined8 *)&this->OnLocationChanged = 0;
  *(undefined8 *)&(this->OnLocationChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnLocationChanged).field_0x10 = 0;
  return this;
}

// ULocationServicesImpl @ 14f03b0a0

ULocationServicesImpl * __thiscall
ULocationServicesImpl::ULocationServicesImpl
          (ULocationServicesImpl *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULocationServicesImpl__6B_;
  *(undefined8 *)&this->OnLocationChanged = 0;
  *(undefined8 *)&(this->OnLocationChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnLocationChanged).field_0x10 = 0;
  return this;
}

// ~ULocationServicesImpl @ 14f03b100

void __thiscall ULocationServicesImpl::~ULocationServicesImpl(ULocationServicesImpl *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULocationServicesImpl__6B_;
  pvVar1 = *(void **)&(this->OnLocationChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLocationChanged);
  UObject::~UObject((UObject *)this);
  return;
}

// GetLastKnownLocation @ 14f03b330

FLocationServicesData * __thiscall
ULocationServicesImpl::GetLastKnownLocation
          (ULocationServicesImpl *this,FLocationServicesData *__return_storage_ptr__)

{
  __return_storage_ptr__->Timestamp = 0.0;
  __return_storage_ptr__->Longitude = 0.0;
  __return_storage_ptr__->Latitude = 0.0;
  __return_storage_ptr__->HorizontalAccuracy = 0.0;
  __return_storage_ptr__->VerticalAccuracy = 0.0;
  __return_storage_ptr__->Altitude = 0.0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14f03b410

UClass * __cdecl ULocationServicesImpl::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocationServicesImpl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LocationServicesBPLibrary",L"LocationServicesImpl",
               &Z_Registration_Info_UClass_ULocationServicesImpl.InnerSingleton,
               StaticRegisterNativesULocationServicesImpl,0x40,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULocationServicesImpl>,
               InternalVTableHelperCtorCaller<ULocationServicesImpl>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocationServicesImpl.InnerSingleton;
}

// InitLocationServices @ 14f03b4f0

bool __thiscall
ULocationServicesImpl::InitLocationServices
          (ULocationServicesImpl *this,ELocationAccuracy param_1,float param_2,float param_3)

{
  return false;
}

// IsLocationAccuracyAvailable @ 14f03b560

bool __thiscall
ULocationServicesImpl::IsLocationAccuracyAvailable
          (ULocationServicesImpl *this,ELocationAccuracy param_1)

{
  return false;
}

// IsLocationServiceEnabled @ 14f03b570

bool __thiscall ULocationServicesImpl::IsLocationServiceEnabled(ULocationServicesImpl *this)

{
  return false;
}

// StartLocationService @ 14f03b5d0

bool __thiscall ULocationServicesImpl::StartLocationService(ULocationServicesImpl *this)

{
  return false;
}

// StaticRegisterNativesULocationServicesImpl @ 14f03b640

void __cdecl ULocationServicesImpl::StaticRegisterNativesULocationServicesImpl(void)

{
  return;
}

// StopLocationService @ 14f03b650

bool __thiscall ULocationServicesImpl::StopLocationService(ULocationServicesImpl *this)

{
  return false;
}

