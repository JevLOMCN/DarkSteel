// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// FCoreRedirectsContext @ 141fbd560

FCoreRedirectsContext * __thiscall
FCoreRedirectsContext::FCoreRedirectsContext
          (FCoreRedirectsContext *this,FCoreRedirectsContext *param_1)

{
  this->bInitialized = param_1->bInitialized;
  this->Flags = param_1->Flags;
  this->bValidatedOnce = param_1->bValidatedOnce;
  *(undefined8 *)&this->ConfigKeyMap = 0;
  *(undefined8 *)&(this->ConfigKeyMap).field_0x8 = 0;
  *(undefined8 *)&(this->ConfigKeyMap).field_0x20 = 0;
  *(undefined4 *)&(this->ConfigKeyMap).field_0x28 = 0;
  *(undefined4 *)&(this->ConfigKeyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConfigKeyMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConfigKeyMap).field_0x34 = 0;
  *(undefined8 *)&(this->ConfigKeyMap).field_0x40 = 0;
  *(undefined4 *)&(this->ConfigKeyMap).field_0x48 = 0;
  TSet<TTuple<FName,enum_ECoreRedirectFlags>,TDefaultMapHashableKeyFuncs<FName,enum_ECoreRedirectFlags,0>,FDefaultSetAllocator>
  ::operator=(&this->ConfigKeyMap,
              (TSet<TTuple<FName,ECoreRedirectFlags>,TDefaultMapHashableKeyFuncs<FName,ECoreRedirectFlags,0>,FDefaultSetAllocator>
               *)&param_1->ConfigKeyMap);
  FCoreRedirects::FRedirectTypeMap::FRedirectTypeMap
            (&this->RedirectTypeMap,&param_1->RedirectTypeMap);
  (this->RWLock).InternalLock.Mutex.Mutex.Ptr = (void *)0x0;
  (this->RWLock).WriteLockOwnerThreadId = (atomic<unsigned_int>)0x0;
  (this->RWLock).RecursionCount = 0;
  return this;
}

// FCoreRedirectsContext @ 141fbd600

FCoreRedirectsContext * __thiscall
FCoreRedirectsContext::FCoreRedirectsContext(FCoreRedirectsContext *this)

{
  this->bInitialized = (atomic<bool>)0x0;
  *(undefined8 *)&this->ConfigKeyMap = 0;
  *(undefined8 *)&(this->ConfigKeyMap).field_0x8 = 0;
  *(undefined8 *)&(this->ConfigKeyMap).field_0x20 = 0;
  this->Flags = (atomic<FCoreRedirectsContext::EFlags>)0x6;
  this->bValidatedOnce = false;
  *(undefined4 *)&(this->ConfigKeyMap).field_0x28 = 0;
  *(undefined4 *)&(this->ConfigKeyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConfigKeyMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConfigKeyMap).field_0x34 = 0;
  *(undefined8 *)&(this->ConfigKeyMap).field_0x40 = 0;
  *(undefined4 *)&(this->ConfigKeyMap).field_0x48 = 0;
  *(undefined8 *)&(this->RedirectTypeMap).Map = 0;
  *(undefined8 *)&(this->RedirectTypeMap).Map.field_0x8 = 0;
  *(undefined8 *)&(this->RedirectTypeMap).Map.field_0x20 = 0;
  *(undefined4 *)&(this->RedirectTypeMap).Map.field_0x28 = 0;
  *(undefined4 *)&(this->RedirectTypeMap).Map.field_0x2c = 0x80;
  *(undefined4 *)&(this->RedirectTypeMap).Map.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RedirectTypeMap).Map.field_0x34 = 0;
  *(undefined8 *)&(this->RedirectTypeMap).Map.field_0x40 = 0;
  *(undefined4 *)&(this->RedirectTypeMap).Map.field_0x48 = 0;
  (this->RedirectTypeMap).FastIterable.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RedirectTypeMap).FastIterable.ArrayNum = 0;
  (this->RedirectTypeMap).FastIterable.ArrayMax = 0;
  (this->RWLock).InternalLock.Mutex.Mutex.Ptr = (void *)0x0;
  (this->RWLock).WriteLockOwnerThreadId = (atomic<unsigned_int>)0x0;
  (this->RWLock).RecursionCount = 0;
  return this;
}

// ~FCoreRedirectsContext @ 141fbfb70

void __thiscall FCoreRedirectsContext::~FCoreRedirectsContext(FCoreRedirectsContext *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->RWLock);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->RWLock);
  }
  DestructItems<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,int>
            ((TTuple<ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap> *)
             (this->RedirectTypeMap).FastIterable.AllocatorInstance.Data,
             (this->RedirectTypeMap).FastIterable.ArrayNum);
  pFVar1 = (this->RedirectTypeMap).FastIterable.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->RedirectTypeMap).Map.field_0x48 = 0;
  pvVar2 = *(void **)&(this->RedirectTypeMap).Map.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->RedirectTypeMap);
  *(undefined4 *)&(this->ConfigKeyMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ConfigKeyMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,enum_ECoreRedirectFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,enum_ECoreRedirectFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ConfigKeyMap);
  return;
}

// operator= @ 141fc09f0

FCoreRedirectsContext * __thiscall
FCoreRedirectsContext::operator=(FCoreRedirectsContext *this,FCoreRedirectsContext *param_1)

{
  this->bInitialized = param_1->bInitialized;
  this->Flags = param_1->Flags;
  this->bValidatedOnce = param_1->bValidatedOnce;
  TSet<TTuple<FName,enum_ECoreRedirectFlags>,TDefaultMapHashableKeyFuncs<FName,enum_ECoreRedirectFlags,0>,FDefaultSetAllocator>
  ::operator=(&this->ConfigKeyMap,
              (TSet<TTuple<FName,ECoreRedirectFlags>,TDefaultMapHashableKeyFuncs<FName,ECoreRedirectFlags,0>,FDefaultSetAllocator>
               *)&param_1->ConfigKeyMap);
  FCoreRedirects::FRedirectTypeMap::operator=(&this->RedirectTypeMap,&param_1->RedirectTypeMap);
  return this;
}

// GetGlobalContext @ 141fcf840

FCoreRedirectsContext * __cdecl FCoreRedirectsContext::GetGlobalContext(void)

{
  return &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
}

// GetThreadContext @ 141fd3120

FCoreRedirectsContext * __cdecl FCoreRedirectsContext::GetThreadContext(void)

{
  FCoreRedirectsContext *pFVar1;
  FCoreRedirectsContext *pFVar2;
  
  pFVar1 = *(FCoreRedirectsContext **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc90)
  ;
  pFVar2 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
  if (pFVar1 != (FCoreRedirectsContext *)0x0) {
    pFVar2 = pFVar1;
  }
  return pFVar2;
}

// InitializeContext @ 141fd4f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __thiscall FCoreRedirectsContext::InitializeContext(FCoreRedirectsContext *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  atomic<unsigned_int> aVar4;
  wchar_t *pwVar5;
  _func___cdecl_void *p_Var6;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> local_178;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined1 local_158 [8];
  undefined1 local_150 [8];
  undefined1 local_148 [8];
  undefined1 local_140 [20];
  FName local_12c;
  FName local_124;
  FName local_11c;
  FName local_114;
  FName local_10c;
  FName local_104;
  undefined1 local_fc [12];
  atomic<bool> local_f0;
  undefined1 *local_e8;
  undefined4 *local_e0;
  undefined1 *local_d8;
  undefined4 *local_d0;
  FName *local_c8;
  undefined4 *local_c0;
  FName *local_b8;
  undefined4 *local_b0;
  FName *local_a8;
  undefined4 *local_a0;
  FName *local_98;
  undefined4 *local_90;
  FName *local_88;
  undefined4 *local_80;
  FName *local_78;
  undefined4 *local_70;
  FCoreRedirect *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FString local_58;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  TArrayView<FCoreRedirect_const_,int> local_38;
  
  local_f0 = this->bInitialized;
  if (local_f0 != (atomic<bool>)0x0) {
    return;
  }
  local_fc._4_8_ = this;
  aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
  if ((this->RWLock).WriteLockOwnerThreadId != aVar4) {
    AcquireSRWLockExclusive((PSRWLOCK)&this->RWLock);
    LOCK();
    (this->RWLock).WriteLockOwnerThreadId = aVar4;
    UNLOCK();
  }
  piVar1 = &(this->RWLock).RecursionCount;
  *piVar1 = *piVar1 + 1;
  pwVar5 = FCommandLine::Get();
  bVar3 = FParse::Param(pwVar5,L"FullDebugCoreRedirects");
  if (bVar3) {
    this->Flags = (atomic<FCoreRedirectsContext::EFlags>)((uint)this->Flags | 1);
    FLogCategoryBase::SetVerbosity((FLogCategoryBase *)&LogCoreRedirects,All);
    p_Var6 = (_func___cdecl_void *)local_48;
  }
  else {
    pwVar5 = FCommandLine::Get();
    bVar3 = FParse::Param(pwVar5,L"DebugCoreRedirects");
    if (!bVar3) goto LAB_141fd5038;
    this->Flags = (atomic<FCoreRedirectsContext::EFlags>)((uint)this->Flags | 1);
    FLogCategoryBase::SetVerbosity((FLogCategoryBase *)&LogCoreRedirects,Verbose);
    p_Var6 = (_func___cdecl_void *)local_40;
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnFEngineLoopInitComplete,p_Var6);
LAB_141fd5038:
  local_res8[0] = 1;
  ::FName::FName((FName *)(local_140 + 4),L"ObjectRedirects");
  local_e8 = local_140 + 4;
  local_e0 = local_res8;
  TSet<TTuple<FName,enum_ECoreRedirectFlags>,TDefaultMapHashableKeyFuncs<FName,enum_ECoreRedirectFlags,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,enum_ECoreRedirectFlags_&&>_>
            (&this->ConfigKeyMap,(TPairInitializer<FName_&&,ECoreRedirectFlags_&&> *)local_fc,
             (bool *)&local_e8);
  local_res10[0] = 2;
  ::FName::FName((FName *)(local_140 + 0xc),L"ClassRedirects");
  local_d8 = local_140 + 0xc;
  local_d0 = local_res10;
  TSet<TTuple<FName,enum_ECoreRedirectFlags>,TDefaultMapHashableKeyFuncs<FName,enum_ECoreRedirectFlags,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,enum_ECoreRedirectFlags_&&>_>
            (&this->ConfigKeyMap,(TPairInitializer<FName_&&,ECoreRedirectFlags_&&> *)local_158,
             (bool *)&local_d8);
  local_res18[0] = 4;
  ::FName::FName(&local_12c,L"StructRedirects");
  local_c8 = &local_12c;
  local_c0 = local_res18;
  TSet<TTuple<FName,enum_ECoreRedirectFlags>,TDefaultMapHashableKeyFuncs<FName,enum_ECoreRedirectFlags,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,enum_ECoreRedirectFlags_&&>_>
            (&this->ConfigKeyMap,(TPairInitializer<FName_&&,ECoreRedirectFlags_&&> *)(local_158 + 4)
             ,(bool *)&local_c8);
  local_res20[0] = 8;
  ::FName::FName(&local_124,L"EnumRedirects");
  local_b8 = &local_124;
  local_b0 = local_res20;
  TSet<TTuple<FName,enum_ECoreRedirectFlags>,TDefaultMapHashableKeyFuncs<FName,enum_ECoreRedirectFlags,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,enum_ECoreRedirectFlags_&&>_>
            (&this->ConfigKeyMap,(TPairInitializer<FName_&&,ECoreRedirectFlags_&&> *)local_150,
             (bool *)&local_b8);
  local_168 = 0x10;
  ::FName::FName(&local_11c,L"FunctionRedirects");
  local_a8 = &local_11c;
  local_a0 = &local_168;
  TSet<TTuple<FName,enum_ECoreRedirectFlags>,TDefaultMapHashableKeyFuncs<FName,enum_ECoreRedirectFlags,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,enum_ECoreRedirectFlags_&&>_>
            (&this->ConfigKeyMap,(TPairInitializer<FName_&&,ECoreRedirectFlags_&&> *)(local_150 + 4)
             ,(bool *)&local_a8);
  local_164 = 0x20;
  ::FName::FName(&local_114,L"PropertyRedirects");
  local_98 = &local_114;
  local_90 = &local_164;
  TSet<TTuple<FName,enum_ECoreRedirectFlags>,TDefaultMapHashableKeyFuncs<FName,enum_ECoreRedirectFlags,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,enum_ECoreRedirectFlags_&&>_>
            (&this->ConfigKeyMap,(TPairInitializer<FName_&&,ECoreRedirectFlags_&&> *)local_148,
             (bool *)&local_98);
  local_160 = 0x40;
  ::FName::FName(&local_10c,L"PackageRedirects");
  local_88 = &local_10c;
  local_80 = &local_160;
  TSet<TTuple<FName,enum_ECoreRedirectFlags>,TDefaultMapHashableKeyFuncs<FName,enum_ECoreRedirectFlags,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,enum_ECoreRedirectFlags_&&>_>
            (&this->ConfigKeyMap,(TPairInitializer<FName_&&,ECoreRedirectFlags_&&> *)(local_148 + 4)
             ,(bool *)&local_88);
  local_15c = 0x80;
  ::FName::FName(&local_104,L"AssetRedirects");
  local_78 = &local_104;
  local_70 = &local_15c;
  TSet<TTuple<FName,enum_ECoreRedirectFlags>,TDefaultMapHashableKeyFuncs<FName,enum_ECoreRedirectFlags,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,enum_ECoreRedirectFlags_&&>_>
            (&this->ConfigKeyMap,(TPairInitializer<FName_&&,ECoreRedirectFlags_&&> *)local_140,
             (bool *)&local_78);
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  RegisterNativeRedirects40(&local_178);
  RegisterNativeRedirects46(&local_178);
  RegisterNativeRedirects49(&local_178);
  ::FString::FString(&local_58,L"RegisterNativeRedirects");
  iStack_60 = local_178.ArrayNum;
  local_68 = (FCoreRedirect *)local_178.AllocatorInstance.Data;
  if ((local_178.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_38._12_4_ = uStack_5c;
  local_38.ArrayNum = iStack_60;
  local_38.DataPtr = local_68;
  FCoreRedirects::AddRedirectListUnderWriteLock
            (&local_38,&local_58,(FScopeCoreRedirectsWriteLockedContext *)(local_fc + 4));
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  DestructItems<FCoreRedirect,int>
            ((FCoreRedirect *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
  if ((FCoreRedirect *)local_178.AllocatorInstance.Data != (FCoreRedirect *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  FCoreRedirects::FRedirectTypeMap::FindOrAdd
            (&this->RedirectTypeMap,Option_MissingLoad|Category_Removed|Type_Package);
  this->bInitialized = (atomic<bool>)0x1;
  FScopeCoreRedirectsWriteLockedContext::~FScopeCoreRedirectsWriteLockedContext
            ((FScopeCoreRedirectsWriteLockedContext *)(local_fc + 4));
  return;
}

// SetThreadContext @ 141fe9290

void __cdecl FCoreRedirectsContext::SetThreadContext(FCoreRedirectsContext *param_1)

{
  *(FCoreRedirectsContext **)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc90) =
       param_1;
  return;
}

