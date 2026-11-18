// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 6

// StaticClass @ 14e031d40

UClass * __cdecl UGroomHairGroupsPreview::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomHairGroupsPreview.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomHairGroupsPreview",
               &Z_Registration_Info_UClass_UGroomHairGroupsPreview.InnerSingleton,
               StaticRegisterNativesUGroomHairGroupsPreview,0x38,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UGroomHairGroupsPreview>,
               InternalVTableHelperCtorCaller<UGroomHairGroupsPreview>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomHairGroupsPreview.InnerSingleton;
}

// UGroomHairGroupsPreview @ 14e03df50

UGroomHairGroupsPreview * __thiscall
UGroomHairGroupsPreview::UGroomHairGroupsPreview
          (UGroomHairGroupsPreview *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGroomHairGroupsPreview__6B_;
  (this->Groups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Groups).ArrayNum = 0;
  (this->Groups).ArrayMax = 0;
  return this;
}

// UGroomHairGroupsPreview @ 14e03df90

UGroomHairGroupsPreview * __thiscall
UGroomHairGroupsPreview::UGroomHairGroupsPreview
          (UGroomHairGroupsPreview *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGroomHairGroupsPreview__6B_;
  (this->Groups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Groups).ArrayNum = 0;
  (this->Groups).ArrayMax = 0;
  return this;
}

// ~UGroomHairGroupsPreview @ 14e03ef60

void __thiscall UGroomHairGroupsPreview::~UGroomHairGroupsPreview(UGroomHairGroupsPreview *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UGroomHairGroupsPreview__6B_;
  pFVar1 = (this->Groups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14e0522c0

UClass * __cdecl UGroomHairGroupsPreview::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomHairGroupsPreview.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomHairGroupsPreview",
               &Z_Registration_Info_UClass_UGroomHairGroupsPreview.InnerSingleton,
               StaticRegisterNativesUGroomHairGroupsPreview,0x38,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UGroomHairGroupsPreview>,
               InternalVTableHelperCtorCaller<UGroomHairGroupsPreview>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomHairGroupsPreview.InnerSingleton;
}

// StaticRegisterNativesUGroomHairGroupsPreview @ 14e064cb0

void __cdecl UGroomHairGroupsPreview::StaticRegisterNativesUGroomHairGroupsPreview(void)

{
  return;
}

