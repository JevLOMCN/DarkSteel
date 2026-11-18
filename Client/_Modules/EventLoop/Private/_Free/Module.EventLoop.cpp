// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EventLoop
// Functions: 16

// `dynamic_initializer_for_'LogEventLoop'' @ 140f4c260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::EventLoop::_dynamic_initializer_for__LogEventLoop__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogEventLoop,L"LogEventLoop",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogEventLoop__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantEventLoop'' @ 140f4c2a0

void __cdecl _dynamic_initializer_for__ModuleRegistrantEventLoop__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "EventLoop";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"EventLoop",9);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<UE::EventLoop::FEventLoopModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 1431400c0

void * __thiscall
UE::EventLoop::FEventLoopModule::_scalar_deleting_destructor_(FEventLoopModule *this,uint param_1)

{
  *this = (FEventLoopModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// MakeShared<UE::EventLoop::FIOManagerBSDSocketSelectImpl,1,UE::EventLoop::IEventLoop_&> @ 143140760

TSharedRef<UE::EventLoop::FIOManagerBSDSocketSelectImpl,1> * __cdecl
MakeShared<UE::EventLoop::FIOManagerBSDSocketSelectImpl,1,UE::EventLoop::IEventLoop_&>
          (TSharedRef<UE::EventLoop::FIOManagerBSDSocketSelectImpl,1> *__return_storage_ptr__,
          IEventLoop *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 *puVar4;
  TSharedRef<UE::EventLoop::FIOManagerBSDSocketSelectImpl,1> *pTVar5;
  
  pTVar3 = operator_new(0x7a0);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FIOManagerBSDSocketSelectImpl *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    *(IEventLoop **)&pTVar3[99].SharedReferenceCount = param_1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFIOManagerBSDSocketSelectImpl_EventLoop_UE___00_SharedPointerInternals__6B_
    ;
    pTVar3[99]._padding_ = -1;
    pTVar3[1]._padding_ = (longlong)&___7FIOManagerBSDSocketSelectImpl_EventLoop_UE__6B_;
    pTVar3[0x65]._padding_ = 0;
    pTVar3[0x65].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x65].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[100]._padding_ = 0;
    pTVar3[100].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[100].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x66]._padding_ = 0;
    pTVar3[0x66].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x66].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar3[0x67]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar3[0x67]._padding_ + 4) = 0;
    pTVar3[0x68].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x68].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x69]._padding_ = 0;
    pTVar3[0x6b]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[0x6c]._padding_ + 4) = 0;
    pTVar3[0x67].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x67].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x68]._padding_ = 0;
    pTVar3[0x69].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x69].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x6a]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[0x6a]._padding_ + 4) = 0x80;
    pTVar3[0x6a].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar3[0x6a].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x6b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x6b].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x6c]._padding_ = 0;
    pTVar3[0x6c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x6c].WeakReferenceCount = (atomic<int>)0x0;
    puVar4 = FMemory::Malloc(0x60,0x10);
    *puVar4 = 0;
    *(undefined8 **)&pTVar3[0x6c].SharedReferenceCount = puVar4;
    pTVar3[0x6d]._padding_ = (longlong)puVar4;
    pTVar3[0x6d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x6d].WeakReferenceCount = (atomic<int>)0x0;
    puVar4 = FMemory::Malloc(0x50,0x10);
    *puVar4 = 0;
    *(undefined8 **)&pTVar3[0x6d].SharedReferenceCount = puVar4;
    pTVar3[0x6e]._padding_ = (longlong)puVar4;
    pTVar3[0x6e].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x6f]._padding_ = (longlong)(pTVar3 + 100);
    *(undefined1 *)&pTVar3[0x6f].SharedReferenceCount = 0;
    pTVar3[0x70]._padding_ = 0;
    pTVar3[0x70].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x70].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x72]._padding_ = 0;
    pTVar3[0x72].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x72].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar3[0x73]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar3[0x73]._padding_ + 4) = 0;
    pTVar3[0x74]._padding_ = 0;
    pTVar3[0x74].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x75]._padding_ = 0;
    pTVar3[0x75].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x75].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x77]._padding_ = 0;
    pTVar3[0x77].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x77].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar3[0x78]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar3[0x78]._padding_ + 4) = 0;
    pTVar3[0x79]._padding_ = 0;
    pTVar3[0x79].SharedReferenceCount = (atomic<int>)0x0;
    __return_storage_ptr__->Object = (FIOManagerBSDSocketSelectImpl *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FIOManagerBSDSocketSelectImpl *)(pTVar3 + 1) == (FIOManagerBSDSocketSelectImpl *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TSharedRef<UE::EventLoop::FIOManagerBSDSocketSelectImpl,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory>::FNode_*>_> @ 143140a70

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory>::FNode_*>_> @ 143140a80

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>_> @ 143140a90

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>_> @ 143140aa0

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory>::FNode_*> @ 143140ab0

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FAddRequest,FMemory>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*> @ 143140ac0

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,TMpscQueue<UE::EventLoop::TManagedStorage<UE::EventLoop::FIORequestBSDSocket,UE::EventLoop::FIOAccessBSDSocket::FStorageTraits>::FRemoveRequest,FMemory>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// `scalar_deleting_destructor' @ 143141110

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::EventLoop::FIOManagerBSDSocketSelectImpl,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::EventLoop::FIOManagerBSDSocketSelectImpl,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x7a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143141150

void * __thiscall
UE::EventLoop::FIOManagerBSDSocketSelect::_scalar_deleting_destructor_
          (FIOManagerBSDSocketSelect *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Impl).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143141190

void * __thiscall
UE::EventLoop::FIOManagerBSDSocketSelectImpl::_scalar_deleting_destructor_
          (FIOManagerBSDSocketSelectImpl *this,uint param_1)

{
  ~FIOManagerBSDSocketSelectImpl(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x790);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431411d0

void * __thiscall
UE::EventLoop::IIOManager::_scalar_deleting_destructor_(IIOManager *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_EventLoop @ 143145a90

void __cdecl IMPLEMENT_MODULE_EventLoop(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogEventLoop'' @ 150360480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::EventLoop::_dynamic_atexit_destructor_for__LogEventLoop__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogEventLoop);
  return;
}

