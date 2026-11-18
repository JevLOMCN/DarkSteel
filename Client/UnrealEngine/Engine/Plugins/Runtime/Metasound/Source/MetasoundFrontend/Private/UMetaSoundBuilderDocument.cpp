// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 21

// StaticClass @ 14add56b0

UClass * __cdecl UMetaSoundBuilderDocument::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundBuilderDocument.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundFrontend",L"MetaSoundBuilderDocument",
               &Z_Registration_Info_UClass_UMetaSoundBuilderDocument.InnerSingleton,
               StaticRegisterNativesUMetaSoundBuilderDocument,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMetaSoundBuilderDocument>,
               InternalVTableHelperCtorCaller<UMetaSoundBuilderDocument>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundBuilderDocument.InnerSingleton;
}

// UMetaSoundBuilderDocument @ 14adde0b0

UMetaSoundBuilderDocument * __thiscall
UMetaSoundBuilderDocument::UMetaSoundBuilderDocument
          (UMetaSoundBuilderDocument *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMetaSoundDocumentInterface__;
  FMetasoundFrontendDocument::FMetasoundFrontendDocument(&this->Document);
  (this->MetaSoundUClass).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->BuilderUClass).field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UMetaSoundBuilderDocument @ 14adde100

UMetaSoundBuilderDocument * __thiscall
UMetaSoundBuilderDocument::UMetaSoundBuilderDocument
          (UMetaSoundBuilderDocument *this,FObjectInitializer *param_1)

{
  longlong lVar1;
  FGuid *pFVar2;
  FGuid local_18;
  
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMetaSoundDocumentInterface__;
  FMetasoundFrontendDocument::FMetasoundFrontendDocument(&this->Document);
  (this->MetaSoundUClass).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->BuilderUClass).field0_0x0.DebugPtr = (UClass *)0x0;
  pFVar2 = FGuid::NewGuid(&local_18);
  lVar1 = *(longlong *)&pFVar2->C;
  (this->Document).RootGraph._padding_ = *(longlong *)pFVar2;
  (this->Document).RootGraph._padding_ = lVar1;
  return this;
}

// ~UMetaSoundBuilderDocument @ 14addf450

void __thiscall
UMetaSoundBuilderDocument::~UMetaSoundBuilderDocument(UMetaSoundBuilderDocument *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMetaSoundDocumentInterface__;
  FMetasoundFrontendDocument::~FMetasoundFrontendDocument(&this->Document);
  this->_padding_ = (longlong)&___7IInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ConformObjectToDocument @ 14adf4e00

bool __thiscall UMetaSoundBuilderDocument::ConformObjectToDocument(UMetaSoundBuilderDocument *this)

{
  return false;
}

// Create @ 14adf5550

UMetaSoundBuilderDocument * __cdecl
UMetaSoundBuilderDocument::Create(IMetaSoundDocumentInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UMetaSoundBuilderDocument *pUVar4;
  FMetasoundFrontendDocument *pFVar5;
  UClass *pUVar6;
  
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UMetaSoundBuilderDocument>(pUVar3);
  if (pUVar4 == (UMetaSoundBuilderDocument *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DocObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                       ,0x305,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UMetaSoundBuilderDocument *)(*pcVar1)();
      return pUVar4;
    }
  }
  pFVar5 = (FMetasoundFrontendDocument *)(**(code **)((longlong)*param_1 + 0x18))(param_1);
  FMetasoundFrontendDocument::operator=(&pUVar4->Document,pFVar5);
  pUVar6 = (UClass *)(**(code **)((longlong)*param_1 + 0x20))(param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (pUVar4->MetaSoundUClass).field0_0x0.DebugPtr = pUVar6;
  pUVar6 = (UClass *)(**(code **)((longlong)*param_1 + 0x28))(param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (pUVar4->BuilderUClass).field0_0x0.DebugPtr = pUVar6;
  return pUVar4;
}

// Create @ 14adf5620

UMetaSoundBuilderDocument * __cdecl UMetaSoundBuilderDocument::Create(UClass *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UMetaSoundBuilderDocument *pUVar4;
  
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UMetaSoundBuilderDocument>(pUVar3);
  if (pUVar4 == (UMetaSoundBuilderDocument *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DocObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                       ,0x2fd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UMetaSoundBuilderDocument *)(*pcVar1)();
      return pUVar4;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (pUVar4->MetaSoundUClass).field0_0x0.DebugPtr = param_1;
  return pUVar4;
}

// GetAssetPathChecked @ 14adfa800

FTopLevelAssetPath * __thiscall
UMetaSoundBuilderDocument::GetAssetPathChecked
          (UMetaSoundBuilderDocument *this,FTopLevelAssetPath *__return_storage_ptr__)

{
  TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *pTVar1;
  bool bVar2;
  UObject *local_res8;
  
  pTVar1 = &this[-1].Document.Dependencies;
  (__return_storage_ptr__->PackageName).ComparisonIndex = 0;
  (__return_storage_ptr__->PackageName).Number = 0;
  (__return_storage_ptr__->AssetName).ComparisonIndex = 0;
  (__return_storage_ptr__->AssetName).Number = 0;
  bVar2 = FTopLevelAssetPath::TrySetPath(__return_storage_ptr__,(UObject *)pTVar1);
  if (!bVar2) {
    local_res8 = (UObject *)pTVar1;
    `UMetaSoundBuilderDocument::GetAssetPathChecked'::__l2::<lambda_1>::operator()(&local_res8);
  }
  if (__return_storage_ptr__->PackageName == (FName)0x0) {
    local_res8 = (UObject *)pTVar1;
    `UMetaSoundBuilderDocument::GetAssetPathChecked'::__l2::<lambda_2>::operator()(&local_res8);
  }
  return __return_storage_ptr__;
}

// GetBaseMetaSoundUClass @ 14adfa870

UClass * __thiscall
UMetaSoundBuilderDocument::GetBaseMetaSoundUClass(UMetaSoundBuilderDocument *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  
  if ((this->Document).Subgraphs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    return (UClass *)(this->Document).Subgraphs.AllocatorInstance.Data;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("MetaSoundUClass",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                     ,0x325,
                     L"BaseMetaSoundUClass must be set upon creation of UMetaSoundBuilderDocument instance"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UClass *)(*pcVar1)();
    return pUVar3;
  }
  return (UClass *)(this->Document).Subgraphs.AllocatorInstance.Data;
}

// GetBuilderUClass @ 14adfa950

UClass * __thiscall UMetaSoundBuilderDocument::GetBuilderUClass(UMetaSoundBuilderDocument *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  
  lVar1._0_4_ = (this->Document).Subgraphs.ArrayNum;
  lVar1._4_4_ = (this->Document).Subgraphs.ArrayMax;
  if (lVar1 != 0) {
    return *(UClass **)&(this->Document).Subgraphs.ArrayNum;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("BuilderUClass",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentBuilder.cpp"
                     ,0x32b,
                     L"BuilderUClass must be set upon creation of UMetaSoundBuilderDocument instance"
                    );
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UClass *)(*pcVar2)();
    return pUVar4;
  }
  return *(UClass **)&(this->Document).Subgraphs.ArrayNum;
}

// GetConstDocument @ 14adfbeb0

FMetasoundFrontendDocument * __thiscall
UMetaSoundBuilderDocument::GetConstDocument(UMetaSoundBuilderDocument *this)

{
  return (FMetasoundFrontendDocument *)&this->_padding_;
}

// GetDefaultAccessFlags @ 14adfc060

/* WARNING: Enum "EMetasoundFrontendClassAccessFlags": Some values do not have unique names */

EMetasoundFrontendClassAccessFlags __thiscall
UMetaSoundBuilderDocument::GetDefaultAccessFlags(UMetaSoundBuilderDocument *this)

{
  return None;
}

// GetDocument @ 14adfc5c0

FMetasoundFrontendDocument * __thiscall
UMetaSoundBuilderDocument::GetDocument(UMetaSoundBuilderDocument *this)

{
  return (FMetasoundFrontendDocument *)&this->_padding_;
}

// GetPrivateStaticClass @ 14ae00c70

UClass * __cdecl UMetaSoundBuilderDocument::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundBuilderDocument.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundFrontend",L"MetaSoundBuilderDocument",
               &Z_Registration_Info_UClass_UMetaSoundBuilderDocument.InnerSingleton,
               StaticRegisterNativesUMetaSoundBuilderDocument,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMetaSoundBuilderDocument>,
               InternalVTableHelperCtorCaller<UMetaSoundBuilderDocument>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundBuilderDocument.InnerSingleton;
}

// IsActivelyBuilding @ 14ae027a0

bool __thiscall UMetaSoundBuilderDocument::IsActivelyBuilding(UMetaSoundBuilderDocument *this)

{
  return true;
}

// OnBeginActiveBuilder @ 14ae03f30

void __thiscall UMetaSoundBuilderDocument::OnBeginActiveBuilder(UMetaSoundBuilderDocument *this)

{
  return;
}

// OnFinishActiveBuilder @ 14ae03f40

void __thiscall UMetaSoundBuilderDocument::OnFinishActiveBuilder(UMetaSoundBuilderDocument *this)

{
  return;
}

// StaticRegisterNativesUMetaSoundBuilderDocument @ 14ae0a730

void __cdecl UMetaSoundBuilderDocument::StaticRegisterNativesUMetaSoundBuilderDocument(void)

{
  return;
}

// _getUObject @ 14ae0c420

UObject * __thiscall UMetaSoundBuilderDocument::_getUObject(UMetaSoundBuilderDocument *this)

{
  return (UObject *)&this[-1].Document.Dependencies;
}

// operator() @ 15055db50

bool __thiscall
`UMetaSoundBuilderDocument::GetAssetPathChecked'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_3428680960856554732>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3428680960856554732>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15055dbba;
    }
  }
  bVar2 = false;
LAB_15055dbba:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15055de30

bool __thiscall
`UMetaSoundBuilderDocument::GetAssetPathChecked'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_3428680960856554731>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3428680960856554731>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15055de9a;
    }
  }
  bVar2 = false;
LAB_15055de9a:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

