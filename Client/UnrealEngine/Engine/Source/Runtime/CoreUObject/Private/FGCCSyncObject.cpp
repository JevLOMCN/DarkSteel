// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// FGCCSyncObject @ 142010e70

FGCCSyncObject * __thiscall FGCCSyncObject::FGCCSyncObject(FGCCSyncObject *this)

{
  FEvent *pFVar1;
  
  (this->AsyncCounter).Counter = 0;
  (this->GCCounter).Counter = 0;
  this->GCWantsToRunCounter = (TAtomic<int>)0x0;
  this->SharedMutex = (atomic<unsigned_int>)0x0;
  pFVar1 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  this->GCUnlockedEvent = pFVar1;
  UE::Private::SetIsGCLockedFunction(IsGarbageCollectionLocked);
  return this;
}

// ~FGCCSyncObject @ 1420131e0

void __thiscall FGCCSyncObject::~FGCCSyncObject(FGCCSyncObject *this)

{
  FGenericPlatformProcess::ReturnSynchEventToPool(this->GCUnlockedEvent);
  this->GCUnlockedEvent = (FEvent *)0x0;
  UE::Private::SetIsGCLockedFunction((_func___cdecl_bool *)0x0);
  return;
}

// Create @ 142025ab0

void __cdecl FGCCSyncObject::Create(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      MagicStaticSingleton.Singleton.GCUnlockedEvent =
           FGenericPlatformProcess::GetSynchEventFromPool(true);
      UE::Private::SetIsGCLockedFunction(IsGarbageCollectionLocked);
      GGCSingleton = &MagicStaticSingleton.Singleton;
      atexit(`FGCCSyncObject::Create'::__l2::_dynamic_atexit_destructor_for__MagicStaticSingleton__)
      ;
      _Init_thread_footer(&::_TSS0);
      return;
    }
  }
  return;
}

// Get @ 142054920

FGCCSyncObject * __cdecl FGCCSyncObject::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FGCCSyncObject *pFVar3;
  
  pFVar3 = GGCSingleton;
  if (GGCSingleton == (FGCCSyncObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Singleton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0xbc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FGCCSyncObject *)(*pcVar1)();
      return pFVar3;
    }
  }
  return pFVar3;
}

