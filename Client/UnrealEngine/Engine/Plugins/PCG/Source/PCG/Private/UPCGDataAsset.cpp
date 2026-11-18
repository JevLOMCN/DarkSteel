// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// StaticClass @ 149721580

UClass * __cdecl UPCGDataAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataAsset",
               &Z_Registration_Info_UClass_UPCGDataAsset.InnerSingleton,
               StaticRegisterNativesUPCGDataAsset,0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGDataAsset>,InternalVTableHelperCtorCaller<UPCGDataAsset>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataAsset.InnerSingleton;
}

// UPCGDataAsset @ 1497255a0

UPCGDataAsset * __thiscall UPCGDataAsset::UPCGDataAsset(UPCGDataAsset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGDataAsset__6B_;
  (this->Data).TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).TaggedData.ArrayNum = 0;
  (this->Data).TaggedData.ArrayMax = 0;
  (this->Data).bCancelExecutionOnEmpty = false;
  (this->Data).bCancelExecution = false;
  (this->Data).DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).DataCrcs.ArrayNum = 0;
  (this->Data).DataCrcs.ArrayMax = 0;
  (this->Data).InactiveOutputPinBitmask = 0;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  return this;
}

// UPCGDataAsset @ 1497255f0

UPCGDataAsset * __thiscall
UPCGDataAsset::UPCGDataAsset(UPCGDataAsset *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGDataAsset__6B_;
  (this->Data).TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).TaggedData.ArrayNum = 0;
  (this->Data).TaggedData.ArrayMax = 0;
  (this->Data).bCancelExecutionOnEmpty = false;
  (this->Data).bCancelExecution = false;
  (this->Data).DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).DataCrcs.ArrayNum = 0;
  (this->Data).DataCrcs.ArrayMax = 0;
  (this->Data).InactiveOutputPinBitmask = 0;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  return this;
}

// ~UPCGDataAsset @ 149725e00

void __thiscall UPCGDataAsset::~UPCGDataAsset(UPCGDataAsset *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGDataAsset__6B_;
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Data).DataCrcs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)(this->Data).TaggedData.AllocatorInstance.Data,
             (this->Data).TaggedData.ArrayNum);
  pFVar1 = (this->Data).TaggedData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 149727160

UClass * __cdecl UPCGDataAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataAsset",
               &Z_Registration_Info_UClass_UPCGDataAsset.InnerSingleton,
               StaticRegisterNativesUPCGDataAsset,0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGDataAsset>,InternalVTableHelperCtorCaller<UPCGDataAsset>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataAsset.InnerSingleton;
}

// StaticRegisterNativesUPCGDataAsset @ 149727fd0

void __cdecl UPCGDataAsset::StaticRegisterNativesUPCGDataAsset(void)

{
  return;
}

