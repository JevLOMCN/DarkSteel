// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// FRegionalNotificationList @ 1427b4060

FRegionalNotificationList * __thiscall
FSlateNotificationManager::FRegionalNotificationList::FRegionalNotificationList
          (FRegionalNotificationList *this,FSlateRect *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  (this->Notifications).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Notifications).ArrayNum = 0;
  (this->Notifications).ArrayMax = 0;
  fVar1 = param_1->Top;
  fVar2 = param_1->Right;
  fVar3 = param_1->Bottom;
  (this->Region).Left = param_1->Left;
  (this->Region).Top = fVar1;
  (this->Region).Right = fVar2;
  (this->Region).Bottom = fVar3;
  return this;
}

// Arrange @ 1427d2d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateNotificationManager::FRegionalNotificationList::Arrange(FRegionalNotificationList *this)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  SWindow *this_00;
  code *pcVar6;
  double dVar7;
  double dVar8;
  FDeprecateVector2DParameter FVar9;
  FDeprecateVector2DParameter FVar10;
  atomic<int> aVar11;
  undefined8 uVar12;
  bool bVar13;
  uint uVar14;
  atomic<int> aVar15;
  FDeprecateSlateVector2D FVar16;
  ISlateStyle *pIVar17;
  FName *pFVar18;
  uint uVar19;
  TReferenceControllerBase<1> *pTVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  FName local_res20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar17 = FAppStyle::Get();
    pcVar6 = *(code **)((longlong)*pIVar17 + 0x28);
    pFVar18 = ::FName::FName(&local_res20,"StatusBar.Height");
    StausBarHeight = (float)(*pcVar6)(pIVar17,*pFVar18,0,0,0);
    _Init_thread_footer(&::_TSS0);
  }
  uVar12 = NotificationManagerConstants::NotificationOffset.field0_0x0._s_0.Y;
  uVar19 = (this->Notifications).ArrayNum - 1;
  dVar8 = (double)(this->Region).Right -
          NotificationManagerConstants::NotificationOffset.field0_0x0._s_0.X;
  dVar7 = (double)(this->Region).Bottom -
          ((double)StausBarHeight +
          NotificationManagerConstants::NotificationOffset.field0_0x0._s_0.Y);
  if (-1 < (int)uVar19) {
    lVar21 = (longlong)(int)uVar19 << 4;
    do {
      uVar14 = 0;
      if ((int)uVar19 < (this->Notifications).ArrayNum) {
        uVar14 = ~uVar19 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar5 = *(longlong *)((this->Notifications).AllocatorInstance.Data + lVar21);
      pTVar20 = *(TReferenceControllerBase<1> **)(lVar5 + 0x2c0);
      if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
        aVar11 = pTVar20->SharedReferenceCount;
        do {
          if (aVar11 == (atomic<int>)0x0) {
            pTVar20 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1427d2e85;
          }
          LOCK();
          aVar15 = pTVar20->SharedReferenceCount;
          bVar13 = aVar11 == aVar15;
          if (bVar13) {
            pTVar20->SharedReferenceCount = (atomic<int>)((int)aVar11 + 1);
            aVar15 = aVar11;
          }
          UNLOCK();
          aVar11 = aVar15;
        } while (!bVar13);
        this_00 = *(SWindow **)(lVar5 + 0x2b8);
        if (this_00 != (SWindow *)0x0) {
          iVar4 = (this->Notifications).ArrayNum;
          FVar16 = SWidget::GetDesiredSize((SWidget *)this_00);
          fVar2 = *(float *)FVar16;
          fVar3 = *(float *)((longlong)FVar16 + 4);
          FVar9 = *(FDeprecateVector2DParameter *)FVar16;
          dVar7 = dVar7 - (double)fVar3;
          fVar23 = (float)(dVar8 - (double)fVar2);
          fVar22 = (float)(dVar7 - (double)(float)((double)(int)(iVar4 + ~uVar19) * (double)uVar12))
          ;
          if ((((fVar23 < (this->Region).Left) ||
               (pfVar1 = &(this->Region).Right, *pfVar1 <= fVar23 && fVar23 != *pfVar1)) ||
              (fVar22 < (this->Region).Top)) ||
             (pfVar1 = &(this->Region).Bottom, *pfVar1 <= fVar22 && fVar22 != *pfVar1)) {
            bVar13 = SWindow::IsVisible(this_00);
            if (bVar13) {
              SWindow::HideWindow(this_00);
            }
          }
          else {
            FVar16 = SWindow::GetPositionInScreen(this_00);
            if (((fVar23 == *(float *)FVar16) && (fVar22 == *(float *)((longlong)FVar16 + 4))) ||
               ((FVar16 = SWindow::GetSizeInScreen(this_00), fVar2 == *(float *)FVar16 &&
                (fVar3 == *(float *)((longlong)FVar16 + 4))))) {
              FVar16 = SWindow::GetPositionInScreen(this_00);
              if ((fVar23 != *(float *)FVar16) || (fVar22 != *(float *)((longlong)FVar16 + 4))) {
                FVar9._4_4_ = fVar22;
                FVar9._0_4_ = fVar23;
                SWindow::MoveWindowTo(this_00,FVar9);
              }
            }
            else {
              FVar10._4_4_ = fVar22;
              FVar10._0_4_ = fVar23;
              SWindow::ReshapeWindow(this_00,FVar10,FVar9);
            }
            bVar13 = SWindow::IsVisible(this_00);
            if (!bVar13) {
              SWindow::ShowWindow(this_00);
            }
          }
        }
      }
LAB_1427d2e85:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
      lVar21 = lVar21 + -0x10;
      uVar19 = uVar19 - 1;
    } while (-1 < (int)uVar19);
  }
  return;
}

// RemoveDeadNotifications @ 1428325a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateNotificationManager::FRegionalNotificationList::RemoveDeadNotifications
          (FRegionalNotificationList *this)

{
  int *piVar1;
  longlong lVar2;
  SWindow *this_00;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  uint uVar6;
  atomic<int> aVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *_Dst;
  TReferenceControllerBase<1> *pTVar11;
  longlong lVar12;
  
  uVar9 = (this->Notifications).ArrayNum - 1;
  if (-1 < (int)uVar9) {
    lVar12 = (longlong)(int)uVar9 << 4;
    do {
      uVar10 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < (this->Notifications).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(char *)(*(longlong *)((this->Notifications).AllocatorInstance.Data + lVar12) + 0x2c8) !=
          '\0') {
        uVar6 = 0;
        if ((int)uVar9 < (this->Notifications).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = *(longlong *)((this->Notifications).AllocatorInstance.Data + lVar12);
        pTVar11 = *(TReferenceControllerBase<1> **)(lVar2 + 0x2c0);
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          aVar4 = pTVar11->SharedReferenceCount;
          do {
            if (aVar4 == (atomic<int>)0x0) {
              pTVar11 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_1428326b4;
            }
            LOCK();
            aVar7 = pTVar11->SharedReferenceCount;
            bVar5 = aVar4 == aVar7;
            if (bVar5) {
              pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
              aVar7 = aVar4;
            }
            UNLOCK();
            aVar4 = aVar7;
          } while (!bVar5);
          this_00 = *(SWindow **)(lVar2 + 0x2b8);
          if (this_00 != (SWindow *)0x0) {
            SWindow::RequestDestroyWindow(this_00);
          }
        }
LAB_1428326b4:
        uVar6 = 0;
        if ((int)uVar9 < (this->Notifications).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        _Dst = (this->Notifications).AllocatorInstance.Data + lVar12;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(_Dst + 8));
        iVar8 = (this->Notifications).ArrayNum + ~uVar9;
        if (iVar8 != 0) {
          memmove(_Dst,_Dst + 0x10,(longlong)iVar8 << 4);
        }
        piVar1 = &(this->Notifications).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(ForAnyElementType *)this,(this->Notifications).ArrayNum,
                   &(this->Notifications).ArrayMax);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11)
        ;
      }
      lVar12 = lVar12 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  return;
}

