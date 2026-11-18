// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 14

// StaticClass @ 148c758b0

UClass * __cdecl UGroundTruthData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroundTruthData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"GroundTruthData",
               &Z_Registration_Info_UClass_UGroundTruthData.InnerSingleton,
               StaticRegisterNativesUGroundTruthData,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UGroundTruthData>,
               InternalVTableHelperCtorCaller<UGroundTruthData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroundTruthData.InnerSingleton;
}

// UGroundTruthData @ 148c805c0

UGroundTruthData * __thiscall
UGroundTruthData::UGroundTruthData(UGroundTruthData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGroundTruthData__6B_;
  (this->ObjectData).field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

// UGroundTruthData @ 148c805f0

UGroundTruthData * __thiscall UGroundTruthData::UGroundTruthData(UGroundTruthData *this)

{
  UObject::UObject((UObject *)this);
  this->bResetGroundTruth = false;
  this->_padding_ = (longlong)&___7UGroundTruthData__6B_;
  (this->ObjectData).field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

// ~UGroundTruthData @ 148c81360

void __thiscall UGroundTruthData::~UGroundTruthData(UGroundTruthData *this)

{
  this->_padding_ = (longlong)&___7UGroundTruthData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CanModify @ 148c8a770

bool __thiscall UGroundTruthData::CanModify(UGroundTruthData *this)

{
  return (this->ObjectData).field0_0x0.DebugPtr == (UObject *)0x0;
}

// GetPrivateStaticClass @ 148c91c60

UClass * __cdecl UGroundTruthData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroundTruthData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"GroundTruthData",
               &Z_Registration_Info_UClass_UGroundTruthData.InnerSingleton,
               StaticRegisterNativesUGroundTruthData,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UGroundTruthData>,
               InternalVTableHelperCtorCaller<UGroundTruthData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroundTruthData.InnerSingleton;
}

// LoadObject @ 148c945a0

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall UGroundTruthData::LoadObject(UGroundTruthData *this)

{
  FString local_18;
  
  if (4 < (byte)GroundTruthLog._0_1_) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&GroundTruthLog);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return (this->ObjectData).field0_0x0.DebugPtr;
  }
  return (this->ObjectData).field0_0x0.DebugPtr;
}

// ResetObject @ 148c98950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGroundTruthData::ResetObject(UGroundTruthData *this)

{
  undefined1 auStack_a8 [32];
  FString local_88;
  FAssetData local_78;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  FAssetData::FAssetData(&local_78,(UObject *)this,None);
  ::FName::ToString(&local_78.PackageName,&local_88);
  if (1 < (byte)GroundTruthLog._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&GroundTruthLog);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_78.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_78.TagsAndValues);
  return;
}

// SaveObject @ 148c9b440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGroundTruthData::SaveObject(UGroundTruthData *this,UObject *param_1)

{
  undefined1 auStack_a8 [32];
  FString local_88;
  FAssetData local_78;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  FAssetData::FAssetData(&local_78,(UObject *)this,None);
  UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
  ::FName::ToString(&local_78.PackageName,&local_88);
  if (1 < (byte)GroundTruthLog._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&GroundTruthLog);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_78.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_78.TagsAndValues);
  return;
}

// StaticRegisterNativesUGroundTruthData @ 148c9d570

void __cdecl UGroundTruthData::StaticRegisterNativesUGroundTruthData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UGroundTruthData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCanModify @ 148ca8030

void __cdecl UGroundTruthData::execCanModify(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = *(longlong *)&param_1[1].field_0x8 == 0;
  return;
}

// execLoadObject @ 148ca92b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UGroundTruthData::execLoadObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (4 < (byte)GroundTruthLog._0_1_) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&GroundTruthLog);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x8;
    return;
  }
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x8;
  return;
}

// execResetObject @ 148ca9690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UGroundTruthData::execResetObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 auStack_a8 [32];
  FString local_88;
  FAssetData local_78;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_a8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAssetData::FAssetData(&local_78,param_1,None);
  ::FName::ToString(&local_78.PackageName,&local_88);
  if (1 < (byte)GroundTruthLog._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&GroundTruthLog);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_78.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_78.TagsAndValues);
  return;
}

// execSaveObject @ 148ca99c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UGroundTruthData::execSaveObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  FString local_90;
  FAssetData local_80;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAssetData::FAssetData(&local_80,param_1,None);
  UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  ::FName::ToString(&local_80.PackageName,&local_90);
  if (1 < (byte)GroundTruthLog._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&GroundTruthLog);
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (local_80.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_80.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_80.TagsAndValues);
  return;
}

