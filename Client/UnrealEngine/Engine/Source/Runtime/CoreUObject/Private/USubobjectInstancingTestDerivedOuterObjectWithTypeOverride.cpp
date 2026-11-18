// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// StaticClass @ 1422c4d50

UClass * __cdecl USubobjectInstancingTestDerivedOuterObjectWithTypeOverride::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubobjectInstancingTestDerivedOuterObjectWithTypeOverride.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"SubobjectInstancingTestDerivedOuterObjectWithTypeOverride",
               &Z_Registration_Info_UClass_USubobjectInstancingTestDerivedOuterObjectWithTypeOverride
                .InnerSingleton,
               StaticRegisterNativesUSubobjectInstancingTestDerivedOuterObjectWithTypeOverride,0x248
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USubobjectInstancingTestDerivedOuterObjectWithTypeOverride>,
               InternalVTableHelperCtorCaller<USubobjectInstancingTestDerivedOuterObjectWithTypeOverride>
               ,local_res8,USubobjectInstancingTestOuterObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubobjectInstancingTestDerivedOuterObjectWithTypeOverride.
         InnerSingleton;
}

// USubobjectInstancingTestDerivedOuterObjectWithTypeOverride @ 1422ce820

USubobjectInstancingTestDerivedOuterObjectWithTypeOverride * __thiscall
USubobjectInstancingTestDerivedOuterObjectWithTypeOverride::
USubobjectInstancingTestDerivedOuterObjectWithTypeOverride
          (USubobjectInstancingTestDerivedOuterObjectWithTypeOverride *this,FVTableHelper *param_1)

{
  USubobjectInstancingTestOuterObject::USubobjectInstancingTestOuterObject
            ((USubobjectInstancingTestOuterObject *)this,param_1);
  *(undefined ***)this = &___7USubobjectInstancingTestDerivedOuterObjectWithTypeOverride__6B_;
  return this;
}

// USubobjectInstancingTestDerivedOuterObjectWithTypeOverride @ 1422ce850

USubobjectInstancingTestDerivedOuterObjectWithTypeOverride * __thiscall
USubobjectInstancingTestDerivedOuterObjectWithTypeOverride::
USubobjectInstancingTestDerivedOuterObjectWithTypeOverride
          (USubobjectInstancingTestDerivedOuterObjectWithTypeOverride *this,
          FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FName local_res8;
  
  pFVar2 = ::FName::FName(&local_res8,"InnerObject");
  FVar1 = *pFVar2;
  pUVar3 = USubobjectInstancingTestDerivedObject::StaticClass();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar1,pUVar3,(TArrayView<FName_const_,int> *)0x0);
  USubobjectInstancingTestOuterObject::USubobjectInstancingTestOuterObject
            ((USubobjectInstancingTestOuterObject *)this,param_1);
  *(undefined ***)this = &___7USubobjectInstancingTestDerivedOuterObjectWithTypeOverride__6B_;
  return this;
}

// ~USubobjectInstancingTestDerivedOuterObjectWithTypeOverride @ 1422d1430

void __thiscall
USubobjectInstancingTestDerivedOuterObjectWithTypeOverride::
~USubobjectInstancingTestDerivedOuterObjectWithTypeOverride
          (USubobjectInstancingTestDerivedOuterObjectWithTypeOverride *this)

{
  *(undefined ***)this = &___7USubobjectInstancingTestDerivedOuterObjectWithTypeOverride__6B_;
  USubobjectInstancingTestOuterObject::~USubobjectInstancingTestOuterObject
            ((USubobjectInstancingTestOuterObject *)this);
  return;
}

// GetPrivateStaticClass @ 1422d3250

UClass * __cdecl
USubobjectInstancingTestDerivedOuterObjectWithTypeOverride::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubobjectInstancingTestDerivedOuterObjectWithTypeOverride.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"SubobjectInstancingTestDerivedOuterObjectWithTypeOverride",
               &Z_Registration_Info_UClass_USubobjectInstancingTestDerivedOuterObjectWithTypeOverride
                .InnerSingleton,
               StaticRegisterNativesUSubobjectInstancingTestDerivedOuterObjectWithTypeOverride,0x248
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USubobjectInstancingTestDerivedOuterObjectWithTypeOverride>,
               InternalVTableHelperCtorCaller<USubobjectInstancingTestDerivedOuterObjectWithTypeOverride>
               ,local_res8,USubobjectInstancingTestOuterObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubobjectInstancingTestDerivedOuterObjectWithTypeOverride.
         InnerSingleton;
}

// StaticRegisterNativesUSubobjectInstancingTestDerivedOuterObjectWithTypeOverride @ 1422e3dd0

void __cdecl
USubobjectInstancingTestDerivedOuterObjectWithTypeOverride::
StaticRegisterNativesUSubobjectInstancingTestDerivedOuterObjectWithTypeOverride(void)

{
  return;
}

