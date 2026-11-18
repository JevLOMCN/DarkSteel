// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 33

// StaticClass @ 14e3227d0

UClass * __cdecl UInterchangeFactoryBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeFactoryBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeFactoryBase",
               &Z_Registration_Info_UClass_UInterchangeFactoryBase.InnerSingleton,
               StaticRegisterNativesUInterchangeFactoryBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeFactoryBase>,
               InternalVTableHelperCtorCaller<UInterchangeFactoryBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeFactoryBase.InnerSingleton;
}

// UInterchangeFactoryBase @ 14e400f30

UInterchangeFactoryBase * __thiscall
UInterchangeFactoryBase::UInterchangeFactoryBase
          (UInterchangeFactoryBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeFactoryBase__6B_;
  (this->Results).field0_0x0.DebugPtr = (UInterchangeResultsContainer *)0x0;
  return this;
}

// UInterchangeFactoryBase @ 14e400f60

UInterchangeFactoryBase * __thiscall
UInterchangeFactoryBase::UInterchangeFactoryBase
          (UInterchangeFactoryBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeFactoryBase__6B_;
  (this->Results).field0_0x0.DebugPtr = (UInterchangeResultsContainer *)0x0;
  return this;
}

// ~UInterchangeFactoryBase @ 14e404a20

void __thiscall UInterchangeFactoryBase::~UInterchangeFactoryBase(UInterchangeFactoryBase *this)

{
  this->_padding_ = (longlong)&___7UInterchangeFactoryBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BackupSourceData @ 14e416a10

void __thiscall
UInterchangeFactoryBase::BackupSourceData(UInterchangeFactoryBase *this,UObject *param_1)

{
  return;
}

// BeginImportAsset_GameThread @ 14e416a20

FImportAssetResult * __thiscall
UInterchangeFactoryBase::BeginImportAsset_GameThread
          (UInterchangeFactoryBase *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  longlong lVar1;
  UObject *pUVar2;
  
  lVar1 = this->_padding_;
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  pUVar2 = (UObject *)(**(code **)(lVar1 + 0x2c0))(this,param_1);
  __return_storage_ptr__->ImportedObject = pUVar2;
  return __return_storage_ptr__;
}

// BuildObject_GameThread @ 14e416d80

void __thiscall
UInterchangeFactoryBase::BuildObject_GameThread
          (UInterchangeFactoryBase *this,FSetupObjectParams *param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                       ,0x132,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Cancel @ 14e417170

void __thiscall UInterchangeFactoryBase::Cancel(UInterchangeFactoryBase *this)

{
  return;
}

// ClearBackupSourceData @ 14e4172b0

void __thiscall
UInterchangeFactoryBase::ClearBackupSourceData(UInterchangeFactoryBase *this,UObject *param_1)

{
  return;
}

// CreatePayloadTasks @ 14e429be0

void __thiscall
UInterchangeFactoryBase::CreatePayloadTasks
          (UInterchangeFactoryBase *this,FImportAssetObjectParams *param_1,bool param_2,
          TArray<TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  return;
}

// EndImportAsset_GameThread @ 14e430910

FImportAssetResult * __thiscall
UInterchangeFactoryBase::EndImportAsset_GameThread
          (UInterchangeFactoryBase *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  UInterchangeFactoryBaseNode *this_00;
  bool bVar1;
  UObject *pUVar2;
  FSoftObjectPath local_28;
  
  this_00 = param_1->AssetNode;
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  if ((this_00 != (UInterchangeFactoryBaseNode *)0x0) &&
     (bVar1 = UInterchangeFactoryBaseNode::GetCustomReferenceObject(this_00,&local_28), bVar1)) {
    pUVar2 = FSoftObjectPath::TryLoad(&local_28,(FUObjectSerializeContext *)0x0);
    __return_storage_ptr__->ImportedObject = pUVar2;
  }
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ExecutePostResetObjectProperties @ 14e435030

void __thiscall
UInterchangeFactoryBase::ExecutePostResetObjectProperties
          (UInterchangeFactoryBase *this,UInterchangeBaseNodeContainer *param_1,
          UInterchangeFactoryBaseNode *param_2,UObject *param_3)

{
  return;
}

// ExecutePreResetObjectProperties @ 14e435040

void __thiscall
UInterchangeFactoryBase::ExecutePreResetObjectProperties
          (UInterchangeFactoryBase *this,UInterchangeBaseNodeContainer *param_1,
          UInterchangeFactoryBaseNode *param_2,UObject *param_3)

{
  return;
}

// ExecuteResetObjectProperties @ 14e435050

void __thiscall
UInterchangeFactoryBase::ExecuteResetObjectProperties
          (UInterchangeFactoryBase *this,UInterchangeBaseNodeContainer *param_1,
          UInterchangeFactoryBaseNode *param_2,UObject *param_3)

{
  UInterchangeFactoryBaseNode::ApplyAllCustomAttributeToObject(param_2,param_3);
  return;
}

// FinalizeObject_GameThread @ 14e4357b0

void __thiscall
UInterchangeFactoryBase::FinalizeObject_GameThread
          (UInterchangeFactoryBase *this,FSetupObjectParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                       ,0x142,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetFactoryAssetType @ 14e43c0d0

EInterchangeFactoryAssetType __thiscall
UInterchangeFactoryBase::GetFactoryAssetType(UInterchangeFactoryBase *this)

{
  return None;
}

// GetFactoryClass @ 14e43c0e0

UClass * __thiscall UInterchangeFactoryBase::GetFactoryClass(UInterchangeFactoryBase *this)

{
  return (UClass *)0x0;
}

// GetObjectToReimport @ 14e441410

UObject * __thiscall
UInterchangeFactoryBase::GetObjectToReimport
          (UInterchangeFactoryBase *this,UObject *param_1,UInterchangeFactoryBaseNode *param_2,
          FString *param_3,FString *param_4,FString *param_5)

{
  return param_1;
}

// GetPrivateStaticClass @ 14e441890

UClass * __cdecl UInterchangeFactoryBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeFactoryBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeFactoryBase",
               &Z_Registration_Info_UClass_UInterchangeFactoryBase.InnerSingleton,
               StaticRegisterNativesUInterchangeFactoryBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeFactoryBase>,
               InternalVTableHelperCtorCaller<UInterchangeFactoryBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeFactoryBase.InnerSingleton;
}

// GetSourceFilenames @ 14e442a10

bool __thiscall
UInterchangeFactoryBase::GetSourceFilenames
          (UInterchangeFactoryBase *this,UObject *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// ImportAssetObject_Async @ 14e446bb0

UObject * __thiscall
UInterchangeFactoryBase::ImportAssetObject_Async
          (UInterchangeFactoryBase *this,FImportAssetObjectParams *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FSoftObjectPath local_28;
  
  pUVar2 = (UObject *)0x0;
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  if ((param_1->AssetNode != (UInterchangeFactoryBaseNode *)0x0) &&
     (bVar1 = UInterchangeFactoryBaseNode::GetCustomReferenceObject(param_1->AssetNode,&local_28),
     bVar1)) {
    pUVar2 = FSoftObjectPath::TryLoad(&local_28,(FUObjectSerializeContext *)0x0);
  }
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return pUVar2;
}

// ImportAssetObject_GameThread @ 14e446c20

UObject * __thiscall
UInterchangeFactoryBase::ImportAssetObject_GameThread
          (UInterchangeFactoryBase *this,FImportAssetObjectParams *param_1)

{
  return (UObject *)0x0;
}

// ImportAsset_Async @ 14e446c30

FImportAssetResult * __thiscall
UInterchangeFactoryBase::ImportAsset_Async
          (UInterchangeFactoryBase *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  longlong lVar1;
  UObject *pUVar2;
  
  lVar1 = this->_padding_;
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  pUVar2 = (UObject *)(**(code **)(lVar1 + 0x2d8))(this,param_1);
  __return_storage_ptr__->ImportedObject = pUVar2;
  return __return_storage_ptr__;
}

// ImportSceneObject_GameThread @ 14e446c80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall
UInterchangeFactoryBase::ImportSceneObject_GameThread
          (UInterchangeFactoryBase *this,FImportSceneObjectsParams *param_1)

{
  return (UObject *)0x0;
}

// ReinstateSourceData @ 14e451ba0

void __thiscall
UInterchangeFactoryBase::ReinstateSourceData(UInterchangeFactoryBase *this,UObject *param_1)

{
  return;
}

// SetReimportSourceIndex @ 14e45f790

bool __thiscall
UInterchangeFactoryBase::SetReimportSourceIndex
          (UInterchangeFactoryBase *this,UObject *param_1,int param_2)

{
  return false;
}

// SetSourceFilename @ 14e45f9f0

bool __thiscall
UInterchangeFactoryBase::SetSourceFilename
          (UInterchangeFactoryBase *this,UObject *param_1,FString *param_2,int param_3)

{
  return false;
}

// SetupObject_GameThread @ 14e45fbb0

void __thiscall
UInterchangeFactoryBase::SetupObject_GameThread
          (UInterchangeFactoryBase *this,FSetupObjectParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                       ,0x125,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// StaticRegisterNativesUInterchangeFactoryBase @ 14e45fef0

void __cdecl UInterchangeFactoryBase::StaticRegisterNativesUInterchangeFactoryBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeFactoryBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetFactoryAssetType @ 14e46c6e0

void __cdecl
UInterchangeFactoryBase::execGetFactoryAssetType(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2b8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetFactoryClass @ 14e46c720

void __cdecl
UInterchangeFactoryBase::execGetFactoryClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2b0))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetSourceFilenames @ 14e46e280

void __cdecl
UInterchangeFactoryBase::execGetSourceFilenames(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FString **ppFVar3;
  undefined8 local_res8;
  FString *local_18;
  undefined8 local_10;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_18 = (FString *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  ppFVar3 = &local_18;
  if ((FString **)param_2->MostRecentPropertyAddress != (FString **)0x0) {
    ppFVar3 = (FString **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x318))(param_1,local_res8,ppFVar3);
  *(undefined1 *)param_3 = uVar2;
  DestructItems<FString,int>(local_18,(int)local_10);
  if (local_18 != (FString *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execSetSourceFilename @ 14e4741d0

void __cdecl
UInterchangeFactoryBase::execSetSourceFilename(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  void *local_28;
  undefined8 local_20;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 800))(param_1,local_res10,&local_28,local_res8[0]);
  *(undefined1 *)param_3 = uVar2;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

