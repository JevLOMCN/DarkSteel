// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IndexedCacheStorage
// Functions: 32

// `dynamic_initializer_for_'GCopyFiles'' @ 140f8f710

void __cdecl
Experimental::IndexedCacheStorageManager_Debug::_dynamic_initializer_for__GCopyFiles__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Experimental::IndexedCacheStorageManager_Debug::<lambda_3>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&GCopyFiles,L"ics.CopyFiles",L"Copies all cache files to the supplied folder",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__GCopyFiles__);
  return;
}

// `dynamic_initializer_for_'GListFiles'' @ 140f8f840

void __cdecl
Experimental::IndexedCacheStorageManager_Debug::_dynamic_initializer_for__GListFiles__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Experimental::IndexedCacheStorageManager_Debug::<lambda_4>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&GListFiles,L"ics.ListFiles",L"Copies all cache files to the supplied folder",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__GListFiles__);
  return;
}

// `dynamic_initializer_for_'LogIndexedCacheStorageManager'' @ 140f8f970

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogIndexedCacheStorageManager__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogIndexedCacheStorageManager,L"LogIndexedCacheStorageManager",
             Display,All);
  atexit(_dynamic_atexit_destructor_for__LogIndexedCacheStorageManager__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantIndexedCacheStorage'' @ 140f8f9b0

void __cdecl _dynamic_initializer_for__ModuleRegistrantIndexedCacheStorage__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "IndexedCacheStorage";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"IndexedCacheStorage",0x13);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<Experimental::FIndexedCacheStorageModule>::
             InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 144563a50

void * __thiscall
Experimental::FIndexedCacheStorageModule::_scalar_deleting_destructor_
          (FIndexedCacheStorageModule *this,uint param_1)

{
  *this = (FIndexedCacheStorageModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144563af0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Experimental::IndexedCacheStorageManager_Debug::ListFiles'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Experimental::IndexedCacheStorageManager_Debug::ListFiles'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144563bc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Experimental::IndexedCacheStorageManager_Debug::CopyFiles'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Experimental::IndexedCacheStorageManager_Debug::CopyFiles'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144563e10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Experimental::IndexedCacheStorageManager_Debug::<lambda_3>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Experimental::IndexedCacheStorageManager_Debug::<lambda_3>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144564030

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Experimental::IndexedCacheStorageManager_Debug::<lambda_4>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,Experimental::IndexedCacheStorageManager_Debug::<lambda_4>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Call<`UE::FConditionVariable::Wait<UE::FMutex>'::__l2::<lambda_1>_> @ 144564060

bool __cdecl
UE::TFunctionWithContext<bool___cdecl(void)>::
Call<_UE::FConditionVariable::Wait<UE::FMutex>_::__l2::<lambda_1>_>(void *param_1)

{
  LOCK();
  **(undefined1 **)param_1 = 1;
  UNLOCK();
  return true;
}

// Call<`UE::FConditionVariable::Wait<UE::FMutex>'::__l2::<lambda_2>_> @ 144564080

void __cdecl
UE::TFunctionWithContext<void___cdecl(void)>::
Call<_UE::FConditionVariable::Wait<UE::FMutex>_::__l2::<lambda_2>_>(void *param_1)

{
  byte bVar1;
  byte *apbStackX_8 [4];
  
  apbStackX_8[0] = *(byte **)param_1;
  LOCK();
  bVar1 = *apbStackX_8[0];
  *apbStackX_8[0] = *apbStackX_8[0] - 1;
  UNLOCK();
  if ((bVar1 & 2) == 0) {
    return;
  }
  ParkingLot::Private::WakeOne
            (apbStackX_8[0],
             TFunctionWithContext<unsigned___int64___cdecl(UE::ParkingLot::FWakeState)>::
             Call<_UE::TIntrusiveMutex<UE::FMutex::FParams>::WakeWaitingThread_::__l2::<lambda_1>_>,
             apbStackX_8);
  return;
}

// DestructItems<TUniquePtr<Experimental::FCacheStorageMetaData,TDefaultDelete<Experimental::FCacheStorageMetaData>_>,int> @ 1445640a0

void __cdecl
DestructItems<TUniquePtr<Experimental::FCacheStorageMetaData,TDefaultDelete<Experimental::FCacheStorageMetaData>_>,int>
          (TUniquePtr<Experimental::FCacheStorageMetaData,TDefaultDelete<Experimental::FCacheStorageMetaData>_>
           *param_1,int param_2)

{
  FCacheStorageMetaData *pFVar1;
  FScriptContainerElement *pFVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FCacheStorageMetaData *)0x0) {
      pFVar2 = (pFVar1->MountName).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      operator_delete(pFVar1,0x28);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// ~TFunction_OwnedObject<`Experimental::IndexedCacheStorageManager_Debug::CopyFiles'::__l2::<lambda_1>,1,1> @ 1445642b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Experimental::IndexedCacheStorageManager_Debug::CopyFiles'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Experimental::IndexedCacheStorageManager_Debug::CopyFiles_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Experimental::IndexedCacheStorageManager_Debug::CopyFiles'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Experimental::FCacheStorageMetaData::CreateCacheStorage'::__l2::<lambda_1>,0,0> @ 1445642f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Experimental::FCacheStorageMetaData::CreateCacheStorage'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Experimental::FCacheStorageMetaData::CreateCacheStorage_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CreateCacheStorage_FCacheStorageMetaData_Experimental__QEAA_N_K_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`Experimental::FCacheStorageMetaData::DestroyCacheStorage'::__l2::<lambda_1>,0,0> @ 144564310

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Experimental::FCacheStorageMetaData::DestroyCacheStorage'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Experimental::FCacheStorageMetaData::DestroyCacheStorage_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__DestroyCacheStorage_FCacheStorageMetaData_Experimental__QEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`Experimental::IndexedCacheStorageManager_Debug::ListFiles'::__l2::<lambda_1>,1,0> @ 144564330

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Experimental::IndexedCacheStorageManager_Debug::ListFiles'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_Experimental::IndexedCacheStorageManager_Debug::ListFiles_::__l2::<lambda_1>,1,0>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`Experimental::IndexedCacheStorageManager_Debug::ListFiles'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// operator() @ 144564350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Experimental::IndexedCacheStorageManager_Debug::CopyFiles'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  FScriptContainerElement *_Src;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  FIndexedCacheStorageManager *pFVar5;
  FCacheStorageMetaData *pFVar6;
  FString *pFVar7;
  IFileManager *pIVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  ForAnyElementType FVar11;
  wchar_t *pwVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  wchar_t *in_stack_fffffffffffffea8;
  wchar_t *in_stack_fffffffffffffeb0;
  FString *local_128;
  undefined8 local_120;
  FString local_118;
  FString *local_108;
  undefined8 local_100;
  uint local_f8;
  FString local_f0;
  FString local_e0;
  FString *local_d0;
  FScriptContainerElement *local_c8;
  int *local_c0;
  FString local_b8;
  FString local_a8;
  FString **local_98;
  FString **local_90;
  int *local_88;
  FString local_80;
  code *local_70;
  FString *local_68;
  FString local_60 [2];
  
  piVar14 = *(int **)this;
  local_f8 = *(uint *)((longlong)this + 8);
  uVar9 = (ulonglong)(int)local_f8;
  local_res18 = 0;
  local_88 = piVar14 + uVar9;
  do {
    piVar2 = local_88;
    uVar15 = local_res18;
    local_c0 = piVar14;
    if (*(int *)((longlong)this + 8) != (int)uVar9) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (piVar14 == piVar2) {
      if (3 < (byte)LogConsoleResponse._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      }
      return;
    }
    iVar19 = *piVar14;
    local_res20 = iVar19;
    pFVar5 = Experimental::FIndexedCacheStorageManager::Get();
    pFVar6 = Experimental::FIndexedCacheStorageManager::GetCacheStorageMetaData(pFVar5,iVar19);
    if (pFVar6 == (FCacheStorageMetaData *)0x0) {
      if (2 < (byte)LogIndexedCacheStorageManager._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
      }
      local_c8 = (FScriptContainerElement *)0x0;
      iVar13 = 0;
    }
    else {
      Experimental::FCacheStorageMetaData::MountCacheStorage(pFVar6,&local_e0);
      local_c8 = local_e0.Data.AllocatorInstance.Data;
      iVar13 = local_e0.Data.ArrayNum;
    }
    _Src = local_c8;
    local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.Data.ArrayNum = 0;
    local_e0.Data.ArrayMax = 0;
    if (iVar19 == 0) {
      uVar15 = uVar15 | 1;
      local_res18 = uVar15;
      pFVar7 = FPaths::ProjectPersistentDownloadDir(local_60);
    }
    else {
      uVar15 = uVar15 | 2;
      local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f0.Data.ArrayNum = iVar13;
      local_res18 = uVar15;
      if (iVar13 == 0) {
        local_f0.Data.ArrayMax = 0;
      }
      else {
        in_stack_fffffffffffffea8 = (wchar_t *)&local_f0;
        in_stack_fffffffffffffeb0 =
             (wchar_t *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffeb0 >> 0x20),iVar13);
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar13,0,(ForAnyElementType *)in_stack_fffffffffffffea8,iVar13,
                   &local_f0.Data.ArrayMax);
        memcpy(local_f0.Data.AllocatorInstance.Data,_Src,(longlong)iVar13 * 2);
      }
      pFVar7 = &local_f0;
    }
    local_118.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Data.ArrayNum = (pFVar7->Data).ArrayNum;
    local_118.Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
    if (((uVar15 & 2) != 0) &&
       (uVar15 = uVar15 & 0xfffffffd, local_res18 = uVar15,
       local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (((uVar15 & 1) != 0) &&
       (local_res18 = uVar15 & 0xfffffffe,
       local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    }
    if (local_118.Data.ArrayNum < 2) {
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      pFVar5 = Experimental::FIndexedCacheStorageManager::Get();
      pFVar6 = Experimental::FIndexedCacheStorageManager::GetCacheStorageMetaData(pFVar5,iVar19);
      if (pFVar6 == (FCacheStorageMetaData *)0x0) {
        if (2 < (byte)LogIndexedCacheStorageManager._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
        }
      }
      else {
        Experimental::FCacheStorageMetaData::UnmountCacheStorage(pFVar6);
      }
      if (_Src == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(_Src);
      return;
    }
    bVar3 = ::FString::EndsWith(&local_118,L"/",1,IgnoreCase);
    if (!bVar3) {
      ::FString::AppendChars(&local_118,L"/",1);
    }
    local_128 = (FString *)0x0;
    local_120 = 0;
    local_108 = (FString *)0x0;
    local_100 = 0;
    ::FString::PrintfImpl(&local_80,L"%s/cache_%02d");
    pIVar8 = IFileManager::Get();
    FVar11.Data = local_118.Data.AllocatorInstance.Data;
    lVar17 = (longlong)local_118.Data.ArrayNum;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = local_118.Data.ArrayNum;
    pcVar1 = *(code **)((longlong)*pIVar8 + 0xc0);
    if (local_118.Data.ArrayNum == 0) {
      local_b8.Data.ArrayMax = 0;
    }
    else {
      in_stack_fffffffffffffea8 = (wchar_t *)&local_b8;
      in_stack_fffffffffffffeb0 =
           (wchar_t *)
           CONCAT44((int)((ulonglong)in_stack_fffffffffffffeb0 >> 0x20),local_118.Data.ArrayNum);
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_118.Data.ArrayNum,0,(ForAnyElementType *)in_stack_fffffffffffffea8,
                 local_118.Data.ArrayNum,&local_b8.Data.ArrayMax);
      memcpy(local_b8.Data.AllocatorInstance.Data,FVar11.Data,lVar17 * 2);
    }
    FVar11.Data = local_80.Data.AllocatorInstance.Data;
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar13 = local_80.Data.ArrayNum;
    local_a8.Data.ArrayNum = iVar13;
    if (iVar13 == 0) {
      local_a8.Data.ArrayMax = 0;
    }
    else {
      in_stack_fffffffffffffea8 = (wchar_t *)&local_a8;
      in_stack_fffffffffffffeb0 =
           (wchar_t *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffeb0 >> 0x20),iVar13);
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar13,0,(ForAnyElementType *)in_stack_fffffffffffffea8,iVar13,
                 &local_a8.Data.ArrayMax);
      memcpy(local_a8.Data.AllocatorInstance.Data,FVar11.Data,(longlong)iVar13 * 2);
    }
    local_98 = &local_128;
    local_90 = &local_108;
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_118.Data.ArrayNum != 0) {
      FVar11.Data = local_118.Data.AllocatorInstance.Data;
    }
    local_68 = &local_b8;
    local_70 = UE::Core::Private::Function::
               TFunctionRefCaller<``Experimental::IndexedCacheStorageManager_Debug::CopyFiles'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>,bool,wchar_t_const_*,FFileStatData_const_&>
               ::Call;
    (*pcVar1)(pIVar8,FVar11.Data,&local_70);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    uVar18 = 0;
    local_d0 = (FString *)0x0;
    uVar9 = uVar18;
    if (0 < (int)local_120) {
      do {
        pFVar7 = local_d0;
        uVar16 = (uint)uVar18;
        uVar15 = ~uVar16 >> 0x1f;
        if ((byte)LogConsoleResponse._0_1_ < 4) {
          pFVar7 = (FString *)(longlong)(int)uVar16;
        }
        else {
          uVar4 = 0;
          if ((int)uVar16 < (int)local_100) {
            uVar4 = uVar15;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (*(int *)((longlong)&(local_108->Data).ArrayNum + uVar9) == 0) {
            in_stack_fffffffffffffeb0 = L"";
          }
          else {
            in_stack_fffffffffffffeb0 =
                 *(wchar_t **)((longlong)&(local_108->Data).AllocatorInstance.Data + uVar9);
          }
          uVar4 = 0;
          if ((int)uVar16 < (int)local_120) {
            uVar4 = uVar15;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (*(int *)((longlong)&(local_128->Data).ArrayNum + uVar9) == 0) {
            in_stack_fffffffffffffea8 = L"";
          }
          else {
            in_stack_fffffffffffffea8 =
                 *(wchar_t **)((longlong)&(local_128->Data).AllocatorInstance.Data + uVar9);
          }
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
        }
        pIVar8 = IFileManager::Get();
        pwVar12 = (wchar_t *)(longlong)(int)local_120;
        pcVar1 = *(code **)((longlong)*pIVar8 + 0x40);
        uVar4 = 0;
        if ((int)uVar16 < (int)local_120) {
          uVar4 = uVar15;
        }
        if ((uVar4 == 0) &&
           (in_stack_fffffffffffffea8 = (wchar_t *)pFVar7,
           bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           in_stack_fffffffffffffeb0 = pwVar12, bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (local_128[(longlong)pFVar7].Data.ArrayNum == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)local_128[(longlong)pFVar7].Data.AllocatorInstance.Data;
        }
        pwVar10 = (wchar_t *)(longlong)(int)local_100;
        uVar4 = 0;
        if ((int)uVar16 < (int)local_100) {
          uVar4 = uVar15;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , in_stack_fffffffffffffea8 = (wchar_t *)pFVar7, in_stack_fffffffffffffeb0 = pwVar10,
           bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)((longlong)&(local_108->Data).ArrayNum + uVar9) == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = *(wchar_t **)((longlong)&(local_108->Data).AllocatorInstance.Data + uVar9);
        }
        in_stack_fffffffffffffeb0 =
             (wchar_t *)((ulonglong)in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
        in_stack_fffffffffffffea8 =
             (wchar_t *)((ulonglong)in_stack_fffffffffffffea8 & 0xffffffffffffff00);
        (*pcVar1)(pIVar8,pwVar10,pwVar12,1,in_stack_fffffffffffffea8,in_stack_fffffffffffffeb0,0,0,0
                 );
        local_d0 = (FString *)((longlong)&(local_d0->Data).AllocatorInstance.Data + 1);
        uVar18 = (ulonglong)(uVar16 + 1);
        uVar9 = uVar9 + 0x10;
        iVar19 = local_res20;
      } while ((int)(uVar16 + 1) < (int)local_120);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>(local_108,(int)local_100);
    if (local_108 != (FString *)0x0) {
      FMemory::Free(local_108);
    }
    DestructItems<FString,int>(local_128,(int)local_120);
    if (local_128 != (FString *)0x0) {
      FMemory::Free(local_128);
    }
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    pFVar5 = Experimental::FIndexedCacheStorageManager::Get();
    pFVar6 = Experimental::FIndexedCacheStorageManager::GetCacheStorageMetaData(pFVar5,iVar19);
    if (pFVar6 == (FCacheStorageMetaData *)0x0) {
      if (2 < (byte)LogIndexedCacheStorageManager._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
      }
    }
    else {
      Experimental::FCacheStorageMetaData::UnmountCacheStorage(pFVar6);
    }
    if (local_c8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8);
    }
    piVar14 = local_c0 + 1;
    uVar9 = (ulonglong)local_f8;
  } while( true );
}

// operator() @ 144564a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Experimental::IndexedCacheStorageManager_Debug::ListFiles'::__l2::<lambda_1>::operator()
          (void *this)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  FIndexedCacheStorageManager *pFVar7;
  FCacheStorageMetaData *pFVar8;
  FString *pFVar9;
  IFileManager *pIVar10;
  ForAnyElementType _Src;
  int iVar11;
  int *piVar12;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  int *local_res18;
  FString local_78;
  FString local_68;
  code *local_58;
  undefined1 *local_50;
  FString local_48;
  
  bVar5 = false;
  bVar4 = false;
  local_res8[0] = 0;
  piVar12 = *(int **)this;
  iVar1 = *(int *)((longlong)this + 8);
  local_res18 = piVar12 + iVar1;
  while( true ) {
    piVar6 = local_res18;
    if (*(int *)((longlong)this + 8) != iVar1) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (piVar12 == piVar6) {
      if ((byte)LogConsoleResponse._0_1_ < 4) {
        return;
      }
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      return;
    }
    iVar2 = *piVar12;
    pFVar7 = Experimental::FIndexedCacheStorageManager::Get();
    pFVar8 = Experimental::FIndexedCacheStorageManager::GetCacheStorageMetaData(pFVar7,iVar2);
    if (pFVar8 == (FCacheStorageMetaData *)0x0) {
      if (2 < (byte)LogIndexedCacheStorageManager._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
      }
      _Src.Data = (FScriptContainerElement *)0x0;
      iVar11 = 0;
    }
    else {
      Experimental::FCacheStorageMetaData::MountCacheStorage(pFVar8,&local_68);
      _Src.Data = local_68.Data.AllocatorInstance.Data;
      iVar11 = local_68.Data.ArrayNum;
    }
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    if (iVar2 == 0) {
      bVar5 = true;
      pFVar9 = FPaths::ProjectPersistentDownloadDir(&local_48);
    }
    else {
      bVar4 = true;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = iVar11;
      if (iVar11 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar11,0,(ForAnyElementType *)&local_78,iVar11,&local_78.Data.ArrayMax);
        memcpy(local_78.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar11 * 2);
      }
      pFVar9 = &local_78;
    }
    pFVar3 = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar11 = (pFVar9->Data).ArrayNum;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
    if ((bVar4) &&
       (bVar4 = false, local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if ((bVar5) &&
       (bVar5 = false, local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (iVar11 < 2) break;
    pIVar10 = IFileManager::Get();
    local_50 = local_res10;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<``Experimental::IndexedCacheStorageManager_Debug::ListFiles'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>,bool,wchar_t_const_*,FFileStatData_const_&>
               ::Call;
    (**(code **)((longlong)*pIVar10 + 0xc0))(pIVar10,pFVar3,&local_58);
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar7 = Experimental::FIndexedCacheStorageManager::Get();
    pFVar8 = Experimental::FIndexedCacheStorageManager::GetCacheStorageMetaData(pFVar7,iVar2);
    if (pFVar8 == (FCacheStorageMetaData *)0x0) {
      if (2 < (byte)LogIndexedCacheStorageManager._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
      }
    }
    else {
      Experimental::FCacheStorageMetaData::UnmountCacheStorage(pFVar8);
    }
    if (_Src.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(_Src.Data);
    }
    piVar12 = piVar12 + 1;
  }
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar7 = Experimental::FIndexedCacheStorageManager::Get();
  pFVar8 = Experimental::FIndexedCacheStorageManager::GetCacheStorageMetaData(pFVar7,iVar2);
  if (pFVar8 == (FCacheStorageMetaData *)0x0) {
    if (2 < (byte)LogIndexedCacheStorageManager._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
    }
  }
  else {
    Experimental::FCacheStorageMetaData::UnmountCacheStorage(pFVar8);
  }
  if (_Src.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(_Src.Data);
  }
  return;
}

// operator() @ 144564d00

/* WARNING: Removing unreachable block (ram,0x000144564fd9) */

bool __thiscall
``Experimental::IndexedCacheStorageManager_Debug::CopyFiles'::__l2::<lambda_1>::operator()'::__l6::
<lambda_1>::operator()(void *this,wchar_t *param_1,FFileStatData *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  FString *pFVar9;
  IFileManager *pIVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  void *_Src;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  FString local_88;
  ForAnyElementType local_78;
  undefined8 local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if (!param_2->bIsValid) {
    return true;
  }
  ::FString::FString(&local_58,param_1);
  if ((param_2->bIsDirectory) && (bVar5 = ::FString::EndsWith(&local_58,L"/",1,IgnoreCase), !bVar5))
  {
    ::FString::AppendChars(&local_58,L"/",1);
  }
  if (*(int *)((longlong)this + 8) == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = *(wchar_t **)this;
  }
  FPaths::MakePathRelativeTo(&local_58,pwVar11);
  iVar8 = *(int *)((longlong)this + 0x18);
  iVar16 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar16 = 0;
  }
  iVar7 = iVar16 + 1;
  local_88.Data.ArrayNum = iVar8;
  if ((iVar8 == 0) && (iVar7 != 0)) {
    _Src = *(void **)((longlong)this + 0x10);
    iVar7 = iVar16 + 2;
LAB_144564dd2:
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar7 == 0) {
      local_88.Data.ArrayMax = 0;
      goto LAB_144564e24;
    }
  }
  else {
    _Src = *(void **)((longlong)this + 0x10);
    if (iVar8 == 0) goto LAB_144564dd2;
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar15 = iVar8 + iVar7;
  if ((int)uVar15 < iVar8) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar15,0,(ForAnyElementType *)&local_88,iVar8,&local_88.Data.ArrayMax);
  if (iVar8 != 0) {
    memcpy(local_88.Data.AllocatorInstance.Data,_Src,(longlong)iVar8 * 2);
  }
LAB_144564e24:
  ::FString::PathAppend(&local_88,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar16);
  FVar4.Data = local_88.Data.AllocatorInstance.Data;
  if (param_2->bIsDirectory) {
    lVar14 = (longlong)local_88.Data.ArrayNum;
    FVar13.Data = (FScriptContainerElement *)0x0;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = CONCAT44(local_70._4_4_,local_88.Data.ArrayNum);
    if (local_88.Data.ArrayNum == 0) {
      local_70 = 0;
      local_78.Data = (FScriptContainerElement *)0x0;
      iVar8 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_88.Data.ArrayNum,0,&local_78,local_88.Data.ArrayNum,
                 (int *)((longlong)&local_70 + 4));
      memcpy(local_78.Data,FVar4.Data,lVar14 * 2);
      FVar13.Data = local_78.Data;
      iVar8 = (int)local_70;
      local_78.Data = (FScriptContainerElement *)0x0;
      local_70 = 0;
    }
  }
  else {
    pFVar9 = FPaths::GetPath(&local_48,&local_88);
    FVar13.Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar8 = (pFVar9->Data).ArrayNum;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (param_2->bIsDirectory) {
    pIVar10 = IFileManager::Get();
    pFVar12 = (FScriptContainerElement *)L"";
    if (iVar8 != 0) {
      pFVar12 = FVar13.Data;
    }
    (**(code **)((longlong)*pIVar10 + 0x60))(pIVar10,pFVar12,1);
  }
  else {
    pFVar2 = *(ForAnyElementType **)((longlong)this + 0x20);
    ::FString::FString(&local_68,param_1);
    if (((pFVar2->Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    iVar8 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar8 + 1;
    pFVar12 = pFVar2->Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar12 = 0;
    *(FScriptContainerElement **)pFVar12 = local_68.Data.AllocatorInstance.Data;
    *(int *)(pFVar12 + 8) = local_68.Data.ArrayNum;
    *(int *)(pFVar12 + 0xc) = local_68.Data.ArrayMax;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar2 = *(ForAnyElementType **)((longlong)this + 0x28);
    if (((pFVar2->Data <= (FScriptContainerElement *)&local_88) &&
        ((FScriptContainerElement *)&local_88 <
         pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    iVar8 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar2,piVar1);
    }
    FVar4.Data = local_88.Data.AllocatorInstance.Data;
    *(int *)&pFVar2[1].Data = iVar8 + 1;
    pFVar12 = pFVar2->Data + (longlong)iVar8 * 0x10;
    *(undefined8 *)pFVar12 = 0;
    lVar14 = (longlong)local_88.Data.ArrayNum;
    *(int *)(pFVar12 + 8) = local_88.Data.ArrayNum;
    if (local_88.Data.ArrayNum == 0) {
      *(int *)(pFVar12 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)pFVar12,local_88.Data.ArrayNum,
                 (int *)(pFVar12 + 0xc));
      memcpy(*(void **)pFVar12,FVar4.Data,lVar14 * 2);
    }
  }
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar13.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return true;
}

// operator() @ 144565120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Experimental::IndexedCacheStorageManager_Debug::<lambda_3>::operator()
          (<lambda_3> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->ArrayNum != 0) {
    if (param_1->ArrayNum < 1) {
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
    CopyFiles((FString *)(param_1->AllocatorInstance).Data);
    return;
  }
  if (1 < (byte)LogIndexedCacheStorageManager._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
    return;
  }
  return;
}

// operator() @ 1445651b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Experimental::IndexedCacheStorageManager_Debug::<lambda_4>::operator()
          (<lambda_4> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  ForAnyElementType _Src;
  longlong lVar1;
  ForAnyElementType local_58;
  undefined8 local_50;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  code *local_38 [2];
  undefined **local_28;
  FScriptContainerElement *local_20;
  int local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  CollectCacheIndices(&local_48);
  if (3 < (byte)LogConsoleResponse._0_1_) {
    UE::Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)&PTR_u_Listing_cache_f_150d6fa90,
               (FLogCategoryBase *)&LogConsoleResponse);
  }
  _Src.Data = local_48.AllocatorInstance.Data;
  lVar1 = (longlong)local_48.ArrayNum;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50._0_4_ = local_48.ArrayNum;
  if (local_48.ArrayNum == 0) {
    local_20 = (FScriptContainerElement *)0x0;
    local_14 = 0;
    local_18 = local_48.ArrayNum;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_48.ArrayNum,0,&local_58,local_48.ArrayNum,(int *)((longlong)&local_50 + 4))
    ;
    memcpy(local_58.Data,_Src.Data,lVar1 << 2);
    local_20 = local_58.Data;
    local_14 = local_50._4_4_;
    local_18 = (int)local_50;
  }
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Experimental::IndexedCacheStorageManager_Debug::ListFiles'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_10 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Experimental::IndexedCacheStorageManager_Debug::ListFiles'::__l2::<lambda_1>,void>
                ::Call;
  AsyncTask(AnyBackgroundThreadNormalTask,(TUniqueFunction<void___cdecl(void)> *)local_38);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// `scalar_deleting_destructor' @ 1445652d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Experimental::FCacheStorageMetaData::CreateCacheStorage'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__CreateCacheStorage_FCacheStorageMetaData_Experimental__QEAA_N_K_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144565310

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Experimental::FCacheStorageMetaData::DestroyCacheStorage'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__DestroyCacheStorage_FCacheStorageMetaData_Experimental__QEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CollectCacheIndices @ 144565520

void __cdecl
Experimental::IndexedCacheStorageManager_Debug::CollectCacheIndices
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FIndexedCacheStorageManager *this;
  ulong64 uVar8;
  uint uVar9;
  undefined4 local_28;
  uint local_24 [3];
  
  uVar6 = (**(code **)((longlong)::Instance + 8))(&::Instance);
  uVar9 = uVar6 + 1;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  piVar1 = &param_1->ArrayMax;
  piVar2 = &param_1->ArrayNum;
  if (*piVar1 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar9,&param_1->AllocatorInstance,*piVar2,piVar1);
  }
  bVar5 = FPaths::HasProjectPersistentDownloadDir();
  if (bVar5) {
    pFVar3 = (param_1->AllocatorInstance).Data;
    local_28 = 0;
    if (((pFVar3 <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 < pFVar3 + (longlong)*piVar1 * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = *piVar2;
    if (iVar7 == param_1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_1->AllocatorInstance,piVar1);
    }
    *piVar2 = iVar7 + 1;
    *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_28;
  }
  uVar9 = 1;
  if (1 < uVar6) {
    do {
      this = FIndexedCacheStorageManager::Get();
      uVar8 = FIndexedCacheStorageManager::GetCacheStorageCapacity(this,uVar9);
      if (uVar8 != 0) {
        pFVar3 = (param_1->AllocatorInstance).Data;
        local_24[0] = uVar9;
        if (((pFVar3 <= (FScriptContainerElement *)local_24) &&
            ((FScriptContainerElement *)local_24 < pFVar3 + (longlong)param_1->ArrayMax * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = param_1->ArrayNum;
        if (iVar7 == param_1->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar7 + 1;
        *(uint *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_24[0];
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar6);
  }
  return;
}

// CopyFiles @ 144565750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Experimental::IndexedCacheStorageManager_Debug::CopyFiles(FString *param_1)

{
  FScriptContainerElement *_Src;
  ForAnyElementType FVar1;
  int iVar2;
  char cVar3;
  IFileManager *pIVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  TArray<int,TSizedDefaultAllocator<32>_> local_68;
  ForAnyElementType local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  code *local_38 [5];
  undefined8 *local_10;
  
  pIVar4 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  cVar3 = (**(code **)((longlong)*pIVar4 + 0x58))(pIVar4,pwVar5);
  if (cVar3 == '\0') {
    pIVar4 = IFileManager::Get();
    if ((param_1->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar4 + 0x60))(pIVar4,pwVar5,0);
  }
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  CollectCacheIndices(&local_68);
  local_70 = (param_1->Data).ArrayNum;
  lVar6 = (longlong)local_70;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_78.Data = (FScriptContainerElement *)0x0;
  if (local_70 == 0) {
    local_6c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_70,0,&local_78,local_70,&local_6c);
    memcpy(local_78.Data,_Src,lVar6 * 2);
  }
  if (3 < (byte)LogConsoleResponse._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  FVar1.Data = local_68.AllocatorInstance.Data;
  lVar6 = (longlong)local_68.ArrayNum;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = CONCAT44(local_50._4_4_,local_68.ArrayNum);
  if (local_68.ArrayNum == 0) {
    local_50 = local_68._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_68.ArrayNum,0,&local_58,local_68.ArrayNum,(int *)((longlong)&local_50 + 4))
    ;
    memcpy(local_58.Data,FVar1.Data,lVar6 << 2);
  }
  iVar2 = local_70;
  FVar1.Data = local_78.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = CONCAT44(local_40._4_4_,local_70);
  if (local_70 == 0) {
    local_40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_70,0,&local_48,local_70,(int *)((longlong)&local_40 + 4));
    memcpy(local_48.Data,FVar1.Data,(longlong)iVar2 * 2);
  }
  local_38[0] = (code *)0x0;
  local_10 = FMemory::Malloc(0x28,8);
  local_10[1] = 0;
  *local_10 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`Experimental::IndexedCacheStorageManager_Debug::CopyFiles'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  local_10[1] = local_58.Data;
  local_58.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)(local_10 + 2) = (undefined4)local_50;
  *(undefined4 *)((longlong)local_10 + 0x14) = local_50._4_4_;
  local_50 = 0;
  local_10[3] = 0;
  local_10[3] = local_48.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)(local_10 + 4) = (undefined4)local_40;
  *(undefined4 *)((longlong)local_10 + 0x24) = local_40._4_4_;
  local_40 = 0;
  if (local_10 + 1 != (undefined8 *)0x0) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Experimental::IndexedCacheStorageManager_Debug::CopyFiles'::__l2::<lambda_1>,void>
                  ::Call;
  }
  AsyncTask(AnyBackgroundThreadNormalTask,(TUniqueFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// GetIniParameters @ 144567550

/* WARNING: Removing unreachable block (ram,0x00014456761a) */
/* WARNING: Removing unreachable block (ram,0x00014456764d) */
/* WARNING: Removing unreachable block (ram,0x000144567665) */
/* WARNING: Removing unreachable block (ram,0x000144567698) */
/* WARNING: Removing unreachable block (ram,0x0001445676b0) */
/* WARNING: Removing unreachable block (ram,0x0001445676e3) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
Experimental::GetIniParameters(FString *param_1,FString *param_2,FString *param_3,FString *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  wchar_t *pwVar5;
  undefined8 **local_res20;
  undefined8 *local_98;
  undefined8 local_90;
  wchar_t *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  code *local_68;
  undefined8 ***local_60;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_res20 = &local_98;
  local_98 = (undefined8 *)0x0;
  local_60 = &local_res20;
  local_90 = 0;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`Experimental::GetIniParameters'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_88 = L":";
  uStack_7c = local_48._12_4_;
  iStack_80 = 1;
  local_78 = (param_4->Data).AllocatorInstance.Data;
  iVar1 = (param_4->Data).ArrayNum;
  local_58.DataPtr = L":";
  local_58.Size = 1;
  local_58._12_4_ = local_48._12_4_;
  iStack_70 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_70 = 0;
  }
  local_48._12_4_ = uStack_6c;
  local_48.Size = iStack_70;
  local_48.DataPtr = (wchar_t *)local_78;
  UE::String::ParseTokens
            (&local_48,&local_58,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_68,None)
  ;
  if (((((int)local_90 == 3) && (*(int *)(local_98 + 1) != 0)) && (*(int *)(local_98 + 3) != 0)) &&
     (*(int *)(local_98 + 5) != 0)) {
    local_88 = (wchar_t *)local_98[2];
    _iStack_80 = local_98[3];
    iVar1 = *(int *)(local_98 + 3);
    if ((iVar1 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pwVar5 = local_88;
    if (*local_88 == L'[') {
      if (((iVar1 + -1 < 0) || (iVar1 <= iVar1 + -1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                             ,0x234,
                             L"Index out of bounds on StringView: index %i on a view with a length of %i"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (pwVar5[(longlong)iVar1 + -1] == L']') {
        pwVar5 = pwVar5 + 1;
        iStack_80 = iVar1 + -2;
        local_88 = pwVar5;
        if (((int)local_90 < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        local_38 = *local_98;
        uStack_30 = local_98[1];
        ::FString::AssignRange(param_1,(wchar_t *)*local_98,(int)local_98[1]);
        ::FString::AssignRange(param_2,pwVar5,iVar1 + -2);
        if (((int)local_90 < 3) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        ::FString::AssignRange(param_3,(wchar_t *)local_98[4],(int)local_98[5]);
        bVar3 = true;
        goto LAB_1445678a4;
      }
    }
    if (1 < (byte)LogIndexedCacheStorageManager._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
    }
  }
  else if (1 < (byte)LogIndexedCacheStorageManager._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
  }
  bVar3 = false;
LAB_1445678a4:
  if (local_98 != (undefined8 *)0x0) {
    FMemory::Free(local_98);
  }
  return bVar3;
}

// ParseSizeParam @ 144568b50

ulong64 __cdecl Experimental::ParseSizeParam(TStringView<wchar_t> *param_1)

{
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  int iVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  ulong64 local_res10;
  undefined4 uStack_1c;
  
  pwVar3 = param_1->DataPtr;
  pwVar6 = pwVar3 + param_1->Size;
  iVar4 = 0;
  while ((pwVar3 != pwVar6 && (iVar1 = iswspace(*pwVar3), iVar1 != 0))) {
    iVar4 = iVar4 + 1;
    pwVar3 = pwVar3 + 1;
  }
  pwVar6 = param_1->DataPtr;
  iVar1 = param_1->Size - iVar4;
  if (iVar1 != 0) {
    lVar5 = (longlong)iVar1;
    do {
      iVar2 = iswspace((pwVar6 + iVar4)[lVar5 + -1]);
      if (iVar2 == 0) break;
      iVar1 = iVar1 + -1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  local_res10 = 0;
  param_1->DataPtr = pwVar6 + iVar4;
  *(ulonglong *)&param_1->Size = CONCAT44(uStack_1c,iVar1);
  ::LexFromString(&local_res10,param_1);
  if (local_res10 != 0) {
    iVar4 = param_1->Size;
    lVar5 = (longlong)iVar4;
    pwVar6 = param_1->DataPtr;
    if (2 < iVar4) {
      iVar4 = 2;
    }
    iVar1 = 0;
    if (0 < iVar4) {
      iVar1 = iVar4;
    }
    if (iVar1 == 2) {
      iVar4 = FGenericPlatformStricmp::Strnicmp(L"GB",pwVar6 + (lVar5 - iVar1),2);
      if (iVar4 == 0) {
        return local_res10 << 0x1e;
      }
      pwVar6 = param_1->DataPtr;
    }
    iVar4 = param_1->Size;
    lVar5 = (longlong)iVar4;
    if (2 < iVar4) {
      iVar4 = 2;
    }
    iVar1 = 0;
    if (0 < iVar4) {
      iVar1 = iVar4;
    }
    if (iVar1 == 2) {
      iVar4 = FGenericPlatformStricmp::Strnicmp(L"MB",pwVar6 + (lVar5 - iVar1),2);
      if (iVar4 == 0) {
        return local_res10 << 0x14;
      }
      pwVar6 = param_1->DataPtr;
    }
    iVar4 = param_1->Size;
    lVar5 = (longlong)iVar4;
    if (2 < iVar4) {
      iVar4 = 2;
    }
    iVar1 = 0;
    if (0 < iVar4) {
      iVar1 = iVar4;
    }
    if ((iVar1 == 2) &&
       (iVar4 = FGenericPlatformStricmp::Strnicmp(L"KB",pwVar6 + (lVar5 - iVar1),2), iVar4 == 0)) {
      local_res10 = local_res10 << 10;
    }
  }
  return local_res10;
}

// IMPLEMENT_MODULE_IndexedCacheStorage @ 144569340

void __cdecl IMPLEMENT_MODULE_IndexedCacheStorage(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'GCopyFiles'' @ 15036c880

void __cdecl
Experimental::IndexedCacheStorageManager_Debug::_dynamic_atexit_destructor_for__GCopyFiles__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCopyFiles);
  return;
}

// `dynamic_atexit_destructor_for_'GListFiles'' @ 15036c8a0

void __cdecl
Experimental::IndexedCacheStorageManager_Debug::_dynamic_atexit_destructor_for__GListFiles__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GListFiles);
  return;
}

// `dynamic_atexit_destructor_for_'Instance'' @ 15036c8c0

void __cdecl
`Experimental::FIndexedCacheStorageManager::Get'::__l2::_dynamic_atexit_destructor_for__Instance__
          (void)

{
  FScriptContainerElement *pFVar1;
  TUniquePtr<Experimental::FIndexedCacheStorageMetaData,TDefaultDelete<Experimental::FIndexedCacheStorageMetaData>_>
  TVar2;
  
  ::Instance.StorageNameToStorageIndex._72_4_ = 0;
  if (::Instance.StorageNameToStorageIndex._64_8_ != 0) {
    FMemory::Free((void *)::Instance.StorageNameToStorageIndex._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Instance.StorageNameToStorageIndex);
  TVar2 = ::Instance.IndexedCacheStorageMetaData;
  if (::Instance.IndexedCacheStorageMetaData.Ptr != (FIndexedCacheStorageMetaData *)0x0) {
    DestructItems<TUniquePtr<Experimental::FCacheStorageMetaData,TDefaultDelete<Experimental::FCacheStorageMetaData>_>,int>
              ((TUniquePtr<Experimental::FCacheStorageMetaData,TDefaultDelete<Experimental::FCacheStorageMetaData>_>
                *)((::Instance.IndexedCacheStorageMetaData.Ptr)->IndexedCacheEntriesMetaData).
                  AllocatorInstance.Data,
               ((::Instance.IndexedCacheStorageMetaData.Ptr)->IndexedCacheEntriesMetaData).ArrayNum)
    ;
    pFVar1 = ((TVar2.Ptr)->IndexedCacheEntriesMetaData).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(TVar2.Ptr,0x10);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogIndexedCacheStorageManager'' @ 15036c930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogIndexedCacheStorageManager__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogIndexedCacheStorageManager);
  return;
}

