// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 6

// StaticClass @ 1431ff780

UClass * __cdecl UBuildPatchManifest::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBuildPatchManifest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/BuildPatchServices",L"BuildPatchManifest",
               &Z_Registration_Info_UClass_UBuildPatchManifest.InnerSingleton,
               StaticRegisterNativesUBuildPatchManifest,0x120,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBuildPatchManifest>,
               InternalVTableHelperCtorCaller<UBuildPatchManifest>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBuildPatchManifest.InnerSingleton;
}

// UBuildPatchManifest @ 1432250b0

UBuildPatchManifest * __thiscall
UBuildPatchManifest::UBuildPatchManifest(UBuildPatchManifest *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UBuildPatchManifest__6B_;
  (this->AppName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AppName).Data.ArrayNum = 0;
  (this->AppName).Data.ArrayMax = 0;
  (this->BuildVersion).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuildVersion).Data.ArrayNum = 0;
  (this->BuildVersion).Data.ArrayMax = 0;
  (this->LaunchExe).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LaunchExe).Data.ArrayNum = 0;
  (this->LaunchExe).Data.ArrayMax = 0;
  (this->LaunchCommand).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LaunchCommand).Data.ArrayNum = 0;
  (this->LaunchCommand).Data.ArrayMax = 0;
  *(undefined8 *)&(this->PrereqIds).Elements = 0;
  *(undefined8 *)&(this->PrereqIds).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PrereqIds).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PrereqIds).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PrereqIds).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PrereqIds).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PrereqIds).Elements.field_0x30 = 0xffffffff;
  (this->PrereqIds).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PrereqIds).HashSize = 0;
  (this->PrereqName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrereqName).Data.ArrayNum = 0;
  (this->PrereqName).Data.ArrayMax = 0;
  (this->PrereqPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrereqPath).Data.ArrayNum = 0;
  (this->PrereqPath).Data.ArrayMax = 0;
  (this->PrereqArgs).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrereqArgs).Data.ArrayNum = 0;
  (this->PrereqArgs).Data.ArrayMax = 0;
  (this->FileManifestList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileManifestList).ArrayNum = 0;
  (this->FileManifestList).ArrayMax = 0;
  (this->ChunkList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunkList).ArrayNum = 0;
  (this->ChunkList).ArrayMax = 0;
  (this->CustomFields).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomFields).ArrayNum = 0;
  (this->CustomFields).ArrayMax = 0;
  return this;
}

// UBuildPatchManifest @ 143225190

UBuildPatchManifest * __thiscall
UBuildPatchManifest::UBuildPatchManifest(UBuildPatchManifest *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->ManifestFileVersion = 0xff;
  this->bIsFileData = false;
  this->_padding_ = (longlong)&___7UBuildPatchManifest__6B_;
  this->AppID = 0xffffffff;
  ::FString::FString(&this->AppName,L"");
  ::FString::FString(&this->BuildVersion,L"");
  ::FString::FString(&this->LaunchExe,L"");
  ::FString::FString(&this->LaunchCommand,L"");
  *(undefined8 *)&(this->PrereqIds).Elements.field_0x10 = 0;
  *(undefined8 *)&(this->PrereqIds).Elements.field_0x18 = 0;
  (this->PrereqIds).Hash.InlineData[0] = '\0';
  (this->PrereqIds).Hash.InlineData[1] = '\0';
  (this->PrereqIds).Hash.InlineData[2] = '\0';
  (this->PrereqIds).Hash.InlineData[3] = '\0';
  (this->PrereqIds).Hash._padding_ = 0;
  *(undefined8 *)&(this->PrereqIds).HashSize = 0;
  *(undefined8 *)&(this->PrereqIds).Elements = 0;
  *(undefined8 *)&(this->PrereqIds).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PrereqIds).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PrereqIds).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PrereqIds).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PrereqIds).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PrereqIds).Elements.field_0x34 = 0;
  (this->PrereqIds).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  ::FString::FString(&this->PrereqName,L"");
  ::FString::FString(&this->PrereqPath,L"");
  ::FString::FString(&this->PrereqArgs,L"");
  (this->FileManifestList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileManifestList).ArrayNum = 0;
  (this->FileManifestList).ArrayMax = 0;
  (this->ChunkList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunkList).ArrayNum = 0;
  (this->ChunkList).ArrayMax = 0;
  (this->CustomFields).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomFields).ArrayNum = 0;
  (this->CustomFields).ArrayMax = 0;
  return this;
}

// ~UBuildPatchManifest @ 1432294d0

void __thiscall UBuildPatchManifest::~UBuildPatchManifest(UBuildPatchManifest *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&___7UBuildPatchManifest__6B_;
  DestructItems<FCustomFieldData,int>
            ((FCustomFieldData *)(this->CustomFields).AllocatorInstance.Data,
             (this->CustomFields).ArrayNum);
  pFVar1 = (this->CustomFields).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChunkList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FFileManifestData,int>
            ((FFileManifestData *)(this->FileManifestList).AllocatorInstance.Data,
             (this->FileManifestList).ArrayNum);
  pFVar1 = (this->FileManifestList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PrereqArgs).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PrereqPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PrereqName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->PrereqIds).HashSize = 0;
  FVar2 = (this->PrereqIds).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PrereqIds).Elements);
  pFVar1 = (this->LaunchCommand).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LaunchExe).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BuildVersion).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AppName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1432571f0

UClass * __cdecl UBuildPatchManifest::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBuildPatchManifest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/BuildPatchServices",L"BuildPatchManifest",
               &Z_Registration_Info_UClass_UBuildPatchManifest.InnerSingleton,
               StaticRegisterNativesUBuildPatchManifest,0x120,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBuildPatchManifest>,
               InternalVTableHelperCtorCaller<UBuildPatchManifest>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBuildPatchManifest.InnerSingleton;
}

// StaticRegisterNativesUBuildPatchManifest @ 1432694f0

void __cdecl UBuildPatchManifest::StaticRegisterNativesUBuildPatchManifest(void)

{
  return;
}

