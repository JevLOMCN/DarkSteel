// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 32

// StaticClass @ 14b2e8550

UClass * __cdecl UMetaSoundPatch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundPatch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundPatch",
               &Z_Registration_Info_UClass_UMetaSoundPatch.InnerSingleton,
               StaticRegisterNativesUMetaSoundPatch,0x308,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UMetaSoundPatch>,InternalVTableHelperCtorCaller<UMetaSoundPatch>
               ,local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundPatch.InnerSingleton;
}

// UMetaSoundPatch @ 14b34c520

UMetaSoundPatch * __thiscall
UMetaSoundPatch::UMetaSoundPatch(UMetaSoundPatch *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 10;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&_vftable__for__FMetasoundAssetBase__;
  this->_padding_ = (longlong)&_vftable__for__IMetaSoundDocumentInterface__;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 1;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FMetasoundFrontendDocument::FMetasoundFrontendDocument(&this->RootMetaSoundDocument);
  *(undefined8 *)&(this->ReferencedAssetClassKeys).Elements = 0;
  *(undefined8 *)&(this->ReferencedAssetClassKeys).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReferencedAssetClassKeys).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReferencedAssetClassKeys).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferencedAssetClassKeys).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencedAssetClassKeys).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferencedAssetClassKeys).Elements.field_0x34 = 0;
  (this->ReferencedAssetClassKeys).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReferencedAssetClassKeys).HashSize = 0;
  *(undefined8 *)&(this->ReferencedAssetClassObjects).Elements = 0;
  *(undefined8 *)&(this->ReferencedAssetClassObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReferencedAssetClassObjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReferencedAssetClassObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferencedAssetClassObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencedAssetClassObjects).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferencedAssetClassObjects).Elements.field_0x34 = 0;
  (this->ReferencedAssetClassObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReferencedAssetClassObjects).HashSize = 0;
  *(undefined8 *)&(this->ReferenceAssetClassCache).Elements = 0;
  *(undefined8 *)&(this->ReferenceAssetClassCache).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReferenceAssetClassCache).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReferenceAssetClassCache).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferenceAssetClassCache).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferenceAssetClassCache).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferenceAssetClassCache).Elements.field_0x34 = 0;
  (this->ReferenceAssetClassCache).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReferenceAssetClassCache).HashSize = 0;
  this->bIsBuilderActive = false;
  return this;
}

// UMetaSoundPatch @ 14b34c670

UMetaSoundPatch * __thiscall
UMetaSoundPatch::UMetaSoundPatch(UMetaSoundPatch *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)((longlong)&this->_padding_ + 1) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FMetasoundAssetBase__;
  this->_padding_ = (longlong)&_vftable__for__IMetaSoundDocumentInterface__;
  *(undefined1 *)&this->_padding_ = 10;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 1;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FMetasoundFrontendDocument::FMetasoundFrontendDocument(&this->RootMetaSoundDocument);
  *(undefined8 *)&(this->ReferencedAssetClassKeys).Elements = 0;
  *(undefined8 *)&(this->ReferencedAssetClassKeys).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReferencedAssetClassKeys).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReferencedAssetClassKeys).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferencedAssetClassKeys).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencedAssetClassKeys).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferencedAssetClassKeys).Elements.field_0x34 = 0;
  (this->ReferencedAssetClassKeys).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReferencedAssetClassKeys).HashSize = 0;
  *(undefined8 *)&(this->ReferencedAssetClassObjects).Elements = 0;
  *(undefined8 *)&(this->ReferencedAssetClassObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReferencedAssetClassObjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReferencedAssetClassObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferencedAssetClassObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencedAssetClassObjects).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferencedAssetClassObjects).Elements.field_0x34 = 0;
  (this->ReferencedAssetClassObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReferencedAssetClassObjects).HashSize = 0;
  *(undefined8 *)&(this->ReferenceAssetClassCache).Elements = 0;
  *(undefined8 *)&(this->ReferenceAssetClassCache).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReferenceAssetClassCache).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReferenceAssetClassCache).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferenceAssetClassCache).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferenceAssetClassCache).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferenceAssetClassCache).Elements.field_0x34 = 0;
  (this->ReferenceAssetClassCache).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReferenceAssetClassCache).HashSize = 0;
  this->bIsBuilderActive = false;
  *(undefined4 *)&(this->RootMetaSoundDocument).RootGraph._padding_ = 0x4d657461;
  *(undefined4 *)((longlong)&(this->RootMetaSoundDocument).RootGraph._padding_ + 4) = 0x536f756e;
  *(undefined4 *)&(this->RootMetaSoundDocument).RootGraph._padding_ = 0x64506174;
  *(undefined4 *)((longlong)&(this->RootMetaSoundDocument).RootGraph._padding_ + 4) = 0x63680000;
  return this;
}

// ~UMetaSoundPatch @ 14b352570

void __thiscall UMetaSoundPatch::~UMetaSoundPatch(UMetaSoundPatch *this)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FMetasoundAssetBase__;
  this->_padding_ = (longlong)&_vftable__for__IMetaSoundDocumentInterface__;
  (this->ReferenceAssetClassCache).HashSize = 0;
  FVar1 = (this->ReferenceAssetClassCache).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReferenceAssetClassCache).Elements);
  (this->ReferencedAssetClassObjects).HashSize = 0;
  FVar1 = (this->ReferencedAssetClassObjects).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReferencedAssetClassObjects).Elements);
  (this->ReferencedAssetClassKeys).HashSize = 0;
  FVar1 = (this->ReferencedAssetClassKeys).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReferencedAssetClassKeys).Elements);
  FMetasoundFrontendDocument::~FMetasoundFrontendDocument(&this->RootMetaSoundDocument);
  this->_padding_ = (longlong)&___7IInterface__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 14b366080

void __thiscall UMetaSoundPatch::BeginDestroy(UMetaSoundPatch *this)

{
  FMetasoundAssetBase::OnNotifyBeginDestroy((FMetasoundAssetBase *)&this->_padding_);
  UObject::BeginDestroy((UObject *)this);
  return;
}

// ConformObjectToDocument @ 14b3692b0

bool __thiscall UMetaSoundPatch::ConformObjectToDocument(UMetaSoundPatch *this)

{
  return false;
}

// CreateProxyData @ 14b38c550

TSharedPtr<Audio::IProxyData,1> * __thiscall
UMetaSoundPatch::CreateProxyData
          (UMetaSoundPatch *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,
          FProxyDataInitParams *param_1)

{
  code *pcVar1;
  UObject *pUVar2;
  bool bVar3;
  UClass *this_00;
  TArrayView<FGuid_const_,int> *pTVar4;
  TArrayView<FGuid_const_,int> local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  ulonglong uStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ulonglong local_10;
  
  bVar3 = FMetasoundAssetBase::IsRegistered((FMetasoundAssetBase *)this);
  if (!bVar3) {
    local_38 = 0x100;
    pcVar1 = *(code **)(this->_padding_ + 0x18);
    uStack_30 = (FGuid *)0x0;
    uStack_28 = uStack_28 & 0xffffffff00000000;
    this_00 = UMetaSoundSettings::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar2 != (UObject *)0x0) {
      local_38 = CONCAT13(pUVar2[1].field_0x10,(undefined3)local_38);
      pTVar4 = UMetaSoundSettings::GetPageOrder(&local_48);
      uStack_30 = pTVar4->DataPtr;
      uStack_28 = *(ulonglong *)&pTVar4->ArrayNum;
    }
    local_20 = local_38;
    uStack_1c = uStack_34;
    uStack_18 = (undefined4)uStack_30;
    uStack_14 = uStack_30._4_4_;
    local_10 = uStack_28;
    (*pcVar1)(this,&local_20);
  }
  FMetasoundAssetBase::CreateProxyData((FMetasoundAssetBase *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetAssetPathChecked @ 14b3ad280

FTopLevelAssetPath * __thiscall
UMetaSoundPatch::GetAssetPathChecked
          (UMetaSoundPatch *this,FTopLevelAssetPath *__return_storage_ptr__)

{
  undefined1 *puVar1;
  bool bVar2;
  UObject *local_res8;
  
  puVar1 = &this[-1].ReferencedAssetClassObjects.Elements.field_0x30;
  (__return_storage_ptr__->PackageName).ComparisonIndex = 0;
  (__return_storage_ptr__->PackageName).Number = 0;
  (__return_storage_ptr__->AssetName).ComparisonIndex = 0;
  (__return_storage_ptr__->AssetName).Number = 0;
  bVar2 = FTopLevelAssetPath::TrySetPath(__return_storage_ptr__,(UObject *)puVar1);
  if (!bVar2) {
    local_res8 = (UObject *)puVar1;
    `Metasound::Engine::FAssetHelper::GetAssetPathChecked<UMetaSoundPatch_const_>'::__l2::<lambda_1>
    ::operator()(&local_res8);
  }
  if (__return_storage_ptr__->PackageName == (FName)0x0) {
    local_res8 = (UObject *)puVar1;
    `Metasound::Engine::FAssetHelper::GetAssetPathChecked<UMetaSoundPatch_const_>'::__l2::<lambda_2>
    ::operator()(&local_res8);
  }
  return __return_storage_ptr__;
}

// GetAssetRegistryTags @ 14b3ad360

void __thiscall
UMetaSoundPatch::GetAssetRegistryTags(UMetaSoundPatch *this,FAssetRegistryTagsContext param_1)

{
  code *pcVar1;
  IMetaSoundDocumentInterface *pIVar2;
  bool bVar3;
  FAssetRegistryTagsContext FVar4;
  FAssetRegistryTagsContext local_res8;
  FMetaSoundAssetClassInfo local_48;
  
  FVar4.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext(&local_res8,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar4);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UMetaSoundPatch *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  pIVar2 = (IMetaSoundDocumentInterface *)&this->_padding_;
  if ((this == (UMetaSoundPatch *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("MetaSound",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundEngineAsset.h"
                         ,0xcf,L""), pIVar2 = (IMetaSoundDocumentInterface *)0x0, bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->_padding_ & 0x50) == 0) {
    Metasound::Frontend::FMetaSoundAssetClassInfo::FMetaSoundAssetClassInfo(&local_48,pIVar2);
    Metasound::Frontend::FMetaSoundAssetClassInfo::ExportToContext
              (&local_48,(FAssetRegistryTagsContext *)param_1.Data);
  }
  return;
}

// GetAsyncReferencedAssetClassPaths @ 14b3ad4d0

TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> * __thiscall
UMetaSoundPatch::GetAsyncReferencedAssetClassPaths(UMetaSoundPatch *this)

{
  return (TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *)
         &(this->ReferencedAssetClassObjects).Elements.field_0x28;
}

// GetBaseMetaSoundUClass @ 14b3ae150

UClass * __thiscall UMetaSoundPatch::GetBaseMetaSoundUClass(UMetaSoundPatch *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundPatch.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundPatch",
               &Z_Registration_Info_UClass_UMetaSoundPatch.InnerSingleton,
               StaticRegisterNativesUMetaSoundPatch,0x308,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UMetaSoundPatch>,InternalVTableHelperCtorCaller<UMetaSoundPatch>
               ,aFStackX_8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundPatch.InnerSingleton;
}

// GetBuilderUClass @ 14b3ae3e0

UClass * __thiscall UMetaSoundPatch::GetBuilderUClass(UMetaSoundPatch *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundPatchBuilder.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundPatchBuilder",
               &Z_Registration_Info_UClass_UMetaSoundPatchBuilder.InnerSingleton,
               UMetaSoundPatchBuilder::StaticRegisterNativesUMetaSoundPatchBuilder,0xa8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMetaSoundPatchBuilder>,
               InternalVTableHelperCtorCaller<UMetaSoundPatchBuilder>,aFStackX_8,
               UMetaSoundBuilderBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundPatchBuilder.InnerSingleton;
}

// GetConstDocument @ 14b3ae970

FMetasoundFrontendDocument * __thiscall UMetaSoundPatch::GetConstDocument(UMetaSoundPatch *this)

{
  return (FMetasoundFrontendDocument *)&this->_padding_;
}

// GetDefaultAccessFlags @ 14b3aee30

/* WARNING: Enum "EMetasoundFrontendClassAccessFlags": Some values do not have unique names */

EMetasoundFrontendClassAccessFlags __thiscall
UMetaSoundPatch::GetDefaultAccessFlags(UMetaSoundPatch *this)

{
  return Default;
}

// GetDocument @ 14b3b3fd0

FMetasoundFrontendDocument * __thiscall UMetaSoundPatch::GetDocument(UMetaSoundPatch *this)

{
  return (FMetasoundFrontendDocument *)&this->_padding_;
}

// GetDocumentAccessPtr @ 14b3b3ff0

FDocumentAccessPtr * __thiscall
UMetaSoundPatch::GetDocumentAccessPtr
          (UMetaSoundPatch *this,FDocumentAccessPtr *__return_storage_ptr__)

{
  IDocumentBuilderRegistry *pIVar1;
  
  pIVar1 = Metasound::Frontend::IDocumentBuilderRegistry::Get();
  if (pIVar1 != (IDocumentBuilderRegistry *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x30))
              (pIVar1,&(this->RootMetaSoundDocument).Interfaces.Hash.SecondaryData);
  }
  Metasound::Frontend::
  MakeAccessPtr<Metasound::Frontend::FDocumentAccessPtr,FMetasoundFrontendDocument>
            (__return_storage_ptr__,(FAccessPoint *)&this->_padding_,
             (FMetasoundFrontendDocument *)&this->_padding_);
  return __return_storage_ptr__;
}

// GetDocumentConstAccessPtr @ 14b3b4090

FConstDocumentAccessPtr * __thiscall
UMetaSoundPatch::GetDocumentConstAccessPtr
          (UMetaSoundPatch *this,FConstDocumentAccessPtr *__return_storage_ptr__)

{
  Metasound::Frontend::
  MakeAccessPtr<Metasound::Frontend::FConstDocumentAccessPtr,FMetasoundFrontendDocument_const_>
            (__return_storage_ptr__,(FAccessPoint *)&this->_padding_,
             (FMetasoundFrontendDocument *)&this->_padding_);
  return __return_storage_ptr__;
}

// GetOwningAsset @ 14b3bee90

UObject * __thiscall UMetaSoundPatch::GetOwningAsset(UMetaSoundPatch *this)

{
  return (UObject *)&this[-1].ReferenceAssetClassCache.Elements.field_0x30;
}

// GetOwningAsset @ 14b3beea0

UObject * __thiscall UMetaSoundPatch::GetOwningAsset(UMetaSoundPatch *this)

{
  return (UObject *)&this[-1].ReferenceAssetClassCache.Elements.field_0x30;
}

// GetPrivateStaticClass @ 14b3bf420

UClass * __cdecl UMetaSoundPatch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundPatch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundPatch",
               &Z_Registration_Info_UClass_UMetaSoundPatch.InnerSingleton,
               StaticRegisterNativesUMetaSoundPatch,0x308,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UMetaSoundPatch>,InternalVTableHelperCtorCaller<UMetaSoundPatch>
               ,local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundPatch.InnerSingleton;
}

// GetReferencedAssetClassKeys @ 14b3bfd10

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
UMetaSoundPatch::GetReferencedAssetClassKeys(UMetaSoundPatch *this)

{
  return (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
         &(this->RootMetaSoundDocument).Subgraphs;
}

// GetReferencedAssets @ 14b3bfd30

TArray<FMetasoundAssetBase_*,TSizedDefaultAllocator<32>_> * __thiscall
UMetaSoundPatch::GetReferencedAssets
          (UMetaSoundPatch *this,
          TArray<FMetasoundAssetBase_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  Metasound::Engine::FAssetHelper::GetReferencedAssets<UMetaSoundPatch>
            (__return_storage_ptr__,
             (UMetaSoundPatch *)&this[-1].ReferenceAssetClassCache.Elements.field_0x30);
  return __return_storage_ptr__;
}

// IsActivelyBuilding @ 14b3c7eb0

bool __thiscall UMetaSoundPatch::IsActivelyBuilding(UMetaSoundPatch *this)

{
  return (bool)(this->ReferencedAssetClassObjects).Elements.field_0x28;
}

// OnAsyncReferencedAssetsLoaded @ 14b3c9e70

void __thiscall
UMetaSoundPatch::OnAsyncReferencedAssetsLoaded
          (UMetaSoundPatch *this,TArray<FMetasoundAssetBase_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  FName FVar4;
  uint uVar5;
  uint uVar6;
  UObject *pUVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  UObject *local_res8;
  TObjectPtr<UObject> local_res10;
  FSoftObjectPath local_58;
  
  pFVar9 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMetasoundAssetBase_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar9 == pFVar1) break;
    if (*(longlong **)pFVar9 != (longlong *)0x0) {
      pUVar7 = (UObject *)(**(code **)(**(longlong **)pFVar9 + 0x50))();
      if (pUVar7 != (UObject *)0x0) {
        local_res8 = pUVar7;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
        Emplace<TObjectPtr<UObject>_>
                  ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                    *)&(this->ReferencedAssetClassKeys).Elements.field_0x28,&local_res10,
                   (bool *)&local_res8);
        local_58.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_58.AssetPath.PackageName.Number = 0;
        local_58.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_58.AssetPath.AssetName.Number = 0;
        local_58.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.SubPathString.Data.ArrayNum = 0;
        local_58.SubPathString.Data.ArrayMax = 0;
        FSoftObjectPath::SetPath(&local_58,pUVar7);
        FVar4 = local_58.AssetPath.AssetName;
        if (*(int *)&(this->ReferencedAssetClassObjects).Elements.field_0x30 !=
            *(int *)&(this->ReferenceAssetClassCache).Elements.field_0xc) {
          uVar5 = ::GetTypeHash(local_58.AssetPath.AssetName.ComparisonIndex.Value);
          FVar3 = local_58.AssetPath.PackageName;
          uVar6 = ::GetTypeHash(local_58.AssetPath.PackageName.ComparisonIndex.Value);
          uVar6 = uVar6 + FVar3.Number;
          uVar6 = uVar6 * 0x40 + -0x61c88647 + uVar5 + FVar4.Number + (uVar6 >> 2) ^ uVar6;
          if (1 < local_58.SubPathString.Data.ArrayNum) {
            iVar8 = local_58.SubPathString.Data.ArrayNum + -1;
            if (local_58.SubPathString.Data.ArrayNum == 0) {
              iVar8 = 0;
            }
            uVar5 = FCrc::Strihash_DEPRECATED<char8_t>
                              (iVar8,(uchar *)local_58.SubPathString.Data.AllocatorInstance.Data);
            uVar6 = uVar6 ^ uVar5 + 0x9e3779b9 + uVar6 * 0x40 + (uVar6 >> 2);
          }
          TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::
          RemoveImpl<FSoftObjectPath>
                    ((TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>
                      *)&(this->ReferencedAssetClassObjects).Elements.field_0x28,uVar6,&local_58);
        }
        if (local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
        }
      }
    }
    pFVar9 = pFVar9 + 8;
  }
  return;
}

// OnBeginActiveBuilder @ 14b3ca1b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMetaSoundPatch::OnBeginActiveBuilder(UMetaSoundPatch *this)

{
  bool bVar1;
  FGraphClassRegistryKey *pFVar2;
  INodeClassRegistry *pIVar3;
  FString local_58;
  FGraphClassRegistryKey local_48;
  
  if (((this->ReferencedAssetClassObjects).Elements.field_0x28 != '\0') &&
     (1 < (byte)LogMetaSound._0_1_)) {
    FMetasoundAssetBase::GetOwningAssetName
              ((FMetasoundAssetBase *)&this[-1].ReferenceAssetClassCache.Elements.field_0x8,
               &local_58);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  pFVar2 = FMetasoundAssetBase::GetGraphRegistryKey
                     ((FMetasoundAssetBase *)&this[-1].ReferenceAssetClassCache.Elements.field_0x8);
  local_48.NodeKey.Type = (pFVar2->NodeKey).Type;
  local_48.NodeKey._1_3_ = *(undefined3 *)&(pFVar2->NodeKey).field_0x1;
  local_48.NodeKey.ClassName.Namespace.ComparisonIndex.Value =
       (pFVar2->NodeKey).ClassName.Namespace.ComparisonIndex.Value;
  local_48.NodeKey.ClassName._4_8_ = *(undefined8 *)&(pFVar2->NodeKey).ClassName.Namespace.Number;
  local_48.NodeKey.ClassName._12_8_ = *(undefined8 *)&(pFVar2->NodeKey).ClassName.Name.Number;
  local_48.NodeKey._24_8_ = *(undefined8 *)&(pFVar2->NodeKey).ClassName.Variant.Number;
  local_48._32_8_ = *(undefined8 *)&(pFVar2->NodeKey).Version.Minor;
  local_48.AssetPath._4_8_ = *(undefined8 *)&(pFVar2->AssetPath).PackageName.Number;
  local_48._48_8_ = *(undefined8 *)&(pFVar2->AssetPath).AssetName.Number;
  bVar1 = Metasound::Frontend::FGraphClassRegistryKey::IsValid(&local_48);
  if (bVar1) {
    pIVar3 = Metasound::Frontend::INodeClassRegistry::Get();
    (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,&local_48);
  }
  (this->ReferencedAssetClassObjects).Elements.field_0x28 = 1;
  return;
}

// OnFinishActiveBuilder @ 14b3ca590

void __thiscall UMetaSoundPatch::OnFinishActiveBuilder(UMetaSoundPatch *this)

{
  (this->ReferencedAssetClassObjects).Elements.field_0x28 = 0;
  return;
}

// PostLoad @ 14b3cd910

void __thiscall UMetaSoundPatch::PostLoad(UMetaSoundPatch *this)

{
  longlong lVar1;
  IMetaSoundAssetManager *pIVar2;
  
  UObject::PostLoad((UObject *)this);
  if (((uint)this->_padding_ >> 4 & 1) == 0) {
    lVar1 = (**(code **)(this->_padding_ + 0x30))(&this->_padding_);
    if (0 < *(int *)(lVar1 + 8) - *(int *)(lVar1 + 0x34)) {
      pIVar2 = Metasound::Frontend::IMetaSoundAssetManager::GetChecked();
                    /* WARNING: Could not recover jumptable at 0x00014b3cd958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*pIVar2 + 0xb0))
                (pIVar2,&this->_padding_,*(code **)((longlong)*pIVar2 + 0xb0));
      return;
    }
  }
  return;
}

// PreSave @ 14b3cda20

void __thiscall UMetaSoundPatch::PreSave(UMetaSoundPatch *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  pFVar1 = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data + 0x9c;
  *(int *)pFVar1 = *(int *)pFVar1 + 1;
  return;
}

// Serialize @ 14b3deec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UMetaSoundPatch::Serialize(UMetaSoundPatch *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive FStack_1a0;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&FStack_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  UObject::Serialize((UObject *)this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&FStack_1a0);
  return;
}

// Serialize @ 14b3deed0

void __thiscall UMetaSoundPatch::Serialize(UMetaSoundPatch *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// StaticRegisterNativesUMetaSoundPatch @ 14b3e14f0

void __cdecl UMetaSoundPatch::StaticRegisterNativesUMetaSoundPatch(void)

{
  return;
}

// _getUObject @ 14b3e8480

UObject * __thiscall UMetaSoundPatch::_getUObject(UMetaSoundPatch *this)

{
  return (UObject *)&this[-1].ReferencedAssetClassObjects.Elements.field_0x30;
}

