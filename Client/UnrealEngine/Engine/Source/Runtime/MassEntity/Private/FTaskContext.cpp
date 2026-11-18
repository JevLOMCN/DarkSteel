// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// GetCommandBuffer @ 14721ff00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<FMassCommandBuffer,1> * __thiscall
`FMassEntityQuery::ParallelForEachEntityChunk'::__l108::FTaskContext::GetCommandBuffer
          (void *this,TSharedPtr<FMassCommandBuffer,1> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  atomic<int> aVar4;
  DWORD DVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<FMassCommandBuffer,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *local_28;
  FSharedReferencer<1> FStack_20;
  
  lVar1 = *(longlong *)this;
  if (lVar1 == 0) {
    pTVar6 = ::operator_new(0x70);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      local_28 = ___xmm_00000000000000000000000000000010;
      pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FStack_20.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      pTVar6->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_UFMassCommandBuffer___00_SharedPointerInternals__6B_
      ;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar6 + 1),4000);
      pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[4]._padding_ = 0;
      pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar6[5]._padding_ = 0;
      pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[5].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&pTVar6[6]._padding_ = 0;
      *(undefined1 *)((longlong)&pTVar6[6]._padding_ + 4) = 0;
      aVar4 = (atomic<int>)GetCurrentThreadId();
      pTVar8 = pTVar6 + 1;
      pTVar6[6].SharedReferenceCount = aVar4;
      if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TSharedPtr<FMassCommandBuffer,1> *)(*pcVar2)();
          return pTVar7;
        }
      }
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      FStack_20.ReferenceController = pTVar6;
      local_28 = pTVar8;
    }
    if (this != &local_28) {
      *(TReferenceControllerBase<1> **)this = pTVar8;
      local_28 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)((longlong)this + 8),&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  else {
    DVar5 = GetCurrentThreadId();
    *(DWORD *)(lVar1 + 0x58) = DVar5;
  }
  __return_storage_ptr__->Object = *(FMassCommandBuffer **)this;
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

