// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 27

// FAsyncArchive @ 141ed2110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FAsyncArchive * __thiscall
FAsyncArchive::FAsyncArchive
          (FAsyncArchive *this,FPackagePath *param_1,FLinkerLoad *param_2,
          TFunction<void___cdecl(void)> *param_3)

{
  FPackagePath *this_00;
  TFunction<void___cdecl(bool,IAsyncReadRequest_*)> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  TUniquePtr<IAsyncReadFileHandle,TDefaultDelete<IAsyncReadFileHandle>_> TVar10;
  bool bVar11;
  wchar_t *pwVar12;
  IPackageResourceManager *pIVar13;
  FAsyncArchive *pFVar14;
  IAsyncReadRequest *pIVar15;
  longlong *plVar16;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined8 local_130;
  double local_128;
  FScriptContainerElement *local_120;
  FString local_118;
  FString local_108;
  FString local_f8;
  FOpenAsyncPackageResult local_e8;
  LARGE_INTEGER local_d8;
  LARGE_INTEGER local_d0;
  LARGE_INTEGER local_c8;
  FString local_c0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->bNeedsEngineVersionChecks = true;
  this->Handle = (IAsyncReadFileHandle *)0x0;
  this_00 = &this->PackagePath;
  this->SizeRequestPtr = (IAsyncReadRequest *)0x0;
  *(undefined ***)this = &___7FAsyncArchive__6B_;
  pTVar1 = &this->ReadCallbackFunction;
  this->LoadError = Unknown;
  this->bCookedForEDLInEditor = false;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ReadCallbackFunction).field_0x28 = 0;
  (this_00->PackageName).ComparisonIndex = 0;
  (this_00->PackageName).Number = 0;
  this->EditorPrecacheRequestPtr = (IAsyncReadRequest *)0x0;
  this->SummaryRequestPtr = (IAsyncReadRequest *)0x0;
  this->SummaryPrecacheRequestPtr = (IAsyncReadRequest *)0x0;
  this->ReadRequestPtr = (IAsyncReadRequest *)0x0;
  this->CanceledReadRequestPtr = (IAsyncReadRequest *)0x0;
  this->PrecacheBuffer = (uchar *)0x0;
  this->FileSize = -1;
  this->CurrentPos = 0;
  this->PrecacheStartPos = 0;
  this->PrecacheEndPos = 0;
  this->ReadRequestOffset = 0;
  this->ReadRequestSize = 0;
  this->HeaderSize = 0;
  this->HeaderSizeWhenReadingExportsFromSplitFile = 0;
  this->LoadPhase = WaitingForSize;
  (this->PackagePath).HeaderExtension = Unspecified;
  this_00->PackageName = param_1->PackageName;
  (this->PackagePath).HeaderExtension = param_1->HeaderExtension;
  QueryPerformanceCounter(&local_d8);
  dVar4 = (double)local_d8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->SummaryReadTime = 0.0;
  this->ExportReadTime = 0.0;
  this->OpenTime = dVar4 + __real_4170000000000000;
  *(undefined8 *)&this->SummaryReadyCallback = *(undefined8 *)param_3;
  *(undefined8 *)&(this->SummaryReadyCallback).field_0x28 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&param_3->field_0x28 = 0;
  uVar5 = *(undefined4 *)&param_3->field_0x14;
  uVar6 = *(undefined4 *)&param_3->field_0x18;
  uVar7 = *(undefined4 *)&param_3->field_0x1c;
  *(undefined4 *)&(this->SummaryReadyCallback).field_0x10 = *(undefined4 *)&param_3->field_0x10;
  *(undefined4 *)&(this->SummaryReadyCallback).field_0x14 = uVar5;
  *(undefined4 *)&(this->SummaryReadyCallback).field_0x18 = uVar6;
  *(undefined4 *)&(this->SummaryReadyCallback).field_0x1c = uVar7;
  *(undefined8 *)&(this->SummaryReadyCallback).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  if (*(longlong *)&this->SummaryReadyCallback != 0) {
    *(undefined8 *)param_3 = 0;
  }
  lVar2 = *(longlong *)this;
  *(undefined8 *)&this->ReadCallbackFunctionForLinkerLoad = 0;
  *(undefined8 *)&(this->ReadCallbackFunctionForLinkerLoad).field_0x28 = 0;
  this->OwnerLinker = param_2;
  (**(code **)(lVar2 + 200))(this,1);
  if ((byte)LogAsyncArchive._0_1_ < 6) goto LAB_141ed2465;
  if (this_00->PackageName == (FName)0x0) {
LAB_141ed2393:
    ::FString::FString(&local_108,L"");
  }
  else {
    ::FName::ToString(&this_00->PackageName,&local_f8);
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Data.ArrayNum = 0;
    local_118.Data.ArrayMax = 0;
    pwVar12 = ::LexToString((this->PackagePath).HeaderExtension);
    ::FString::FString(&local_c0,pwVar12);
    bVar11 = FPackageName::TryConvertLongPackageNameToFilename(&local_f8,&local_118,&local_c0);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (!bVar11) {
      if (1 < (byte)LogPackageName._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPackageName);
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      goto LAB_141ed2393;
    }
    local_108.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
    local_108.Data.ArrayNum = local_118.Data.ArrayNum;
    local_108.Data.ArrayMax = local_118.Data.ArrayMax;
    local_118.Data.ArrayNum = 0;
    local_118.Data.ArrayMax = 0;
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
       ::__l5::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__),
     `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
     ::__l5::_thread_safe_static_guard_0__ == -1)) {
    QueryPerformanceCounter(&local_d0);
    `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
    ::__l5::GlobalStartTime =
         (double)local_d0.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
    ;
    _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                         ::__l5::_thread_safe_static_guard_0__);
  }
  QueryPerformanceCounter(&local_c8);
  if (6 < (byte)LogAsyncArchive._0_1_) {
    local_120 = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      local_120 = local_108.Data.AllocatorInstance.Data;
    }
    local_128 = (double)(float)((((double)local_c8.QuadPart * FGenericPlatformTime::SecondsPerCycle
                                 + __real_4170000000000000) -
                                `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                                ::__l5::GlobalStartTime) * __real_408f400000000000);
    local_130 = 0;
    local_138 = 0;
    FGenericPlatformMisc::LowLevelOutputDebugStringf
              (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
LAB_141ed2465:
  pIVar13 = IPackageResourceManager::Get();
  local_138 = local_138 & 0xffffffffffffff00;
  (**(code **)((longlong)*pIVar13 + 0x30))
            (pIVar13,&local_e8,this_00,FBulkDataCookedIndex::Default.Value);
  TVar10.Ptr = local_e8.Handle.Ptr;
  local_e8.Handle.Ptr = (IAsyncReadFileHandle *)0x0;
  this->Handle = TVar10.Ptr;
  if ((TVar10.Ptr == (IAsyncReadFileHandle *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Handle",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0x1e33,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    pFVar14 = (FAsyncArchive *)(*pcVar3)();
    return pFVar14;
  }
  if (local_e8.Format != Binary) {
    FArchiveState::SetError((FArchiveState *)this);
    this->LoadError = UnsupportedFormat;
  }
  this->bNeedsEngineVersionChecks = local_e8.bNeedsEngineVersionChecks;
  local_a8 = *(longlong *)pTVar1;
  uVar9 = *(undefined8 *)&(this->ReadCallbackFunction).field_0x8;
  local_98 = *(longlong *)&(this->ReadCallbackFunction).field_0x10;
  uStack_90 = *(undefined8 *)&(this->ReadCallbackFunction).field_0x18;
  uVar8 = *(undefined8 *)&(this->ReadCallbackFunction).field_0x20;
  plStack_80 = *(longlong **)&(this->ReadCallbackFunction).field_0x28;
  *(code **)pTVar1 =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FAsyncArchive::FAsyncArchive'::__l2::<lambda_1>,void,bool,IAsyncReadRequest_*>
       ::Call;
  *(undefined8 *)&(this->ReadCallbackFunction).field_0x8 = uStack_a0;
  *(undefined4 *)&(this->ReadCallbackFunction).field_0x10 = 0x507f0288;
  *(undefined4 *)&(this->ReadCallbackFunction).field_0x14 = 1;
  *(FAsyncArchive **)&(this->ReadCallbackFunction).field_0x18 = this;
  *(undefined4 *)&(this->ReadCallbackFunction).field_0x20 = (undefined4)local_88;
  *(undefined4 *)&(this->ReadCallbackFunction).field_0x24 = local_88._4_4_;
  *(undefined4 *)&(this->ReadCallbackFunction).field_0x28 = 0;
  *(undefined4 *)&(this->ReadCallbackFunction).field_0x2c = 0;
  local_88 = uVar8;
  uStack_a0 = uVar9;
  if (local_a8 != 0) {
    plVar16 = &local_98;
    if (plStack_80 != (longlong *)0x0) {
      plVar16 = plStack_80;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  if (GEventDrivenLoaderEnabled != false) {
    if ((*(longlong *)&this->SummaryReadyCallback == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("SummaryReadyCallback",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                            ,0x1e42,L""), bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar14 = (FAsyncArchive *)(*pcVar3)();
      return pFVar14;
    }
    local_78 = *(longlong *)&this->ReadCallbackFunctionForLinkerLoad;
    uVar9 = *(undefined8 *)&(this->ReadCallbackFunctionForLinkerLoad).field_0x8;
    local_68 = *(longlong *)&(this->ReadCallbackFunctionForLinkerLoad).field_0x10;
    uStack_60 = *(undefined8 *)&(this->ReadCallbackFunctionForLinkerLoad).field_0x18;
    uVar8 = *(undefined8 *)&(this->ReadCallbackFunctionForLinkerLoad).field_0x20;
    plStack_50 = *(longlong **)&(this->ReadCallbackFunctionForLinkerLoad).field_0x28;
    *(code **)&this->ReadCallbackFunctionForLinkerLoad =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FAsyncArchive::FAsyncArchive'::__l15::<lambda_2>,void,bool,IAsyncReadRequest_*>
         ::Call;
    *(undefined8 *)&(this->ReadCallbackFunctionForLinkerLoad).field_0x8 = uStack_70;
    *(undefined4 *)&(this->ReadCallbackFunctionForLinkerLoad).field_0x10 = 0x507f02a8;
    *(undefined4 *)&(this->ReadCallbackFunctionForLinkerLoad).field_0x14 = 1;
    *(FAsyncArchive **)&(this->ReadCallbackFunctionForLinkerLoad).field_0x18 = this;
    *(undefined4 *)&(this->ReadCallbackFunctionForLinkerLoad).field_0x20 = (undefined4)local_58;
    *(undefined4 *)&(this->ReadCallbackFunctionForLinkerLoad).field_0x24 = local_58._4_4_;
    *(undefined4 *)&(this->ReadCallbackFunctionForLinkerLoad).field_0x28 = 0;
    *(undefined4 *)&(this->ReadCallbackFunctionForLinkerLoad).field_0x2c = 0;
    uStack_70 = uVar9;
    local_58 = uVar8;
    if (local_78 != 0) {
      plVar16 = &local_68;
      if (plStack_50 != (longlong *)0x0) {
        plVar16 = plStack_50;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
  }
  pIVar15 = (IAsyncReadRequest *)(**(code **)((longlong)*this->Handle + 8))(this->Handle,pTVar1);
  this->SizeRequestPtr = pIVar15;
  FOpenAsyncPackageResult::~FOpenAsyncPackageResult(&local_e8);
  return this;
}

// ~FAsyncArchive @ 141ed5140

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncArchive::~FAsyncArchive(FAsyncArchive *this)

{
  FLinkerLoad *pFVar1;
  IAsyncReadFileHandle *pIVar2;
  longlong *plVar3;
  longlong *plVar4;
  LARGE_INTEGER local_res8;
  FString local_28;
  FString local_18;
  
  *(undefined ***)this = &___7FAsyncArchive__6B_;
  pFVar1 = this->OwnerLinker;
  if ((pFVar1 != (FLinkerLoad *)0x0) &&
     (((FAsyncArchive *)pFVar1->Loader != this || (pFVar1->bIsDestroyingLoader == false)))) {
    FLinkerLoad::GetArchiveName((FLinkerLoad *)&pFVar1->_padding_,&local_18);
    ::FName::ToString(&(this->PackagePath).PackageName,&local_28);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  FlushCache(this);
  pIVar2 = this->Handle;
  if (pIVar2 != (IAsyncReadFileHandle *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
    this->Handle = (IAsyncReadFileHandle *)0x0;
  }
  if (5 < (byte)LogAsyncArchive._0_1_) {
    FPackagePath::GetLocalFullPath(&this->PackagePath,&local_28);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
         ::__l5::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__),
       `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
       ::__l5::_thread_safe_static_guard_0__ == -1)) {
      QueryPerformanceCounter(&local_res8);
      `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
      ::__l5::GlobalStartTime =
           (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
      _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
    }
    QueryPerformanceCounter(&local_res8);
    if (6 < (byte)LogAsyncArchive._0_1_) {
      FGenericPlatformMisc::LowLevelOutputDebugStringf
                (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (*(longlong *)&this->ReadCallbackFunctionForLinkerLoad != 0) {
    plVar3 = *(longlong **)&(this->ReadCallbackFunctionForLinkerLoad).field_0x28;
    plVar4 = (longlong *)&(this->ReadCallbackFunctionForLinkerLoad).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&this->SummaryReadyCallback != 0) {
    plVar3 = *(longlong **)&(this->SummaryReadyCallback).field_0x28;
    plVar4 = (longlong *)&(this->SummaryReadyCallback).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&this->ReadCallbackFunction != 0) {
    plVar3 = *(longlong **)&(this->ReadCallbackFunction).field_0x28;
    plVar4 = (longlong *)&(this->ReadCallbackFunction).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  FArchive::~FArchive((FArchive *)this);
  return;
}

// CancelRead @ 141edee60

void __thiscall FAsyncArchive::CancelRead(FAsyncArchive *this)

{
  IAsyncReadRequest *pIVar1;
  
  pIVar1 = this->ReadRequestPtr;
  if (pIVar1 != (IAsyncReadRequest *)0x0) {
    if (pIVar1->bCanceled == false) {
      pIVar1->bCanceled = true;
      pIVar1->bDataIsReady = true;
      if (pIVar1->bCompleteAndCallbackCalled == false) {
        (**(code **)(*(longlong *)pIVar1 + 0x18))();
      }
    }
    CompleteCancel(this);
    this->CanceledReadRequestPtr = this->ReadRequestPtr;
    this->ReadRequestPtr = (IAsyncReadRequest *)0x0;
  }
  this->ReadRequestSize = 0;
  this->ReadRequestOffset = 0;
  return;
}

// Close @ 141ee0b30

bool __thiscall FAsyncArchive::Close(FAsyncArchive *this)

{
  FlushCache(this);
  return (bool)((byte)~this->field_0x29 >> 1 & 1);
}

// CompleteCancel @ 141ee25f0

void __thiscall FAsyncArchive::CompleteCancel(FAsyncArchive *this)

{
  IAsyncReadRequest *pIVar1;
  double dVar2;
  float fVar3;
  LARGE_INTEGER local_res8 [4];
  FString local_38 [3];
  
  if (this->CanceledReadRequestPtr != (IAsyncReadRequest *)0x0) {
    QueryPerformanceCounter(local_res8);
    pIVar1 = this->CanceledReadRequestPtr;
    fVar3 = 0.0;
    dVar2 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if (pIVar1->bCompleteAndCallbackCalled == false) {
      (**(code **)(*(longlong *)pIVar1 + 0x10))(pIVar1,0);
    }
    pIVar1 = this->CanceledReadRequestPtr;
    if (pIVar1 != (IAsyncReadRequest *)0x0) {
      (*(code *)**(undefined8 **)pIVar1)(pIVar1,1);
    }
    this->CanceledReadRequestPtr = (IAsyncReadRequest *)0x0;
    if (5 < (byte)LogAsyncArchive._0_1_) {
      FPackagePath::GetLocalFullPath(&this->PackagePath,local_38);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
           ::__l5::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                               ::__l5::_thread_safe_static_guard_0__),
         `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
         ::__l5::_thread_safe_static_guard_0__ == -1)) {
        QueryPerformanceCounter(local_res8);
        `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
        ::__l5::GlobalStartTime =
             (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000;
        _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__);
      }
      QueryPerformanceCounter(local_res8);
      if (dVar2 != 0.0) {
        fVar3 = (float)((((double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
                         __real_4170000000000000) - dVar2) * __real_408f400000000000);
      }
      if ((6 < (byte)LogAsyncArchive._0_1_) || (__real_3f800000 <= fVar3)) {
        FGenericPlatformMisc::LowLevelOutputDebugStringf
                  (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
      }
      if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// CompleteRead @ 141ee2b50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall FAsyncArchive::CompleteRead(FAsyncArchive *this)

{
  FName FVar1;
  IAsyncReadFileHandle *pIVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  char cVar7;
  EAsyncIOPriorityAndFlags EVar8;
  uchar *puVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_FAsyncArchiveMem> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  IAsyncReadRequest *pIVar12;
  uchar auVar13 [8];
  FName local_res8;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  FName local_78;
  FString local_70;
  FStatMessage local_60 [3];
  
  QueryPerformanceCounter(&local_res20);
  if (((this->LoadPhase == WaitingForSize) || (this->LoadPhase == WaitingForSummary)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("LoadPhase != ELoadPhase::WaitingForSize && LoadPhase != ELoadPhase::WaitingForSummary"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x1f67,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->ReadRequestPtr == (IAsyncReadRequest *)0x0) ||
      (this->ReadRequestPtr->bCompleteAndCallbackCalled == false)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReadRequestPtr && ReadRequestPtr->PollCompletion()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x1f68,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (this->PrecacheBuffer != (uchar *)0x0) {
    FlushPrecacheBlock(this);
  }
  if ((this->field_0x29 & 2) == 0) {
    puVar9 = IAsyncReadRequest::GetReadResults(this->ReadRequestPtr);
    if (puVar9 == (uchar *)0x0) {
      FArchiveState::SetError((FArchiveState *)this);
      this->LoadError = CorruptData;
    }
    else {
      lVar3 = this->ReadRequestOffset;
      this->PrecacheBuffer = puVar9;
      this->PrecacheStartPos = lVar3;
      this->PrecacheEndPos = this->ReadRequestSize + lVar3;
      if (((this->ReadRequestSize < 1) || (lVar3 < 0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ReadRequestSize > 0 && PrecacheStartPos >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                             ,0x1f7a,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      auVar13 = (uchar  [8])(this->PrecacheEndPos - this->PrecacheStartPos);
      if (auVar13 != (uchar  [8])0x0) {
        FVar11 = StatPtr_STAT_FAsyncArchiveMem;
        if (StatPtr_STAT_FAsyncArchiveMem == (FThreadSafeStaticStat<FStat_STAT_FAsyncArchiveMem>)0x0
           ) {
          pFVar10 = ::FName::FName(&local_78,"STAT_FAsyncArchiveMem");
          FVar11 = (FThreadSafeStaticStat<FStat_STAT_FAsyncArchiveMem>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncArchiveMem,*pFVar10,
                              L"FAsyncArchive Buffers","STATGROUP_Memory","STATCAT_Advanced",
                              L"Memory",true,false,ST_int64,false,false,MCR_Physical);
        }
        FVar1 = *(FName *)FVar11;
        local_res8 = FVar1;
        if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          this_00 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_00 == (FThreadStats *)0x0) {
            this_01 = FThreadStatsPool::Get();
            this_00 = FThreadStatsPool::GetFromPool(this_01);
          }
          local_60[0].NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
          local_res8 = FVar1;
          local_60[0].StatData.Pad = auVar13;
          local_60[0].NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(this_00,local_60);
          FStatsTrace::Add(&local_res8,(long64)auVar13);
          if (this_00->ScopeCount == 0) {
            FThreadStats::Flush(this_00,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
      if ((this->LoadPhase != ProcessingExports) &&
         (cVar7 = (**(code **)((longlong)*this->Handle + 0x18))(), cVar7 != '\0')) {
        CompleteCancel(this);
        pIVar2 = this->Handle;
        pcVar4 = *(code **)((longlong)*pIVar2 + 0x10);
        EVar8 = GetAsyncIOPrecachePriorityAndFlags();
        pIVar12 = (IAsyncReadRequest *)
                  (*pcVar4)(pIVar2,~this->HeaderSizeWhenReadingExportsFromSplitFile +
                                   this->PrecacheEndPos,1,EVar8,0,0);
        this->CanceledReadRequestPtr = pIVar12;
      }
    }
  }
  pIVar12 = this->ReadRequestPtr;
  if (pIVar12 != (IAsyncReadRequest *)0x0) {
    (*(code *)**(undefined8 **)pIVar12)(pIVar12,1);
  }
  lVar3 = this->ReadRequestSize;
  this->ReadRequestPtr = (IAsyncReadRequest *)0x0;
  if (5 < (byte)LogAsyncArchive._0_1_) {
    FPackagePath::GetLocalFullPath(&this->PackagePath,&local_70);
    dVar5 = __real_4170000000000000;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
         ::__l5::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__),
       `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
       ::__l5::_thread_safe_static_guard_0__ == -1)) {
      QueryPerformanceCounter(&local_res10);
      `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
      ::__l5::GlobalStartTime =
           (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5;
      _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
    }
    QueryPerformanceCounter(&local_res18);
    if (6 < (byte)LogAsyncArchive._0_1_) {
      if (lVar3 == 0x7fffffffffffffff) {
        TotalSize(this);
      }
      FGenericPlatformMisc::LowLevelOutputDebugStringf
                (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  this->ReadRequestOffset = 0;
  this->ReadRequestSize = 0;
  return;
}

// DiscardInlineBufferAndUpdateCurrentPos @ 141eea1b0

void __thiscall FAsyncArchive::DiscardInlineBufferAndUpdateCurrentPos(FAsyncArchive *this)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)&this->field_0x8;
  this->CurrentPos = this->CurrentPos + (*plVar1 - plVar1[2]);
  *plVar1 = 0;
  plVar1[1] = 0;
  plVar1[2] = 0;
  return;
}

// EndReadingHeader @ 141eebf70

void __thiscall FAsyncArchive::EndReadingHeader(FAsyncArchive *this)

{
  code *pcVar1;
  bool bVar2;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10 [3];
  FString local_18;
  
  if (5 < (byte)LogAsyncArchive._0_1_) {
    FPackagePath::GetLocalFullPath(&this->PackagePath,&local_18);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
         ::__l5::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__),
       `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
       ::__l5::_thread_safe_static_guard_0__ == -1)) {
      QueryPerformanceCounter(&local_res8);
      `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
      ::__l5::GlobalStartTime =
           (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
      _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
    }
    QueryPerformanceCounter(local_res10);
    if (6 < (byte)LogAsyncArchive._0_1_) {
      FGenericPlatformMisc::LowLevelOutputDebugStringf
                (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((this->field_0x29 & 2) == 0) {
    if ((this->LoadPhase != WaitingForHeader) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("LoadPhase == ELoadPhase::WaitingForHeader",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x20fe,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this->LoadPhase = WaitingForFirstExport;
    FlushPrecacheBlock(this);
    return;
  }
  return;
}

// FirstExportStarting @ 141ef4eb0

void __thiscall FAsyncArchive::FirstExportStarting(FAsyncArchive *this)

{
  longlong lVar1;
  IAsyncReadFileHandle *pIVar2;
  code *pcVar3;
  TUniquePtr<IAsyncReadFileHandle,TDefaultDelete<IAsyncReadFileHandle>_> TVar4;
  ELoaderType EVar5;
  bool bVar6;
  long64 lVar7;
  IPackageResourceManager *pIVar8;
  IAsyncReadRequest *pIVar9;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  FString local_28;
  FOpenAsyncPackageResult local_18;
  
  QueryPerformanceCounter(&local_res8);
  this->ExportReadTime =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  if (5 < (byte)LogAsyncArchive._0_1_) {
    FPackagePath::GetLocalFullPath(&this->PackagePath,&local_28);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
         ::__l5::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__),
       `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
       ::__l5::_thread_safe_static_guard_0__ == -1)) {
      QueryPerformanceCounter(&local_res10);
      `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
      ::__l5::GlobalStartTime =
           (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
      _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
    }
    QueryPerformanceCounter(&local_res18);
    if (6 < (byte)LogAsyncArchive._0_1_) {
      FGenericPlatformMisc::LowLevelOutputDebugStringf
                (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  this->LoadPhase = ProcessingExports;
  if ((((this->bCookedForEDLInEditor != false) || (EVar5 = (*GetLoaderType)(), EVar5 == ZenLoader))
      && (this->HeaderSizeWhenReadingExportsFromSplitFile == 0)) &&
     ((lVar1 = this->HeaderSize, lVar1 != 0 && (lVar7 = TotalSize(this), lVar7 == lVar1)))) {
    FlushCache(this);
    pIVar2 = this->Handle;
    if (pIVar2 != (IAsyncReadFileHandle *)0x0) {
      (**(code **)*pIVar2)(pIVar2,1);
      this->Handle = (IAsyncReadFileHandle *)0x0;
    }
    this->HeaderSizeWhenReadingExportsFromSplitFile = this->HeaderSize;
    pIVar8 = IPackageResourceManager::Get();
    (**(code **)((longlong)*pIVar8 + 0x30))
              (pIVar8,&local_18,&this->PackagePath,FBulkDataCookedIndex::Default.Value,1);
    TVar4.Ptr = local_18.Handle.Ptr;
    local_18.Handle.Ptr = (IAsyncReadFileHandle *)0x0;
    this->Handle = TVar4.Ptr;
    if ((TVar4.Ptr == (IAsyncReadFileHandle *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Handle",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x2072,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this->SizeRequestPtr != (IAsyncReadRequest *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!SizeRequestPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x2074,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar9 = (IAsyncReadRequest *)(**(code **)((longlong)*this->Handle + 8))(this->Handle,0);
    this->SizeRequestPtr = pIVar9;
    if (pIVar9->bCompleteAndCallbackCalled != false) {
      TotalSize(this);
    }
    FOpenAsyncPackageResult::~FOpenAsyncPackageResult(&local_18);
  }
  return;
}

// FlushCache @ 141ef51a0

void __thiscall FAsyncArchive::FlushCache(FAsyncArchive *this)

{
  IAsyncReadRequest *pIVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  LARGE_INTEGER local_res8;
  FString local_48 [4];
  
  dVar4 = __real_4170000000000000;
  dVar3 = __real_408f400000000000;
  if (((this->PrecacheEndPos == 0) && (this->PrecacheBuffer == (uchar *)0x0)) &&
     (this->ReadRequestPtr == (IAsyncReadRequest *)0x0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (5 < (byte)LogAsyncArchive._0_1_) {
    FPackagePath::GetLocalFullPath(&this->PackagePath,local_48);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
         ::__l5::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__),
       `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
       ::__l5::_thread_safe_static_guard_0__ == -1)) {
      QueryPerformanceCounter(&local_res8);
      `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
      ::__l5::GlobalStartTime =
           (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4;
      _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
    }
    QueryPerformanceCounter(&local_res8);
    if (6 < (byte)LogAsyncArchive._0_1_) {
      FGenericPlatformMisc::LowLevelOutputDebugStringf
                (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
    }
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
  }
  WaitForIntialPhases(this,0.0);
  WaitRead(this,0.0);
  CompleteCancel(this);
  FlushPrecacheBlock(this);
  pIVar1 = this->EditorPrecacheRequestPtr;
  if (pIVar1 != (IAsyncReadRequest *)0x0) {
    if (pIVar1->bCompleteAndCallbackCalled == false) {
      (**(code **)(*(longlong *)pIVar1 + 0x10))(pIVar1,0);
    }
    pIVar1 = this->EditorPrecacheRequestPtr;
    if (pIVar1 != (IAsyncReadRequest *)0x0) {
      (*(code *)**(undefined8 **)pIVar1)(pIVar1,1);
    }
    this->EditorPrecacheRequestPtr = (IAsyncReadRequest *)0x0;
  }
  if (this->Handle != (IAsyncReadFileHandle *)0x0) {
    (**(code **)((longlong)*this->Handle + 0x20))();
  }
  if ((5 < (byte)LogAsyncArchive._0_1_) && (bVar2)) {
    QueryPerformanceCounter(&local_res8);
    if ((6 < (byte)LogAsyncArchive._0_1_) ||
       (__real_42c80000 <=
        (float)((((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4) -
                this->OpenTime) * dVar3))) {
      ::FName::ToString(&(this->PackagePath).PackageName,local_48);
      FGenericPlatformMisc::LowLevelOutputDebugStringf
                (
                L"Flush     Lifeitme %6.2fms   Open->Summary %6.2fms    Summary->Export1 %6.2fms    Export1->Now %6.2fms       %s\r\n"
                );
      if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// FlushPrecacheBlock @ 141ef6530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncArchive::FlushPrecacheBlock(FAsyncArchive *this)

{
  longlong *plVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_FAsyncArchiveMem> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar auVar7 [8];
  FName local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  plVar1 = *(longlong **)&this->field_0x8;
  this->CurrentPos = this->CurrentPos + (*plVar1 - plVar1[2]);
  *plVar1 = 0;
  plVar1[1] = 0;
  plVar1[2] = 0;
  if (this->PrecacheBuffer != (uchar *)0x0) {
    auVar7 = (uchar  [8])(this->PrecacheEndPos - this->PrecacheStartPos);
    if (auVar7 != (uchar  [8])0x0) {
      FVar6 = StatPtr_STAT_FAsyncArchiveMem;
      if (StatPtr_STAT_FAsyncArchiveMem == (FThreadSafeStaticStat<FStat_STAT_FAsyncArchiveMem>)0x0)
      {
        pFVar5 = ::FName::FName(&local_res10,"STAT_FAsyncArchiveMem");
        FVar6 = (FThreadSafeStaticStat<FStat_STAT_FAsyncArchiveMem>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncArchiveMem,*pFVar5,
                           L"FAsyncArchive Buffers","STATGROUP_Memory","STATCAT_Advanced",L"Memory",
                           true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar2 = *(FName *)FVar6;
      local_res8 = FVar2;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_38.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
        local_res8 = FVar2;
        local_38.StatData.Pad = auVar7;
        local_38.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_38);
        FStatsTrace::Add(&local_res8,-(longlong)auVar7);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
    FMemory::Free(this->PrecacheBuffer);
    if (((GEventDrivenLoaderEnabled != false) && ((int)this->LoadPhase < 3)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!GEventDrivenLoaderEnabled || LoadPhase > ELoadPhase::WaitingForHeader",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x1ec9,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->PrecacheBuffer = (uchar *)0x0;
  this->PrecacheStartPos = 0;
  this->PrecacheEndPos = 0;
  return;
}

// GetArchiveName @ 141ef9010

FString * __thiscall
FAsyncArchive::GetArchiveName(FAsyncArchive *this,FString *__return_storage_ptr__)

{
  ::FName::ToString(&(this->PackagePath).PackageName,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// MakeEventDrivenPrecacheRequest @ 141efee00

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

IAsyncReadRequest * __thiscall
FAsyncArchive::MakeEventDrivenPrecacheRequest
          (FAsyncArchive *this,long64 param_1,long64 param_2,
          TFunction<void___cdecl(bool,IAsyncReadRequest_*)> *param_3)

{
  IAsyncReadFileHandle *pIVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TUniquePtr<IAsyncReadFileHandle,TDefaultDelete<IAsyncReadFileHandle>_> TVar6;
  bool bVar7;
  char cVar8;
  EAsyncIOPriorityAndFlags EVar9;
  IAsyncReadRequest *pIVar10;
  IPackageResourceManager *pIVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  LARGE_INTEGER local_res8;
  FString local_138;
  FString local_128;
  FString local_118;
  LARGE_INTEGER local_108;
  LARGE_INTEGER local_100;
  LARGE_INTEGER local_f8;
  LARGE_INTEGER local_f0;
  LARGE_INTEGER local_e8;
  IAsyncReadRequest *local_e0;
  LARGE_INTEGER local_d8;
  LARGE_INTEGER local_d0;
  LARGE_INTEGER local_c8;
  FOpenAsyncPackageResult local_c0 [8];
  
  if ((!GEventDrivenLoaderEnabled) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GEventDrivenLoaderEnabled",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x2080,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    pIVar10 = (IAsyncReadRequest *)(*pcVar2)();
    return pIVar10;
  }
  if (this->LoadPhase == WaitingForFirstExport) {
    this->HeaderSizeWhenReadingExportsFromSplitFile = this->HeaderSize;
    QueryPerformanceCounter(&local_res8);
    dVar5 = __real_4170000000000000;
    dVar3 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    pIVar11 = IPackageResourceManager::Get();
    (**(code **)((longlong)*pIVar11 + 0x30))
              (pIVar11,local_c0,&this->PackagePath,FBulkDataCookedIndex::Default.Value,1);
    TVar6.Ptr = local_c0[0].Handle.Ptr;
    local_c0[0].Handle.Ptr = (IAsyncReadFileHandle *)0x0;
    if ((TVar6.Ptr == (IAsyncReadFileHandle *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewHandle",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x208a,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pIVar10 = (IAsyncReadRequest *)(*pcVar2)();
      return pIVar10;
    }
    fVar14 = __real_3f800000;
    dVar4 = __real_408f400000000000;
    fVar15 = 0.0;
    if (5 < (byte)LogAsyncArchive._0_1_) {
      FPackagePath::GetLocalFullPath(&this->PackagePath,&local_138);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
           ::__l5::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                               ::__l5::_thread_safe_static_guard_0__),
         `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
         ::__l5::_thread_safe_static_guard_0__ == -1)) {
        QueryPerformanceCounter(&local_108);
        `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
        ::__l5::GlobalStartTime =
             (double)local_108.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5;
        _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__);
      }
      QueryPerformanceCounter(&local_100);
      if (dVar3 == 0.0) {
        fVar13 = 0.0;
      }
      else {
        fVar13 = (float)((((double)local_100.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                          dVar5) - dVar3) * dVar4);
      }
      if ((6 < (byte)LogAsyncArchive._0_1_) || (fVar14 <= fVar13)) {
        if (param_2 == 0x7fffffffffffffff) {
          TotalSize(this);
        }
        FGenericPlatformMisc::LowLevelOutputDebugStringf
                  (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
      }
      else if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
    }
    FOpenAsyncPackageResult::~FOpenAsyncPackageResult(local_c0);
    QueryPerformanceCounter(&local_f8);
    dVar3 = (double)local_f8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5;
    if ((param_1 - this->HeaderSizeWhenReadingExportsFromSplitFile < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offset - HeaderSizeWhenReadingExportsFromSplitFile >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x2090,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pIVar10 = (IAsyncReadRequest *)(*pcVar2)();
      return pIVar10;
    }
    cVar8 = (**(code **)((longlong)*TVar6.Ptr + 0x18))(TVar6.Ptr);
    if (cVar8 == '\0') {
      EVar9 = GetAsyncIOPriority();
    }
    else {
      EVar9 = GetAsyncIOPrecachePriorityAndFlags();
    }
    local_e0 = (IAsyncReadRequest *)
               (**(code **)((longlong)*TVar6.Ptr + 0x10))
                         (TVar6.Ptr,param_1 - this->HeaderSizeWhenReadingExportsFromSplitFile,
                          param_2,EVar9,param_3,0);
    FlushCache(this);
    pIVar1 = this->Handle;
    if (pIVar1 != (IAsyncReadFileHandle *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    this->Handle = TVar6.Ptr;
    FirstExportStarting(this);
    if ((this->SizeRequestPtr != (IAsyncReadRequest *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!SizeRequestPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x209f,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pIVar10 = (IAsyncReadRequest *)(*pcVar2)();
      return pIVar10;
    }
    pIVar10 = (IAsyncReadRequest *)(**(code **)((longlong)*this->Handle + 8))(this->Handle,0);
    this->SizeRequestPtr = pIVar10;
    if (pIVar10->bCompleteAndCallbackCalled != false) {
      TotalSize(this);
    }
    if (5 < (byte)LogAsyncArchive._0_1_) {
      FPackagePath::GetLocalFullPath(&this->PackagePath,&local_128);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
           ::__l5::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                               ::__l5::_thread_safe_static_guard_0__),
         `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
         ::__l5::_thread_safe_static_guard_0__ == -1)) {
        QueryPerformanceCounter(&local_f0);
        `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
        ::__l5::GlobalStartTime =
             (double)local_f0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5;
        _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__);
      }
      QueryPerformanceCounter(&local_e8);
      if (dVar3 != 0.0) {
        fVar15 = (float)((((double)local_e8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5
                          ) - dVar3) * dVar4);
      }
      if ((6 < (byte)LogAsyncArchive._0_1_) || (fVar14 <= fVar15)) {
        if (param_2 == 0x7fffffffffffffff) {
          TotalSize(this);
        }
        FGenericPlatformMisc::LowLevelOutputDebugStringf
                  (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    QueryPerformanceCounter(&local_d8);
    dVar5 = __real_4170000000000000;
    dVar3 = (double)local_d8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if ((param_1 - this->HeaderSizeWhenReadingExportsFromSplitFile < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offset - HeaderSizeWhenReadingExportsFromSplitFile >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x20aa,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pIVar10 = (IAsyncReadRequest *)(*pcVar2)();
      return pIVar10;
    }
    if (this->SizeRequestPtr == (IAsyncReadRequest *)0x0) {
      lVar12 = this->FileSize + this->HeaderSizeWhenReadingExportsFromSplitFile;
    }
    else {
      lVar12 = 0x7fffffffffffffff;
    }
    if ((lVar12 < param_1 + param_2) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offset + BytesToRead <= TotalSizeOrMaxInt64IfNotReady()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x20ab,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pIVar10 = (IAsyncReadRequest *)(*pcVar2)();
      return pIVar10;
    }
    cVar8 = (**(code **)((longlong)*this->Handle + 0x18))();
    if (cVar8 == '\0') {
      EVar9 = GetAsyncIOPriority();
    }
    else {
      EVar9 = GetAsyncIOPrecachePriorityAndFlags();
    }
    local_e0 = (IAsyncReadRequest *)
               (**(code **)((longlong)*this->Handle + 0x10))
                         (this->Handle,param_1 - this->HeaderSizeWhenReadingExportsFromSplitFile,
                          param_2,EVar9,param_3,0);
    if (5 < (byte)LogAsyncArchive._0_1_) {
      FPackagePath::GetLocalFullPath(&this->PackagePath,&local_118);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
           ::__l5::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                               ::__l5::_thread_safe_static_guard_0__),
         `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
         ::__l5::_thread_safe_static_guard_0__ == -1)) {
        QueryPerformanceCounter(&local_d0);
        `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
        ::__l5::GlobalStartTime =
             (double)local_d0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5;
        _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__);
      }
      QueryPerformanceCounter(&local_c8);
      if (dVar3 == 0.0) {
        fVar14 = 0.0;
      }
      else {
        fVar14 = (float)((((double)local_c8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5
                          ) - dVar3) * __real_408f400000000000);
      }
      if ((6 < (byte)LogAsyncArchive._0_1_) || (__real_3f800000 <= fVar14)) {
        if (param_2 == 0x7fffffffffffffff) {
          TotalSize(this);
        }
        FGenericPlatformMisc::LowLevelOutputDebugStringf
                  (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
    }
  }
  return local_e0;
}

// Precache @ 141f03860

bool __thiscall FAsyncArchive::Precache(FAsyncArchive *this,long64 param_1,long64 param_2)

{
  ELoadPhase EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  EVar1 = this->LoadPhase;
  if ((EVar1 != WaitingForSize) && (EVar1 != WaitingForSummary)) {
    if ((EVar1 == WaitingForHeader) && ((param_1 != 0 || (this->HeaderSize < param_2)))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RequestOffset == 0 && RequestOffset + RequestSize <= HeaderSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x20dd,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    bVar3 = PrecacheInternal(this,param_1,param_2,true,(IAsyncReadRequest *)0x0);
    return bVar3;
  }
  return false;
}

// PrecacheForEvent @ 141f03930

bool __thiscall
FAsyncArchive::PrecacheForEvent
          (FAsyncArchive *this,IAsyncReadRequest *param_1,long64 param_2,long64 param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if ((int)this->LoadPhase < 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("int32(LoadPhase) > int32(ELoadPhase::WaitingForHeader)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x20e4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = PrecacheInternal(this,param_2,param_3,false,param_1);
  return bVar2;
}

// PrecacheInternal @ 141f039b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

bool __thiscall
FAsyncArchive::PrecacheInternal
          (FAsyncArchive *this,long64 param_1,long64 param_2,bool param_3,IAsyncReadRequest *param_4
          )

{
  long64 *plVar1;
  ELoadPhase EVar2;
  IAsyncReadFileHandle *pIVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  EAsyncIOPriorityAndFlags EVar10;
  long64 lVar11;
  IAsyncReadRequest *pIVar12;
  longlong lVar13;
  TFunction<void___cdecl(bool,IAsyncReadRequest_*)> *pTVar14;
  float fVar15;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  LARGE_INTEGER local_b0;
  LARGE_INTEGER local_a8;
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  LARGE_INTEGER local_80;
  FString local_78 [4];
  
  EVar2 = this->LoadPhase;
  cVar7 = (**(code **)((longlong)*this->Handle + 0x18))();
  if (EVar2 != WaitingForSummary) {
    if ((param_2 == 0) ||
       ((lVar13 = param_2 + param_1, this->PrecacheStartPos <= param_1 &&
        (lVar13 <= this->PrecacheEndPos)))) {
      if (param_4 == (IAsyncReadRequest *)0x0) {
        return true;
      }
      (*(code *)**(undefined8 **)param_4)(param_4,1);
      return true;
    }
    if (this->ReadRequestPtr != (IAsyncReadRequest *)0x0) {
      if ((this->ReadRequestOffset <= param_1) &&
         (lVar13 <= this->ReadRequestOffset + this->ReadRequestSize)) {
        bVar8 = false;
        if ((this->ReadRequestPtr->bCompleteAndCallbackCalled != false) &&
           (CompleteRead(this), this->LoadError == Unknown)) {
          if (((param_1 < this->PrecacheStartPos) || (this->PrecacheEndPos < lVar13)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("RequestOffset >= PrecacheStartPos && RequestOffset + RequestSize <= PrecacheEndPos"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                 ,0x200c,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          bVar8 = true;
        }
        if (param_4 != (IAsyncReadRequest *)0x0) {
          (*(code *)**(undefined8 **)param_4)(param_4,1);
          return bVar8;
        }
        return bVar8;
      }
      if (2 < (byte)LogStreaming._0_1_) {
        ::FName::ToString(&(this->PackagePath).PackageName,local_78);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
        }
      }
      pIVar12 = this->ReadRequestPtr;
      if (pIVar12 != (IAsyncReadRequest *)0x0) {
        if (pIVar12->bCanceled == false) {
          pIVar12->bCanceled = true;
          pIVar12->bDataIsReady = true;
          if (pIVar12->bCompleteAndCallbackCalled == false) {
            (**(code **)(*(longlong *)pIVar12 + 0x18))();
          }
        }
        CompleteCancel(this);
        this->CanceledReadRequestPtr = this->ReadRequestPtr;
        this->ReadRequestPtr = (IAsyncReadRequest *)0x0;
      }
      this->ReadRequestOffset = 0;
      this->ReadRequestSize = 0;
    }
  }
  if ((this->ReadRequestPtr != (IAsyncReadRequest *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ReadRequestPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x201a,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  plVar1 = &this->ReadRequestSize;
  *plVar1 = param_2;
  this->ReadRequestOffset = param_1;
  lVar11 = param_2;
  if (((param_3) && (EVar2 != WaitingForSummary)) &&
     ((cVar7 != '\0' && (param_2 < MinimumReadSize)))) {
    *plVar1 = MinimumReadSize;
    lVar11 = TotalSize(this);
    lVar13 = *plVar1 + this->ReadRequestOffset;
    if (lVar13 < lVar11) {
      lVar11 = lVar13;
    }
    lVar11 = lVar11 - this->ReadRequestOffset;
    *plVar1 = lVar11;
  }
  if (0 < lVar11) {
    QueryPerformanceCounter(&local_b0);
    dVar6 = __real_4170000000000000;
    dVar5 = (double)local_b0.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if (((this->ReadRequestOffset - this->HeaderSizeWhenReadingExportsFromSplitFile < 0) ||
        (this->ReadRequestSize < 1)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ReadRequestOffset - HeaderSizeWhenReadingExportsFromSplitFile >= 0 && ReadRequestSize > 0"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x203b,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    if ((param_4 == (IAsyncReadRequest *)0x0) || (cVar7 != '\0')) {
      pIVar3 = this->Handle;
      pcVar4 = *(code **)((longlong)*pIVar3 + 0x10);
      if ((GEventDrivenLoaderEnabled == false) || (EVar2 != WaitingForSummary)) {
        pTVar14 = (TFunction<void___cdecl(bool,IAsyncReadRequest_*)> *)0x0;
      }
      else {
        pTVar14 = &this->ReadCallbackFunctionForLinkerLoad;
      }
      EVar10 = GetAsyncIOPriority();
      pIVar12 = (IAsyncReadRequest *)
                (*pcVar4)(pIVar3,this->ReadRequestOffset -
                                 this->HeaderSizeWhenReadingExportsFromSplitFile,
                          this->ReadRequestSize,EVar10,pTVar14,0);
      this->ReadRequestPtr = pIVar12;
      if (param_4 != (IAsyncReadRequest *)0x0) {
        (*(code *)**(undefined8 **)param_4)(param_4,1);
      }
    }
    else {
      this->ReadRequestPtr = param_4;
    }
    if ((EVar2 != WaitingForSummary) && (this->ReadRequestPtr->bCompleteAndCallbackCalled != false))
    {
      lVar13 = this->ReadRequestSize;
      if (5 < (byte)LogAsyncArchive._0_1_) {
        FPackagePath::GetLocalFullPath(&this->PackagePath,&local_e0);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
             ::__l5::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                                 ::__l5::_thread_safe_static_guard_0__),
           `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
           ::__l5::_thread_safe_static_guard_0__ == -1)) {
          QueryPerformanceCounter(&local_a8);
          `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
          ::__l5::GlobalStartTime =
               (double)local_a8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6;
          _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                               ::__l5::_thread_safe_static_guard_0__);
        }
        QueryPerformanceCounter(&local_a0);
        if (dVar5 == 0.0) {
          fVar15 = 0.0;
        }
        else {
          fVar15 = (float)((((double)local_a0.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                            dVar6) - dVar5) * __real_408f400000000000);
        }
        if ((6 < (byte)LogAsyncArchive._0_1_) || (__real_3f800000 <= fVar15)) {
          if (lVar13 == 0x7fffffffffffffff) {
            TotalSize(this);
          }
          FGenericPlatformMisc::LowLevelOutputDebugStringf
                    (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
        }
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
      }
      CompleteRead(this);
      if (((param_1 < this->PrecacheStartPos) || (this->PrecacheEndPos < param_2 + param_1)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("RequestOffset >= PrecacheStartPos && RequestOffset + RequestSize <= PrecacheEndPos"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                             ,0x204e,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      return true;
    }
    lVar13 = this->ReadRequestSize;
    if (EVar2 == WaitingForSummary) {
      if ((byte)LogAsyncArchive._0_1_ < 6) {
        return false;
      }
      FPackagePath::GetLocalFullPath(&this->PackagePath,&local_d0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
           ::__l5::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                               ::__l5::_thread_safe_static_guard_0__),
         `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
         ::__l5::_thread_safe_static_guard_0__ == -1)) {
        QueryPerformanceCounter(&local_98);
        `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
        ::__l5::GlobalStartTime =
             (double)local_98.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6;
        _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__);
      }
      QueryPerformanceCounter(&local_90);
      if (dVar5 == 0.0) {
        fVar15 = 0.0;
      }
      else {
        fVar15 = (float)((((double)local_90.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6
                          ) - dVar5) * __real_408f400000000000);
      }
      if ((6 < (byte)LogAsyncArchive._0_1_) || (__real_3f800000 <= fVar15)) {
        if (lVar13 == 0x7fffffffffffffff) {
          TotalSize(this);
        }
        FGenericPlatformMisc::LowLevelOutputDebugStringf
                  (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
      }
    }
    else {
      if ((byte)LogAsyncArchive._0_1_ < 6) {
        return false;
      }
      FPackagePath::GetLocalFullPath(&this->PackagePath,&local_c0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
           ::__l5::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                               ::__l5::_thread_safe_static_guard_0__),
         `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
         ::__l5::_thread_safe_static_guard_0__ == -1)) {
        QueryPerformanceCounter(&local_88);
        `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
        ::__l5::GlobalStartTime =
             (double)local_88.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6;
        _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__);
      }
      QueryPerformanceCounter(&local_80);
      if (dVar5 == 0.0) {
        fVar15 = 0.0;
      }
      else {
        fVar15 = (float)((((double)local_80.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6
                          ) - dVar5) * __real_408f400000000000);
      }
      if ((6 < (byte)LogAsyncArchive._0_1_) ||
         (local_d0.Data.AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data,
         __real_3f800000 <= fVar15)) {
        if (lVar13 == 0x7fffffffffffffff) {
          TotalSize(this);
        }
        FGenericPlatformMisc::LowLevelOutputDebugStringf
                  (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
        local_d0.Data.AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data;
      }
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    return false;
  }
  FArchiveState::SetError((FArchiveState *)this);
  this->LoadError = CorruptData;
  return true;
}

// PrecacheWithTimeLimit @ 141f043a0

bool __thiscall
FAsyncArchive::PrecacheWithTimeLimit
          (FAsyncArchive *this,long64 param_1,long64 param_2,bool param_3,bool param_4,
          double param_5,double param_6)

{
  ELoadPhase EVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  double dVar6;
  
  EVar1 = this->LoadPhase;
  if ((EVar1 == WaitingForSize) || (EVar1 - WaitingForSummary < 2)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x20bd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    bVar3 = false;
  }
  else {
    if (EVar1 == WaitingForFirstExport) {
      FirstExportStarting(this);
    }
    if (param_3) {
      bVar3 = PrecacheInternal(this,param_1,param_2,true,(IAsyncReadRequest *)0x0);
      if ((!bVar3) && (param_4)) {
        dVar6 = FWindowsPlatformTime::Seconds();
        dVar6 = param_6 - (dVar6 - param_5);
        if ((__real_3f508c3f40000000 < dVar6) && (bVar4 = WaitRead(this,dVar6), bVar4)) {
          bVar3 = true;
        }
      }
    }
    else {
      bVar3 = true;
    }
  }
  return bVar3;
}

// ReadCallback @ 141f09b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FAsyncArchive::ReadCallback(FAsyncArchive *this,bool param_1,IAsyncReadRequest *param_2)

{
  longlong lVar1;
  IAsyncReadFileHandle *pIVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  EAsyncIOPriorityAndFlags EVar6;
  long64 lVar7;
  IAsyncReadRequest *pIVar8;
  uchar *puVar9;
  undefined7 in_register_00000011;
  longlong lVar10;
  undefined1 auStackY_308 [32];
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  LARGE_INTEGER local_298;
  LARGE_INTEGER local_290;
  LARGE_INTEGER local_288;
  LARGE_INTEGER local_280;
  LARGE_INTEGER local_278;
  LARGE_INTEGER local_270;
  FString local_268;
  FArchiveState local_258;
  uchar *local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  char local_1b0;
  FPackageFileSummary local_1a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_308;
  if (param_1) {
    if ((this->field_0x29 & 2) == 0) {
      this->LoadError = Cancelled;
    }
  }
  else if ((this->field_0x29 & 2) == 0) {
    if (this->LoadPhase != WaitingForSize) {
      if (this->LoadPhase != WaitingForSummary) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x1eb9,L"");
        if (!bVar5) {
          return;
        }
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (GEventDrivenLoaderEnabled) {
        in_register_00000011 = 0x1507e72;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!GEventDrivenLoaderEnabled || !(1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x1e8f,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      puVar9 = IAsyncReadRequest::GetReadResults(param_2);
      if (puVar9 == (uchar *)0x0) {
        FArchiveState::SetError((FArchiveState *)this);
        this->LoadError = CorruptData;
        this->LoadPhase = WaitingForHeader;
        return;
      }
      lVar1 = this->FileSize;
      lVar10 = (longlong)FMaxPackageSummarySize::Value;
      FArchiveState::FArchiveState(&local_258);
      local_1c0 = 0;
      local_1b0 = '\0';
      local_1b8 = lVar1;
      if (lVar10 < lVar1) {
        local_1b8 = lVar10;
      }
      local_258._padding_ = (longlong)&___7FBufferReaderBase__6B_;
      local_1c8 = puVar9;
      FArchiveState::SetIsLoading(&local_258,true);
      (**(code **)(local_258._padding_ + 0x108))(&local_258,CONCAT71(in_register_00000011,1));
      local_258._padding_ = (longlong)&___7FBufferReader__6B_;
      FPackageFileSummary::FPackageFileSummary(&local_1a8);
      ::operator<<((FArchive *)&local_258,&local_1a8);
      if (((local_258.ArIsError == '\0') && ((longlong)local_1a8.TotalHeaderSize <= this->FileSize))
         && (0xd5 < local_1a8.FileVersionUE.FileVersionUE4)) {
        EnterCriticalSection((LPCRITICAL_SECTION)&SummaryRacePreventer);
        if (FMaxPackageSummarySize::Value / 2 <= local_1c0) {
          ::FName::ToString(&(this->PackagePath).PackageName,&local_268);
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ar.Tell() < FMaxPackageSummarySize::Value / 2",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                             ,0x1ea9,
                             L"The initial read request was too small (%d) compared to package %s header size (%lld). Try increasing s.MaxPackageSummarySize value in DefaultEngine.ini."
                            );
          if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_268.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        this->HeaderSize = (longlong)local_1a8.TotalHeaderSize;
        this->bCookedForEDLInEditor = false;
        if (5 < (byte)LogAsyncArchive._0_1_) {
          FPackagePath::GetLocalFullPath(&this->PackagePath,&local_2a8);
          dVar4 = __real_4170000000000000;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                 ::__l5::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                                   ::__l5::_thread_safe_static_guard_0__),
             `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
             ::__l5::_thread_safe_static_guard_0__ == -1)) {
            QueryPerformanceCounter(&local_278);
            `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
            ::__l5::GlobalStartTime =
                 (double)local_278.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4;
            _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                                 ::__l5::_thread_safe_static_guard_0__);
          }
          QueryPerformanceCounter(&local_270);
          if (6 < (byte)LogAsyncArchive._0_1_) {
            FGenericPlatformMisc::LowLevelOutputDebugStringf
                      (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
          }
          if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
          }
        }
        PrecacheInternal(this,0,this->HeaderSize,true,(IAsyncReadRequest *)0x0);
        this->LoadPhase = WaitingForHeader;
        LeaveCriticalSection((LPCRITICAL_SECTION)&SummaryRacePreventer);
      }
      else {
        FArchiveState::SetError((FArchiveState *)this);
        this->LoadError = CorruptData;
      }
      FMemory::Free(puVar9);
      FPackageFileSummary::~FPackageFileSummary(&local_1a8);
      local_258._padding_ = (longlong)&___7FBufferReader__6B_;
      if (local_1b0 != '\0') {
        FMemory::Free(local_1c8);
        local_1c8 = (uchar *)0x0;
      }
      local_258._padding_ = (longlong)&___7FBufferReaderBase__6B_;
      FArchive::~FArchive((FArchive *)&local_258);
      return;
    }
    this->LoadPhase = WaitingForSummary;
    lVar7 = IAsyncReadRequest::GetSizeResults(param_2);
    this->FileSize = lVar7;
    if (lVar7 < 0x20) {
      FArchiveState::SetError((FArchiveState *)this);
      this->LoadError = (0 < this->FileSize) + FileDoesNotExist;
      return;
    }
    if (GEventDrivenLoaderEnabled != false) {
      EnterCriticalSection((LPCRITICAL_SECTION)&SummaryRacePreventer);
      lVar1 = this->FileSize;
      this->HeaderSize = lVar1;
      if (5 < (byte)LogAsyncArchive._0_1_) {
        FPackagePath::GetLocalFullPath(&this->PackagePath,&local_2c8);
        dVar4 = __real_4170000000000000;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
             ::__l5::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                                 ::__l5::_thread_safe_static_guard_0__),
           `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
           ::__l5::_thread_safe_static_guard_0__ == -1)) {
          QueryPerformanceCounter(&local_298);
          `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
          ::__l5::GlobalStartTime =
               (double)local_298.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4;
          _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                               ::__l5::_thread_safe_static_guard_0__);
        }
        QueryPerformanceCounter(&local_290);
        if (6 < (byte)LogAsyncArchive._0_1_) {
          if (lVar1 == 0x7fffffffffffffff) {
            TotalSize(this);
          }
          FGenericPlatformMisc::LowLevelOutputDebugStringf
                    (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
        }
        if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
        }
      }
      PrecacheInternal(this,0,this->HeaderSize,true,(IAsyncReadRequest *)0x0);
      this->LoadPhase = WaitingForHeader;
      LeaveCriticalSection((LPCRITICAL_SECTION)&SummaryRacePreventer);
      return;
    }
    if (FMaxPackageSummarySize::Value < lVar7) {
      lVar7 = (longlong)FMaxPackageSummarySize::Value;
    }
    if (5 < (byte)LogAsyncArchive._0_1_) {
      FPackagePath::GetLocalFullPath(&this->PackagePath,&local_2b8);
      dVar4 = __real_4170000000000000;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
           ::__l5::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                               ::__l5::_thread_safe_static_guard_0__),
         `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
         ::__l5::_thread_safe_static_guard_0__ == -1)) {
        QueryPerformanceCounter(&local_288);
        `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
        ::__l5::GlobalStartTime =
             (double)local_288.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4;
        _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__);
      }
      QueryPerformanceCounter(&local_280);
      if (6 < (byte)LogAsyncArchive._0_1_) {
        if (lVar7 == 0x7fffffffffffffff) {
          TotalSize(this);
        }
        FGenericPlatformMisc::LowLevelOutputDebugStringf
                  (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
      }
      if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
      }
    }
    pIVar2 = this->Handle;
    pcVar3 = *(code **)((longlong)*pIVar2 + 0x10);
    EVar6 = GetAsyncIOPriority();
    pIVar8 = (IAsyncReadRequest *)(*pcVar3)(pIVar2,0,lVar7,EVar6);
    pIVar2 = this->Handle;
    this->SummaryRequestPtr = pIVar8;
    pcVar3 = *(code **)((longlong)*pIVar2 + 0x10);
    EVar6 = GetAsyncIOPrecachePriorityAndFlags();
    pIVar8 = (IAsyncReadRequest *)(*pcVar3)(pIVar2,0,lVar7,EVar6);
    this->SummaryPrecacheRequestPtr = pIVar8;
    return;
  }
  FArchiveState::SetError((FArchiveState *)this);
  return;
}

// ReadyToStartReadingHeader @ 141f0a330

bool __thiscall
FAsyncArchive::ReadyToStartReadingHeader
          (FAsyncArchive *this,bool param_1,bool param_2,double param_3,double param_4)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  undefined1 uVar4;
  double dVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_68;
  LARGE_INTEGER local_60;
  LARGE_INTEGER local_58;
  FString local_50 [4];
  
  dVar2 = __real_4170000000000000;
  if (this->SummaryReadTime == 0.0) {
    QueryPerformanceCounter(&local_res8);
    this->SummaryReadTime =
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar2;
  }
  if (param_1) {
    if ((this->LoadPhase == WaitingForSize) || (this->LoadPhase == WaitingForSummary)) {
      if (!param_2) {
        return false;
      }
      QueryPerformanceCounter(&local_68);
      dVar5 = param_4 - (((double)local_68.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar2)
                        - param_3);
      if (dVar5 < __real_3f508c3f40000000) {
        return false;
      }
      bVar3 = WaitForIntialPhases(this,dVar5);
      if (!bVar3) {
        return false;
      }
    }
    if ((this->LoadPhase != WaitingForHeader) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LoadPhase == ELoadPhase::WaitingForHeader",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x211d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if (5 < (byte)LogAsyncArchive._0_1_) {
      FPackagePath::GetLocalFullPath(&this->PackagePath,local_50);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
           ::__l5::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                               ::__l5::_thread_safe_static_guard_0__),
         `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
         ::__l5::_thread_safe_static_guard_0__ == -1)) {
        QueryPerformanceCounter(&local_60);
        `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
        ::__l5::GlobalStartTime =
             (double)local_60.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar2;
        _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__);
      }
      QueryPerformanceCounter(&local_58);
      if (6 < (byte)LogAsyncArchive._0_1_) {
        FGenericPlatformMisc::LowLevelOutputDebugStringf
                  (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
      }
      if (local_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50[0].Data.AllocatorInstance.Data);
      }
    }
  }
  return true;
}

// Seek @ 141f0ef50

void __thiscall FAsyncArchive::Seek(FAsyncArchive *this,long64 param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  ELoaderType EVar3;
  bool bVar4;
  long64 lVar5;
  longlong lVar6;
  longlong lVar7;
  FString local_18;
  
  if (((((GEventDrivenLoaderEnabled) || (this->bCookedForEDLInEditor != false)) ||
       (EVar3 = (*GetLoaderType)(), EVar3 == ZenLoader)) &&
      (((int)this->LoadPhase < 4 && (this->HeaderSizeWhenReadingExportsFromSplitFile == 0)))) &&
     ((lVar7 = this->HeaderSize, lVar7 != 0 &&
      ((lVar5 = TotalSize(this), lVar5 == lVar7 && (this->HeaderSize <= param_1)))))) {
    FirstExportStarting(this);
  }
  lVar7 = 0x7fffffffffffffff;
  if (param_1 < 0) {
LAB_141f0f019:
    ::FName::ToString(&(this->PackagePath).PackageName,&local_18);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPos >= 0 && InPos <= TotalSizeOrMaxInt64IfNotReady()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x1f48,
                       L"Bad position in FAsyncArchive::Seek. Filename:%s InPos:%lu, Size:%lu");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (-1 < param_1) goto LAB_141f0f08e;
  }
  else {
    if (this->SizeRequestPtr == (IAsyncReadRequest *)0x0) {
      lVar6 = this->HeaderSizeWhenReadingExportsFromSplitFile + this->FileSize;
    }
    else {
      lVar6 = 0x7fffffffffffffff;
    }
    if (lVar6 < param_1) goto LAB_141f0f019;
LAB_141f0f08e:
    if (this->SizeRequestPtr == (IAsyncReadRequest *)0x0) {
      lVar7 = this->HeaderSizeWhenReadingExportsFromSplitFile + this->FileSize;
    }
    if (param_1 <= lVar7) goto LAB_141f0f0d1;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pos >= 0 && Pos <= TotalSizeOrMaxInt64IfNotReady()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                     ,0x1f28,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_141f0f0d1:
  if ((param_1 < this->PrecacheStartPos) || (this->PrecacheEndPos <= param_1)) {
    puVar1 = *(undefined8 **)&this->field_0x8;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    lVar5 = param_1;
  }
  else {
    if ((this->PrecacheBuffer == (uchar *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("PrecacheBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x1f30,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(uchar **)(*(longlong *)&this->field_0x8 + 0x10) = this->PrecacheBuffer;
    **(undefined8 **)&this->field_0x8 = this->PrecacheBuffer + (param_1 - this->PrecacheStartPos);
    *(uchar **)(*(longlong *)&this->field_0x8 + 8) =
         this->PrecacheBuffer + (this->PrecacheEndPos - this->PrecacheStartPos);
    lVar5 = this->PrecacheStartPos;
  }
  this->CurrentPos = lVar5;
  if (((**(longlong **)&this->field_0x8 - (*(longlong **)&this->field_0x8)[2]) + lVar5 != param_1)
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Tell() == Pos",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                            ,0x1f36,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// Serialize @ 141f0fa00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncArchive::Serialize(FAsyncArchive *this,void *param_1,long64 param_2)

{
  long64 *plVar1;
  undefined8 *puVar2;
  void *_Src;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  long64 lVar6;
  size_t sVar7;
  longlong lVar8;
  longlong lVar9;
  size_t sVar10;
  size_t sVar11;
  FString local_130;
  FString local_120;
  LARGE_INTEGER local_110;
  LARGE_INTEGER local_108;
  LARGE_INTEGER local_100;
  LARGE_INTEGER local_f8;
  long64 local_f0;
  long64 local_e8;
  IAsyncReadRequest *local_e0;
  long64 local_d8;
  long64 local_d0;
  long64 local_c8;
  long64 local_c0;
  FText local_b8;
  FText local_a8;
  FString local_98;
  FString local_88 [5];
  
  if (param_2 == 0) {
    return;
  }
  if ((this->field_0x29 & 2) != 0) {
    return;
  }
  if ((param_2 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x212c,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar2 = *(undefined8 **)&this->field_0x8;
  _Src = (void *)*puVar2;
  if ((ulonglong)((longlong)_Src + param_2) <= (ulonglong)puVar2[1]) {
    memcpy(param_1,_Src,param_2);
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + param_2;
    return;
  }
  this->CurrentPos = (longlong)_Src + (this->CurrentPos - puVar2[2]);
  sVar10 = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  lVar9 = this->CurrentPos;
  lVar6 = TotalSize(this);
  if (lVar6 < lVar9 + param_2) {
    FText::FText(&local_a8);
    FText::FText(&local_b8);
    FConfigCacheIni::GetText
              (GConfig,L"/Script/Engine.Engine",L"SerializationOutOfBoundsErrorMessage",&local_a8,
               &GEngineIni);
    FConfigCacheIni::GetText
              (GConfig,L"/Script/Engine.Engine",L"SerializationOutOfBoundsErrorMessageCaption",
               &local_b8,&GEngineIni);
    FMessageDialog::Open(Ok,&local_a8,&local_b8);
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
  }
  if (this->SizeRequestPtr == (IAsyncReadRequest *)0x0) {
    lVar9 = this->HeaderSizeWhenReadingExportsFromSplitFile + this->FileSize;
  }
  else {
    lVar9 = 0x7fffffffffffffff;
  }
  if (lVar9 < this->CurrentPos + param_2) {
    TotalSize(this);
    ::FName::ToString(&(this->PackagePath).PackageName,&local_98);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentPos + Count <= TotalSizeOrMaxInt64IfNotReady()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x214f,L"Seeked past end of file %s (%lld / %lld)");
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  dVar4 = __real_4170000000000000;
  sVar7 = this->CurrentPos;
  lVar9 = this->PrecacheStartPos;
  sVar11 = param_2;
  if ((lVar9 < (longlong)(sVar7 + param_2)) && ((longlong)sVar7 < this->PrecacheEndPos)) {
    if ((longlong)sVar7 < lVar9) {
      sVar7 = lVar9 - sVar7;
      if (((longlong)sVar7 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("BeforeBlockSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                             ,0x216d,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar9 = this->CurrentPos;
      sVar11 = sVar10;
      if (this->PrecacheStartPos < param_2 + lVar9) {
        sVar11 = (this->PrecacheEndPos - lVar9) - sVar7;
        sVar10 = param_2 - sVar7;
        if ((longlong)sVar11 < (longlong)(param_2 - sVar7)) {
          sVar10 = sVar11;
        }
        if (((longlong)sVar10 < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CopyLen > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                               ,0x2173,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((this->PrecacheBuffer == (uchar *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("PrecacheBuffer",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                               ,0x2174,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        memcpy((void *)((longlong)param_1 + sVar7),this->PrecacheBuffer,sVar10);
        sVar11 = (param_2 - sVar10) - sVar7;
        if (((longlong)sVar11 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("AfterBlockSize >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                               ,0x2177,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        sVar10 = this->PrecacheEndPos;
      }
      if (sVar7 != 0) {
        if ((2 < (byte)LogAsyncArchive._0_1_) && (GEventDrivenLoaderEnabled != false)) {
          ::FName::ToString(&(this->PackagePath).PackageName,local_88);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAsyncArchive);
          if (local_88[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88[0].Data.AllocatorInstance.Data);
          }
        }
        if (5 < (byte)LogAsyncArchive._0_1_) {
          FPackagePath::GetLocalFullPath(&this->PackagePath,&local_130);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                 ::__l5::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                                   ::__l5::_thread_safe_static_guard_0__),
             `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
             ::__l5::_thread_safe_static_guard_0__ == -1)) {
            QueryPerformanceCounter(&local_110);
            `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
            ::__l5::GlobalStartTime =
                 (double)local_110.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4;
            _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                                 ::__l5::_thread_safe_static_guard_0__);
          }
          QueryPerformanceCounter(&local_108);
          if (6 < (byte)LogAsyncArchive._0_1_) {
            if (sVar7 == 0x7fffffffffffffff) {
              TotalSize(this);
            }
            FGenericPlatformMisc::LowLevelOutputDebugStringf
                      (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
          }
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
        }
        bVar5 = PrecacheInternal(this,lVar9,sVar7,true,(IAsyncReadRequest *)0x0);
        if (!bVar5) {
          WaitRead(this,0.0);
        }
        if ((this->field_0x29 & 2) != 0) {
          return;
        }
        if (((lVar9 < this->PrecacheStartPos) || (this->PrecacheEndPos < (longlong)(sVar7 + lVar9)))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("BeforeBlockOffset >= PrecacheStartPos && BeforeBlockOffset + BeforeBlockSize <= PrecacheEndPos"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                  ,0x2189,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((this->PrecacheBuffer == (uchar *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("PrecacheBuffer",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                               ,0x218a,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        memcpy(param_1,this->PrecacheBuffer + (lVar9 - this->PrecacheStartPos),sVar7);
      }
    }
    else {
      sVar7 = this->PrecacheEndPos - sVar7;
      if ((longlong)sVar7 < param_2) {
        sVar11 = sVar7;
      }
      if (((longlong)sVar11 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CopyLen > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                             ,0x2162,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((this->PrecacheBuffer == (uchar *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("PrecacheBuffer",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                             ,0x2163,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      memcpy(param_1,this->PrecacheBuffer + (this->CurrentPos - this->PrecacheStartPos),sVar11);
      sVar11 = param_2 - sVar11;
      if (((longlong)sVar11 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AfterBlockSize >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                             ,0x2166,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      sVar10 = this->PrecacheEndPos;
    }
    sVar7 = sVar10;
    if (sVar11 != 0) goto LAB_141f100a9;
  }
  else {
LAB_141f100a9:
    if (5 < (byte)LogAsyncArchive._0_1_) {
      FPackagePath::GetLocalFullPath(&this->PackagePath,&local_120);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
           ::__l5::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                               ::__l5::_thread_safe_static_guard_0__),
         `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
         ::__l5::_thread_safe_static_guard_0__ == -1)) {
        QueryPerformanceCounter(&local_100);
        `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
        ::__l5::GlobalStartTime =
             (double)local_100.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4;
        _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__);
      }
      QueryPerformanceCounter(&local_f8);
      if (6 < (byte)LogAsyncArchive._0_1_) {
        if (sVar11 == 0x7fffffffffffffff) {
          TotalSize(this);
        }
        FGenericPlatformMisc::LowLevelOutputDebugStringf
                  (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
      }
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
    }
    if (((int)this->LoadPhase < 2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("int32(LoadPhase) > int32(ELoadPhase::WaitingForSummary)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x2196,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_c0 = this->PrecacheStartPos;
    plVar1 = &this->PrecacheEndPos;
    local_c8 = *plVar1;
    local_e0 = this->ReadRequestPtr;
    local_d0 = this->ReadRequestOffset;
    local_d8 = this->ReadRequestSize;
    local_f0 = this->FileSize;
    local_e8 = this->HeaderSizeWhenReadingExportsFromSplitFile;
    bVar5 = PrecacheInternal(this,sVar7,sVar11,true,(IAsyncReadRequest *)0x0);
    if (!bVar5) {
      bVar5 = WaitRead(this,0.0);
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("WaitRead()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                             ,0x21a5,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((this->field_0x29 & 2) != 0) {
        return;
      }
      if ((((longlong)sVar7 < this->PrecacheStartPos) || (*plVar1 < (longlong)(sVar11 + sVar7))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AfterBlockOffset >= PrecacheStartPos && AfterBlockOffset + AfterBlockSize <= PrecacheEndPos"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                             ,0x21b0,
                             L"Sync After Block Wait ????  %lld %lld     %lld %lld <-  %lld %lld     %lld %lld <-  %lld %lld    %p <- %p <- %p    %lld %lld <-  %lld %lld"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((this->field_0x29 & 2) != 0) {
      return;
    }
    if ((((longlong)sVar7 < this->PrecacheStartPos) || (*plVar1 < (longlong)(sVar11 + sVar7))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("AfterBlockOffset >= PrecacheStartPos && AfterBlockOffset + AfterBlockSize <= PrecacheEndPos"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x21b7,L"Sync After Block ????   %lld %lld %lld %lld"), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this->PrecacheBuffer == (uchar *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PrecacheBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x21b8,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    memcpy((void *)((longlong)param_1 + (param_2 - sVar11)),
           this->PrecacheBuffer + (sVar7 - this->PrecacheStartPos),sVar11);
  }
  lVar9 = this->CurrentPos + param_2;
  if (-1 < lVar9) {
    if (this->SizeRequestPtr == (IAsyncReadRequest *)0x0) {
      lVar8 = this->HeaderSizeWhenReadingExportsFromSplitFile + this->FileSize;
    }
    else {
      lVar8 = 0x7fffffffffffffff;
    }
    if (lVar9 <= lVar8) goto LAB_141f10511;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pos >= 0 && Pos <= TotalSizeOrMaxInt64IfNotReady()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                     ,0x1f28,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_141f10511:
  if ((lVar9 < this->PrecacheStartPos) || (this->PrecacheEndPos <= lVar9)) {
    puVar2 = *(undefined8 **)&this->field_0x8;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    lVar6 = lVar9;
  }
  else {
    if ((this->PrecacheBuffer == (uchar *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PrecacheBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x1f30,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(uchar **)(*(longlong *)&this->field_0x8 + 0x10) = this->PrecacheBuffer;
    **(undefined8 **)&this->field_0x8 = this->PrecacheBuffer + (lVar9 - this->PrecacheStartPos);
    *(uchar **)(*(longlong *)&this->field_0x8 + 8) =
         this->PrecacheBuffer + (this->PrecacheEndPos - this->PrecacheStartPos);
    lVar6 = this->PrecacheStartPos;
  }
  this->CurrentPos = lVar6;
  if (((**(longlong **)&this->field_0x8 - (*(longlong **)&this->field_0x8)[2]) + lVar6 != lVar9) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Tell() == Pos",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x1f36,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// SetCompressionMap @ 141f110e0

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

bool __thiscall
FAsyncArchive::SetCompressionMap
          (FAsyncArchive *this,TArray<FCompressedChunk,TSizedDefaultAllocator<32>_> *param_1,
          ECompressionFlags param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                     ,0x1f11,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// StartReadingHeader @ 141f14580

void __thiscall FAsyncArchive::StartReadingHeader(FAsyncArchive *this)

{
  ELoadPhase EVar1;
  code *pcVar2;
  bool bVar3;
  
  WaitForIntialPhases(this,0.0);
  if ((this->field_0x29 & 2) == 0) {
    EVar1 = this->LoadPhase;
    if ((int)EVar1 < 2) {
      EnterCriticalSection((LPCRITICAL_SECTION)&SummaryRacePreventer);
      LeaveCriticalSection((LPCRITICAL_SECTION)&SummaryRacePreventer);
      EVar1 = this->LoadPhase;
    }
    if ((EVar1 != WaitingForHeader) || (this->ReadRequestPtr == (IAsyncReadRequest *)0x0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LoadPhase == ELoadPhase::WaitingForHeader && ReadRequestPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x20f3,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    WaitRead(this,0.0);
  }
  return;
}

// Tell @ 141f14cb0

long64 __thiscall FAsyncArchive::Tell(FAsyncArchive *this)

{
  return (this->CurrentPos - (*(longlong **)&this->field_0x8)[2]) + **(longlong **)&this->field_0x8;
}

// TotalSize @ 141f16b70

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall FAsyncArchive::TotalSize(FAsyncArchive *this)

{
  int *piVar1;
  IAsyncReadRequest *pIVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ELoaderType EVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_virtual___int64___cdecl_FAsyncArchive::TotalSize(void)_::_5_::FStat_STAT_FArchiveAsync2_TotalSize>
  FVar8;
  long64 lVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FNameEntryId FVar13;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  if (this->SizeRequestPtr == (IAsyncReadRequest *)0x0) goto LAB_141f16e7b;
  FVar13.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FArchiveAsync2_TotalSize ==
        (FThreadSafeStaticStat<_public:_virtual___int64___cdecl_FAsyncArchive::TotalSize(void)_::_5_::FStat_STAT_FArchiveAsync2_TotalSize>
         )0x0) {
      pFVar7 = ::FName::FName((FName *)&local_res8.s,"STAT_FArchiveAsync2_TotalSize");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FArchiveAsync2_TotalSize,*pFVar7,
                 L"STAT_FArchiveAsync2_TotalSize","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true
                 ,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar8 = StatPtr_STAT_FArchiveAsync2_TotalSize;
  if (StatPtr_STAT_FArchiveAsync2_TotalSize ==
      (FThreadSafeStaticStat<_public:_virtual___int64___cdecl_FAsyncArchive::TotalSize(void)_::_5_::FStat_STAT_FArchiveAsync2_TotalSize>
       )0x0) {
    pFVar7 = ::FName::FName(&local_res10,"STAT_FArchiveAsync2_TotalSize");
    FVar8 = (FThreadSafeStaticStat<_public:_virtual___int64___cdecl_FAsyncArchive::TotalSize(void)_::_5_::FStat_STAT_FArchiveAsync2_TotalSize>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FArchiveAsync2_TotalSize,*pFVar7
                         ,L"STAT_FArchiveAsync2_TotalSize","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value == 0) && (uVar10 == 0)) {
LAB_141f16d0e:
    bVar4 = false;
    FVar12.ComparisonIndex.Value = 0;
    FVar12.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                   ,0x1f19);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_141f16d0e;
    local_res8.s.LowPart = FVar11.Value;
    local_res8.s.HighPart = uVar10;
    FThreadStats::AddMessage(FVar12,CycleScopeStart);
    bVar4 = true;
    FVar13.Value = FVar11.Value;
  }
  pIVar2 = this->SizeRequestPtr;
  if (pIVar2->bCompleteAndCallbackCalled == false) {
    (**(code **)(*(longlong *)pIVar2 + 0x10))(pIVar2,0);
  }
  if ((((GEventDrivenLoaderEnabled != false) || (this->bCookedForEDLInEditor != false)) ||
      (EVar6 = (*GetLoaderType)(), EVar6 == ZenLoader)) &&
     (this->HeaderSizeWhenReadingExportsFromSplitFile != 0)) {
    lVar9 = IAsyncReadRequest::GetSizeResults(this->SizeRequestPtr);
    this->FileSize = lVar9;
  }
  pIVar2 = this->SizeRequestPtr;
  if (pIVar2 != (IAsyncReadRequest *)0x0) {
    (*(code *)**(undefined8 **)pIVar2)(pIVar2,1);
  }
  this->SizeRequestPtr = (IAsyncReadRequest *)0x0;
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar12 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_141f16e7b:
  return this->HeaderSizeWhenReadingExportsFromSplitFile + this->FileSize;
}

// WaitForIntialPhases @ 141f197c0

/* WARNING: Removing unreachable block (ram,0x000141f1a175) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAsyncArchive::WaitForIntialPhases(FAsyncArchive *this,double param_1)

{
  int *piVar1;
  IAsyncReadRequest *pIVar2;
  longlong lVar3;
  FName FVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  double dVar12;
  bool bVar13;
  undefined1 uVar14;
  ELoaderType EVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<_private:_bool___cdecl_FAsyncArchive::WaitForIntialPhases(double)_::_5_::FStat_STAT_FArchiveAsync2_WaitForIntialPhases>
  FVar17;
  FThreadStats *pFVar18;
  FThreadStatsPool *pFVar19;
  FThreadSafeStaticStat<_public:_virtual___int64___cdecl_FAsyncArchive::TotalSize(void)_::_5_::FStat_STAT_FArchiveAsync2_TotalSize>
  FVar20;
  long64 lVar21;
  uint uVar22;
  FName FVar23;
  FColor_u_0 FVar24;
  int iVar25;
  ulonglong uVar26;
  double dVar27;
  float fVar28;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FColor_u_0 local_res18;
  uint uStackX_1c;
  FName local_res20;
  FName local_148;
  FColor_u_0 local_138;
  uint local_134;
  FName local_130;
  FString local_120;
  LARGE_INTEGER local_110;
  LARGE_INTEGER local_108;
  LARGE_INTEGER local_100;
  LARGE_INTEGER local_f8;
  LARGE_INTEGER local_f0;
  LARGE_INTEGER local_e8;
  LARGE_INTEGER local_e0;
  LARGE_INTEGER local_d8;
  FStatMessage local_d0;
  FStatMessage local_c0;
  FStatMessage local_b0;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88 [10];
  
  if ((((this->SizeRequestPtr == (IAsyncReadRequest *)0x0) && (!GEventDrivenLoaderEnabled)) &&
      (this->SummaryRequestPtr == (IAsyncReadRequest *)0x0)) &&
     (this->SummaryPrecacheRequestPtr == (IAsyncReadRequest *)0x0)) {
    return true;
  }
  uVar26 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar26 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FArchiveAsync2_WaitForIntialPhases ==
        (FThreadSafeStaticStat<_private:_bool___cdecl_FAsyncArchive::WaitForIntialPhases(double)_::_5_::FStat_STAT_FArchiveAsync2_WaitForIntialPhases>
         )0x0) {
      pFVar16 = ::FName::FName(&local_a0,"STAT_FArchiveAsync2_WaitForIntialPhases");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FArchiveAsync2_WaitForIntialPhases,
                 *pFVar16,L"STAT_FArchiveAsync2_WaitForIntialPhases","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar17 = StatPtr_STAT_FArchiveAsync2_WaitForIntialPhases;
  if (StatPtr_STAT_FArchiveAsync2_WaitForIntialPhases ==
      (FThreadSafeStaticStat<_private:_bool___cdecl_FAsyncArchive::WaitForIntialPhases(double)_::_5_::FStat_STAT_FArchiveAsync2_WaitForIntialPhases>
       )0x0) {
    pFVar16 = ::FName::FName(&local_98,"STAT_FArchiveAsync2_WaitForIntialPhases");
    FVar17 = (FThreadSafeStaticStat<_private:_bool___cdecl_FAsyncArchive::WaitForIntialPhases(double)_::_5_::FStat_STAT_FArchiveAsync2_WaitForIntialPhases>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FArchiveAsync2_WaitForIntialPhases,*pFVar16,
                          L"STAT_FArchiveAsync2_WaitForIntialPhases","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar17;
  bVar7 = false;
  bVar10 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  if ((((uint)FVar23.ComparisonIndex.Value).Value == 0) && (FVar23.Number == 0)) {
LAB_141f19979:
    bVar8 = false;
    FVar23 = local_130;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar7 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20 = FVar23;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                   ,0x1fb0);
        bVar7 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_141f19979;
    local_res18.Bits = (uint)FVar23.ComparisonIndex.Value;
    uStackX_1c = FVar23.Number;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar8 = true;
  }
  QueryPerformanceCounter(&local_110);
  dVar12 = __real_4170000000000000;
  pIVar2 = this->SizeRequestPtr;
  dVar6 = (double)local_110.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if (pIVar2 != (IAsyncReadRequest *)0x0) {
    if ((pIVar2->bCompleteAndCallbackCalled != false) ||
       ((**(code **)(*(longlong *)pIVar2 + 0x10))(pIVar2,(float)param_1),
       pIVar2->bCompleteAndCallbackCalled != false)) {
      pIVar2 = this->SizeRequestPtr;
      if (pIVar2 != (IAsyncReadRequest *)0x0) {
        (*(code *)**(undefined8 **)pIVar2)(pIVar2,1);
      }
      this->SizeRequestPtr = (IAsyncReadRequest *)0x0;
      goto LAB_141f19a06;
    }
    if (0.0 < param_1) goto LAB_141f19b9a;
    iVar25 = 0x1fbb;
LAB_141f19aa6:
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InTimeLimit > 0.0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                        ,iVar25,L"");
    if (bVar13) {
code_r0x000141f19b99:
      pcVar5 = (code *)swi(3);
      uVar14 = (*pcVar5)();
      return (bool)uVar14;
    }
LAB_141f19b9a:
    if (bVar10) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar8) && (FVar23 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
        local_d0.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
        local_d0.NameAndInfo.Index.Value = FVar23.ComparisonIndex.Value.Value;
        QueryPerformanceCounter(&local_f8);
        local_d0.StatData.Pad[4] = '\0';
        local_d0.StatData.Pad[5] = '\0';
        local_d0.StatData.Pad[6] = '\0';
        local_d0.StatData.Pad[7] = '\0';
        local_d0.StatData.Pad[0] = local_f8.s.LowPart._0_1_;
        local_d0.StatData.Pad[1] = local_f8.s.LowPart._1_1_;
        local_d0.StatData.Pad[2] = local_f8.s.LowPart._2_1_;
        local_d0.StatData.Pad[3] = local_f8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar18,&local_d0);
        piVar1 = &pFVar18->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar18,false,false);
          return false;
        }
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar18,false,false);
        }
      }
    }
    return false;
  }
LAB_141f19a06:
  if (GEventDrivenLoaderEnabled == false) {
    if (this->SummaryRequestPtr != (IAsyncReadRequest *)0x0) {
      dVar27 = 0.0;
      if (0.0 < param_1) {
        QueryPerformanceCounter(&local_108);
        dVar27 = param_1 - (((double)local_108.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                            dVar12) - dVar6);
        if (dVar27 < __real_3f508c3f40000000) goto LAB_141f19b9a;
      }
      pIVar2 = this->SummaryRequestPtr;
      if ((pIVar2->bCompleteAndCallbackCalled == false) &&
         ((**(code **)(*(longlong *)pIVar2 + 0x10))
                    (pIVar2,CONCAT44((int)((ulonglong)dVar27 >> 0x20),(float)dVar27)),
         pIVar2->bCompleteAndCallbackCalled == false)) {
        if (0.0 < param_1) goto LAB_141f19b9a;
        iVar25 = 0x1fd3;
        goto LAB_141f19aa6;
      }
      pIVar2 = this->SummaryRequestPtr;
      if (pIVar2 != (IAsyncReadRequest *)0x0) {
        (*(code *)**(undefined8 **)pIVar2)(pIVar2,1);
      }
      this->SummaryRequestPtr = (IAsyncReadRequest *)0x0;
    }
    if (this->SummaryPrecacheRequestPtr != (IAsyncReadRequest *)0x0) {
      dVar27 = 0.0;
      if (0.0 < param_1) {
        QueryPerformanceCounter(&local_100);
        dVar27 = param_1 - (((double)local_100.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                            dVar12) - dVar6);
        if (dVar27 < __real_3f508c3f40000000) goto LAB_141f19b9a;
      }
      pIVar2 = this->SummaryPrecacheRequestPtr;
      if ((pIVar2->bCompleteAndCallbackCalled == false) &&
         ((**(code **)(*(longlong *)pIVar2 + 0x10))
                    (pIVar2,CONCAT44((int)((ulonglong)dVar27 >> 0x20),(float)dVar27)),
         pIVar2->bCompleteAndCallbackCalled == false)) {
        if ((param_1 <= 0.0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InTimeLimit > 0.0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                ,0x1fe9,L""), bVar13)) goto code_r0x000141f19b99;
        goto LAB_141f19b9a;
      }
      pIVar2 = this->SummaryPrecacheRequestPtr;
      if (pIVar2 != (IAsyncReadRequest *)0x0) {
        (*(code *)**(undefined8 **)pIVar2)(pIVar2,1);
      }
      this->SummaryPrecacheRequestPtr = (IAsyncReadRequest *)0x0;
    }
  }
  lVar3 = this->HeaderSize;
  if ((byte)LogAsyncArchive._0_1_ < 6) goto LAB_141f1a07b;
  FPackagePath::GetLocalFullPath(&this->PackagePath,&local_120);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar26 * 8) + 0x9d4c) <
       `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
       ::__l5::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__),
     `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
     ::__l5::_thread_safe_static_guard_0__ == -1)) {
    QueryPerformanceCounter(&local_f0);
    `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
    ::__l5::GlobalStartTime =
         (double)local_f0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar12;
    _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                         ::__l5::_thread_safe_static_guard_0__);
  }
  QueryPerformanceCounter(&local_e8);
  if (dVar6 == 0.0) {
    fVar28 = 0.0;
  }
  else {
    fVar28 = (float)((((double)local_e8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar12) -
                     dVar6) * __real_408f400000000000);
  }
  if ((6 < (byte)LogAsyncArchive._0_1_) || (__real_3f800000 <= fVar28)) {
    local_res20 = (FName)L"";
    if (local_120.Data.ArrayNum != 0) {
      local_res20 = (FName)local_120.Data.AllocatorInstance;
    }
    if ((lVar3 == 0x7fffffffffffffff) && (this->SizeRequestPtr != (IAsyncReadRequest *)0x0)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar26 * 8) + 0x9d4c) <
           ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        StatPtr_STAT_FArchiveAsync2_TotalSize =
             (FThreadSafeStaticStat<_public:_virtual___int64___cdecl_FAsyncArchive::TotalSize(void)_::_5_::FStat_STAT_FArchiveAsync2_TotalSize>
              )0x0;
        pFVar16 = ::FName::FName(&local_90,"STAT_FArchiveAsync2_TotalSize");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FArchiveAsync2_TotalSize,*pFVar16,
                   L"STAT_FArchiveAsync2_TotalSize","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                   true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS0);
      }
      FVar20 = StatPtr_STAT_FArchiveAsync2_TotalSize;
      if (StatPtr_STAT_FArchiveAsync2_TotalSize ==
          (FThreadSafeStaticStat<_public:_virtual___int64___cdecl_FAsyncArchive::TotalSize(void)_::_5_::FStat_STAT_FArchiveAsync2_TotalSize>
           )0x0) {
        pFVar16 = ::FName::FName(local_88,"STAT_FArchiveAsync2_TotalSize");
        FVar20 = (FThreadSafeStaticStat<_public:_virtual___int64___cdecl_FAsyncArchive::TotalSize(void)_::_5_::FStat_STAT_FArchiveAsync2_TotalSize>
                  )FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FArchiveAsync2_TotalSize,
                              *pFVar16,L"STAT_FArchiveAsync2_TotalSize","STATGROUP_Quick",
                              "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid)
        ;
      }
      FVar4 = *(FName *)FVar20;
      bVar13 = false;
      bVar11 = false;
      local_148.ComparisonIndex.Value = 0;
      local_148.Number = 0;
      FVar24.Bits = (uint)FVar4.ComparisonIndex.Value;
      uVar22 = FVar4.Number;
      if ((FVar24.Bits == 0) && (uVar22 == 0)) {
LAB_141f19ed2:
        bVar9 = false;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_res18.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_res18._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
          bVar13 = false;
          bVar11 = true;
          if (-1 < CpuChannel->Enabled) {
            local_138.Bits = FVar24.Bits;
            local_134 = uVar22;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      ((FName *)&local_138._s_0,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x1f19);
            bVar13 = true;
            bVar11 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_141f19ed2;
        local_res8.Bits = FVar24.Bits;
        uStackX_c = uVar22;
        FThreadStats::AddMessage(FVar4,CycleScopeStart);
        bVar9 = true;
        local_148 = FVar4;
      }
      pIVar2 = this->SizeRequestPtr;
      if (pIVar2->bCompleteAndCallbackCalled == false) {
        (**(code **)(*(longlong *)pIVar2 + 0x10))(pIVar2,0);
      }
      if ((((GEventDrivenLoaderEnabled != false) || (this->bCookedForEDLInEditor != false)) ||
          (EVar15 = (*GetLoaderType)(), EVar15 == ZenLoader)) &&
         (this->HeaderSizeWhenReadingExportsFromSplitFile != 0)) {
        lVar21 = IAsyncReadRequest::GetSizeResults(this->SizeRequestPtr);
        this->FileSize = lVar21;
      }
      pIVar2 = this->SizeRequestPtr;
      if (pIVar2 != (IAsyncReadRequest *)0x0) {
        (*(code *)**(undefined8 **)pIVar2)(pIVar2,1);
      }
      this->SizeRequestPtr = (IAsyncReadRequest *)0x0;
      if (bVar11) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (((bVar9) && (local_148 != (FName)0x0)) &&
         ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))))
      {
        pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar18 == (FThreadStats *)0x0) {
          pFVar19 = FThreadStatsPool::Get();
          pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
        }
        if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
          local_c0.NameAndInfo.Index.Value = local_148.ComparisonIndex.Value;
          local_c0.NameAndInfo.Number = local_148.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_e0);
          local_c0.StatData.Pad[4] = '\0';
          local_c0.StatData.Pad[5] = '\0';
          local_c0.StatData.Pad[6] = '\0';
          local_c0.StatData.Pad[7] = '\0';
          local_c0.StatData.Pad[0] = local_e0.s.LowPart._0_1_;
          local_c0.StatData.Pad[1] = local_e0.s.LowPart._1_1_;
          local_c0.StatData.Pad[2] = local_e0.s.LowPart._2_1_;
          local_c0.StatData.Pad[3] = local_e0.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar18,&local_c0);
          piVar1 = &pFVar18->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar18,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar18,false,false);
          }
        }
      }
    }
    FGenericPlatformMisc::LowLevelOutputDebugStringf
              (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
  }
  if ((FName)local_120.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
LAB_141f1a07b:
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar8) && (FVar23 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar18 == (FThreadStats *)0x0) {
      pFVar19 = FThreadStatsPool::Get();
      pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
    }
    if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
      local_b0.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
      local_b0.NameAndInfo.Index.Value = FVar23.ComparisonIndex.Value.Value;
      QueryPerformanceCounter(&local_d8);
      local_b0.StatData.Pad[4] = '\0';
      local_b0.StatData.Pad[5] = '\0';
      local_b0.StatData.Pad[6] = '\0';
      local_b0.StatData.Pad[7] = '\0';
      local_b0.StatData.Pad[0] = local_d8.s.LowPart._0_1_;
      local_b0.StatData.Pad[1] = local_d8.s.LowPart._1_1_;
      local_b0.StatData.Pad[2] = local_d8.s.LowPart._2_1_;
      local_b0.StatData.Pad[3] = local_d8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar18,&local_b0);
      piVar1 = &pFVar18->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  return true;
}

// WaitRead @ 141f1a320

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAsyncArchive::WaitRead(FAsyncArchive *this,double param_1)

{
  int *piVar1;
  longlong lVar2;
  IAsyncReadRequest *pIVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  double dVar9;
  bool bVar10;
  undefined1 uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_private:_bool___cdecl_FAsyncArchive::WaitRead(double)_::_5_::FStat_STAT_FArchiveAsync2_WaitRead>
  FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FName FVar16;
  char cVar17;
  float fVar18;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  FName local_res20;
  FString local_d8;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8;
  LARGE_INTEGER local_b0;
  LARGE_INTEGER local_a8;
  FStatMessage local_a0;
  FStatMessage local_90;
  FName local_80;
  FName local_78 [8];
  
  if (this->ReadRequestPtr == (IAsyncReadRequest *)0x0) {
    return true;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_FArchiveAsync2_WaitRead =
         (FThreadSafeStaticStat<_private:_bool___cdecl_FAsyncArchive::WaitRead(double)_::_5_::FStat_STAT_FArchiveAsync2_WaitRead>
          )0x0;
    pFVar12 = ::FName::FName(&local_80,"STAT_FArchiveAsync2_WaitRead");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FArchiveAsync2_WaitRead,*pFVar12,
               L"STAT_FArchiveAsync2_WaitRead","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_STAT_FArchiveAsync2_WaitRead;
  if (StatPtr_STAT_FArchiveAsync2_WaitRead ==
      (FThreadSafeStaticStat<_private:_bool___cdecl_FAsyncArchive::WaitRead(double)_::_5_::FStat_STAT_FArchiveAsync2_WaitRead>
       )0x0) {
    pFVar12 = ::FName::FName(local_78,"STAT_FArchiveAsync2_WaitRead");
    FVar13 = (FThreadSafeStaticStat<_private:_bool___cdecl_FAsyncArchive::WaitRead(double)_::_5_::FStat_STAT_FArchiveAsync2_WaitRead>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FArchiveAsync2_WaitRead,
                          *pFVar12,L"STAT_FArchiveAsync2_WaitRead","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar13;
  bVar7 = false;
  bVar6 = false;
  if ((FVar16.ComparisonIndex.Value.Value != 0) || (FVar16.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar16.ComparisonIndex.Value.Value;
        local_res18.Number = FVar16.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                   ,0x1f54);
        bVar7 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar8 = true;
      goto LAB_141f1a532;
    }
  }
  bVar8 = false;
  FVar16.ComparisonIndex.Value = 0;
  FVar16.Number = 0;
LAB_141f1a532:
  lVar2 = this->ReadRequestSize;
  local_res20 = (FName)this->ReadRequestOffset;
  if ((lVar2 < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Size > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0x1f57,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    uVar11 = (*pcVar4)();
    return (bool)uVar11;
  }
  QueryPerformanceCounter(&local_c8);
  dVar9 = __real_4170000000000000;
  pIVar3 = this->ReadRequestPtr;
  dVar5 = (double)local_c8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if (pIVar3->bCompleteAndCallbackCalled == false) {
    (**(code **)(*(longlong *)pIVar3 + 0x10))(pIVar3,(float)param_1);
    cVar17 = pIVar3->bCompleteAndCallbackCalled;
  }
  else {
    cVar17 = '\x01';
  }
  if (5 < (byte)LogAsyncArchive._0_1_) {
    FPackagePath::GetLocalFullPath(&this->PackagePath,&local_d8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
         ::__l5::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__),
       `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
       ::__l5::_thread_safe_static_guard_0__ == -1)) {
      QueryPerformanceCounter(&local_c0);
      `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
      ::__l5::GlobalStartTime =
           (double)local_c0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar9;
      _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
    }
    QueryPerformanceCounter(&local_b8);
    if (dVar5 == 0.0) {
      fVar18 = 0.0;
    }
    else {
      fVar18 = (float)((((double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar9)
                       - dVar5) * __real_408f400000000000);
    }
    if ((6 < (byte)LogAsyncArchive._0_1_) || (__real_3f800000 <= fVar18)) {
      if (lVar2 == 0x7fffffffffffffff) {
        TotalSize(this);
      }
      FGenericPlatformMisc::LowLevelOutputDebugStringf
                (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  if (cVar17 != '\0') {
    CompleteRead(this);
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar8) && (FVar16 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar14 == (FThreadStats *)0x0) {
        pFVar15 = FThreadStatsPool::Get();
        pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
      }
      if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
        local_90.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
        local_90.NameAndInfo.Index.Value = FVar16.ComparisonIndex.Value.Value;
        QueryPerformanceCounter(&local_a8);
        local_90.StatData.Pad[4] = '\0';
        local_90.StatData.Pad[5] = '\0';
        local_90.StatData.Pad[6] = '\0';
        local_90.StatData.Pad[7] = '\0';
        local_90.StatData.Pad[0] = local_a8.s.LowPart._0_1_;
        local_90.StatData.Pad[1] = local_a8.s.LowPart._1_1_;
        local_90.StatData.Pad[2] = local_a8.s.LowPart._2_1_;
        local_90.StatData.Pad[3] = local_a8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar14,&local_90);
        piVar1 = &pFVar14->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar14,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar14,false,false);
        }
      }
    }
    return true;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_a0.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      local_a0.NameAndInfo.Index.Value = FVar16.ComparisonIndex.Value.Value;
      QueryPerformanceCounter(&local_b0);
      local_a0.StatData.Pad[4] = '\0';
      local_a0.StatData.Pad[5] = '\0';
      local_a0.StatData.Pad[6] = '\0';
      local_a0.StatData.Pad[7] = '\0';
      local_a0.StatData.Pad[0] = local_b0.s.LowPart._0_1_;
      local_a0.StatData.Pad[1] = local_b0.s.LowPart._1_1_;
      local_a0.StatData.Pad[2] = local_b0.s.LowPart._2_1_;
      local_a0.StatData.Pad[3] = local_b0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar14,&local_a0);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
        return false;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  return false;
}

