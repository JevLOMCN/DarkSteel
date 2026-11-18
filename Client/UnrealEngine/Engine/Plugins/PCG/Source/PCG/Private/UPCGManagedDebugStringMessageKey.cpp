// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// StaticClass @ 149b9e3a0

UClass * __cdecl UPCGManagedDebugStringMessageKey::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedDebugStringMessageKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedDebugStringMessageKey",
               &Z_Registration_Info_UClass_UPCGManagedDebugStringMessageKey.InnerSingleton,
               StaticRegisterNativesUPCGManagedDebugStringMessageKey,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGManagedDebugStringMessageKey>,
               InternalVTableHelperCtorCaller<UPCGManagedDebugStringMessageKey>,local_res8,
               UPCGManagedResource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedDebugStringMessageKey.InnerSingleton;
}

// UPCGManagedDebugStringMessageKey @ 149be6e10

UPCGManagedDebugStringMessageKey * __thiscall
UPCGManagedDebugStringMessageKey::UPCGManagedDebugStringMessageKey
          (UPCGManagedDebugStringMessageKey *this,FVTableHelper *param_1)

{
  UPCGManagedResource::UPCGManagedResource((UPCGManagedResource *)this,param_1);
  this->HashKey = 0xffffffffffffffff;
  this->_padding_ = (longlong)&___7UPCGManagedDebugStringMessageKey__6B_;
  return this;
}

// UPCGManagedDebugStringMessageKey @ 149be6e40

UPCGManagedDebugStringMessageKey * __thiscall
UPCGManagedDebugStringMessageKey::UPCGManagedDebugStringMessageKey
          (UPCGManagedDebugStringMessageKey *this,FObjectInitializer *param_1)

{
  UPCGManagedResource::UPCGManagedResource((UPCGManagedResource *)this,param_1);
  this->HashKey = 0xffffffffffffffff;
  this->_padding_ = (longlong)&___7UPCGManagedDebugStringMessageKey__6B_;
  return this;
}

// ~UPCGManagedDebugStringMessageKey @ 149be9b10

void __thiscall
UPCGManagedDebugStringMessageKey::~UPCGManagedDebugStringMessageKey
          (UPCGManagedDebugStringMessageKey *this)

{
  this->_padding_ = (longlong)&___7UPCGManagedDebugStringMessageKey__6B_;
  UPCGManagedResource::~UPCGManagedResource((UPCGManagedResource *)this);
  return;
}

// CanBeUsed @ 149c01860

bool __thiscall UPCGManagedDebugStringMessageKey::CanBeUsed(UPCGManagedDebugStringMessageKey *this)

{
  return false;
}

// GetPrivateStaticClass @ 149c25850

UClass * __cdecl UPCGManagedDebugStringMessageKey::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedDebugStringMessageKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedDebugStringMessageKey",
               &Z_Registration_Info_UClass_UPCGManagedDebugStringMessageKey.InnerSingleton,
               StaticRegisterNativesUPCGManagedDebugStringMessageKey,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGManagedDebugStringMessageKey>,
               InternalVTableHelperCtorCaller<UPCGManagedDebugStringMessageKey>,local_res8,
               UPCGManagedResource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedDebugStringMessageKey.InnerSingleton;
}

// Release @ 149c332e0

bool __thiscall
UPCGManagedDebugStringMessageKey::Release
          (UPCGManagedDebugStringMessageKey *this,bool param_1,
          TSet<TSoftObjectPtr<AActor>,DefaultKeyFuncs<TSoftObjectPtr<AActor>,0>,FDefaultSetAllocator>
          *param_2)

{
  *(undefined1 *)&this->_padding_ = 1;
  return param_1;
}

// StaticRegisterNativesUPCGManagedDebugStringMessageKey @ 149c35460

void __cdecl
UPCGManagedDebugStringMessageKey::StaticRegisterNativesUPCGManagedDebugStringMessageKey(void)

{
  return;
}

