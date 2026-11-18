// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// FLastMajorOrNomadTab @ 1426fc210

FLastMajorOrNomadTab * __thiscall
FTabManager::FLastMajorOrNomadTab::FLastMajorOrNomadTab(FLastMajorOrNomadTab *this,FName param_1)

{
  this->FallbackTabId = param_1;
  this->_padding_ = (longlong)&___7FLastMajorOrNomadTab_FTabManager__6B_;
  return this;
}

// Search @ 142783880

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockTab,1> * __thiscall
FTabManager::FLastMajorOrNomadTab::Search
          (FLastMajorOrNomadTab *this,TSharedPtr<SDockTab,1> *__return_storage_ptr__,
          FTabManager *param_1,FName param_2,TSharedRef<SDockTab,1> *param_3)

{
  SWindow *pSVar1;
  SWindow *pSVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  atomic<int> aVar6;
  ETabRole EVar7;
  bool bVar8;
  atomic<int> aVar9;
  SWindow **ppSVar10;
  TSharedPtr<SDockTab,1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FSharedReferencer<1> FVar15;
  SWindow *pSVar16;
  SDockTab *pSVar17;
  uint uVar18;
  SWindow *pSVar19;
  bool bVar20;
  TSharedRef<SDockTab,1> *local_b0;
  int local_a8;
  TSharedPtr<SDockTab,1> local_a0;
  SWindow *local_90;
  TReferenceControllerBase<1> *local_88;
  FTabId local_80;
  SWindow *local_70;
  TReferenceControllerBase<1> *local_68;
  TSharedPtr<SDockTab,1> local_60 [2];
  
  bVar5 = false;
  bVar8 = false;
  __return_storage_ptr__->Object = (SDockTab *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  EVar7 = SDockTab::GetTabRole(param_3->Object);
  if (EVar7 != MajorTab) {
    return __return_storage_ptr__;
  }
  pTVar12 = (param_1->LastMajorDockWindow).WeakReferenceCount.ReferenceController;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar12->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142783bb0;
      }
      LOCK();
      aVar9 = pTVar12->SharedReferenceCount;
      bVar20 = aVar6 == aVar9;
      if (bVar20) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar9 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar9;
    } while (!bVar20);
    pSVar1 = (param_1->LastMajorDockWindow).Object;
    if ((pSVar1 != (SWindow *)0x0) && (uVar18 = 0, 0 < (param_1->DockAreas).ArrayNum)) {
      param_3 = (TSharedRef<SDockTab,1> *)0x0;
      do {
        uVar13 = 0;
        if ((int)uVar18 < (param_1->DockAreas).ArrayNum) {
          uVar13 = ~uVar18 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TSharedPtr<SDockTab,1> *)(*pcVar4)();
          return pTVar11;
        }
        pSVar16 = (SWindow *)0x0;
        pFVar14 = (FScriptContainerElement *)
                  ((longlong)&param_3->Object +
                  (longlong)(param_1->DockAreas).AllocatorInstance.Data);
        pSVar2 = *(SWindow **)(pFVar14 + 8);
        pSVar19 = pSVar2;
        if (pSVar2 != (SWindow *)0x0) {
          aVar6 = *(atomic<int> *)&pSVar2->_padding_;
          do {
            pSVar19 = pSVar16;
            if (aVar6 == (atomic<int>)0x0) goto LAB_1427839d2;
            LOCK();
            aVar9 = *(atomic<int> *)&pSVar2->_padding_;
            bVar20 = aVar6 == aVar9;
            if (bVar20) {
              *(atomic<int> *)&pSVar2->_padding_ = (atomic<int>)((int)aVar6 + 1);
              aVar9 = aVar6;
            }
            UNLOCK();
            aVar6 = aVar9;
          } while (!bVar20);
          plVar3 = *(longlong **)pFVar14;
          pSVar19 = pSVar2;
          if (plVar3 != (longlong *)0x0) {
            if (((plVar3[0x60] == 0) || (plVar3[0x61] == 0)) || (*(int *)(plVar3[0x61] + 8) < 1)) {
              bVar8 = true;
              local_68 = (TReferenceControllerBase<1> *)0x0;
              ppSVar10 = &local_70;
            }
            else {
              local_88 = (TReferenceControllerBase<1> *)plVar3[0x61];
              bVar5 = true;
              local_90 = (SWindow *)0x0;
              if (local_88 == (TReferenceControllerBase<1> *)0x0) {
LAB_142783a62:
                ppSVar10 = &local_90;
              }
              else {
                aVar6 = local_88->SharedReferenceCount;
                do {
                  if (aVar6 == (atomic<int>)0x0) {
                    local_88 = (TReferenceControllerBase<1> *)0x0;
                    goto LAB_142783a62;
                  }
                  LOCK();
                  aVar9 = local_88->SharedReferenceCount;
                  bVar20 = aVar6 == aVar9;
                  if (bVar20) {
                    local_88->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
                    aVar9 = aVar6;
                  }
                  UNLOCK();
                  aVar6 = aVar9;
                } while (!bVar20);
                pSVar16 = (SWindow *)plVar3[0x60];
                ppSVar10 = &local_90;
                local_90 = pSVar16;
              }
            }
            pSVar19 = ppSVar10[1];
            ppSVar10[1] = (SWindow *)0x0;
            *ppSVar10 = (SWindow *)0x0;
            if (bVar8) {
              bVar8 = false;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_68);
            }
            if (bVar5) {
              bVar5 = false;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_88);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)pSVar19);
            pSVar19 = pSVar2;
            if (pSVar16 == pSVar1) {
              (**(code **)(*plVar3 + 0x268))(plVar3,&local_b0);
              if (0 < local_a8) {
                uVar13 = local_a8 - 1;
                uVar18 = 0;
                if ((int)uVar13 < local_a8) {
                  uVar18 = ~uVar13 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  pTVar11 = (TSharedPtr<SDockTab,1> *)(*pcVar4)();
                  return pTVar11;
                }
                FVar15.ReferenceController =
                     local_b0[(int)uVar13].SharedReferenceCount.ReferenceController;
                pSVar17 = local_b0[(int)uVar13].Object;
                if (FVar15.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (FVar15.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)((int)(FVar15.ReferenceController)->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_a0.Object = pSVar17;
                local_a0.SharedReferenceCount.ReferenceController = FVar15.ReferenceController;
                DestructItems<TSharedRef<SDockTab,1>,int>(local_b0,local_a8);
                if (local_b0 != (TSharedRef<SDockTab,1> *)0x0) {
                  FMemory::Free(local_b0);
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)pSVar2);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar12);
                goto LAB_142783bdc;
              }
              DestructItems<TSharedRef<SDockTab,1>,int>(local_b0,local_a8);
              if (local_b0 != (TSharedRef<SDockTab,1> *)0x0) {
                FMemory::Free(local_b0);
              }
            }
          }
        }
LAB_1427839d2:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pSVar19);
        uVar18 = uVar18 + 1;
        param_3 = param_3 + 1;
      } while ((int)uVar18 < (param_1->DockAreas).ArrayNum);
    }
  }
LAB_142783bb0:
  local_a0.Object = (SDockTab *)0x0;
  local_a0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  pSVar17 = (SDockTab *)0x0;
  FVar15.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_142783bdc:
  if (__return_storage_ptr__ != &local_a0) {
    __return_storage_ptr__->Object = pSVar17;
    local_a0.Object = (SDockTab *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_a0.SharedReferenceCount);
    FVar15.ReferenceController = local_a0.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar15.ReferenceController);
  if ((__return_storage_ptr__->Object == (SDockTab *)0x0) &&
     (local_80.TabType = this->FallbackTabId, local_80.TabType != (FName)0x0)) {
    local_80.InstanceId = -1;
    local_80.Flags = SaveLayout;
    pTVar11 = FindExistingLiveTab(param_1,local_60,&local_80);
    if (__return_storage_ptr__ != pTVar11) {
      __return_storage_ptr__->Object = pTVar11->Object;
      pTVar11->Object = (SDockTab *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&pTVar11->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60[0].SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

