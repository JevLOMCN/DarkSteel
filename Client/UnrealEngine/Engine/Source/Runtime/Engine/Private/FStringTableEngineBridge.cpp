// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// ~FStringTableEngineBridge @ 147d7b8a0

void __thiscall FStringTableEngineBridge::~FStringTableEngineBridge(FStringTableEngineBridge *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->KeepAliveStringTablesCS);
  pFVar1 = (this->KeepAliveStringTables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AsyncLoadingStringTablesCS);
  *(undefined4 *)&(this->AsyncLoadingStringTables).field_0x48 = 0;
  pvVar2 = *(void **)&(this->AsyncLoadingStringTables).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FStringTableEngineBridge::FAsyncLoadingStringTable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FStringTableEngineBridge::FAsyncLoadingStringTable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FStringTableEngineBridge::FAsyncLoadingStringTable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AsyncLoadingStringTables);
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
  return;
}

// operator() @ 147d7f970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`FStringTableEngineBridge::UnregisterForGCUnderPath'::__l2::<lambda_1>::operator()
          (void *this,TObjectPtr<UStringTable> *param_1)

{
  int iVar1;
  UPackage *pUVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_898 [32];
  FName local_878;
  FString local_870;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_898;
  if (((param_1->field0_0x0).DebugPtr == (UStringTable *)0x0) ||
     ((((param_1->field0_0x0).DebugPtr)->_padding_ & 0x40004000) != 0)) {
    return true;
  }
  pUVar2 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)(param_1->field0_0x0).DebugPtr);
  local_878 = (FName)pUVar2->_padding_;
  local_858.Base = local_838;
  local_858.CurPos = local_838;
  local_858.End = local_22;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  ::FName::AppendString(&local_878,&local_858);
  iVar1 = (int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1);
  iVar4 = (int)(*(undefined8 **)this)[1];
  if (iVar4 < iVar1) {
    iVar1 = iVar4;
  }
  iVar5 = 0;
  if (0 < iVar1) {
    iVar5 = iVar1;
  }
  if (iVar4 == iVar5) {
    if ((iVar4 != 0) && (iVar5 != 0)) {
      iVar1 = iVar5;
      if (iVar4 < iVar5) {
        iVar1 = iVar4;
      }
      iVar1 = FGenericPlatformStricmp::Strnicmp
                        ((wchar_t *)**(undefined8 **)this,local_858.Base,(longlong)iVar1);
      if (iVar1 != 0) goto LAB_147d7faae;
    }
    if (iVar4 == iVar5) {
      if (4 < (byte)LogStringTable._0_1_) {
        local_878 = (FName)((param_1->field0_0x0).DebugPtr)->_padding_;
        ::FName::ToString(&local_878,&local_870);
        UE::Logging::Private::BasicLog<5>
                  (&`public:___cdecl_`public:_void___cdecl_FStringTableEngineBridge::UnregisterForGCUnderPath(TStringView<wchar_t>)___ptr64'::`2'::<lambda_1>::operator()(TObjectPtr<UStringTable>_const&___ptr64)const___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogStringTable);
        if (local_870.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_870.Data.AllocatorInstance.Data);
        }
      }
      bVar3 = true;
      goto LAB_147d7fab0;
    }
  }
LAB_147d7faae:
  bVar3 = false;
LAB_147d7fab0:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return bVar3;
}

// AddReferencedObjects @ 147d84260

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FStringTableEngineBridge::AddReferencedObjects
          (FStringTableEngineBridge *this,FReferenceCollector *param_1)

{
  int *lpCriticalSection;
  <lambda_1> local_res8 [8];
  
  lpCriticalSection = &(this->KeepAliveStringTables).ArrayNum;
  if (lpCriticalSection != (int *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TArray<TObjectPtr<UStringTable>,TSizedDefaultAllocator<32>_>::
    RemoveAllSwap<_FStringTableEngineBridge::AddReferencedObjects_::__l2::<lambda_1>_>
              ((TArray<TObjectPtr<UStringTable>,TSizedDefaultAllocator<32>_> *)
               ((this->AsyncLoadingStringTablesCS).CriticalSection.Opaque3 + 2),local_res8,Default);
    (**(code **)(param_1->_padding_ + 0x90))
              (param_1,(this->AsyncLoadingStringTablesCS).CriticalSection.Opaque3[2],
               *(undefined4 *)&(this->KeepAliveStringTables).AllocatorInstance.Data,0,0);
                    /* WARNING: Could not recover jumptable at 0x000147d842d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// CanFindOrLoadStringTableAssetImpl @ 147d8c5e0

bool __thiscall
FStringTableEngineBridge::CanFindOrLoadStringTableAssetImpl(FStringTableEngineBridge *this)

{
  bool bVar1;
  
  bVar1 = IsInGameThread();
  if (((bVar1) && (GIsGarbageCollecting == false)) && (GIsSavingPackage == false)) {
    return true;
  }
  return false;
}

// CollectStringTableAssetReferencesImpl @ 147d8ec50

void __thiscall
FStringTableEngineBridge::CollectStringTableAssetReferencesImpl
          (FStringTableEngineBridge *this,FName *param_1,FStructuredArchiveSlot param_2)

{
  code *pcVar1;
  FSlotBase FVar2;
  bool bVar3;
  FArchive *pFVar4;
  FStringTableRegistry *this_00;
  FString *pFVar5;
  wchar_t *pwVar6;
  UStringTable *local_res10;
  FSlotBase local_res18;
  FName local_res20;
  FString local_48;
  FSoftObjectPath local_38;
  
  local_res18.StructuredArchive = (FStructuredArchive *)param_2;
  pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res18);
  pwVar6 = L"";
  if ((pFVar4->field_0x2b & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.GetUnderlyingArchive().IsObjectReferenceCollector()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Internationalization\\StringTable.cpp"
                       ,0x11f,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = FStringTableRegistry::Get();
  local_res10 = FStringTableRegistry::FindStringTableAsset(this_00,*param_1);
  GetAssetReference(&local_38,*param_1);
  FVar2.StructuredArchive = local_res18.StructuredArchive;
  if (local_38.AssetPath.PackageName == (FName)0x0) {
    pFVar4 = (local_res18.StructuredArchive)->Formatter->Inner;
    (**(code **)(*(longlong *)pFVar4 + 0x168))(pFVar4,&local_res10);
  }
  else {
    (**(code **)(*(longlong *)(local_res18.StructuredArchive)->Formatter->Inner + 0x168))();
    pFVar4 = (FVar2.StructuredArchive)->Formatter->Inner;
    (**(code **)(*(longlong *)pFVar4 + 0x140))(pFVar4,&local_38);
    pFVar5 = FSoftObjectPath::ToString(&local_38,&local_48);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_res20,pwVar6);
    *param_1 = local_res20;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// CollectStringTableAssetSearchableNameImpl @ 147d8ed90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStringTableEngineBridge::CollectStringTableAssetSearchableNameImpl
          (FStringTableEngineBridge *this,FName param_1,FTextKey param_2,FArchive *param_3)

{
  code *pcVar1;
  FStringTableRegistry *this_00;
  FName *pFVar2;
  FTextKey local_res18 [4];
  undefined1 auStack_898 [32];
  FName local_878;
  UStringTable *local_870;
  FName local_868 [2];
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_898;
  if ((((param_3->field_0x28 & 4) != 0) && (param_1 != (FName)0x0)) && (param_2.Index != -1)) {
    local_res18[0].Index = param_2.Index;
    this_00 = FStringTableRegistry::Get();
    local_870 = FStringTableRegistry::FindStringTableAsset(this_00,param_1);
    if (local_870 != (UStringTable *)0x0) {
      local_858.Base = local_838;
      local_858.CurPos = local_838;
      local_858.bIsDynamic = false;
      local_858.bIsExternal = false;
      local_858.End = local_22;
      FTextKey::ToString(local_res18,&local_858);
      pcVar1 = *(code **)(*(longlong *)param_3 + 0x228);
      pFVar2 = ::FName::FName(local_868,
                              (int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1),
                              local_858.Base,FNAME_Add);
      local_878 = *pFVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_870);
      }
      (*pcVar1)(param_3,&local_870,&local_878);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
    }
  }
  return;
}

// FullyLoadStringTableAssetImpl @ 147d9f970

void __thiscall
FStringTableEngineBridge::FullyLoadStringTableAssetImpl
          (FStringTableEngineBridge *this,FName *param_1)

{
  int iVar1;
  undefined4 uVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  FSoftObjectPath local_28;
  
  GetAssetReference(&local_28,*param_1);
  if (local_28.AssetPath.PackageName == (FName)0x0) goto LAB_147d9fa23;
  pUVar3 = FSoftObjectPath::ResolveObject(&local_28);
  if (pUVar3 == (UObject *)0x0) {
LAB_147d9f9d9:
    pUVar3 = FSoftObjectPath::TryLoad(&local_28,(FUObjectSerializeContext *)0x0);
    if (pUVar3 == (UObject *)0x0) {
LAB_147d9fa10:
      pUVar3 = (UObject *)0x0;
    }
    else {
      pUVar4 = UStringTable::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) goto LAB_147d9fa10;
    }
    if (pUVar3 == (UObject *)0x0) goto LAB_147d9fa23;
  }
  else {
    pUVar4 = UStringTable::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if (((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
         &pUVar4->_padding_)) || ((*(uint *)&pUVar3->field_0x8 & 0x1400) != 0)) goto LAB_147d9f9d9;
  }
  uVar2 = *(undefined4 *)&pUVar3[1].field_0x14;
  param_1->ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar3[1].field_0x10;
  param_1->Number = uVar2;
LAB_147d9fa23:
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// Get @ 147da39a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FStringTableEngineBridge * __cdecl FStringTableEngineBridge::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FStringTableEngineBridge&___ptr64___cdecl_FStringTableEngineBridge::Get(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FStringTableEngineBridge&___ptr64___cdecl_FStringTableEngineBridge::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FStringTableEngineBridge&___ptr64___cdecl_FStringTableEngineBridge::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FStringTableEngineBridge&___ptr64___cdecl_FStringTableEngineBridge::Get(void)'
      ::__l2::Instance._padding_ = (longlong)&___7IStringTableEngineBridge__6B_;
      `public:_static_class_FStringTableEngineBridge&___ptr64___cdecl_FStringTableEngineBridge::Get(void)'
      ::__l2::Instance._padding_._0_2_ = 0;
      `public:_static_class_FStringTableEngineBridge&___ptr64___cdecl_FStringTableEngineBridge::Get(void)'
      ::__l2::Instance._padding_ = (longlong)&___7FGCObject__6B_;
      FGCObject::RegisterGCObject
                ((FGCObject *)
                 &`public:_static_class_FStringTableEngineBridge&___ptr64___cdecl_FStringTableEngineBridge::Get(void)'
                  ::__l2::Instance._padding_);
      `public:_static_class_FStringTableEngineBridge&___ptr64___cdecl_FStringTableEngineBridge::Get(void)'
      ::__l2::Instance._padding_ = (longlong)&_vftable__for__IStringTableEngineBridge__;
      `public:_static_class_FStringTableEngineBridge&___ptr64___cdecl_FStringTableEngineBridge::Get(void)'
      ::__l2::Instance.AsyncLoadingStringTables._0_8_ = 0;
      `public:_static_class_FStringTableEngineBridge&___ptr64___cdecl_FStringTableEngineBridge::Get(void)'
      ::__l2::Instance._padding_ = (longlong)&_vftable__for__FGCObject__;
      `public:_static_class_FStringTableEngineBridge&___ptr64___cdecl_FStringTableEngineBridge::Get(void)'
      ::__l2::Instance.AsyncLoadingStringTables._8_8_ = 0;
      `public:_static_class_FStringTableEngineBridge&___ptr64___cdecl_FStringTableEngineBridge::Get(void)'
      ::__l2::Instance.AsyncLoadingStringTables._32_8_ = 0;
      `public:_static_class_FStringTableEngineBridge&___ptr64___cdecl_FStringTableEngineBridge::Get(void)'
      ::__l2::Instance.AsyncLoadingStringTables._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      `public:_static_class_FStringTableEngineBridge&___ptr64___cdecl_FStringTableEngineBridge::Get(void)'
      ::__l2::Instance.AsyncLoadingStringTables._48_8_ = _UNK_150631d98;
      `public:_static_class_FStringTableEngineBridge&___ptr64___cdecl_FStringTableEngineBridge::Get(void)'
      ::__l2::Instance.AsyncLoadingStringTables._64_8_ = 0;
      `public:_static_class_FStringTableEngineBridge&___ptr64___cdecl_FStringTableEngineBridge::Get(void)'
      ::__l2::Instance.AsyncLoadingStringTables._72_4_ = 0;
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)
                 &`public:_static_class_FStringTableEngineBridge&___ptr64___cdecl_FStringTableEngineBridge::Get(void)'
                  ::__l2::Instance.AsyncLoadingStringTablesCS,4000);
      `public:_static_class_FStringTableEngineBridge&___ptr64___cdecl_FStringTableEngineBridge::Get(void)'
      ::__l2::Instance.KeepAliveStringTables.AllocatorInstance.Data = (FScriptContainerElement *)0x0
      ;
      `public:_static_class_FStringTableEngineBridge&___ptr64___cdecl_FStringTableEngineBridge::Get(void)'
      ::__l2::Instance.KeepAliveStringTables.ArrayNum = 0;
      `public:_static_class_FStringTableEngineBridge&___ptr64___cdecl_FStringTableEngineBridge::Get(void)'
      ::__l2::Instance.KeepAliveStringTables.ArrayMax = 0;
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)
                 &`public:_static_class_FStringTableEngineBridge&___ptr64___cdecl_FStringTableEngineBridge::Get(void)'
                  ::__l2::Instance.KeepAliveStringTablesCS,4000);
      atexit(`FStringTableEngineBridge::Get'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&`public:_static_class_FStringTableEngineBridge&___ptr64___cdecl_FStringTableEngineBridge::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FStringTableEngineBridge&___ptr64___cdecl_FStringTableEngineBridge::Get(void)'
              ::__l2::Instance;
    }
  }
  return &`public:_static_class_FStringTableEngineBridge&___ptr64___cdecl_FStringTableEngineBridge::Get(void)'
          ::__l2::Instance;
}

// GetAssetReference @ 147da3ed0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FSoftObjectPath * __cdecl
FStringTableEngineBridge::GetAssetReference(FSoftObjectPath *__return_storage_ptr__,FName param_1)

{
  bool bVar1;
  int iVar2;
  ForAnyElementType FVar3;
  int iVar4;
  int iVar5;
  FName local_res10;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  
  local_res10 = param_1;
  ::FName::ToString(&local_res10,&local_38);
  iVar2 = local_38.Data.ArrayNum;
  FVar3.Data = local_38.Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = local_38.Data.ArrayNum;
  if (local_38.Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
               &local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,FVar3.Data,(longlong)iVar2 * 2);
  }
  FVar3.Data = local_48.Data.AllocatorInstance.Data;
  do {
    if (FVar3.Data == local_48.Data.AllocatorInstance.Data + (longlong)local_48.Data.ArrayNum * 2) {
LAB_147da3fbd:
      (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
      (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
      (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
      (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
      local_28.Size = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        local_28.Size = 0;
      }
      (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
      (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
      local_28.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
      bVar1 = FPackageName::IsValidLongPackageName(&local_28,true,(EErrorCode *)0x0);
      if ((bVar1) && (bVar1 = FPackageName::DoesPackageExist(&local_48,(FString *)0x0,true), bVar1))
      {
        local_28.Size = local_38.Data.ArrayNum + -1;
        if (local_38.Data.ArrayNum == 0) {
          local_28.Size = 0;
        }
        local_28.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
        FSoftObjectPath::SetPath(__return_storage_ptr__,&local_28);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    if (*(short *)FVar3.Data == 0x2e) {
      iVar2 = (int)((longlong)FVar3.Data - (longlong)local_48.Data.AllocatorInstance.Data >> 1);
      if (iVar2 != -1) {
        iVar5 = local_48.Data.ArrayNum + -1;
        if (local_48.Data.ArrayNum == 0) {
          iVar5 = 0;
        }
        iVar4 = iVar5;
        if (iVar2 < iVar5) {
          iVar4 = iVar2;
        }
        iVar2 = 0;
        if (0 < iVar4) {
          iVar2 = iVar4;
        }
        ::FString::RemoveAt(&local_48,iVar2,iVar5 - iVar2,No);
      }
      goto LAB_147da3fbd;
    }
    FVar3.Data = FVar3.Data + 2;
  } while( true );
}

// GetReferencerName @ 147da8910

FString * __thiscall
FStringTableEngineBridge::GetReferencerName
          (FStringTableEngineBridge *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FStringTableEngineBridge");
  return __return_storage_ptr__;
}

// HandleStringTableAssetAsyncLoadCompleted @ 147daad50

/* WARNING: Removing unreachable block (ram,0x000147daaeb5) */

void __thiscall
FStringTableEngineBridge::HandleStringTableAssetAsyncLoadCompleted
          (FStringTableEngineBridge *this,FName *param_1,UPackage *param_2,Type param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ForAnyElementType FVar7;
  FName FVar8;
  TFunction<void___cdecl(FName,FName)> *pTVar9;
  FAsyncLoadingStringTable local_a0;
  FString local_80;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FString local_50;
  FString local_40;
  
  local_a0.AsyncLoadingId = -1;
  lpCriticalSection = &this->AsyncLoadingStringTablesCS;
  local_a0.RequestedTableId.ComparisonIndex.Value = 0;
  local_a0.RequestedTableId.Number = 0;
  local_a0.LoadedCallbacks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.LoadedCallbacks.ArrayNum = 0;
  local_a0.LoadedCallbacks.ArrayMax = 0;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TMap<FName,FStringTableEngineBridge::FAsyncLoadingStringTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStringTableEngineBridge::FAsyncLoadingStringTable,0>_>
  ::RemoveAndCopyValue(&this->AsyncLoadingStringTables,*param_1,&local_a0);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_3 == Succeeded) {
    if ((param_2 == (UPackage *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InLoadedPackage",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Internationalization\\StringTable.cpp"
                           ,0x96,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_70 = (FName)param_2->_padding_;
    ::FName::ToString(&local_70,&local_80);
    FPackageName::GetLongPackageAssetName(&local_40,&local_80);
    ::FString::PrintfImpl(&local_50,L"%s.%s");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_50.Data.ArrayNum != 0) {
      FVar7.Data = local_50.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_68,(wchar_t *)FVar7.Data);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    FVar8 = local_68;
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  else {
    FVar8.ComparisonIndex.Value = 0;
    FVar8.Number = 0;
  }
  iVar3 = local_a0.LoadedCallbacks.ArrayNum;
  pTVar9 = (TFunction<void___cdecl(FName,FName)> *)
           (local_a0.LoadedCallbacks.AllocatorInstance.Data +
           (longlong)local_a0.LoadedCallbacks.ArrayNum * 0x30);
  FVar7.Data = local_a0.LoadedCallbacks.AllocatorInstance.Data;
  while( true ) {
    FVar2.Data = local_a0.LoadedCallbacks.AllocatorInstance.Data;
    if ((TFunction<void___cdecl(FName,FName)> *)FVar7.Data == pTVar9) {
      DestructItems<TFunction<void___cdecl(FName,FName)>,int>
                ((TFunction<void___cdecl(FName,FName)> *)
                 local_a0.LoadedCallbacks.AllocatorInstance.Data,iVar3);
      if ((TFunction<void___cdecl(FName,FName)> *)FVar2.Data !=
          (TFunction<void___cdecl(FName,FName)> *)0x0) {
        FMemory::Free(FVar2.Data);
      }
      return;
    }
    if ((*(longlong *)FVar7.Data == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("LoadedCallback",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Internationalization\\StringTable.cpp"
                           ,0x9e,L""), bVar4)) break;
    local_58 = local_a0.RequestedTableId;
    local_60 = FVar8;
    UE::Core::Private::Function::CheckCallable(*(void **)FVar7.Data);
    pcVar1 = *(code **)FVar7.Data;
    plVar6 = (longlong *)&((TFunction<void___cdecl(FName,FName)> *)FVar7.Data)->field_0x10;
    if (*(longlong **)&((TFunction<void___cdecl(FName,FName)> *)FVar7.Data)->field_0x28 !=
        (longlong *)0x0) {
      plVar6 = *(longlong **)&((TFunction<void___cdecl(FName,FName)> *)FVar7.Data)->field_0x28;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar1)(uVar5,&local_58,&local_60);
    FVar7.Data = FVar7.Data + 0x30;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// IsStringTableAssetBeingReplacedImpl @ 147dae290

bool __thiscall
FStringTableEngineBridge::IsStringTableAssetBeingReplacedImpl
          (FStringTableEngineBridge *this,UStringTable *param_1)

{
  if ((param_1 != (UStringTable *)0x0) && (((uint)param_1->_padding_ >> 0xe & 1) != 0)) {
    return true;
  }
  return false;
}

// IsStringTableFromAssetImpl @ 147dae2b0

bool __thiscall
FStringTableEngineBridge::IsStringTableFromAssetImpl(FStringTableEngineBridge *this,FName param_1)

{
  FSoftObjectPath local_28;
  
  GetAssetReference(&local_28,param_1);
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return local_28.AssetPath.PackageName != (FName)0x0;
}

// LoadStringTableAssetImpl @ 147db33e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FStringTableEngineBridge::LoadStringTableAssetImpl
          (FStringTableEngineBridge *this,FName param_1,
          TFunction<void___cdecl(FName,FName)> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  longlong lVar2;
  TFunction<void___cdecl(FName,FName)> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  FString *pFVar10;
  FAsyncLoadingStringTable *pFVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  undefined8 uVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  longlong *plVar18;
  FName FVar19;
  undefined1 auStackY_178 [32];
  TKeyInitializer<FName_const_&> local_128;
  FString local_120;
  FName local_110;
  undefined8 local_108;
  undefined8 local_100;
  FSoftObjectPath local_f8;
  FString local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FName local_b0;
  FName *local_a8;
  FName local_a0;
  FName local_98 [2];
  code *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  FString local_78;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_128.Key._0_4_ = 0;
  GetAssetReference(&local_f8,param_1);
  if (local_f8.AssetPath.PackageName == (FName)0x0) {
    if (*(void **)param_2 != (void *)0x0) {
      local_a0 = param_1;
      local_98[0] = param_1;
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar5 = *(code **)param_2;
      plVar18 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar18 = *(longlong **)&param_2->field_0x28;
      }
      uVar15 = (**(code **)(*plVar18 + 8))();
      (*pcVar5)(uVar15,local_98,&local_a0);
    }
    if (local_f8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.SubPathString.Data.AllocatorInstance.Data);
    }
    if (*(longlong *)param_2 == 0) {
      return -1;
    }
    plVar18 = *(longlong **)&param_2->field_0x28;
    if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
      plVar18 = (longlong *)&param_2->field_0x10;
    }
    (**(code **)(*plVar18 + 0x10))();
    return -1;
  }
  pUVar8 = FSoftObjectPath::ResolveObject(&local_f8);
  if (pUVar8 == (UObject *)0x0) {
LAB_147db3474:
    bVar6 = (*IsAsyncLoading)();
    if (bVar6) {
      local_b0 = local_f8.AssetPath.PackageName;
      bVar6 = local_f8.AssetPath.PackageName != (FName)0x0;
      if (bVar6) {
        pFVar10 = ::FName::ToString(&local_b0,&local_78);
      }
      else {
        local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.Data.ArrayNum = 0;
        local_d8.Data.ArrayMax = 0;
        pFVar10 = &local_d8;
      }
      local_120.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_120.Data.ArrayNum = (pFVar10->Data).ArrayNum;
      local_120.Data.ArrayMax = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
      if ((bVar6) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if ((!bVar6) && (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_120.Data.ArrayNum != 0) {
        FVar16.Data = local_120.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_110,(wchar_t *)FVar16.Data);
      lpCriticalSection = &this->AsyncLoadingStringTablesCS;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar11 = TMapBase<FName,FStringTableEngineBridge::FAsyncLoadingStringTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStringTableEngineBridge::FAsyncLoadingStringTable,0>_>
                ::Find((TMapBase<FName,FStringTableEngineBridge::FAsyncLoadingStringTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStringTableEngineBridge::FAsyncLoadingStringTable,0>_>
                        *)&this->AsyncLoadingStringTables,local_110);
      if (pFVar11 != (FAsyncLoadingStringTable *)0x0) {
        if (*(longlong *)param_2 != 0) {
          pTVar3 = (TFunction<void___cdecl(FName,FName)> *)
                   (pFVar11->LoadedCallbacks).AllocatorInstance.Data;
          if (((pTVar3 <= param_2) && (param_2 < pTVar3 + (pFVar11->LoadedCallbacks).ArrayMax)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            iVar7 = (*pcVar5)();
            return iVar7;
          }
          iVar7 = (pFVar11->LoadedCallbacks).ArrayNum;
          piVar1 = &(pFVar11->LoadedCallbacks).ArrayMax;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x1030,&(pFVar11->LoadedCallbacks).AllocatorInstance,piVar1);
          }
          (pFVar11->LoadedCallbacks).ArrayNum = iVar7 + 1;
          lVar4 = *(longlong *)param_2;
          pFVar17 = (pFVar11->LoadedCallbacks).AllocatorInstance.Data + (longlong)iVar7 * 0x30;
          *(longlong *)pFVar17 = lVar4;
          *(longlong *)(pFVar17 + 0x28) = 0;
          if (lVar4 != 0) {
            puVar13 = (undefined8 *)&param_2->field_0x10;
            if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
              puVar13 = *(undefined8 **)&param_2->field_0x28;
            }
            (**(code **)*puVar13)(puVar13,pFVar17 + 0x10);
          }
        }
        iVar7 = pFVar11->AsyncLoadingId;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
        if (local_f8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.SubPathString.Data.AllocatorInstance.Data);
        }
        if (*(longlong *)param_2 != 0) {
          plVar18 = (longlong *)&param_2->field_0x10;
          if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
            plVar18 = *(longlong **)&param_2->field_0x28;
          }
          (**(code **)(*plVar18 + 0x10))();
          return iVar7;
        }
        return iVar7;
      }
      local_a8 = &local_110;
      TSet<TTuple<FName,FStringTableEngineBridge::FAsyncLoadingStringTable>,TDefaultMapHashableKeyFuncs<FName,FStringTableEngineBridge::FAsyncLoadingStringTable,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FName_const_&>_>
                ((TSet<TTuple<FName,FStringTableEngineBridge::FAsyncLoadingStringTable>,TDefaultMapHashableKeyFuncs<FName,FStringTableEngineBridge::FAsyncLoadingStringTable,0>,FDefaultSetAllocator>
                  *)&this->AsyncLoadingStringTables,&local_128,(bool *)&local_a8);
      lVar12 = (longlong)(int)local_128.Key;
      lVar4 = *(longlong *)&this->AsyncLoadingStringTables;
      *(FName *)(lVar4 + 0xc + lVar12 * 0x30) = param_1;
      if (*(longlong *)param_2 != 0) {
        lVar2 = lVar4 + lVar12 * 0x30;
        pTVar3 = *(TFunction<void___cdecl(FName,FName)> **)(lVar4 + 0x18 + lVar12 * 0x30);
        if (((pTVar3 <= param_2) && (param_2 < pTVar3 + *(int *)(lVar2 + 0x24))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar7 = (*pcVar5)();
          return iVar7;
        }
        iVar7 = *(int *)(lVar2 + 0x20);
        if (iVar7 == *(int *)(lVar2 + 0x24)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1030,(ForAnyElementType *)(lVar2 + 0x18),(int *)(lVar2 + 0x24));
        }
        *(int *)(lVar2 + 0x20) = iVar7 + 1;
        lVar4 = *(longlong *)param_2;
        plVar18 = (longlong *)((longlong)iVar7 * 0x30 + *(longlong *)(lVar2 + 0x18));
        *plVar18 = lVar4;
        plVar18[5] = 0;
        if (lVar4 != 0) {
          puVar13 = (undefined8 *)&param_2->field_0x10;
          if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
            puVar13 = *(undefined8 **)&param_2->field_0x28;
          }
          (**(code **)*puVar13)(puVar13,plVar18 + 2);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      uStack_80 = 0;
      local_88 = HandleStringTableAssetAsyncLoadCompleted;
      iStack_7c = local_78.Data.ArrayMax;
      local_c8 = (undefined1  [8])0x0;
      local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_c0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
                 (FWriteAccessScope *)&local_68);
      local_50 = &local_c0;
      puVar13 = UE::Core::Private::DelegateAllocate(0x30,&local_c0);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &
                   ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar13[2] = uVar14;
        *puVar13 = &
                   ___7__TBaseRawMethodDelegateInstance__0A_VFStringTableEngineBridge____A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar13[3] = this;
        puVar13[4] = local_88;
        puVar13[5] = CONCAT44(iStack_7c,uStack_80);
        if (((this == (FStringTableEngineBridge *)0x0) || (puVar13[4] == 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InUserObject != nullptr && MethodPtr != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                               ,0x1d8,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar7 = (*pcVar5)();
          return iVar7;
        }
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
      iVar7 = LoadPackageAsync(&local_120,
                               (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                                *)local_c8,0,PKG_None,-1);
      if (iVar7 != -1) {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        pFVar11 = TMapBase<FName,FStringTableEngineBridge::FAsyncLoadingStringTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStringTableEngineBridge::FAsyncLoadingStringTable,0>_>
                  ::Find((TMapBase<FName,FStringTableEngineBridge::FAsyncLoadingStringTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStringTableEngineBridge::FAsyncLoadingStringTable,0>_>
                          *)&this->AsyncLoadingStringTables,local_110);
        if (pFVar11 != (FAsyncLoadingStringTable *)0x0) {
          pFVar11->AsyncLoadingId = iVar7;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
        if (local_f8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.SubPathString.Data.AllocatorInstance.Data);
        }
        if (*(longlong *)param_2 != 0) {
          plVar18 = (longlong *)&param_2->field_0x10;
          if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
            plVar18 = *(longlong **)&param_2->field_0x28;
          }
          (**(code **)(*plVar18 + 0x10))();
          return iVar7;
        }
        return iVar7;
      }
      if (*(longlong *)param_2 != 0) {
        local_108 = 0;
        UE::Core::Private::Function::
        TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(FName,FName)>
        ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(FName,FName)>
                      *)param_2,param_1,(FName)0x0);
      }
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      goto LAB_147db392c;
    }
    pUVar8 = FSoftObjectPath::TryLoad(&local_f8,(FUObjectSerializeContext *)0x0);
    if (pUVar8 == (UObject *)0x0) {
LAB_147db3906:
      pUVar8 = (UObject *)0x0;
    }
    else {
      pUVar9 = UStringTable::StaticClass();
      iVar7 = (int)pUVar9->_padding_;
      if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar7) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
          &pUVar9->_padding_)) goto LAB_147db3906;
    }
    if (*(longlong *)param_2 == 0) goto LAB_147db392c;
    if (pUVar8 == (UObject *)0x0) {
      local_100 = 0;
      FVar19.ComparisonIndex.Value = 0;
      FVar19.Number = 0;
    }
    else {
      FVar19.ComparisonIndex.Value = *(uint *)&pUVar8[1].field_0x10;
      FVar19.Number = *(uint *)&pUVar8[1].field_0x14;
    }
  }
  else {
    pUVar9 = UStringTable::StaticClass();
    iVar7 = (int)pUVar9->_padding_;
    if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar7) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar9->_padding_)) goto LAB_147db3474;
    if (*(longlong *)param_2 == 0) goto LAB_147db392c;
    FVar19.ComparisonIndex.Value = *(uint *)&pUVar8[1].field_0x10;
    FVar19.Number = *(uint *)&pUVar8[1].field_0x14;
  }
  UE::Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(FName,FName)>::
  operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(FName,FName)>
              *)param_2,param_1,FVar19);
LAB_147db392c:
  if (local_f8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.SubPathString.Data.AllocatorInstance.Data);
  }
  if (*(longlong *)param_2 != 0) {
    plVar18 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar18 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  return -1;
}

// RedirectStringTableAssetImpl @ 147dbc5b0

void __thiscall
FStringTableEngineBridge::RedirectStringTableAssetImpl
          (FStringTableEngineBridge *this,FName *param_1)

{
  int iVar1;
  undefined4 uVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  FSoftObjectPath local_28;
  
  GetAssetReference(&local_28,*param_1);
  if ((local_28.AssetPath.PackageName != (FName)0x0) &&
     (pUVar3 = FSoftObjectPath::ResolveObject(&local_28), pUVar3 != (UObject *)0x0)) {
    pUVar4 = UStringTable::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      uVar2 = *(undefined4 *)&pUVar3[1].field_0x14;
      param_1->ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar3[1].field_0x10;
      param_1->Number = uVar2;
    }
  }
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

