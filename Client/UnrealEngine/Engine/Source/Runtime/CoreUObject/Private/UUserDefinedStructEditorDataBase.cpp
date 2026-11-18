// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// StaticClass @ 141f520b0

UClass * __cdecl UUserDefinedStructEditorDataBase::StaticClass(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UUserDefinedStructEditorDataBase.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UObject::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"UserDefinedStructEditorDataBase",
               &Z_Registration_Info_UClass_UUserDefinedStructEditorDataBase.InnerSingleton,
               StaticRegisterNativesUUserDefinedStructEditorDataBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UUserDefinedStructEditorDataBase>,
               InternalVTableHelperCtorCaller<UUserDefinedStructEditorDataBase>,local_res10,
               UObject::StaticClass,UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UUserDefinedStructEditorDataBase.InnerSingleton;
}

// UUserDefinedStructEditorDataBase @ 141f685d0

UUserDefinedStructEditorDataBase * __thiscall
UUserDefinedStructEditorDataBase::UUserDefinedStructEditorDataBase
          (UUserDefinedStructEditorDataBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UUserDefinedStructEditorDataBase__6B_;
  return this;
}

// UUserDefinedStructEditorDataBase @ 141f68600

UUserDefinedStructEditorDataBase * __thiscall
UUserDefinedStructEditorDataBase::UUserDefinedStructEditorDataBase
          (UUserDefinedStructEditorDataBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UUserDefinedStructEditorDataBase__6B_;
  return this;
}

// ~UUserDefinedStructEditorDataBase @ 141f692a0

void __thiscall
UUserDefinedStructEditorDataBase::~UUserDefinedStructEditorDataBase
          (UUserDefinedStructEditorDataBase *this)

{
  *(undefined ***)this = &___7UUserDefinedStructEditorDataBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 141f85380

UClass * __cdecl UUserDefinedStructEditorDataBase::GetPrivateStaticClass(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UUserDefinedStructEditorDataBase.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UObject::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"UserDefinedStructEditorDataBase",
               &Z_Registration_Info_UClass_UUserDefinedStructEditorDataBase.InnerSingleton,
               StaticRegisterNativesUUserDefinedStructEditorDataBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UUserDefinedStructEditorDataBase>,
               InternalVTableHelperCtorCaller<UUserDefinedStructEditorDataBase>,local_res10,
               UObject::StaticClass,UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UUserDefinedStructEditorDataBase.InnerSingleton;
}

// StaticRegisterNativesUUserDefinedStructEditorDataBase @ 141fade70

void __cdecl
UUserDefinedStructEditorDataBase::StaticRegisterNativesUUserDefinedStructEditorDataBase(void)

{
  return;
}

