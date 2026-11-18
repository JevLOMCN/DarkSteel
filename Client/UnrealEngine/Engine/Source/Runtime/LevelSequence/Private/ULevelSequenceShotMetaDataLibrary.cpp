// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 76

// StaticClass @ 146c447b0

UClass * __cdecl ULevelSequenceShotMetaDataLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequenceShotMetaDataLibrary.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequenceShotMetaDataLibrary",
               &Z_Registration_Info_UClass_ULevelSequenceShotMetaDataLibrary.InnerSingleton,
               StaticRegisterNativesULevelSequenceShotMetaDataLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelSequenceShotMetaDataLibrary>,
               InternalVTableHelperCtorCaller<ULevelSequenceShotMetaDataLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequenceShotMetaDataLibrary.InnerSingleton;
}

// ULevelSequenceShotMetaDataLibrary @ 146c4ec50

ULevelSequenceShotMetaDataLibrary * __thiscall
ULevelSequenceShotMetaDataLibrary::ULevelSequenceShotMetaDataLibrary
          (ULevelSequenceShotMetaDataLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7ULevelSequenceShotMetaDataLibrary__6B_;
  return this;
}

// ULevelSequenceShotMetaDataLibrary @ 146c4ec80

ULevelSequenceShotMetaDataLibrary * __thiscall
ULevelSequenceShotMetaDataLibrary::ULevelSequenceShotMetaDataLibrary
          (ULevelSequenceShotMetaDataLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7ULevelSequenceShotMetaDataLibrary__6B_;
  return this;
}

// ~ULevelSequenceShotMetaDataLibrary @ 146c4f380

void __thiscall
ULevelSequenceShotMetaDataLibrary::~ULevelSequenceShotMetaDataLibrary
          (ULevelSequenceShotMetaDataLibrary *this)

{
  *(undefined ***)this = &___7ULevelSequenceShotMetaDataLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// ClearFavoriteRating @ 146c51280

void __cdecl ULevelSequenceShotMetaDataLibrary::ClearFavoriteRating(ULevelSequence *param_1)

{
  return;
}

// ClearIsFlagged @ 146c51290

void __cdecl ULevelSequenceShotMetaDataLibrary::ClearIsFlagged(ULevelSequence *param_1)

{
  return;
}

// ClearIsNoGood @ 146c512a0

void __cdecl ULevelSequenceShotMetaDataLibrary::ClearIsNoGood(ULevelSequence *param_1)

{
  return;
}

// ClearIsRecorded @ 146c512b0

void __cdecl ULevelSequenceShotMetaDataLibrary::ClearIsRecorded(ULevelSequence *param_1)

{
  return;
}

// ClearIsSubSequence @ 146c512c0

void __cdecl ULevelSequenceShotMetaDataLibrary::ClearIsSubSequence(ULevelSequence *param_1)

{
  return;
}

// GetFavoriteRating @ 146c54590

bool __cdecl
ULevelSequenceShotMetaDataLibrary::GetFavoriteRating(ULevelSequence *param_1,int *param_2)

{
  return false;
}

// GetFavoriteRatingAssetTag @ 146c545a0

FName __cdecl ULevelSequenceShotMetaDataLibrary::GetFavoriteRatingAssetTag(void)

{
  FName in_RCX;
  
  *(FName *)in_RCX = UMovieSceneShotMetaData::AssetRegistryTag_FavoriteRating;
  return in_RCX;
}

// GetFavoriteRatingByAssetData @ 146c545c0

bool __cdecl
ULevelSequenceShotMetaDataLibrary::GetFavoriteRatingByAssetData(FAssetData *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  ForAnyElementType _Str;
  FString FStack_18;
  
  FStack_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_18.Data.ArrayNum = 0;
  FStack_18.Data.ArrayMax = 0;
  FAssetData::GetTagValue<FString>
            (param_1,UMovieSceneShotMetaData::AssetRegistryTag_FavoriteRating,&FStack_18);
  bVar1 = ::FString::IsNumeric(&FStack_18);
  if (bVar1) {
    _Str.Data = (FScriptContainerElement *)L"";
    if (FStack_18.Data.ArrayNum != 0) {
      _Str.Data = FStack_18.Data.AllocatorInstance.Data;
    }
    iVar2 = _wtoi((wchar_t *)_Str.Data);
    *param_2 = iVar2;
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
    return true;
  }
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// GetIsFlagged @ 146c54660

bool __cdecl ULevelSequenceShotMetaDataLibrary::GetIsFlagged(ULevelSequence *param_1,bool *param_2)

{
  return false;
}

// GetIsFlaggedAssetTag @ 146c54670

FName __cdecl ULevelSequenceShotMetaDataLibrary::GetIsFlaggedAssetTag(void)

{
  FName in_RCX;
  
  *(FName *)in_RCX = UMovieSceneShotMetaData::AssetRegistryTag_bIsFlagged;
  return in_RCX;
}

// GetIsFlaggedByAssetData @ 146c54690

bool __cdecl
ULevelSequenceShotMetaDataLibrary::GetIsFlaggedByAssetData(FAssetData *param_1,bool *param_2)

{
  bool bVar1;
  
  bVar1 = UE::MovieScene::ShotMetaDataDetail::ParseAssetTag<bool>
                    (param_1,UMovieSceneShotMetaData::AssetRegistryTag_bIsFlagged,param_2);
  return bVar1;
}

// GetIsNoGood @ 146c546a0

bool __cdecl ULevelSequenceShotMetaDataLibrary::GetIsNoGood(ULevelSequence *param_1,bool *param_2)

{
  return false;
}

// GetIsNoGoodAssetTag @ 146c546b0

FName __cdecl ULevelSequenceShotMetaDataLibrary::GetIsNoGoodAssetTag(void)

{
  FName in_RCX;
  
  *(FName *)in_RCX = UMovieSceneShotMetaData::AssetRegistryTag_bIsNoGood;
  return in_RCX;
}

// GetIsNoGoodByAssetData @ 146c546d0

bool __cdecl
ULevelSequenceShotMetaDataLibrary::GetIsNoGoodByAssetData(FAssetData *param_1,bool *param_2)

{
  bool bVar1;
  
  bVar1 = UE::MovieScene::ShotMetaDataDetail::ParseAssetTag<bool>
                    (param_1,UMovieSceneShotMetaData::AssetRegistryTag_bIsNoGood,param_2);
  return bVar1;
}

// GetIsRecorded @ 146c546e0

bool __cdecl ULevelSequenceShotMetaDataLibrary::GetIsRecorded(ULevelSequence *param_1,bool *param_2)

{
  return false;
}

// GetIsRecordedAssetTag @ 146c546f0

FName __cdecl ULevelSequenceShotMetaDataLibrary::GetIsRecordedAssetTag(void)

{
  FName in_RCX;
  
  *(FName *)in_RCX = UMovieSceneShotMetaData::AssetRegistryTag_bIsRecorded;
  return in_RCX;
}

// GetIsRecordedByAssetData @ 146c54710

bool __cdecl
ULevelSequenceShotMetaDataLibrary::GetIsRecordedByAssetData(FAssetData *param_1,bool *param_2)

{
  bool bVar1;
  
  bVar1 = UE::MovieScene::ShotMetaDataDetail::ParseAssetTag<bool>
                    (param_1,UMovieSceneShotMetaData::AssetRegistryTag_bIsRecorded,param_2);
  return bVar1;
}

// GetIsSubSequence @ 146c54740

bool __cdecl
ULevelSequenceShotMetaDataLibrary::GetIsSubSequence(ULevelSequence *param_1,bool *param_2)

{
  return false;
}

// GetIsSubSequenceAssetTag @ 146c54750

FName __cdecl ULevelSequenceShotMetaDataLibrary::GetIsSubSequenceAssetTag(void)

{
  FName in_RCX;
  
  *(FName *)in_RCX = UMovieSceneShotMetaData::AssetRegistryTag_bIsSubSequence;
  return in_RCX;
}

// GetIsSubSequenceByAssetData @ 146c54770

bool __cdecl
ULevelSequenceShotMetaDataLibrary::GetIsSubSequenceByAssetData(FAssetData *param_1,bool *param_2)

{
  bool bVar1;
  
  bVar1 = UE::MovieScene::ShotMetaDataDetail::ParseAssetTag<bool>
                    (param_1,UMovieSceneShotMetaData::AssetRegistryTag_bIsSubSequence,param_2);
  return bVar1;
}

// GetPrivateStaticClass @ 146c55d30

UClass * __cdecl ULevelSequenceShotMetaDataLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequenceShotMetaDataLibrary.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequenceShotMetaDataLibrary",
               &Z_Registration_Info_UClass_ULevelSequenceShotMetaDataLibrary.InnerSingleton,
               StaticRegisterNativesULevelSequenceShotMetaDataLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelSequenceShotMetaDataLibrary>,
               InternalVTableHelperCtorCaller<ULevelSequenceShotMetaDataLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequenceShotMetaDataLibrary.InnerSingleton;
}

// HasFavoriteRating @ 146c56db0

bool __cdecl ULevelSequenceShotMetaDataLibrary::HasFavoriteRating(ULevelSequence *param_1)

{
  return false;
}

// HasFavoriteRatingByAssetData @ 146c56dc0

bool __cdecl ULevelSequenceShotMetaDataLibrary::HasFavoriteRatingByAssetData(FAssetData *param_1)

{
  bool bVar1;
  int local_res10 [6];
  
  local_res10[0] = 0;
  bVar1 = UMovieSceneShotMetaData::GetFavoriteRatingByAssetData(param_1,local_res10);
  return bVar1;
}

// HasIsFlagged @ 146c56df0

bool __cdecl ULevelSequenceShotMetaDataLibrary::HasIsFlagged(ULevelSequence *param_1)

{
  return false;
}

// HasIsFlaggedByAssetData @ 146c56e00

bool __cdecl ULevelSequenceShotMetaDataLibrary::HasIsFlaggedByAssetData(FAssetData *param_1)

{
  bool bVar1;
  bool local_res10 [24];
  
  local_res10[0] = false;
  bVar1 = UMovieSceneShotMetaData::GetIsFlaggedByAssetData(param_1,local_res10);
  return bVar1;
}

// HasIsNoGood @ 146c56e20

bool __cdecl ULevelSequenceShotMetaDataLibrary::HasIsNoGood(ULevelSequence *param_1)

{
  return false;
}

// HasIsNoGoodByAssetData @ 146c56e30

bool __cdecl ULevelSequenceShotMetaDataLibrary::HasIsNoGoodByAssetData(FAssetData *param_1)

{
  bool bVar1;
  bool local_res10 [24];
  
  local_res10[0] = false;
  bVar1 = UMovieSceneShotMetaData::GetIsNoGoodByAssetData(param_1,local_res10);
  return bVar1;
}

// HasIsRecorded @ 146c56e50

bool __cdecl ULevelSequenceShotMetaDataLibrary::HasIsRecorded(ULevelSequence *param_1)

{
  return false;
}

// HasIsRecordedByAssetData @ 146c56e60

bool __cdecl ULevelSequenceShotMetaDataLibrary::HasIsRecordedByAssetData(FAssetData *param_1)

{
  bool bVar1;
  bool local_res10 [24];
  
  local_res10[0] = false;
  bVar1 = UMovieSceneShotMetaData::GetIsRecordedByAssetData(param_1,local_res10);
  return bVar1;
}

// HasIsSubSequence @ 146c56e80

bool __cdecl ULevelSequenceShotMetaDataLibrary::HasIsSubSequence(ULevelSequence *param_1)

{
  return false;
}

// HasIsSubSequenceByAssetData @ 146c56e90

bool __cdecl ULevelSequenceShotMetaDataLibrary::HasIsSubSequenceByAssetData(FAssetData *param_1)

{
  bool bVar1;
  bool local_res10 [24];
  
  local_res10[0] = false;
  bVar1 = UMovieSceneShotMetaData::GetIsSubSequenceByAssetData(param_1,local_res10);
  return bVar1;
}

// SetFavoriteRating @ 146c5b4c0

void __cdecl
ULevelSequenceShotMetaDataLibrary::SetFavoriteRating(ULevelSequence *param_1,int param_2)

{
  return;
}

// SetIsFlagged @ 146c5b4d0

void __cdecl ULevelSequenceShotMetaDataLibrary::SetIsFlagged(ULevelSequence *param_1,bool param_2)

{
  return;
}

// SetIsNoGood @ 146c5b4e0

void __cdecl ULevelSequenceShotMetaDataLibrary::SetIsNoGood(ULevelSequence *param_1,bool param_2)

{
  return;
}

// SetIsRecorded @ 146c5b4f0

void __cdecl ULevelSequenceShotMetaDataLibrary::SetIsRecorded(ULevelSequence *param_1,bool param_2)

{
  return;
}

// SetIsSubSequence @ 146c5b500

void __cdecl
ULevelSequenceShotMetaDataLibrary::SetIsSubSequence(ULevelSequence *param_1,bool param_2)

{
  return;
}

// StaticRegisterNativesULevelSequenceShotMetaDataLibrary @ 146c5c6d0

void __cdecl
ULevelSequenceShotMetaDataLibrary::StaticRegisterNativesULevelSequenceShotMetaDataLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x23;
  local_18.DataPtr = Z_Construct_UClass_ULevelSequenceShotMetaDataLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execClearFavoriteRating @ 146c5e6d0

void __cdecl
ULevelSequenceShotMetaDataLibrary::execClearFavoriteRating
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10 [3];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execClearIsFlagged @ 146c5e750

void __cdecl
ULevelSequenceShotMetaDataLibrary::execClearIsFlagged
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10 [3];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execClearIsNoGood @ 146c5e7d0

void __cdecl
ULevelSequenceShotMetaDataLibrary::execClearIsNoGood(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10 [3];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execClearIsRecorded @ 146c5e850

void __cdecl
ULevelSequenceShotMetaDataLibrary::execClearIsRecorded
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10 [3];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execClearIsSubSequence @ 146c5e8d0

void __cdecl
ULevelSequenceShotMetaDataLibrary::execClearIsSubSequence
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10 [3];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execGetFavoriteRating @ 146c5f780

void __cdecl
ULevelSequenceShotMetaDataLibrary::execGetFavoriteRating
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetFavoriteRatingAssetTag @ 146c5f850

void __cdecl
ULevelSequenceShotMetaDataLibrary::execGetFavoriteRatingAssetTag
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(FName *)param_3 = UMovieSceneShotMetaData::AssetRegistryTag_FavoriteRating;
  return;
}

// execGetFavoriteRatingByAssetData @ 146c5f880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ULevelSequenceShotMetaDataLibrary::execGetFavoriteRatingByAssetData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FAssetData *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  int *piVar4;
  FAssetData *pFVar5;
  undefined1 auStack_b8 [32];
  int local_98 [2];
  FAssetData local_90;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90.ChunkArrayRegistryHandle.Index = -1;
  local_90.PackageName.ComparisonIndex.Value = 0;
  local_90.PackageName.Number = 0;
  local_90.PackagePath.ComparisonIndex.Value = 0;
  local_90.PackagePath.Number = 0;
  local_90.AssetName.ComparisonIndex.Value = 0;
  local_90.AssetName.Number = 0;
  local_90.AssetClass.ComparisonIndex.Value = 0;
  local_90.AssetClass.Number = 0;
  local_90.AssetClassPath.PackageName.ComparisonIndex.Value = 0;
  local_90.AssetClassPath.PackageName.Number = 0;
  local_90.AssetClassPath.AssetName.ComparisonIndex.Value = 0;
  local_90.AssetClassPath.AssetName.Number = 0;
  local_90.PackageFlags = 0;
  local_90.TagsAndValues.field0_0x0.Loose = (FAssetDataTagMapSharedView_u_0)0x0;
  local_90.TaggedAssetBundles.Object = (FAssetBundleData *)0x0;
  local_90.TaggedAssetBundles.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_90.ChunkIDs.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_90.ChunkIDs.ArrayNum = 0;
  local_90.ChunkIDs.ArrayMax = 2;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  pFVar1 = (FAssetData *)param_2->MostRecentPropertyAddress;
  local_98[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = &local_90;
  if (pFVar1 != (FAssetData *)0x0) {
    pFVar5 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  piVar4 = local_98;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar4 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UMovieSceneShotMetaData::GetFavoriteRatingByAssetData(pFVar5,piVar4);
  *(bool *)param_3 = bVar3;
  if (local_90.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_90.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_90.TagsAndValues);
  return;
}

// execGetIsFlagged @ 146c5f9f0

void __cdecl
ULevelSequenceShotMetaDataLibrary::execGetIsFlagged(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetIsFlaggedAssetTag @ 146c5fac0

void __cdecl
ULevelSequenceShotMetaDataLibrary::execGetIsFlaggedAssetTag
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(FName *)param_3 = UMovieSceneShotMetaData::AssetRegistryTag_bIsFlagged;
  return;
}

// execGetIsFlaggedByAssetData @ 146c5faf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ULevelSequenceShotMetaDataLibrary::execGetIsFlaggedByAssetData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FAssetData *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  bool *pbVar4;
  FAssetData *pFVar5;
  undefined1 auStack_b8 [32];
  bool local_98 [8];
  FAssetData local_90;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90.ChunkArrayRegistryHandle.Index = -1;
  local_90.PackageName.ComparisonIndex.Value = 0;
  local_90.PackageName.Number = 0;
  local_90.PackagePath.ComparisonIndex.Value = 0;
  local_90.PackagePath.Number = 0;
  local_90.AssetName.ComparisonIndex.Value = 0;
  local_90.AssetName.Number = 0;
  local_90.AssetClass.ComparisonIndex.Value = 0;
  local_90.AssetClass.Number = 0;
  local_90.AssetClassPath.PackageName.ComparisonIndex.Value = 0;
  local_90.AssetClassPath.PackageName.Number = 0;
  local_90.AssetClassPath.AssetName.ComparisonIndex.Value = 0;
  local_90.AssetClassPath.AssetName.Number = 0;
  local_90.PackageFlags = 0;
  local_90.TagsAndValues.field0_0x0.Loose = (FAssetDataTagMapSharedView_u_0)0x0;
  local_90.TaggedAssetBundles.Object = (FAssetBundleData *)0x0;
  local_90.TaggedAssetBundles.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_90.ChunkIDs.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_90.ChunkIDs.ArrayNum = 0;
  local_90.ChunkIDs.ArrayMax = 2;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  pFVar1 = (FAssetData *)param_2->MostRecentPropertyAddress;
  local_98[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = &local_90;
  if (pFVar1 != (FAssetData *)0x0) {
    pFVar5 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  pbVar4 = local_98;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar4 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UMovieSceneShotMetaData::GetIsFlaggedByAssetData(pFVar5,pbVar4);
  *(bool *)param_3 = bVar3;
  if (local_90.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_90.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_90.TagsAndValues);
  return;
}

// execGetIsNoGood @ 146c5fc60

void __cdecl
ULevelSequenceShotMetaDataLibrary::execGetIsNoGood(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetIsNoGoodAssetTag @ 146c5fd30

void __cdecl
ULevelSequenceShotMetaDataLibrary::execGetIsNoGoodAssetTag
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(FName *)param_3 = UMovieSceneShotMetaData::AssetRegistryTag_bIsNoGood;
  return;
}

// execGetIsNoGoodByAssetData @ 146c5fd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ULevelSequenceShotMetaDataLibrary::execGetIsNoGoodByAssetData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FAssetData *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  bool *pbVar4;
  FAssetData *pFVar5;
  undefined1 auStack_b8 [32];
  bool local_98 [8];
  FAssetData local_90;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90.ChunkArrayRegistryHandle.Index = -1;
  local_90.PackageName.ComparisonIndex.Value = 0;
  local_90.PackageName.Number = 0;
  local_90.PackagePath.ComparisonIndex.Value = 0;
  local_90.PackagePath.Number = 0;
  local_90.AssetName.ComparisonIndex.Value = 0;
  local_90.AssetName.Number = 0;
  local_90.AssetClass.ComparisonIndex.Value = 0;
  local_90.AssetClass.Number = 0;
  local_90.AssetClassPath.PackageName.ComparisonIndex.Value = 0;
  local_90.AssetClassPath.PackageName.Number = 0;
  local_90.AssetClassPath.AssetName.ComparisonIndex.Value = 0;
  local_90.AssetClassPath.AssetName.Number = 0;
  local_90.PackageFlags = 0;
  local_90.TagsAndValues.field0_0x0.Loose = (FAssetDataTagMapSharedView_u_0)0x0;
  local_90.TaggedAssetBundles.Object = (FAssetBundleData *)0x0;
  local_90.TaggedAssetBundles.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_90.ChunkIDs.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_90.ChunkIDs.ArrayNum = 0;
  local_90.ChunkIDs.ArrayMax = 2;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  pFVar1 = (FAssetData *)param_2->MostRecentPropertyAddress;
  local_98[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = &local_90;
  if (pFVar1 != (FAssetData *)0x0) {
    pFVar5 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  pbVar4 = local_98;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar4 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UMovieSceneShotMetaData::GetIsNoGoodByAssetData(pFVar5,pbVar4);
  *(bool *)param_3 = bVar3;
  if (local_90.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_90.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_90.TagsAndValues);
  return;
}

// execGetIsRecorded @ 146c5fed0

void __cdecl
ULevelSequenceShotMetaDataLibrary::execGetIsRecorded(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetIsRecordedAssetTag @ 146c5ffa0

void __cdecl
ULevelSequenceShotMetaDataLibrary::execGetIsRecordedAssetTag
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(FName *)param_3 = UMovieSceneShotMetaData::AssetRegistryTag_bIsRecorded;
  return;
}

// execGetIsRecordedByAssetData @ 146c5ffd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ULevelSequenceShotMetaDataLibrary::execGetIsRecordedByAssetData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FAssetData *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  bool *pbVar4;
  FAssetData *pFVar5;
  undefined1 auStack_b8 [32];
  bool local_98 [8];
  FAssetData local_90;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90.ChunkArrayRegistryHandle.Index = -1;
  local_90.PackageName.ComparisonIndex.Value = 0;
  local_90.PackageName.Number = 0;
  local_90.PackagePath.ComparisonIndex.Value = 0;
  local_90.PackagePath.Number = 0;
  local_90.AssetName.ComparisonIndex.Value = 0;
  local_90.AssetName.Number = 0;
  local_90.AssetClass.ComparisonIndex.Value = 0;
  local_90.AssetClass.Number = 0;
  local_90.AssetClassPath.PackageName.ComparisonIndex.Value = 0;
  local_90.AssetClassPath.PackageName.Number = 0;
  local_90.AssetClassPath.AssetName.ComparisonIndex.Value = 0;
  local_90.AssetClassPath.AssetName.Number = 0;
  local_90.PackageFlags = 0;
  local_90.TagsAndValues.field0_0x0.Loose = (FAssetDataTagMapSharedView_u_0)0x0;
  local_90.TaggedAssetBundles.Object = (FAssetBundleData *)0x0;
  local_90.TaggedAssetBundles.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_90.ChunkIDs.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_90.ChunkIDs.ArrayNum = 0;
  local_90.ChunkIDs.ArrayMax = 2;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  pFVar1 = (FAssetData *)param_2->MostRecentPropertyAddress;
  local_98[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = &local_90;
  if (pFVar1 != (FAssetData *)0x0) {
    pFVar5 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  pbVar4 = local_98;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar4 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UMovieSceneShotMetaData::GetIsRecordedByAssetData(pFVar5,pbVar4);
  *(bool *)param_3 = bVar3;
  if (local_90.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_90.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_90.TagsAndValues);
  return;
}

// execGetIsSubSequence @ 146c60140

void __cdecl
ULevelSequenceShotMetaDataLibrary::execGetIsSubSequence
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetIsSubSequenceAssetTag @ 146c60210

void __cdecl
ULevelSequenceShotMetaDataLibrary::execGetIsSubSequenceAssetTag
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(FName *)param_3 = UMovieSceneShotMetaData::AssetRegistryTag_bIsSubSequence;
  return;
}

// execGetIsSubSequenceByAssetData @ 146c60240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ULevelSequenceShotMetaDataLibrary::execGetIsSubSequenceByAssetData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FAssetData *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  bool *pbVar4;
  FAssetData *pFVar5;
  undefined1 auStack_b8 [32];
  bool local_98 [8];
  FAssetData local_90;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90.ChunkArrayRegistryHandle.Index = -1;
  local_90.PackageName.ComparisonIndex.Value = 0;
  local_90.PackageName.Number = 0;
  local_90.PackagePath.ComparisonIndex.Value = 0;
  local_90.PackagePath.Number = 0;
  local_90.AssetName.ComparisonIndex.Value = 0;
  local_90.AssetName.Number = 0;
  local_90.AssetClass.ComparisonIndex.Value = 0;
  local_90.AssetClass.Number = 0;
  local_90.AssetClassPath.PackageName.ComparisonIndex.Value = 0;
  local_90.AssetClassPath.PackageName.Number = 0;
  local_90.AssetClassPath.AssetName.ComparisonIndex.Value = 0;
  local_90.AssetClassPath.AssetName.Number = 0;
  local_90.PackageFlags = 0;
  local_90.TagsAndValues.field0_0x0.Loose = (FAssetDataTagMapSharedView_u_0)0x0;
  local_90.TaggedAssetBundles.Object = (FAssetBundleData *)0x0;
  local_90.TaggedAssetBundles.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_90.ChunkIDs.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_90.ChunkIDs.ArrayNum = 0;
  local_90.ChunkIDs.ArrayMax = 2;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  pFVar1 = (FAssetData *)param_2->MostRecentPropertyAddress;
  local_98[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = &local_90;
  if (pFVar1 != (FAssetData *)0x0) {
    pFVar5 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  pbVar4 = local_98;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar4 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UMovieSceneShotMetaData::GetIsSubSequenceByAssetData(pFVar5,pbVar4);
  *(bool *)param_3 = bVar3;
  if (local_90.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_90.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_90.TagsAndValues);
  return;
}

// execHasFavoriteRating @ 146c606a0

void __cdecl
ULevelSequenceShotMetaDataLibrary::execHasFavoriteRating
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execHasFavoriteRatingByAssetData @ 146c60730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ULevelSequenceShotMetaDataLibrary::execHasFavoriteRatingByAssetData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FAssetData *pFVar3;
  undefined1 auStack_b8 [32];
  int local_98 [2];
  FAssetData local_90;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90.ChunkArrayRegistryHandle.Index = -1;
  local_90.PackageName.ComparisonIndex.Value = 0;
  local_90.PackageName.Number = 0;
  local_90.PackagePath.ComparisonIndex.Value = 0;
  local_90.PackagePath.Number = 0;
  local_90.AssetName.ComparisonIndex.Value = 0;
  local_90.AssetName.Number = 0;
  local_90.AssetClass.ComparisonIndex.Value = 0;
  local_90.AssetClass.Number = 0;
  local_90.AssetClassPath.PackageName.ComparisonIndex.Value = 0;
  local_90.AssetClassPath.PackageName.Number = 0;
  local_90.AssetClassPath.AssetName.ComparisonIndex.Value = 0;
  local_90.AssetClassPath.AssetName.Number = 0;
  local_90.PackageFlags = 0;
  local_90.TagsAndValues.field0_0x0.Loose = (FAssetDataTagMapSharedView_u_0)0x0;
  local_90.TaggedAssetBundles.Object = (FAssetBundleData *)0x0;
  local_90.TaggedAssetBundles.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_90.ChunkIDs.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_90.ChunkIDs.ArrayNum = 0;
  local_90.ChunkIDs.ArrayMax = 2;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_98[0] = 0;
  pFVar3 = &local_90;
  if ((FAssetData *)param_2->MostRecentPropertyAddress != (FAssetData *)0x0) {
    pFVar3 = (FAssetData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UMovieSceneShotMetaData::GetFavoriteRatingByAssetData(pFVar3,local_98);
  *(bool *)param_3 = bVar2;
  if (local_90.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_90.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_90.TagsAndValues);
  return;
}

// execHasIsFlagged @ 146c60850

void __cdecl
ULevelSequenceShotMetaDataLibrary::execHasIsFlagged(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execHasIsFlaggedByAssetData @ 146c608e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ULevelSequenceShotMetaDataLibrary::execHasIsFlaggedByAssetData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FAssetData *pFVar3;
  undefined1 auStack_b8 [32];
  bool local_98 [8];
  FAssetData local_90;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90.ChunkArrayRegistryHandle.Index = -1;
  local_90.PackageName.ComparisonIndex.Value = 0;
  local_90.PackageName.Number = 0;
  local_90.PackagePath.ComparisonIndex.Value = 0;
  local_90.PackagePath.Number = 0;
  local_90.AssetName.ComparisonIndex.Value = 0;
  local_90.AssetName.Number = 0;
  local_90.AssetClass.ComparisonIndex.Value = 0;
  local_90.AssetClass.Number = 0;
  local_90.AssetClassPath.PackageName.ComparisonIndex.Value = 0;
  local_90.AssetClassPath.PackageName.Number = 0;
  local_90.AssetClassPath.AssetName.ComparisonIndex.Value = 0;
  local_90.AssetClassPath.AssetName.Number = 0;
  local_90.PackageFlags = 0;
  local_90.TagsAndValues.field0_0x0.Loose = (FAssetDataTagMapSharedView_u_0)0x0;
  local_90.TaggedAssetBundles.Object = (FAssetBundleData *)0x0;
  local_90.TaggedAssetBundles.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_90.ChunkIDs.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_90.ChunkIDs.ArrayNum = 0;
  local_90.ChunkIDs.ArrayMax = 2;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_98[0] = false;
  pFVar3 = &local_90;
  if ((FAssetData *)param_2->MostRecentPropertyAddress != (FAssetData *)0x0) {
    pFVar3 = (FAssetData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UMovieSceneShotMetaData::GetIsFlaggedByAssetData(pFVar3,local_98);
  *(bool *)param_3 = bVar2;
  if (local_90.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_90.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_90.TagsAndValues);
  return;
}

// execHasIsNoGood @ 146c60a00

void __cdecl
ULevelSequenceShotMetaDataLibrary::execHasIsNoGood(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execHasIsNoGoodByAssetData @ 146c60a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ULevelSequenceShotMetaDataLibrary::execHasIsNoGoodByAssetData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FAssetData *pFVar3;
  undefined1 auStack_b8 [32];
  bool local_98 [8];
  FAssetData local_90;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90.ChunkArrayRegistryHandle.Index = -1;
  local_90.PackageName.ComparisonIndex.Value = 0;
  local_90.PackageName.Number = 0;
  local_90.PackagePath.ComparisonIndex.Value = 0;
  local_90.PackagePath.Number = 0;
  local_90.AssetName.ComparisonIndex.Value = 0;
  local_90.AssetName.Number = 0;
  local_90.AssetClass.ComparisonIndex.Value = 0;
  local_90.AssetClass.Number = 0;
  local_90.AssetClassPath.PackageName.ComparisonIndex.Value = 0;
  local_90.AssetClassPath.PackageName.Number = 0;
  local_90.AssetClassPath.AssetName.ComparisonIndex.Value = 0;
  local_90.AssetClassPath.AssetName.Number = 0;
  local_90.PackageFlags = 0;
  local_90.TagsAndValues.field0_0x0.Loose = (FAssetDataTagMapSharedView_u_0)0x0;
  local_90.TaggedAssetBundles.Object = (FAssetBundleData *)0x0;
  local_90.TaggedAssetBundles.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_90.ChunkIDs.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_90.ChunkIDs.ArrayNum = 0;
  local_90.ChunkIDs.ArrayMax = 2;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_98[0] = false;
  pFVar3 = &local_90;
  if ((FAssetData *)param_2->MostRecentPropertyAddress != (FAssetData *)0x0) {
    pFVar3 = (FAssetData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UMovieSceneShotMetaData::GetIsNoGoodByAssetData(pFVar3,local_98);
  *(bool *)param_3 = bVar2;
  if (local_90.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_90.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_90.TagsAndValues);
  return;
}

// execHasIsRecorded @ 146c60bb0

void __cdecl
ULevelSequenceShotMetaDataLibrary::execHasIsRecorded(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execHasIsRecordedByAssetData @ 146c60c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ULevelSequenceShotMetaDataLibrary::execHasIsRecordedByAssetData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FAssetData *pFVar3;
  undefined1 auStack_b8 [32];
  bool local_98 [8];
  FAssetData local_90;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90.ChunkArrayRegistryHandle.Index = -1;
  local_90.PackageName.ComparisonIndex.Value = 0;
  local_90.PackageName.Number = 0;
  local_90.PackagePath.ComparisonIndex.Value = 0;
  local_90.PackagePath.Number = 0;
  local_90.AssetName.ComparisonIndex.Value = 0;
  local_90.AssetName.Number = 0;
  local_90.AssetClass.ComparisonIndex.Value = 0;
  local_90.AssetClass.Number = 0;
  local_90.AssetClassPath.PackageName.ComparisonIndex.Value = 0;
  local_90.AssetClassPath.PackageName.Number = 0;
  local_90.AssetClassPath.AssetName.ComparisonIndex.Value = 0;
  local_90.AssetClassPath.AssetName.Number = 0;
  local_90.PackageFlags = 0;
  local_90.TagsAndValues.field0_0x0.Loose = (FAssetDataTagMapSharedView_u_0)0x0;
  local_90.TaggedAssetBundles.Object = (FAssetBundleData *)0x0;
  local_90.TaggedAssetBundles.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_90.ChunkIDs.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_90.ChunkIDs.ArrayNum = 0;
  local_90.ChunkIDs.ArrayMax = 2;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_98[0] = false;
  pFVar3 = &local_90;
  if ((FAssetData *)param_2->MostRecentPropertyAddress != (FAssetData *)0x0) {
    pFVar3 = (FAssetData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UMovieSceneShotMetaData::GetIsRecordedByAssetData(pFVar3,local_98);
  *(bool *)param_3 = bVar2;
  if (local_90.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_90.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_90.TagsAndValues);
  return;
}

// execHasIsSubSequence @ 146c60d60

void __cdecl
ULevelSequenceShotMetaDataLibrary::execHasIsSubSequence
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execHasIsSubSequenceByAssetData @ 146c60df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ULevelSequenceShotMetaDataLibrary::execHasIsSubSequenceByAssetData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FAssetData *pFVar3;
  undefined1 auStack_b8 [32];
  bool local_98 [8];
  FAssetData local_90;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90.ChunkArrayRegistryHandle.Index = -1;
  local_90.PackageName.ComparisonIndex.Value = 0;
  local_90.PackageName.Number = 0;
  local_90.PackagePath.ComparisonIndex.Value = 0;
  local_90.PackagePath.Number = 0;
  local_90.AssetName.ComparisonIndex.Value = 0;
  local_90.AssetName.Number = 0;
  local_90.AssetClass.ComparisonIndex.Value = 0;
  local_90.AssetClass.Number = 0;
  local_90.AssetClassPath.PackageName.ComparisonIndex.Value = 0;
  local_90.AssetClassPath.PackageName.Number = 0;
  local_90.AssetClassPath.AssetName.ComparisonIndex.Value = 0;
  local_90.AssetClassPath.AssetName.Number = 0;
  local_90.PackageFlags = 0;
  local_90.TagsAndValues.field0_0x0.Loose = (FAssetDataTagMapSharedView_u_0)0x0;
  local_90.TaggedAssetBundles.Object = (FAssetBundleData *)0x0;
  local_90.TaggedAssetBundles.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_90.ChunkIDs.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_90.ChunkIDs.ArrayNum = 0;
  local_90.ChunkIDs.ArrayMax = 2;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_98[0] = false;
  pFVar3 = &local_90;
  if ((FAssetData *)param_2->MostRecentPropertyAddress != (FAssetData *)0x0) {
    pFVar3 = (FAssetData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UMovieSceneShotMetaData::GetIsSubSequenceByAssetData(pFVar3,local_98);
  *(bool *)param_3 = bVar2;
  if (local_90.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_90.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_90.TagsAndValues);
  return;
}

// execSetFavoriteRating @ 146c61950

void __cdecl
ULevelSequenceShotMetaDataLibrary::execSetFavoriteRating
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  
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
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetIsFlagged @ 146c61a00

void __cdecl
ULevelSequenceShotMetaDataLibrary::execSetIsFlagged(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  
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
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetIsNoGood @ 146c61ab0

void __cdecl
ULevelSequenceShotMetaDataLibrary::execSetIsNoGood(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  
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
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetIsRecorded @ 146c61b60

void __cdecl
ULevelSequenceShotMetaDataLibrary::execSetIsRecorded(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  
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
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetIsSubSequence @ 146c61c10

void __cdecl
ULevelSequenceShotMetaDataLibrary::execSetIsSubSequence
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  
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
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

