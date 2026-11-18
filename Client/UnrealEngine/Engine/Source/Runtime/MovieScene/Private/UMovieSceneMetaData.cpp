// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 24

// StaticClass @ 1461e85f0

UClass * __cdecl UMovieSceneMetaData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMetaData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneMetaData",
               &Z_Registration_Info_UClass_UMovieSceneMetaData.InnerSingleton,
               StaticRegisterNativesUMovieSceneMetaData,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"EditorSettings",InternalConstructor<UMovieSceneMetaData>,
               InternalVTableHelperCtorCaller<UMovieSceneMetaData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMetaData.InnerSingleton;
}

// UMovieSceneMetaData @ 1461fdc50

UMovieSceneMetaData * __thiscall
UMovieSceneMetaData::UMovieSceneMetaData(UMovieSceneMetaData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneMetaDataInterface__;
  (this->Author).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Author).Data.ArrayNum = 0;
  (this->Author).Data.ArrayMax = 0;
  (this->Created).Ticks = 0;
  (this->Notes).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Notes).Data.ArrayNum = 0;
  (this->Notes).Data.ArrayMax = 0;
  return this;
}

// UMovieSceneMetaData @ 1461fdca0

UMovieSceneMetaData * __thiscall
UMovieSceneMetaData::UMovieSceneMetaData(UMovieSceneMetaData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneMetaDataInterface__;
  (this->Author).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Author).Data.ArrayNum = 0;
  (this->Author).Data.ArrayMax = 0;
  (this->Created).Ticks = 0;
  (this->Notes).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Notes).Data.ArrayNum = 0;
  (this->Notes).Data.ArrayMax = 0;
  return this;
}

// ~UMovieSceneMetaData @ 1461ffc70

void __thiscall UMovieSceneMetaData::~UMovieSceneMetaData(UMovieSceneMetaData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneMetaDataInterface__;
  pFVar1 = (this->Notes).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Author).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneMetaDataInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CreateFromDefaults @ 14620db20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneMetaData * __cdecl
UMovieSceneMetaData::CreateFromDefaults(UObject *param_1,FName param_2)

{
  FName FVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  UClass *pUVar8;
  UObject *pUVar9;
  UMovieSceneMetaData *pUVar10;
  FName *pFVar11;
  UPackage *pUVar12;
  longlong *plVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  FName local_res10;
  undefined1 auStackY_178 [32];
  FScriptContainerElement *local_128;
  undefined4 uStack_11c;
  FName local_118 [2];
  TStringView<wchar_t> local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  size_t sVar7;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pwVar14 = L"";
  iVar5 = 0;
  local_res10 = param_2;
  if (param_2 == (FName)0x0) goto LAB_14620dc05;
  pFVar6 = ::FName::ToString(&local_res10,&local_f8);
  if ((pFVar6->Data).ArrayNum == 0) {
    local_128 = (FScriptContainerElement *)0x15060d16c;
LAB_14620db9a:
    sVar7 = wcslen((wchar_t *)local_128);
    iVar5 = (int)sVar7;
  }
  else {
    local_128 = (pFVar6->Data).AllocatorInstance.Data;
    if (local_128 != (FScriptContainerElement *)0x0) goto LAB_14620db9a;
  }
  pUVar8 = Z_Construct_UClass_UObject_NoRegister();
  local_108._12_4_ = uStack_11c;
  local_108.Size = iVar5;
  local_108.DataPtr = (wchar_t *)local_128;
  pUVar9 = StaticFindObject(pUVar8,param_1,&local_108,None);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if ((pUVar9 != (UObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!FindObject<UObject>(Outer, *Name.ToString())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneMetaData.cpp"
                         ,0x1e,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pUVar10 = (UMovieSceneMetaData *)(*pcVar2)();
    return pUVar10;
  }
LAB_14620dc05:
  FVar3 = local_res10;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar11 = ::FName::FName(local_118,"DefaultMovieSceneMetaData");
    FVar1 = *pFVar11;
    pUVar12 = GetTransientPackage();
    if (FVar1 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar12,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar8 = StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar8);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._24_4_ = RF_MarkAsRootSet;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = pUVar12;
    local_b8._16_8_ = FVar1;
    pUVar10 = (UMovieSceneMetaData *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar13 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    ConfigInstance = pUVar10;
    _Init_thread_footer(&::_TSS0);
  }
  pUVar10 = (UMovieSceneMetaData *)
            StaticDuplicateObject
                      ((UObject *)ConfigInstance,param_1,FVar3,RF_NoFlags,(UClass *)0x0,Normal,
                       PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                       ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                       AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                       ReachabilityFlag0);
  if (pUVar10 == (UMovieSceneMetaData *)0x0) {
    pFVar6 = GetTypeName<UMovieSceneMetaData>(&local_e8);
    if ((pFVar6->Data).ArrayNum != 0) {
      pwVar14 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar14);
  }
  pUVar8 = StaticClass();
  iVar5 = (int)pUVar8->_padding_;
  if ((iVar5 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar5 * 8)
      == &pUVar8->_padding_)) {
    return pUVar10;
  }
  pFVar6 = GetTypeName<UMovieSceneMetaData>(&local_d8);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  pFVar6 = GetFullNameForCastLogError<UObject>(&local_c8,(UObject *)pUVar10);
  if ((pFVar6->Data).ArrayNum != 0) {
    pwVar14 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar14,pwVar15);
}

// ExtendAssetRegistryTags @ 146210940

void __thiscall
UMovieSceneMetaData::ExtendAssetRegistryTags
          (UMovieSceneMetaData *this,
          TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// ExtendAssetRegistryTags @ 146210950

void __thiscall
UMovieSceneMetaData::ExtendAssetRegistryTags
          (UMovieSceneMetaData *this,FAssetRegistryTagsContext param_1)

{
  FString *pFVar1;
  FAssetRegistryTagsContext local_res8;
  FString local_38;
  FAssetRegistryTag local_28;
  
  FAssetRegistryTagsContext::FAssetRegistryTagsContext
            (&local_res8,(FAssetRegistryTagsContext *)param_1.Data);
  local_28.Name = AssetRegistryTag_Author;
  ::FString::FString(&local_28.Value,(FString *)&this->_padding_);
  local_28.Type = TT_Alphabetical;
  local_28.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_28);
  pFVar1 = FDateTime::ToString((FDateTime *)&this->_padding_,&local_38);
  local_28.Name = AssetRegistryTag_Created;
  local_28.Value.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Value.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  local_28.Value.Data.ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  local_28.Type = TT_Chronological;
  local_28.DisplayFlags = 3;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_28);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_28.Name = AssetRegistryTag_Notes;
  ::FString::FString(&local_28.Value,(FString *)&this->_padding_);
  local_28.Type = TT_Alphabetical;
  local_28.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_28);
  return;
}

// GetAuthor @ 146216390

FString * __thiscall
UMovieSceneMetaData::GetAuthor(UMovieSceneMetaData *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->Author);
  return __return_storage_ptr__;
}

// GetConfigInstance @ 146217380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneMetaData * __cdecl UMovieSceneMetaData::GetConfigInstance(void)

{
  FName FVar1;
  FName *pFVar2;
  UPackage *pUVar3;
  UClass *pUVar4;
  UMovieSceneMetaData *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = ::FName::FName(local_a8,"DefaultMovieSceneMetaData");
      FVar1 = *pFVar2;
      pUVar3 = GetTransientPackage();
      if (FVar1 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar3,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar4 = StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar4);
      local_98._48_8_ = (FObjectInstancingGraph *)0x0;
      local_98._56_8_ = (UPackage *)0x0;
      local_98._24_4_ = RF_MarkAsRootSet;
      local_98._40_8_ = (UObject *)0x0;
      local_98[0x20] = false;
      local_98._8_8_ = pUVar3;
      local_98._16_8_ = FVar1;
      pUVar5 = (UMovieSceneMetaData *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar6 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar6 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      ConfigInstance = pUVar5;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ConfigInstance;
}

// GetCreated @ 1462174e0

FDateTime __thiscall UMovieSceneMetaData::GetCreated(UMovieSceneMetaData *this)

{
  long64 *in_RDX;
  
  *in_RDX = (this->Created).Ticks;
  return (FDateTime)(long64)in_RDX;
}

// GetNotes @ 146219c20

FString * __thiscall
UMovieSceneMetaData::GetNotes(UMovieSceneMetaData *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->Notes);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14621bb70

UClass * __cdecl UMovieSceneMetaData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMetaData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneMetaData",
               &Z_Registration_Info_UClass_UMovieSceneMetaData.InnerSingleton,
               StaticRegisterNativesUMovieSceneMetaData,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"EditorSettings",InternalConstructor<UMovieSceneMetaData>,
               InternalVTableHelperCtorCaller<UMovieSceneMetaData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMetaData.InnerSingleton;
}

// IsEmpty @ 1462225e0

bool __thiscall UMovieSceneMetaData::IsEmpty(UMovieSceneMetaData *this)

{
  if ((((this->Author).Data.ArrayNum < 2) && ((this->Created).Ticks == 0)) &&
     ((this->Notes).Data.ArrayNum < 2)) {
    return true;
  }
  return false;
}

// SetAuthor @ 1462345c0

void __thiscall UMovieSceneMetaData::SetAuthor(UMovieSceneMetaData *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange(&this->Author,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar3);
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// SetCreated @ 146234920

void __thiscall UMovieSceneMetaData::SetCreated(UMovieSceneMetaData *this,FDateTime param_1)

{
  (this->Created).Ticks = param_1.Ticks;
  return;
}

// SetNotes @ 146234f50

void __thiscall UMovieSceneMetaData::SetNotes(UMovieSceneMetaData *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange(&this->Notes,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar3);
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// StaticRegisterNativesUMovieSceneMetaData @ 146237c00

void __cdecl UMovieSceneMetaData::StaticRegisterNativesUMovieSceneMetaData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneMetaData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// _getUObject @ 146241ec0

UObject * __thiscall UMovieSceneMetaData::_getUObject(UMovieSceneMetaData *this)

{
  return (UObject *)&this[-1].Author;
}

// execGetAuthor @ 1462421c0

void __cdecl UMovieSceneMetaData::execGetAuthor(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[1].field_0x10;
  _Src = *(void **)&param_1[1].field_0x8;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar1 * 2);
  }
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execGetCreated @ 146242460

void __cdecl UMovieSceneMetaData::execGetCreated(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x18;
  return;
}

// execGetNotes @ 1462426b0

void __cdecl UMovieSceneMetaData::execGetNotes(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)(param_1 + 2);
  _Src = *(void **)&param_1[1].field_0x20;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar1 * 2);
  }
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execSetAuthor @ 146243890

void __cdecl UMovieSceneMetaData::execSetAuthor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  int iVar3;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  _Src = local_18;
  local_28.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_10;
  local_20 = (int)local_10;
  if ((int)local_10 == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_10,0,&local_28,(int)local_10,&local_1c);
    memcpy(local_28.Data,_Src,lVar2 * 2);
  }
  iVar3 = local_20 + -1;
  if (local_20 == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange((FString *)&param_1[1].field_0x8,(wchar_t *)local_28.Data,iVar3);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execSetCreated @ 146243c00

void __cdecl UMovieSceneMetaData::execSetCreated(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)&param_1[1].field_0x18 = local_res8;
  return;
}

// execSetNotes @ 1462440b0

void __cdecl UMovieSceneMetaData::execSetNotes(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  int iVar3;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  _Src = local_18;
  local_28.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_10;
  local_20 = (int)local_10;
  if ((int)local_10 == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_10,0,&local_28,(int)local_10,&local_1c);
    memcpy(local_28.Data,_Src,lVar2 * 2);
  }
  iVar3 = local_20 + -1;
  if (local_20 == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange((FString *)&param_1[1].field_0x20,(wchar_t *)local_28.Data,iVar3);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

