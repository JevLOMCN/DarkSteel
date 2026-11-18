// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// StaticClass @ 141f517f0

UClass * __cdecl UPropertyBagMissingObject::StaticClass(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UPropertyBagMissingObject.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UObject::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"PropertyBagMissingObject",
               &Z_Registration_Info_UClass_UPropertyBagMissingObject.InnerSingleton,
               StaticRegisterNativesUPropertyBagMissingObject,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPropertyBagMissingObject>,
               InternalVTableHelperCtorCaller<UPropertyBagMissingObject>,local_res10,
               UObject::StaticClass,UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UPropertyBagMissingObject.InnerSingleton;
}

// UPropertyBagMissingObject @ 141f67cf0

UPropertyBagMissingObject * __thiscall
UPropertyBagMissingObject::UPropertyBagMissingObject
          (UPropertyBagMissingObject *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPropertyBagMissingObject__6B_;
  return this;
}

// UPropertyBagMissingObject @ 141f67d20

UPropertyBagMissingObject * __thiscall
UPropertyBagMissingObject::UPropertyBagMissingObject
          (UPropertyBagMissingObject *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPropertyBagMissingObject__6B_;
  return this;
}

// ~UPropertyBagMissingObject @ 141f69140

void __thiscall
UPropertyBagMissingObject::~UPropertyBagMissingObject(UPropertyBagMissingObject *this)

{
  *(undefined ***)this = &___7UPropertyBagMissingObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 141f84f80

UClass * __cdecl UPropertyBagMissingObject::GetPrivateStaticClass(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UPropertyBagMissingObject.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UObject::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"PropertyBagMissingObject",
               &Z_Registration_Info_UClass_UPropertyBagMissingObject.InnerSingleton,
               StaticRegisterNativesUPropertyBagMissingObject,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPropertyBagMissingObject>,
               InternalVTableHelperCtorCaller<UPropertyBagMissingObject>,local_res10,
               UObject::StaticClass,UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UPropertyBagMissingObject.InnerSingleton;
}

// StaticRegisterNativesUPropertyBagMissingObject @ 141fade20

void __cdecl UPropertyBagMissingObject::StaticRegisterNativesUPropertyBagMissingObject(void)

{
  return;
}

