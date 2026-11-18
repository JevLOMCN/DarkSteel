// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticClass @ 148e89ba0

UClass * __cdecl UNDISimpleCounterSimCacheData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNDISimpleCounterSimCacheData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NDISimpleCounterSimCacheData",
               &Z_Registration_Info_UClass_UNDISimpleCounterSimCacheData.InnerSingleton,
               StaticRegisterNativesUNDISimpleCounterSimCacheData,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNDISimpleCounterSimCacheData>,
               InternalVTableHelperCtorCaller<UNDISimpleCounterSimCacheData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNDISimpleCounterSimCacheData.InnerSingleton;
}

// UNDISimpleCounterSimCacheData @ 148ea48d0

UNDISimpleCounterSimCacheData * __thiscall
UNDISimpleCounterSimCacheData::UNDISimpleCounterSimCacheData
          (UNDISimpleCounterSimCacheData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNDISimpleCounterSimCacheData__6B_;
  (this->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Values).ArrayNum = 0;
  (this->Values).ArrayMax = 0;
  return this;
}

// UNDISimpleCounterSimCacheData @ 148ea4910

UNDISimpleCounterSimCacheData * __thiscall
UNDISimpleCounterSimCacheData::UNDISimpleCounterSimCacheData
          (UNDISimpleCounterSimCacheData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNDISimpleCounterSimCacheData__6B_;
  (this->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Values).ArrayNum = 0;
  (this->Values).ArrayMax = 0;
  return this;
}

// ~UNDISimpleCounterSimCacheData @ 148ea6b90

void __thiscall
UNDISimpleCounterSimCacheData::~UNDISimpleCounterSimCacheData(UNDISimpleCounterSimCacheData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNDISimpleCounterSimCacheData__6B_;
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148ebf7b0

UClass * __cdecl UNDISimpleCounterSimCacheData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNDISimpleCounterSimCacheData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NDISimpleCounterSimCacheData",
               &Z_Registration_Info_UClass_UNDISimpleCounterSimCacheData.InnerSingleton,
               StaticRegisterNativesUNDISimpleCounterSimCacheData,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNDISimpleCounterSimCacheData>,
               InternalVTableHelperCtorCaller<UNDISimpleCounterSimCacheData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNDISimpleCounterSimCacheData.InnerSingleton;
}

// StaticRegisterNativesUNDISimpleCounterSimCacheData @ 148ed4bd0

void __cdecl UNDISimpleCounterSimCacheData::StaticRegisterNativesUNDISimpleCounterSimCacheData(void)

{
  return;
}

