// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 148a2a560

UClass * __cdecl UContentBundleDescriptor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UContentBundleDescriptor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ContentBundleDescriptor",
               &Z_Registration_Info_UClass_UContentBundleDescriptor.InnerSingleton,
               StaticRegisterNativesUContentBundleDescriptor,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UContentBundleDescriptor>,
               InternalVTableHelperCtorCaller<UContentBundleDescriptor>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UContentBundleDescriptor.InnerSingleton;
}

// UContentBundleDescriptor @ 148a421f0

UContentBundleDescriptor * __thiscall
UContentBundleDescriptor::UContentBundleDescriptor
          (UContentBundleDescriptor *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UContentBundleDescriptor__6B_;
  (this->DisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplayName).Data.ArrayNum = 0;
  (this->DisplayName).Data.ArrayMax = 0;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  return this;
}

// UContentBundleDescriptor @ 148a42230

UContentBundleDescriptor * __thiscall
UContentBundleDescriptor::UContentBundleDescriptor
          (UContentBundleDescriptor *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UContentBundleDescriptor__6B_;
  (this->DisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplayName).Data.ArrayNum = 0;
  (this->DisplayName).Data.ArrayMax = 0;
  (this->DebugColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Black.field0_0x0;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  return this;
}

// ~UContentBundleDescriptor @ 148a44420

void __thiscall UContentBundleDescriptor::~UContentBundleDescriptor(UContentBundleDescriptor *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UContentBundleDescriptor__6B_;
  pFVar1 = (this->DisplayName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetContentBundleCompactString @ 148a54c60

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
UContentBundleDescriptor::GetContentBundleCompactString
          (FString *__return_storage_ptr__,FGuid *param_1)

{
  if ((4 < (byte)LogContentBundle._0_1_) &&
     (((param_1->D == 0 && param_1->C == 0) && param_1->B == 0) && param_1->A == 0)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
  }
  CityHash64((char *)param_1,0x10);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%X");
  return __return_storage_ptr__;
}

// GetPackageRoot @ 148a595b0

FString * __thiscall
UContentBundleDescriptor::GetPackageRoot
          (UContentBundleDescriptor *this,FString *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FName this_00;
  FName local_res10;
  FString local_res18;
  FString local_18;
  
  pUVar1 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
  local_res10 = (FName)pUVar1->_padding_;
  ::FName::ToString(&local_res10,&local_18);
  this_00 = FPackageName::GetPackageMountPoint(&local_res18,SUB81(&local_18,0));
  ::FName::ToString((FName *)this_00,__return_storage_ptr__);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 148a59b40

UClass * __cdecl UContentBundleDescriptor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UContentBundleDescriptor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ContentBundleDescriptor",
               &Z_Registration_Info_UClass_UContentBundleDescriptor.InnerSingleton,
               StaticRegisterNativesUContentBundleDescriptor,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UContentBundleDescriptor>,
               InternalVTableHelperCtorCaller<UContentBundleDescriptor>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UContentBundleDescriptor.InnerSingleton;
}

// IsValid @ 148a5ed40

bool __thiscall UContentBundleDescriptor::IsValid(UContentBundleDescriptor *this)

{
  if (((((this->Guid).D != 0 || (this->Guid).C != 0) || (this->Guid).B != 0) || (this->Guid).A != 0)
     && (1 < (this->DisplayName).Data.ArrayNum)) {
    return true;
  }
  return false;
}

// StaticRegisterNativesUContentBundleDescriptor @ 148a6a2c0

void __cdecl UContentBundleDescriptor::StaticRegisterNativesUContentBundleDescriptor(void)

{
  return;
}

