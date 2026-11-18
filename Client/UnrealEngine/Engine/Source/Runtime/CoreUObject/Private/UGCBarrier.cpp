// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// StaticClass @ 141e48820

UClass * __cdecl UGCBarrier::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGCBarrier.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"GCBarrier",
               &Z_Registration_Info_UClass_UGCBarrier.InnerSingleton,StaticRegisterNativesUGCBarrier
               ,0x28,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGCBarrier>,InternalVTableHelperCtorCaller<UGCBarrier>,local_res8
               ,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGCBarrier.InnerSingleton;
}

// UGCBarrier @ 141e56980

UGCBarrier * __thiscall UGCBarrier::UGCBarrier(UGCBarrier *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UGCBarrier__6B_;
  return this;
}

// UGCBarrier @ 141e569b0

UGCBarrier * __thiscall UGCBarrier::UGCBarrier(UGCBarrier *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UGCBarrier__6B_;
  return this;
}

// ~UGCBarrier @ 141e57830

void __thiscall UGCBarrier::~UGCBarrier(UGCBarrier *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 141e5bc00

UClass * __cdecl UGCBarrier::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGCBarrier.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"GCBarrier",
               &Z_Registration_Info_UClass_UGCBarrier.InnerSingleton,StaticRegisterNativesUGCBarrier
               ,0x28,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGCBarrier>,InternalVTableHelperCtorCaller<UGCBarrier>,local_res8
               ,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGCBarrier.InnerSingleton;
}

// StaticRegisterNativesUGCBarrier @ 141e60680

void __cdecl UGCBarrier::StaticRegisterNativesUGCBarrier(void)

{
  return;
}

