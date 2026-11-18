// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147256ff0

UClass * __cdecl UAssetExportTask::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetExportTask.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AssetExportTask",
               &Z_Registration_Info_UClass_UAssetExportTask.InnerSingleton,
               StaticRegisterNativesUAssetExportTask,0x78,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAssetExportTask>,
               InternalVTableHelperCtorCaller<UAssetExportTask>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetExportTask.InnerSingleton;
}

// UAssetExportTask @ 14725cdd0

UAssetExportTask * __thiscall
UAssetExportTask::UAssetExportTask(UAssetExportTask *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAssetExportTask__6B_;
  (this->Object).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->Exporter).field0_0x0.DebugPtr = (UExporter *)0x0;
  (this->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filename).Data.ArrayNum = 0;
  (this->Filename).Data.ArrayMax = 0;
  (this->IgnoreObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IgnoreObjectList).ArrayNum = 0;
  (this->IgnoreObjectList).ArrayMax = 0;
  (this->Options).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->Errors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Errors).ArrayNum = 0;
  (this->Errors).ArrayMax = 0;
  return this;
}

// UAssetExportTask @ 14725ce20

UAssetExportTask * __thiscall
UAssetExportTask::UAssetExportTask(UAssetExportTask *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAssetExportTask__6B_;
  (this->Object).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->Exporter).field0_0x0.DebugPtr = (UExporter *)0x0;
  (this->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filename).Data.ArrayNum = 0;
  (this->Filename).Data.ArrayMax = 0;
  (this->IgnoreObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IgnoreObjectList).ArrayNum = 0;
  (this->IgnoreObjectList).ArrayMax = 0;
  (this->Options).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->Errors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Errors).ArrayNum = 0;
  (this->Errors).ArrayMax = 0;
  return this;
}

// ~UAssetExportTask @ 14725dbe0

void __thiscall UAssetExportTask::~UAssetExportTask(UAssetExportTask *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAssetExportTask__6B_;
  DestructItems<FString,int>
            ((FString *)(this->Errors).AllocatorInstance.Data,(this->Errors).ArrayNum);
  pFVar1 = (this->Errors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IgnoreObjectList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Filename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1472601b0

UClass * __cdecl UAssetExportTask::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetExportTask.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AssetExportTask",
               &Z_Registration_Info_UClass_UAssetExportTask.InnerSingleton,
               StaticRegisterNativesUAssetExportTask,0x78,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAssetExportTask>,
               InternalVTableHelperCtorCaller<UAssetExportTask>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetExportTask.InnerSingleton;
}

// StaticRegisterNativesUAssetExportTask @ 147260ec0

void __cdecl UAssetExportTask::StaticRegisterNativesUAssetExportTask(void)

{
  return;
}

