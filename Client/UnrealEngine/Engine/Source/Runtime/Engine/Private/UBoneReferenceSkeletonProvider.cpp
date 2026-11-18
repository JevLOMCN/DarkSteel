// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147287b00

UClass * __cdecl UBoneReferenceSkeletonProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBoneReferenceSkeletonProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BoneReferenceSkeletonProvider",
               &Z_Registration_Info_UClass_UBoneReferenceSkeletonProvider.InnerSingleton,
               StaticRegisterNativesUBoneReferenceSkeletonProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UBoneReferenceSkeletonProvider>,
               InternalVTableHelperCtorCaller<UBoneReferenceSkeletonProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBoneReferenceSkeletonProvider.InnerSingleton;
}

// UBoneReferenceSkeletonProvider @ 14728b760

UBoneReferenceSkeletonProvider * __thiscall
UBoneReferenceSkeletonProvider::UBoneReferenceSkeletonProvider
          (UBoneReferenceSkeletonProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UBoneReferenceSkeletonProvider__6B_;
  return this;
}

// UBoneReferenceSkeletonProvider @ 14728b790

UBoneReferenceSkeletonProvider * __thiscall
UBoneReferenceSkeletonProvider::UBoneReferenceSkeletonProvider
          (UBoneReferenceSkeletonProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UBoneReferenceSkeletonProvider__6B_;
  return this;
}

// ~UBoneReferenceSkeletonProvider @ 14728d210

void __thiscall
UBoneReferenceSkeletonProvider::~UBoneReferenceSkeletonProvider
          (UBoneReferenceSkeletonProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14728f200

UClass * __cdecl UBoneReferenceSkeletonProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBoneReferenceSkeletonProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BoneReferenceSkeletonProvider",
               &Z_Registration_Info_UClass_UBoneReferenceSkeletonProvider.InnerSingleton,
               StaticRegisterNativesUBoneReferenceSkeletonProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UBoneReferenceSkeletonProvider>,
               InternalVTableHelperCtorCaller<UBoneReferenceSkeletonProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBoneReferenceSkeletonProvider.InnerSingleton;
}

// StaticRegisterNativesUBoneReferenceSkeletonProvider @ 147291200

void __cdecl
UBoneReferenceSkeletonProvider::StaticRegisterNativesUBoneReferenceSkeletonProvider(void)

{
  return;
}

