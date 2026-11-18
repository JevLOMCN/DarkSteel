// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147256510

UClass * __cdecl UAsyncPhysicsData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncPhysicsData.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncPhysicsData",
               &Z_Registration_Info_UClass_UAsyncPhysicsData.InnerSingleton,
               StaticRegisterNativesUAsyncPhysicsData,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAsyncPhysicsData>,
               InternalVTableHelperCtorCaller<UAsyncPhysicsData>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncPhysicsData.InnerSingleton;
}

// UAsyncPhysicsData @ 14725cf30

UAsyncPhysicsData * __thiscall
UAsyncPhysicsData::UAsyncPhysicsData(UAsyncPhysicsData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->ServerFrame = -1;
  this->_padding_ = (longlong)&___7UAsyncPhysicsData__6B_;
  this->ReplicationRedundancy = 4;
  return this;
}

// UAsyncPhysicsData @ 14725cf70

UAsyncPhysicsData * __thiscall
UAsyncPhysicsData::UAsyncPhysicsData(UAsyncPhysicsData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->ServerFrame = -1;
  this->_padding_ = (longlong)&___7UAsyncPhysicsData__6B_;
  this->ReplicationRedundancy = 4;
  return this;
}

// ~UAsyncPhysicsData @ 14725dd60

void __thiscall UAsyncPhysicsData::~UAsyncPhysicsData(UAsyncPhysicsData *this)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 147260320

UClass * __cdecl UAsyncPhysicsData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncPhysicsData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncPhysicsData",
               &Z_Registration_Info_UClass_UAsyncPhysicsData.InnerSingleton,
               StaticRegisterNativesUAsyncPhysicsData,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAsyncPhysicsData>,
               InternalVTableHelperCtorCaller<UAsyncPhysicsData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncPhysicsData.InnerSingleton;
}

// StaticRegisterNativesUAsyncPhysicsData @ 147260ee0

void __cdecl UAsyncPhysicsData::StaticRegisterNativesUAsyncPhysicsData(void)

{
  return;
}

