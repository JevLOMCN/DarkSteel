// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FScopeCoreRedirectsContext @ 141fbe8b0

FScopeCoreRedirectsContext * __thiscall
FScopeCoreRedirectsContext::FScopeCoreRedirectsContext
          (FScopeCoreRedirectsContext *this,FCoreRedirectsContext *param_1)

{
  FCoreRedirectsContext *pFVar1;
  void *pvVar2;
  TMap<FName,ECoreRedirectFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,ECoreRedirectFlags,0>_>
  *this_00;
  ulonglong uVar3;
  FCoreRedirectsContext *pFVar4;
  longlong *plVar5;
  
  (this->ScopeContext).bInitialized = param_1->bInitialized;
  (this->ScopeContext).Flags = param_1->Flags;
  (this->ScopeContext).bValidatedOnce = param_1->bValidatedOnce;
  this_00 = &(this->ScopeContext).ConfigKeyMap;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ScopeContext).ConfigKeyMap.field_0x8 = 0;
  *(undefined8 *)&(this->ScopeContext).ConfigKeyMap.field_0x20 = 0;
  *(undefined4 *)&(this->ScopeContext).ConfigKeyMap.field_0x28 = 0;
  *(undefined4 *)&(this->ScopeContext).ConfigKeyMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->ScopeContext).ConfigKeyMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ScopeContext).ConfigKeyMap.field_0x34 = 0;
  *(undefined8 *)&(this->ScopeContext).ConfigKeyMap.field_0x40 = 0;
  *(undefined4 *)&(this->ScopeContext).ConfigKeyMap.field_0x48 = 0;
  TSet<TTuple<FName,enum_ECoreRedirectFlags>,TDefaultMapHashableKeyFuncs<FName,enum_ECoreRedirectFlags,0>,FDefaultSetAllocator>
  ::operator=(this_00,(TSet<TTuple<FName,ECoreRedirectFlags>,TDefaultMapHashableKeyFuncs<FName,ECoreRedirectFlags,0>,FDefaultSetAllocator>
                       *)&param_1->ConfigKeyMap);
  FCoreRedirects::FRedirectTypeMap::FRedirectTypeMap
            (&(this->ScopeContext).RedirectTypeMap,&param_1->RedirectTypeMap);
  uVar3 = (ulonglong)_tls_index;
  (this->ScopeContext).RWLock.InternalLock.Mutex.Mutex.Ptr = (void *)0x0;
  pvVar2 = ThreadLocalStoragePointer;
  (this->ScopeContext).RWLock.WriteLockOwnerThreadId = (atomic<unsigned_int>)0x0;
  (this->ScopeContext).RWLock.RecursionCount = 0;
  plVar5 = (longlong *)(*(longlong *)((longlong)pvVar2 + uVar3 * 8) + 0xc90);
  pFVar1 = (FCoreRedirectsContext *)*plVar5;
  pFVar4 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
  if (pFVar1 != (FCoreRedirectsContext *)0x0) {
    pFVar4 = pFVar1;
  }
  this->ContextToRestore = pFVar4;
  *plVar5 = (longlong)this;
  FCoreRedirectsContext::InitializeContext(&this->ScopeContext);
  return this;
}

// FScopeCoreRedirectsContext @ 141fbe980

FScopeCoreRedirectsContext * __thiscall
FScopeCoreRedirectsContext::FScopeCoreRedirectsContext(FScopeCoreRedirectsContext *this)

{
  FCoreRedirectsContext *pFVar1;
  void *pvVar2;
  FCoreRedirectsContext *pFVar3;
  longlong *plVar4;
  
  (this->ScopeContext).bInitialized = (atomic<bool>)0x0;
  (this->ScopeContext).Flags = (atomic<FCoreRedirectsContext::EFlags>)0x6;
  (this->ScopeContext).bValidatedOnce = false;
  *(undefined8 *)&(this->ScopeContext).ConfigKeyMap = 0;
  *(undefined8 *)&(this->ScopeContext).ConfigKeyMap.field_0x8 = 0;
  *(undefined8 *)&(this->ScopeContext).ConfigKeyMap.field_0x20 = 0;
  *(undefined4 *)&(this->ScopeContext).ConfigKeyMap.field_0x28 = 0;
  *(undefined4 *)&(this->ScopeContext).ConfigKeyMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->ScopeContext).ConfigKeyMap.field_0x34 = 0;
  *(undefined4 *)&(this->ScopeContext).ConfigKeyMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ScopeContext).ConfigKeyMap.field_0x40 = 0;
  *(undefined4 *)&(this->ScopeContext).ConfigKeyMap.field_0x48 = 0;
  *(undefined8 *)&(this->ScopeContext).RedirectTypeMap.Map = 0;
  *(undefined8 *)&(this->ScopeContext).RedirectTypeMap.Map.field_0x8 = 0;
  *(undefined8 *)&(this->ScopeContext).RedirectTypeMap.Map.field_0x20 = 0;
  *(undefined4 *)&(this->ScopeContext).RedirectTypeMap.Map.field_0x28 = 0;
  *(undefined4 *)&(this->ScopeContext).RedirectTypeMap.Map.field_0x2c = 0x80;
  *(undefined4 *)&(this->ScopeContext).RedirectTypeMap.Map.field_0x34 = 0;
  *(undefined4 *)&(this->ScopeContext).RedirectTypeMap.Map.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ScopeContext).RedirectTypeMap.Map.field_0x40 = 0;
  *(undefined4 *)&(this->ScopeContext).RedirectTypeMap.Map.field_0x48 = 0;
  (this->ScopeContext).RedirectTypeMap.FastIterable.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ScopeContext).RedirectTypeMap.FastIterable.ArrayNum = 0;
  (this->ScopeContext).RedirectTypeMap.FastIterable.ArrayMax = 0;
  (this->ScopeContext).RWLock.InternalLock.Mutex.Mutex.Ptr = (void *)0x0;
  pvVar2 = ThreadLocalStoragePointer;
  (this->ScopeContext).RWLock.WriteLockOwnerThreadId = (atomic<unsigned_int>)0x0;
  (this->ScopeContext).RWLock.RecursionCount = 0;
  plVar4 = (longlong *)(*(longlong *)((longlong)pvVar2 + (ulonglong)_tls_index * 8) + 0xc90);
  pFVar1 = (FCoreRedirectsContext *)*plVar4;
  pFVar3 = &UE::CoreRedirects::Private::GlobalCoreRedirectContext;
  if (pFVar1 != (FCoreRedirectsContext *)0x0) {
    pFVar3 = pFVar1;
  }
  this->ContextToRestore = pFVar3;
  *plVar4 = (longlong)this;
  FCoreRedirectsContext::InitializeContext(&this->ScopeContext);
  return this;
}

// ~FScopeCoreRedirectsContext @ 141fbfd80

void __thiscall
FScopeCoreRedirectsContext::~FScopeCoreRedirectsContext(FScopeCoreRedirectsContext *this)

{
  *(FCoreRedirectsContext **)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc90) =
       this->ContextToRestore;
  FCoreRedirectsContext::~FCoreRedirectsContext(&this->ScopeContext);
  return;
}

