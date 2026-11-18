// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IndexedCacheStorage
// Functions: 5

// CreateCacheStorage @ 1445659e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Experimental::FCacheStorageMetaData::CreateCacheStorage(FCacheStorageMetaData *this,ulong64 param_1)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  code *pcVar3;
  undefined1 uVar4;
  char cVar5;
  undefined ***pppuVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  undefined *local_78;
  code *local_58 [2];
  undefined **local_48;
  FCacheStorageMetaData *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  LOCK();
  bVar7 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  if (((this->EarlyStartupSize != 0) && (param_1 != this->EarlyStartupSize)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("EarlyStartupSize == 0 || RequestNumberOfBytes == EarlyStartupSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IndexedCacheStorage\\Private\\IndexedCacheStorageManager.cpp"
                         ,0x62,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar4 = (*pcVar3)();
    return (bool)uVar4;
  }
  if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
    local_78 = (&`public:_wchar_t_const*___ptr64___cdecl_Experimental::FCacheStorageMetaData::LexToString(Experimental::FCacheStorageMetaData::ECacheStorageState)___ptr64'
                 ::__l2::Strings)[this->CacheStorageState];
    UE::Logging::Private::BasicLog<4>
              (&`public:_bool___cdecl_Experimental::FCacheStorageMetaData::CreateCacheStorage(unsigned___int64)___ptr64'
                ::__l10::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
  }
  local_48 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__CreateCacheStorage_FCacheStorageMetaData_Experimental__QEAA_N_K_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Experimental::FCacheStorageMetaData::CreateCacheStorage'::__l2::<lambda_1>,bool>
                ::Call;
  local_30 = (undefined ***)0x0;
  local_40 = this;
  WaitForPredicateWhileLocked(this,(TFunction<bool___cdecl(void)> *)local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar6 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar6 = local_30;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  if ((this->MountRefCount != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MountRefCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IndexedCacheStorage\\Private\\IndexedCacheStorageManager.cpp"
                         ,0x6b,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar4 = (*pcVar3)();
    return (bool)uVar4;
  }
  if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&`public:_bool___cdecl_Experimental::FCacheStorageMetaData::CreateCacheStorage(unsigned___int64)___ptr64'
                ::__l35::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
  }
  cVar5 = (**(code **)((longlong)::Instance + 0x10))(&::Instance,param_1,this->CacheIndex);
  if (cVar5 == '\0') {
    this->CacheStorageState = Deleted;
    if (1 < (byte)LogIndexedCacheStorageManager._0_1_) {
      local_78 = `public:_wchar_t_const*___ptr64___cdecl_Experimental::FCacheStorageMetaData::LexToString(Experimental::FCacheStorageMetaData::ECacheStorageState)___ptr64'
                 ::__l2::Strings;
      UE::Logging::Private::BasicLog<2>
                (&`public:_bool___cdecl_Experimental::FCacheStorageMetaData::CreateCacheStorage(unsigned___int64)___ptr64'
                  ::__l76::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
    }
  }
  else {
    this->CacheStorageState = Created;
    if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
      local_78 = PTR_u_ECacheStorageSt_154bbfa50;
      UE::Logging::Private::BasicLog<4>
                (&`public:_bool___cdecl_Experimental::FCacheStorageMetaData::CreateCacheStorage(unsigned___int64)___ptr64'
                  ::__l56::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
    }
  }
  if ((this->ConditionVariable).bHasWaiters != (atomic<bool>)0x0) {
    LOCK();
    (this->ConditionVariable).bHasWaiters = (atomic<bool>)0x0;
    UNLOCK();
    UE::ParkingLot::WakeAll(&this->ConditionVariable);
  }
  LOCK();
  pFVar1 = &this->Mutex;
  aVar2 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->Mutex);
  }
  return (bool)cVar5;
}

// DestroyCacheStorage @ 144565cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Experimental::FCacheStorageMetaData::DestroyCacheStorage(FCacheStorageMetaData *this)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  code *pcVar3;
  char cVar4;
  undefined ***pppuVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  undefined *local_68;
  code *local_48 [2];
  undefined **local_38;
  FCacheStorageMetaData *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  LOCK();
  bVar6 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&`public:_void___cdecl_Experimental::FCacheStorageMetaData::DestroyCacheStorage(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
  }
  local_38 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__DestroyCacheStorage_FCacheStorageMetaData_Experimental__QEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Experimental::FCacheStorageMetaData::DestroyCacheStorage'::__l2::<lambda_1>,bool>
                ::Call;
  local_20 = (undefined ***)0x0;
  local_30 = this;
  WaitForPredicateWhileLocked(this,(TFunction<bool___cdecl(void)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar5 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar5 = local_20;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if ((this->MountRefCount != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("MountRefCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IndexedCacheStorage\\Private\\IndexedCacheStorageManager.cpp"
                         ,0x92,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (this->CacheStorageState == Deleted) {
    if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`public:_void___cdecl_Experimental::FCacheStorageMetaData::DestroyCacheStorage(void)___ptr64'
                  ::__l31::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
    }
  }
  else {
    if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`public:_void___cdecl_Experimental::FCacheStorageMetaData::DestroyCacheStorage(void)___ptr64'
                  ::__l49::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
    }
    cVar4 = (**(code **)((longlong)::Instance + 0x18))(&::Instance,this->CacheIndex);
    if (cVar4 == '\0') {
      this->CacheStorageState = Created;
      if (1 < (byte)LogIndexedCacheStorageManager._0_1_) {
        local_68 = PTR_u_ECacheStorageSt_154bbfa50;
        UE::Logging::Private::BasicLog<2>
                  (&`public:_void___cdecl_Experimental::FCacheStorageMetaData::DestroyCacheStorage(void)___ptr64'
                    ::__l90::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
      }
    }
    else {
      this->CacheStorageState = Deleted;
      if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
        local_68 = `public:_wchar_t_const*___ptr64___cdecl_Experimental::FCacheStorageMetaData::LexToString(Experimental::FCacheStorageMetaData::ECacheStorageState)___ptr64'
                   ::__l2::Strings;
        UE::Logging::Private::BasicLog<4>
                  (&`public:_void___cdecl_Experimental::FCacheStorageMetaData::DestroyCacheStorage(void)___ptr64'
                    ::__l70::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
      }
    }
    if ((this->ConditionVariable).bHasWaiters != (atomic<bool>)0x0) {
      LOCK();
      (this->ConditionVariable).bHasWaiters = (atomic<bool>)0x0;
      UNLOCK();
      UE::ParkingLot::WakeAll(&this->ConditionVariable);
    }
  }
  LOCK();
  pFVar1 = &this->Mutex;
  aVar2 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->Mutex);
  }
  return;
}

// MountCacheStorage @ 1445686c0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
Experimental::FCacheStorageMetaData::MountCacheStorage
          (FCacheStorageMetaData *this,FString *__return_storage_ptr__)

{
  FMutex *this_00;
  int *piVar1;
  atomic<unsigned_char> aVar2;
  code *pcVar3;
  bool bVar4;
  ForAnyElementType _Src;
  bool bVar5;
  char cVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  ForAnyElementType *pFVar9;
  longlong lVar10;
  bool bVar11;
  ForAnyElementType local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  int local_40;
  int iStack_3c;
  ForAnyElementType local_38;
  undefined8 local_30;
  
  this_00 = &this->Mutex;
  bVar4 = true;
  bVar5 = false;
  LOCK();
  bVar11 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar11) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar11) {
    UE::FMutex::LockSlow(this_00);
  }
  if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&`public:_class_FString___cdecl_Experimental::FCacheStorageMetaData::MountCacheStorage(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
  }
  piVar1 = &this->MountRefCount;
  if (this->CacheStorageState == Deleted) {
    if ((*piVar1 != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("MountRefCount == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IndexedCacheStorage\\Private\\IndexedCacheStorageManager.cpp"
                           ,0xcb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar3)();
      return pFVar7;
    }
    if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`public:_class_FString___cdecl_Experimental::FCacheStorageMetaData::MountCacheStorage(void)___ptr64'
                  ::__l31::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    (**(code **)((longlong)::Instance + 0x30))(&::Instance,&local_58,this);
    if (this->CacheStorageState == Mounted) {
      if ((*piVar1 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("MountRefCount > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IndexedCacheStorage\\Private\\IndexedCacheStorageManager.cpp"
                             ,0xd3,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar3)();
        return pFVar7;
      }
      if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
        UE::Logging::Private::BasicLog<4>
                  (&`public:_class_FString___cdecl_Experimental::FCacheStorageMetaData::MountCacheStorage(void)___ptr64'
                    ::__l59::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
      }
      *piVar1 = *piVar1 + 1;
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_58.Data;
      (__return_storage_ptr__->Data).ArrayNum = (int)local_50;
      (__return_storage_ptr__->Data).ArrayMax = local_50._4_4_;
      local_50 = 0;
      local_58.Data = (FScriptContainerElement *)0x0;
    }
    else {
      if ((*piVar1 != 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("MountRefCount == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IndexedCacheStorage\\Private\\IndexedCacheStorageManager.cpp"
                              ,0xd9,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar3)();
        return pFVar7;
      }
      if ((this->CacheStorageState != Created) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("CacheStorageState == ECacheStorageState::Created",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IndexedCacheStorage\\Private\\IndexedCacheStorageManager.cpp"
                              ,0xda,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar3)();
        return pFVar7;
      }
      if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
        UE::Logging::Private::BasicLog<4>
                  (&`public:_class_FString___cdecl_Experimental::FCacheStorageMetaData::MountCacheStorage(void)___ptr64'
                    ::__l91::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
      }
      cVar6 = (**(code **)((longlong)::Instance + 0x38))(&::Instance,&local_58,this->CacheIndex);
      if ((this->MountRefCount != 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("MountRefCount == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IndexedCacheStorage\\Private\\IndexedCacheStorageManager.cpp"
                              ,0xdf,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar3)();
        return pFVar7;
      }
      if (cVar6 == '\0') {
        this->CacheStorageState = Created;
        if (1 < (byte)LogIndexedCacheStorageManager._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FString___cdecl_Experimental::FCacheStorageMetaData::MountCacheStorage(void)___ptr64'
                      ::L::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
        }
      }
      else {
        this->CacheStorageState = Mounted;
        this->MountRefCount = 1;
        if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
          UE::Logging::Private::BasicLog<4>
                    (&`public:_class_FString___cdecl_Experimental::FCacheStorageMetaData::MountCacheStorage(void)___ptr64'
                      ::__l119::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
        }
      }
      if ((this->ConditionVariable).bHasWaiters != (atomic<bool>)0x0) {
        LOCK();
        (this->ConditionVariable).bHasWaiters = (atomic<bool>)0x0;
        UNLOCK();
        UE::ParkingLot::WakeAll(&this->ConditionVariable);
      }
      _Src.Data = local_58.Data;
      FVar8.Data = (FScriptContainerElement *)0x0;
      if (cVar6 == '\0') {
        local_30 = 0;
        pFVar9 = &local_38;
        bVar4 = false;
        bVar5 = true;
      }
      else {
        lVar10 = (longlong)(int)local_50;
        local_48.Data = (FScriptContainerElement *)0x0;
        local_40 = (int)local_50;
        if ((int)local_50 == 0) {
          iStack_3c = 0;
          pFVar9 = &local_48;
          FVar8.Data = (FScriptContainerElement *)0x0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(int)local_50,0,&local_48,(int)local_50,&iStack_3c);
          memcpy(local_48.Data,_Src.Data,lVar10 * 2);
          pFVar9 = &local_48;
          FVar8.Data = local_48.Data;
        }
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar8.Data;
      pFVar9->Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = *(int *)&pFVar9[1].Data;
      (__return_storage_ptr__->Data).ArrayMax = *(int *)((longlong)&pFVar9[1].Data + 4);
      pFVar9[1].Data = (FScriptContainerElement *)0x0;
      if ((bVar5) && (local_38.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data);
      }
      if ((bVar4) && (local_48.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_48.Data);
      }
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
    }
  }
  LOCK();
  aVar2 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(this_00);
  }
  return __return_storage_ptr__;
}

// UnmountCacheStorage @ 144568f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Experimental::FCacheStorageMetaData::UnmountCacheStorage(FCacheStorageMetaData *this)

{
  FMutex *this_00;
  FConditionVariable *pFVar1;
  atomic<unsigned_char> aVar2;
  ECacheStorageState EVar3;
  code *pcVar4;
  wchar_t *pwVar5;
  bool bVar6;
  void *local_28;
  undefined8 local_20;
  FString local_18;
  
  this_00 = &this->Mutex;
  LOCK();
  bVar6 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    UE::FMutex::LockSlow(this_00);
  }
  if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&`public:_void___cdecl_Experimental::FCacheStorageMetaData::UnmountCacheStorage(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
  }
  EVar3 = this->CacheStorageState;
  if ((EVar3 == Deleted) || (EVar3 == Created)) {
    if ((this->MountRefCount != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("MountRefCount == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IndexedCacheStorage\\Private\\IndexedCacheStorageManager.cpp"
                           ,0xfa,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`public:_void___cdecl_Experimental::FCacheStorageMetaData::UnmountCacheStorage(void)___ptr64'
                  ::__l31::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
    }
  }
  else {
    if ((EVar3 != Mounted) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CacheStorageState == ECacheStorageState::Mounted",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IndexedCacheStorage\\Private\\IndexedCacheStorageManager.cpp"
                           ,0xff,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((this->MountRefCount < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("MountRefCount > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IndexedCacheStorage\\Private\\IndexedCacheStorageManager.cpp"
                           ,0x100,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (this->MountRefCount < 2) {
      local_28 = (void *)0x0;
      local_20 = 0;
      (**(code **)((longlong)::Instance + 0x30))(&::Instance,&local_28,this);
      if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
        UE::Logging::Private::BasicLog<4>
                  (&`public:_void___cdecl_Experimental::FCacheStorageMetaData::UnmountCacheStorage(void)___ptr64'
                    ::__l84::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
      }
      pcVar4 = *(code **)((longlong)::Instance + 0x40);
      if ((this->MountName).Data.ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(this->MountName).Data.AllocatorInstance.Data;
      }
      ::FString::FString(&local_18,pwVar5);
      (*pcVar4)(&::Instance,&local_18);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      this->CacheStorageState = Created;
      if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
        UE::Logging::Private::BasicLog<4>
                  (&`public:_void___cdecl_Experimental::FCacheStorageMetaData::UnmountCacheStorage(void)___ptr64'
                    ::__l102::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
      }
      if ((this->MountRefCount != 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("MountRefCount == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IndexedCacheStorage\\Private\\IndexedCacheStorageManager.cpp"
                             ,0x10f,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this->MountRefCount = 0;
      pFVar1 = &this->ConditionVariable;
      if (pFVar1->bHasWaiters != (atomic<bool>)0x0) {
        LOCK();
        pFVar1->bHasWaiters = (atomic<bool>)0x0;
        UNLOCK();
        UE::ParkingLot::WakeAll(pFVar1);
      }
      if (local_28 != (void *)0x0) {
        FMemory::Free(local_28);
      }
    }
    else {
      this->MountRefCount = this->MountRefCount + -1;
      if (3 < (byte)LogIndexedCacheStorageManager._0_1_) {
        UE::Logging::Private::BasicLog<4>
                  (&`public:_void___cdecl_Experimental::FCacheStorageMetaData::UnmountCacheStorage(void)___ptr64'
                    ::__l66::LOG_Static,(FLogCategoryBase *)&LogIndexedCacheStorageManager);
      }
    }
  }
  LOCK();
  aVar2 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(this_00);
  }
  return;
}

// WaitForPredicateWhileLocked @ 144569280

void __thiscall
Experimental::FCacheStorageMetaData::WaitForPredicateWhileLocked
          (FCacheStorageMetaData *this,TFunction<bool___cdecl(void)> *param_1)

{
  FMutex *this_00;
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  atomic<unsigned_char> *local_res10;
  FConditionVariable *local_res18 [2];
  FWaitState local_38;
  
  while( true ) {
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar1 = *(code **)param_1;
    plVar4 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar4 = (longlong *)&param_1->field_0x10;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    cVar2 = (*pcVar1)(uVar3);
    if (cVar2 != '\0') break;
    local_res18[0] = &this->ConditionVariable;
    this_00 = &this->Mutex;
    local_res10 = &this_00->State;
    UE::ParkingLot::Private::Wait
              (&local_38,local_res18[0],
               UE::TFunctionWithContext<bool___cdecl(void)>::
               Call<_UE::FConditionVariable::Wait<UE::FMutex>_::__l2::<lambda_1>_>,local_res18,
               UE::TFunctionWithContext<void___cdecl(void)>::
               Call<_UE::FConditionVariable::Wait<UE::FMutex>_::__l2::<lambda_2>_>,&local_res10);
    LOCK();
    bVar5 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar5) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar5) {
      UE::FMutex::LockSlow(this_00);
    }
  }
  return;
}

