// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 6

// StaticClass @ 14df90100

UClass * __cdecl UGroomBindingAssetList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomBindingAssetList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomBindingAssetList",
               &Z_Registration_Info_UClass_UGroomBindingAssetList.InnerSingleton,
               StaticRegisterNativesUGroomBindingAssetList,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGroomBindingAssetList>,
               InternalVTableHelperCtorCaller<UGroomBindingAssetList>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomBindingAssetList.InnerSingleton;
}

// UGroomBindingAssetList @ 14dfafbb0

UGroomBindingAssetList * __thiscall
UGroomBindingAssetList::UGroomBindingAssetList(UGroomBindingAssetList *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGroomBindingAssetList__6B_;
  (this->Bindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bindings).ArrayNum = 0;
  (this->Bindings).ArrayMax = 0;
  return this;
}

// UGroomBindingAssetList @ 14dfafbf0

UGroomBindingAssetList * __thiscall
UGroomBindingAssetList::UGroomBindingAssetList
          (UGroomBindingAssetList *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGroomBindingAssetList__6B_;
  (this->Bindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bindings).ArrayNum = 0;
  (this->Bindings).ArrayMax = 0;
  return this;
}

// ~UGroomBindingAssetList @ 14dfb0de0

void __thiscall UGroomBindingAssetList::~UGroomBindingAssetList(UGroomBindingAssetList *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UGroomBindingAssetList__6B_;
  pFVar1 = (this->Bindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14dfc8520

UClass * __cdecl UGroomBindingAssetList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomBindingAssetList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomBindingAssetList",
               &Z_Registration_Info_UClass_UGroomBindingAssetList.InnerSingleton,
               StaticRegisterNativesUGroomBindingAssetList,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGroomBindingAssetList>,
               InternalVTableHelperCtorCaller<UGroomBindingAssetList>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomBindingAssetList.InnerSingleton;
}

// StaticRegisterNativesUGroomBindingAssetList @ 14dfd8980

void __cdecl UGroomBindingAssetList::StaticRegisterNativesUGroomBindingAssetList(void)

{
  return;
}

