// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// ~FPinDeletionQueue @ 147b3d0a0

void __thiscall FPinDeletionQueue::~FPinDeletionQueue(FPinDeletionQueue *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  pFVar1 = (this->PinsToDelete).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->PinsToDeleteLock);
  if (BVar3 != '\0') {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->PinsToDeleteLock);
    FTickableGameObject::~FTickableGameObject((FTickableGameObject *)this);
    return;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)this);
  return;
}

// Get @ 147b633a0

FPinDeletionQueue * __cdecl FPinDeletionQueue::Get(void)

{
  FPinDeletionQueue *this;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FPinDeletionQueue*___ptr64___cdecl_FPinDeletionQueue::Get(void)'::__l2
       ::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FPinDeletionQueue*___ptr64___cdecl_FPinDeletionQueue::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FPinDeletionQueue*___ptr64___cdecl_FPinDeletionQueue::Get(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    this = ::operator_new(0x20);
    if (this != (FPinDeletionQueue *)0x0) {
      FTickableGameObject::FTickableGameObject((FTickableGameObject *)this,NewObject);
      this->_padding_ = (longlong)&___7FPinDeletionQueue__6B_;
      (this->PinsToDeleteLock).Mutex.Mutex.Ptr = (void *)0x0;
      (this->PinsToDelete).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->PinsToDelete).ArrayNum = 0;
      (this->PinsToDelete).ArrayMax = 0;
    }
    `public:_static_class_FPinDeletionQueue*___ptr64___cdecl_FPinDeletionQueue::Get(void)'::__l2::
    Instance = this;
    _Init_thread_footer(&`public:_static_class_FPinDeletionQueue*___ptr64___cdecl_FPinDeletionQueue::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    return `public:_static_class_FPinDeletionQueue*___ptr64___cdecl_FPinDeletionQueue::Get(void)'::
           __l2::Instance;
  }
  return `public:_static_class_FPinDeletionQueue*___ptr64___cdecl_FPinDeletionQueue::Get(void)'::
         __l2::Instance;
}

// GetStatId @ 147b6f890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall FPinDeletionQueue::GetStatId(FPinDeletionQueue *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_TStatId___cdecl_FPinDeletionQueue::GetStatId(void)const___ptr64'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_TStatId___cdecl_FPinDeletionQueue::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_TStatId___cdecl_FPinDeletionQueue::GetStatId(void)const___ptr64'::__l2
     ::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FPinDeletionQueue = (TAtomic<FMinimalName>)0x0;
    pFVar1 = ::FName::FName(&local_res10,"FPinDeletionQueue");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_struct_TStatId___cdecl_FPinDeletionQueue::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FPinDeletionQueue,*pFVar1,L"FPinDeletionQueue","STATGROUP_Tickables"
               ,"STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_struct_TStatId___cdecl_FPinDeletionQueue::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar2 = _StatPtr_FPinDeletionQueue;
  if (_StatPtr_FPinDeletionQueue == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FPinDeletionQueue");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &`public:_virtual_struct_TStatId___cdecl_FPinDeletionQueue::GetStatId(void)const___ptr64'
                        ::__l2::StatPtr_FPinDeletionQueue,*pFVar1,L"FPinDeletionQueue",
                       "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,true
                       ,false,MCR_Invalid);
  }
  in_RDX->Name = TVar2;
  return (TStatId)in_RDX;
}

// IsTickable @ 147b78600

bool __thiscall FPinDeletionQueue::IsTickable(FPinDeletionQueue *this)

{
  int iVar1;
  
  AcquireSRWLockShared((PSRWLOCK)&this->PinsToDeleteLock);
  iVar1 = (this->PinsToDelete).ArrayNum;
  ReleaseSRWLockShared((PSRWLOCK)&this->PinsToDeleteLock);
  return 0 < iVar1;
}

// Tick @ 147b8f360

void __thiscall FPinDeletionQueue::Tick(FPinDeletionQueue *this,float param_1)

{
  UEdGraphPin *this_00;
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->PinsToDeleteLock);
  pFVar1 = (this->PinsToDelete).AllocatorInstance.Data;
  uVar2 = (this->PinsToDelete).ArrayNum;
  (this->PinsToDelete).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PinsToDelete).ArrayNum = 0;
  (this->PinsToDelete).ArrayMax = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&this->PinsToDeleteLock);
  for (pFVar3 = pFVar1; pFVar3 != pFVar1 + (longlong)(int)uVar2 * 8; pFVar3 = pFVar3 + 8) {
    this_00 = *(UEdGraphPin **)pFVar3;
    if (this_00 != (UEdGraphPin *)0x0) {
      UEdGraphPin::~UEdGraphPin(this_00);
      ::operator_delete(this_00,0xf8);
    }
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

