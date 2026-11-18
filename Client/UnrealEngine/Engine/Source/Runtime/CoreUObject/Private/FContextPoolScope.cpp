// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// FContextPoolScope @ 142010d90

FContextPoolScope * __thiscall UE::GC::FContextPoolScope::FContextPoolScope(FContextPoolScope *this)

{
  code *pcVar1;
  bool bVar2;
  FContextPoolScope *pFVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::GC::FContextPoolScope::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  this->Pool = &::Singleton;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x3d7,L"Context pool use restricted to game thread");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FContextPoolScope *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// AllocateFromPool @ 142021ef0

FWorkerContext * __thiscall UE::GC::FContextPoolScope::AllocateFromPool(FContextPoolScope *this)

{
  int *piVar1;
  FContextPool *pFVar2;
  FScriptContainerElement *pFVar3;
  FWorkerContext *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FWorkerContext *pFVar7;
  longlong lVar8;
  
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x3d7,L"Context pool use restricted to game thread");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FWorkerContext *)(*pcVar4)();
      return pFVar7;
    }
  }
  piVar1 = &this->Pool->NumAllocated;
  *piVar1 = *piVar1 + 1;
  pFVar2 = this->Pool;
  iVar6 = (pFVar2->Reusable).ArrayNum;
  if (iVar6 == 0) {
    pFVar7 = ::operator_new(0x100,0x40);
    if (pFVar7 != (FWorkerContext *)0x0) {
      pFVar7 = FWorkerContext::FWorkerContext(pFVar7);
      return pFVar7;
    }
    return (FWorkerContext *)0x0;
  }
  if (iVar6 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FWorkerContext *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar3 = (pFVar2->Reusable).AllocatorInstance.Data;
  lVar8 = (longlong)(pFVar2->Reusable).ArrayNum;
  pFVar7 = *(FWorkerContext **)(pFVar3 + lVar8 * 8 + -8);
  *(undefined8 *)(pFVar3 + lVar8 * 8 + -8) = 0;
  iVar6 = (pFVar2->Reusable).ArrayNum;
  pFVar3 = (pFVar2->Reusable).AllocatorInstance.Data;
  this_00 = *(FWorkerContext **)(pFVar3 + (longlong)iVar6 * 8 + -8);
  pFVar3 = pFVar3 + (longlong)iVar6 * 8;
  if (this_00 != (FWorkerContext *)0x0) {
    FWorkerContext::~FWorkerContext(this_00);
    ::operator_delete(this_00,0x100,0x40);
  }
  iVar6 = (pFVar2->Reusable).ArrayNum - iVar6;
  if (iVar6 != 0) {
    memmove(pFVar3 + -8,pFVar3,(longlong)iVar6 << 3);
  }
  piVar1 = &(pFVar2->Reusable).ArrayNum;
  *piVar1 = *piVar1 + -1;
  Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,(ForAnyElementType *)pFVar2,(pFVar2->Reusable).ArrayNum,
             &(pFVar2->Reusable).ArrayMax);
  FWorkerContext::AllocateWorkerIndex(pFVar7);
  return pFVar7;
}

// Cleanup @ 142023830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::GC::FContextPoolScope::Cleanup(FContextPoolScope *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FContextPool *pFVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar3 = this->Pool;
  pFVar6 = (pFVar3->Reusable).AllocatorInstance.Data;
  iVar2 = (pFVar3->Reusable).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pFVar3->Reusable).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<UE::GC::FWorkerContext,TDefaultDelete<UE::GC::FWorkerContext>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    if (*(int *)(*(longlong *)pFVar6 + 0x58) != 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context->WeakReferences.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x40a,L"Cleaning up with active weak references");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar6 = pFVar6 + 8;
  }
  if (4 < (byte)LogGarbage._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage);
  }
  pFVar3 = this->Pool;
  DestructItems<TUniquePtr<UE::GC::FWorkerContext,TDefaultDelete<UE::GC::FWorkerContext>_>,int>
            ((TUniquePtr<UE::GC::FWorkerContext,TDefaultDelete<UE::GC::FWorkerContext>_> *)
             (pFVar3->Reusable).AllocatorInstance.Data,(pFVar3->Reusable).ArrayNum);
  (pFVar3->Reusable).ArrayNum = 0;
  if ((pFVar3->Reusable).ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)pFVar3,0,&(pFVar3->Reusable).ArrayMax);
  }
  return;
}

// Get @ 1420548b0

FContextPool * __cdecl UE::GC::FContextPoolScope::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::GC::FContextPoolScope::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Singleton;
}

// ReturnToPool @ 14208e8b0

void __thiscall
UE::GC::FContextPoolScope::ReturnToPool(FContextPoolScope *this,FWorkerContext *param_1)

{
  int *piVar1;
  FContextPool *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  uint uStack_c;
  
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x3d7,L"Context pool use restricted to game thread");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->Pool->NumAllocated < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pool.NumAllocated >= 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x3fc,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  piVar1 = &this->Pool->NumAllocated;
  *piVar1 = *piVar1 + -1;
  FWorkerContext::FreeWorkerIndex(param_1);
  uStack_c = uStack_c & 0xffffff00;
  lVar4 = (ulonglong)uStack_c << 0x20;
  (param_1->Stats).NumObjects = 0;
  (param_1->Stats).NumReferences = 0;
  (param_1->Stats).NumVerseCells = (int)lVar4;
  (param_1->Stats).bFoundGarbageRef = (bool)(char)((ulonglong)lVar4 >> 0x20);
  *(int3 *)&(param_1->Stats).field_0xd = (int3)((ulonglong)lVar4 >> 0x28);
  (param_1->IncrementalStructs).Wip = (FStructArrayBlock *)0x0;
  (param_1->IncrementalStructs).WipIt = (FStructArray *)0x0;
  param_1->bIsSuspended = false;
  pFVar2 = this->Pool;
  piVar1 = &(pFVar2->Reusable).ArrayMax;
  iVar6 = (pFVar2->Reusable).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar2,piVar1);
  }
  (pFVar2->Reusable).ArrayNum = iVar6 + 1;
  *(FWorkerContext **)((pFVar2->Reusable).AllocatorInstance.Data + (longlong)iVar6 * 8) = param_1;
  return;
}

