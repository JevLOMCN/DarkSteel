// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148333000

UClass * __cdecl USkeletalBodySetup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalBodySetup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkeletalBodySetup",
               &Z_Registration_Info_UClass_USkeletalBodySetup.InnerSingleton,
               StaticRegisterNativesUSkeletalBodySetup,0x350,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USkeletalBodySetup>,
               InternalVTableHelperCtorCaller<USkeletalBodySetup>,local_res8,UBodySetup::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalBodySetup.InnerSingleton;
}

// USkeletalBodySetup @ 14834c970

USkeletalBodySetup * __thiscall
USkeletalBodySetup::USkeletalBodySetup(USkeletalBodySetup *this,FVTableHelper *param_1)

{
  UBodySetup::UBodySetup((UBodySetup *)this,param_1);
  this->_padding_ = (longlong)&___7USkeletalBodySetup__6B_;
  (this->PhysicalAnimationData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PhysicalAnimationData).ArrayNum = 0;
  (this->PhysicalAnimationData).ArrayMax = 0;
  return this;
}

// USkeletalBodySetup @ 14834c9b0

USkeletalBodySetup * __thiscall
USkeletalBodySetup::USkeletalBodySetup(USkeletalBodySetup *this,FObjectInitializer *param_1)

{
  UBodySetup::UBodySetup((UBodySetup *)this,param_1);
  this->_padding_ = (longlong)&___7USkeletalBodySetup__6B_;
  (this->PhysicalAnimationData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PhysicalAnimationData).ArrayNum = 0;
  (this->PhysicalAnimationData).ArrayMax = 0;
  return this;
}

// ~USkeletalBodySetup @ 14834dfc0

void __thiscall USkeletalBodySetup::~USkeletalBodySetup(USkeletalBodySetup *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USkeletalBodySetup__6B_;
  pFVar1 = (this->PhysicalAnimationData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UBodySetup::~UBodySetup((UBodySetup *)this);
  return;
}

// GetPrivateStaticClass @ 1483874c0

UClass * __cdecl USkeletalBodySetup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalBodySetup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkeletalBodySetup",
               &Z_Registration_Info_UClass_USkeletalBodySetup.InnerSingleton,
               StaticRegisterNativesUSkeletalBodySetup,0x350,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USkeletalBodySetup>,
               InternalVTableHelperCtorCaller<USkeletalBodySetup>,local_res8,UBodySetup::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalBodySetup.InnerSingleton;
}

// StaticRegisterNativesUSkeletalBodySetup @ 1483af7d0

void __cdecl USkeletalBodySetup::StaticRegisterNativesUSkeletalBodySetup(void)

{
  return;
}

