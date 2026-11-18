// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 57

// StaticClass @ 14e3228c0

UClass * __cdecl UInterchangePipelineBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangePipelineBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangePipelineBase",
               &Z_Registration_Info_UClass_UInterchangePipelineBase.InnerSingleton,
               StaticRegisterNativesUInterchangePipelineBase,0x128,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangePipelineBase>,
               InternalVTableHelperCtorCaller<UInterchangePipelineBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangePipelineBase.InnerSingleton;
}

// UInterchangePipelineBase @ 14e4013c0

UInterchangePipelineBase * __thiscall
UInterchangePipelineBase::UInterchangePipelineBase
          (UInterchangePipelineBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bAllowPropertyStatesEdition = true;
  this->bIsReimportContext = false;
  this->bIsShowEssentials = false;
  this->bFromReimportOrOverride = false;
  this->_padding_ = (longlong)&___7UInterchangePipelineBase__6B_;
  (this->DestinationName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DestinationName).Data.ArrayNum = 0;
  (this->DestinationName).Data.ArrayMax = 0;
  (this->ContentImportPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentImportPath).Data.ArrayNum = 0;
  (this->ContentImportPath).Data.ArrayMax = 0;
  (this->Results).field0_0x0.DebugPtr = (UInterchangeResultsContainer *)0x0;
  *(undefined8 *)&this->PropertiesStates = 0;
  *(undefined8 *)&(this->PropertiesStates).field_0x8 = 0;
  *(undefined8 *)&(this->PropertiesStates).field_0x20 = 0;
  *(undefined4 *)&(this->PropertiesStates).field_0x28 = 0;
  *(undefined4 *)&(this->PropertiesStates).field_0x2c = 0x80;
  *(undefined4 *)&(this->PropertiesStates).field_0x34 = 0;
  *(undefined4 *)&(this->PropertiesStates).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PropertiesStates).field_0x40 = 0;
  *(undefined4 *)&(this->PropertiesStates).field_0x48 = 0;
  *(undefined8 *)&this->CachePropertiesStates = 0;
  *(undefined8 *)&(this->CachePropertiesStates).field_0x8 = 0;
  *(undefined8 *)&(this->CachePropertiesStates).field_0x20 = 0;
  *(undefined4 *)&(this->CachePropertiesStates).field_0x28 = 0;
  *(undefined4 *)&(this->CachePropertiesStates).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachePropertiesStates).field_0x34 = 0;
  *(undefined4 *)&(this->CachePropertiesStates).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachePropertiesStates).field_0x40 = 0;
  *(undefined4 *)&(this->CachePropertiesStates).field_0x48 = 0;
  (this->CacheContextParam).ContextType = None;
  (this->CacheContextParam).ImportObjectType.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->CacheContextParam).ReimportAsset.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->CacheContextParam).BaseNodeContainer.field0_0x0.DebugPtr =
       (UInterchangeBaseNodeContainer *)0x0;
  (this->ConflictInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConflictInfos).ArrayNum = 0;
  (this->ConflictInfos).ArrayMax = 0;
  return this;
}

// UInterchangePipelineBase @ 14e4014b0

UInterchangePipelineBase * __thiscall
UInterchangePipelineBase::UInterchangePipelineBase
          (UInterchangePipelineBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bAllowPropertyStatesEdition = true;
  this->bIsReimportContext = false;
  this->bIsShowEssentials = false;
  this->bFromReimportOrOverride = false;
  this->_padding_ = (longlong)&___7UInterchangePipelineBase__6B_;
  (this->DestinationName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DestinationName).Data.ArrayNum = 0;
  (this->DestinationName).Data.ArrayMax = 0;
  (this->ContentImportPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentImportPath).Data.ArrayNum = 0;
  (this->ContentImportPath).Data.ArrayMax = 0;
  (this->Results).field0_0x0.DebugPtr = (UInterchangeResultsContainer *)0x0;
  *(undefined8 *)&this->PropertiesStates = 0;
  *(undefined8 *)&(this->PropertiesStates).field_0x8 = 0;
  *(undefined8 *)&(this->PropertiesStates).field_0x20 = 0;
  *(undefined4 *)&(this->PropertiesStates).field_0x28 = 0;
  *(undefined4 *)&(this->PropertiesStates).field_0x2c = 0x80;
  *(undefined4 *)&(this->PropertiesStates).field_0x34 = 0;
  *(undefined4 *)&(this->PropertiesStates).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PropertiesStates).field_0x40 = 0;
  *(undefined4 *)&(this->PropertiesStates).field_0x48 = 0;
  *(undefined8 *)&this->CachePropertiesStates = 0;
  *(undefined8 *)&(this->CachePropertiesStates).field_0x8 = 0;
  *(undefined8 *)&(this->CachePropertiesStates).field_0x20 = 0;
  *(undefined4 *)&(this->CachePropertiesStates).field_0x28 = 0;
  *(undefined4 *)&(this->CachePropertiesStates).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachePropertiesStates).field_0x34 = 0;
  *(undefined4 *)&(this->CachePropertiesStates).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachePropertiesStates).field_0x40 = 0;
  *(undefined4 *)&(this->CachePropertiesStates).field_0x48 = 0;
  (this->CacheContextParam).ContextType = None;
  (this->CacheContextParam).ImportObjectType.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->CacheContextParam).ReimportAsset.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->CacheContextParam).BaseNodeContainer.field0_0x0.DebugPtr =
       (UInterchangeBaseNodeContainer *)0x0;
  (this->ConflictInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConflictInfos).ArrayNum = 0;
  (this->ConflictInfos).ArrayMax = 0;
  return this;
}

// ~UInterchangePipelineBase @ 14e404b50

void __thiscall UInterchangePipelineBase::~UInterchangePipelineBase(UInterchangePipelineBase *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UInterchangePipelineBase__6B_;
  DestructItems<FInterchangeConflictInfo,int>
            ((FInterchangeConflictInfo *)(this->ConflictInfos).AllocatorInstance.Data,
             (this->ConflictInfos).ArrayNum);
  pFVar1 = (this->ConflictInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->CachePropertiesStates).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CachePropertiesStates).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelinePropertyStates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelinePropertyStates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelinePropertyStates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachePropertiesStates);
  *(undefined4 *)&(this->PropertiesStates).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PropertiesStates).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelinePropertyStates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelinePropertyStates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelinePropertyStates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PropertiesStates);
  pFVar1 = (this->ContentImportPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DestinationName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AdjustSettingsForContext @ 14e40ff20

void __thiscall
UInterchangePipelineBase::AdjustSettingsForContext
          (UInterchangePipelineBase *this,FInterchangePipelineContextParams *param_1)

{
  EInterchangePipelineContext EVar1;
  
  FInterchangePipelineContextParams::operator=(&this->CacheContextParam,param_1);
  TMap<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
  ::operator=(&this->CachePropertiesStates,&this->PropertiesStates);
  EVar1 = param_1->ContextType;
  this->bIsReimportContext = false;
  this->bAllowPropertyStatesEdition = EVar1 == None;
  EVar1 = param_1->ContextType;
  if ((EVar1 == AssetReimport) ||
     (((EVar1 - SceneReimport & 0xf9) == 0 && (EVar1 != AssetCustomMorphTargetReImport)))) {
    this->bIsReimportContext = true;
  }
  return;
}

// AdjustSettingsFromCache @ 14e40ff90

void __thiscall UInterchangePipelineBase::AdjustSettingsFromCache(UInterchangePipelineBase *this)

{
  TMap<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
  ::operator=(&this->PropertiesStates,&this->CachePropertiesStates);
                    /* WARNING: Could not recover jumptable at 0x00014e40ffbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c0))(this,&this->CacheContextParam);
  return;
}

// CanExecuteOnAnyThread @ 14e417060

bool __thiscall
UInterchangePipelineBase::CanExecuteOnAnyThread
          (UInterchangePipelineBase *this,EInterchangePipelineTask param_1)

{
  return true;
}

// DoesPropertyStatesExist @ 14e42be50

bool __thiscall
UInterchangePipelineBase::DoesPropertyStatesExist(UInterchangePipelineBase *this,FName param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->PropertiesStates).field_0x8 != *(int *)&(this->PropertiesStates).field_0x34) {
    puVar3 = *(undefined1 **)&(this->PropertiesStates).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->PropertiesStates).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->PropertiesStates).field_0x48 - 1U &
                              param_1.Number + uVar1) * 4);
    if (iVar2 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->PropertiesStates + (longlong)iVar2 * 0x18) == param_1)
        goto LAB_14e42becc;
        iVar2 = *(int *)(*(longlong *)&this->PropertiesStates + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_14e42becc:
  return iVar2 != -1;
}

// ExecuteExportPipeline @ 14e432740

void __thiscall
UInterchangePipelineBase::ExecuteExportPipeline
          (UInterchangePipelineBase *this,UInterchangeBaseNodeContainer *param_1)

{
  return;
}

// ExecutePipeline @ 14e434ff0

void __thiscall
UInterchangePipelineBase::ExecutePipeline
          (UInterchangePipelineBase *this,UInterchangeBaseNodeContainer *param_1,
          TArray<UInterchangeSourceData_*,TSizedDefaultAllocator<32>_> *param_2,FString *param_3)

{
  return;
}

// ExecutePostBroadcastPipeline @ 14e435000

void __thiscall
UInterchangePipelineBase::ExecutePostBroadcastPipeline
          (UInterchangePipelineBase *this,UInterchangeBaseNodeContainer *param_1,FString *param_2,
          UObject *param_3,bool param_4)

{
  return;
}

// ExecutePostFactoryPipeline @ 14e435010

void __thiscall
UInterchangePipelineBase::ExecutePostFactoryPipeline
          (UInterchangePipelineBase *this,UInterchangeBaseNodeContainer *param_1,FString *param_2,
          UObject *param_3,bool param_4)

{
  return;
}

// ExecutePostImportPipeline @ 14e435020

void __thiscall
UInterchangePipelineBase::ExecutePostImportPipeline
          (UInterchangePipelineBase *this,UInterchangeBaseNodeContainer *param_1,FString *param_2,
          UObject *param_3,bool param_4)

{
  return;
}

// FindOrAddPropertyStates @ 14e435c30

FInterchangePipelinePropertyStates * __thiscall
UInterchangePipelineBase::FindOrAddPropertyStates(UInterchangePipelineBase *this,FName param_1)

{
  uint uVar1;
  FInterchangePipelinePropertyStates *pFVar2;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  pFVar2 = TMapBase<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
           ::FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
                       *)&this->PropertiesStates,uVar1 + param_1.Number,local_res10);
  return pFVar2;
}

// GetConflictInfos @ 14e43a1c0

TArray<FInterchangeConflictInfo,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangePipelineBase::GetConflictInfos
          (UInterchangePipelineBase *this,
          TArray<FInterchangeConflictInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UObject *param_1,UInterchangeBaseNodeContainer *param_2,UInterchangeSourceData *param_3)

{
  int *piVar1;
  TArray<FInterchangeConflictInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FInterchangeConflictInfo *pFVar4;
  
  pTVar2 = &this->ConflictInfos;
  DestructItems<FInterchangeConflictInfo,int>
            ((FInterchangeConflictInfo *)(pTVar2->AllocatorInstance).Data,
             (this->ConflictInfos).ArrayNum);
  piVar1 = &(this->ConflictInfos).ArrayMax;
  (this->ConflictInfos).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (this->ConflictInfos).ArrayNum;
  pFVar4 = (FInterchangeConflictInfo *)(pTVar2->AllocatorInstance).Data;
  __return_storage_ptr__->ArrayNum = iVar3;
  if (iVar3 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,iVar3,0,&__return_storage_ptr__->AllocatorInstance,iVar3,
               &__return_storage_ptr__->ArrayMax);
    ConstructItems<FInterchangeConflictInfo,FInterchangeConflictInfo,int>
              ((__return_storage_ptr__->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return __return_storage_ptr__;
}

// GetDefaultConfigFileName @ 14e43b970

FString * __cdecl
UInterchangePipelineBase::GetDefaultConfigFileName(FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType FVar2;
  int iVar3;
  longlong lVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), FVar2 = GEditorPerProjectIni.Data.AllocatorInstance,
     ::_TSS0 == -1)) {
    lVar4 = (longlong)GEditorPerProjectIni.Data.ArrayNum;
    PipelineConfigFilename.Data.ArrayNum = GEditorPerProjectIni.Data.ArrayNum;
    iVar3 = PipelineConfigFilename.Data.ArrayNum;
    if (GEditorPerProjectIni.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,GEditorPerProjectIni.Data.ArrayNum,0,
                 (ForAnyElementType *)&PipelineConfigFilename,GEditorPerProjectIni.Data.ArrayNum,
                 &PipelineConfigFilename.Data.ArrayMax);
      memcpy(PipelineConfigFilename.Data.AllocatorInstance.Data,FVar2.Data,lVar4 * 2);
      iVar3 = PipelineConfigFilename.Data.ArrayMax;
    }
    PipelineConfigFilename.Data.ArrayMax = iVar3;
    atexit(`UInterchangePipelineBase::GetDefaultConfigFileName'::__l2::
           _dynamic_atexit_destructor_for__PipelineConfigFilename__);
    _Init_thread_footer(&::_TSS0);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = PipelineConfigFilename.Data.ArrayNum;
  FVar2 = PipelineConfigFilename.Data.AllocatorInstance;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  lVar4 = (longlong)PipelineConfigFilename.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum = PipelineConfigFilename.Data.ArrayNum;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,(ForAnyElementType *)__return_storage_ptr__,iVar3,piVar1);
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,FVar2.Data,lVar4 * 2);
    return __return_storage_ptr__;
  }
  *piVar1 = 0;
  return __return_storage_ptr__;
}

// GetMostPipelineOuter @ 14e43ff50

UInterchangePipelineBase * __thiscall
UInterchangePipelineBase::GetMostPipelineOuter(UInterchangePipelineBase *this)

{
  int iVar1;
  UClass *pUVar2;
  UInterchangePipelineBase *pUVar3;
  
  while( true ) {
    pUVar3 = this;
    this = (UInterchangePipelineBase *)pUVar3->_padding_;
    if (this == (UInterchangePipelineBase *)0x0) {
      return pUVar3;
    }
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if (*(int *)(this->_padding_ + 0x38) < iVar1) break;
    if ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar2->_padding_) {
      return pUVar3;
    }
  }
  return pUVar3;
}

// GetMutablePropertyStates @ 14e43ffb0

FInterchangePipelinePropertyStates * __thiscall
UInterchangePipelineBase::GetMutablePropertyStates(UInterchangePipelineBase *this,FName param_1)

{
  FInterchangePipelinePropertyStates *pFVar1;
  
  pFVar1 = TMapBase<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
           ::Find((TMapBase<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
                   *)&this->PropertiesStates,param_1);
  return pFVar1;
}

// GetPipelineDisplayName @ 14e4415a0

FString * __thiscall
UInterchangePipelineBase::GetPipelineDisplayName
          (UInterchangePipelineBase *this,FString *__return_storage_ptr__)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FString *pFVar5;
  longlong lVar6;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  pvVar1 = *(void **)(this->_padding_ + 0x70);
  do {
    if (pvVar1 == (void *)0x0) {
LAB_14e4416fd:
      local_res18 = (FName)this->_padding_;
      ::FName::ToString(&local_res18,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    if ((*(uint *)(*(longlong *)((longlong)pvVar1 + 8) + 0x18) >> 0xe & 1) != 0) {
      bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
      if (bVar3) {
        local_res8 = *(FName *)((longlong)pvVar1 + 0x20);
      }
      else {
        local_res8.ComparisonIndex.Value = 0;
        local_res8.Number = 0;
      }
      pFVar4 = ::FName::FName(&local_res20,"PipelineDisplayName");
      if (local_res8 == *pFVar4) {
        if ((*(int *)((longlong)pvVar1 + 0x30) < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FString *)(*pcVar2)();
          return pFVar5;
        }
        local_38.Data = (FScriptContainerElement *)0x0;
        local_30 = *(int *)((longlong)&this->_padding_ + (longlong)*(int *)((longlong)pvVar1 + 0x44)
                           );
        lVar6 = (longlong)local_30;
        pvVar1 = *(void **)((longlong)&this->_padding_ + (longlong)*(int *)((longlong)pvVar1 + 0x44)
                           );
        if (local_30 == 0) {
          local_2c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_30,0,&local_38,local_30,&local_2c);
          memcpy(local_38.Data,pvVar1,lVar6 * 2);
        }
        if (1 < local_30) {
          (__return_storage_ptr__->Data).AllocatorInstance.Data = local_38.Data;
          (__return_storage_ptr__->Data).ArrayMax = local_2c;
          (__return_storage_ptr__->Data).ArrayNum = local_30;
          return __return_storage_ptr__;
        }
        if (local_38.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data);
        }
        goto LAB_14e4416fd;
      }
    }
    pvVar1 = *(void **)((longlong)pvVar1 + 0x48);
  } while( true );
}

// GetPrivateStaticClass @ 14e441a00

UClass * __cdecl UInterchangePipelineBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangePipelineBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangePipelineBase",
               &Z_Registration_Info_UClass_UInterchangePipelineBase.InnerSingleton,
               StaticRegisterNativesUInterchangePipelineBase,0x128,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangePipelineBase>,
               InternalVTableHelperCtorCaller<UInterchangePipelineBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangePipelineBase.InnerSingleton;
}

// GetPropertiesStatesPropertyName @ 14e442580

FName __cdecl UInterchangePipelineBase::GetPropertiesStatesPropertyName(void)

{
  FName *pFVar1;
  FName in_RCX;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,0x10,L"PropertiesStates",FNAME_Add);
  *(FName *)in_RCX = *pFVar1;
  return in_RCX;
}

// GetPropertyStates @ 14e4425c0

FInterchangePipelinePropertyStates * __thiscall
UInterchangePipelineBase::GetPropertyStates(UInterchangePipelineBase *this,FName param_1)

{
  FInterchangePipelinePropertyStates *pFVar1;
  
  pFVar1 = TMapBase<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
           ::Find((TMapBase<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
                   *)&this->PropertiesStates,param_1);
  return pFVar1;
}

// GetResultsPropertyName @ 14e4426c0

FName __cdecl UInterchangePipelineBase::GetResultsPropertyName(void)

{
  FName *pFVar1;
  FName in_RCX;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,7,L"Results",FNAME_Add);
  *(FName *)in_RCX = *pFVar1;
  return in_RCX;
}

// IsScripted @ 14e449f50

bool __thiscall UInterchangePipelineBase::IsScripted(UInterchangePipelineBase *this)

{
  return true;
}

// IsSettingsAreValid @ 14e449f60

bool __thiscall
UInterchangePipelineBase::IsSettingsAreValid
          (UInterchangePipelineBase *this,TOptional<FText> *param_1)

{
  return true;
}

// LoadSettings @ 14e44cbb0

void __thiscall
UInterchangePipelineBase::LoadSettings(UInterchangePipelineBase *this,FName param_1,bool param_2)

{
  FString *pFVar1;
  bool local_res8 [8];
  FString local_18;
  
  local_res8[0] = false;
  pFVar1 = GetDefaultConfigFileName(&local_18);
  LoadSettingsInternal(this,param_1,pFVar1,&this->PropertiesStates,param_2,local_res8);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_res8[0] != false) {
    pFVar1 = GetDefaultConfigFileName(&local_18);
    SaveSettingsInternal(this,param_1,pFVar1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    pFVar1 = GetDefaultConfigFileName(&local_18);
    FConfigCacheIni::Flush(GConfig,false,pFVar1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// LoadSettingsInternal @ 14e44d6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInterchangePipelineBase::LoadSettingsInternal
          (UInterchangePipelineBase *this,FName param_1,FString *param_2,
          TMap<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
          *param_3,bool param_4,bool *param_5)

{
  EArrayPropertyFlags EVar1;
  longlong lVar2;
  FName FVar3;
  code *pcVar4;
  FFeedbackContext *pFVar5;
  FName FVar6;
  bool bVar7;
  FConfigSection *pFVar8;
  FString *pFVar9;
  FName *pFVar10;
  FInterchangePipelinePropertyStates *pFVar11;
  FScriptArrayHelper_u_8 FVar12;
  FFeedbackContext *pFVar13;
  ulonglong uVar14;
  UInterchangePipelineBase *this_00;
  UClass *pUVar15;
  void *pvVar16;
  ForAnyElementType FVar17;
  ForAnyElementType FVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  wchar_t *pwVar21;
  int iVar22;
  FProperty *pFVar23;
  longlong lVar24;
  FProperty *pFVar25;
  int iVar26;
  FString local_1e0;
  FProperty *local_1d0;
  TArray<FConfigValue,TSizedDefaultAllocator<32>_> local_1c8;
  FString local_1b8;
  FConfigSection *local_1a8;
  FFeedbackContext *local_1a0;
  FScriptArrayHelper local_198;
  FString local_178;
  FName local_168;
  FString local_160;
  FString local_150;
  undefined8 local_140;
  FString local_138;
  FString local_128;
  FString local_118;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FName local_a0;
  FName local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  lVar2 = this->_padding_;
  pFVar25 = *(FProperty **)(lVar2 + 0x70);
  do {
    if (pFVar25 == (FProperty *)0x0) {
      return;
    }
    if (((pFVar25->PropertyFlags >> 0xd & 1) == 0) &&
       ((pFVar25->PropertyFlags & CPF_Edit) != CPF_None)) {
      local_1d0 = pFVar25;
      UE::Interchange::PipelinePrivate::CreateConfigSectionName(&local_1e0,param_1,this);
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_1e0.Data.ArrayNum != 0) {
        FVar17.Data = local_1e0.Data.AllocatorInstance.Data;
      }
      pFVar8 = FConfigCacheIni::GetSection(GConfig,(wchar_t *)FVar17.Data,false,param_2);
      if (pFVar8 == (FConfigSection *)0x0) {
        local_108 = *(FName *)(lVar2 + 0x18);
        local_100 = param_1;
        ::FName::ToString(&local_108,&local_b0);
        pFVar9 = ::FName::ToString(&local_100,&local_90);
        ::FString::ConcatCF(&local_c0,L"Interchange_StackName__",pFVar9);
        ::FString::ConcatFC(&local_d0,&local_c0,L"__PipelineClassName_");
        ::FString::ConcatFF(&local_160,&local_d0,&local_b0);
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
        }
        local_1e0.Data.AllocatorInstance.Data = local_160.Data.AllocatorInstance.Data;
        local_1e0.Data.ArrayNum = local_160.Data.ArrayNum;
        *param_5 = (bool)(*param_5 | 1);
        local_1e0.Data.ArrayMax = local_160.Data.ArrayMax;
        local_160.Data.ArrayNum = 0;
        local_160.Data.ArrayMax = 0;
        local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      bVar7 = IsThisNotNull(pFVar25,"FField::GetFName");
      if (bVar7) {
        local_168 = (FName)pFVar25->_padding_;
      }
      else {
        local_168.ComparisonIndex.Value = 0;
        local_168.Number = 0;
      }
      FVar6 = local_168;
      pFVar9 = FField::GetPathName((FField *)pFVar25,&local_80,(UObject *)0x0);
      iVar22 = (pFVar9->Data).ArrayNum;
      iVar26 = iVar22 + -1;
      if (iVar22 == 0) {
        iVar26 = 0;
      }
      pFVar10 = ::FName::FName(&local_a0,iVar26,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,
                               FNAME_Add);
      FVar3 = *pFVar10;
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      pFVar10 = ::FName::FName(&local_98,0x10,L"PropertiesStates",FNAME_Add);
      if ((FVar6 == *pFVar10) ||
         ((pFVar11 = TMapBase<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
                     ::Find((TMapBase<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
                             *)param_3,FVar3), pFVar11 != (FInterchangePipelinePropertyStates *)0x0
          && ((pFVar11->bLocked != false || ((param_4 && (pFVar11->bPreDialogReset != false))))))))
      {
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
        }
      }
      else {
        bVar7 = IsThisNotNull(pFVar25,"FField::GetName");
        if (bVar7) {
          ::FName::ToString((FName *)&pFVar25->_padding_,&local_1b8);
        }
        else {
          ::FString::FString(&local_1b8,L"None");
        }
        FField::GetOwnerClass((FField *)pFVar25);
        if (((*(UClass **)(lVar2 + 0x40))->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0
           ) {
          UClass::InternalCreateDefaultObjectWrapper(*(UClass **)(lVar2 + 0x40));
        }
        uVar14 = *(ulonglong *)(pFVar25->_padding_ + 0x18);
        pFVar23 = (FProperty *)0x0;
        if ((uVar14 >> 0x10 & 1) != 0) {
          pFVar23 = pFVar25;
        }
        if (((uVar14 >> 0x15 & 1) == 0) || (pFVar25 == (FProperty *)0x0)) {
          if (pFVar23 != (FProperty *)0x0) {
            this_00 = (UInterchangePipelineBase *)
                      (**(code **)(pFVar23->_padding_ + 0x208))(pFVar23,this,0);
            if (this_00 == (UInterchangePipelineBase *)0x0) {
LAB_14e44deb7:
              this_00 = (UInterchangePipelineBase *)0x0;
            }
            else {
              pUVar15 = StaticClass();
              iVar26 = (int)pUVar15->_padding_;
              if ((*(int *)(this_00->_padding_ + 0x38) < iVar26) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar26 * 8)
                  != &pUVar15->_padding_)) goto LAB_14e44deb7;
            }
            if (this_00 != (UInterchangePipelineBase *)0x0) {
              bVar7 = UObjectBaseUtility::IsInOuter((UObjectBaseUtility *)this_00,(UObject *)this);
              if (bVar7) {
                LoadSettingsInternal(this_00,param_1,param_2,param_3,param_4,param_5);
              }
              goto LAB_14e44de15;
            }
          }
          iVar26 = pFVar25->ArrayDim;
          iVar22 = 0;
          if (0 < iVar26) {
            do {
              pFVar20 = (FScriptContainerElement *)0x0;
              if (iVar26 != 1) {
                bVar7 = IsThisNotNull(pFVar25,"FField::GetName");
                if (bVar7) {
                  ::FName::ToString((FName *)&pFVar25->_padding_,&local_128);
                }
                else {
                  ::FString::FString(&local_128,L"None");
                }
                ::FString::PrintfImpl(&local_150,L"%s[%i]");
                if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
                }
                local_1b8.Data.AllocatorInstance.Data = local_150.Data.AllocatorInstance.Data;
                local_1b8.Data.ArrayNum = local_150.Data.ArrayNum;
                local_1b8.Data.ArrayMax = local_150.Data.ArrayMax;
                local_150.Data.ArrayNum = 0;
                local_150.Data.ArrayMax = 0;
                local_150.Data.AllocatorInstance.Data = pFVar20;
                if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_128.Data.AllocatorInstance.Data);
                }
              }
              FVar17.Data = (FScriptContainerElement *)L"";
              if (local_1b8.Data.ArrayNum != 0) {
                FVar17.Data = local_1b8.Data.AllocatorInstance.Data;
              }
              FVar18.Data = (FScriptContainerElement *)L"";
              if (local_1e0.Data.ArrayNum != 0) {
                FVar18.Data = local_1e0.Data.AllocatorInstance.Data;
              }
              local_178.Data.ArrayNum = 0;
              local_178.Data.ArrayMax = 0;
              local_178.Data.AllocatorInstance.Data = pFVar20;
              bVar7 = FConfigCacheIni::GetString
                                (GConfig,(wchar_t *)FVar18.Data,(wchar_t *)FVar17.Data,&local_178,
                                 param_2);
              pFVar13 = GWarn;
              if (bVar7) {
                pvVar16 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                    (pFVar25,(UObject *)this,iVar22);
                FVar17.Data = (FScriptContainerElement *)L"";
                if (local_178.Data.ArrayNum != 0) {
                  FVar17.Data = local_178.Data.AllocatorInstance.Data;
                }
                bVar7 = FProperty::ValidateImportFlags(pFVar25,0,(FOutputDevice *)pFVar13);
                if ((((!bVar7) || (FVar17.Data == (FScriptContainerElement *)0x0)) ||
                    (lVar24 = (**(code **)(pFVar25->_padding_ + 0xe8))
                                        (pFVar25,FVar17.Data,pvVar16,0,this,0x8000000,pFVar13),
                    lVar24 == 0)) && (1 < (byte)LogInterchangeCore._0_1_)) {
                  bVar7 = IsThisNotNull(pFVar25,"FField::GetName");
                  if (bVar7) {
                    ::FName::ToString((FName *)&pFVar25->_padding_,&local_118);
                  }
                  else {
                    ::FString::FString(&local_118,L"None");
                  }
                  local_e8 = *(FName *)(this->_padding_ + 0x18);
                  ::FName::ToString(&local_e8,&local_e0);
                  UE::Logging::Private::BasicLog<2>
                            (&::LOG_Static,(FLogCategoryBase *)&LogInterchangeCore);
                  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
                  }
                  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_118.Data.AllocatorInstance.Data);
                  }
                }
              }
              if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.Data.AllocatorInstance.Data);
              }
              iVar26 = pFVar25->ArrayDim;
              iVar22 = iVar22 + 1;
            } while (iVar22 < iVar26);
          }
        }
        else {
          FVar17.Data = (FScriptContainerElement *)L"";
          if (local_1e0.Data.ArrayNum != 0) {
            FVar17.Data = local_1e0.Data.AllocatorInstance.Data;
          }
          pFVar8 = FConfigCacheIni::GetSection(GConfig,(wchar_t *)FVar17.Data,false,param_2);
          local_1a8 = pFVar8;
          if (pFVar8 != (FConfigSection *)0x0) {
            local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            FVar17.Data = (FScriptContainerElement *)L"";
            if (local_1b8.Data.ArrayNum != 0) {
              FVar17.Data = local_1b8.Data.AllocatorInstance.Data;
            }
            local_1c8.ArrayNum = 0;
            local_1c8.ArrayMax = 0;
            ::FName::FName(&local_f8,(wchar_t *)FVar17.Data,FNAME_Find);
            TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
            ::MultiFind<TSizedDefaultAllocator<32>_>
                      ((TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                        *)pFVar8,local_f8,&local_1c8,false);
            FVar12.HeapArray =
                 FProperty::ContainerUObjectPtrToValuePtrInternal(pFVar25,(UObject *)this,0);
            EVar1 = (EArrayPropertyFlags)pFVar25[1]._padding_;
            local_198.ElementAlignment = (**(code **)(*(longlong *)pFVar25[1]._padding_ + 0x168))();
            local_198.InnerProperty = (FProperty *)pFVar25[1]._padding_;
            local_198.ElementSize = (local_198.InnerProperty)->ElementSize;
            local_198.field1_0x8.HeapArray = FVar12.HeapArray;
            local_198.ArrayFlags = EVar1;
            if ((local_198.ElementSize < 1) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ElementSize > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1177,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if ((local_198.InnerProperty == (FProperty *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InnerProperty",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1178,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (local_1c8.ArrayNum < 1) {
              iVar26 = 0;
              local_140 = 0;
              do {
                lVar24 = 0;
                ::FString::PrintfImpl(&local_138,L"%s[%i]");
                FVar17.Data = (FScriptContainerElement *)L"";
                if (local_138.Data.ArrayNum != 0) {
                  FVar17.Data = local_138.Data.AllocatorInstance.Data;
                }
                ::FName::FName(&local_f0,(wchar_t *)FVar17.Data,FNAME_Find);
                if (local_f0 == (FName)0x0) {
                  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_138.Data.AllocatorInstance.Data);
                  }
                  break;
                }
                pFVar13 = (FFeedbackContext *)
                          TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                          ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                                  *)pFVar8,local_f0);
                local_1a0 = pFVar13;
                if (pFVar13 != (FFeedbackContext *)0x0) {
                  if ((iVar26 < 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Index>=0",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                         ,0x10be,L""), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  if ((local_198.field1_0x8.FreezableArray)->ArrayNum <= iVar26) {
                    FScriptArrayHelper::AddValues
                              (&local_198,
                               (iVar26 - (local_198.field1_0x8.FreezableArray)->ArrayNum) + 1);
                  }
                  pFVar5 = GWarn;
                  pFVar25 = (FProperty *)pFVar25[1]._padding_;
                  if ((local_198.field1_0x8.FreezableArray)->ArrayNum != 0) {
                    uVar14 = (local_198.field1_0x8.FreezableArray)->_padding_;
                    if (((local_198.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                       ((uVar14 & 1) != 0)) {
                      uVar14 = (longlong)&(local_198.field1_0x8.HeapArray)->field_0x0 +
                               ((longlong)uVar14 >> 0x18);
                    }
                    lVar24 = (longlong)local_198.ElementSize * (longlong)iVar26 + uVar14;
                  }
                  pFVar9 = FConfigValue::GetValue((FConfigValue *)pFVar13,local_60);
                  if ((pFVar9->Data).ArrayNum == 0) {
                    pwVar21 = L"";
                  }
                  else {
                    pwVar21 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
                  }
                  bVar7 = FProperty::ValidateImportFlags(pFVar25,0,(FOutputDevice *)pFVar5);
                  if ((bVar7) &&
                     ((FScriptContainerElement *)pwVar21 != (FScriptContainerElement *)0x0)) {
                    (**(code **)(pFVar25->_padding_ + 0xe8))
                              (pFVar25,pwVar21,lVar24,0,this,0x8000000,pFVar5);
                  }
                  pFVar25 = local_1d0;
                  if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
                    pFVar25 = local_1d0;
                  }
                }
                pFVar13 = local_1a0;
                iVar26 = iVar26 + 1;
                if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_138.Data.AllocatorInstance.Data);
                }
                pFVar8 = local_1a8;
              } while ((pFVar13 != (FFeedbackContext *)0x0) ||
                      (iVar26 < (local_198.field1_0x8.FreezableArray)->ArrayNum));
            }
            else {
              FScriptArrayHelper::EmptyAndAddValues(&local_198,local_1c8.ArrayNum);
              pFVar25 = local_1d0;
              iVar22 = 0;
              local_1a8 = (FConfigSection *)((ulonglong)local_1a8 & 0xffffffff00000000);
              iVar26 = local_1c8.ArrayNum + -1;
              if (-1 < iVar26) {
                lVar24 = (longlong)iVar26 * 0x18;
                do {
                  lVar19 = 0;
                  pFVar23 = (FProperty *)pFVar25[1]._padding_;
                  local_1a0 = GWarn;
                  if ((local_198.field1_0x8.FreezableArray)->ArrayNum != 0) {
                    uVar14 = (local_198.field1_0x8.FreezableArray)->_padding_;
                    if (((local_198.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                       ((uVar14 & 1) != 0)) {
                      uVar14 = (longlong)&(local_198.field1_0x8.HeapArray)->field_0x0 +
                               ((longlong)uVar14 >> 0x18);
                    }
                    lVar19 = (longlong)local_198.ElementSize * (longlong)iVar22 + uVar14;
                  }
                  if ((local_1c8.ArrayNum <= iVar26) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pFVar9 = FConfigValue::GetValue
                                     ((FConfigValue *)(local_1c8.AllocatorInstance.Data + lVar24),
                                      &local_70);
                  if ((pFVar9->Data).ArrayNum == 0) {
                    pwVar21 = L"";
                  }
                  else {
                    pwVar21 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
                  }
                  bVar7 = FProperty::ValidateImportFlags(pFVar23,0,(FOutputDevice *)local_1a0);
                  if ((bVar7) &&
                     ((FScriptContainerElement *)pwVar21 != (FScriptContainerElement *)0x0)) {
                    (**(code **)(pFVar23->_padding_ + 0xe8))
                              (pFVar23,pwVar21,lVar19,0,this,0x8000000,local_1a0);
                  }
                  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_70.Data.AllocatorInstance.Data);
                  }
                  iVar22 = (int)local_1a8 + 1;
                  lVar24 = lVar24 + -0x18;
                  local_1a8 = (FConfigSection *)CONCAT44(local_1a8._4_4_,iVar22);
                  iVar26 = iVar26 + -1;
                } while (-1 < iVar26);
              }
            }
            DestructItems<FConfigValue,int>
                      ((FConfigValue *)local_1c8.AllocatorInstance.Data,local_1c8.ArrayNum);
            pFVar25 = local_1d0;
            if ((FConfigValue *)local_1c8.AllocatorInstance.Data != (FConfigValue *)0x0) {
              FMemory::Free(local_1c8.AllocatorInstance.Data);
              pFVar25 = local_1d0;
            }
          }
        }
LAB_14e44de15:
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        }
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
        }
      }
    }
    pFVar25 = pFVar25->PropertyLinkNext;
  } while( true );
}

// PostDuplicate @ 14e44e920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UInterchangePipelineBase::PostDuplicate(UInterchangePipelineBase *this,bool param_1)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  FWeakObjectPtrData *pFVar10;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [8];
  TArray<FWeakObjectPtrData,TSizedDefaultAllocator<32>_> TStack_a0;
  FWeakObjectPtr FStack_90;
  UObject *apUStack_88 [2];
  TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
  TStack_78;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  TStack_78.Elements._0_8_ = 0;
  TStack_78.Elements._8_8_ = 0;
  TStack_78.Elements._32_8_ = 0;
  TStack_78.Elements._40_4_ = 0;
  TStack_78.Elements._52_4_ = 0;
  TStack_78.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  TStack_78.HashSize = 0;
  TStack_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_a0.ArrayNum = 0;
  TStack_a0.ArrayMax = 0;
  TStack_78.Elements._44_4_ = 0x80;
  TStack_78.Elements._48_4_ = 0xffffffff;
  GatherObjectAndWeakObjectPtrs
            ((UClass *)this->_padding_,(UObject *)this,
             (TMap<FString,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>_>
              *)&TStack_78,&TStack_a0);
  iVar4 = TStack_a0.ArrayNum;
  pFVar10 = (FWeakObjectPtrData *)
            (TStack_a0.AllocatorInstance.Data + (longlong)TStack_a0.ArrayNum * 0x20);
  FVar9.Data = TStack_a0.AllocatorInstance.Data;
  do {
    if (TStack_a0.ArrayNum != iVar4) {
      auStack_a8[0] = 0;
      `TCheckedPointerIterator<FWeakObjectPtrData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStack_a8);
    }
    if ((FWeakObjectPtrData *)FVar9.Data == pFVar10) {
      DestructItems<FWeakObjectPtrData,int>
                ((FWeakObjectPtrData *)TStack_a0.AllocatorInstance.Data,TStack_a0.ArrayNum);
      if ((FWeakObjectPtrData *)TStack_a0.AllocatorInstance.Data != (FWeakObjectPtrData *)0x0) {
        FMemory::Free(TStack_a0.AllocatorInstance.Data);
      }
      TStack_78.HashSize = 0;
      if (TStack_78.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)TStack_78.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&TStack_78.Elements);
      return;
    }
    iVar7 = (((FWeakObjectPtrData *)FVar9.Data)->PropertyName).Data.ArrayNum;
    if (iVar7 == 0) {
      pwVar8 = L"";
      iVar7 = 0;
    }
    else {
      pwVar8 = (wchar_t *)
               (((FWeakObjectPtrData *)FVar9.Data)->PropertyName).Data.AllocatorInstance.Data;
      iVar7 = iVar7 + -1;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar8);
    iVar7 = TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>(&TStack_78,uVar6,(FString *)FVar9.Data);
    if (iVar7 != -1) {
      iVar1 = (((FWeakObjectPtrData *)FVar9.Data)->PropertyName).Data.ArrayNum;
      iVar7 = iVar1 + -1;
      if (iVar1 == 0) {
        pwVar8 = L"";
        iVar7 = 0;
      }
      else {
        pwVar8 = (wchar_t *)
                 (((FWeakObjectPtrData *)FVar9.Data)->PropertyName).Data.AllocatorInstance.Data;
      }
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar8);
      iVar7 = TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>(&TStack_78,uVar6,(FString *)FVar9.Data);
      lVar11 = 0;
      if (((iVar7 == -1) ||
          (lVar11 = (longlong)iVar7 * 0x20 + TStack_78.Elements._0_8_, lVar11 == 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar2 = *(UObject **)(lVar11 + 0x10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      FStack_90.ObjectIndex = 0;
      FStack_90.ObjectSerialNumber = 0;
      apUStack_88[0] = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      FWeakObjectPtr::operator=(&FStack_90,(FObjectPtr)apUStack_88);
      *((FWeakObjectPtrData *)FVar9.Data)->ValuePtr = FStack_90;
    }
    FVar9.Data = FVar9.Data + 0x20;
  } while( true );
}

// PreDialogCleanup @ 14e44e930

void __thiscall
UInterchangePipelineBase::PreDialogCleanup(UInterchangePipelineBase *this,FName param_1)

{
  return;
}

// SaveSettings @ 14e4560d0

void __thiscall UInterchangePipelineBase::SaveSettings(UInterchangePipelineBase *this,FName param_1)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = GetDefaultConfigFileName(&local_18);
  SaveSettingsInternal(this,param_1,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar1 = GetDefaultConfigFileName(&local_18);
  FConfigCacheIni::Flush(GConfig,false,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SaveSettingsInternal @ 14e456690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UInterchangePipelineBase::SaveSettingsInternal
          (UInterchangePipelineBase *this,FName param_1,FString *param_2)

{
  longlong *this_00;
  int iVar1;
  FProperty *this_01;
  code *pcVar2;
  longlong lVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  ulonglong *puVar8;
  UInterchangePipelineBase *this_02;
  UClass *pUVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  FProperty *pFVar15;
  int iVar16;
  longlong lVar17;
  undefined1 auStackY_918 [32];
  FString local_8d8;
  FName local_8c8;
  FString *local_8c0;
  FString local_8b8;
  FString local_8a8;
  longlong local_898;
  FString local_890;
  FString local_880;
  FName local_870;
  FName local_868;
  FName local_860;
  FName local_858 [2];
  wchar_t local_848;
  undefined1 local_846 [2046];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_918;
  lVar17 = this->_padding_;
  this_01 = *(FProperty **)(lVar17 + 0x70);
  local_898 = lVar17;
  local_870 = param_1;
  local_8c0 = param_2;
  do {
    if (this_01 == (FProperty *)0x0) {
      return;
    }
    if (((this_01->PropertyFlags >> 0xd & 1) == 0) &&
       ((this_01->PropertyFlags & CPF_Edit) != CPF_None)) {
      bVar5 = IsThisNotNull(this_01,"FField::GetFName");
      this_00 = &this_01->_padding_;
      if (bVar5) {
        local_8c8 = (FName)*this_00;
      }
      else {
        local_8c8.ComparisonIndex.Value = 0;
        local_8c8.Number = 0;
      }
      FVar4 = local_8c8;
      pFVar7 = ::FName::FName(&local_868,0x10,L"PropertiesStates",FNAME_Add);
      if (FVar4 != *pFVar7) {
        UE::Interchange::PipelinePrivate::CreateConfigSectionName(&local_8b8,param_1,this);
        bVar5 = IsThisNotNull(this_01,"FField::GetName");
        if (bVar5) {
          ::FName::ToString((FName *)this_00,&local_8d8);
        }
        else {
          ::FString::FString(&local_8d8,L"None");
        }
        FField::GetOwnerClass((FField *)this_01);
        if (((*(UClass **)(lVar17 + 0x40))->ClassDefaultObject).field0_0x0.DebugPtr ==
            (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(*(UClass **)(lVar17 + 0x40));
        }
        uVar10 = *(ulonglong *)(this_01->_padding_ + 0x18);
        pFVar15 = (FProperty *)0x0;
        if ((uVar10 >> 0x10 & 1) != 0) {
          pFVar15 = this_01;
        }
        if (((uVar10 >> 0x15 & 1) == 0) || (this_01 == (FProperty *)0x0)) {
          if (pFVar15 != (FProperty *)0x0) {
            this_02 = (UInterchangePipelineBase *)
                      (**(code **)(pFVar15->_padding_ + 0x208))(pFVar15,this,0);
            if (this_02 == (UInterchangePipelineBase *)0x0) {
LAB_14e456a03:
              this_02 = (UInterchangePipelineBase *)0x0;
            }
            else {
              pUVar9 = StaticClass();
              iVar6 = (int)pUVar9->_padding_;
              if ((*(int *)(this_02->_padding_ + 0x38) < iVar6) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar6 * 8)
                  != &pUVar9->_padding_)) goto LAB_14e456a03;
            }
            if (this_02 != (UInterchangePipelineBase *)0x0) {
              bVar5 = UObjectBaseUtility::IsInOuter((UObjectBaseUtility *)this_02,(UObject *)this);
              if (bVar5) {
                SaveSettingsInternal(this_02,param_1,param_2);
              }
              goto LAB_14e456c16;
            }
          }
          local_848 = L'\0';
          memset(local_846,0,0x7fe);
          iVar6 = this_01->ArrayDim;
          iVar16 = 0;
          if (0 < iVar6) {
            do {
              if (iVar6 != 1) {
                bVar5 = IsThisNotNull(this_01,"FField::GetName");
                if (bVar5) {
                  ::FName::ToString((FName *)this_00,&local_880);
                }
                else {
                  ::FString::FString(&local_880,L"None");
                }
                TCString<wchar_t>::SprintfImpl(&local_848,L"%s[%i]");
                if (local_880.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_880.Data.AllocatorInstance.Data);
                }
                ::FString::operator=(&local_8d8,&local_848);
              }
              local_8a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_8a8.Data.ArrayNum = 0;
              local_8a8.Data.ArrayMax = 0;
              if (((iVar16 < 0) || (this_01->ArrayDim <= iVar16)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar6 = this_01->ElementSize;
              iVar1 = this_01->Offset_Internal;
              if (((iVar16 < 0) || (this_01->ArrayDim <= iVar16)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              FProperty::ExportText_Direct
                        (this_01,&local_8a8,
                         (void *)((longlong)&this->_padding_ +
                                 (longlong)this_01->Offset_Internal +
                                 (longlong)this_01->ElementSize * (longlong)iVar16),
                         (void *)((longlong)&this->_padding_ +
                                 (longlong)iVar1 + (longlong)iVar6 * (longlong)iVar16),
                         (UObject *)this,0,(UObject *)0x0);
              param_2 = local_8c0;
              FVar11.Data = (FScriptContainerElement *)L"";
              if (local_8a8.Data.ArrayNum != 0) {
                FVar11.Data = local_8a8.Data.AllocatorInstance.Data;
              }
              FVar14.Data = (FScriptContainerElement *)L"";
              if (local_8d8.Data.ArrayNum != 0) {
                FVar14.Data = local_8d8.Data.AllocatorInstance.Data;
              }
              FVar12.Data = (FScriptContainerElement *)L"";
              if (local_8b8.Data.ArrayNum != 0) {
                FVar12.Data = local_8b8.Data.AllocatorInstance.Data;
              }
              FConfigCacheIni::SetString
                        (GConfig,(wchar_t *)FVar12.Data,(wchar_t *)FVar14.Data,
                         (wchar_t *)FVar11.Data,local_8c0);
              if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
              }
              iVar6 = this_01->ArrayDim;
              iVar16 = iVar16 + 1;
              param_1 = local_870;
              lVar17 = local_898;
            } while (iVar16 < iVar6);
          }
        }
        else {
          FVar11.Data = (FScriptContainerElement *)L"";
          if (local_8d8.Data.ArrayNum != 0) {
            FVar11.Data = local_8d8.Data.AllocatorInstance.Data;
          }
          pFVar7 = ::FName::FName(&local_860,(wchar_t *)FVar11.Data);
          FVar11.Data = (FScriptContainerElement *)L"";
          if (local_8b8.Data.ArrayNum != 0) {
            FVar11.Data = local_8b8.Data.AllocatorInstance.Data;
          }
          FConfigCacheIni::RemoveKeyFromSection(GConfig,(wchar_t *)FVar11.Data,*pFVar7,param_2);
          puVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_01,(UObject *)this,0);
          lVar3 = this_01[1]._padding_;
          (**(code **)(*(longlong *)this_01[1]._padding_ + 0x168))();
          lVar17 = this_01[1]._padding_;
          iVar6 = *(int *)(lVar17 + 0x34);
          if ((iVar6 < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ElementSize > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1177,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((lVar17 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InnerProperty",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1178,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar16 = 0;
          while( true ) {
            lVar13 = 0;
            param_2 = local_8c0;
            lVar17 = local_898;
            if ((int)puVar8[1] <= iVar16) break;
            local_890.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_890.Data.ArrayNum = 0;
            local_890.Data.ArrayMax = 0;
            if ((int)puVar8[1] != 0) {
              uVar10 = *puVar8;
              if (((lVar3 & 1) != 0) && ((uVar10 & 1) != 0)) {
                uVar10 = ((longlong)uVar10 >> 0x18) + (longlong)puVar8;
              }
              lVar13 = (longlong)iVar6 * (longlong)iVar16 + uVar10;
            }
            (**(code **)(*(longlong *)this_01[1]._padding_ + 0xe0))
                      ((longlong *)this_01[1]._padding_,&local_890,lVar13,0);
            FVar11.Data = (FScriptContainerElement *)L"";
            if (local_8d8.Data.ArrayNum != 0) {
              FVar11.Data = local_8d8.Data.AllocatorInstance.Data;
            }
            pFVar7 = ::FName::FName(local_858,(wchar_t *)FVar11.Data);
            FVar11.Data = (FScriptContainerElement *)L"";
            if (local_8b8.Data.ArrayNum != 0) {
              FVar11.Data = local_8b8.Data.AllocatorInstance.Data;
            }
            FConfigCacheIni::AddToSection
                      (GConfig,(wchar_t *)FVar11.Data,*pFVar7,&local_890,local_8c0);
            if (local_890.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_890.Data.AllocatorInstance.Data);
            }
            iVar16 = iVar16 + 1;
          }
        }
LAB_14e456c16:
        if (local_8d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8d8.Data.AllocatorInstance.Data);
        }
        if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
        }
      }
    }
    this_01 = this_01->PropertyLinkNext;
  } while( true );
}

// ScriptedExecuteExportPipeline @ 14e456e30

void __thiscall
UInterchangePipelineBase::ScriptedExecuteExportPipeline
          (UInterchangePipelineBase *this,UInterchangeBaseNodeContainer *param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  UInterchangeBaseNodeContainer *local_res18 [2];
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UInterchangePipelineBase_ScriptedExecuteExportPipeline);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res18[0] = param_1;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014e456ea1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x328))(this,param_1);
  return;
}

// ScriptedExecutePipeline @ 14e456eb0

void __thiscall
UInterchangePipelineBase::ScriptedExecutePipeline
          (UInterchangePipelineBase *this,UInterchangeBaseNodeContainer *param_1,
          TArray<UInterchangeSourceData_*,TSizedDefaultAllocator<32>_> *param_2,FString *param_3)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UFunction *this_00;
  UClass *pUVar4;
  int iVar5;
  UInterchangeBaseNodeContainer *local_48;
  TArray<UInterchangeSourceData_*,TSizedDefaultAllocator<32>_> local_40;
  FString local_30;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UInterchangePipelineBase_ScriptedExecutePipeline);
  pUVar4 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar4->ClassFlags & CLASS_Native) == CLASS_None) {
    local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.ArrayNum = 0;
    local_40.ArrayMax = 0;
    local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30.Data.ArrayNum = 0;
    local_30.Data.ArrayMax = 0;
    iVar5 = 0;
    local_48 = param_1;
    if (&local_40 != param_2) {
      uVar1 = param_2->ArrayNum;
      pFVar3 = (param_2->AllocatorInstance).Data;
      local_40.ArrayMax = 0;
      local_40.ArrayNum = uVar1;
      iVar5 = 0;
      if (uVar1 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar1,0,&local_40.AllocatorInstance,uVar1,&local_40.ArrayMax);
        memcpy(local_40.AllocatorInstance.Data,pFVar3,(longlong)(int)uVar1 << 3);
        iVar5 = local_30.Data.ArrayMax;
      }
    }
    if (&local_30 != param_3) {
      iVar2 = (param_3->Data).ArrayNum;
      pFVar3 = (param_3->Data).AllocatorInstance.Data;
      local_30.Data.ArrayNum = iVar2;
      if ((iVar2 == 0) && (iVar5 == 0)) {
        local_30.Data.ArrayNum = 0;
        local_30.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar2,iVar5,(ForAnyElementType *)&local_30,iVar2,&local_30.Data.ArrayMax);
        if (iVar2 != 0) {
          memcpy(local_30.Data.AllocatorInstance.Data,pFVar3,(longlong)iVar2 * 2);
        }
      }
    }
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_48);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.AllocatorInstance.Data);
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x300))(this,param_1,param_2,param_3);
  }
  return;
}

// ScriptedExecutePostBroadcastPipeline @ 14e457050

void __thiscall
UInterchangePipelineBase::ScriptedExecutePostBroadcastPipeline
          (UInterchangePipelineBase *this,UInterchangeBaseNodeContainer *param_1,FString *param_2,
          UObject *param_3,bool param_4)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UFunction *this_00;
  UClass *pUVar2;
  UInterchangeBaseNodeContainer *local_38;
  FString local_30;
  UObject *local_20;
  bool local_18;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,
                       NAME_UInterchangePipelineBase_ScriptedExecutePostBroadcastPipeline);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30.Data.ArrayNum = 0;
    local_30.Data.ArrayMax = 0;
    local_38 = param_1;
    if (&local_30 != param_2) {
      uVar1 = (param_2->Data).ArrayNum;
      _Src = (param_2->Data).AllocatorInstance.Data;
      local_30.Data.ArrayMax = 0;
      local_30.Data.ArrayNum = uVar1;
      if (uVar1 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar1,0,(ForAnyElementType *)&local_30,uVar1,&local_30.Data.ArrayMax);
        memcpy(local_30.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
      }
    }
    local_18 = param_4;
    local_20 = param_3;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_38);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x318))(this,param_1,param_2,param_3,param_4);
  }
  return;
}

// ScriptedExecutePostFactoryPipeline @ 14e457180

void __thiscall
UInterchangePipelineBase::ScriptedExecutePostFactoryPipeline
          (UInterchangePipelineBase *this,UInterchangeBaseNodeContainer *param_1,FString *param_2,
          UObject *param_3,bool param_4)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UFunction *this_00;
  UClass *pUVar2;
  UInterchangeBaseNodeContainer *local_38;
  FString local_30;
  UObject *local_20;
  bool local_18;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,
                       NAME_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30.Data.ArrayNum = 0;
    local_30.Data.ArrayMax = 0;
    local_38 = param_1;
    if (&local_30 != param_2) {
      uVar1 = (param_2->Data).ArrayNum;
      _Src = (param_2->Data).AllocatorInstance.Data;
      local_30.Data.ArrayMax = 0;
      local_30.Data.ArrayNum = uVar1;
      if (uVar1 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar1,0,(ForAnyElementType *)&local_30,uVar1,&local_30.Data.ArrayMax);
        memcpy(local_30.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
      }
    }
    local_18 = param_4;
    local_20 = param_3;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_38);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x308))(this,param_1,param_2,param_3,param_4);
  }
  return;
}

// ScriptedExecutePostImportPipeline @ 14e4572b0

void __thiscall
UInterchangePipelineBase::ScriptedExecutePostImportPipeline
          (UInterchangePipelineBase *this,UInterchangeBaseNodeContainer *param_1,FString *param_2,
          UObject *param_3,bool param_4)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UFunction *this_00;
  UClass *pUVar2;
  UInterchangeBaseNodeContainer *local_38;
  FString local_30;
  UObject *local_20;
  bool local_18;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,
                       NAME_UInterchangePipelineBase_ScriptedExecutePostImportPipeline);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30.Data.ArrayNum = 0;
    local_30.Data.ArrayMax = 0;
    local_38 = param_1;
    if (&local_30 != param_2) {
      uVar1 = (param_2->Data).ArrayNum;
      _Src = (param_2->Data).AllocatorInstance.Data;
      local_30.Data.ArrayMax = 0;
      local_30.Data.ArrayNum = uVar1;
      if (uVar1 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar1,0,(ForAnyElementType *)&local_30,uVar1,&local_30.Data.ArrayMax);
        memcpy(local_30.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
      }
    }
    local_18 = param_4;
    local_20 = param_3;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_38);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x310))(this,param_1,param_2,param_3,param_4);
  }
  return;
}

// ScriptedGetPipelineDisplayName @ 14e4573e0

FString * __thiscall
UInterchangePipelineBase::ScriptedGetPipelineDisplayName
          (UInterchangePipelineBase *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  void *_Src;
  UFunction *this_00;
  UClass *pUVar2;
  longlong lVar3;
  void *local_18;
  undefined8 local_10;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UInterchangePipelineBase_ScriptedGetPipelineDisplayName)
  ;
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_18 = (void *)0x0;
    local_10 = 0;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_18);
    _Src = local_18;
    lVar3 = (longlong)(int)local_10;
    piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (int)local_10;
    if ((int)local_10 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_10,0,(ForAnyElementType *)__return_storage_ptr__,(int)local_10,
                 piVar1);
      memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src,lVar3 * 2);
    }
    if (local_18 != (void *)0x0) {
      FMemory::Free(local_18);
      return __return_storage_ptr__;
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x2f8))(this,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// ScriptedSetReimportSourceIndex @ 14e4574e0

void __thiscall
UInterchangePipelineBase::ScriptedSetReimportSourceIndex
          (UInterchangePipelineBase *this,UClass *param_1,int param_2)

{
  UFunction *this_00;
  UClass *pUVar1;
  UClass *local_18;
  int local_10;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UInterchangePipelineBase_ScriptedSetReimportSourceIndex)
  ;
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_18 = param_1;
    local_10 = param_2;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_18);
  }
  else {
    (**(code **)(this->_padding_ + 800))(this,param_1,param_2);
  }
  return;
}

// Serialize @ 14e457840

void __thiscall
UInterchangePipelineBase::Serialize(UInterchangePipelineBase *this,FArchive *param_1)

{
  EInterchangePipelineContext *pEVar1;
  
  UObject::Serialize((UObject *)this,param_1);
  if ((*(uint *)&param_1->field_0x34 & 0x1000) != 0) {
    ::operator<<(param_1,&this->bAllowPropertyStatesEdition);
    ::operator<<(param_1,&this->bIsReimportContext);
    ::operator<<(param_1,&this->bIsShowEssentials);
    ::operator<<(param_1,&this->bFromReimportOrOverride);
    (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->Results);
    TSetPrivateFriend::
    Serialize<TTuple<FName,FInterchangePipelinePropertyStates>,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<FName,FInterchangePipelinePropertyStates>,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>,FDefaultSetAllocator>
                        *)&this->PropertiesStates);
    TSetPrivateFriend::
    Serialize<TTuple<FName,FInterchangePipelinePropertyStates>,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<FName,FInterchangePipelinePropertyStates>,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>,FDefaultSetAllocator>
                        *)&this->CachePropertiesStates);
    pEVar1 = (EInterchangePipelineContext *)**(undefined8 **)&param_1->field_0x8;
    if ((EInterchangePipelineContext *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->CacheContextParam,1);
    }
    else {
      (this->CacheContextParam).ContextType = *pEVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&(this->CacheContextParam).ImportObjectType)
    ;
    (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&(this->CacheContextParam).ReimportAsset);
    (**(code **)(*(longlong *)param_1 + 0x150))
              (param_1,&(this->CacheContextParam).BaseNodeContainer);
  }
  return;
}

// Serialize @ 14e457950

void __thiscall
UInterchangePipelineBase::Serialize(UInterchangePipelineBase *this,FStructuredArchiveRecord param_1)

{
  EInterchangePipelineContext *pEVar1;
  FArchive *pFVar2;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar2);
  if ((*(uint *)&pFVar2->field_0x34 & 0x1000) != 0) {
    ::operator<<(pFVar2,&this->bAllowPropertyStatesEdition);
    ::operator<<(pFVar2,&this->bIsReimportContext);
    ::operator<<(pFVar2,&this->bIsShowEssentials);
    ::operator<<(pFVar2,&this->bFromReimportOrOverride);
    (**(code **)(*(longlong *)pFVar2 + 0x150))(pFVar2,&this->Results);
    TSetPrivateFriend::
    Serialize<TTuple<FName,FInterchangePipelinePropertyStates>,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>,FDefaultSetAllocator>
              (pFVar2,(TSet<TTuple<FName,FInterchangePipelinePropertyStates>,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>,FDefaultSetAllocator>
                       *)&this->PropertiesStates);
    TSetPrivateFriend::
    Serialize<TTuple<FName,FInterchangePipelinePropertyStates>,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>,FDefaultSetAllocator>
              (pFVar2,(TSet<TTuple<FName,FInterchangePipelinePropertyStates>,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>,FDefaultSetAllocator>
                       *)&this->CachePropertiesStates);
    pEVar1 = (EInterchangePipelineContext *)**(undefined8 **)&pFVar2->field_0x8;
    if ((EInterchangePipelineContext *)(*(undefined8 **)&pFVar2->field_0x8)[1] < pEVar1 + 1) {
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,&this->CacheContextParam,1);
    }
    else {
      (this->CacheContextParam).ContextType = *pEVar1;
      **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 1;
    }
    (**(code **)(*(longlong *)pFVar2 + 0x150))(pFVar2,&(this->CacheContextParam).ImportObjectType);
    (**(code **)(*(longlong *)pFVar2 + 0x150))(pFVar2,&(this->CacheContextParam).ReimportAsset);
    (**(code **)(*(longlong *)pFVar2 + 0x150))(pFVar2,&(this->CacheContextParam).BaseNodeContainer);
  }
  return;
}

// SetReimportSourceIndex @ 14e45f7a0

void __thiscall
UInterchangePipelineBase::SetReimportSourceIndex
          (UInterchangePipelineBase *this,UClass *param_1,int param_2)

{
  return;
}

// ShowConflictDialog @ 14e45fdd0

void __thiscall
UInterchangePipelineBase::ShowConflictDialog(UInterchangePipelineBase *this,FGuid *param_1)

{
  return;
}

// StaticRegisterNativesUInterchangePipelineBase @ 14e45ff70

void __cdecl UInterchangePipelineBase::StaticRegisterNativesUInterchangePipelineBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xb;
  local_18.DataPtr = Z_Construct_UClass_UInterchangePipelineBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SupportReimport @ 14e460230

bool __thiscall UInterchangePipelineBase::SupportReimport(UInterchangePipelineBase *this)

{
  return true;
}

// TransferAdjustSettings @ 14e464520

void __thiscall
UInterchangePipelineBase::TransferAdjustSettings
          (UInterchangePipelineBase *this,UInterchangePipelineBase *param_1)

{
  FInterchangePipelineContextParams::operator=(&this->CacheContextParam,&param_1->CacheContextParam)
  ;
  TMap<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
  ::operator=(&this->CachePropertiesStates,&param_1->CachePropertiesStates);
  this->bAllowPropertyStatesEdition = param_1->bAllowPropertyStatesEdition;
  this->bIsReimportContext = param_1->bIsReimportContext;
  this->bIsShowEssentials = param_1->bIsShowEssentials;
  return;
}

// UpdateWeakObjectPtrs @ 14e467a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UInterchangePipelineBase::UpdateWeakObjectPtrs(UInterchangePipelineBase *this)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  FWeakObjectPtrData *pFVar10;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  TArray<FWeakObjectPtrData,TSizedDefaultAllocator<32>_> local_a0;
  FWeakObjectPtr local_90;
  UObject *local_88 [2];
  TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
  local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_78.Elements._0_8_ = 0;
  local_78.Elements._8_8_ = 0;
  local_78.Elements._32_8_ = 0;
  local_78.Elements._40_4_ = 0;
  local_78.Elements._52_4_ = 0;
  local_78.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_78.HashSize = 0;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  local_78.Elements._44_4_ = 0x80;
  local_78.Elements._48_4_ = 0xffffffff;
  GatherObjectAndWeakObjectPtrs
            ((UClass *)this->_padding_,(UObject *)this,
             (TMap<FString,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>_>
              *)&local_78,&local_a0);
  iVar4 = local_a0.ArrayNum;
  pFVar10 = (FWeakObjectPtrData *)
            (local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayNum * 0x20);
  FVar9.Data = local_a0.AllocatorInstance.Data;
  do {
    if (local_a0.ArrayNum != iVar4) {
      local_a8[0] = 0;
      `TCheckedPointerIterator<FWeakObjectPtrData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_a8);
    }
    if ((FWeakObjectPtrData *)FVar9.Data == pFVar10) {
      DestructItems<FWeakObjectPtrData,int>
                ((FWeakObjectPtrData *)local_a0.AllocatorInstance.Data,local_a0.ArrayNum);
      if ((FWeakObjectPtrData *)local_a0.AllocatorInstance.Data != (FWeakObjectPtrData *)0x0) {
        FMemory::Free(local_a0.AllocatorInstance.Data);
      }
      local_78.HashSize = 0;
      if (local_78.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_78.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_78.Elements);
      return;
    }
    iVar7 = (((FWeakObjectPtrData *)FVar9.Data)->PropertyName).Data.ArrayNum;
    if (iVar7 == 0) {
      pwVar8 = L"";
      iVar7 = 0;
    }
    else {
      pwVar8 = (wchar_t *)
               (((FWeakObjectPtrData *)FVar9.Data)->PropertyName).Data.AllocatorInstance.Data;
      iVar7 = iVar7 + -1;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar8);
    iVar7 = TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>(&local_78,uVar6,(FString *)FVar9.Data);
    if (iVar7 != -1) {
      iVar1 = (((FWeakObjectPtrData *)FVar9.Data)->PropertyName).Data.ArrayNum;
      iVar7 = iVar1 + -1;
      if (iVar1 == 0) {
        pwVar8 = L"";
        iVar7 = 0;
      }
      else {
        pwVar8 = (wchar_t *)
                 (((FWeakObjectPtrData *)FVar9.Data)->PropertyName).Data.AllocatorInstance.Data;
      }
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar8);
      iVar7 = TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>(&local_78,uVar6,(FString *)FVar9.Data);
      lVar11 = 0;
      if (((iVar7 == -1) || (lVar11 = (longlong)iVar7 * 0x20 + local_78.Elements._0_8_, lVar11 == 0)
          ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Pair != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                   ,0x288,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar2 = *(UObject **)(lVar11 + 0x10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      local_90.ObjectIndex = 0;
      local_90.ObjectSerialNumber = 0;
      local_88[0] = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      FWeakObjectPtr::operator=(&local_90,(FObjectPtr)local_88);
      *((FWeakObjectPtrData *)FVar9.Data)->ValuePtr = local_90;
    }
    FVar9.Data = FVar9.Data + 0x20;
  } while( true );
}

// execDoesPropertyStatesExist @ 14e46a560

void __cdecl
UInterchangePipelineBase::execDoesPropertyStatesExist
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  lVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)local_res8);
  if (*(int *)&param_1[2].field_0x10 != *(int *)&param_1[3].field_0x14) {
    puVar5 = *(undefined1 **)&param_1[3].field_0x20;
    if (*(undefined1 **)&param_1[3].field_0x20 == (undefined1 *)0x0) {
      puVar5 = &param_1[3].field_0x18;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)(param_1 + 4) - 1U & (int)((ulonglong)lVar2 >> 0x20) + uVar3)
                              * 4);
    if (iVar4 != -1) {
      do {
        if (*(longlong *)(*(longlong *)&param_1[2].field_0x8 + (longlong)iVar4 * 0x18) == lVar2)
        goto LAB_14e46a63d;
        iVar4 = *(int *)(*(longlong *)&param_1[2].field_0x8 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14e46a63d:
  *(bool *)param_3 = iVar4 != -1;
  return;
}

// execFindOrAddPropertyStates @ 14e46a780

void __cdecl
UInterchangePipelineBase::execFindOrAddPropertyStates
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  uint uVar3;
  FInterchangePipelinePropertyStates *pFVar4;
  FName local_res8;
  FName local_res10;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  FVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10 = local_res8;
  uVar3 = ::GetTypeHash(local_res8.ComparisonIndex);
  pFVar4 = TMapBase<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
           ::FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
                       *)&param_1[2].field_0x8,FVar2.Number + uVar3,&local_res10);
  *(undefined4 *)param_3 = *(undefined4 *)pFVar4;
  *(bool *)((longlong)param_3 + 4) = (pFVar4->ReimportStates).bVisible;
  return;
}

// execIsReimportContext @ 14e46fc40

void __cdecl
UInterchangePipelineBase::execIsReimportContext(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[1].field_0x21;
  return;
}

// execScriptedExecuteExportPipeline @ 14e470bb0

void __cdecl
UInterchangePipelineBase::execScriptedExecuteExportPipeline
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x328))(param_1,local_res8);
  return;
}

// execScriptedExecutePipeline @ 14e470c40

void __cdecl
UInterchangePipelineBase::execScriptedExecutePipeline
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  undefined8 local_res8;
  void *local_28;
  undefined8 local_20;
  void *local_18;
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
  local_18 = (void *)0x0;
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
  local_28 = (void *)0x0;
  local_20 = 0;
  ppvVar2 = &local_18;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x300))(param_1,local_res8,ppvVar2,&local_28);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execScriptedExecutePostBroadcastPipeline @ 14e470da0

void __cdecl
UInterchangePipelineBase::execScriptedExecutePostBroadcastPipeline
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  undefined8 local_res10 [2];
  undefined8 local_res20;
  void *local_28;
  undefined8 local_20;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x318))
            (param_1,local_res20,&local_28,local_res10[0],local_res8[0] != 0);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execScriptedExecutePostFactoryPipeline @ 14e470f10

void __cdecl
UInterchangePipelineBase::execScriptedExecutePostFactoryPipeline
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  undefined8 local_res10 [2];
  undefined8 local_res20;
  void *local_28;
  undefined8 local_20;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x308))
            (param_1,local_res20,&local_28,local_res10[0],local_res8[0] != 0);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execScriptedExecutePostImportPipeline @ 14e471080

void __cdecl
UInterchangePipelineBase::execScriptedExecutePostImportPipeline
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  undefined8 local_res10 [2];
  undefined8 local_res20;
  void *local_28;
  undefined8 local_20;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x310))
            (param_1,local_res20,&local_28,local_res10[0],local_res8[0] != 0);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execScriptedGetPipelineDisplayName @ 14e4711f0

void __cdecl
UInterchangePipelineBase::execScriptedGetPipelineDisplayName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  void *local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2f8))(param_1,&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(void **)param_3 = local_18;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
    local_18 = (void *)0x0;
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execScriptedSetReimportSourceIndex @ 14e471280

void __cdecl
UInterchangePipelineBase::execScriptedSetReimportSourceIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
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
  (**(code **)(*(longlong *)param_1 + 800))(param_1,local_res10,local_res8[0]);
  return;
}

// execSupportReimport @ 14e474540

void __cdecl
UInterchangePipelineBase::execSupportReimport(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2f0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

