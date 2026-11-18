// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// StaticClass @ 149901c40

UClass * __cdecl UPCGDataCollectionExporter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataCollectionExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataCollectionExporter",
               &Z_Registration_Info_UClass_UPCGDataCollectionExporter.InnerSingleton,
               StaticRegisterNativesUPCGDataCollectionExporter,0x58,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGDataCollectionExporter>,
               InternalVTableHelperCtorCaller<UPCGDataCollectionExporter>,local_res8,
               UPCGAssetExporter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataCollectionExporter.InnerSingleton;
}

// UPCGDataCollectionExporter @ 1499c35c0

UPCGDataCollectionExporter * __thiscall
UPCGDataCollectionExporter::UPCGDataCollectionExporter
          (UPCGDataCollectionExporter *this,FVTableHelper *param_1)

{
  UPCGAssetExporter::UPCGAssetExporter((UPCGAssetExporter *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGDataCollectionExporter__6B_;
  (this->Data).TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).TaggedData.ArrayNum = 0;
  (this->Data).TaggedData.ArrayMax = 0;
  (this->Data).bCancelExecutionOnEmpty = false;
  (this->Data).bCancelExecution = false;
  (this->Data).DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).DataCrcs.ArrayNum = 0;
  (this->Data).DataCrcs.ArrayMax = 0;
  (this->Data).InactiveOutputPinBitmask = 0;
  return this;
}

// UPCGDataCollectionExporter @ 1499c3610

UPCGDataCollectionExporter * __thiscall
UPCGDataCollectionExporter::UPCGDataCollectionExporter
          (UPCGDataCollectionExporter *this,FObjectInitializer *param_1)

{
  UPCGAssetExporter::UPCGAssetExporter((UPCGAssetExporter *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGDataCollectionExporter__6B_;
  (this->Data).TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).TaggedData.ArrayNum = 0;
  (this->Data).TaggedData.ArrayMax = 0;
  (this->Data).bCancelExecutionOnEmpty = false;
  (this->Data).bCancelExecution = false;
  (this->Data).DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).DataCrcs.ArrayNum = 0;
  (this->Data).DataCrcs.ArrayMax = 0;
  (this->Data).InactiveOutputPinBitmask = 0;
  return this;
}

// ~UPCGDataCollectionExporter @ 1499c6430

void __thiscall
UPCGDataCollectionExporter::~UPCGDataCollectionExporter(UPCGDataCollectionExporter *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGDataCollectionExporter__6B_;
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
  UPCGAssetExporter::~UPCGAssetExporter((UPCGAssetExporter *)this);
  return;
}

// ExportAsset @ 1499f1aa0

bool __thiscall
UPCGDataCollectionExporter::ExportAsset
          (UPCGDataCollectionExporter *this,FString *param_1,UPCGDataAsset *param_2)

{
  FPCGDataCollection::operator=(&param_2->Data,&this->Data);
  return true;
}

// GetPrivateStaticClass @ 1499fafd0

UClass * __cdecl UPCGDataCollectionExporter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataCollectionExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataCollectionExporter",
               &Z_Registration_Info_UClass_UPCGDataCollectionExporter.InnerSingleton,
               StaticRegisterNativesUPCGDataCollectionExporter,0x58,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGDataCollectionExporter>,
               InternalVTableHelperCtorCaller<UPCGDataCollectionExporter>,local_res8,
               UPCGAssetExporter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataCollectionExporter.InnerSingleton;
}

// StaticRegisterNativesUPCGDataCollectionExporter @ 149a0ffc0

void __cdecl UPCGDataCollectionExporter::StaticRegisterNativesUPCGDataCollectionExporter(void)

{
  return;
}

// UpdateAsset @ 149a118e0

UPackage * __thiscall
UPCGDataCollectionExporter::UpdateAsset(UPCGDataCollectionExporter *this,FAssetData *param_1)

{
  return (UPackage *)0x0;
}

