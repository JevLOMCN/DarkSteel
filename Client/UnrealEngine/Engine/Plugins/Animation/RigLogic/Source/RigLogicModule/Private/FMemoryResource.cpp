// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 3

// SharedInstance @ 14a682840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<FMemoryResource,1> * __cdecl
FMemoryResource::SharedInstance(TSharedPtr<FMemoryResource,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FMemoryResource,1> *pTVar5;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_TSharedPtr<FMemoryResource,1>___cdecl_FMemoryResource::SharedInstance(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_TSharedPtr<FMemoryResource,1>___cdecl_FMemoryResource::SharedInstance(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_TSharedPtr<FMemoryResource,1>___cdecl_FMemoryResource::SharedInstance(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pTVar4 = ::operator_new(0x18);
      if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
        _MemoryResource = ___xmm_00000000000000000000000000000010;
        DAT_1552c20c8 = _UNK_150651568;
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar4->SharedReferenceCount = (atomic<int>)0x1;
        pTVar4->WeakReferenceCount = (atomic<int>)0x1;
        pTVar4->_padding_ =
             (longlong)
             &___7__TIntrusiveReferenceController_VFMemoryResource___00_SharedPointerInternals__6B_;
        pTVar4[1]._padding_ = (longlong)&___7FMemoryResource__6B_;
        if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pTVar5 = (TSharedPtr<FMemoryResource,1> *)(*pcVar2)();
            return pTVar5;
          }
        }
        LOCK();
        _MemoryResource = pTVar4 + 1;
        DAT_1552c20c8 = pTVar4;
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      atexit(`FMemoryResource::SharedInstance'::__l2::
             _dynamic_atexit_destructor_for__MemoryResource__);
      _Init_thread_footer(&`public:_static_class_TSharedPtr<FMemoryResource,1>___cdecl_FMemoryResource::SharedInstance(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  __return_storage_ptr__->Object = (FMemoryResource *)_MemoryResource;
  pTVar4 = DAT_1552c20c8;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = DAT_1552c20c8;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// allocate @ 14a689290

void * __thiscall FMemoryResource::allocate(FMemoryResource *this,ulong64 param_1,ulong64 param_2)

{
  void *pvVar1;
  
  pvVar1 = FMemory::Malloc(param_1,(uint)param_2);
  return pvVar1;
}

// deallocate @ 14a6892d0

void __thiscall
FMemoryResource::deallocate(FMemoryResource *this,void *param_1,ulong64 param_2,ulong64 param_3)

{
  FMemory::Free(param_1);
  return;
}

