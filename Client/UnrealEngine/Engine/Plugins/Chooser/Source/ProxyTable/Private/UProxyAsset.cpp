// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProxyTable
// Functions: 13

// StaticClass @ 14cf24890

UClass * __cdecl UProxyAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProxyAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProxyTable",L"ProxyAsset",
               &Z_Registration_Info_UClass_UProxyAsset.InnerSingleton,
               StaticRegisterNativesUProxyAsset,0x80,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UProxyAsset>,InternalVTableHelperCtorCaller<UProxyAsset>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProxyAsset.InnerSingleton;
}

// UProxyAsset @ 14cf26770

UProxyAsset * __thiscall UProxyAsset::UProxyAsset(UProxyAsset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IHasContextClass__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Type).field0_0x0.DebugPtr = (UClass *)0x0;
  this->ResultType = ObjectResult;
  (this->ContextData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextData).ArrayNum = 0;
  (this->ContextData).ArrayMax = 0;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  return this;
}

// UProxyAsset @ 14cf267d0

UProxyAsset * __thiscall UProxyAsset::UProxyAsset(UProxyAsset *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IHasContextClass__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Type).field0_0x0.DebugPtr = (UClass *)0x0;
  this->ResultType = ObjectResult;
  (this->ContextData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextData).ArrayNum = 0;
  (this->ContextData).ArrayMax = 0;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  return this;
}

// ~UProxyAsset @ 14cf26920

void __thiscall UProxyAsset::~UProxyAsset(UProxyAsset *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IHasContextClass__;
  DestructItems<FInstancedStruct,int>
            ((FInstancedStruct *)(this->ContextData).AllocatorInstance.Data,
             (this->ContextData).ArrayNum);
  pFVar1 = (this->ContextData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IHasContextClass__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// FindProxyObject @ 14cf27360

UObject * __thiscall
UProxyAsset::FindProxyObject(UProxyAsset *this,FChooserEvaluationContext *param_1)

{
  return (UObject *)0x0;
}

// FindProxyObjectMulti @ 14cf27460

EIteratorStatus __thiscall
UProxyAsset::FindProxyObjectMulti
          (UProxyAsset *this,FChooserEvaluationContext *param_1,
          TDelegate<FObjectChooserBase::EIteratorStatus___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *param_2)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  return Continue;
}

// GetAssetRegistryTags @ 14cf275a0

void __thiscall
UProxyAsset::GetAssetRegistryTags(UProxyAsset *this,FAssetRegistryTagsContext param_1)

{
  FAssetRegistryTagsContext FVar1;
  int iVar2;
  FName _Src;
  FName local_res8;
  FAssetRegistryTag local_38;
  
  _Src.ComparisonIndex.Value = 0;
  _Src.Number = 0;
  iVar2 = 0;
  if ((this->Type).field0_0x0.DebugPtr != (UClass *)0x0) {
    local_res8 = UE::CoreUObject::Private::GetFName((UObject *)&stack0x00000018);
    local_res8 = *(FName *)local_res8;
    ::FName::ToString(&local_res8,(FString *)&local_38);
    _Src = local_38.Name;
    iVar2 = (int)local_38.Value.Data.AllocatorInstance.Data;
  }
  local_38.Name = TypeTagName;
  local_38.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Value.Data.ArrayNum = iVar2;
  if (iVar2 == 0) {
    local_38.Value.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,(ForAnyElementType *)&local_38.Value,iVar2,&local_38.Value.Data.ArrayMax)
    ;
    memcpy(local_38.Value.Data.AllocatorInstance.Data,(void *)_Src,(longlong)iVar2 * 2);
  }
  local_38.Type = TT_Alphabetical;
  local_38.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_38);
  FVar1.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext
                         ((FAssetRegistryTagsContext *)&local_res8,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar1);
  if (_Src != (FName)0x0) {
    FMemory::Free((void *)_Src);
  }
  return;
}

// GetContextData @ 14cf276b0

TArrayView<FInstancedStruct_const_,int> * __thiscall
UProxyAsset::GetContextData
          (UProxyAsset *this,TArrayView<FInstancedStruct_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FInstancedStruct_const_,int> *pTVar4;
  
  iVar1 = (int)this->_padding_;
  __return_storage_ptr__->DataPtr = (FInstancedStruct *)this->_padding_;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FInstancedStruct_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetContextOwnerAsset @ 14cf27720

UObject * __thiscall UProxyAsset::GetContextOwnerAsset(UProxyAsset *this)

{
  return (UObject *)&this[-1].ResultType;
}

// GetContextOwnerName @ 14cf27730

FString * __thiscall
UProxyAsset::GetContextOwnerName(UProxyAsset *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  local_res8[0].ComparisonIndex.Value = this[-1].Guid.A;
  local_res8[0].Number = this[-1].Guid.B;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cf278b0

UClass * __cdecl UProxyAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProxyAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProxyTable",L"ProxyAsset",
               &Z_Registration_Info_UClass_UProxyAsset.InnerSingleton,
               StaticRegisterNativesUProxyAsset,0x80,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UProxyAsset>,InternalVTableHelperCtorCaller<UProxyAsset>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProxyAsset.InnerSingleton;
}

// StaticRegisterNativesUProxyAsset @ 14cf285e0

void __cdecl UProxyAsset::StaticRegisterNativesUProxyAsset(void)

{
  return;
}

// _getUObject @ 14cf289c0

UObject * __thiscall UProxyAsset::_getUObject(UProxyAsset *this)

{
  return (UObject *)&this[-1].ResultType;
}

