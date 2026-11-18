// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 15

// ~FCameraEvaluationContextStack @ 14d5446c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationContextStack::~FCameraEvaluationContextStack
          (FCameraEvaluationContextStack *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  FCameraEvaluationContextDeactivateParams local_res10 [8];
  
  iVar2 = (this->Entries).ArrayNum;
  pFVar8 = (this->Entries).AllocatorInstance.Data;
  pFVar7 = pFVar8 + (longlong)iVar2 * 0x10;
  do {
    while( true ) {
      if ((this->Entries).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::Cameras::FCameraEvaluationContextStack::FContextEntry,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar7) {
        piVar1 = &(this->Entries).ArrayMax;
        pFVar8 = (this->Entries).AllocatorInstance.Data;
        iVar2 = (this->Entries).ArrayNum;
        if ((this->Entries).ArrayMax < 0) {
          DestructItems<UE::Cameras::FCameraEvaluationContextStack::FContextEntry,int>
                    ((FContextEntry *)pFVar8,iVar2);
          (this->Entries).ArrayNum = 0;
          if (*piVar1 != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
          }
        }
        else {
          DestructItems<UE::Cameras::FCameraEvaluationContextStack::FContextEntry,int>
                    ((FContextEntry *)pFVar8,iVar2);
          (this->Entries).ArrayNum = 0;
        }
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&this->OnStackChangedEvent);
        DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
                  (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
                    &(this->OnStackChangedEvent).field_0x8,
                   *(int *)&(this->OnStackChangedEvent).field_0x10);
        pvVar3 = *(void **)&(this->OnStackChangedEvent).field_0x8;
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)&this->OnStackChangedEvent);
        DestructItems<UE::Cameras::FCameraEvaluationContextStack::FContextEntry,int>
                  ((FContextEntry *)(this->Entries).AllocatorInstance.Data,(this->Entries).ArrayNum)
        ;
        pFVar8 = (this->Entries).AllocatorInstance.Data;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        return;
      }
      pTVar6 = *(TReferenceControllerBase<1> **)(pFVar8 + 8);
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) break;
LAB_14d544720:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      pFVar8 = pFVar8 + 0x10;
    }
    aVar4 = pTVar6->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d544720;
      }
      LOCK();
      aVar5 = pTVar6->SharedReferenceCount;
      bVar9 = aVar4 == aVar5;
      if (bVar9) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar9);
    if (*(FCameraEvaluationContext **)pFVar8 == (FCameraEvaluationContext *)0x0) goto LAB_14d544720;
    FCameraEvaluationContext::Deactivate(*(FCameraEvaluationContext **)pFVar8,local_res10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    pFVar8 = pFVar8 + 0x10;
  } while( true );
}

// AddChildContext @ 14d546810

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraEvaluationContextStack::AddChildContext
          (FCameraEvaluationContextStack *this,
          TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *param_1,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FCameraDirectorEvaluator *this_00;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FCameraEvaluationContext *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FSharedReferencer<1> FVar8;
  FScriptContainerElement *pFVar9;
  FCameraEvaluationContext *pFVar10;
  bool bVar11;
  undefined1 local_res18 [16];
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> local_58;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_48;
  
  if (param_2->Object == (FCameraEvaluationContext *)0x0) {
    iVar1 = (this->Entries).ArrayNum;
    if (iVar1 != 0) {
      pFVar2 = (this->Entries).AllocatorInstance.Data;
      pFVar9 = pFVar2 + (longlong)iVar1 * 0x10;
      do {
        if ((this->Entries).ArrayNum != iVar1) {
          `TCheckedPointerIterator<UE::Cameras::FCameraEvaluationContextStack::FContextEntry_const_,int,1>
          ::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (pFVar9 == pFVar2) {
          pFVar5 = (FCameraEvaluationContext *)0x0;
          local_58.Object = (FCameraEvaluationContext *)0x0;
          local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          FVar8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14d5468cf;
        }
        FVar8.ReferenceController = *(TReferenceControllerBase<1> **)(pFVar9 + -8);
        if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          aVar3 = (FVar8.ReferenceController)->SharedReferenceCount;
          do {
            if (aVar3 == (atomic<int>)0x0) {
              FVar8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
              goto LAB_14d546890;
            }
            LOCK();
            aVar4 = (FVar8.ReferenceController)->SharedReferenceCount;
            bVar11 = aVar3 == aVar4;
            if (bVar11) {
              (FVar8.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
              aVar4 = aVar3;
            }
            UNLOCK();
            aVar3 = aVar4;
          } while (!bVar11);
          pFVar5 = *(FCameraEvaluationContext **)(pFVar9 + -0x10);
          if (pFVar5 != (FCameraEvaluationContext *)0x0) goto code_r0x00014d5468a7;
        }
LAB_14d546890:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar8.ReferenceController);
        pFVar9 = pFVar9 + -0x10;
      } while( true );
    }
  }
LAB_14d54690a:
  if (param_2->Object == (FCameraEvaluationContext *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    return false;
  }
  pTVar6 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar5 = param_1->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  iVar1 = (this->Entries).ArrayNum;
  pFVar9 = pFVar2;
  do {
    if (pFVar9 == pFVar2 + (longlong)iVar1 * 0x10) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_14d5469b2:
      if (((param_2->Object == (FCameraEvaluationContext *)0x0) ||
          (param_2->Object != param_1->Object)) ||
         (bVar11 = `UE::Cameras::FCameraEvaluationContextStack::AddChildContext'::__l12::<lambda_2>
                   ::operator()(local_res18), bVar11)) {
        pFVar5 = TSharedPtr<UE::Cameras::FCameraEvaluationContext,1>::operator->(param_2);
        this_00 = pFVar5->DirectorEvaluator;
        if ((this_00 != (FCameraDirectorEvaluator *)0x0) ||
           (bVar11 = `UE::Cameras::FCameraEvaluationContextStack::AddChildContext'::__l15::
                     <lambda_3>::operator()(local_res18), bVar11)) {
          local_48.Object = param_1->Object;
          local_48.SharedReferenceCount.ReferenceController =
               (param_1->SharedReferenceCount).ReferenceController;
          if (local_48.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          bVar11 = FCameraDirectorEvaluator::AddChildEvaluationContext(this_00,&local_48);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((param_1->SharedReferenceCount).ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((param_2->SharedReferenceCount).ReferenceController);
          return bVar11;
        }
      }
      pTVar6 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14d546a02:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->SharedReferenceCount).ReferenceController);
      return false;
    }
    pTVar7 = *(TReferenceControllerBase<1> **)(pFVar9 + 8);
    pFVar10 = (FCameraEvaluationContext *)0x0;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar7->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar7 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14d546994;
        }
        LOCK();
        aVar4 = pTVar7->SharedReferenceCount;
        bVar11 = aVar3 == aVar4;
        if (bVar11) {
          pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar4 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar4;
      } while (!bVar11);
      pFVar10 = *(FCameraEvaluationContext **)pFVar9;
    }
LAB_14d546994:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    if (pFVar5 == pFVar10) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      if ((int)((longlong)pFVar9 - (longlong)pFVar2 >> 4) == -1) goto LAB_14d5469b2;
      pTVar6 = (param_1->SharedReferenceCount).ReferenceController;
      goto LAB_14d546a02;
    }
    pFVar9 = pFVar9 + 0x10;
  } while( true );
code_r0x00014d5468a7:
  local_58.Object = pFVar5;
  local_58.SharedReferenceCount.ReferenceController = FVar8.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
LAB_14d5468cf:
  if (param_2 != &local_58) {
    param_2->Object = pFVar5;
    local_58.Object = (FCameraEvaluationContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_2->SharedReferenceCount,&local_58.SharedReferenceCount);
    FVar8.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  goto LAB_14d54690a;
}

// AddReferencedObjects @ 14d547970

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationContextStack::AddReferencedObjects
          (FCameraEvaluationContextStack *this,FReferenceCollector *param_1)

{
  int iVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Entries).ArrayNum;
  pFVar6 = (this->Entries).AllocatorInstance.Data;
  pFVar5 = pFVar6 + (longlong)iVar1 * 0x10;
  do {
    while( true ) {
      if ((this->Entries).ArrayNum != iVar1) {
        `TCheckedPointerIterator<UE::Cameras::FCameraEvaluationContextStack::FContextEntry,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar5) {
        return;
      }
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) break;
LAB_14d5479d5:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      pFVar6 = pFVar6 + 0x10;
    }
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d5479d5;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar7 = aVar2 == aVar3;
      if (bVar7) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar7);
    if (*(FCameraEvaluationContext **)pFVar6 == (FCameraEvaluationContext *)0x0) goto LAB_14d5479d5;
    FCameraEvaluationContext::AddReferencedObjects(*(FCameraEvaluationContext **)pFVar6,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pFVar6 = pFVar6 + 0x10;
  } while( true );
}

// GetActiveContext @ 14d556050

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> * __thiscall
UE::Cameras::FCameraEvaluationContextStack::GetActiveContext
          (FCameraEvaluationContextStack *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Entries).ArrayNum;
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  pFVar6 = pFVar2 + (longlong)iVar1 * 0x10;
  do {
    if ((this->Entries).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Cameras::FCameraEvaluationContextStack::FContextEntry_const_,int,1>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar2) {
      __return_storage_ptr__->Object = (FCameraEvaluationContext *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    pTVar5 = *(TReferenceControllerBase<1> **)(pFVar6 + -8);
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar5->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar5 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14d5560b4;
        }
        LOCK();
        aVar4 = pTVar5->SharedReferenceCount;
        bVar7 = aVar3 == aVar4;
        if (bVar7) {
          pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar4 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar4;
      } while (!bVar7);
      if (*(FCameraEvaluationContext **)(pFVar6 + -0x10) != (FCameraEvaluationContext *)0x0) {
        __return_storage_ptr__->Object = *(FCameraEvaluationContext **)(pFVar6 + -0x10);
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return __return_storage_ptr__;
      }
    }
LAB_14d5560b4:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    pFVar6 = pFVar6 + -0x10;
  } while( true );
}

// GetAllContexts @ 14d556110

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationContextStack::GetAllContexts
          (FCameraEvaluationContextStack *this,
          TArray<TSharedPtr<UE::Cameras::FCameraEvaluationContext,1>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  longlong local_28;
  TReferenceControllerBase<1> *local_20;
  
  iVar1 = (this->Entries).ArrayNum;
  pFVar8 = (this->Entries).AllocatorInstance.Data;
  pFVar7 = pFVar8 + (longlong)iVar1 * 0x10;
  do {
    if ((this->Entries).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Cameras::FCameraEvaluationContextStack::FContextEntry_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar7) {
      return;
    }
    local_20 = *(TReferenceControllerBase<1> **)(pFVar8 + 8);
    local_28 = 0;
    if (local_20 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = local_20->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          local_20 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14d5561aa;
        }
        LOCK();
        aVar4 = local_20->SharedReferenceCount;
        bVar9 = aVar3 == aVar4;
        if (bVar9) {
          local_20->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar4 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar4;
      } while (!bVar9);
      if (local_20 != (TReferenceControllerBase<1> *)0x0) {
        local_28 = *(longlong *)pFVar8;
      }
    }
LAB_14d5561aa:
    if (local_28 != 0) {
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= (FScriptContainerElement *)&local_28) &&
          ((FScriptContainerElement *)&local_28 < pFVar6 + (longlong)param_1->ArrayMax * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = param_1->ArrayNum;
      if (iVar5 == param_1->ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      pFVar6 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      param_1->ArrayNum = iVar5 + 1;
      *(longlong *)pFVar6 = local_28;
      *(TReferenceControllerBase<1> **)(pFVar6 + 8) = local_20;
      if (local_20 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    pFVar8 = pFVar8 + 0x10;
  } while( true );
}

// HasContext @ 14d558f20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraEvaluationContextStack::HasContext
          (FCameraEvaluationContextStack *this,
          TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FCameraEvaluationContext *pFVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  FCameraEvaluationContext *pFVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Entries).ArrayNum;
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  pFVar8 = pFVar2 + (longlong)iVar1 * 0x10;
  do {
    if ((this->Entries).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Cameras::FCameraEvaluationContextStack::FContextEntry_const_,int,1>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar2) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return false;
    }
    pTVar6 = *(TReferenceControllerBase<1> **)(pFVar8 + -8);
    pFVar7 = (FCameraEvaluationContext *)0x0;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = pTVar6->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          pTVar6 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14d558f90;
        }
        LOCK();
        aVar5 = pTVar6->SharedReferenceCount;
        bVar9 = aVar4 == aVar5;
        if (bVar9) {
          pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar5 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar5;
      } while (!bVar9);
      pFVar7 = *(FCameraEvaluationContext **)(pFVar8 + -0x10);
    }
LAB_14d558f90:
    pFVar3 = param_1->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    if (pFVar3 == pFVar7) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return true;
    }
    pFVar8 = pFVar8 + -0x10;
  } while( true );
}

// Initialize @ 14d559650

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationContextStack::Initialize
          (FCameraEvaluationContextStack *this,FCameraSystemEvaluator *param_1)

{
  this->Evaluator = param_1;
  return;
}

// OnEndCameraSystemUpdate @ 14d55bf20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationContextStack::OnEndCameraSystemUpdate
          (FCameraEvaluationContextStack *this)

{
  FCameraEvaluationContext *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  atomic<int> aVar5;
  bool bVar6;
  atomic<int> aVar7;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType local_58;
  int local_50;
  int iStack_4c;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> local_48;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> local_38;
  
  bVar3 = false;
  iVar9 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  iStack_4c = 0;
LAB_14d55bf53:
  do {
    if ((iVar9 < 0) || ((this->Entries).ArrayNum <= iVar9)) {
      while( true ) {
        if (local_50 == 0) {
          if (bVar3) {
            TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                      (&this->OnStackChangedEvent);
          }
          DestructItems<TSharedPtr<UE::Cameras::FCameraEvaluationContext,1>,int>
                    ((TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *)local_58.Data,local_50);
          if ((TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *)local_58.Data !=
              (TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *)0x0) {
            FMemory::Free(local_58.Data);
          }
          return;
        }
        if ((local_50 < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar8 = (longlong)local_50;
        this_00 = *(FCameraEvaluationContext **)&local_58.Data[lVar8 * 0x10 + -0x10].field_0x0;
        pTVar1 = *(TReferenceControllerBase<1> **)(local_58.Data + lVar8 * 0x10 + -8);
        *(undefined8 *)(local_58.Data + lVar8 * 0x10 + -8) = 0;
        *(undefined8 *)&local_58.Data[lVar8 * 0x10 + -0x10].field_0x0 = 0;
        iVar9 = local_50 + -1;
        pFVar10 = local_58.Data + (longlong)iVar9 * 0x10;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(pFVar10 + 8));
        iVar9 = (local_50 - iVar9) + -1;
        if (iVar9 != 0) {
          memmove(pFVar10,pFVar10 + 0x10,(longlong)iVar9 << 4);
        }
        local_50 = -1;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&local_58,-1,&iStack_4c);
        if ((this_00 == (FCameraEvaluationContext *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FCameraEvaluationContext::OnEndCameraSystemUpdate(this_00);
        if ((this_00 == (FCameraEvaluationContext *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar9 = (this_00->ChildrenContexts).ArrayNum;
        pFVar10 = (this_00->ChildrenContexts).AllocatorInstance.Data;
        if ((iVar9 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) break;
        pFVar4 = pFVar10 + (longlong)iVar9 * 0x10;
        while (pFVar4 != pFVar10) {
          local_38.Object = *(FCameraEvaluationContext **)(pFVar4 + -0x10);
          local_38.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)(pFVar4 + -8);
          if (local_38.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          if (local_38.Object != (FCameraEvaluationContext *)0x0) {
            if (((local_58.Data <= &local_38) &&
                (&local_38 <
                 (TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *)
                 ((longlong)local_58.Data + (longlong)iStack_4c * 0x10))) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (local_50 == iStack_4c) {
              local_50 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_58,&iStack_4c);
            }
            iVar9 = local_50 + 1;
            *(FCameraEvaluationContext **)&local_58.Data[(longlong)local_50 * 0x10].field_0x0 =
                 local_38.Object;
            *(TReferenceControllerBase<1> **)(local_58.Data + (longlong)local_50 * 0x10 + 8) =
                 local_38.SharedReferenceCount.ReferenceController;
            local_50 = iVar9;
            if (local_38.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_38.SharedReferenceCount.ReferenceController);
          pFVar4 = pFVar4 + -0x10;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      }
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((iVar9 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar10 = (this->Entries).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
    local_48.Object = (FCameraEvaluationContext *)0x0;
    local_48.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar10 + 8);
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar5 = (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar5 == (atomic<int>)0x0) {
          local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14d55bff4;
        }
        LOCK();
        aVar7 = (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar6 = aVar5 == aVar7;
        if (bVar6) {
          (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar5 + 1);
          aVar7 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar7;
      } while (!bVar6);
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        local_48.Object = *(FCameraEvaluationContext **)pFVar10;
      }
    }
LAB_14d55bff4:
    if (local_48.Object == (FCameraEvaluationContext *)0x0) {
      TArray<UE::Cameras::FCameraEvaluationContextStack::FContextEntry,TSizedDefaultAllocator<32>_>
      ::RemoveAt(&this->Entries,iVar9,Default);
      iVar9 = iVar9 + -1;
      bVar3 = true;
LAB_14d55c0de:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      iVar9 = iVar9 + 1;
      goto LAB_14d55bf53;
    }
    if (((local_58.Data <= &local_48) &&
        (&local_48 <
         (TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *)
         (local_58.Data + (longlong)iStack_4c * 0x10))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_50 == iStack_4c) {
      local_50 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_58,&iStack_4c);
    }
    lVar8 = (longlong)local_50;
    local_50 = local_50 + 1;
    *(FCameraEvaluationContext **)&local_58.Data[lVar8 * 0x10].field_0x0 = local_48.Object;
    *(TReferenceControllerBase<1> **)(local_58.Data + lVar8 * 0x10 + 8) =
         local_48.SharedReferenceCount.ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0)
    goto LAB_14d55c0de;
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    iVar9 = iVar9 + 1;
  } while( true );
}

// PopContext @ 14d55d610

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationContextStack::PopContext(FCameraEvaluationContextStack *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  
  if ((this->Entries).ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar7 = (longlong)(this->Entries).ArrayNum;
  pFVar3 = (this->Entries).AllocatorInstance.Data;
  plVar4 = *(longlong **)(pFVar3 + lVar7 * 0x10 + -8);
  *(undefined8 *)(pFVar3 + lVar7 * 0x10 + -8) = 0;
  *(undefined8 *)(pFVar3 + lVar7 * 0x10 + -0x10) = 0;
  TArray<UE::Cameras::FCameraEvaluationContextStack::FContextEntry,TSizedDefaultAllocator<32>_>::
  RemoveAtImpl(&this->Entries,(this->Entries).ArrayNum + -1);
  Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,(ForAnyElementType *)this,(this->Entries).ArrayNum,&(this->Entries).ArrayMax);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnStackChangedEvent);
  return;
}

// PushContext @ 14d55df60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationContextStack::PushContext
          (FCameraEvaluationContextStack *this,
          TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  FCameraEvaluationContext *pFVar4;
  code *pcVar5;
  bool bVar6;
  atomic<int> aVar7;
  int iVar8;
  uint uVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FCameraEvaluationContext *pFVar15;
  FCameraEvaluationContext *local_68;
  TReferenceControllerBase<1> *local_60;
  undefined8 local_58;
  longlong *local_50;
  FCameraEvaluationContextActivateParams local_48;
  
  if ((this->Evaluator == (FCameraSystemEvaluator *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Evaluator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraEvaluationContextStack.cpp"
                         ,0x2c,
                         L"Can\'t push context when no evaluator is set! Did you call Initialize?"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar10 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar4 = param_1->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar12 = (this->Entries).AllocatorInstance.Data;
  iVar8 = (this->Entries).ArrayNum;
  pFVar14 = pFVar12;
  do {
    if (pFVar14 == pFVar12 + (longlong)iVar8 * 0x10) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
LAB_14d55e038:
      local_48.Evaluator = this->Evaluator;
      local_60 = (TReferenceControllerBase<1> *)0x0;
      local_48.ParentContext.Object = (FCameraEvaluationContext *)0x0;
      local_48.ParentContext.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      FCameraEvaluationContext::Activate(param_1->Object,&local_48);
      pTVar10 = (param_1->SharedReferenceCount).ReferenceController;
      local_68 = param_1->Object;
      pTVar11 = local_60;
      if (pTVar10 != local_60) {
        if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar11 = pTVar10;
        if (local_60 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &local_60->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)(local_60->_padding_ + 8))(local_60,1);
          }
        }
      }
      local_60 = pTVar11;
      pFVar12 = (this->Entries).AllocatorInstance.Data;
      if (((pFVar12 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 <
           pFVar12 + (longlong)(this->Entries).ArrayMax * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (this->Entries).ArrayNum;
      piVar2 = &(this->Entries).ArrayMax;
      if (iVar8 == *piVar2) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)this,piVar2);
      }
      (this->Entries).ArrayNum = iVar8 + 1;
      pFVar12 = (this->Entries).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
      *(FCameraEvaluationContext **)pFVar12 = local_68;
      *(TReferenceControllerBase<1> **)(pFVar12 + 8) = local_60;
      local_60 = (TReferenceControllerBase<1> *)0x0;
      local_68 = (FCameraEvaluationContext *)0x0;
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnStackChangedEvent);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.ParentContext.SharedReferenceCount.ReferenceController);
      pTVar10 = local_60;
      if (local_60 != (TReferenceControllerBase<1> *)0x0) {
LAB_14d55e16c:
        LOCK();
        piVar2 = (int *)((longlong)pTVar10 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
        }
      }
LAB_14d55e17e:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return;
    }
    pTVar11 = *(TReferenceControllerBase<1> **)(pFVar14 + 8);
    pFVar15 = (FCameraEvaluationContext *)0x0;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar11->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar11 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14d55e016;
        }
        LOCK();
        aVar7 = pTVar11->SharedReferenceCount;
        bVar6 = aVar3 == aVar7;
        if (bVar6) {
          pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar7 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar7;
      } while (!bVar6);
      pFVar15 = *(FCameraEvaluationContext **)pFVar14;
    }
LAB_14d55e016:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    if (pFVar4 == pFVar15) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      uVar13 = (uint)((longlong)pFVar14 - (longlong)pFVar12 >> 4);
      if (uVar13 == 0xffffffff) goto LAB_14d55e038;
      iVar8 = (this->Entries).ArrayNum;
      if (iVar8 + -1 <= (int)uVar13) goto LAB_14d55e17e;
      uVar9 = 0;
      if ((int)uVar13 < iVar8) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar12 = (this->Entries).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x10;
      local_58 = *(undefined8 *)pFVar12;
      local_50 = *(longlong **)(pFVar12 + 8);
      *(undefined8 *)(pFVar12 + 8) = 0;
      *(undefined8 *)pFVar12 = 0;
      TArray<UE::Cameras::FCameraEvaluationContextStack::FContextEntry,TSizedDefaultAllocator<32>_>
      ::RemoveAt(&this->Entries,uVar13,Default);
      pFVar12 = (this->Entries).AllocatorInstance.Data;
      if (((pFVar12 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           pFVar12 + (longlong)(this->Entries).ArrayMax * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (this->Entries).ArrayNum;
      piVar2 = &(this->Entries).ArrayMax;
      if (iVar8 == *piVar2) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)this,piVar2);
      }
      (this->Entries).ArrayNum = iVar8 + 1;
      pFVar12 = (this->Entries).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
      *(undefined8 *)pFVar12 = local_58;
      *(longlong **)(pFVar12 + 8) = local_50;
      local_50 = (longlong *)0x0;
      local_58 = 0;
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnStackChangedEvent);
      pTVar10 = (TReferenceControllerBase<1> *)local_50;
      if (local_50 == (longlong *)0x0) goto LAB_14d55e17e;
      goto LAB_14d55e16c;
    }
    pFVar14 = pFVar14 + 0x10;
  } while( true );
}

// RemoveContext @ 14d560f80

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraEvaluationContextStack::RemoveContext
          (FCameraEvaluationContextStack *this,
          TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FCameraEvaluationContext *pFVar6;
  FCameraEvaluationContext *pFVar7;
  uint uVar8;
  FCameraEvaluationContext *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FCameraEvaluationContext *pFVar12;
  FCameraEvaluationContextDeactivateParams local_res8 [8];
  
  pFVar12 = (FCameraEvaluationContext *)0x0;
  pFVar9 = pFVar12;
  do {
    uVar8 = (uint)pFVar9;
    if (((int)uVar8 < 0) || ((this->Entries).ArrayNum <= (int)uVar8)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return false;
    }
    if (((int)uVar8 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    pFVar10 = (this->Entries).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
    pFVar9 = *(FCameraEvaluationContext **)(pFVar10 + 8);
    pFVar6 = pFVar9;
    pFVar7 = pFVar12;
    if (pFVar9 != (FCameraEvaluationContext *)0x0) {
      iVar2 = *(int *)&pFVar9->field_0x8;
      do {
        pFVar6 = pFVar12;
        if (iVar2 == 0) goto LAB_14d561041;
        LOCK();
        iVar5 = *(int *)&pFVar9->field_0x8;
        bVar3 = iVar2 == iVar5;
        if (bVar3) {
          *(int *)&pFVar9->field_0x8 = iVar2 + 1;
          iVar5 = iVar2;
        }
        UNLOCK();
        iVar2 = iVar5;
      } while (!bVar3);
      pFVar6 = pFVar9;
      pFVar7 = *(FCameraEvaluationContext **)pFVar10;
    }
LAB_14d561041:
    pFVar9 = param_1->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar6);
    if (pFVar9 == pFVar7) {
      FCameraEvaluationContext::Deactivate(param_1->Object,local_res8);
      uVar11 = 0;
      if ((int)uVar8 < (this->Entries).ArrayNum) {
        uVar11 = ~uVar8 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      TArray<UE::Cameras::FCameraEvaluationContextStack::FContextEntry,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl(&this->Entries,uVar8);
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(ForAnyElementType *)this,(this->Entries).ArrayNum,&(this->Entries).ArrayMax
                );
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnStackChangedEvent);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return true;
    }
    pFVar9 = (FCameraEvaluationContext *)(ulonglong)(uVar8 + 1);
  } while( true );
}

// RemoveContextsOwnedBy @ 14d561120

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraEvaluationContextStack::RemoveContextsOwnedBy
          (FCameraEvaluationContextStack *this,UObject *param_1,bool param_2)

{
  FCameraEvaluationContext *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  atomic<int> aVar6;
  uint uVar7;
  UObject *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FCameraEvaluationContextDeactivateParams local_res8 [8];
  UObject *local_res10;
  char local_res18;
  
  bVar5 = false;
  uVar11 = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  do {
    while( true ) {
      if (((int)uVar11 < 0) || ((this->Entries).ArrayNum <= (int)uVar11)) {
        if (bVar5 != false) {
          TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                    (&this->OnStackChangedEvent);
        }
        return bVar5;
      }
      if (((int)uVar11 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      pFVar10 = (this->Entries).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10;
      pTVar9 = *(TReferenceControllerBase<1> **)(pFVar10 + 8);
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) break;
LAB_14d5611e0:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      uVar11 = uVar11 + 1;
    }
    aVar2 = pTVar9->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d5611e0;
      }
      LOCK();
      aVar6 = pTVar9->SharedReferenceCount;
      bVar3 = aVar2 == aVar6;
      if (bVar3) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar6;
    } while (!bVar3);
    this_00 = *(FCameraEvaluationContext **)pFVar10;
    if ((this_00 == (FCameraEvaluationContext *)0x0) ||
       (pUVar8 = FWeakObjectPtr::Get(&(this_00->WeakOwner).WeakPtr), pUVar8 == (UObject *)0x0))
    goto LAB_14d5611e0;
    pUVar8 = FWeakObjectPtr::Get(&(this_00->WeakOwner).WeakPtr);
    if (pUVar8 != local_res10) {
      if (local_res18 != '\0') {
        pUVar8 = FWeakObjectPtr::Get(&(this_00->WeakOwner).WeakPtr);
        bVar3 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)pUVar8,local_res10);
        if (bVar3) goto LAB_14d561239;
      }
      goto LAB_14d5611e0;
    }
LAB_14d561239:
    FCameraEvaluationContext::Deactivate(this_00,local_res8);
    uVar7 = 0;
    if ((int)uVar11 < (this->Entries).ArrayNum) {
      uVar7 = ~uVar11 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    TArray<UE::Cameras::FCameraEvaluationContextStack::FContextEntry,TSizedDefaultAllocator<32>_>::
    RemoveAtImpl(&this->Entries,uVar11);
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(ForAnyElementType *)this,(this->Entries).ArrayNum,&(this->Entries).ArrayMax);
    bVar5 = true;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  } while( true );
}

// Reset @ 14d5614e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationContextStack::Reset(FCameraEvaluationContextStack *this)

{
  int *piVar1;
  int iVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  FCameraEvaluationContextDeactivateParams local_res10 [8];
  
  iVar2 = (this->Entries).ArrayNum;
  pFVar7 = (this->Entries).AllocatorInstance.Data;
  pFVar6 = pFVar7 + (longlong)iVar2 * 0x10;
  do {
    while( true ) {
      if ((this->Entries).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::Cameras::FCameraEvaluationContextStack::FContextEntry,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar6) {
        piVar1 = &(this->Entries).ArrayMax;
        pFVar7 = (this->Entries).AllocatorInstance.Data;
        iVar2 = (this->Entries).ArrayNum;
        if ((this->Entries).ArrayMax < 0) {
          DestructItems<UE::Cameras::FCameraEvaluationContextStack::FContextEntry,int>
                    ((FContextEntry *)pFVar7,iVar2);
          (this->Entries).ArrayNum = 0;
          if (*piVar1 != 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
          }
        }
        else {
          DestructItems<UE::Cameras::FCameraEvaluationContextStack::FContextEntry,int>
                    ((FContextEntry *)pFVar7,iVar2);
          (this->Entries).ArrayNum = 0;
        }
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&this->OnStackChangedEvent);
        return;
      }
      pTVar5 = *(TReferenceControllerBase<1> **)(pFVar7 + 8);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) break;
LAB_14d561540:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      pFVar7 = pFVar7 + 0x10;
    }
    aVar3 = pTVar5->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d561540;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar8 = aVar3 == aVar4;
      if (bVar8) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar8);
    if (*(FCameraEvaluationContext **)pFVar7 == (FCameraEvaluationContext *)0x0) goto LAB_14d561540;
    FCameraEvaluationContext::Deactivate(*(FCameraEvaluationContext **)pFVar7,local_res10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    pFVar7 = pFVar7 + 0x10;
  } while( true );
}

// operator() @ 1505810f0

bool __thiscall
`UE::Cameras::FCameraEvaluationContextStack::AddChildContext'::__l12::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3892529066523230305>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3892529066523230305>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150581130

bool __thiscall
`UE::Cameras::FCameraEvaluationContextStack::AddChildContext'::__l15::<lambda_3>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3892529066523230311>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3892529066523230311>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

