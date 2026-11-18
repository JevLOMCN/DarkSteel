// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 35

// StaticClass @ 146c13860

UClass * __cdecl UMediaSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaSource",
               &Z_Registration_Info_UClass_UMediaSource.InnerSingleton,
               StaticRegisterNativesUMediaSource,0x80,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaSource>,
               InternalVTableHelperCtorCaller<UMediaSource>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaSource.InnerSingleton;
}

// UMediaSource @ 146c1d940

UMediaSource * __thiscall UMediaSource::UMediaSource(UMediaSource *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  *(undefined8 *)&this->MediaOptionsMap = 0;
  *(undefined8 *)&(this->MediaOptionsMap).field_0x8 = 0;
  *(undefined8 *)&(this->MediaOptionsMap).field_0x20 = 0;
  *(undefined4 *)&(this->MediaOptionsMap).field_0x28 = 0;
  *(undefined4 *)&(this->MediaOptionsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MediaOptionsMap).field_0x34 = 0;
  *(undefined4 *)&(this->MediaOptionsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MediaOptionsMap).field_0x40 = 0;
  *(undefined4 *)&(this->MediaOptionsMap).field_0x48 = 0;
  return this;
}

// UMediaSource @ 146c1d9a0

UMediaSource * __thiscall UMediaSource::UMediaSource(UMediaSource *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  *(undefined8 *)&this->MediaOptionsMap = 0;
  *(undefined8 *)&(this->MediaOptionsMap).field_0x8 = 0;
  *(undefined8 *)&(this->MediaOptionsMap).field_0x20 = 0;
  *(undefined4 *)&(this->MediaOptionsMap).field_0x28 = 0;
  *(undefined4 *)&(this->MediaOptionsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MediaOptionsMap).field_0x34 = 0;
  *(undefined4 *)&(this->MediaOptionsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MediaOptionsMap).field_0x40 = 0;
  *(undefined4 *)&(this->MediaOptionsMap).field_0x48 = 0;
  return this;
}

// ~UMediaSource @ 146c1eca0

void __thiscall UMediaSource::~UMediaSource(UMediaSource *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  *(undefined4 *)&(this->MediaOptionsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MediaOptionsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MediaOptionsMap);
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 146c20b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMediaSource::BeginDestroy(UMediaSource *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(UMediaSource **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// GetDesiredPlayerName @ 146c289b0

FName __thiscall UMediaSource::GetDesiredPlayerName(UMediaSource *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetMediaOption @ 146c2a5f0

TSharedPtr<IMediaOptions::FDataContainer,1> * __thiscall
UMediaSource::GetMediaOption
          (UMediaSource *this,TSharedPtr<IMediaOptions::FDataContainer,1> *__return_storage_ptr__,
          FName *param_1,TSharedPtr<IMediaOptions::FDataContainer,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetMediaOption @ 146c2a620

FString * __thiscall
UMediaSource::GetMediaOption
          (UMediaSource *this,FString *__return_storage_ptr__,FName *param_1,FString *param_2)

{
  FVariant *this_00;
  
  this_00 = TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
            ::Find((TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                    *)&this->_padding_,*param_1);
  if ((this_00 != (FVariant *)0x0) && (this_00->Type == String)) {
    FVariant::GetValue<FString>(this_00,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// GetMediaOption @ 146c2a680

FText * __thiscall
UMediaSource::GetMediaOption
          (UMediaSource *this,FText *__return_storage_ptr__,FName *param_1,FText *param_2)

{
  ITextData *pIVar1;
  undefined1 local_res10 [24];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (param_2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = param_2->Flags;
  return __return_storage_ptr__;
}

// GetMediaOption @ 146c2a6d0

double __thiscall UMediaSource::GetMediaOption(UMediaSource *this,FName *param_1,double param_2)

{
  FVariant *this_00;
  double dVar1;
  
  this_00 = TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
            ::Find((TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                    *)&this->_padding_,*param_1);
  if ((this_00 != (FVariant *)0x0) && (this_00->Type == Double)) {
    dVar1 = FVariant::GetValue<double>(this_00);
    return dVar1;
  }
  return param_2;
}

// GetMediaOption @ 146c2a720

long64 __thiscall UMediaSource::GetMediaOption(UMediaSource *this,FName *param_1,long64 param_2)

{
  FVariant *this_00;
  long64 lVar1;
  
  this_00 = TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
            ::Find((TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                    *)&this->_padding_,*param_1);
  if ((this_00 != (FVariant *)0x0) && (this_00->Type == Int64)) {
    lVar1 = FVariant::GetValue<__int64>(this_00);
    return lVar1;
  }
  return param_2;
}

// GetMediaOption @ 146c2a760

bool __thiscall UMediaSource::GetMediaOption(UMediaSource *this,FName *param_1,bool param_2)

{
  bool bVar1;
  FVariant *this_00;
  
  this_00 = TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
            ::Find((TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                    *)&this->_padding_,*param_1);
  if ((this_00 != (FVariant *)0x0) && (this_00->Type == Bool)) {
    bVar1 = FVariant::GetValue<bool>(this_00);
    return bVar1;
  }
  return param_2;
}

// GetMediaOptionDefault @ 146c2ad80

FVariant * __thiscall UMediaSource::GetMediaOptionDefault(UMediaSource *this,FName *param_1)

{
  FVariant *pFVar1;
  
  pFVar1 = TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
           ::Find((TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                   *)&this->MediaOptionsMap,*param_1);
  return pFVar1;
}

// GetPrivateStaticClass @ 146c2cd50

UClass * __cdecl UMediaSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaSource",
               &Z_Registration_Info_UClass_UMediaSource.InnerSingleton,
               StaticRegisterNativesUMediaSource,0x80,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaSource>,
               InternalVTableHelperCtorCaller<UMediaSource>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaSource.InnerSingleton;
}

// GetSpawnFromFileExtensionDelegates @ 146c2d5e0

TMap<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>,0>_>
* __cdecl UMediaSource::GetSpawnFromFileExtensionDelegates(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UMediaSource::GetSpawnFromFileExtensionDelegates'::__l2::
             _dynamic_atexit_destructor_for__Delegates__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &Delegates;
}

// GetUrl @ 146c2e100

FString * __thiscall UMediaSource::GetUrl(UMediaSource *this,FString *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Public\\MediaSource.h"
             ,0x39,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// HasMediaOption @ 146c2ee10

bool __thiscall UMediaSource::HasMediaOption(UMediaSource *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if ((int)this->_padding_ != *(int *)&(this->MediaOptionsMap).field_0xc) {
    puVar4 = *(undefined1 **)&(this->MediaOptionsMap).field_0x18;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->MediaOptionsMap).field_0x10;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->MediaOptionsMap).field_0x20 - 1U &
                              FVar1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)(this->_padding_ + (longlong)iVar3 * 0x28) == FVar1) goto LAB_146c2ee7c;
        iVar3 = *(int *)(this->_padding_ + 0x20 + (longlong)iVar3 * 0x28);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_146c2ee7c:
  return iVar3 != -1;
}

// RegisterSpawnFromFileExtension @ 146c314e0

void __cdecl
UMediaSource::RegisterSpawnFromFileExtension
          (FString *param_1,
          TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>
          *param_2)

{
  TSet<TTuple<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *this;
  FString *local_18;
  TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy> *local_10;
  
  this = (TSet<TTuple<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *)GetSpawnFromFileExtensionDelegates();
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_const_&,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_&>_>
            (this,(TPairInitializer<FString_const_&,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_&>
                   *)&stack0x00000008,(bool *)&local_18);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// SetMediaOption @ 146c36350

void __thiscall UMediaSource::SetMediaOption(UMediaSource *this,FName *param_1,FVariant *param_2)

{
  TPairInitializer<FName_const_&,FVariant_&> local_res8 [2];
  FName *local_18;
  FVariant *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FVariant_&>_>
            ((TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
              *)&this->MediaOptionsMap,local_res8,(bool *)&local_18);
  return;
}

// SetMediaOptionBool @ 146c36380

void __thiscall UMediaSource::SetMediaOptionBool(UMediaSource *this,FName *param_1,bool param_2)

{
  FName *pFVar1;
  undefined7 uVar2;
  uint local_res18 [2];
  undefined4 local_f8 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f0;
  FName *local_e0;
  undefined4 *local_d8;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_c8;
  
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  pFVar1 = param_1;
  FArchiveState::FArchiveState((FArchiveState *)&local_c8);
  local_c8._padding_ = 0;
  local_c8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_c8.Bytes = &local_f0;
  uVar2 = (undefined7)((ulonglong)pFVar1 >> 8);
  local_c8.ArchiveName.ComparisonIndex.Value = 0;
  local_c8.ArchiveName.Number = 0;
  FArchiveState::SetIsSaving((FArchiveState *)&local_c8,true);
  (**(code **)(local_c8._padding_ + 0x108))(&local_c8,CONCAT71(uVar2,1));
  local_c8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  if (*(ulonglong *)(local_c8._padding_ + 8) < *(ulonglong *)local_c8._padding_ + 4) {
    local_res18[0] = 0;
    if ((local_c8._padding_ & 1U) == 0) {
      local_res18[0] = (uint)param_2;
    }
    TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_c8,local_res18,4);
    if (1 < local_res18[0]) {
      FArchiveState::SetError((FArchiveState *)&local_c8);
    }
  }
  else {
    *(ulonglong *)local_c8._padding_ = *(ulonglong *)local_c8._padding_ + 4;
  }
  local_f8[0] = 2;
  FArchive::~FArchive((FArchive *)&local_c8);
  local_d8 = local_f8;
  local_e0 = param_1;
  TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FVariant_&>_>
            ((TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
              *)&this->MediaOptionsMap,(TPairInitializer<FName_const_&,FVariant_&> *)local_res18,
             (bool *)&local_e0);
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  return;
}

// SetMediaOptionDouble @ 146c364d0

void __thiscall UMediaSource::SetMediaOptionDouble(UMediaSource *this,FName *param_1,double param_2)

{
  FName *pFVar1;
  undefined7 uVar2;
  TPairInitializer<FName_const_&,FVariant_&> local_res8;
  undefined4 local_f8 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f0;
  FName *local_e0;
  undefined4 *local_d8;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_c8;
  
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  local_res8.Value = (FVariant *)0x0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  pFVar1 = param_1;
  local_res8.Key = (FName *)param_2;
  FArchiveState::FArchiveState((FArchiveState *)&local_c8);
  local_c8._padding_ = 0;
  local_c8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_c8.Bytes = &local_f0;
  uVar2 = (undefined7)((ulonglong)pFVar1 >> 8);
  local_c8.ArchiveName.ComparisonIndex.Value = 0;
  local_c8.ArchiveName.Number = 0;
  FArchiveState::SetIsSaving((FArchiveState *)&local_c8,true);
  (**(code **)(local_c8._padding_ + 0x108))(&local_c8,CONCAT71(uVar2,1));
  local_c8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  if (*(double **)(local_c8._padding_ + 8) < *(double **)local_c8._padding_ + 1) {
    if ((local_c8._padding_ & 0x10000U) == 0) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_c8,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_c8,(ulong64 *)&local_res8);
    }
  }
  else {
    local_res8.Key = (FName *)**(double **)local_c8._padding_;
    *(longlong *)local_c8._padding_ = *(longlong *)local_c8._padding_ + 8;
  }
  local_f8[0] = 8;
  FArchive::~FArchive((FArchive *)&local_c8);
  local_d8 = local_f8;
  local_e0 = param_1;
  TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FVariant_&>_>
            ((TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
              *)&this->MediaOptionsMap,&local_res8,(bool *)&local_e0);
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  return;
}

// SetMediaOptionFloat @ 146c36610

void __thiscall UMediaSource::SetMediaOptionFloat(UMediaSource *this,FName *param_1,float param_2)

{
  FName *pFVar1;
  undefined7 uVar2;
  double local_res8 [3];
  undefined4 local_f8 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f0;
  FName *local_e0;
  undefined4 *local_d8;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_c8;
  
  local_res8[0] = (double)param_2;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  local_res8[1] = 0.0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  pFVar1 = param_1;
  FArchiveState::FArchiveState((FArchiveState *)&local_c8);
  local_c8._padding_ = 0;
  local_c8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_c8.Bytes = &local_f0;
  uVar2 = (undefined7)((ulonglong)pFVar1 >> 8);
  local_c8.ArchiveName.ComparisonIndex.Value = 0;
  local_c8.ArchiveName.Number = 0;
  FArchiveState::SetIsSaving((FArchiveState *)&local_c8,true);
  (**(code **)(local_c8._padding_ + 0x108))(&local_c8,CONCAT71(uVar2,1));
  local_c8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  if (*(double **)(local_c8._padding_ + 8) < *(double **)local_c8._padding_ + 1) {
    if ((local_c8._padding_ & 0x10000U) == 0) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_c8,local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_c8,(ulong64 *)local_res8);
    }
  }
  else {
    local_res8[0] = **(double **)local_c8._padding_;
    *(longlong *)local_c8._padding_ = *(longlong *)local_c8._padding_ + 8;
  }
  local_f8[0] = 8;
  FArchive::~FArchive((FArchive *)&local_c8);
  local_d8 = local_f8;
  local_e0 = param_1;
  TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FVariant_&>_>
            ((TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
              *)&this->MediaOptionsMap,
             (TPairInitializer<FName_const_&,FVariant_&> *)(local_res8 + 2),(bool *)&local_e0);
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  return;
}

// SetMediaOptionInt64 @ 146c36760

void __thiscall UMediaSource::SetMediaOptionInt64(UMediaSource *this,FName *param_1,long64 param_2)

{
  FName *pFVar1;
  undefined7 uVar2;
  TPairInitializer<FName_const_&,FVariant_&> local_res8;
  undefined4 local_f8 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f0;
  FName *local_e0;
  undefined4 *local_d8;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_c8;
  
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  local_res8.Value = (FVariant *)0x0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  pFVar1 = param_1;
  local_res8.Key = (FName *)param_2;
  FArchiveState::FArchiveState((FArchiveState *)&local_c8);
  local_c8._padding_ = 0;
  local_c8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_c8.Bytes = &local_f0;
  uVar2 = (undefined7)((ulonglong)pFVar1 >> 8);
  local_c8.ArchiveName.ComparisonIndex.Value = 0;
  local_c8.ArchiveName.Number = 0;
  FArchiveState::SetIsSaving((FArchiveState *)&local_c8,true);
  (**(code **)(local_c8._padding_ + 0x108))(&local_c8,CONCAT71(uVar2,1));
  local_c8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  if (*(long64 **)(local_c8._padding_ + 8) < *(long64 **)local_c8._padding_ + 1) {
    if ((local_c8._padding_ & 0x10000U) == 0) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_c8,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_c8,(ulong64 *)&local_res8);
    }
  }
  else {
    local_res8.Key = (FName *)**(long64 **)local_c8._padding_;
    *(longlong *)local_c8._padding_ = *(longlong *)local_c8._padding_ + 8;
  }
  local_f8[0] = 0xf;
  FArchive::~FArchive((FArchive *)&local_c8);
  local_d8 = local_f8;
  local_e0 = param_1;
  TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FVariant_&>_>
            ((TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
              *)&this->MediaOptionsMap,&local_res8,(bool *)&local_e0);
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  return;
}

// SetMediaOptionString @ 146c368a0

void __thiscall
UMediaSource::SetMediaOptionString(UMediaSource *this,FName *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  undefined7 uVar3;
  FName *local_res8;
  undefined4 local_f8 [2];
  void *local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [24];
  FArchiveState local_c8;
  undefined8 local_38;
  void **local_30;
  undefined8 local_28;
  
  pFVar2 = ::FString::FString((FString *)local_e0,param_2);
  local_c8._padding_ = 0;
  local_c8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_f0 = (void *)0x0;
  local_c8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_c8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_e8 = 0;
  local_c8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_c8._40_8_ = 0;
  local_res8 = (FName *)0x0;
  local_c8.ArSerializingDefaults = 0;
  local_c8.ArPortFlags = 0;
  local_c8.ArMaxSerializeSize = 0;
  local_c8.ArUEVer.FileVersionUE4 = 0;
  local_c8.ArUEVer.FileVersionUE5 = 0;
  local_c8.ArLicenseeUEVer = 0;
  local_c8.ArEngineVer.Major = 0;
  local_c8.ArEngineVer.Minor = 0;
  local_c8.ArEngineVer.Patch = 0;
  local_c8.ArEngineVer._6_2_ = 0;
  local_c8.ArEngineVer.Changelist = 0;
  local_c8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_c8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_c8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_c8.SerializedProperty = (FProperty *)0x0;
  local_c8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_c8.bCustomVersionsAreReset = false;
  local_c8._129_7_ = 0;
  local_c8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_c8);
  local_38 = 0;
  local_c8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_30 = &local_f0;
  uVar3 = (undefined7)((ulonglong)param_2 >> 8);
  local_28 = 0;
  FArchiveState::SetIsSaving(&local_c8,true);
  (**(code **)(local_c8._padding_ + 0x108))(&local_c8,CONCAT71(uVar3,1));
  local_c8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  ::operator<<((FArchive *)&local_c8,pFVar2);
  local_f8[0] = 0x18;
  FArchive::~FArchive((FArchive *)&local_c8);
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  local_e0._8_8_ = local_f8;
  local_e0._0_8_ = param_1;
  TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FVariant_&>_>
            ((TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
              *)&this->MediaOptionsMap,(TPairInitializer<FName_const_&,FVariant_&> *)&local_res8,
             (bool *)local_e0);
  if (local_f0 != (void *)0x0) {
    FMemory::Free(local_f0);
  }
  return;
}

// SpawnMediaSourceForString @ 146c37bd0

/* WARNING: Enum "Type": Some values do not have unique names */

UMediaSource * __cdecl UMediaSource::SpawnMediaSourceForString(FString *param_1,UObject *param_2)

{
  ForAnyElementType FVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  UStreamMediaSource *pUVar6;
  TSet<TTuple<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *this;
  longlong lVar7;
  UStreamMediaSource *pUVar8;
  UStreamMediaSource *this_00;
  FString local_48;
  FReadAccessScope local_38;
  
  pUVar8 = (UStreamMediaSource *)0x0;
  iVar4 = ::FString::Find(param_1,L"://",3,IgnoreCase,FromStart,-1);
  if (iVar4 == -1) {
    FPaths::GetExtension(&local_48,param_1,false);
    this = (TSet<TTuple<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
            *)GetSpawnFromFileExtensionDelegates();
    iVar4 = local_48.Data.ArrayNum + -1;
    FVar1.Data = local_48.Data.AllocatorInstance.Data;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar1.Data);
    iVar4 = TSet<TTuple<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>(this,uVar5,&local_48);
    pUVar6 = pUVar8;
    if (iVar4 != -1) {
      lVar7 = (longlong)iVar4 * 0x30 + *(longlong *)&this->Elements;
      this_00 = (UStreamMediaSource *)(lVar7 + 0x10);
      if (lVar7 == 0) {
        this_00 = pUVar8;
      }
      pUVar6 = (UStreamMediaSource *)0x0;
      if ((this_00 != (UStreamMediaSource *)0x0) &&
         (bVar2 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00), bVar2)) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_38);
        if ((int)this_00->_padding_ != 0) {
          pUVar8 = (UStreamMediaSource *)this_00->_padding_;
        }
        pUVar6 = (UStreamMediaSource *)
                 (**(code **)(pUVar8->_padding_ + 0x60))(pUVar8,param_1,param_2);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar6 != (UStreamMediaSource *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  else {
    pUVar6 = NewObject<UStreamMediaSource>
                       (param_2,(FName)0x0,RF_Transactional,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UStreamMediaSource *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    ::FString::operator=(&pUVar6->StreamUrl,param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UStreamMediaSource *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
  }
  if ((pUVar6 != (UStreamMediaSource *)0x0) &&
     (cVar3 = (**(code **)(pUVar6->_padding_ + 0x2b8))(pUVar6), cVar3 == '\0')) {
    if (1 < (byte)LogMediaAssets._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
    }
    return (UMediaSource *)0x0;
  }
  return (UMediaSource *)pUVar6;
}

// StaticRegisterNativesUMediaSource @ 146c37f90

void __cdecl UMediaSource::StaticRegisterNativesUMediaSource(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UMediaSource_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ToUObject @ 146c38e20

UObject * __thiscall UMediaSource::ToUObject(UMediaSource *this)

{
  return (UObject *)&this[-1].MediaOptionsMap.field_0x28;
}

// UnregisterSpawnFromFileExtension @ 146c391a0

void __cdecl UMediaSource::UnregisterSpawnFromFileExtension(FString *param_1)

{
  int iVar1;
  uint uVar2;
  TSet<TTuple<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *this;
  int iVar3;
  wchar_t *pwVar4;
  
  this = (TSet<TTuple<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
          *)GetSpawnFromFileExtensionDelegates();
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar4 = L"";
      iVar3 = 0;
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
    TSet<TTuple<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FString>(this,uVar2,param_1);
  }
  return;
}

// Validate @ 146c3a910

bool __thiscall UMediaSource::Validate(UMediaSource *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Public\\MediaSource.h"
             ,0x41,L"Pure virtual not implemented (%s)");
  return false;
}

// execGetUrl @ 146c3dda0

void __cdecl UMediaSource::execGetUrl(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  void *local_18 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_18);
  if (param_3 != puVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar1 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
    puVar1[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// execSetMediaOptionBool @ 146c41c10

void __cdecl UMediaSource::execSetMediaOptionBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ulonglong uVar2;
  UObject *pUVar3;
  undefined7 uVar4;
  uchar *puVar5;
  bool bVar6;
  int local_res8 [2];
  TPairInitializer<FName_const_&,FVariant_&> local_res10;
  uchar local_res20 [8];
  undefined4 local_108 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_100;
  uchar *local_f0;
  undefined4 *local_e8;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_d8;
  
  local_res20[0] = 0;
  local_res20[1] = 0;
  local_res20[2] = 0;
  local_res20[3] = 0;
  local_res20[4] = 0;
  local_res20[5] = 0;
  local_res20[6] = 0;
  local_res20[7] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res8[0] = 0;
  puVar5 = local_res20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    pUVar3 = (UObject *)local_res8;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,pUVar3,pFVar1);
  }
  else {
    pUVar3 = param_2->Object;
    FFrame::Step(param_2,pUVar3,local_res8);
  }
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  local_res10.Key = (FName *)0x0;
  bVar6 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_d8);
  local_d8._padding_ = 0;
  local_d8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_d8.Bytes = &local_100;
  uVar4 = (undefined7)((ulonglong)pUVar3 >> 8);
  local_d8.ArchiveName.ComparisonIndex.Value = 0;
  local_d8.ArchiveName.Number = 0;
  FArchiveState::SetIsSaving((FArchiveState *)&local_d8,true);
  (**(code **)(local_d8._padding_ + 0x108))(&local_d8,CONCAT71(uVar4,1));
  local_d8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  if (*(ulonglong *)(local_d8._padding_ + 8) < *(ulonglong *)local_d8._padding_ + 4) {
    uVar2 = (ulonglong)local_res10.Key >> 0x20;
    local_res10.Key = (FName *)((ulonglong)local_res10.Key & 0xffffffff00000000);
    if ((local_d8._padding_ & 1U) == 0) {
      local_res10.Key = (FName *)CONCAT44((int)uVar2,(uint)bVar6);
    }
    TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_d8,&local_res10,4);
    if (1 < (uint)local_res10.Key) {
      FArchiveState::SetError((FArchiveState *)&local_d8);
    }
  }
  else {
    *(ulonglong *)local_d8._padding_ = *(ulonglong *)local_d8._padding_ + 4;
  }
  local_108[0] = 2;
  FArchive::~FArchive((FArchive *)&local_d8);
  local_e8 = local_108;
  local_f0 = puVar5;
  TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FVariant_&>_>
            ((TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
              *)&param_1[1].field_0x8,&local_res10,(bool *)&local_f0);
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
  return;
}

// execSetMediaOptionFloat @ 146c41e00

void __cdecl UMediaSource::execSetMediaOptionFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  undefined7 uVar3;
  uchar *puVar4;
  float local_res8 [2];
  TPairInitializer<FName_const_&,FVariant_&> local_res10;
  uchar local_res20 [8];
  uchar *local_108;
  undefined4 *local_100;
  undefined4 local_f8 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f0;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_d8;
  
  local_res20[0] = 0;
  local_res20[1] = 0;
  local_res20[2] = 0;
  local_res20[3] = 0;
  local_res20[4] = 0;
  local_res20[5] = 0;
  local_res20[6] = 0;
  local_res20[7] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res8[0] = 0.0;
  puVar4 = local_res20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    pUVar2 = (UObject *)local_res8;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,pUVar2,pFVar1);
  }
  else {
    pUVar2 = param_2->Object;
    FFrame::Step(param_2,pUVar2,local_res8);
  }
  local_res10.Key = (FName *)(double)local_res8[0];
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_108 = (uchar *)0x0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_d8);
  local_d8._padding_ = 0;
  local_d8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_d8.Bytes = &local_f0;
  uVar3 = (undefined7)((ulonglong)pUVar2 >> 8);
  local_d8.ArchiveName.ComparisonIndex.Value = 0;
  local_d8.ArchiveName.Number = 0;
  FArchiveState::SetIsSaving((FArchiveState *)&local_d8,true);
  (**(code **)(local_d8._padding_ + 0x108))(&local_d8,CONCAT71(uVar3,1));
  local_d8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  if (*(double **)(local_d8._padding_ + 8) < *(double **)local_d8._padding_ + 1) {
    if ((local_d8._padding_ & 0x10000U) == 0) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_d8,&local_res10,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_d8,(ulong64 *)&local_res10);
    }
  }
  else {
    local_res10.Key = (FName *)**(double **)local_d8._padding_;
    *(longlong *)local_d8._padding_ = *(longlong *)local_d8._padding_ + 8;
  }
  local_f8[0] = 8;
  FArchive::~FArchive((FArchive *)&local_d8);
  local_100 = local_f8;
  local_108 = puVar4;
  TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FVariant_&>_>
            ((TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
              *)&param_1[1].field_0x8,&local_res10,(bool *)&local_108);
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  return;
}

// execSetMediaOptionInt64 @ 146c41ff0

void __cdecl UMediaSource::execSetMediaOptionInt64(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  undefined7 uVar3;
  FVariant **ppFVar4;
  TPairInitializer<FName_const_&,FVariant_&> local_res8;
  FName *local_res20;
  FVariant **local_108;
  undefined4 *local_100;
  undefined4 local_f8 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f0;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_d8;
  
  local_res8.Value = (FVariant *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8.Value,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8.Value);
  }
  local_res20 = (FName *)0x0;
  ppFVar4 = &local_res8.Value;
  if ((FVariant **)param_2->MostRecentPropertyAddress != (FVariant **)0x0) {
    ppFVar4 = (FVariant **)param_2->MostRecentPropertyAddress;
  }
  FInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    pUVar2 = (UObject *)&local_res20;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,pUVar2,pFVar1);
  }
  else {
    pUVar2 = param_2->Object;
    FFrame::Step(param_2,pUVar2,&local_res20);
  }
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  local_108 = (FVariant **)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res8.Key = local_res20;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  local_d8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_d8);
  local_d8._padding_ = 0;
  local_d8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_d8.Bytes = &local_f0;
  uVar3 = (undefined7)((ulonglong)pUVar2 >> 8);
  local_d8.ArchiveName.ComparisonIndex.Value = 0;
  local_d8.ArchiveName.Number = 0;
  FArchiveState::SetIsSaving((FArchiveState *)&local_d8,true);
  (**(code **)(local_d8._padding_ + 0x108))(&local_d8,CONCAT71(uVar3,1));
  local_d8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  if (*(undefined8 **)(local_d8._padding_ + 8) < *(undefined8 **)local_d8._padding_ + 1) {
    if ((local_d8._padding_ & 0x10000U) == 0) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_d8,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_d8,(ulong64 *)&local_res8);
    }
  }
  else {
    local_res8.Key = (FName *)**(undefined8 **)local_d8._padding_;
    *(longlong *)local_d8._padding_ = *(longlong *)local_d8._padding_ + 8;
  }
  local_f8[0] = 0xf;
  FArchive::~FArchive((FArchive *)&local_d8);
  local_100 = local_f8;
  local_108 = ppFVar4;
  TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FVariant_&>_>
            ((TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
              *)&param_1[1].field_0x8,&local_res8,(bool *)&local_108);
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  return;
}

// execSetMediaOptionString @ 146c421d0

void __cdecl UMediaSource::execSetMediaOptionString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *_Src;
  undefined7 uVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  FVariant *local_res10;
  undefined1 local_118 [12];
  int iStack_10c;
  undefined1 local_108 [24];
  void *local_f0;
  undefined8 local_e8;
  FArchiveState local_d8;
  undefined8 local_48;
  void **local_40;
  undefined8 local_38;
  
  local_res10 = (FVariant *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_108._0_8_ = (UObject *)0x0;
  local_108._8_8_ = 0;
  pFVar5 = (FScriptContainerElement *)&local_res10;
  if ((FScriptContainerElement *)param_2->MostRecentPropertyAddress !=
      (FScriptContainerElement *)0x0) {
    pFVar5 = (FScriptContainerElement *)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    pUVar2 = (UObject *)local_108;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,pUVar2,pFVar1);
  }
  else {
    pUVar2 = param_2->Object;
    FFrame::Step(param_2,pUVar2,local_108);
  }
  _Src = (UObject *)local_108._0_8_;
  local_118._0_8_ = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_108._8_4_;
  stack0xfffffffffffffef0 = (undefined1 *)CONCAT44(iStack_10c,local_108._8_4_);
  if (local_108._8_4_ == 0) {
    stack0xfffffffffffffef0 = (undefined1 *)(local_108._8_8_ & 0xffffffff);
    _Src = pUVar2;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_108._8_4_,0,(ForAnyElementType *)local_118,local_108._8_4_,
               (int *)(local_118 + 0xc));
    memcpy((void *)local_118._0_8_,_Src,lVar4 * 2);
  }
  local_f0 = (void *)0x0;
  local_e8 = 0;
  local_d8._padding_ = 0;
  local_d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_res8 = (undefined1  [8])0x0;
  local_d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_d8._40_8_ = 0;
  local_d8.ArSerializingDefaults = 0;
  local_d8.ArPortFlags = 0;
  local_d8.ArMaxSerializeSize = 0;
  local_d8.ArUEVer.FileVersionUE4 = 0;
  local_d8.ArUEVer.FileVersionUE5 = 0;
  local_d8.ArLicenseeUEVer = 0;
  local_d8.ArEngineVer.Major = 0;
  local_d8.ArEngineVer.Minor = 0;
  local_d8.ArEngineVer.Patch = 0;
  local_d8.ArEngineVer._6_2_ = 0;
  local_d8.ArEngineVer.Changelist = 0;
  local_d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_d8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_d8.SerializedProperty = (FProperty *)0x0;
  local_d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_d8.bCustomVersionsAreReset = false;
  local_d8._129_7_ = 0;
  local_d8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_d8);
  local_48 = 0;
  local_d8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_40 = &local_f0;
  uVar3 = (undefined7)((ulonglong)_Src >> 8);
  local_38 = 0;
  FArchiveState::SetIsSaving(&local_d8,true);
  (**(code **)(local_d8._padding_ + 0x108))(&local_d8,CONCAT71(uVar3,1));
  local_d8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  ::operator<<((FArchive *)&local_d8,(FString *)local_118);
  local_108._16_4_ = 0x18;
  FArchive::~FArchive((FArchive *)&local_d8);
  if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._0_8_);
  }
  unique0x00009c00 = local_108 + 0x10;
  local_118._0_8_ = pFVar5;
  TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FVariant_&>_>
            ((TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
              *)&param_1[1].field_0x8,(TPairInitializer<FName_const_&,FVariant_&> *)local_res8,
             (bool *)local_118);
  if (local_f0 != (void *)0x0) {
    FMemory::Free(local_f0);
  }
  if ((UObject *)local_108._0_8_ != (UObject *)0x0) {
    FMemory::Free((void *)local_108._0_8_);
  }
  return;
}

// execValidate @ 146c43870

void __cdecl UMediaSource::execValidate(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2b8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

