// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 19

// StaticClass @ 146c11970

UClass * __cdecl UPlatformMediaSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlatformMediaSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"PlatformMediaSource",
               &Z_Registration_Info_UClass_UPlatformMediaSource.InnerSingleton,
               StaticRegisterNativesUPlatformMediaSource,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPlatformMediaSource>,
               InternalVTableHelperCtorCaller<UPlatformMediaSource>,local_res8,
               UMediaSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlatformMediaSource.InnerSingleton;
}

// UPlatformMediaSource @ 146c1dca0

UPlatformMediaSource * __thiscall
UPlatformMediaSource::UPlatformMediaSource(UPlatformMediaSource *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  (this->MediaSource).field0_0x0.DebugPtr = (UMediaSource *)0x0;
  return this;
}

// UPlatformMediaSource @ 146c1dd10

UPlatformMediaSource * __thiscall
UPlatformMediaSource::UPlatformMediaSource(UPlatformMediaSource *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  (this->MediaSource).field0_0x0.DebugPtr = (UMediaSource *)0x0;
  return this;
}

// ~UPlatformMediaSource @ 146c1eda0

void __thiscall UPlatformMediaSource::~UPlatformMediaSource(UPlatformMediaSource *this)

{
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&UMediaSource::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UMediaSource::_vftable__for__IMediaOptions__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// GetDesiredPlayerName @ 146c289c0

FName __thiscall UPlatformMediaSource::GetDesiredPlayerName(UPlatformMediaSource *this)

{
  longlong lVar1;
  FName in_RDX;
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 0x28))(lVar1 + 0x28);
    return in_RDX;
  }
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetMediaOption @ 146c2a7a0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UPlatformMediaSource::GetMediaOption
          (UPlatformMediaSource *this,FString *__return_storage_ptr__,FName *param_1,
          FString *param_2)

{
  longlong lVar1;
  FVariant *this_00;
  FString local_18;
  
  if (bIsGettingOption) {
    if (2 < (byte)LogMediaAssets._0_1_) {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)&this[-1]._padding_,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    ::FString::FString(__return_storage_ptr__,param_2);
    return __return_storage_ptr__;
  }
  bIsGettingOption = true;
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    this_00 = TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
              ::Find((TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                      *)&this->_padding_,*param_1);
    if ((this_00 == (FVariant *)0x0) || (this_00->Type != String)) {
      ::FString::FString(__return_storage_ptr__,param_2);
    }
    else {
      FVariant::GetValue<FString>(this_00,__return_storage_ptr__);
    }
  }
  else {
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x18))(lVar1 + 0x28);
  }
  bIsGettingOption = false;
  return __return_storage_ptr__;
}

// GetMediaOption @ 146c2a890

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
UPlatformMediaSource::GetMediaOption
          (UPlatformMediaSource *this,FText *__return_storage_ptr__,FName *param_1,FText *param_2)

{
  ITextData *pIVar1;
  longlong lVar2;
  undefined1 local_28 [8];
  FString local_20;
  
  if (bIsGettingOption) {
    if (2 < (byte)LogMediaAssets._0_1_) {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)&this[-1]._padding_,&local_20,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
      if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.Data.AllocatorInstance.Data);
      }
    }
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (param_2->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_28);
    }
    __return_storage_ptr__->Flags = param_2->Flags;
    return __return_storage_ptr__;
  }
  bIsGettingOption = true;
  lVar2 = this->_padding_;
  if (lVar2 == 0) {
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (param_2->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_28);
    }
    __return_storage_ptr__->Flags = param_2->Flags;
  }
  else {
    (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(lVar2 + 0x28);
  }
  bIsGettingOption = false;
  return __return_storage_ptr__;
}

// GetMediaOption @ 146c2a990

/* WARNING: Enum "Type": Some values do not have unique names */

double __thiscall
UPlatformMediaSource::GetMediaOption(UPlatformMediaSource *this,FName *param_1,double param_2)

{
  longlong lVar1;
  FVariant *this_00;
  FString local_28 [2];
  
  if (bIsGettingOption) {
    if (2 < (byte)LogMediaAssets._0_1_) {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)&this[-1]._padding_,local_28,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
        return param_2;
      }
    }
  }
  else {
    bIsGettingOption = true;
    lVar1 = this->_padding_;
    if (lVar1 == 0) {
      this_00 = TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                ::Find((TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                        *)&this->_padding_,*param_1);
      if ((this_00 != (FVariant *)0x0) && (this_00->Type == Double)) {
        param_2 = FVariant::GetValue<double>(this_00);
      }
    }
    else {
      param_2 = (double)(**(code **)(*(longlong *)(lVar1 + 0x28) + 0x28))(lVar1 + 0x28);
    }
    bIsGettingOption = false;
  }
  return param_2;
}

// GetMediaOption @ 146c2aa60

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall
UPlatformMediaSource::GetMediaOption(UPlatformMediaSource *this,FName *param_1,long64 param_2)

{
  longlong lVar1;
  long64 lVar2;
  FVariant *this_00;
  FString local_18;
  
  if (bIsGettingOption) {
    if (2 < (byte)LogMediaAssets._0_1_) {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)&this[-1]._padding_,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return param_2;
      }
    }
  }
  else {
    bIsGettingOption = true;
    lVar1 = this->_padding_;
    if (lVar1 != 0) {
      lVar2 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x20))(lVar1 + 0x28);
      bIsGettingOption = false;
      return lVar2;
    }
    this_00 = TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
              ::Find((TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                      *)&this->_padding_,*param_1);
    if ((this_00 != (FVariant *)0x0) && (this_00->Type == Int64)) {
      param_2 = FVariant::GetValue<__int64>(this_00);
    }
    bIsGettingOption = false;
  }
  return param_2;
}

// GetMediaOption @ 146c2ab30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UPlatformMediaSource::GetMediaOption(UPlatformMediaSource *this,FName *param_1,bool param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  FVariant *this_00;
  FString local_18;
  
  if (bIsGettingOption) {
    if (2 < (byte)LogMediaAssets._0_1_) {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)&this[-1]._padding_,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return param_2;
      }
    }
  }
  else {
    bIsGettingOption = true;
    lVar1 = this->_padding_;
    if (lVar1 != 0) {
      uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x30))(lVar1 + 0x28);
      bIsGettingOption = false;
      return (bool)uVar2;
    }
    this_00 = TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
              ::Find((TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                      *)&this->_padding_,*param_1);
    if ((this_00 != (FVariant *)0x0) && (this_00->Type == Bool)) {
      param_2 = FVariant::GetValue<bool>(this_00);
    }
    bIsGettingOption = false;
  }
  return param_2;
}

// GetMediaSource @ 146c2adf0

UMediaSource * __thiscall UPlatformMediaSource::GetMediaSource(UPlatformMediaSource *this)

{
  return (this->MediaSource).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 146c2d030

UClass * __cdecl UPlatformMediaSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlatformMediaSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"PlatformMediaSource",
               &Z_Registration_Info_UClass_UPlatformMediaSource.InnerSingleton,
               StaticRegisterNativesUPlatformMediaSource,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPlatformMediaSource>,
               InternalVTableHelperCtorCaller<UPlatformMediaSource>,local_res8,
               UMediaSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlatformMediaSource.InnerSingleton;
}

// GetUrl @ 146c2e140

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UPlatformMediaSource::GetUrl(UPlatformMediaSource *this,FString *__return_storage_ptr__)

{
  UMediaSource *pUVar1;
  FString *pFVar2;
  bool bVar3;
  FString local_28;
  void *local_18 [2];
  
  if (bIsGettingUrl) {
    if (2 < (byte)LogMediaAssets._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  bIsGettingUrl = true;
  pUVar1 = (this->MediaSource).field0_0x0.DebugPtr;
  bVar3 = pUVar1 == (UMediaSource *)0x0;
  if (bVar3) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar2 = &local_28;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  else {
    pFVar2 = (FString *)(**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,local_18);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((!bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  bIsGettingUrl = false;
  return __return_storage_ptr__;
}

// HasMediaOption @ 146c2eea0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UPlatformMediaSource::HasMediaOption(UPlatformMediaSource *this,FName *param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  bool bVar3;
  FString local_18;
  
  if (bIsHasOption) {
    if (2 < (byte)LogMediaAssets._0_1_) {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)&this[-1]._padding_,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  bIsHasOption = true;
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x38))(lVar1 + 0x28);
    bIsHasOption = false;
    return (bool)uVar2;
  }
  bVar3 = UMediaSource::HasMediaOption((UMediaSource *)this,param_1);
  bIsHasOption = false;
  return bVar3;
}

// PreSave @ 146c312d0

void __thiscall
UPlatformMediaSource::PreSave(UPlatformMediaSource *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// Serialize @ 146c35680

void __thiscall UPlatformMediaSource::Serialize(UPlatformMediaSource *this,FArchive *param_1)

{
  int iVar1;
  FString local_18;
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FSequencerObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FMediaFrameworkObjectVersion::GUID);
  FArchiveState::CustomVer((FArchiveState *)param_1,&FMediaFrameworkObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FSequencerObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) == 0) || (0 < iVar1)) {
    (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->MediaSource);
  }
  else {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    ::operator<<(param_1,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// Serialize @ 146c35740

void __thiscall
UPlatformMediaSource::Serialize(UPlatformMediaSource *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  FString local_18;
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FSequencerObjectVersion::GUID);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FMediaFrameworkObjectVersion::GUID);
  FArchiveState::CustomVer(this_00,&FMediaFrameworkObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer(this_00,&FSequencerObjectVersion::GUID);
  if ((this_00->ArIsLoading == 0) || (0 < iVar1)) {
    (**(code **)(this_00->_padding_ + 0x150))(this_00,&this->MediaSource);
  }
  else {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    ::operator<<((FArchive *)this_00,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// StaticRegisterNativesUPlatformMediaSource @ 146c38030

void __cdecl UPlatformMediaSource::StaticRegisterNativesUPlatformMediaSource(void)

{
  return;
}

// Validate @ 146c3a940

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UPlatformMediaSource::Validate(UPlatformMediaSource *this)

{
  UMediaSource *pUVar1;
  undefined1 uVar2;
  FString local_18;
  
  if (bIsValidating) {
    if (2 < (byte)LogMediaAssets._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaAssets);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  bIsValidating = true;
  pUVar1 = (this->MediaSource).field0_0x0.DebugPtr;
  if (pUVar1 != (UMediaSource *)0x0) {
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x2b8))();
    bIsValidating = false;
    return (bool)uVar2;
  }
  bIsValidating = false;
  return false;
}

