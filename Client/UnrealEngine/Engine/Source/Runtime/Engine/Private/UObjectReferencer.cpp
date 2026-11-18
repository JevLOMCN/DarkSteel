// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1480739d0

UClass * __cdecl UObjectReferencer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectReferencer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ObjectReferencer",
               &Z_Registration_Info_UClass_UObjectReferencer.InnerSingleton,
               StaticRegisterNativesUObjectReferencer,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UObjectReferencer>,
               InternalVTableHelperCtorCaller<UObjectReferencer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectReferencer.InnerSingleton;
}

// UObjectReferencer @ 14808c190

UObjectReferencer * __thiscall
UObjectReferencer::UObjectReferencer(UObjectReferencer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UObjectReferencer__6B_;
  (this->ReferencedObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencedObjects).ArrayNum = 0;
  (this->ReferencedObjects).ArrayMax = 0;
  return this;
}

// UObjectReferencer @ 14808c1d0

UObjectReferencer * __thiscall
UObjectReferencer::UObjectReferencer(UObjectReferencer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UObjectReferencer__6B_;
  (this->ReferencedObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencedObjects).ArrayNum = 0;
  (this->ReferencedObjects).ArrayMax = 0;
  return this;
}

// ~UObjectReferencer @ 14808f5a0

void __thiscall UObjectReferencer::~UObjectReferencer(UObjectReferencer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UObjectReferencer__6B_;
  pFVar1 = (this->ReferencedObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1480a9d60

UClass * __cdecl UObjectReferencer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectReferencer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ObjectReferencer",
               &Z_Registration_Info_UClass_UObjectReferencer.InnerSingleton,
               StaticRegisterNativesUObjectReferencer,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UObjectReferencer>,
               InternalVTableHelperCtorCaller<UObjectReferencer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectReferencer.InnerSingleton;
}

// StaticRegisterNativesUObjectReferencer @ 1480d5770

void __cdecl UObjectReferencer::StaticRegisterNativesUObjectReferencer(void)

{
  return;
}

