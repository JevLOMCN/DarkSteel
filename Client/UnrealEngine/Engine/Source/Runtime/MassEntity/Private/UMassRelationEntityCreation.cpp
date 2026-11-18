// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 7

// StaticClass @ 1471b5130

UClass * __cdecl UMassRelationEntityCreation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassRelationEntityCreation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassRelationEntityCreation",
               &Z_Registration_Info_UClass_UMassRelationEntityCreation.InnerSingleton,
               StaticRegisterNativesUMassRelationEntityCreation,0x470,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassRelationEntityCreation>,
               InternalVTableHelperCtorCaller<UMassRelationEntityCreation>,local_res8,
               UMassRelationObserver::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassRelationEntityCreation.InnerSingleton;
}

// UMassRelationEntityCreation @ 1471dde30

UMassRelationEntityCreation * __thiscall
UMassRelationEntityCreation::UMassRelationEntityCreation
          (UMassRelationEntityCreation *this,FVTableHelper *param_1)

{
  UMassRelationObserver::UMassRelationObserver((UMassRelationObserver *)this,param_1);
  *(undefined ***)this = &___7UMassRelationEntityCreation__6B_;
  return this;
}

// UMassRelationEntityCreation @ 1471dde60

UMassRelationEntityCreation * __thiscall
UMassRelationEntityCreation::UMassRelationEntityCreation(UMassRelationEntityCreation *this)

{
  UMassRelationObserver::UMassRelationObserver((UMassRelationObserver *)this);
  this->field_0xf1 = 8;
  *(undefined ***)this = &___7UMassRelationEntityCreation__6B_;
  *(undefined2 *)&this->field_0x64 = 0x400;
  return this;
}

// ~UMassRelationEntityCreation @ 1471e1170

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
UMassRelationEntityCreation::~UMassRelationEntityCreation(UMassRelationEntityCreation *this)

{
  *(undefined ***)this = &___7UMassRelationObserver__6B_;
  if (*(void **)&this->field_0x460 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x460);
  }
  FMassEntityQuery::~FMassEntityQuery((FMassEntityQuery *)&this->field_0x100);
  *(undefined ***)this = &___7UMassObserverProcessor__6B_;
  UMassProcessor::~UMassProcessor((UMassProcessor *)this);
  return;
}

// Execute @ 147216660

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UMassRelationEntityCreation::Execute
          (UMassRelationEntityCreation *this,FMassEntityManager *param_1,
          FMassExecutionContext *param_2)

{
  return;
}

// GetPrivateStaticClass @ 147224be0

UClass * __cdecl UMassRelationEntityCreation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassRelationEntityCreation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassRelationEntityCreation",
               &Z_Registration_Info_UClass_UMassRelationEntityCreation.InnerSingleton,
               StaticRegisterNativesUMassRelationEntityCreation,0x470,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassRelationEntityCreation>,
               InternalVTableHelperCtorCaller<UMassRelationEntityCreation>,local_res8,
               UMassRelationObserver::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassRelationEntityCreation.InnerSingleton;
}

// StaticRegisterNativesUMassRelationEntityCreation @ 147250760

void __cdecl UMassRelationEntityCreation::StaticRegisterNativesUMassRelationEntityCreation(void)

{
  return;
}

