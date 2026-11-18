// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147aa3920

UClass * __cdecl UDeletedObjectPlaceholder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeletedObjectPlaceholder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DeletedObjectPlaceholder",
               &Z_Registration_Info_UClass_UDeletedObjectPlaceholder.InnerSingleton,
               StaticRegisterNativesUDeletedObjectPlaceholder,0x28,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UDeletedObjectPlaceholder>,
               InternalVTableHelperCtorCaller<UDeletedObjectPlaceholder>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeletedObjectPlaceholder.InnerSingleton;
}

// UDeletedObjectPlaceholder @ 147abd390

UDeletedObjectPlaceholder * __thiscall
UDeletedObjectPlaceholder::UDeletedObjectPlaceholder
          (UDeletedObjectPlaceholder *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDeletedObjectPlaceholder__6B_;
  return this;
}

// UDeletedObjectPlaceholder @ 147abd3c0

UDeletedObjectPlaceholder * __thiscall
UDeletedObjectPlaceholder::UDeletedObjectPlaceholder
          (UDeletedObjectPlaceholder *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDeletedObjectPlaceholder__6B_;
  return this;
}

// ~UDeletedObjectPlaceholder @ 147abf750

void __thiscall
UDeletedObjectPlaceholder::~UDeletedObjectPlaceholder(UDeletedObjectPlaceholder *this)

{
  *(undefined ***)this = &___7UDeletedObjectPlaceholder__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147aeb720

UClass * __cdecl UDeletedObjectPlaceholder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeletedObjectPlaceholder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DeletedObjectPlaceholder",
               &Z_Registration_Info_UClass_UDeletedObjectPlaceholder.InnerSingleton,
               StaticRegisterNativesUDeletedObjectPlaceholder,0x28,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UDeletedObjectPlaceholder>,
               InternalVTableHelperCtorCaller<UDeletedObjectPlaceholder>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeletedObjectPlaceholder.InnerSingleton;
}

// StaticRegisterNativesUDeletedObjectPlaceholder @ 147b172d0

void __cdecl UDeletedObjectPlaceholder::StaticRegisterNativesUDeletedObjectPlaceholder(void)

{
  return;
}

