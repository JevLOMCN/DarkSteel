// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 13

// StaticClass @ 146164190

UClass * __cdecl UMovieSceneShotMetaData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneShotMetaData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneShotMetaData",
               &Z_Registration_Info_UClass_UMovieSceneShotMetaData.InnerSingleton,
               StaticRegisterNativesUMovieSceneShotMetaData,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneShotMetaData>,
               InternalVTableHelperCtorCaller<UMovieSceneShotMetaData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneShotMetaData.InnerSingleton;
}

// UMovieSceneShotMetaData @ 146183400

UMovieSceneShotMetaData * __thiscall
UMovieSceneShotMetaData::UMovieSceneShotMetaData
          (UMovieSceneShotMetaData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->bIsNoGood).bIsSet = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneMetaDataInterface__;
  (this->bIsFlagged).bIsSet = false;
  (this->bIsRecorded).bIsSet = false;
  (this->bIsSubSequence).bIsSet = false;
  (this->FavoriteRating).bIsSet = false;
  return this;
}

// UMovieSceneShotMetaData @ 146183450

UMovieSceneShotMetaData * __thiscall
UMovieSceneShotMetaData::UMovieSceneShotMetaData
          (UMovieSceneShotMetaData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->bIsNoGood).bIsSet = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneMetaDataInterface__;
  (this->bIsFlagged).bIsSet = false;
  (this->bIsRecorded).bIsSet = false;
  (this->bIsSubSequence).bIsSet = false;
  (this->FavoriteRating).bIsSet = false;
  return this;
}

// ~UMovieSceneShotMetaData @ 146185e20

void __thiscall UMovieSceneShotMetaData::~UMovieSceneShotMetaData(UMovieSceneShotMetaData *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IMovieSceneMetaDataInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ExtendAssetRegistryTags @ 1461a54f0

void __thiscall
UMovieSceneShotMetaData::ExtendAssetRegistryTags
          (UMovieSceneShotMetaData *this,FAssetRegistryTagsContext param_1)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  bool bVar4;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FAssetRegistryTag local_c8;
  FAssetRegistryTag local_a8;
  FAssetRegistryTag local_88;
  FAssetRegistryTag local_68;
  FAssetRegistryTag local_48;
  FString local_28;
  
  pwVar3 = L"No";
  if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
    pwVar2 = L"";
  }
  else {
    pwVar2 = L"No";
    if ((char)this->_padding_ != '\0') {
      pwVar2 = L"Yes";
    }
  }
  ::FString::FString(&local_118,pwVar2);
  local_c8.Name = AssetRegistryTag_bIsNoGood;
  local_c8.Value.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
  local_c8.Value.Data.ArrayNum = local_118.Data.ArrayNum;
  local_c8.Value.Data.ArrayMax = local_118.Data.ArrayMax;
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Type = TT_Alphabetical;
  local_c8.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_c8);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
    pwVar2 = L"";
  }
  else {
    pwVar2 = L"No";
    if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
      pwVar2 = L"Yes";
    }
  }
  ::FString::FString(&local_108,pwVar2);
  local_a8.Name = AssetRegistryTag_bIsFlagged;
  local_a8.Value.Data.AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
  local_a8.Value.Data.ArrayNum = local_108.Data.ArrayNum;
  local_a8.Value.Data.ArrayMax = local_108.Data.ArrayMax;
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Type = TT_Alphabetical;
  local_a8.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_a8);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (*(char *)((longlong)&this->_padding_ + 5) == '\0') {
    pwVar2 = L"";
  }
  else {
    pwVar2 = L"No";
    if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
      pwVar2 = L"Yes";
    }
  }
  ::FString::FString(&local_f8,pwVar2);
  local_88.Name = AssetRegistryTag_bIsRecorded;
  local_88.Value.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
  local_88.Value.Data.ArrayNum = local_f8.Data.ArrayNum;
  local_88.Value.Data.ArrayMax = local_f8.Data.ArrayMax;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Type = TT_Alphabetical;
  local_88.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_88);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (*(char *)((longlong)&this->_padding_ + 7) == '\0') {
    pwVar3 = L"";
  }
  else if (*(char *)((longlong)&this->_padding_ + 6) != '\0') {
    pwVar3 = L"Yes";
  }
  ::FString::FString(&local_e8,pwVar3);
  local_68.Name = AssetRegistryTag_bIsSubSequence;
  local_68.Value.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
  local_68.Value.Data.ArrayNum = local_e8.Data.ArrayNum;
  local_68.Value.Data.ArrayMax = local_e8.Data.ArrayMax;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Type = TT_Alphabetical;
  local_68.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_68);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  bVar4 = *(char *)((longlong)&this->_padding_ + 4) == '\0';
  if (bVar4) {
    pFVar1 = ::FString::FString(&local_28,L"");
  }
  else {
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_d8,(int)this->_padding_);
    pFVar1 = &local_d8;
  }
  local_48.Name = AssetRegistryTag_FavoriteRating;
  local_48.Value.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Value.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  local_48.Value.Data.ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  local_48.Type = TT_Alphabetical;
  local_48.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_48);
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((!bVar4) && (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return;
}

// GetFavoriteRatingByAssetData @ 1461b0cf0

bool __cdecl UMovieSceneShotMetaData::GetFavoriteRatingByAssetData(FAssetData *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  ForAnyElementType _Str;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FAssetData::GetTagValue<FString>(param_1,AssetRegistryTag_FavoriteRating,&local_18);
  bVar1 = ::FString::IsNumeric(&local_18);
  if (bVar1) {
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      _Str.Data = local_18.Data.AllocatorInstance.Data;
    }
    iVar2 = _wtoi((wchar_t *)_Str.Data);
    *param_2 = iVar2;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return true;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// GetIsFlaggedByAssetData @ 1461b12a0

bool __cdecl UMovieSceneShotMetaData::GetIsFlaggedByAssetData(FAssetData *param_1,bool *param_2)

{
  bool bVar1;
  
  bVar1 = UE::MovieScene::ShotMetaDataDetail::ParseAssetTag<bool>
                    (param_1,AssetRegistryTag_bIsFlagged,param_2);
  return bVar1;
}

// GetIsNoGoodByAssetData @ 1461b12c0

bool __cdecl UMovieSceneShotMetaData::GetIsNoGoodByAssetData(FAssetData *param_1,bool *param_2)

{
  bool bVar1;
  
  bVar1 = UE::MovieScene::ShotMetaDataDetail::ParseAssetTag<bool>
                    (param_1,AssetRegistryTag_bIsNoGood,param_2);
  return bVar1;
}

// GetIsRecordedByAssetData @ 1461b12e0

bool __cdecl UMovieSceneShotMetaData::GetIsRecordedByAssetData(FAssetData *param_1,bool *param_2)

{
  bool bVar1;
  
  bVar1 = UE::MovieScene::ShotMetaDataDetail::ParseAssetTag<bool>
                    (param_1,AssetRegistryTag_bIsRecorded,param_2);
  return bVar1;
}

// GetIsSubSequenceByAssetData @ 1461b1300

bool __cdecl UMovieSceneShotMetaData::GetIsSubSequenceByAssetData(FAssetData *param_1,bool *param_2)

{
  bool bVar1;
  
  bVar1 = UE::MovieScene::ShotMetaDataDetail::ParseAssetTag<bool>
                    (param_1,AssetRegistryTag_bIsSubSequence,param_2);
  return bVar1;
}

// GetPrivateStaticClass @ 1461b3020

UClass * __cdecl UMovieSceneShotMetaData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneShotMetaData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneShotMetaData",
               &Z_Registration_Info_UClass_UMovieSceneShotMetaData.InnerSingleton,
               StaticRegisterNativesUMovieSceneShotMetaData,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneShotMetaData>,
               InternalVTableHelperCtorCaller<UMovieSceneShotMetaData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneShotMetaData.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneShotMetaData @ 1461d4970

void __cdecl UMovieSceneShotMetaData::StaticRegisterNativesUMovieSceneShotMetaData(void)

{
  return;
}

// _getUObject @ 1461e22b0

UObject * __thiscall UMovieSceneShotMetaData::_getUObject(UMovieSceneShotMetaData *this)

{
  return (UObject *)&this[-1]._padding_;
}

