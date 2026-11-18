// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebMMedia
// Functions: 2

// operator() @ 14f11aae0

void __thiscall
TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::
TDeleter::operator()(TDeleter *this,FWebMMediaAudioSample *param_1)

{
  int *piVar1;
  TStorage *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  TNode *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  char cVar6;
  atomic<int> aVar7;
  int iVar8;
  TNode *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  FWebMMediaAudioSample *local_18 [2];
  
  pTVar10 = (this->StoragePtr).WeakReferenceCount.ReferenceController;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar10->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14f11ab10;
      }
      LOCK();
      aVar7 = pTVar10->SharedReferenceCount;
      bVar11 = aVar5 == aVar7;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar11);
    lpCriticalSection = (this->StoragePtr).Object;
    if (lpCriticalSection != (TStorage *)0x0) {
      local_18[0] = param_1;
      if (param_1 != (FWebMMediaAudioSample *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        cVar6 = (**(code **)(local_18[0]->_padding_ + 0x10))();
        if (cVar6 == '\0') {
          pTVar9 = ::operator_new(0x10);
          if (pTVar9 != (TNode *)0x0) {
            pTVar9->NextNode = (TNode *)0x0;
            pTVar9->Item = local_18[0];
            pTVar3 = (lpCriticalSection->WaitReadyForReuse).Head;
            (lpCriticalSection->WaitReadyForReuse).Head = pTVar9;
            pTVar3->NextNode = pTVar9;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar10);
          return;
        }
        (**(code **)(local_18[0]->_padding_ + 8))();
        pFVar2 = (lpCriticalSection->Pool).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
            ((FScriptContainerElement *)local_18 <
             pFVar2 + (longlong)(lpCriticalSection->Pool).ArrayMax * 8)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (lpCriticalSection->Pool).ArrayNum;
        piVar1 = &(lpCriticalSection->Pool).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(lpCriticalSection->Pool).AllocatorInstance,piVar1);
        }
        (lpCriticalSection->Pool).ArrayNum = iVar8 + 1;
        *(FWebMMediaAudioSample **)
         ((lpCriticalSection->Pool).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_18[0];
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10)
        ;
        return;
      }
      goto LAB_14f11ab23;
    }
  }
LAB_14f11ab10:
  if (param_1 != (FWebMMediaAudioSample *)0x0) {
    (**(code **)(param_1->_padding_ + 0x40))(param_1,1);
  }
LAB_14f11ab23:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// operator() @ 14f11ac90

void __thiscall
TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>
::TDeleter::operator()(TDeleter *this,FWebMMediaTextureSample *param_1)

{
  int *piVar1;
  TStorage *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  TNode *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  char cVar6;
  atomic<int> aVar7;
  int iVar8;
  TNode *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  FWebMMediaTextureSample *local_18 [2];
  
  pTVar10 = (this->StoragePtr).WeakReferenceCount.ReferenceController;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar10->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14f11acc0;
      }
      LOCK();
      aVar7 = pTVar10->SharedReferenceCount;
      bVar11 = aVar5 == aVar7;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar11);
    lpCriticalSection = (this->StoragePtr).Object;
    if (lpCriticalSection != (TStorage *)0x0) {
      local_18[0] = param_1;
      if (param_1 != (FWebMMediaTextureSample *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        cVar6 = (**(code **)(local_18[0]->_padding_ + 0x10))();
        if (cVar6 == '\0') {
          pTVar9 = ::operator_new(0x10);
          if (pTVar9 != (TNode *)0x0) {
            pTVar9->NextNode = (TNode *)0x0;
            pTVar9->Item = local_18[0];
            pTVar3 = (lpCriticalSection->WaitReadyForReuse).Head;
            (lpCriticalSection->WaitReadyForReuse).Head = pTVar9;
            pTVar3->NextNode = pTVar9;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar10);
          return;
        }
        (**(code **)(local_18[0]->_padding_ + 8))();
        pFVar2 = (lpCriticalSection->Pool).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
            ((FScriptContainerElement *)local_18 <
             pFVar2 + (longlong)(lpCriticalSection->Pool).ArrayMax * 8)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (lpCriticalSection->Pool).ArrayNum;
        piVar1 = &(lpCriticalSection->Pool).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(lpCriticalSection->Pool).AllocatorInstance,piVar1);
        }
        (lpCriticalSection->Pool).ArrayNum = iVar8 + 1;
        *(FWebMMediaTextureSample **)
         ((lpCriticalSection->Pool).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_18[0];
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10)
        ;
        return;
      }
      goto LAB_14f11acd6;
    }
  }
LAB_14f11acc0:
  if (param_1 != (FWebMMediaTextureSample *)0x0) {
    (**(code **)(param_1->_padding_ + 0x138))(param_1,1);
  }
LAB_14f11acd6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

