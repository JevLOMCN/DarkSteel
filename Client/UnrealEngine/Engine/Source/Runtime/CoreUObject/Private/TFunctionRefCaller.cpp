// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 227

// Call @ 141e91900

TStringView<wchar_t> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPackageNameTests::RunTest'::__l10::<lambda_10>,TStringView<wchar_t>,TStringView<wchar_t>_>
::Call(TStringView<wchar_t> *__return_storage_ptr__,void *param_1,TStringView<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  int iVar5;
  wchar_t *pwVar6;
  int iVar7;
  int iVar8;
  
  pwVar3 = param_2->DataPtr;
  uVar4 = *(undefined8 *)&param_2->Size;
  pwVar6 = pwVar3 + (int)*(undefined8 *)&param_2->Size;
  do {
    if (pwVar3 == pwVar6) {
      __return_storage_ptr__->DataPtr = pwVar3;
      *(undefined8 *)&__return_storage_ptr__->Size = uVar4;
      return __return_storage_ptr__;
    }
    pwVar1 = pwVar6 + -1;
    pwVar6 = pwVar6 + -1;
  } while ((*pwVar1 != L':') && (*pwVar1 != L'.'));
  iVar7 = (int)((longlong)pwVar6 - (longlong)pwVar3 >> 1);
  iVar8 = iVar7 + 1;
  iVar5 = 0x7fffffff;
  if (iVar8 < 0) {
    iVar8 = 0;
    iVar5 = iVar7 + -0x80000000;
  }
  iVar7 = (int)uVar4;
  if (iVar7 < iVar8) {
    iVar8 = iVar7;
  }
  iVar2 = iVar7 - iVar8;
  if (iVar5 < iVar7 - iVar8) {
    iVar2 = iVar5;
  }
  __return_storage_ptr__->DataPtr = pwVar3 + iVar8;
  iVar7 = 0;
  if (0 < iVar2) {
    iVar7 = iVar2;
  }
  __return_storage_ptr__->Size = iVar7;
  return __return_storage_ptr__;
}

// Call @ 141e919a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPackageName::FindPackagesInDirectory'::__l2::<lambda_1>,bool,wchar_t_const_*>::
Call(void *param_1,wchar_t **param_2)

{
  bool bVar1;
  
  bVar1 = `FPackageName::FindPackagesInDirectory'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 141e919b0

FTlsAutoCleanup * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TThreadSingleton<FDeferredCdoInitializationTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
::Call(void *param_1)

{
  DWORD DVar1;
  FDeferredInitializationTrackerBase *pFVar2;
  FDeferredInitializationTrackerBase *pFVar3;
  
  pFVar2 = ::operator_new(0x118);
  pFVar3 = (FDeferredInitializationTrackerBase *)0x0;
  if (pFVar2 != (FDeferredInitializationTrackerBase *)0x0) {
    memset(pFVar2,0,0x118);
    FDeferredInitializationTrackerBase::FDeferredInitializationTrackerBase(pFVar2);
    pFVar2[1]._padding_ =
         (longlong)&___7__TThreadSingleton_UFDeferredCdoInitializationTracker____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)&pFVar2[1].ArchetypeInstanceMap = DVar1;
    pFVar2->_padding_ =
         (longlong)
         &FDeferredCdoInitializationTracker::_vftable__for__FDeferredInitializationTrackerBase__;
    pFVar2[1]._padding_ =
         (longlong)
         &FDeferredCdoInitializationTracker::
          _vftable__for__TThreadSingleton<FDeferredCdoInitializationTracker>__;
    pFVar3 = pFVar2;
  }
  pFVar2 = pFVar3 + 1;
  if (pFVar3 == (FDeferredInitializationTrackerBase *)0x0) {
    pFVar2 = (FDeferredInitializationTrackerBase *)0x0;
  }
  return (FTlsAutoCleanup *)pFVar2;
}

// Call @ 141e919c0

FTlsAutoCleanup * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TThreadSingleton<FDeferredSubObjInitializationTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
::Call(void *param_1)

{
  DWORD DVar1;
  FDeferredInitializationTrackerBase *pFVar2;
  FDeferredInitializationTrackerBase *pFVar3;
  
  pFVar2 = ::operator_new(0x118);
  pFVar3 = (FDeferredInitializationTrackerBase *)0x0;
  if (pFVar2 != (FDeferredInitializationTrackerBase *)0x0) {
    memset(pFVar2,0,0x118);
    FDeferredInitializationTrackerBase::FDeferredInitializationTrackerBase(pFVar2);
    pFVar2[1]._padding_ =
         (longlong)&___7__TThreadSingleton_UFDeferredSubObjInitializationTracker____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)&pFVar2[1].ArchetypeInstanceMap = DVar1;
    pFVar2->_padding_ =
         (longlong)
         &FDeferredSubObjInitializationTracker::_vftable__for__FDeferredInitializationTrackerBase__;
    pFVar2[1]._padding_ =
         (longlong)
         &FDeferredSubObjInitializationTracker::
          _vftable__for__TThreadSingleton<FDeferredSubObjInitializationTracker>__;
    pFVar3 = pFVar2;
  }
  pFVar2 = pFVar3 + 1;
  if (pFVar3 == (FDeferredInitializationTrackerBase *)0x0) {
    pFVar2 = (FDeferredInitializationTrackerBase *)0x0;
  }
  return (FTlsAutoCleanup *)pFVar2;
}

// Call @ 141e919d0

FTlsAutoCleanup * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TThreadSingleton<FResolvingExportTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
::Call(void *param_1)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0xb0);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    memset(pFVar2 + 1,0,0xa8);
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_UFResolvingExportTracker____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FResolvingExportTracker__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 7) = 0;
    *(undefined4 *)&pFVar2[7].field_0x4 = 0x80;
    *(undefined4 *)&pFVar2[8].field_0x4 = 0;
    *(undefined4 *)(pFVar2 + 8) = 0xffffffff;
    pFVar2[10] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0xb) = 0;
    pFVar2[0xc] = (FTlsAutoCleanup)0x0;
    pFVar2[0xd] = (FTlsAutoCleanup)0x0;
    pFVar2[0x10] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0x11) = 0;
    *(undefined4 *)&pFVar2[0x11].field_0x4 = 0x80;
    *(undefined4 *)&pFVar2[0x12].field_0x4 = 0;
    *(undefined4 *)(pFVar2 + 0x12) = 0xffffffff;
    pFVar2[0x14] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0x15) = 0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// Call @ 141e919e0

FTlsAutoCleanup * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TThreadSingleton<FSoftObjectPathThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
::Call(void *param_1)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x20);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_VFSoftObjectPathThreadContext____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FSoftObjectPathThreadContext__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// Call @ 141e91a40

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPackageName::IteratePackagesInDirectory'::__l2::<lambda_1>,bool,FPackagePath_const_&>
::Call(void *param_1,FPackagePath *param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  FString *pFVar3;
  FScriptContainerElement *local_res8 [4];
  FString local_18;
  
  puVar1 = *(undefined8 **)param_1;
  pFVar3 = FPackagePath::GetLocalFullPath(param_2,&local_18);
  if ((pFVar3->Data).ArrayNum == 0) {
    local_res8[0] = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_res8[0] = (pFVar3->Data).AllocatorInstance.Data;
  }
  uVar2 = (*(code *)*puVar1)(puVar1[1],local_res8);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (bool)uVar2;
}

// Call @ 141e91aa0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPackageName::IteratePackagesInDirectory'::__l2::<lambda_1>,bool,FPackagePath_const_&,FFileStatData_const_&>
::Call(void *param_1,FPackagePath *param_2,FFileStatData *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  FString *pFVar3;
  FScriptContainerElement *local_res8;
  FString local_18;
  
  puVar1 = *(undefined8 **)param_1;
  pFVar3 = FPackagePath::GetLocalFullPath(param_2,&local_18);
  if ((pFVar3->Data).ArrayNum == 0) {
    local_res8 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_res8 = (pFVar3->Data).AllocatorInstance.Data;
  }
  uVar2 = (*(code *)*puVar1)(puVar1[1],&local_res8,param_3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (bool)uVar2;
}

// Call @ 141e91b10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPackageName::ObjectPathAppend'::__l2::<lambda_1>,void,TStringView<wchar_t>_>::
Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int iVar1;
  TStringBuilderBase<wchar_t> *this;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t wVar4;
  
  pwVar3 = param_2->DataPtr;
  iVar2 = param_2->Size;
  iVar1 = **(int **)((longlong)param_1 + 8);
  **(int **)((longlong)param_1 + 8) = iVar1 + 1;
  this = *(TStringBuilderBase<wchar_t> **)param_1;
  wVar4 = L':';
  if (iVar1 != 1) {
    wVar4 = L'.';
  }
  if (this->End < this->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(this,1);
  }
  *this->CurPos = wVar4;
  this->CurPos = this->CurPos + 1;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(this,pwVar3,iVar2);
  return;
}

// Call @ 141e91ba0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`FixedTagPrivate::FAsyncStoreLoader::ReadInitialDataAndKickLoad'::__l15::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 141e91bc0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBlueprintSupport::IsInBlueprintPackage'::__l5::<lambda_1>,bool,UObject_*>::Call
          (void *param_1,UObject **param_2)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = *param_2;
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      **(byte **)param_1 = (byte)(*(uint *)&pUVar2[5].field_0xc >> 0x12) & 1;
      return false;
    }
  }
  return true;
}

// Call @ 141e91c30

FString * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::AssetData::Private::ParseAssetBundles'::__l5::<lambda_1>,FString>::Call
          (FString *__return_storage_ptr__,void *param_1)

{
  ::FName::ToString((FName *)(*(longlong *)param_1 + 0x10),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 141e91c60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FFindInstancedReferenceSubobjectHelper::GetInstancedSubObjects<TArray<FInstancedSubObjRef,TSizedDefaultAllocator<32>_>_>'::__l6::<lambda_1>,void,FInstancedSubObjRef_const_&,void_const_*>
::Call(void *param_1,FInstancedSubObjRef *param_2,void **param_3)

{
  `FFindInstancedReferenceSubobjectHelper::
  GetInstancedSubObjects<TArray<FInstancedSubObjRef,TSizedDefaultAllocator<32>_>_>'::__l6::
  <lambda_1>::operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 141e91c70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::CoreUObject::Private::HandlePossibleAssetLeaks'::__l6::<lambda_1>,void,UObject_*>
::Call(void *param_1,UObject **param_2)

{
  `UE::CoreUObject::Private::HandlePossibleAssetLeaks'::__l6::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 141e91c80

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FExclusiveLoadPackageTimeTracker::InternalPopLoadPackage'::__l9::<lambda_1>,bool,UObject_*>
::Call(void *param_1,UObject **param_2)

{
  UObject *pUVar1;
  char cVar2;
  
  pUVar1 = *param_2;
  if (pUVar1 != (UObject *)0x0) {
    cVar2 = (**(code **)(*(longlong *)pUVar1 + 0x1c0))(pUVar1);
    if (cVar2 != '\0') {
      **(undefined8 **)param_1 = *(undefined8 *)(*(longlong *)&pUVar1->field_0x10 + 0x18);
      return false;
    }
  }
  return true;
}

// Call @ 141e91ce0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDefaultPackageLocalizationCache::FindLocalizedPackages'::__l10::<lambda_1>,bool,wchar_t_const_*>
::Call(void *param_1,wchar_t **param_2)

{
  bool bVar1;
  
  bVar1 = `FDefaultPackageLocalizationCache::FindLocalizedPackages'::__l10::<lambda_1>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 141e91cf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FixedTagPrivate::FAsyncStoreLoader::ReadInitialDataAndKickLoad'::__l15::<lambda_1>,void>
::Call(void *param_1)

{
  TSerializer<22> TStack_e8;
  TArrayView<FixedTagPrivate::FMarshalledText,int> TStack_c8;
  FArchiveState FStack_b8;
  undefined8 uStack_28;
  void *pvStack_20;
  undefined8 uStack_18;
  
  FStack_b8._padding_ = 0;
  FStack_b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  FStack_b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  FStack_b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  FStack_b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  FStack_b8._40_8_ = 0;
  FStack_b8.ArSerializingDefaults = 0;
  FStack_b8.ArPortFlags = 0;
  FStack_b8.ArMaxSerializeSize = 0;
  FStack_b8.ArUEVer.FileVersionUE4 = 0;
  FStack_b8.ArUEVer.FileVersionUE5 = 0;
  FStack_b8.ArLicenseeUEVer = 0;
  FStack_b8.ArEngineVer.Major = 0;
  FStack_b8.ArEngineVer.Minor = 0;
  FStack_b8.ArEngineVer.Patch = 0;
  FStack_b8.ArEngineVer._6_2_ = 0;
  FStack_b8.ArEngineVer.Changelist = 0;
  FStack_b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  FStack_b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  FStack_b8.SavePackageData = (FArchiveSavePackageData *)0x0;
  FStack_b8.SerializedProperty = (FProperty *)0x0;
  FStack_b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  FStack_b8.bCustomVersionsAreReset = false;
  FStack_b8._129_7_ = 0;
  FStack_b8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&FStack_b8);
  FStack_b8._padding_ = (longlong)&___7FMemoryReader__6B_;
  uStack_18 = 0x7fffffffffffffff;
  uStack_28 = 0;
  pvStack_20 = param_1;
  FArchiveState::SetIsLoading(&FStack_b8,true);
  (**(code **)(FStack_b8._padding_ + 0x108))(&FStack_b8,0);
  TStack_e8.Ar = (FArchive *)&FStack_b8;
  TStack_e8.Scratch.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_e8.Scratch.Data.ArrayNum = 0;
  TStack_e8.Scratch.Data.ArrayMax = 0;
  TStack_c8.DataPtr = *(FMarshalledText **)(*(longlong *)((longlong)param_1 + 0x10) + 0xa0);
  TStack_c8._8_8_ = *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10) + 0xa8);
  FixedTagPrivate::TSerializer<22>::LoadViewData<FixedTagPrivate::FMarshalledText>
            (&TStack_e8,&TStack_c8);
  FArchive::~FArchive((FArchive *)&FStack_b8);
  return;
}

// Call @ 141e91d00

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::CoreUObject::Private::HandlePossibleAssetLeaks'::__l64::<lambda_2>,bool,UObject_*>
::Call(void *param_1,UObject **param_2)

{
  UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)*param_2);
  return true;
}

// Call @ 141e91d20

TStringView<wchar_t> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPackageNameTests::RunTest'::__l6::<lambda_6>,TStringView<wchar_t>,TStringView<wchar_t>_>
::Call(TStringView<wchar_t> *__return_storage_ptr__,void *param_1,TStringView<wchar_t> *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  TStringView<wchar_t> local_18;
  
  pwVar2 = param_2->DataPtr;
  uVar3._0_4_ = param_2->Size;
  uVar3._4_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.DataPtr = pwVar2;
  local_18._8_8_ = uVar3;
  iVar4 = String::FindFirstChar(&local_18,L'.',CaseSensitive);
  if (iVar4 != -1) {
    iVar5 = 0;
    if ((int)uVar3 < 0) {
      iVar5 = (int)uVar3;
    }
    iVar1 = (int)uVar3 - iVar5;
    if (iVar4 < (int)uVar3 - iVar5) {
      iVar1 = iVar4;
    }
    iVar4 = 0;
    if (0 < iVar1) {
      iVar4 = iVar1;
    }
    __return_storage_ptr__->Size = iVar4;
    __return_storage_ptr__->DataPtr = pwVar2 + iVar5;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = pwVar2;
  __return_storage_ptr__->Size = (int)uVar3;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar3._4_4_;
  return __return_storage_ptr__;
}

// Call @ 141e91db0

TStringView<wchar_t> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPackageNameTests::RunTest'::__l7::<lambda_7>,TStringView<wchar_t>,TStringView<wchar_t>_>
::Call(TStringView<wchar_t> *__return_storage_ptr__,void *param_1,TStringView<wchar_t> *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.Size = param_2->Size;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18 = local_28.DataPtr;
  uStack_10 = local_28._8_8_;
  iVar2 = String::FindFirstChar(&local_28,L'.',CaseSensitive);
  if (iVar2 != -1) {
    iVar4 = iVar2 + 1;
    iVar3 = 0x7fffffff;
    if (iVar4 < 0) {
      iVar3 = iVar2 + -0x80000000;
    }
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    iVar2 = (int)uStack_10;
    if (iVar2 < iVar4) {
      iVar4 = iVar2;
    }
    iVar1 = iVar2 - iVar4;
    if (iVar3 < iVar2 - iVar4) {
      iVar1 = iVar3;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    __return_storage_ptr__->DataPtr = local_18 + iVar4;
    __return_storage_ptr__->Size = iVar2;
    return __return_storage_ptr__;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  __return_storage_ptr__->DataPtr = (wchar_t *)0x0;
  __return_storage_ptr__->Size = 0;
  return __return_storage_ptr__;
}

// Call @ 141e91e60

TStringView<wchar_t> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPackageNameTests::RunTest'::__l8::<lambda_8>,TStringView<wchar_t>,TStringView<wchar_t>_>
::Call(TStringView<wchar_t> *__return_storage_ptr__,void *param_1,TStringView<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  int iVar3;
  wchar_t *pwVar4;
  int iVar5;
  
  pwVar2 = param_2->DataPtr;
  iVar5 = (int)*(undefined8 *)&param_2->Size;
  pwVar4 = pwVar2 + (int)*(undefined8 *)&param_2->Size;
  do {
    if (pwVar2 == pwVar4) goto LAB_141e91e99;
    pwVar1 = pwVar4 + -1;
    pwVar4 = pwVar4 + -1;
  } while ((*pwVar1 != L':') && (*pwVar1 != L'.'));
  if (pwVar4 != (wchar_t *)0x0) {
    __return_storage_ptr__->DataPtr = pwVar2;
    iVar3 = (int)((longlong)pwVar4 - (longlong)pwVar2 >> 1);
    if (iVar3 < iVar5) {
      iVar5 = iVar3;
    }
    iVar3 = 0;
    if (0 < iVar5) {
      iVar3 = iVar5;
    }
    __return_storage_ptr__->Size = iVar3;
    return __return_storage_ptr__;
  }
LAB_141e91e99:
  *(undefined8 *)&__return_storage_ptr__->Size = 0;
  __return_storage_ptr__->DataPtr = (wchar_t *)0x0;
  __return_storage_ptr__->Size = 0;
  return __return_storage_ptr__;
}

// Call @ 141e91ee0

TStringView<wchar_t> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPackageNameTests::RunTest'::__l9::<lambda_9>,TStringView<wchar_t>,TStringView<wchar_t>_>
::Call(TStringView<wchar_t> *__return_storage_ptr__,void *param_1,TStringView<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  TStringView<wchar_t> local_28 [2];
  
  pwVar1 = param_2->DataPtr;
  uVar2._0_4_ = param_2->Size;
  uVar2._4_4_ = *(undefined4 *)&param_2->field_0xc;
  local_28[0].DataPtr = pwVar1;
  local_28[0]._8_8_ = uVar2;
  iVar3 = String::FindFirstChar(local_28,L':',CaseSensitive);
  if (iVar3 == -1) {
    local_28[0].DataPtr = pwVar1;
    local_28[0]._8_8_ = uVar2;
    iVar3 = String::FindFirstChar(local_28,L'.',CaseSensitive);
    if (iVar3 == -1) {
      __return_storage_ptr__->DataPtr = pwVar1;
      __return_storage_ptr__->Size = (int)uVar2;
      *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar2._4_4_;
      return __return_storage_ptr__;
    }
  }
  iVar4 = iVar3 + 1;
  iVar5 = 0x7fffffff;
  if (iVar4 < 0) {
    iVar5 = iVar3 + -0x80000000;
  }
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if ((int)uVar2 < iVar4) {
    iVar4 = (int)uVar2;
  }
  iVar3 = (int)uVar2 - iVar4;
  if (iVar5 < (int)uVar2 - iVar4) {
    iVar3 = iVar5;
  }
  __return_storage_ptr__->DataPtr = pwVar1 + iVar4;
  iVar4 = 0;
  if (0 < iVar3) {
    iVar4 = iVar3;
  }
  __return_storage_ptr__->Size = iVar4;
  return __return_storage_ptr__;
}

// Call @ 141eddaa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAsyncArchive::FAsyncArchive'::__l2::<lambda_1>,void,bool,IAsyncReadRequest_*>::
Call(void *param_1,bool *param_2,IAsyncReadRequest **param_3)

{
  FAsyncArchive::ReadCallback(*(FAsyncArchive **)param_1,*param_2,*param_3);
  return;
}

// Call @ 141eddac0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPrecacheCallbackHandler::FPrecacheCallbackHandler'::__l2::<lambda_1>,void,bool,IAsyncReadRequest_*>
::Call(void *param_1,bool *param_2,IAsyncReadRequest **param_3)

{
  `FPrecacheCallbackHandler::FPrecacheCallbackHandler'::__l2::<lambda_1>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 141eddae0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FindPackageReferencesInObject'::__l2::<lambda_1>,void,UObject_const_*>::Call
          (void *param_1,UObject **param_2)

{
  `FindPackageReferencesInObject'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 141eddaf0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FTlsAutoCleanup * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
::Call(void *param_1)

{
  FUObjectThreadContext *pFVar1;
  
  pFVar1 = ::operator_new(0x180);
  if (pFVar1 != (FUObjectThreadContext *)0x0) {
    pFVar1 = FUObjectThreadContext::FUObjectThreadContext(pFVar1);
    return (FTlsAutoCleanup *)pFVar1;
  }
  return (FTlsAutoCleanup *)0x0;
}

// Call @ 141eddb20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAsyncLoadingThread::QueueEvent_CreateLinker'::__l2::<lambda_1>,void,FAsyncLoadEventArgs_&>
::Call(void *param_1,FAsyncLoadEventArgs *param_2)

{
  int iVar1;
  FAsyncPackage *this;
  code *pcVar2;
  bool bVar3;
  TTuple<FName,FAsyncPackage_*> *pTVar4;
  
  iVar1 = *(int *)((longlong)param_1 + 8);
  if ((*(FName *)param_1 != (FName)0x0) && (iVar1 != 0)) {
    pTVar4 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                     *)(*(longlong *)((longlong)param_1 + 0x10) + 0x280),*(FName *)param_1);
    if ((pTVar4 != (TTuple<FName,FAsyncPackage_*> *)0x0) &&
       ((this = *(FAsyncPackage **)&pTVar4->field_0x8, this != (FAsyncPackage *)0x0 &&
        (this->SerialNumber == iVar1)))) {
      param_2->OutLastTypeOfWorkPerformed = L"Create Linker";
      param_2->OutLastObjectWorkWasPerformedOn = (UObject *)this->LinkerRoot;
      this->TickStartTime = param_2->TickStartTime;
      this->LastTypeOfWorkPerformed = L"Create Linker";
      this->LastObjectWorkWasPerformedOn = (UObject *)this->LinkerRoot;
      this->TimeLimit = param_2->TimeLimit;
      this->bUseTimeLimit = param_2->bUseTimeLimit;
      this->bUseFullTimeLimit = param_2->bUseFullTimeLimit;
      FAsyncPackage::Event_CreateLinker(this);
      param_2->OutLastObjectWorkWasPerformedOn = (UObject *)this->LinkerRoot;
      return;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pkg",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                     ,0x70a,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// Call @ 141eddb30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAsyncLoadingThread::QueueEvent_ExportsDone'::__l2::<lambda_1>,void,FAsyncLoadEventArgs_&>
::Call(void *param_1,FAsyncLoadEventArgs *param_2)

{
  int iVar1;
  FAsyncPackage *this;
  TTuple<FName,FAsyncPackage_*> *pTVar2;
  
  iVar1 = *(int *)((longlong)param_1 + 8);
  if ((*(FName *)param_1 != (FName)0x0) && (iVar1 != 0)) {
    pTVar2 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                     *)(*(longlong *)((longlong)param_1 + 0x10) + 0x280),*(FName *)param_1);
    if ((pTVar2 != (TTuple<FName,FAsyncPackage_*> *)0x0) &&
       ((this = *(FAsyncPackage **)&pTVar2->field_0x8, this != (FAsyncPackage *)0x0 &&
        (this->SerialNumber == iVar1)))) {
      param_2->OutLastTypeOfWorkPerformed = L"Exports Done";
      param_2->OutLastObjectWorkWasPerformedOn = (UObject *)this->LinkerRoot;
      this->TickStartTime = param_2->TickStartTime;
      this->LastObjectWorkWasPerformedOn = (UObject *)this->LinkerRoot;
      this->LastTypeOfWorkPerformed = L"Exports Done";
      this->TimeLimit = param_2->TimeLimit;
      this->bUseTimeLimit = param_2->bUseTimeLimit;
      this->bUseFullTimeLimit = param_2->bUseFullTimeLimit;
      FAsyncPackage::Event_ExportsDone(this);
    }
  }
  return;
}

// Call @ 141eddb40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAsyncLoadingThread::QueueEvent_ProcessImportsAndExports'::__l2::<lambda_1>,void,FAsyncLoadEventArgs_&>
::Call(void *param_1,FAsyncLoadEventArgs *param_2)

{
  FTlsAutoCleanup this;
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<FName,FAsyncPackage_*> *pTVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FExclusiveLoadPackageTimeTracker *this_00;
  char *pcVar7;
  FTlsAutoCleanup FVar8;
  int iVar9;
  undefined1 auStackX_8 [16];
  FLLMScope aFStackX_18 [2];
  FMemScope FStackX_20;
  FName FStack_48;
  undefined1 *puStack_40;
  FScopedAsyncPackageEvent FStack_38;
  
  FStack_48 = *(FName *)param_1;
  iVar9 = *(int *)((longlong)param_1 + 8);
  if (FStack_48 == (FName)0x0) {
    return;
  }
  if (iVar9 == 0) {
    return;
  }
  pTVar4 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                   *)(*(longlong *)((longlong)param_1 + 0x10) + 0x280),FStack_48);
  if (pTVar4 == (TTuple<FName,FAsyncPackage_*> *)0x0) {
    return;
  }
  this = *(FTlsAutoCleanup *)&pTVar4->field_0x8;
  if (this == (FTlsAutoCleanup)0x0) {
    return;
  }
  if (*(int *)((longlong)this + 0x2dc) != iVar9) {
    return;
  }
  param_2->OutLastTypeOfWorkPerformed = L"ProcessImportsAndExports";
  param_2->OutLastObjectWorkWasPerformedOn = (UObject *)*(UPackage **)((longlong)this + 0x58);
  *(double *)((longlong)this + 0x118) = param_2->TickStartTime;
  *(wchar_t **)((longlong)this + 0x128) = L"ProcessImportsAndExports";
  *(UPackage **)((longlong)this + 0x120) = *(UPackage **)((longlong)this + 0x58);
  *(float *)((longlong)this + 0x108) = param_2->TimeLimit;
  *(bool *)((longlong)this + 0x10c) = param_2->bUseTimeLimit;
  *(bool *)((longlong)this + 0x10d) = param_2->bUseFullTimeLimit;
  FLLMScope::FLLMScope(aFStackX_18,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(&FStackX_20,AsyncLoading,true);
  if (*(bool *)((longlong)this + 0x59a) == false) {
    if ((*(EAsyncPackageLoadingState *)((longlong)this + 0x2d8) != ProcessNewImportsAndExports) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("AsyncPackageLoadingState == EAsyncPackageLoadingState::ProcessNewImportsAndExports"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0xb5f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FStack_38.Package = (FAsyncPackage *)this;
    puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    puStack_40 = auStackX_8;
    FStack_48 = (FName)TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                       ::Call;
    pFVar6 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&FStack_48,puVar5);
    FStack_38.PreviousPackage = *(FAsyncPackage **)(pFVar6 + 8);
    FStack_38.PreviousAsyncPackageLoader = *(IAsyncPackageLoader **)(pFVar6 + 9);
    pFVar6[8] = this;
    FVar8 = (FTlsAutoCleanup)&(*(FAsyncLoadingThread **)((longlong)this + 0x278))->_padding_;
    if (*(FAsyncLoadingThread **)((longlong)this + 0x278) == (FAsyncLoadingThread *)0x0) {
      FVar8 = (FTlsAutoCleanup)0x0;
    }
    pFVar6[9] = FVar8;
    FAsyncPackage::BeginAsyncLoad((FAsyncPackage *)this);
    FVar1 = *(FName *)((longlong)this + 0x1c);
    this_00 = FExclusiveLoadPackageTimeTracker::TrackerInstance;
    if (FExclusiveLoadPackageTimeTracker::TrackerInstance == (FExclusiveLoadPackageTimeTracker *)0x0
       ) {
      this_00 = FExclusiveLoadPackageTimeTracker::Construct();
    }
    FExclusiveLoadPackageTimeTracker::InternalPushLoadPackage(this_00,FVar1);
    FAsyncPackage::ProcessImportsAndExports_Event((FAsyncPackage *)this);
    *(bool *)((longlong)this + 0x598) = false;
    FAsyncPackage::ConditionalQueueProcessImportsAndExports((FAsyncPackage *)this,true);
    FScopedAsyncPackageEvent::~FScopedAsyncPackageEvent(&FStack_38);
    if (*(EAsyncPackageLoadingState *)((longlong)this + 0x2d8) == ProcessNewImportsAndExports)
    goto LAB_141ed84de;
    iVar9 = 0xb66;
    pcVar7 = "AsyncPackageLoadingState == EAsyncPackageLoadingState::ProcessNewImportsAndExports";
  }
  else {
    if ((((*(int *)((longlong)this + 0x2e8) == 0) && (*(int *)((longlong)this + 0x2f8) == 0)) &&
        (*(int *)((longlong)this + 0x308) == 0)) &&
       (((*(int *)((longlong)this + 0x318) == 0 && (*(int *)((longlong)this + 0x328) == 0)) &&
        (*(int *)((longlong)this + 0x338) == 0)))) goto LAB_141ed84de;
    iVar9 = 0xb5c;
    pcVar7 = "!AnyImportsAndExportWorkOutstanding()";
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar7,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                     ,iVar9,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_141ed84de:
  FMemScope::~FMemScope(&FStackX_20);
  FLLMScope::~FLLMScope(aFStackX_18);
  return;
}

// Call @ 141eddb50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAsyncLoadingThread::QueueEvent_ProcessPostloadWait'::__l2::<lambda_1>,void,FAsyncLoadEventArgs_&>
::Call(void *param_1,FAsyncLoadEventArgs *param_2)

{
  int iVar1;
  FAsyncPackage *this;
  TTuple<FName,FAsyncPackage_*> *pTVar2;
  
  iVar1 = *(int *)((longlong)param_1 + 8);
  if ((*(FName *)param_1 != (FName)0x0) && (iVar1 != 0)) {
    pTVar2 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                     *)(*(longlong *)((longlong)param_1 + 0x10) + 0x280),*(FName *)param_1);
    if ((pTVar2 != (TTuple<FName,FAsyncPackage_*> *)0x0) &&
       ((this = *(FAsyncPackage **)&pTVar2->field_0x8, this != (FAsyncPackage *)0x0 &&
        (this->SerialNumber == iVar1)))) {
      param_2->OutLastTypeOfWorkPerformed = L"Process Process Postload Wait";
      param_2->OutLastObjectWorkWasPerformedOn = (UObject *)this->LinkerRoot;
      this->TickStartTime = param_2->TickStartTime;
      this->LastObjectWorkWasPerformedOn = (UObject *)this->LinkerRoot;
      this->LastTypeOfWorkPerformed = L"Process Process Postload Wait";
      this->TimeLimit = param_2->TimeLimit;
      this->bUseTimeLimit = param_2->bUseTimeLimit;
      this->bUseFullTimeLimit = param_2->bUseFullTimeLimit;
      FAsyncPackage::Event_ProcessPostloadWait(this);
    }
  }
  return;
}

// Call @ 141eddb60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAsyncLoadingThread::QueueEvent_SetupExports'::__l2::<lambda_1>,void,FAsyncLoadEventArgs_&>
::Call(void *param_1,FAsyncLoadEventArgs *param_2)

{
  int iVar1;
  FTlsAutoCleanup this;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  Type TVar5;
  TTuple<FName,FAsyncPackage_*> *pTVar6;
  uint *puVar7;
  FTlsAutoCleanup *pFVar8;
  FExclusiveLoadPackageTimeTracker *this_00;
  FTlsAutoCleanup FVar9;
  undefined1 auStackX_8 [8];
  FName FStack_38;
  undefined1 *puStack_30;
  FScopedAsyncPackageEvent FStack_28;
  
  FStack_38 = *(FName *)param_1;
  iVar1 = *(int *)((longlong)param_1 + 8);
  if ((((FStack_38 != (FName)0x0) && (iVar1 != 0)) &&
      (pTVar6 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                        *)(*(longlong *)((longlong)param_1 + 0x10) + 0x280),FStack_38),
      pTVar6 != (TTuple<FName,FAsyncPackage_*> *)0x0)) &&
     ((this = *(FTlsAutoCleanup *)&pTVar6->field_0x8, this != (FTlsAutoCleanup)0x0 &&
      (*(int *)((longlong)this + 0x2dc) == iVar1)))) {
    param_2->OutLastTypeOfWorkPerformed = L"Setup Exports";
    param_2->OutLastObjectWorkWasPerformedOn = (UObject *)*(UPackage **)((longlong)this + 0x58);
    *(double *)((longlong)this + 0x118) = param_2->TickStartTime;
    *(UPackage **)((longlong)this + 0x120) = *(UPackage **)((longlong)this + 0x58);
    *(wchar_t **)((longlong)this + 0x128) = L"Setup Exports";
    *(float *)((longlong)this + 0x108) = param_2->TimeLimit;
    *(bool *)((longlong)this + 0x10c) = param_2->bUseTimeLimit;
    *(bool *)((longlong)this + 0x10d) = param_2->bUseFullTimeLimit;
    FStack_28.Package = (FAsyncPackage *)this;
    puVar7 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    puStack_30 = auStackX_8;
    FStack_38 = (FName)TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                       ::Call;
    pFVar8 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&FStack_38,puVar7);
    FStack_28.PreviousPackage = *(FAsyncPackage **)(pFVar8 + 8);
    FStack_28.PreviousAsyncPackageLoader = *(IAsyncPackageLoader **)(pFVar8 + 9);
    pFVar8[8] = this;
    FVar9 = (FTlsAutoCleanup)&(*(FAsyncLoadingThread **)((longlong)this + 0x278))->_padding_;
    if (*(FAsyncLoadingThread **)((longlong)this + 0x278) == (FAsyncLoadingThread *)0x0) {
      FVar9 = (FTlsAutoCleanup)0x0;
    }
    pFVar8[9] = FVar9;
    FAsyncPackage::BeginAsyncLoad((FAsyncPackage *)this);
    FVar2 = *(FName *)((longlong)this + 0x1c);
    this_00 = FExclusiveLoadPackageTimeTracker::TrackerInstance;
    if (FExclusiveLoadPackageTimeTracker::TrackerInstance == (FExclusiveLoadPackageTimeTracker *)0x0
       ) {
      this_00 = FExclusiveLoadPackageTimeTracker::Construct();
    }
    FExclusiveLoadPackageTimeTracker::InternalPushLoadPackage(this_00,FVar2);
    TVar5 = FAsyncPackage::SetupExports_Event((FAsyncPackage *)this);
    if (TVar5 == TimeOut) {
      FAsyncLoadingThread::QueueEvent_SetupExports
                (*(FAsyncLoadingThread **)((longlong)this + 0x278),(FAsyncPackage *)this,0);
      FScopedAsyncPackageEvent::~FScopedAsyncPackageEvent(&FStack_28);
      return;
    }
    FScopedAsyncPackageEvent::~FScopedAsyncPackageEvent(&FStack_28);
    if ((*(EAsyncPackageLoadingState *)((longlong)this + 0x2d8) != SetupExports) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("AsyncPackageLoadingState == EAsyncPackageLoadingState::SetupExports",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0xa71,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(EAsyncPackageLoadingState *)((longlong)this + 0x2d8) = ProcessNewImportsAndExports;
    FAsyncPackage::ConditionalQueueProcessImportsAndExports((FAsyncPackage *)this,false);
  }
  return;
}

// Call @ 141eddb70

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAsyncLoadingThread::QueueEvent_SetupImports'::__l2::<lambda_1>,void,FAsyncLoadEventArgs_&>
::Call(void *param_1,FAsyncLoadEventArgs *param_2)

{
  int iVar1;
  FTlsAutoCleanup this;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  Type TVar5;
  TTuple<FName,FAsyncPackage_*> *pTVar6;
  uint *puVar7;
  FTlsAutoCleanup *pFVar8;
  FExclusiveLoadPackageTimeTracker *this_00;
  FTlsAutoCleanup FVar9;
  undefined1 auStackX_8 [8];
  FEventLoadNodePtr FStack_48;
  code *pcStack_38;
  undefined1 *puStack_30;
  FScopedAsyncPackageEvent FStack_28;
  
  FStack_48.WaitingPackage.Package = *(FAsyncPackage **)param_1;
  iVar1 = *(int *)((longlong)param_1 + 8);
  if (((((FName)FStack_48.WaitingPackage.Package != (FName)0x0) && (iVar1 != 0)) &&
      (pTVar6 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                        *)(*(longlong *)((longlong)param_1 + 0x10) + 0x280),
                       (FName)FStack_48.WaitingPackage.Package),
      pTVar6 != (TTuple<FName,FAsyncPackage_*> *)0x0)) &&
     ((this = *(FTlsAutoCleanup *)&pTVar6->field_0x8, this != (FTlsAutoCleanup)0x0 &&
      (*(int *)((longlong)this + 0x2dc) == iVar1)))) {
    param_2->OutLastTypeOfWorkPerformed = L"Setup Imports";
    param_2->OutLastObjectWorkWasPerformedOn = (UObject *)*(UPackage **)((longlong)this + 0x58);
    *(double *)((longlong)this + 0x118) = param_2->TickStartTime;
    *(UPackage **)((longlong)this + 0x120) = *(UPackage **)((longlong)this + 0x58);
    *(wchar_t **)((longlong)this + 0x128) = L"Setup Imports";
    *(float *)((longlong)this + 0x108) = param_2->TimeLimit;
    *(bool *)((longlong)this + 0x10c) = param_2->bUseTimeLimit;
    *(bool *)((longlong)this + 0x10d) = param_2->bUseFullTimeLimit;
    FStack_28.Package = (FAsyncPackage *)this;
    puVar7 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    puStack_30 = auStackX_8;
    pcStack_38 = TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
    pFVar8 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_38,puVar7);
    FStack_28.PreviousPackage = *(FAsyncPackage **)(pFVar8 + 8);
    FStack_28.PreviousAsyncPackageLoader = *(IAsyncPackageLoader **)(pFVar8 + 9);
    pFVar8[8] = this;
    FVar9 = (FTlsAutoCleanup)&(*(FAsyncLoadingThread **)((longlong)this + 0x278))->_padding_;
    if (*(FAsyncLoadingThread **)((longlong)this + 0x278) == (FAsyncLoadingThread *)0x0) {
      FVar9 = (FTlsAutoCleanup)0x0;
    }
    pFVar8[9] = FVar9;
    FAsyncPackage::BeginAsyncLoad((FAsyncPackage *)this);
    FVar2 = *(FName *)((longlong)this + 0x1c);
    this_00 = FExclusiveLoadPackageTimeTracker::TrackerInstance;
    if (FExclusiveLoadPackageTimeTracker::TrackerInstance == (FExclusiveLoadPackageTimeTracker *)0x0
       ) {
      this_00 = FExclusiveLoadPackageTimeTracker::Construct();
    }
    FExclusiveLoadPackageTimeTracker::InternalPushLoadPackage(this_00,FVar2);
    TVar5 = FAsyncPackage::SetupImports_Event((FAsyncPackage *)this);
    if ((TVar5 != Complete) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("SetupImports_Event() == EAsyncPackageState::Complete",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x91a,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FScopedAsyncPackageEvent::~FScopedAsyncPackageEvent(&FStack_28);
    if ((*(EAsyncPackageLoadingState *)((longlong)this + 0x2d8) != SetupImports) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("AsyncPackageLoadingState == EAsyncPackageLoadingState::SetupImports",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x91c,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(int *)((longlong)this + 0xe0) !=
         (int)(*(FLinkerLoad **)((longlong)this + 0x50))->_padding_) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ImportIndex == Linker->ImportMap.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x91d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(EAsyncPackageLoadingState *)((longlong)this + 0x2d8) = SetupExports;
    FStack_48.ImportOrExportIndex.Index = 0;
    FStack_48.Phase = ImportOrExport_Serialize;
    FStack_48.WaitingPackage.Package = (FAsyncPackage *)this;
    FEventLoadGraph::RemoveNode
              (&(*(FAsyncLoadingThread **)((longlong)this + 0x278))->EventGraph,&FStack_48);
    FAsyncLoadingThread::QueueEvent_SetupExports
              (*(FAsyncLoadingThread **)((longlong)this + 0x278),(FAsyncPackage *)this,0);
  }
  return;
}

// Call @ 141eddb80

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAsyncLoadingThread::QueueEvent_StartImportPackages'::__l2::<lambda_1>,void,FAsyncLoadEventArgs_&>
::Call(void *param_1,FAsyncLoadEventArgs *param_2)

{
  int iVar1;
  FName this;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  Type TVar5;
  TTuple<FName,FAsyncPackage_*> *pTVar6;
  uint *puVar7;
  FTlsAutoCleanup *pFVar8;
  FExclusiveLoadPackageTimeTracker *this_00;
  FTlsAutoCleanup FVar9;
  undefined1 auStackX_8 [16];
  FLLMScope aFStackX_18 [2];
  FMemScope FStackX_20;
  FEventLoadNodePtr FStack_58;
  code *pcStack_48;
  undefined1 *puStack_40;
  FScopedAsyncPackageEvent FStack_38;
  
  FStack_58.WaitingPackage.Package = *(FAsyncPackage **)param_1;
  iVar1 = *(int *)((longlong)param_1 + 8);
  if (((((FName)FStack_58.WaitingPackage.Package != (FName)0x0) && (iVar1 != 0)) &&
      (pTVar6 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                        *)(*(longlong *)((longlong)param_1 + 0x10) + 0x280),
                       (FName)FStack_58.WaitingPackage.Package),
      pTVar6 != (TTuple<FName,FAsyncPackage_*> *)0x0)) &&
     ((this = *(FName *)&pTVar6->field_0x8, this != (FName)0x0 &&
      (*(int *)((longlong)this + 0x2dc) == iVar1)))) {
    param_2->OutLastTypeOfWorkPerformed = L"Start Import Packages";
    param_2->OutLastObjectWorkWasPerformedOn = *(UObject **)((longlong)this + 0x58);
    *(double *)((longlong)this + 0x118) = param_2->TickStartTime;
    *(wchar_t **)((longlong)this + 0x128) = L"Start Import Packages";
    *(undefined8 *)((longlong)this + 0x120) = *(undefined8 *)((longlong)this + 0x58);
    *(float *)((longlong)this + 0x108) = param_2->TimeLimit;
    *(bool *)((longlong)this + 0x10c) = param_2->bUseTimeLimit;
    *(bool *)((longlong)this + 0x10d) = param_2->bUseFullTimeLimit;
    FLLMScope::FLLMScope(aFStackX_18,AsyncLoading,false,None,Default,true);
    FMemScope::FMemScope(&FStackX_20,AsyncLoading,true);
    FStack_38.Package = (FAsyncPackage *)this;
    puVar7 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    puStack_40 = auStackX_8;
    pcStack_48 = TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
    pFVar8 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_48,puVar7);
    FStack_38.PreviousPackage = *(FAsyncPackage **)(pFVar8 + 8);
    FStack_38.PreviousAsyncPackageLoader = *(IAsyncPackageLoader **)(pFVar8 + 9);
    *(FName *)(pFVar8 + 8) = this;
    FVar9 = (FTlsAutoCleanup)(*(longlong *)((longlong)this + 0x278) + 8);
    if (*(longlong *)((longlong)this + 0x278) == 0) {
      FVar9 = (FTlsAutoCleanup)0x0;
    }
    pFVar8[9] = FVar9;
    FAsyncPackage::BeginAsyncLoad((FAsyncPackage *)this);
    FVar2 = *(FName *)((longlong)this + 0x1c);
    this_00 = FExclusiveLoadPackageTimeTracker::TrackerInstance;
    if (FExclusiveLoadPackageTimeTracker::TrackerInstance == (FExclusiveLoadPackageTimeTracker *)0x0
       ) {
      this_00 = FExclusiveLoadPackageTimeTracker::Construct();
    }
    FExclusiveLoadPackageTimeTracker::InternalPushLoadPackage(this_00,FVar2);
    TVar5 = FAsyncPackage::LoadImports_Event((FAsyncPackage *)this);
    if (TVar5 == TimeOut) {
      FAsyncLoadingThread::QueueEvent_StartImportPackages
                (*(FAsyncLoadingThread **)((longlong)this + 0x278),(FAsyncPackage *)this,0x7fffffff)
      ;
      FScopedAsyncPackageEvent::~FScopedAsyncPackageEvent(&FStack_38);
    }
    else {
      FScopedAsyncPackageEvent::~FScopedAsyncPackageEvent(&FStack_38);
      if ((*(char *)((longlong)this + 0x2d8) != '\x02') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AsyncPackageLoadingState == EAsyncPackageLoadingState::StartImportPackages"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                             ,0x7f7,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined1 *)((longlong)this + 0x2d8) = 3;
      FStack_58.ImportOrExportIndex.Index = 0;
      FStack_58.Phase = ImportOrExport_Serialize;
      FStack_58.WaitingPackage.Package = (FAsyncPackage *)this;
      FEventLoadGraph::DoneAddingPrerequistesFireIfNone
                ((FEventLoadGraph *)(*(longlong *)((longlong)this + 0x278) + 0x410),&FStack_58,true)
      ;
    }
    FMemScope::~FMemScope(&FStackX_20);
    FLLMScope::~FLLMScope(aFStackX_18);
  }
  return;
}

// Call @ 141eddb90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAsyncLoadingThread::QueueEvent_StartPostLoad'::__l2::<lambda_1>,void,FAsyncLoadEventArgs_&>
::Call(void *param_1,FAsyncLoadEventArgs *param_2)

{
  int iVar1;
  FAsyncPackage *this;
  TTuple<FName,FAsyncPackage_*> *pTVar2;
  
  iVar1 = *(int *)((longlong)param_1 + 8);
  if ((*(FName *)param_1 != (FName)0x0) && (iVar1 != 0)) {
    pTVar2 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                     *)(*(longlong *)((longlong)param_1 + 0x10) + 0x280),*(FName *)param_1);
    if ((pTVar2 != (TTuple<FName,FAsyncPackage_*> *)0x0) &&
       ((this = *(FAsyncPackage **)&pTVar2->field_0x8, this != (FAsyncPackage *)0x0 &&
        (this->SerialNumber == iVar1)))) {
      param_2->OutLastTypeOfWorkPerformed = L"Start Post Load";
      param_2->OutLastObjectWorkWasPerformedOn = (UObject *)this->LinkerRoot;
      this->TickStartTime = param_2->TickStartTime;
      this->LastObjectWorkWasPerformedOn = (UObject *)this->LinkerRoot;
      this->LastTypeOfWorkPerformed = L"Start Post Load";
      this->TimeLimit = param_2->TimeLimit;
      this->bUseTimeLimit = param_2->bUseTimeLimit;
      this->bUseFullTimeLimit = param_2->bUseFullTimeLimit;
      FAsyncPackage::Event_StartPostload(this);
    }
  }
  return;
}

// Call @ 141eddba0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAsyncLoadingThread::QueueEvent_FinishLinker'::__l5::<lambda_1>,void,FAsyncLoadEventArgs_&>
::Call(void *param_1,FAsyncLoadEventArgs *param_2)

{
  int iVar1;
  FAsyncPackage *this;
  code *pcVar2;
  bool bVar3;
  TTuple<FName,FAsyncPackage_*> *pTVar4;
  
  iVar1 = *(int *)((longlong)param_1 + 8);
  if ((*(FName *)param_1 != (FName)0x0) && (iVar1 != 0)) {
    pTVar4 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                     *)(*(longlong *)((longlong)param_1 + 0x10) + 0x280),*(FName *)param_1);
    if ((pTVar4 != (TTuple<FName,FAsyncPackage_*> *)0x0) &&
       ((this = *(FAsyncPackage **)&pTVar4->field_0x8, this != (FAsyncPackage *)0x0 &&
        (this->SerialNumber == iVar1)))) {
      param_2->OutLastTypeOfWorkPerformed = L"Finish Linker";
      param_2->OutLastObjectWorkWasPerformedOn = (UObject *)this->LinkerRoot;
      this->TickStartTime = param_2->TickStartTime;
      this->LastObjectWorkWasPerformedOn = (UObject *)this->LinkerRoot;
      this->LastTypeOfWorkPerformed = L"Finish Linker";
      this->TimeLimit = param_2->TimeLimit;
      this->bUseTimeLimit = param_2->bUseTimeLimit;
      this->bUseFullTimeLimit = param_2->bUseFullTimeLimit;
      FAsyncPackage::Event_FinishLinker(this);
      return;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("PkgInner",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                     ,0x74a,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// Call @ 141eddbb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAsyncPackage::CreateLinker'::__l222::<lambda_1>,void>::Call(void *param_1)

{
  FPrecacheCallbackHandler::SummaryComplete
            (*(FPrecacheCallbackHandler **)((longlong)param_1 + 0x10),param_1);
  return;
}

// Call @ 141eddbd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAsyncArchive::FAsyncArchive'::__l15::<lambda_2>,void,bool,IAsyncReadRequest_*>
::Call(void *param_1,bool *param_2,IAsyncReadRequest **param_3)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)param_1;
  CheckCallable(*(void **)(lVar1 + 0x180));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x180);
  plVar3 = (longlong *)(lVar1 + 400);
  if (*(longlong **)(lVar1 + 0x1a8) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 0x1a8);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000141eddc18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}

// Call @ 141f2a330

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPropertyLocalizationDataGatherer::GatherLocalizationDataFromObject'::__l14::<lambda_1>_const_,bool,FProperty_*>
::Call(void *param_1,FProperty **param_2)

{
  return (bool)(~(byte)((uint)(int)(*param_2)->PropertyFlags >> 0xd) & 1);
}

// Call @ 141f2a350

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPropertyLocalizationDataGatherer::FPropertyLocalizationDataGatherer'::__l2::<lambda_1>,bool,UObject_*>
::Call(void *param_1,UObject **param_2)

{
  UObject *local_res8;
  UObject *local_res10 [3];
  
  local_res10[0] = *param_2;
  TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator>::
  Emplace<UObject_const_*_const_&>
            ((TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator> *)
             (*(longlong *)param_1 + 0x78),&local_res8,(bool *)local_res10);
  return true;
}

// Call @ 141f2a390

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBulkDataBatchRequest::FBatchHandle::Issue'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  uint uVar1;
  EIoErrorCode EVar2;
  longlong *plVar3;
  ushort uVar4;
  FIoStatus *pFVar5;
  uint uVar6;
  ulonglong uVar7;
  EStatus EVar8;
  uint uVar9;
  longlong *plVar10;
  FIoStatus FStack_28;
  
  uVar7 = 0;
  EVar8 = Ok;
  uVar9 = 0;
  plVar10 = *(longlong **)(*(longlong *)param_1 + 0x28);
  uVar1 = *(uint *)(*(longlong *)param_1 + 0x38);
  if (uVar1 != 0) {
    do {
      pFVar5 = FIoRequest::Status((FIoRequest *)(*plVar10 + uVar7 * 0x18 + 0x10),&FStack_28);
      EVar2 = pFVar5->ErrorCode;
      FIoStatus::~FIoStatus(&FStack_28);
      if (EVar2 != Ok) {
        EVar8 = (EVar2 != Cancelled) + Cancelled;
        break;
      }
      uVar6 = (int)uVar7 + 1;
      uVar9 = uVar9 + 1;
      uVar7 = 0;
      plVar3 = plVar10 + 1;
      if (uVar6 < 8) {
        uVar7 = (ulonglong)uVar6;
        plVar3 = plVar10;
      }
      plVar10 = plVar3;
    } while (uVar9 < uVar1);
  }
  FBulkDataBatchRequest::FBatchHandle::CompleteBatch(*(FBatchHandle **)param_1,EVar8);
  LOCK();
  __GTraceCounterBulkDataBatchRequest_PendingCount.Value =
       (atomic<__int64>)((longlong)__GTraceCounterBulkDataBatchRequest_PendingCount.Value + -1);
  UNLOCK();
  if (-1 < CountersChannel->Enabled) {
    if (__GTraceCounterBulkDataBatchRequest_PendingCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar4 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterBulkDataBatchRequest_PendingCount.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterBulkDataBatchRequest_PendingCount.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterBulkDataBatchRequest_PendingCount.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterBulkDataBatchRequest_PendingCount.CounterId._2_2_ = 0;
        __GTraceCounterBulkDataBatchRequest_PendingCount.CounterId._0_2_ = uVar4;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterBulkDataBatchRequest_PendingCount.CounterId._0_2_,
               (long64)__GTraceCounterBulkDataBatchRequest_PendingCount.Value);
    return;
  }
  return;
}

// Call @ 141f2a3a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::BulkData::Private::FChunkRequest::Issue'::__l2::<lambda_1>,void,TIoStatusOr<FIoBuffer>_>
::Call(void *param_1,TIoStatusOr<FIoBuffer> *param_2)

{
  TIoStatusOr<FIoBuffer> local_28;
  
  FIoStatus::FIoStatus(&local_28.StatusValue);
  FIoStatus::operator=(&local_28.StatusValue,&param_2->StatusValue);
  if (local_28.StatusValue.ErrorCode == Ok) {
    local_28.Value.Pad = *&(param_2->Value).Pad;
    *(undefined8 *)(param_2->Value).Pad = 0;
    FIoStatus::operator=(&param_2->StatusValue,Unknown);
  }
  `UE::BulkData::Private::FChunkRequest::Issue'::__l2::<lambda_1>::operator()(param_1,&local_28);
  return;
}

// Call @ 141f2a410

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLinkerLoadPackageStoreBackend::OnAssetsRemoved'::__l2::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `FLinkerLoadPackageStoreBackend::OnAssetsRemoved'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 141f2a420

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBulkDataBatchRequest::FBatchBuilder::Read'::__l2::<lambda_1>,void,TIoStatusOr<FIoBuffer>_>
::Call(void *param_1,TIoStatusOr<FIoBuffer> *param_2)

{
  TIoStatusOr<FIoBuffer> local_28;
  
  FIoStatus::FIoStatus(&local_28.StatusValue);
  FIoStatus::operator=(&local_28.StatusValue,&param_2->StatusValue);
  if (local_28.StatusValue.ErrorCode == Ok) {
    local_28.Value.Pad = *&(param_2->Value).Pad;
    *(undefined8 *)(param_2->Value).Pad = 0;
    FIoStatus::operator=(&param_2->StatusValue,Unknown);
  }
  `FBulkDataBatchRequest::FBatchBuilder::Read'::__l2::<lambda_1>::operator()(param_1,&local_28);
  return;
}

// Call @ 141f2a490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141f2791f) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffb8 : 0x000141f27923 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::__l2::<lambda_1>,void,FLinkerSave_&,UE::FPackageTrailer_const_&>
::Call(void *param_1,FLinkerSave *param_2,FPackageTrailer *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  long64 lVar5;
  FString *pFVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  TArray<TUniqueFunction<void___cdecl(FPackagePath_const_&,FObjectPostSaveContext)>,TSizedDefaultAllocator<32>_>
  *pTVar9;
  undefined1 auStack_c8 [32];
  code **ppcStack_a8;
  FScriptContainerElement *pFStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  long64 lStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  code *apcStack_58 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong lStack_38;
  undefined8 *puStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (((param_2->_padding_ != 0) && (*(longlong *)(param_2->_padding_ + 0x10) != 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LinkerSave.IsCooking() == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\EditorBulkData.cpp"
                         ,0x763,
                         L"FEditorBulkData payload should not be written to a package trailer during a cook"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar5 = FPackageTrailer::FindPayloadOffsetInFile(param_3,(FIoHash *)(*(longlong *)param_1 + 0x10))
  ;
  pFVar6 = FLinkerSave::GetFilename(param_2);
  if (1 < (pFVar6->Data).ArrayNum) {
    uStack_68 = *(undefined4 *)((longlong)param_1 + 8);
    uStack_78 = *(undefined8 *)param_1;
    pTVar9 = &param_2->PostSaveCallbacks;
    uStack_60 = *(undefined8 *)((longlong)param_1 + 0x10);
    apcStack_58[0] = (code *)0x0;
    lStack_70 = lVar5;
    puStack_30 = FMemory::Malloc(0x28,8);
    *puStack_30 = &TFunction_OwnedObject<``UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::`2'::<lambda_1>::operator()'::`14'::<lambda_1>,1,1>
                   ::_vftable_;
    puStack_30[1] = uStack_78;
    puStack_30[2] = lStack_70;
    puStack_30[3] = CONCAT44(uStack_64,uStack_68);
    puStack_30[4] = uStack_60;
    if (puStack_30 + 1 != (undefined8 *)0x0) {
      apcStack_58[0] =
           TFunctionRefCaller<``UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,void,FPackagePath_const_&,FObjectPostSaveContext>
           ::Call;
    }
    pFVar8 = (pTVar9->AllocatorInstance).Data;
    if ((pFVar8 <= (FScriptContainerElement *)apcStack_58) &&
       (lVar7 = (longlong)(param_2->PostSaveCallbacks).ArrayMax,
       (FScriptContainerElement *)apcStack_58 < pFVar8 + lVar7 * 0x30)) {
      lStack_90 = (longlong)(param_2->PostSaveCallbacks).ArrayNum;
      uStack_88 = 0x30;
      ppcStack_a8 = apcStack_58;
      pFStack_a0 = pFVar8;
      lStack_98 = lVar7;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (param_2->PostSaveCallbacks).ArrayNum;
    piVar1 = &(param_2->PostSaveCallbacks).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,&pTVar9->AllocatorInstance,piVar1);
    }
    (param_2->PostSaveCallbacks).ArrayNum = iVar4 + 1;
    pFVar8 = (pTVar9->AllocatorInstance).Data + (longlong)iVar4 * 0x30;
    *(code **)pFVar8 = apcStack_58[0];
    *(undefined8 **)(pFVar8 + 0x28) = puStack_30;
    puStack_30 = (undefined8 *)0x0;
    *(undefined4 *)(pFVar8 + 0x10) = uStack_48;
    *(undefined4 *)(pFVar8 + 0x14) = uStack_44;
    *(undefined4 *)(pFVar8 + 0x18) = uStack_40;
    *(undefined4 *)(pFVar8 + 0x1c) = uStack_3c;
    *(longlong *)(pFVar8 + 0x20) = lStack_38;
    if ((*(longlong *)pFVar8 == 0) && (apcStack_58[0] != (code *)0x0)) {
      (**(code **)(CONCAT44(uStack_44,uStack_48) + 0x10))();
    }
  }
  return;
}

// Call @ 141f2a4a0

/* WARNING: Enum "EBulkDataFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FBulkData::TryLoadDataIntoMemory'::__l2::<lambda_1>,void,FArchive_&>::Call
          (void *param_1,FArchive *param_2)

{
  FBulkData::SerializeBulkData
            (*(FBulkData **)param_1,param_2,*(void **)**(undefined8 **)((longlong)param_1 + 0x10),
             *(long64 *)((longlong)param_1 + 8),
             *(EBulkDataFlags *)(((*(FBulkData **)param_1)->BulkMeta).Data + 0xc));
  return;
}

// Call @ 141f2a4d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::DerivedData::Private::FIoResponseDispatcher::DispatchCooked'::__l5::<lambda_1>,void,TIoStatusOr<FIoBuffer>_>
::Call(void *param_1,TIoStatusOr<FIoBuffer> *param_2)

{
  TIoStatusOr<FIoBuffer> local_28;
  
  FIoStatus::FIoStatus(&local_28.StatusValue);
  FIoStatus::operator=(&local_28.StatusValue,&param_2->StatusValue);
  if (local_28.StatusValue.ErrorCode == Ok) {
    local_28.Value.Pad = *&(param_2->Value).Pad;
    *(undefined8 *)(param_2->Value).Pad = 0;
    FIoStatus::operator=(&param_2->StatusValue,Unknown);
  }
  `UE::DerivedData::Private::FIoResponseDispatcher::DispatchCooked'::__l5::<lambda_1>::operator()
            (param_1,&local_28);
  return;
}

// Call @ 141f2a540

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Serialization::FEditorBulkData::SerializeToLegacyPath'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,void,FPackagePath_const_&,FObjectPostSaveContext>
::Call(void *param_1,FPackagePath *param_2,FObjectPostSaveContext *param_3)

{
  FObjectSaveContextData *local_res18 [2];
  
  local_res18[0] = param_3->Data;
  local_res18[0]->NumRefPasses = local_res18[0]->NumRefPasses + 1;
  ``UE::Serialization::FEditorBulkData::SerializeToLegacyPath'::__l2::<lambda_1>::operator()'::__l14
  ::<lambda_1>::operator()(param_1,param_2,(FObjectSaveContextData *)local_res18);
  return;
}

// Call @ 141f2a570

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,void,FPackagePath_const_&,FObjectPostSaveContext>
::Call(void *param_1,FPackagePath *param_2,FObjectPostSaveContext *param_3)

{
  FObjectSaveContextData *local_res18 [2];
  
  local_res18[0] = param_3->Data;
  local_res18[0]->NumRefPasses = local_res18[0]->NumRefPasses + 1;
  ``UE::Serialization::FEditorBulkData::SerializeToPackageTrailer'::__l2::<lambda_1>::operator()'::
  __l14::<lambda_1>::operator()(param_1,param_2,(FObjectSaveContextData *)local_res18);
  return;
}

// Call @ 141f2a5a0

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Serialization::FEditorBulkData::SerializeToLegacyPath'::__l2::<lambda_2>,void,FLinkerSave_&,FArchive_&,__int64>
::Call(void *param_1,FLinkerSave *param_2,FArchive *param_3,long64 *param_4)

{
  `UE::Serialization::FEditorBulkData::SerializeToLegacyPath'::__l2::<lambda_1>::operator()
            (param_1,param_2,(FArchive *)&param_2->_padding_,param_3,*param_4);
  return;
}

// Call @ 141f2a5d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FLinkerLoadPackageStoreBackend::OnMounted'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>,void,TArrayView<FAssetData_const_,int>_>
::Call(void *param_1,TArrayView<FAssetData_const_,int> *param_2)

{
  TArrayView<FAssetData_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  ``FLinkerLoadPackageStoreBackend::OnMounted'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>::
  operator()(param_1,&local_18);
  return;
}

// Call @ 141f71680

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScriptSetHelper::AddElement'::__l2::<lambda_1>,unsigned_int,void_const_*>::Call
          (void *param_1,void **param_2)

{
  uint uVar1;
  
  uVar1 = FProperty::GetValueTypeHash(*(FProperty **)param_1,*param_2);
  return uVar1;
}

// Call @ 141f716a0

FPropertyBagPropertyDesc * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::StructUtils::Private::CopyMatchingValuesByID'::__l2::<lambda_1>,FPropertyBagPropertyDesc_const_*,TNotNull<UPropertyBag_const_*>,FPropertyBagPropertyDesc_const_&>
::Call(void *param_1,TNotNull<UPropertyBag_const_*> *param_2,FPropertyBagPropertyDesc *param_3)

{
  FPropertyBagPropertyDesc *pFVar1;
  FPropertyBagPropertyDesc *pFVar2;
  
  pFVar1 = (FPropertyBagPropertyDesc *)(param_2->Val->PropertyDescs).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (param_2->Val->PropertyDescs).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FPropertyBagPropertyDesc *)0x0;
    }
    if ((((param_3->ID).B == (pFVar1->ID).B && (param_3->ID).D == (pFVar1->ID).D) &&
        (param_3->ID).C == (pFVar1->ID).C) && (param_3->ID).A == (pFVar1->ID).A) break;
    pFVar1 = pFVar1 + 1;
  }
  return pFVar1;
}

// Call @ 141f71730

FPropertyBagPropertyDesc * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::StructUtils::Private::CopyMatchingValuesByIDWithOverrides'::__l2::<lambda_1>,FPropertyBagPropertyDesc_const_*,TNotNull<UPropertyBag_const_*>,FPropertyBagPropertyDesc_const_&>
::Call(void *param_1,TNotNull<UPropertyBag_const_*> *param_2,FPropertyBagPropertyDesc *param_3)

{
  FPropertyBagPropertyDesc *pFVar1;
  
  pFVar1 = `UE::StructUtils::Private::CopyMatchingValuesByIDWithOverrides'::__l2::<lambda_1>::
           operator()(param_1,(TNotNull<UPropertyBag_const_*>)param_2->Val,param_3);
  return pFVar1;
}

// Call @ 141f71740

FPropertyBagPropertyDesc * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstancedPropertyBag::CopyMatchingValuesByName'::__l2::<lambda_1>,FPropertyBagPropertyDesc_const_*,TNotNull<UPropertyBag_const_*>,FPropertyBagPropertyDesc_const_&>
::Call(void *param_1,TNotNull<UPropertyBag_const_*> *param_2,FPropertyBagPropertyDesc *param_3)

{
  FName *pFVar1;
  int iVar2;
  FName *pFVar3;
  FPropertyBagPropertyDesc *pFVar4;
  FPropertyBagPropertyDesc *pFVar5;
  
  iVar2 = (int)(*(longlong **)param_1)[1];
  if (iVar2 != -1) {
    pFVar3 = (FName *)**(longlong **)param_1;
    pFVar1 = pFVar3 + iVar2;
    if (pFVar3 == pFVar1) {
      return (FPropertyBagPropertyDesc *)0x0;
    }
    while (*pFVar3 != param_3->Name) {
      pFVar3 = pFVar3 + 1;
      if (pFVar3 == pFVar1) {
        return (FPropertyBagPropertyDesc *)0x0;
      }
    }
  }
  pFVar4 = (FPropertyBagPropertyDesc *)(param_2->Val->PropertyDescs).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (param_2->Val->PropertyDescs).ArrayNum;
  while( true ) {
    if (pFVar4 == pFVar5) {
      return (FPropertyBagPropertyDesc *)0x0;
    }
    if (pFVar4->Name == param_3->Name) break;
    pFVar4 = pFVar4 + 1;
  }
  return pFVar4;
}

// Call @ 141f717b0

FString * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UScriptStruct::ImportText'::__l2::<lambda_1>,FString>::Call
          (FString *__return_storage_ptr__,void *param_1)

{
  ::FString::FString(__return_storage_ptr__,*(FString **)param_1);
  return __return_storage_ptr__;
}

// Call @ 141f717d0

EPropertyVisitorControlFlow __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UStruct::Visit'::__l2::<lambda_1>,enum_EPropertyVisitorControlFlow,FPropertyVisitorContext_const_&>
::Call(void *param_1,FPropertyVisitorContext *param_2)

{
  EPropertyVisitorControlFlow EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141f717e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (*(code *)**(undefined8 **)param_1)
                    ((*(undefined8 **)param_1)[1],param_2->Path,&param_2->Data);
  return EVar1;
}

// Call @ 141f717f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UScriptStruct::SerializeItem'::__l8::<lambda_1>,void>::Call(void *param_1)

{
  FArchive *pFVar1;
  
  pFVar1 = StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(*(FSlotBase **)param_1);
  pFVar1->field_0x2c =
       pFVar1->field_0x2c ^ (pFVar1->field_0x2c ^ **(byte **)((longlong)param_1 + 8)) & 1;
  return;
}

// Call @ 141f71820

FString * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstancedStruct::ImportTextItem'::__l26::<lambda_1>,FString>::Call
          (FString *__return_storage_ptr__,void *param_1)

{
  FName local_res8 [4];
  
  local_res8[0] = *(FName *)(*(longlong *)param_1 + 0x18);
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 141f71860

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScriptSetHelper::AddElement'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
::Call(void *param_1,void **param_2,void **param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141f7186f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)param_1 + 0xb8))(*(longlong **)param_1,*param_2,*param_3,0);
  return (bool)uVar1;
}

// Call @ 141f71880

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScriptSetHelper::AddElement'::__l2::<lambda_3>,void,void_*>::Call
          (void *param_1,void **param_2)

{
  void *_Dst;
  longlong *plVar1;
  
  _Dst = *param_2;
  plVar1 = *(longlong **)param_1;
  if ((*(uint *)(plVar1 + 7) >> 9 & 1) == 0) {
    (**(code **)(*plVar1 + 0x150))(plVar1,_Dst);
  }
  else {
    memset(_Dst,0,(longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]));
  }
                    /* WARNING: Could not recover jumptable at 0x000141f718d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x100))
            (*(longlong **)param_1,_Dst,*(undefined8 *)((longlong)param_1 + 8));
  return;
}

// Call @ 141f718f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FStructUtils::AttemptToFindUninitializedScriptStructMembers'::__l75::<lambda_3>,void,double>
::Call(void *param_1,double *param_2)

{
  `FStructUtils::AttemptToFindUninitializedScriptStructMembers'::__l75::<lambda_3>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 141f71900

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScriptSetHelper::AddElement'::__l2::<lambda_4>,void,void_*>::Call
          (void *param_1,void **param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)param_1;
  if (((plVar1[7] & 0x1040000000U) == 0) && (((ulonglong)plVar1[7] >> 0x24 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000141f71923. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x138))(plVar1,*param_2);
    return;
  }
  return;
}

// Call @ 141f71940

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FStructTracker::FStructTracker'::__l1::<lambda_5_>,bool,UStruct_const_*>::Call
          (void *param_1,UStruct **param_2)

{
  bool bVar1;
  
  bVar1 = `FStructTracker::FStructTracker'::__l1::<lambda_5_>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 141f71950

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FStructTracker::FStructTracker'::__l1::<lambda_6_>,bool,UStruct_const_*>::Call
          (void *param_1,UStruct **param_2)

{
  bool bVar1;
  
  bVar1 = `FStructTracker::FStructTracker'::__l1::<lambda_6_>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 141fc67f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<FSoftObjectPath_DefaultPreFixupForPIEFunction::<lambda>_const_,void,int,FSoftObjectPath_&>
::Call(void *param_1,int *param_2,FSoftObjectPath *param_3)

{
  return;
}

// Call @ 141fc6800

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UEnum::GetValueOrBitfieldFromString'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  FName FVar1;
  int iVar2;
  FName *pFVar3;
  ulonglong uVar4;
  FName local_res8;
  
  if (**(char **)((longlong)param_1 + 8) != '\0') {
    pFVar3 = ::FName::FName(&local_res8,(int)*(undefined8 *)&param_2->Size,param_2->DataPtr,
                            FNAME_Add);
    FVar1 = *pFVar3;
    iVar2 = UEnum::GetIndexByName
                      (*(UEnum **)param_1,FVar1,*(EGetByNameFlags *)((longlong)param_1 + 0x18));
    if (iVar2 != -1) {
      uVar4 = UEnum::GetValueByName(*(UEnum **)param_1,FVar1,None);
      **(ulonglong **)((longlong)param_1 + 0x10) =
           **(ulonglong **)((longlong)param_1 + 0x10) | uVar4;
      return;
    }
    **(undefined1 **)((longlong)param_1 + 8) = 0;
  }
  return;
}

// Call @ 141fc6880

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UEnum::LookupEnumNameSlow'::__l2::<lambda_1>,bool,FName>::Call
          (void *param_1,FName *param_2)

{
  bool bVar1;
  
  bVar1 = `UEnum::LookupEnumNameSlow'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 141fc6890

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UEnum::LookupEnumName'::__l22::<lambda_1>,bool,FName>::Call
          (void *param_1,FName *param_2)

{
  return *(FName *)param_1 == *param_2;
}

// Call @ 142023680

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`DissolveUnreachableClusters'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `DissolveUnreachableClusters'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 142023690

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`GatherUnreachableObjects'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `GatherUnreachableObjects'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1420236a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::GC::FRealtimeGC::MarkClusteredObjectsAsReachable'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::GC::FRealtimeGC::MarkClusteredObjectsAsReachable'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 1420236b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`OnDisregardForGCSetDisabled'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `OnDisregardForGCSetDisabled'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1420236c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::GC::FRealtimeGC::ResetReachabilityFlags'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UE::GC::FRealtimeGC::ResetReachabilityFlags'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1420236d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`VerifyClustersAssumptions'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `VerifyClustersAssumptions'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1420236e0

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`VerifyGCAssumptions'::__l2::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `VerifyGCAssumptions'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1420236f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`VerifyNoUnreachableObjects'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `VerifyNoUnreachableObjects'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 142023700

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`VerifyObjectFlags'::__l2::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `VerifyObjectFlags'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 142023710

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::GC::FRealtimeGC::MarkRootObjectsAsReachable'::__l3::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `UE::GC::FRealtimeGC::MarkRootObjectsAsReachable'::__l3::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 142023720

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`FGCCSyncObject::GCLock'::__l4::<lambda_1>,bool>::
Call(void *param_1)

{
  return **(int **)param_1 == 0;
}

// Call @ 142023740

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::GC::FRealtimeGC::MarkRootObjectsAsReachable'::__l6::<lambda_2>,void,int>::
Call(void *param_1,int *param_2)

{
  `UE::GC::FRealtimeGC::MarkRootObjectsAsReachable'::__l6::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 1420ab240

FTlsAutoCleanup * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TThreadSingleton<FPlaceholderContainerTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
::Call(void *param_1)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x40);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    pFVar2[7] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_UFPlaceholderContainerTracker____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FPlaceholderContainerTracker__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    pFVar2[7] = (FTlsAutoCleanup)0x0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// Call @ 1420ab250

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`LoadPackageLinker'::__l2::<lambda_1>,void,FLinkerLoad_*>::Call
          (void *param_1,FLinkerLoad **param_2)

{
  return;
}

// Call @ 1420ab260

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLinkerManager::ResetLoaders'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*param_2 < *(int *)(*(longlong *)param_1 + 8)) {
    uVar3 = (uint)~*param_2 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Call @ 1420ab2c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l5::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 1420ab2e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`FLinkerLoad::UpdateFromPackageFileSummary'::__l23::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 1420ab300

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`FLinkerLoad::SerializePackageTrailer'::__l24::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 1420ab320

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l8::<lambda_2>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 1420ab340

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`FLinkerLoad::UpdateFromPackageFileSummary'::__l34::<lambda_2>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 1420ab360

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l27::<lambda_3>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 1420ab380

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l43::<lambda_4>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 1420ab3a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l46::<lambda_5>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 1420ab3c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l52::<lambda_6>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 1420ab3e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l58::<lambda_7>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<TUniqueFunction<void___cdecl(void)>_&>
            ((TPromise<void> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 1420ab400

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  FMessageLog *this;
  FText *pFVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FName FStackX_8;
  TSharedRef<FTokenizedMessage,1> TStack_88;
  FText FStack_78;
  FText FStack_68;
  FText FStack_58;
  FTextFormat FStack_48;
  FMessageLog FStack_38;
  
  ::FName::FName(&FStackX_8,"LoadErrors");
  this = FMessageLog::FMessageLog(&FStack_38,&FStackX_8);
  pFVar1 = FText::FromString(&FStack_58,param_1);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_68,L"Core",L"LinkerLoad_PkgSumCorrupted",
                      L"The summary for the package \'{0}\' is invalid. Check that the file is of the expected type and not corrupted."
                     );
  pFVar3 = FTextFormat::FTextFormat(&FStack_48,pFVar2,Default);
  pFVar1 = FText::Format<FText>(&FStack_78,pFVar3,pFVar1);
  FMessageLog::Error(this,&TStack_88,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_88.SharedReferenceCount.ReferenceController);
  if (FStack_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_78.TextData.Reference + 0x10))();
  }
  if (FStack_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_68.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&FStack_38);
  return;
}

// Call @ 1420ab410

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLinkerLoad::UpdateFromPackageFileSummary'::__l23::<lambda_1>,void>::Call
          (void *param_1)

{
  FMessageLog *pFVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FName FStackX_8;
  TSharedRef<FTokenizedMessage,1> TStack_88;
  FText FStack_78;
  FText FStack_68;
  FText FStack_58;
  FTextFormat FStack_48;
  FMessageLog FStack_38;
  
  ::FName::FName(&FStackX_8,"LoadErrors");
  pFVar1 = FMessageLog::FMessageLog(&FStack_38,&FStackX_8);
  pFVar1 = FMessageLog::SuppressLoggingToOutputLog(pFVar1,true);
  pFVar2 = FText::FromString(&FStack_58,param_1);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_68,L"Core",L"LinkerLoad_InvalidCustomVersion",
                      L"Package {0} was saved with an invalid custom version and cannot be loaded, see output log for details"
                     );
  pFVar4 = FTextFormat::FTextFormat(&FStack_48,pFVar3,Default);
  pFVar2 = FText::Format<FText>(&FStack_78,pFVar4,pFVar2);
  FMessageLog::Error(pFVar1,&TStack_88,pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_88.SharedReferenceCount.ReferenceController);
  if (FStack_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_78.TextData.Reference + 0x10))();
  }
  if (FStack_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_68.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&FStack_38);
  return;
}

// Call @ 1420ab420

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLinkerLoad::SerializePackageTrailer'::__l24::<lambda_1>,void>::Call
          (void *param_1)

{
  FMessageLog *pFVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FName FStackX_8;
  TSharedRef<FTokenizedMessage,1> TStack_88;
  FText FStack_78;
  FText FStack_68;
  FText FStack_58;
  FTextFormat FStack_48;
  FMessageLog FStack_38;
  
  ::FName::FName(&FStackX_8,"LoadErrors");
  pFVar1 = FMessageLog::FMessageLog(&FStack_38,&FStackX_8);
  pFVar1 = FMessageLog::SuppressLoggingToOutputLog(pFVar1,true);
  pFVar2 = FText::FromString(&FStack_58,param_1);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_68,L"Core",L"LinkerLoad_CorruptTrailer",
                      L"Package {0} has a corrupted package trailer");
  pFVar4 = FTextFormat::FTextFormat(&FStack_48,pFVar3,Default);
  pFVar2 = FText::Format<FText>(&FStack_78,pFVar4,pFVar2);
  FMessageLog::Error(pFVar1,&TStack_88,pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_88.SharedReferenceCount.ReferenceController);
  if (FStack_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_78.TextData.Reference + 0x10))();
  }
  if (FStack_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_68.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&FStack_38);
  return;
}

// Call @ 1420ab430

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLinkerLoad::CreateExport'::__l241::<lambda_1>,void,UClass_*>::Call
          (void *param_1,UClass **param_2)

{
  `FLinkerLoad::CreateExport'::__l241::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1420ab440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l8::<lambda_2>,void>::Call
          (void *param_1)

{
  int iVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  FMessageLog *this;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  undefined1 auStackY_178 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> TStack_138;
  FName FStack_128;
  FTextFormat FStack_120;
  FText FStack_110;
  TSharedRef<FTokenizedMessage,1> TStack_100;
  FText FStack_f0;
  FText FStack_e0;
  FTextFormat FStack_d0;
  FMessageLog FStack_c0;
  FFormatArgumentValue FStack_88;
  undefined4 uStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  undefined4 uStack_50;
  undefined4 uStack_48;
  longlong lStack_40;
  longlong *plStack_38;
  undefined4 uStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  ::FName::FName(&FStack_128,"LoadErrors");
  this = FMessageLog::FMessageLog(&FStack_c0,&FStack_128);
  iVar1 = *(int *)((longlong)param_1 + 0x10);
  pFVar5 = FText::FromString(&FStack_e0,param_1);
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_f0,L"Core",L"LinkerLoad_PkgVersionTooOld",
                      L"The package \'{0}\' was saved with an older version which is not backwards compatible with the current process. Min Required Version: {1}  Package Version: {2}"
                     );
  pFVar7 = FTextFormat::FTextFormat(&FStack_d0,pFVar6,Default);
  FStack_88.Type = Text;
  FText::FText((FText *)&FStack_88.TextValue,pFVar5);
  if (FStack_88.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uStack_60 = 0xd6;
  uStack_68 = 0;
  plStack_58 = (longlong *)0x0;
  uStack_50 = 0;
  uStack_48 = 0;
  plStack_38 = (longlong *)0x0;
  uStack_30 = 0;
  TStack_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_138.ArrayNum = 3;
  lStack_40 = (longlong)iVar1;
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,3,0,&TStack_138.AllocatorInstance,3,&TStack_138.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (TStack_138.AllocatorInstance.Data,&FStack_88,3);
  FStack_120.TextFormatData.Object = (pFVar7->TextFormatData).Object;
  FStack_120.TextFormatData.SharedReferenceCount.ReferenceController =
       (pFVar7->TextFormatData).SharedReferenceCount.ReferenceController;
  if (FStack_120.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_120.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(FStack_120.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FText::Format(&FStack_110,&FStack_120,&TStack_138);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)TStack_138.AllocatorInstance.Data,TStack_138.ArrayNum);
  if ((FFormatArgumentValue *)TStack_138.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(TStack_138.AllocatorInstance.Data);
  }
  if (plStack_38 != (longlong *)0x0) {
    (**(code **)(*plStack_38 + 0x10))();
  }
  if (plStack_58 != (longlong *)0x0) {
    (**(code **)(*plStack_58 + 0x10))();
  }
  if (FStack_88.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)FStack_88.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar7->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar2 = (pFVar5->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  FMessageLog::Warning(this,&TStack_100,&FStack_110);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_100.SharedReferenceCount.ReferenceController);
  if (FStack_110.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_110.TextData.Reference + 0x10))();
  }
  if (FStack_f0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_f0.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&FStack_c0);
  return;
}

// Call @ 1420ab450

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLinkerLoad::UpdateFromPackageFileSummary'::__l34::<lambda_2>,void>::Call
          (void *param_1)

{
  FMessageLog *pFVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FName FStackX_8;
  TSharedRef<FTokenizedMessage,1> TStack_88;
  FText FStack_78;
  FText FStack_68;
  FText FStack_58;
  FTextFormat FStack_48;
  FMessageLog FStack_38;
  
  ::FName::FName(&FStackX_8,"LoadErrors");
  pFVar1 = FMessageLog::FMessageLog(&FStack_38,&FStackX_8);
  pFVar1 = FMessageLog::SuppressLoggingToOutputLog(pFVar1,true);
  pFVar2 = FText::FromString(&FStack_58,param_1);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_68,L"Core",L"LinkerLoad_NewCustomVersion",
                      L"Package {0} was saved with a newer custom version than the current engine and cannot be loaded, see output log for details"
                     );
  pFVar4 = FTextFormat::FTextFormat(&FStack_48,pFVar3,Default);
  pFVar2 = FText::Format<FText>(&FStack_78,pFVar4,pFVar2);
  FMessageLog::Error(pFVar1,&TStack_88,pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_88.SharedReferenceCount.ReferenceController);
  if (FStack_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_78.TextData.Reference + 0x10))();
  }
  if (FStack_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_68.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&FStack_38);
  return;
}

// Call @ 1420ab460

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l27::<lambda_3>,void>::Call
          (void *param_1)

{
  bool bVar1;
  bool bVar2;
  FMessageLog *this;
  FString *pFVar3;
  FText *pFVar4;
  FEngineVersion *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName FStackX_8;
  TSharedRef<FTokenizedMessage,1> TStack_e8;
  FText FStack_d8;
  FText FStack_c8;
  FString FStack_b8;
  FString FStack_a8;
  FText FStack_98;
  FText FStack_88;
  FText FStack_78;
  FTextFormat FStack_68;
  FMessageLog FStack_58;
  
  ::FName::FName(&FStackX_8,"LoadErrors");
  this = FMessageLog::FMessageLog(&FStack_58,&FStackX_8);
  bVar1 = FEngineVersionBase::IsLicenseeVersion((FEngineVersionBase *)((longlong)param_1 + 0x10));
  pFVar3 = FEngineVersion::ToString((FEngineVersion *)((longlong)param_1 + 0x10),&FStack_a8,Branch);
  pFVar4 = FText::FromString(&FStack_98,pFVar3);
  pFVar5 = FEngineVersion::Current();
  bVar2 = FEngineVersionBase::IsLicenseeVersion((FEngineVersionBase *)pFVar5);
  pFVar5 = FEngineVersion::Current();
  pFVar3 = FEngineVersion::ToString(pFVar5,&FStack_b8,Branch);
  pFVar6 = FText::FromString(&FStack_88,pFVar3);
  pFVar7 = FText::FromString(&FStack_78,param_1);
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_c8,L"Core",L"LinkerLoad_EngineVersionIncompatible",
                      L"Package \'{0}\' has been saved with a newer engine version and can\'t be loaded. Current EngineVersion: {1} (Licensee={2}). Package EngineVersion: {3} (Licensee={4})"
                     );
  pFVar9 = FTextFormat::FTextFormat(&FStack_68,pFVar8,Default);
  pFVar4 = FText::Format<FText,FText,bool,FText,bool>
                     (&FStack_d8,pFVar9,pFVar7,pFVar6,bVar2,pFVar4,bVar1);
  FMessageLog::Warning(this,&TStack_e8,pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_e8.SharedReferenceCount.ReferenceController);
  if (FStack_d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_d8.TextData.Reference + 0x10))();
  }
  if (FStack_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_c8.TextData.Reference + 0x10))();
  }
  if (FStack_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.Data.AllocatorInstance.Data);
  }
  if (FStack_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.Data.AllocatorInstance.Data);
  }
  FMessageLog::~FMessageLog(&FStack_58);
  return;
}

// Call @ 1420ab470

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l43::<lambda_4>,void>::Call
          (void *param_1)

{
  int iVar1;
  int iVar2;
  FMessageLog *this;
  FText *pFVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  int iVar6;
  int iVar7;
  FName FStackX_8;
  TSharedRef<FTokenizedMessage,1> TStack_98;
  FText FStack_88;
  FText FStack_78;
  FText FStack_68;
  FTextFormat FStack_58;
  FMessageLog FStack_48;
  
  ::FName::FName(&FStackX_8,"LoadErrors");
  this = FMessageLog::FMessageLog(&FStack_48,&FStackX_8);
  iVar6 = *(int *)((longlong)param_1 + 0x20);
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  iVar2 = *(int *)((longlong)param_1 + 0x18);
  if (iVar6 < 1000) {
    iVar6 = *(int *)((longlong)param_1 + 0x1c);
  }
  iVar7 = *(int *)((longlong)param_1 + 0x14);
  if (iVar7 < 1000) {
    iVar7 = *(int *)((longlong)param_1 + 0x10);
  }
  pFVar3 = FText::FromString(&FStack_68,param_1);
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_78,L"Core",L"LinkerLoad_PkgVersionTooNew",
                      L"Package \'{0}\' contains a newer version than the current process supports. PackageVersion {1}, MaxExpected {2} : LicenseePackageVersion {3}, MaxExpected {4}."
                     );
  pFVar5 = FTextFormat::FTextFormat(&FStack_58,pFVar4,Default);
  pFVar3 = FText::Format<FText,int,int,int,int>(&FStack_88,pFVar5,pFVar3,iVar7,iVar6,iVar2,iVar1);
  FMessageLog::Warning(this,&TStack_98,pFVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_98.SharedReferenceCount.ReferenceController);
  if (FStack_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_88.TextData.Reference + 0x10))();
  }
  if (FStack_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_78.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&FStack_48);
  return;
}

// Call @ 1420ab480

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l46::<lambda_5>,void>::Call
          (void *param_1)

{
  FMessageLog *this;
  FText *pFVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FName FStackX_8;
  TSharedRef<FTokenizedMessage,1> TStack_88;
  FText FStack_78;
  FText FStack_68;
  FText FStack_58;
  FTextFormat FStack_48;
  FMessageLog FStack_38;
  
  ::FName::FName(&FStackX_8,"LoadErrors");
  this = FMessageLog::FMessageLog(&FStack_38,&FStackX_8);
  pFVar1 = FText::FromString(&FStack_58,param_1);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_68,L"Core",L"LinkerLoad_InvalidEditorOnlyData",
                      L"Unable to load package \'{0}\'. Package contains EditorOnly data which is not supported by the current build."
                     );
  pFVar3 = FTextFormat::FTextFormat(&FStack_48,pFVar2,Default);
  pFVar1 = FText::Format<FText>(&FStack_78,pFVar3,pFVar1);
  FMessageLog::Warning(this,&TStack_88,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_88.SharedReferenceCount.ReferenceController);
  if (FStack_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_78.TextData.Reference + 0x10))();
  }
  if (FStack_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_68.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&FStack_38);
  return;
}

// Call @ 1420ab490

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l52::<lambda_6>,void>::Call
          (void *param_1)

{
  FMessageLog *this;
  FText *pFVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FName FStackX_8;
  TSharedRef<FTokenizedMessage,1> TStack_88;
  FText FStack_78;
  FText FStack_68;
  FText FStack_58;
  FTextFormat FStack_48;
  FMessageLog FStack_38;
  
  ::FName::FName(&FStackX_8,"LoadErrors");
  this = FMessageLog::FMessageLog(&FStack_38,&FStackX_8);
  pFVar1 = FText::FromString(&FStack_58,param_1);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_68,L"Core",L"LinkerLoad_InvalidCookedData",
                      L"Unable to load package \'{0}\'. Package contains cooked data which is not supported by the current build. Enable \'Allow Cooked Content In The Editor\' in Project Settings under \'Engine - Cooker\' section to load it."
                     );
  pFVar3 = FTextFormat::FTextFormat(&FStack_48,pFVar2,Default);
  pFVar1 = FText::Format<FText>(&FStack_78,pFVar3,pFVar1);
  FMessageLog::Warning(this,&TStack_88,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_88.SharedReferenceCount.ReferenceController);
  if (FStack_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_78.TextData.Reference + 0x10))();
  }
  if (FStack_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_68.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&FStack_38);
  return;
}

// Call @ 1420ab4a0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l58::<lambda_7>,void>::Call
          (void *param_1)

{
  FMessageLog *this;
  FText *pFVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FName FStackX_8;
  TSharedRef<FTokenizedMessage,1> TStack_88;
  FText FStack_78;
  FText FStack_68;
  FText FStack_58;
  FTextFormat FStack_48;
  FMessageLog FStack_38;
  
  ::FName::FName(&FStackX_8,"LoadErrors");
  this = FMessageLog::FMessageLog(&FStack_38,&FStackX_8);
  pFVar1 = FText::FromString(&FStack_58,param_1);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_68,L"Core",L"LinkerLoad_PkgTagCorrupted",
                      L"Unable to load package \'{0}\'. The end of package tag is not valid. Check that the file is of the expected type and not corrupted."
                     );
  pFVar3 = FTextFormat::FTextFormat(&FStack_48,pFVar2,Default);
  pFVar1 = FText::Format<FText>(&FStack_78,pFVar3,pFVar1);
  FMessageLog::Error(this,&TStack_88,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_88.SharedReferenceCount.ReferenceController);
  if (FStack_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_78.TextData.Reference + 0x10))();
  }
  if (FStack_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_68.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&FStack_38);
  return;
}

// Call @ 1420f29f0

UObject * __cdecl
UE::Core::Private::Function::TFunctionRefCaller<UObject_*_(__cdecl*)(UObject_*),UObject_*,UObject_*>
::Call(void *param_1,UObject **param_2)

{
  UObject *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001420f29f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UObject *)(**(code **)param_1)(*param_2);
  return pUVar1;
}

// Call @ 1420f2a00

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_1>,unsigned_int,void_const_*>
::Call(void *param_1,void **param_2)

{
  uint uVar1;
  
  uVar1 = FProperty::GetValueTypeHash(*(FProperty **)param_1,*param_2);
  return uVar1;
}

// Call @ 1420f2a20

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::FindMapPairIndexFromHash'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_1>,unsigned_int,void_const_*>
::Call(void *param_1,void **param_2)

{
  uint uVar1;
  
  uVar1 = FProperty::GetValueTypeHash(*(FProperty **)param_1,*param_2);
  return uVar1;
}

// Call @ 1420f2a40

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_1>,unsigned_int,void_const_*>
::Call(void *param_1,void **param_2)

{
  uint uVar1;
  
  uVar1 = FProperty::GetValueTypeHash(*(FProperty **)param_1,*param_2);
  return uVar1;
}

// Call @ 1420f2a60

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::FindMapPairIndexFromHash'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_1>,unsigned_int,void_const_*>
::Call(void *param_1,void **param_2)

{
  uint uVar1;
  
  uVar1 = FProperty::GetValueTypeHash(*(FProperty **)param_1,*param_2);
  return uVar1;
}

// Call @ 1420f2a80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>::Add'::__l2::<lambda_1>,void,void_*>
::Call(void *param_1,void **param_2)

{
  void *pvVar1;
  void *local_res8;
  
  pvVar1 = *param_2;
  local_res8 = pvVar1;
  (**(code **)param_1)(*(undefined8 *)((longlong)param_1 + 8),&local_res8);
  local_res8 = (void *)((longlong)*(int *)((longlong)param_1 + 0x20) + (longlong)pvVar1);
  (**(code **)((longlong)param_1 + 0x10))(*(undefined8 *)((longlong)param_1 + 0x18),&local_res8);
  return;
}

// Call @ 1420f2ad0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TScriptMap<FDefaultSetAllocator,FScriptMap>::Add'::__l2::<lambda_1>,void,void_*>
::Call(void *param_1,void **param_2)

{
  void *pvVar1;
  void *local_res8;
  
  pvVar1 = *param_2;
  local_res8 = pvVar1;
  (**(code **)param_1)(*(undefined8 *)((longlong)param_1 + 8),&local_res8);
  local_res8 = (void *)((longlong)*(int *)((longlong)param_1 + 0x20) + (longlong)pvVar1);
  (**(code **)((longlong)param_1 + 0x10))(*(undefined8 *)((longlong)param_1 + 0x18),&local_res8);
  return;
}

// Call @ 1420f2b20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UObject::BuildSubobjectMapping'::__l2::<lambda_1>,void,UObject_*>::Call
          (void *param_1,UObject **param_2)

{
  `UObject::BuildSubobjectMapping'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1420f2b30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ForEachObjectWithOuter'::__l2::<lambda_1>,bool,UObject_*>::Call
          (void *param_1,UObject **param_2)

{
  UObject *local_res8 [4];
  
  local_res8[0] = *param_2;
  (**(code **)param_1)(*(undefined8 *)((longlong)param_1 + 8),local_res8);
  return true;
}

// Call @ 1420f2b60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UObject::GetDefaultSubobjects'::__l2::<lambda_1>,void,UObject_*>::Call
          (void *param_1,UObject **param_2)

{
  `UObject::GetDefaultSubobjects'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1420f2b70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>::FindPairIndex'::__l5::<lambda_1>,bool,void_const_*,void_const_*>
::Call(void *param_1,void **param_2,void **param_3)

{
  undefined1 uVar1;
  void *local_res8;
  void *local_res10 [3];
  
  local_res8 = *param_3;
  local_res10[0] = *param_2;
  uVar1 = (**(code **)param_1)(*(undefined8 *)((longlong)param_1 + 8),local_res10,&local_res8);
  return (bool)uVar1;
}

// Call @ 1420f2bb0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TScriptMap<FDefaultSetAllocator,FScriptMap>::FindPairIndex'::__l5::<lambda_1>,bool,void_const_*,void_const_*>
::Call(void *param_1,void **param_2,void **param_3)

{
  undefined1 uVar1;
  void *local_res8;
  void *local_res10 [3];
  
  local_res8 = *param_3;
  local_res10[0] = *param_2;
  uVar1 = (**(code **)param_1)(*(undefined8 *)((longlong)param_1 + 8),local_res10,&local_res8);
  return (bool)uVar1;
}

// Call @ 1420f2bf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UObject::GetArchetypeInstances'::__l8::<lambda_1>,void,UObject_*>::Call
          (void *param_1,UObject **param_2)

{
  `UObject::GetArchetypeInstances'::__l8::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1420f2c00

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
::Call(void *param_1,void **param_2,void **param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001420f2c0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)param_1 + 0xb8))(*(longlong **)param_1,*param_2,*param_3,0);
  return (bool)uVar1;
}

// Call @ 1420f2c20

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::FindMapPairIndexFromHash'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
::Call(void *param_1,void **param_2,void **param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001420f2c2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)param_1 + 0xb8))(*(longlong **)param_1,*param_2,*param_3,0);
  return (bool)uVar1;
}

// Call @ 1420f2c40

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
::Call(void *param_1,void **param_2,void **param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001420f2c4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)param_1 + 0xb8))(*(longlong **)param_1,*param_2,*param_3,0);
  return (bool)uVar1;
}

// Call @ 1420f2c60

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::FindMapPairIndexFromHash'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
::Call(void *param_1,void **param_2,void **param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001420f2c6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)param_1 + 0xb8))(*(longlong **)param_1,*param_2,*param_3,0);
  return (bool)uVar1;
}

// Call @ 1420f2c80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>::Add'::__l2::<lambda_2>,void,void_*>
::Call(void *param_1,void **param_2)

{
  void *pvVar1;
  void *local_res8;
  
  pvVar1 = *param_2;
  local_res8 = (void *)((longlong)*(int *)((longlong)param_1 + 0x20) + (longlong)pvVar1);
  (**(code **)((longlong)param_1 + 0x10))(*(undefined8 *)((longlong)param_1 + 0x18),&local_res8);
  local_res8 = pvVar1;
  (**(code **)param_1)(*(undefined8 *)((longlong)param_1 + 8),&local_res8);
  return;
}

// Call @ 1420f2cd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TScriptMap<FDefaultSetAllocator,FScriptMap>::Add'::__l2::<lambda_2>,void,void_*>
::Call(void *param_1,void **param_2)

{
  void *pvVar1;
  void *local_res8;
  
  pvVar1 = *param_2;
  local_res8 = (void *)((longlong)*(int *)((longlong)param_1 + 0x20) + (longlong)pvVar1);
  (**(code **)((longlong)param_1 + 0x10))(*(undefined8 *)((longlong)param_1 + 0x18),&local_res8);
  local_res8 = pvVar1;
  (**(code **)param_1)(*(undefined8 *)((longlong)param_1 + 8),&local_res8);
  return;
}

// Call @ 1420f2d20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UObject::GetArchetypeInstances'::__l10::<lambda_2>,void,UObject_*>::Call
          (void *param_1,UObject **param_2)

{
  `UObject::GetArchetypeInstances'::__l10::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 1420f2d30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_3>,void,void_*>
::Call(void *param_1,void **param_2)

{
  void *_Dst;
  longlong *plVar1;
  
  _Dst = *param_2;
  plVar1 = *(longlong **)param_1;
  if ((*(uint *)(plVar1 + 7) >> 9 & 1) == 0) {
    (**(code **)(*plVar1 + 0x150))(plVar1,_Dst);
  }
  else {
    memset(_Dst,0,(longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]));
  }
                    /* WARNING: Could not recover jumptable at 0x0001420f2d86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x100))
            (*(longlong **)param_1,_Dst,*(undefined8 *)((longlong)param_1 + 8));
  return;
}

// Call @ 1420f2da0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_3>,void,void_*>
::Call(void *param_1,void **param_2)

{
  void *_Dst;
  longlong *plVar1;
  
  _Dst = *param_2;
  plVar1 = *(longlong **)param_1;
  if ((*(uint *)(plVar1 + 7) >> 9 & 1) == 0) {
    (**(code **)(*plVar1 + 0x150))(plVar1,_Dst);
  }
  else {
    memset(_Dst,0,(longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]));
  }
                    /* WARNING: Could not recover jumptable at 0x0001420f2df6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x100))
            (*(longlong **)param_1,_Dst,*(undefined8 *)((longlong)param_1 + 8));
  return;
}

// Call @ 1420f2e10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_4>,void,void_*>
::Call(void *param_1,void **param_2)

{
  void *_Dst;
  longlong *plVar1;
  
  _Dst = *param_2;
  plVar1 = *(longlong **)param_1;
  if ((*(uint *)(plVar1 + 7) >> 9 & 1) == 0) {
    (**(code **)(*plVar1 + 0x150))(plVar1,_Dst);
  }
  else {
    memset(_Dst,0,(longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]));
  }
                    /* WARNING: Could not recover jumptable at 0x0001420f2e66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x100))
            (*(longlong **)param_1,_Dst,*(undefined8 *)((longlong)param_1 + 8));
  return;
}

// Call @ 1420f2e80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_4>,void,void_*>
::Call(void *param_1,void **param_2)

{
  void *_Dst;
  longlong *plVar1;
  
  _Dst = *param_2;
  plVar1 = *(longlong **)param_1;
  if ((*(uint *)(plVar1 + 7) >> 9 & 1) == 0) {
    (**(code **)(*plVar1 + 0x150))(plVar1,_Dst);
  }
  else {
    memset(_Dst,0,(longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]));
  }
                    /* WARNING: Could not recover jumptable at 0x0001420f2ed6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x100))
            (*(longlong **)param_1,_Dst,*(undefined8 *)((longlong)param_1 + 8));
  return;
}

// Call @ 1420f2ef0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_5>,void,void_*>
::Call(void *param_1,void **param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001420f2f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x100))
            (*(longlong **)param_1,*param_2,*(undefined8 *)((longlong)param_1 + 8));
  return;
}

// Call @ 1420f2f10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_5>,void,void_*>
::Call(void *param_1,void **param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001420f2f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x100))
            (*(longlong **)param_1,*param_2,*(undefined8 *)((longlong)param_1 + 8));
  return;
}

// Call @ 1420f2f30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_6>,void,void_*>
::Call(void *param_1,void **param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)param_1;
  if (((plVar1[7] & 0x1040000000U) == 0) && (((ulonglong)plVar1[7] >> 0x24 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001420f2f53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x138))(plVar1,*param_2);
    return;
  }
  return;
}

// Call @ 1420f2f70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_6>,void,void_*>
::Call(void *param_1,void **param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)param_1;
  if (((plVar1[7] & 0x1040000000U) == 0) && (((ulonglong)plVar1[7] >> 0x24 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001420f2f93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x138))(plVar1,*param_2);
    return;
  }
  return;
}

// Call @ 1420f2fb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_7>,void,void_*>
::Call(void *param_1,void **param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)param_1;
  if (((plVar1[7] & 0x1040000000U) == 0) && (((ulonglong)plVar1[7] >> 0x24 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001420f2fd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x138))(plVar1,*param_2);
    return;
  }
  return;
}

// Call @ 1420f2ff0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::AddPair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_7>,void,void_*>
::Call(void *param_1,void **param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)param_1;
  if (((plVar1[7] & 0x1040000000U) == 0) && (((ulonglong)plVar1[7] >> 0x24 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001420f3013. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x138))(plVar1,*param_2);
    return;
  }
  return;
}

// Call @ 142133010

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::FindOrAdd'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_1>,unsigned_int,void_const_*>
::Call(void *param_1,void **param_2)

{
  longlong *plVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  plVar1 = *(longlong **)param_1;
  pvVar2 = *param_2;
  if ((plVar1[7] & 0x8000000000000U) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyFlags & CPF_HasGetValueTypeHash",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                       ,0x92b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  if (pvVar2 == (void *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Src",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                       ,0x92c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142133094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*plVar1 + 0xf8))(plVar1,pvVar2);
  return uVar5;
}

// Call @ 1421330b0

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::RemovePair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_1>,unsigned_int,void_const_*>
::Call(void *param_1,void **param_2)

{
  longlong *plVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  plVar1 = *(longlong **)param_1;
  pvVar2 = *param_2;
  if ((plVar1[7] & 0x8000000000000U) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyFlags & CPF_HasGetValueTypeHash",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                       ,0x92b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  if (pvVar2 == (void *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Src",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                       ,0x92c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142133134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*plVar1 + 0xf8))(plVar1,pvVar2);
  return uVar5;
}

// Call @ 142133150

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::FindOrAdd'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_1>,unsigned_int,void_const_*>
::Call(void *param_1,void **param_2)

{
  longlong *plVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  plVar1 = *(longlong **)param_1;
  pvVar2 = *param_2;
  if ((plVar1[7] & 0x8000000000000U) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyFlags & CPF_HasGetValueTypeHash",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                       ,0x92b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  if (pvVar2 == (void *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Src",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                       ,0x92c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001421331d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*plVar1 + 0xf8))(plVar1,pvVar2);
  return uVar5;
}

// Call @ 1421331f0

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::RemovePair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_1>,unsigned_int,void_const_*>
::Call(void *param_1,void **param_2)

{
  longlong *plVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  plVar1 = *(longlong **)param_1;
  pvVar2 = *param_2;
  if ((plVar1[7] & 0x8000000000000U) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyFlags & CPF_HasGetValueTypeHash",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                       ,0x92b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  if (pvVar2 == (void *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Src",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                       ,0x92c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142133274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*plVar1 + 0xf8))(plVar1,pvVar2);
  return uVar5;
}

// Call @ 142133290

EPropertyVisitorControlFlow __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`PropertyVisitorHelpers::ResolveVisitedPathInfo_Generic<FProperty_const_>'::__l2::<lambda_1>,enum_EPropertyVisitorControlFlow,FPropertyVisitorContext_const_&>
::Call(void *param_1,FPropertyVisitorContext *param_2)

{
  void *pvVar1;
  longlong *plVar2;
  FPropertyVisitorInfo *pFVar3;
  
  if ((param_2->Path->Path).ArrayNum < *(int *)((longlong)param_1 + 0x10)) {
    return StepInto;
  }
  pvVar1 = (param_2->Data).PropertyData;
  pFVar3 = FPropertyVisitorPath::Top(param_2->Path);
  plVar2 = *(longlong **)((longlong)param_1 + 8);
  if ((((FProperty *)*plVar2 == pFVar3->Property) &&
      (*(EPropertyVisitorInfoType *)((longlong)plVar2 + 0x14) == pFVar3->PropertyInfo)) &&
     ((int)plVar2[2] == pFVar3->Index)) {
    **(undefined8 **)param_1 = pvVar1;
    return Stop;
  }
  return StepOver;
}

// Call @ 142133300

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::FPackageResourceIoBackend::Resolve'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,bool,IAsyncReadRequest_*>
::Call(void *param_1,bool *param_2,IAsyncReadRequest **param_3)

{
  ``UE::FPackageResourceIoBackend::Resolve'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
  operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 142133320

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`PackageReloadInternal::ClearPackageReplaced'::__l2::<lambda_1>,bool,UObject_*>::
Call(void *param_1,UObject **param_2)

{
  UObjectBase::AtomicallyClearFlags((UObjectBase *)*param_2,RF_NewerVersionExists);
  return true;
}

// Call @ 142133340

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPackage::FindAssetInPackage'::__l2::<lambda_1>,bool,UObject_*>::Call
          (void *param_1,UObject **param_2)

{
  bool bVar1;
  
  bVar1 = `UPackage::FindAssetInPackage'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 142133350

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>::FindOrAdd'::__l2::<lambda_1>,void,void_*>
::Call(void *param_1,void **param_2)

{
  longlong local_res8;
  void *local_res10 [3];
  
  local_res10[0] = *param_2;
  local_res8 = (longlong)*(int *)((longlong)param_1 + 0x10) + (longlong)local_res10[0];
  (**(code **)param_1)(*(undefined8 *)((longlong)param_1 + 8),local_res10,&local_res8);
  return;
}

// Call @ 142133390

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TScriptMap<FDefaultSetAllocator,FScriptMap>::FindOrAdd'::__l2::<lambda_1>,void,void_*>
::Call(void *param_1,void **param_2)

{
  longlong local_res8;
  void *local_res10 [3];
  
  local_res10[0] = *param_2;
  local_res8 = (longlong)*(int *)((longlong)param_1 + 0x10) + (longlong)local_res10[0];
  (**(code **)param_1)(*(undefined8 *)((longlong)param_1 + 8),local_res10,&local_res8);
  return;
}

// Call @ 1421333d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`PropertyAccessUtil::GetPropertyValue_DirectComplete'::__l2::<lambda_1>,bool>::
Call(void *param_1)

{
  bool bVar1;
  
  bVar1 = ::PropertyAccessUtil::CopyCompletePropertyValue
                    (*(FProperty **)param_1,*(void **)((longlong)param_1 + 8),
                     *(FProperty **)((longlong)param_1 + 0x10),*(void **)((longlong)param_1 + 0x18))
  ;
  return bVar1;
}

// Call @ 1421333f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`PropertyAccessUtil::GetPropertyValue_DirectSingle'::__l2::<lambda_1>,bool>::Call
          (void *param_1)

{
  bool bVar1;
  
  bVar1 = ::PropertyAccessUtil::CopySinglePropertyValue
                    (*(FProperty **)param_1,*(void **)((longlong)param_1 + 8),
                     *(FProperty **)((longlong)param_1 + 0x10),*(void **)((longlong)param_1 + 0x18))
  ;
  return bVar1;
}

// Call @ 142133410

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`IPackageResourceManager::IteratePackagesInLocalOnlyDirectory'::__l2::<lambda_1>,bool,FPackagePath_const_&,enum_EPackageSegment>
::Call(void *param_1,FPackagePath *param_2,EPackageSegment *param_3)

{
  undefined1 uVar1;
  
  if (*param_3 != Header) {
    return true;
  }
                    /* WARNING: Could not recover jumptable at 0x000142133423. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)**(undefined8 **)param_1)((*(undefined8 **)param_1)[1]);
  return (bool)uVar1;
}

// Call @ 142133430

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`IPackageResourceManager::IteratePackagesInPath'::__l2::<lambda_1>,bool,FPackagePath_const_&,enum_EPackageSegment>
::Call(void *param_1,FPackagePath *param_2,EPackageSegment *param_3)

{
  undefined1 uVar1;
  
  if (*param_3 != Header) {
    return true;
  }
                    /* WARNING: Could not recover jumptable at 0x000142133443. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)**(undefined8 **)param_1)((*(undefined8 **)param_1)[1]);
  return (bool)uVar1;
}

// Call @ 142133450

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`IPackageResourceManager::IteratePackagesStatInLocalOnlyDirectory'::__l2::<lambda_1>,bool,FPackagePath_const_&,enum_EPackageSegment,FFileStatData_const_&>
::Call(void *param_1,FPackagePath *param_2,EPackageSegment *param_3,FFileStatData *param_4)

{
  undefined1 uVar1;
  
  if (*param_3 != Header) {
    return true;
  }
                    /* WARNING: Could not recover jumptable at 0x000142133466. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)**(undefined8 **)param_1)((*(undefined8 **)param_1)[1],param_2,param_4);
  return (bool)uVar1;
}

// Call @ 142133470

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`IPackageResourceManager::IteratePackagesStatInPath'::__l2::<lambda_1>,bool,FPackagePath_const_&,enum_EPackageSegment,FFileStatData_const_&>
::Call(void *param_1,FPackagePath *param_2,EPackageSegment *param_3,FFileStatData *param_4)

{
  undefined1 uVar1;
  
  if (*param_3 != Header) {
    return true;
  }
                    /* WARNING: Could not recover jumptable at 0x000142133486. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)**(undefined8 **)param_1)((*(undefined8 **)param_1)[1],param_2,param_4);
  return (bool)uVar1;
}

// Call @ 142133490

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`PackageReloadInternal::MakePackagePurgeable'::__l2::<lambda_1>,bool,UObject_*>::
Call(void *param_1,UObject **param_2)

{
  UObjectBase *this;
  FUObjectItem *pFVar1;
  
  this = (UObjectBase *)*param_2;
  pFVar1 = FUObjectArray::IndexToObject(&GUObjectArray,this->InternalIndex);
  if (((uint)((ulonglong)(pFVar1->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) {
    pFVar1 = FUObjectArray::IndexToObject(&GUObjectArray,this->InternalIndex);
    FUObjectItem::ClearRootFlags(pFVar1,RootSet);
  }
  UObjectBase::AtomicallyClearFlags(this,RF_Standalone|RF_Public);
  return true;
}

// Call @ 1421334f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`PackageReloadInternal::MarkPackageReplaced'::__l2::<lambda_1>,bool,UObject_*>::
Call(void *param_1,UObject **param_2)

{
  UObjectBase::AtomicallySetFlags((UObjectBase *)*param_2,RF_NewerVersionExists);
  return true;
}

// Call @ 142133510

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`ReloadPackages'::__l2::<lambda_1>,void,UObject_*>::
Call(void *param_1,UObject **param_2)

{
  UPackage *pUVar1;
  FName local_res10;
  longlong local_res18 [2];
  
  pUVar1 = CastChecked<UPackage,UObject>(*param_2);
  if (pUVar1->bDirty != 0) {
    local_res18[0] = pUVar1->_padding_;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (*(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> **)param_1,&local_res10,
               (bool *)local_res18);
  }
  return;
}

// Call @ 142133560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

IAsyncReadRequest * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::FPackageResourceIoBackend::Resolve'::__l2::<lambda_1>,IAsyncReadRequest_*,IAsyncReadFileHandle_&>
::Call(void *param_1,IAsyncReadFileHandle *param_2)

{
  int iVar1;
  FIoRequestImpl *pFVar2;
  IAsyncReadRequest *pIVar3;
  undefined ***pppuVar4;
  char cVar5;
  undefined1 auStack_78 [32];
  code **ppcStack_58;
  void *pvStack_50;
  code *apcStack_48 [2];
  undefined **ppuStack_38;
  IIoDispatcherBackend *pIStack_30;
  FIoRequestImpl *pFStack_28;
  undefined ***pppuStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pFVar2 = *(FIoRequestImpl **)((longlong)param_1 + 8);
  ppuStack_38 = &TFunction_OwnedObject<``UE::FPackageResourceIoBackend::Resolve'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
  cVar5 = '\0';
  pppuStack_20 = (undefined ***)0x0;
  apcStack_48[0] =
       TFunctionRefCaller<``UE::FPackageResourceIoBackend::Resolve'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,bool,IAsyncReadRequest_*>
       ::Call;
  pIStack_30 = *(IIoDispatcherBackend **)param_1;
  iVar1 = pFVar2->Priority;
  if (-0x40000001 < iVar1) {
    if (iVar1 < -1) {
      cVar5 = '\x01';
    }
    else if (iVar1 < 0) {
      cVar5 = '\x02';
    }
    else if (iVar1 < 0x3fffffff) {
      cVar5 = '\x03';
    }
    else {
      cVar5 = (0x7ffffffe < iVar1) + '\x04';
    }
  }
  pFStack_28 = pFVar2;
  FIoStoreTrace::RequestStarted(pFVar2,pIStack_30);
  pvStack_50 = (pFVar2->Options).TargetVa;
  ppcStack_58 = apcStack_48;
  pIVar3 = (IAsyncReadRequest *)
           (**(code **)((longlong)*param_2 + 0x10))
                     (param_2,(pFVar2->Options).RequestedOffset,(pFVar2->Options).RequestedSize,
                      cVar5);
  if (apcStack_48[0] != (code *)0x0) {
    pppuVar4 = &ppuStack_38;
    if (pppuStack_20 != (undefined ***)0x0) {
      pppuVar4 = pppuStack_20;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return pIVar3;
}

// Call @ 142133570

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`PropertyAccessUtil::SetPropertyValue_DirectComplete'::__l2::<lambda_1>,bool,FPropertyAccessChangeNotify_const_*>
::Call(void *param_1,FPropertyAccessChangeNotify **param_2)

{
  bool bVar1;
  
  bVar1 = `PropertyAccessUtil::SetPropertyValue_DirectComplete'::__l2::<lambda_1>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 142133580

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`PropertyAccessUtil::SetPropertyValue_DirectSingle'::__l2::<lambda_1>,bool,FPropertyAccessChangeNotify_const_*>
::Call(void *param_1,FPropertyAccessChangeNotify **param_2)

{
  bool bVar1;
  
  bVar1 = `PropertyAccessUtil::SetPropertyValue_DirectSingle'::__l2::<lambda_1>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 142133590

TUniquePtr<FPropertyAccessChangeNotify,TDefaultDelete<FPropertyAccessChangeNotify>_> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`PropertyAccessUtil::SetPropertyValue_Object'::__l2::<lambda_1>,TUniquePtr<FPropertyAccessChangeNotify,TDefaultDelete<FPropertyAccessChangeNotify>_>_>
::Call(void *param_1)

{
  void *in_RDX;
  
  `PropertyAccessUtil::SetPropertyValue_Object'::__l2::<lambda_1>::operator()(in_RDX);
  return (TUniquePtr<FPropertyAccessChangeNotify,TDefaultDelete<FPropertyAccessChangeNotify>_>)
         param_1;
}

// Call @ 1421335c0

EPropertyVisitorControlFlow __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FProperty::Visit'::__l2::<lambda_1>,enum_EPropertyVisitorControlFlow,FPropertyVisitorContext_const_&>
::Call(void *param_1,FPropertyVisitorContext *param_2)

{
  EPropertyVisitorControlFlow EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001421335d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (*(code *)**(undefined8 **)param_1)
                    ((*(undefined8 **)param_1)[1],param_2->Path,&param_2->Data);
  return EVar1;
}

// Call @ 1421335e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPackage::GetExternalPackages'::__l6::<lambda_1>,void,UObject_*>::Call
          (void *param_1,UObject **param_2)

{
  `UPackage::GetExternalPackages'::__l6::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1421335f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::FindOrAdd'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
::Call(void *param_1,void **param_2,void **param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001421335ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)param_1 + 0xb8))(*(longlong **)param_1,*param_2,*param_3,0);
  return (bool)uVar1;
}

// Call @ 142133610

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::RemovePair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
::Call(void *param_1,void **param_2,void **param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014213361f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)param_1 + 0xb8))(*(longlong **)param_1,*param_2,*param_3,0);
  return (bool)uVar1;
}

// Call @ 142133630

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::FindOrAdd'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
::Call(void *param_1,void **param_2,void **param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014213363f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)param_1 + 0xb8))(*(longlong **)param_1,*param_2,*param_3,0);
  return (bool)uVar1;
}

// Call @ 142133650

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::RemovePair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
::Call(void *param_1,void **param_2,void **param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014213365f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)param_1 + 0xb8))(*(longlong **)param_1,*param_2,*param_3,0);
  return (bool)uVar1;
}

// Call @ 142133670

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`ReloadPackages'::__l33::<lambda_2>,void,UObject_*>
::Call(void *param_1,UObject **param_2)

{
  `ReloadPackages'::__l33::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 142133680

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::FindOrAdd'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_3>,void,void_*,void_*>
::Call(void *param_1,void **param_2,void **param_3)

{
  ``FScriptMapHelper::FindOrAdd'::__l2::<lambda_1>::
  operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'
  ::__l2::<lambda_3>::operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 1421336a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::FindOrAdd'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_3>,void,void_*,void_*>
::Call(void *param_1,void **param_2,void **param_3)

{
  ``FScriptMapHelper::FindOrAdd'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_3>::
  operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 1421336c0

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`ReloadPackages'::__l2::<lambda_3>,void,UObject_*>::
Call(void *param_1,UObject **param_2)

{
  `ReloadPackages'::__l2::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 142168f30

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::Rehash'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_1>,unsigned_int,void_const_*>
::Call(void *param_1,void **param_2)

{
  uint uVar1;
  
  uVar1 = FProperty::GetValueTypeHash((FProperty *)**(undefined8 **)param_1,*param_2);
  return uVar1;
}

// Call @ 142168f50

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FScriptMapHelper::Rehash'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_1>,unsigned_int,void_const_*>
::Call(void *param_1,void **param_2)

{
  uint uVar1;
  
  uVar1 = FProperty::GetValueTypeHash((FProperty *)**(undefined8 **)param_1,*param_2);
  return uVar1;
}

// Call @ 142168f70

FString * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FStructProperty::ImportText_Internal'::__l2::<lambda_1>,FString>::Call
          (FString *__return_storage_ptr__,void *param_1)

{
  void *pvVar1;
  bool bVar2;
  
  pvVar1 = *(void **)param_1;
  bVar2 = IsThisNotNull(pvVar1,"FField::GetName");
  if (bVar2) {
    ::FName::ToString((FName *)((longlong)pvVar1 + 0x20),__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"None");
  return __return_storage_ptr__;
}

// Call @ 142168fd0

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScriptSetHelper::Rehash'::__l2::<lambda_1>,unsigned_int,void_const_*>::Call
          (void *param_1,void **param_2)

{
  uint uVar1;
  
  uVar1 = FProperty::GetValueTypeHash((FProperty *)**(undefined8 **)param_1,*param_2);
  return uVar1;
}

// Call @ 142168ff0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ParsePathName'::__l5::<lambda_1>,void,TStringView<wchar_t>_>::Call
          (void *param_1,TStringView<wchar_t> *param_2)

{
  FPropertyTypeNameBuilder *this;
  FName *pFVar1;
  FName local_res8 [4];
  
  this = *(FPropertyTypeNameBuilder **)param_1;
  pFVar1 = ::FName::FName(local_res8,(int)*(undefined8 *)&param_2->Size,param_2->DataPtr,FNAME_Add);
  FPropertyTypeNameBuilder::AddName(this,*pFVar1);
  return;
}

// Call @ 142169030

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::BuildPropertyName'::__l11::<lambda_1>,void,TStringView<wchar_t>_>::Call
          (void *param_1,TStringView<wchar_t> *param_2)

{
  FPropertyTypeNameBuilder *this;
  FName *pFVar1;
  FName local_res8 [4];
  
  this = *(FPropertyTypeNameBuilder **)param_1;
  pFVar1 = ::FName::FName(local_res8,(int)*(undefined8 *)&param_2->Size,param_2->DataPtr,FNAME_Add);
  FPropertyTypeNameBuilder::AddName(this,*pFVar1);
  return;
}

// Call @ 1421c1590

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Private::GetAllReferencersExcludingWeak'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UE::Private::GetAllReferencersExcludingWeak'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1421c15a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Private::GetAllReferencersIncludingWeak'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UE::Private::GetAllReferencersIncludingWeak'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1421c15b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`GetPathToStaleObjectReferencer'::__l2::<lambda_1>,bool,FReferenceChainSearch::FCallbackParams_&>
::Call(void *param_1,FCallbackParams *param_2)

{
  FOutputDevice *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UObject *pUVar5;
  FName FStackX_10;
  FString FStack_18;
  
  if ((param_2->Object == (FGCObjectInfo *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Params.Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ReferenceChainSearch.cpp"
                         ,0x761,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((((param_2->Object->InternalFlags & Garbage) != Borrowed) ||
      (pUVar5 = FGCObjectInfo::TryResolveObject(param_2->Object),
      pUVar5 == *(UObject **)((longlong)param_1 + 8))) && (**(char **)param_1 == '\0')) {
    **(char **)param_1 = '\x01';
    if ((param_2->Out == (FOutputDevice *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Params.Out",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ReferenceChainSearch.cpp"
                           ,0x766,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar1 = param_2->Out;
    if (((param_2->Indent < 0) || (0xff < param_2->Indent)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                           ,0x272,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FOutputDevice::LogfImpl
              (pFVar1,Log,L"%s    ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
    pFVar1 = param_2->Out;
    FStackX_10 = *(FName *)(*(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0x10) + 0x18);
    ::FName::ToString(&FStackX_10,&FStack_18);
    if (((param_2->Indent < 0) || (0xff < param_2->Indent)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                           ,0x272,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FOutputDevice::LogfImpl
              (pFVar1,Log,L"%s    ^ This reference is preventing the old %s from being GC\'d ^");
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// Call @ 1421c15c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FReferenceChainSearch::GetRootPath'::__l2::<lambda_1>,bool,FReferenceChainSearch::FCallbackParams_&>
::Call(void *param_1,FCallbackParams *param_2)

{
  return true;
}

// Call @ 1421c15d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FReferenceChainSearch::PrintResults'::__l2::<lambda_1>,bool,FReferenceChainSearch::FCallbackParams_&>
::Call(void *param_1,FCallbackParams *param_2)

{
  return true;
}

// Call @ 1421c15e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`PrintStaleReferenceChainsAndFindReferencingObjects'::__l2::<lambda_1>,bool,FReferenceChainSearch::FCallbackParams_&>
::Call(void *param_1,FCallbackParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  FGCObjectInfo *pFVar5;
  
  if ((param_2->Object == (FGCObjectInfo *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Params.Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ReferenceChainSearch.cpp"
                         ,0x744,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pFVar5 = param_2->Object;
  if ((pFVar5->InternalFlags & Garbage) == Borrowed) {
    pUVar4 = FGCObjectInfo::TryResolveObject(pFVar5);
    if (pUVar4 == (UObject *)**(longlong **)param_1) {
      return true;
    }
    pFVar5 = param_2->Object;
  }
  else {
    if (**(longlong **)((longlong)param_1 + 8) != 0) {
      return true;
    }
    **(longlong **)((longlong)param_1 + 8) = (longlong)pFVar5;
    pFVar5 = param_2->Referencer;
  }
  **(undefined8 **)((longlong)param_1 + 0x10) = pFVar5;
  return true;
}

// Call @ 1421c15f0

EPropertyVisitorControlFlow __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`PropertyVisitorHelpers::VisitProperty'::__l2::<lambda_1>,enum_EPropertyVisitorControlFlow,FPropertyVisitorContext_const_&>
::Call(void *param_1,FPropertyVisitorContext *param_2)

{
  EPropertyVisitorControlFlow EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001421c1601. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (*(code *)**(undefined8 **)param_1)
                    ((*(undefined8 **)param_1)[1],param_2->Path,&param_2->Data);
  return EVar1;
}

// Call @ 1421c1610

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::CollectAllReferences'::__l8::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>
  ::CollectAllReferences'::__l8::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1421c1620

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::CollectAllReferences'::__l8::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>
  ::CollectAllReferences'::__l8::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1421c1630

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPackage::SaveConcurrent'::__l18::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  plVar2 = *(longlong **)param_1;
  uVar1 = *param_2;
  uVar5 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::`anonymous_namespace'::InnerSave((FSaveContext *)((longlong)(int)uVar1 * 0x760 + *plVar2));
  return;
}

// Call @ 1421c16b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``anonymous_namespace'::HarvestPackage'::__l7::<lambda_2>,bool,UObject_*>::Call
          (void *param_1,UObject **param_2)

{
  if ((*(uint *)&(*param_2)->field_0x8 & *(uint *)((longlong)param_1 + 8)) != 0) {
    ``anonymous_namespace'::HarvestPackage'::__l2::<lambda_1>::operator()
              (*(void **)param_1,*param_2);
  }
  return true;
}

// Call @ 1421c16e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``anonymous_namespace'::WriteBulkData'::__l2::<lambda_3>,void,FBulkDataCookedIndex,TFileRegionArchive<FLargeMemoryWriter>_&>
::Call(void *param_1,FBulkDataCookedIndex *param_2,TFileRegionArchive<FLargeMemoryWriter> *param_3)

{
  ``anonymous_namespace'::WriteBulkData'::__l2::<lambda_3>::operator()
            (param_1,(FBulkDataCookedIndex)param_2->Value,param_3);
  return;
}

// Call @ 1421c16f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``anonymous_namespace'::WriteBulkData'::__l69::<lambda_4>,void,FBulkDataCookedIndex,TFileRegionArchive<FLargeMemoryWriter>_&>
::Call(void *param_1,FBulkDataCookedIndex *param_2,TFileRegionArchive<FLargeMemoryWriter> *param_3)

{
  ``anonymous_namespace'::WriteBulkData'::__l69::<lambda_4>::operator()
            (param_1,(FBulkDataCookedIndex)param_2->Value,param_3);
  return;
}

// Call @ 1421c1700

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``anonymous_namespace'::WriteBulkData'::__l2::<lambda_5>,void,FBulkDataCookedIndex,TFileRegionArchive<FLargeMemoryWriter>_&>
::Call(void *param_1,FBulkDataCookedIndex *param_2,TFileRegionArchive<FLargeMemoryWriter> *param_3)

{
  ``anonymous_namespace'::WriteBulkData'::__l2::<lambda_5>::operator()
            (param_1,(FBulkDataCookedIndex)param_2->Value,param_3);
  return;
}

// Call @ 142204930

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::SavePackageUtilities::TryHashFile<FBlake3>'::__l2::<lambda_1>,void,TMemoryView<void_const_>_>
::Call(void *param_1,TMemoryView<void_const_> *param_2)

{
  TMemoryView<void_const_> local_18;
  
  local_18.Data = param_2->Data;
  local_18.Size = param_2->Size;
  FBlake3::Update(*(FBlake3 **)param_1,&local_18);
  return;
}

// Call @ 142204960

FTlsAutoCleanup * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TThreadSingleton<FBlueprintContextTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
::Call(void *param_1)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x80);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    pFVar2[7] = (FTlsAutoCleanup)0x0;
    pFVar2[8] = (FTlsAutoCleanup)0x0;
    pFVar2[9] = (FTlsAutoCleanup)0x0;
    pFVar2[10] = (FTlsAutoCleanup)0x0;
    pFVar2[0xb] = (FTlsAutoCleanup)0x0;
    pFVar2[0xc] = (FTlsAutoCleanup)0x0;
    pFVar2[0xd] = (FTlsAutoCleanup)0x0;
    pFVar2[0xe] = (FTlsAutoCleanup)0x0;
    pFVar2[0xf] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_UFBlueprintContextTracker____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FBlueprintContextTracker__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    *(undefined2 *)(pFVar2 + 3) = 0;
    *(undefined4 *)&pFVar2[3].field_0x4 = 0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    pFVar2[7] = (FTlsAutoCleanup)0x0;
    pFVar2[10] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0xb) = 0;
    *(undefined4 *)&pFVar2[0xb].field_0x4 = 0x80;
    *(undefined4 *)&pFVar2[0xc].field_0x4 = 0;
    *(undefined4 *)(pFVar2 + 0xc) = 0xffffffff;
    pFVar2[0xe] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0xf) = 0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// Call @ 142204970

FTlsAutoCleanup * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TThreadSingleton<FDeferredScriptTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
::Call(void *param_1)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x60);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_UFDeferredScriptTracker____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FDeferredScriptTracker__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 7) = 0;
    *(undefined4 *)&pFVar2[7].field_0x4 = 0x80;
    *(undefined4 *)&pFVar2[8].field_0x4 = 0;
    *(undefined4 *)(pFVar2 + 8) = 0xffffffff;
    pFVar2[10] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0xb) = 0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// Call @ 142204980

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPackage::IsEmptyPackage'::__l5::<lambda_1>,bool,UObject_*>::Call
          (void *param_1,UObject **param_2)

{
  UObject *pUVar1;
  char cVar2;
  
  pUVar1 = *param_2;
  cVar2 = (**(code **)(*(longlong *)pUVar1 + 0x1c0))(pUVar1);
  if ((cVar2 != '\0') && (pUVar1 != *(UObject **)param_1)) {
    **(undefined1 **)((longlong)param_1 + 8) = 0;
    return false;
  }
  return true;
}

// Call @ 1422049d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`OutputLongestFunctions'::__l6::<lambda_1>,bool,UFunction_*_const_&,UFunction_*_const_&>
::Call(void *param_1,UFunction **param_2,UFunction **param_3)

{
  if ((*param_3 != (UFunction *)0x0) && (*(int *)param_1 <= (int)(*param_3)->_padding_)) {
    return false;
  }
  return true;
}

// Call @ 1422049f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`OutputMostFrequentlyCalledFunctions'::__l11::<lambda_1>,bool,TTuple<UFunction_*,int>_const_&,TTuple<UFunction_*,int>_const_&>
::Call(void *param_1,TTuple<UFunction_*,int> *param_2,TTuple<UFunction_*,int> *param_3)

{
  if ((*(longlong *)param_3 != 0) && (*(int *)&param_2->field_0x8 <= *(int *)&param_3->field_0x8)) {
    return false;
  }
  return true;
}

// Call @ 142204a10

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`OutputMostFrequentlyUsedInstructions'::__l11::<lambda_1>,bool,TTuple<enum_EExprToken,int>_const_&,TTuple<enum_EExprToken,int>_const_&>
::Call(void *param_1,TTuple<EExprToken,int> *param_2,TTuple<EExprToken,int> *param_3)

{
  return *(int *)&param_3->field_0x4 < *(int *)&param_2->field_0x4;
}

// Call @ 142204a30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`OutputMostFrequentlyCalledFunctions'::__l28::<lambda_2>,bool,TTuple<FName,int>_const_&,TTuple<FName,int>_const_&>
::Call(void *param_1,TTuple<FName,int> *param_2,TTuple<FName,int> *param_3)

{
  if ((*(longlong *)param_3 != 0) && (*(int *)&param_2->field_0x8 <= *(int *)&param_3->field_0x8)) {
    return false;
  }
  return true;
}

// Call @ 142261780

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`SuggestClusters'::__l4::<lambda_1>,void,UObject_*>
::Call(void *param_1,UObject **param_2)

{
  `SuggestClusters'::__l4::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 142261790

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CheckLiveObjectsInModules'::__l6::<lambda_1>,bool,UObject_*>::Call
          (void *param_1,UObject **param_2)

{
  bool bVar1;
  
  bVar1 = `CheckLiveObjectsInModules'::__l6::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 1422617a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`RemoveObjectsInModules'::__l6::<lambda_1>,bool,UObject_*>::Call
          (void *param_1,UObject **param_2)

{
  bool bVar1;
  
  bVar1 = `RemoveObjectsInModules'::__l6::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 1422617b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``RemoveObjectsInModules'::__l6::<lambda_1>::operator()'::__l8::<lambda_1>,void,UObject_*>
::Call(void *param_1,UObject **param_2)

{
  UObjectBase *this;
  
  this = (UObjectBase *)*param_2;
  UObjectBaseUtility::ClearInternalFlags((UObjectBaseUtility *)this,RootSet|Native);
  UObjectBase::AtomicallyClearFlags(this,RF_Standalone);
  UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this);
  return;
}

// Call @ 1422617f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MakeUniqueObjectName'::__l39::<lambda_1>,void,int_&>::Call
          (void *param_1,int *param_2)

{
  *param_2 = *param_2 + 1;
  return;
}

// Call @ 142261800

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``CheckLiveObjectsInModules'::__l6::<lambda_1>::operator()'::__l14::<lambda_1>,void,UObject_*>
::Call(void *param_1,UObject **param_2)

{
  ``CheckLiveObjectsInModules'::__l6::<lambda_1>::operator()'::__l14::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 142298240

FTlsAutoCleanup * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TThreadSingleton<FThreadMarkAnnotation>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
::Call(void *param_1)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x78);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_VFThreadMarkAnnotation____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FThreadMarkAnnotation__6B_;
    pFVar2[2] = (FTlsAutoCleanup)&___7__FUObjectAnnotationSparseNoSync_UFObjectMark____6B_;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[7] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 8) = 0;
    *(undefined4 *)&pFVar2[8].field_0x4 = 0x80;
    *(undefined4 *)&pFVar2[9].field_0x4 = 0;
    *(undefined4 *)(pFVar2 + 9) = 0xffffffff;
    pFVar2[0xb] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0xc) = 0;
    pFVar2[0xd] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0xe) = 0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// Call @ 142298250

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`GetObjectsOfClass'::__l2::<lambda_1>,void,UObject_*>::Call
          (void *param_1,UObject **param_2)

{
  `GetObjectsOfClass'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 142298260

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`GetObjectsWithPackage'::__l2::<lambda_1>,bool,UObject_*>::Call
          (void *param_1,UObject **param_2)

{
  bool bVar1;
  
  bVar1 = `GetObjectsWithPackage'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 142298270

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`verse::FContentScopeGuard::ScheduleTerminateContentScope'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142298276. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x18))();
  return;
}

// Call @ 142298280

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FUObjectHashTables::ShrinkMaps'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FUObjectHashTables::ShrinkMaps'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1422bb3f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UVerseClass::RenameDefaultSubobjects'::__l2::<lambda_1>,void,UObject_*,FString_const_&>
::Call(void *param_1,UObject **param_2,FString *param_3)

{
  `UVerseClass::RenameDefaultSubobjects'::__l2::<lambda_1>::operator()(param_1,*param_2,param_3);
  return;
}

// Call @ 1422bb400

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UVerseClass::ValidateSubobjectArchetypes'::__l12::<lambda_1>,void,UObject_*,FString_const_&>
::Call(void *param_1,UObject **param_2,FString *param_3)

{
  `UVerseClass::ValidateSubobjectArchetypes'::__l12::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 1422d25b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::FPropertyTypeNameConcurrencyTest::TestBody'::__l2::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `UE::FPropertyTypeNameConcurrencyTest::TestBody'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 142311340

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`FAsyncPackage2::ImportPackagesRecursiveInner'::__l93::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `FAsyncPackage2::ImportPackagesRecursiveInner'::__l93::<lambda_1>::operator()(param_1);
  return false;
}

// Call @ 142311360

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<`FAsyncPackage2::ImportPackagesRecursiveInner'::__l127::<lambda_2>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  `FAsyncPackage2::ImportPackagesRecursiveInner'::__l127::<lambda_2>::operator()(param_1);
  return false;
}

// Call @ 142311380

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FAsyncPackage2::StartLoading'::__l23::<lambda_2>::operator()'::__l2::<lambda_1>,void,TIoStatusOr<FIoBuffer>_>
::Call(void *param_1,TIoStatusOr<FIoBuffer> *param_2)

{
  TIoStatusOr<FIoBuffer> local_28;
  
  FIoStatus::FIoStatus(&local_28.StatusValue);
  FIoStatus::operator=(&local_28.StatusValue,&param_2->StatusValue);
  if (local_28.StatusValue.ErrorCode == Ok) {
    local_28.Value.Pad = *&(param_2->Value).Pad;
    *(undefined8 *)(param_2->Value).Pad = 0;
    FIoStatus::operator=(&param_2->StatusValue,Unknown);
  }
  ``FAsyncPackage2::StartLoading'::__l23::<lambda_2>::operator()'::__l2::<lambda_1>::operator()
            (param_1,&local_28);
  return;
}

// Call @ 1423113f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FAsyncPackage2::DumpStateImpl'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,void,FEventLoadNode2_*>
::Call(void *param_1,FEventLoadNode2 **param_2)

{
  ``FAsyncPackage2::DumpStateImpl'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 142311400

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGlobalImportStore::AddScriptObject'::__l2::<lambda_1>,void,UObject_*>::Call
          (void *param_1,UObject **param_2)

{
  `FGlobalImportStore::AddScriptObject'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 142311410

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAsyncPackage2::ConditionalBeginPostLoadPhase'::__l2::<lambda_1>,void,FAsyncPackage2_*>
::Call(void *param_1,FAsyncPackage2 **param_2)

{
  `FAsyncPackage2::ConditionalBeginPostLoadPhase'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 142311420

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAsyncPackage2::ConditionalBeginProcessPackageExports'::__l2::<lambda_1>,void,FAsyncPackage2_*>
::Call(void *param_1,FAsyncPackage2 **param_2)

{
  `FAsyncPackage2::ConditionalBeginProcessPackageExports'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 142311430

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAsyncPackage2::ConditionalBeginResolveLinkerLoadImports'::__l2::<lambda_1>,void,FAsyncPackage2_*>
::Call(void *param_1,FAsyncPackage2 **param_2)

{
  `FAsyncPackage2::ConditionalBeginResolveLinkerLoadImports'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 142311440

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAsyncPackage2::ConditionalFinishLoading'::__l2::<lambda_1>,void,FAsyncPackage2_*>
::Call(void *param_1,FAsyncPackage2 **param_2)

{
  `FAsyncPackage2::ConditionalFinishLoading'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 142311450

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FindAllRuntimeScriptPackages'::__l2::<lambda_1>,void,UObject_*>::Call
          (void *param_1,UObject **param_2)

{
  `FindAllRuntimeScriptPackages'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 142311460

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAsyncPackage2::StartLoading'::__l2::<lambda_1>,void,TIoStatusOr<FIoBuffer>_>::
Call(void *param_1,TIoStatusOr<FIoBuffer> *param_2)

{
  TIoStatusOr<FIoBuffer> local_28;
  
  FIoStatus::FIoStatus(&local_28.StatusValue);
  FIoStatus::operator=(&local_28.StatusValue,&param_2->StatusValue);
  if (local_28.StatusValue.ErrorCode == Ok) {
    local_28.Value.Pad = *&(param_2->Value).Pad;
    *(undefined8 *)(param_2->Value).Pad = 0;
    FIoStatus::operator=(&param_2->StatusValue,Unknown);
  }
  `FAsyncPackage2::StartLoading'::__l2::<lambda_1>::operator()(param_1,&local_28);
  return;
}

// Call @ 1423114d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCookedScriptObjectsDebug::TrimDebugData'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FCookedScriptObjectsDebug::TrimDebugData'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1423114e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`VerifyObjectLoadFlagsWhenFinishedLoading'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `VerifyObjectLoadFlagsWhenFinishedLoading'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1423114f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FAsyncPackage2::DumpStateImpl'::__l23::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::__l8::<lambda_1>,void,FEventLoadNode2_*>
::Call(void *param_1,FEventLoadNode2 **param_2)

{
  FEventLoadNode2 *local_res8;
  FEventLoadNode2 *local_res10 [3];
  
  local_res10[0] = *param_2;
  local_res8 = *(FEventLoadNode2 **)((longlong)param_1 + 8);
  TMultiMap<FEventLoadNode2_*,FEventLoadNode2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>_>
  ::EmplaceUnique<FEventLoadNode2_*_const_&,FEventLoadNode2_*>
            (*(TMultiMap<FEventLoadNode2_*,FEventLoadNode2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>_>
               **)param_1,local_res10,&local_res8);
  return;
}

// Call @ 142311530

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAsyncLoadingThread2::CollectUnreachableObjects'::__l10::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `FAsyncLoadingThread2::CollectUnreachableObjects'::__l10::<lambda_1>::operator()(param_1,*param_2)
  ;
  return;
}

// Call @ 142311540

FIoRequest __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAsyncPackage2::StartLoading'::__l23::<lambda_2>,FIoRequest,FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>_>
::Call(void *param_1,FIoChunkId *param_2,TRefCountPtr<FBaseGraphTask> *param_3)

{
  undefined8 *in_R9;
  
  *in_R9 = 0;
  `FAsyncPackage2::StartLoading'::__l23::<lambda_2>::operator()
            (param_2,param_1,(TRefCountPtr<FBaseGraphTask>)param_3);
  return (FIoRequest)param_1;
}

// Call @ 142311580

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAsyncLoadingThread2::CollectUnreachableObjects'::__l13::<lambda_2>,void,int>::
Call(void *param_1,int *param_2)

{
  `FAsyncLoadingThread2::CollectUnreachableObjects'::__l13::<lambda_2>::operator()(param_1,*param_2)
  ;
  return;
}

// Call @ 142311590

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FAsyncPackage2::DumpStateImpl'::__l23::<lambda_5>::operator()<TTuple<FPackageId,FAsyncPackage2_*>_>'::__l14::<lambda_2>,void,FEventLoadNode2_*>
::Call(void *param_1,FEventLoadNode2 **param_2)

{
  FEventLoadNode2 *local_res8;
  FEventLoadNode2 *local_res10 [3];
  
  local_res10[0] = *param_2;
  local_res8 = *(FEventLoadNode2 **)((longlong)param_1 + 8);
  TMultiMap<FEventLoadNode2_*,FEventLoadNode2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>_>
  ::EmplaceUnique<FEventLoadNode2_*_const_&,FEventLoadNode2_*>
            (*(TMultiMap<FEventLoadNode2_*,FEventLoadNode2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FEventLoadNode2_*,FEventLoadNode2_*,1>_>
               **)param_1,local_res10,&local_res8);
  return;
}

