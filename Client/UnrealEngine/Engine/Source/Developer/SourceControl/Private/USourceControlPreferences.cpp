// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 10

// StaticClass @ 146af52e0

UClass * __cdecl USourceControlPreferences::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceControlPreferences.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SourceControl",L"SourceControlPreferences",
               &Z_Registration_Info_UClass_USourceControlPreferences.InnerSingleton,
               StaticRegisterNativesUSourceControlPreferences,0xa8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Editor",
               InternalConstructor<USourceControlPreferences>,
               InternalVTableHelperCtorCaller<USourceControlPreferences>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceControlPreferences.InnerSingleton;
}

// USourceControlPreferences @ 146b00730

USourceControlPreferences * __thiscall
USourceControlPreferences::USourceControlPreferences
          (USourceControlPreferences *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->bEnableValidationTag = true;
  this->bShouldDeleteNewFilesOnRevert = true;
  this->_padding_ = (longlong)&___7USourceControlPreferences__6B_;
  (this->CollectionChangelistTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollectionChangelistTags).ArrayNum = 0;
  (this->CollectionChangelistTags).ArrayMax = 0;
  *(undefined8 *)&this->SpecificCollectionChangelistTags = 0;
  *(undefined8 *)&(this->SpecificCollectionChangelistTags).field_0x8 = 0;
  *(undefined8 *)&(this->SpecificCollectionChangelistTags).field_0x20 = 0;
  this->bEnableUncontrolledChangelists = true;
  *(undefined4 *)&(this->SpecificCollectionChangelistTags).field_0x28 = 0;
  *(undefined4 *)&(this->SpecificCollectionChangelistTags).field_0x2c = 0x80;
  *(undefined4 *)&(this->SpecificCollectionChangelistTags).field_0x34 = 0;
  *(undefined4 *)&(this->SpecificCollectionChangelistTags).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SpecificCollectionChangelistTags).field_0x40 = 0;
  *(undefined4 *)&(this->SpecificCollectionChangelistTags).field_0x48 = 0;
  this->bRequiresRevisionControlToRenameLocalizableAssets = false;
  return this;
}

// USourceControlPreferences @ 146b007b0

USourceControlPreferences * __thiscall
USourceControlPreferences::USourceControlPreferences
          (USourceControlPreferences *this,FObjectInitializer *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->bEnableValidationTag = true;
  this->bShouldDeleteNewFilesOnRevert = true;
  this->_padding_ = (longlong)&___7USourceControlPreferences__6B_;
  (this->CollectionChangelistTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollectionChangelistTags).ArrayNum = 0;
  (this->CollectionChangelistTags).ArrayMax = 0;
  *(undefined8 *)&this->SpecificCollectionChangelistTags = 0;
  *(undefined8 *)&(this->SpecificCollectionChangelistTags).field_0x8 = 0;
  *(undefined8 *)&(this->SpecificCollectionChangelistTags).field_0x20 = 0;
  this->bEnableUncontrolledChangelists = true;
  *(undefined4 *)&(this->SpecificCollectionChangelistTags).field_0x28 = 0;
  *(undefined4 *)&(this->SpecificCollectionChangelistTags).field_0x2c = 0x80;
  *(undefined4 *)&(this->SpecificCollectionChangelistTags).field_0x34 = 0;
  *(undefined4 *)&(this->SpecificCollectionChangelistTags).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SpecificCollectionChangelistTags).field_0x40 = 0;
  *(undefined4 *)&(this->SpecificCollectionChangelistTags).field_0x48 = 0;
  this->bRequiresRevisionControlToRenameLocalizableAssets = false;
  return this;
}

// ~USourceControlPreferences @ 146b013f0

void __thiscall
USourceControlPreferences::~USourceControlPreferences(USourceControlPreferences *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7USourceControlPreferences__6B_;
  *(undefined4 *)&(this->SpecificCollectionChangelistTags).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SpecificCollectionChangelistTags).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SpecificCollectionChangelistTags);
  DestructItems<FString,int>
            ((FString *)(this->CollectionChangelistTags).AllocatorInstance.Data,
             (this->CollectionChangelistTags).ArrayNum);
  pFVar2 = (this->CollectionChangelistTags).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// AreUncontrolledChangelistsEnabled @ 146b05090

bool __cdecl USourceControlPreferences::AreUncontrolledChangelistsEnabled(void)

{
  UClass *this;
  
  this = StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (bool)(this->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x12;
  }
  return (bool)(this->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x12;
}

// GetPrivateStaticClass @ 146b19370

UClass * __cdecl USourceControlPreferences::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceControlPreferences.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SourceControl",L"SourceControlPreferences",
               &Z_Registration_Info_UClass_USourceControlPreferences.InnerSingleton,
               StaticRegisterNativesUSourceControlPreferences,0xa8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Editor",
               InternalConstructor<USourceControlPreferences>,
               InternalVTableHelperCtorCaller<USourceControlPreferences>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceControlPreferences.InnerSingleton;
}

// IsValidationTagEnabled @ 146b1c3b0

bool __cdecl USourceControlPreferences::IsValidationTagEnabled(void)

{
  UClass *this;
  
  this = StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (bool)(this->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10;
  }
  return (bool)(this->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10;
}

// RequiresRevisionControlToRenameLocalizableAssets @ 146b23060

bool __cdecl USourceControlPreferences::RequiresRevisionControlToRenameLocalizableAssets(void)

{
  char cVar1;
  bool bVar2;
  ISourceControlModule *pIVar3;
  longlong *plVar4;
  FName *pFVar5;
  UClass *this;
  
  pIVar3 = ISourceControlModule::Get();
  cVar1 = (**(code **)((longlong)*pIVar3 + 0x70))(pIVar3);
  if (cVar1 != '\0') {
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x78))(pIVar3);
    pFVar5 = (FName *)(**(code **)(*plVar4 + 0x20))(plVar4);
    bVar2 = ::FName::Equals(*pFVar5,"Perforce");
    if (!bVar2) {
      return false;
    }
  }
  this = StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  if (*(char *)((this->ClassDefaultObject).field0_0x0.DebugPtr + 4) == '\0') {
    return false;
  }
  return true;
}

// ShouldDeleteNewFilesOnRevert @ 146b25950

bool __cdecl USourceControlPreferences::ShouldDeleteNewFilesOnRevert(void)

{
  UClass *this;
  
  this = StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (bool)(this->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x11;
  }
  return (bool)(this->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x11;
}

// StaticRegisterNativesUSourceControlPreferences @ 146b27460

void __cdecl USourceControlPreferences::StaticRegisterNativesUSourceControlPreferences(void)

{
  return;
}

