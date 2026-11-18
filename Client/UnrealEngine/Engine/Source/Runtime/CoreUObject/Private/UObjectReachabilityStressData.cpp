// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// StaticClass @ 141fed340

UClass * __cdecl UObjectReachabilityStressData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectReachabilityStressData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectReachabilityStressData",
               &Z_Registration_Info_UClass_UObjectReachabilityStressData.InnerSingleton,
               StaticRegisterNativesUObjectReachabilityStressData,0x38,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectReachabilityStressData>,
               InternalVTableHelperCtorCaller<UObjectReachabilityStressData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectReachabilityStressData.InnerSingleton;
}

// UObjectReachabilityStressData @ 1420120c0

UObjectReachabilityStressData * __thiscall
UObjectReachabilityStressData::UObjectReachabilityStressData
          (UObjectReachabilityStressData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UObjectReachabilityStressData__6B_;
  (this->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).ArrayNum = 0;
  (this->Children).ArrayMax = 0;
  return this;
}

// UObjectReachabilityStressData @ 142012100

UObjectReachabilityStressData * __thiscall
UObjectReachabilityStressData::UObjectReachabilityStressData
          (UObjectReachabilityStressData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UObjectReachabilityStressData__6B_;
  (this->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).ArrayNum = 0;
  (this->Children).ArrayMax = 0;
  return this;
}

// ~UObjectReachabilityStressData @ 142013bb0

void __thiscall
UObjectReachabilityStressData::~UObjectReachabilityStressData(UObjectReachabilityStressData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UObjectReachabilityStressData__6B_;
  pFVar1 = (this->Children).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1420558b0

UClass * __cdecl UObjectReachabilityStressData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectReachabilityStressData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectReachabilityStressData",
               &Z_Registration_Info_UClass_UObjectReachabilityStressData.InnerSingleton,
               StaticRegisterNativesUObjectReachabilityStressData,0x38,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectReachabilityStressData>,
               InternalVTableHelperCtorCaller<UObjectReachabilityStressData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectReachabilityStressData.InnerSingleton;
}

// StaticRegisterNativesUObjectReachabilityStressData @ 14208fd80

void __cdecl UObjectReachabilityStressData::StaticRegisterNativesUObjectReachabilityStressData(void)

{
  return;
}

