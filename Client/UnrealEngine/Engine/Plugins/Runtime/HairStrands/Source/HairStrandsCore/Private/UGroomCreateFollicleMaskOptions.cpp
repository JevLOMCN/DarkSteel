// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 6

// StaticClass @ 14e0321b0

UClass * __cdecl UGroomCreateFollicleMaskOptions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomCreateFollicleMaskOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomCreateFollicleMaskOptions",
               &Z_Registration_Info_UClass_UGroomCreateFollicleMaskOptions.InnerSingleton,
               StaticRegisterNativesUGroomCreateFollicleMaskOptions,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UGroomCreateFollicleMaskOptions>,
               InternalVTableHelperCtorCaller<UGroomCreateFollicleMaskOptions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomCreateFollicleMaskOptions.InnerSingleton;
}

// UGroomCreateFollicleMaskOptions @ 14e03dd30

UGroomCreateFollicleMaskOptions * __thiscall
UGroomCreateFollicleMaskOptions::UGroomCreateFollicleMaskOptions
          (UGroomCreateFollicleMaskOptions *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Resolution = 0x1000;
  this->_padding_ = (longlong)&___7UGroomCreateFollicleMaskOptions__6B_;
  (this->Grooms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Grooms).ArrayNum = 0;
  (this->Grooms).ArrayMax = 0;
  this->RootRadius = 8;
  return this;
}

// UGroomCreateFollicleMaskOptions @ 14e03dd70

UGroomCreateFollicleMaskOptions * __thiscall
UGroomCreateFollicleMaskOptions::UGroomCreateFollicleMaskOptions
          (UGroomCreateFollicleMaskOptions *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Resolution = 0x1000;
  this->_padding_ = (longlong)&___7UGroomCreateFollicleMaskOptions__6B_;
  (this->Grooms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Grooms).ArrayNum = 0;
  (this->Grooms).ArrayMax = 0;
  this->RootRadius = 8;
  return this;
}

// ~UGroomCreateFollicleMaskOptions @ 14e03ee50

void __thiscall
UGroomCreateFollicleMaskOptions::~UGroomCreateFollicleMaskOptions
          (UGroomCreateFollicleMaskOptions *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UGroomCreateFollicleMaskOptions__6B_;
  pFVar1 = (this->Grooms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14e0520b0

UClass * __cdecl UGroomCreateFollicleMaskOptions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomCreateFollicleMaskOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomCreateFollicleMaskOptions",
               &Z_Registration_Info_UClass_UGroomCreateFollicleMaskOptions.InnerSingleton,
               StaticRegisterNativesUGroomCreateFollicleMaskOptions,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UGroomCreateFollicleMaskOptions>,
               InternalVTableHelperCtorCaller<UGroomCreateFollicleMaskOptions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomCreateFollicleMaskOptions.InnerSingleton;
}

// StaticRegisterNativesUGroomCreateFollicleMaskOptions @ 14e064c80

void __cdecl
UGroomCreateFollicleMaskOptions::StaticRegisterNativesUGroomCreateFollicleMaskOptions(void)

{
  return;
}

