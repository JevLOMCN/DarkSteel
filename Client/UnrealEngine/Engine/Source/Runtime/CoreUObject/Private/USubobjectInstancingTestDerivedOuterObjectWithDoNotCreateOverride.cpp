// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// StaticClass @ 1422c4ed0

UClass * __cdecl
USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",
               L"SubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride",
               &Z_Registration_Info_UClass_USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride
                .InnerSingleton,
               StaticRegisterNativesUSubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride
               ,0x248,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride>
               ,
               InternalVTableHelperCtorCaller<USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride>
               ,local_res8,USubobjectInstancingTestOuterObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride
         .InnerSingleton;
}

// USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride @ 1422ce770

USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride * __thiscall
USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride::
USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride
          (USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride *this,
          FVTableHelper *param_1)

{
  USubobjectInstancingTestOuterObject::USubobjectInstancingTestOuterObject
            ((USubobjectInstancingTestOuterObject *)this,param_1);
  *(undefined ***)this = &___7USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride__6B_
  ;
  return this;
}

// USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride @ 1422ce7a0

USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride * __thiscall
USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride::
USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride
          (USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride *this,
          FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  FName local_res8;
  
  pFVar2 = ::FName::FName(&local_res8,"OptionalInnerObject");
  FVar1 = *pFVar2;
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar1,(UClass *)0x0,(TArrayView<FName_const_,int> *)0x0);
  USubobjectInstancingTestOuterObject::USubobjectInstancingTestOuterObject
            ((USubobjectInstancingTestOuterObject *)this,param_1);
  *(undefined ***)this = &___7USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride__6B_
  ;
  return this;
}

// ~USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride @ 1422d1410

void __thiscall
USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride::
~USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride
          (USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride *this)

{
  *(undefined ***)this = &___7USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride__6B_
  ;
  USubobjectInstancingTestOuterObject::~USubobjectInstancingTestOuterObject
            ((USubobjectInstancingTestOuterObject *)this);
  return;
}

// GetPrivateStaticClass @ 1422d3190

UClass * __cdecl
USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",
               L"SubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride",
               &Z_Registration_Info_UClass_USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride
                .InnerSingleton,
               StaticRegisterNativesUSubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride
               ,0x248,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride>
               ,
               InternalVTableHelperCtorCaller<USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride>
               ,local_res8,USubobjectInstancingTestOuterObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride
         .InnerSingleton;
}

// StaticRegisterNativesUSubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride @ 1422e3dc0

void __cdecl
USubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride::
StaticRegisterNativesUSubobjectInstancingTestDerivedOuterObjectWithDoNotCreateOverride(void)

{
  return;
}

