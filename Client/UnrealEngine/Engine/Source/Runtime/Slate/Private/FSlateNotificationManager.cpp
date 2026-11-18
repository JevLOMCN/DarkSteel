// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 16

// FSlateNotificationManager @ 1427b4310

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateNotificationManager * __thiscall
FSlateNotificationManager::FSlateNotificationManager(FSlateNotificationManager *this)

{
  FText *this_00;
  FString *pFVar1;
  wchar_t *pwVar2;
  FText local_18;
  
  this->ProgressNotificationHandler = (IProgressNotificationHandler *)0x0;
  (this->RootWindowPtr).Object = (SWindow *)0x0;
  (this->RootWindowPtr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->RegionalLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegionalLists).ArrayNum = 0;
  (this->RegionalLists).ArrayMax = 0;
  this->PendingNotifications = (TLockFreePointerListLIFO<FNotificationInfo>)0x0;
  this->PendingNotifications = (TLockFreePointerListLIFO<FNotificationInfo>)0x0;
  (this->StagedNotifications).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StagedNotifications).ArrayNum = 0;
  (this->StagedNotifications).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->StagedNotificationCS,4000);
  this->bAllowNotifications = true;
  this_00 = FText::AsLocalizable_Advanced_LocText
                      (&local_18,L"SlateNotifications",L"AllowDescription",
                       L"If false, then notifications will not be displayed to the user.");
  pFVar1 = FText::ToString(this_00);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->CVarAllowNotifications,L"Slate.bAllowNotifications",&this->bAllowNotifications,
             pwVar2,0);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FSlateNotificationManager>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPreExit,(FSlateNotificationManager *)&stack0x00000008,
             (pmf_698acb01)this);
  return this;
}

// AddNotification @ 1427c89f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SNotificationItem,1> * __thiscall
FSlateNotificationManager::AddNotification
          (FSlateNotificationManager *this,TSharedPtr<SNotificationItem,1> *__return_storage_ptr__,
          FNotificationInfo *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSharedPtr<SNotificationItem,1> *pTVar5;
  FSlateApplication *pFVar6;
  FSlateRect *pFVar7;
  undefined8 *puVar8;
  SWindow *pSVar9;
  SWindow *pSVar10;
  SWindow *pSVar11;
  SWindow *pSVar12;
  int iVar13;
  int iVar14;
  FSlateRect local_d8;
  TSharedPtr<SWindow,1> local_c8;
  TSharedRef<SNotificationList,1> local_b8;
  undefined1 local_a8 [8];
  TReferenceControllerBase<1> *local_a0;
  FSlateRect local_98;
  FSlateRect local_88;
  FSlateRect local_78;
  FSlateRect local_68;
  undefined1 local_58 [24];
  SWindow *local_40;
  SWindow *local_30;
  
  pSVar9 = (SWindow *)0x0;
  iVar13 = 0;
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Notifications\\NotificationManager.cpp"
                         ,0xdd,
                         L"FSlateNotificationManager::AddNotification must be called on game thread. Use QueueNotification if necessary."
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedPtr<SNotificationItem,1> *)(*pcVar2)();
    return pTVar5;
  }
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    __return_storage_ptr__->Object = (SNotificationItem *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  local_d8.Left = ___xmm_bf800000bf800000bf800000bf800000;
  local_d8.Top = _UNK_15076c664;
  local_d8.Right = _UNK_15076c668;
  local_d8.Bottom = _UNK_15076c66c;
  if ((param_1->ForWindow).Object == (SWindow *)0x0) {
    if ((((this->RootWindowPtr).Object != (SWindow *)0x0) &&
        (pTVar1 = (this->RootWindowPtr).WeakReferenceCount.ReferenceController,
        pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
      pFVar6 = FSlateApplication::Get();
      pSVar11 = (SWindow *)(this->RootWindowPtr).WeakReferenceCount.ReferenceController;
      pSVar10 = pSVar11;
      pSVar12 = pSVar9;
      if (pSVar11 == (SWindow *)0x0) {
LAB_1427c8b31:
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        pSVar11 = pSVar10;
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TSharedPtr<SNotificationItem,1> *)(*pcVar2)();
          return pTVar5;
        }
      }
      else {
        iVar14 = (int)pSVar11->_padding_;
        do {
          pSVar10 = pSVar9;
          if (iVar14 == 0) goto LAB_1427c8b31;
          LOCK();
          iVar4 = (int)pSVar11->_padding_;
          bVar3 = iVar14 == iVar4;
          if (bVar3) {
            *(int *)&pSVar11->_padding_ = iVar14 + 1;
            iVar4 = iVar14;
          }
          UNLOCK();
          iVar14 = iVar4;
        } while (!bVar3);
        pSVar12 = (this->RootWindowPtr).Object;
        pSVar10 = pSVar11;
        if (pSVar12 == (SWindow *)0x0) goto LAB_1427c8b31;
      }
      pFVar7 = SWindow::GetRectInScreen(pSVar12,&local_78);
      pFVar7 = FSlateApplication::GetWorkArea(pFVar6,&local_68,pFVar7);
      local_d8.Left = pFVar7->Left;
      local_d8.Top = pFVar7->Top;
      local_d8.Right = pFVar7->Right;
      local_d8.Bottom = pFVar7->Bottom;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar11);
      goto LAB_1427c8bc3;
    }
    pFVar6 = FSlateApplication::Get();
    pFVar7 = (FSlateRect *)(**(code **)(*(longlong *)pFVar6 + 0xe8))(pFVar6,local_58);
  }
  else {
    pFVar6 = FSlateApplication::Get();
    if (((param_1->ForWindow).Object == (SWindow *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedPtr<SNotificationItem,1> *)(*pcVar2)();
      return pTVar5;
    }
    pFVar7 = SWindow::GetRectInScreen((param_1->ForWindow).Object,&local_98);
    pFVar7 = FSlateApplication::GetWorkArea(pFVar6,&local_88,pFVar7);
  }
  local_d8.Left = pFVar7->Left;
  local_d8.Top = pFVar7->Top;
  local_d8.Right = pFVar7->Right;
  local_d8.Bottom = pFVar7->Bottom;
LAB_1427c8bc3:
  pSVar11 = (param_1->ForWindow).Object;
  if (pSVar11 == (SWindow *)0x0) {
    pSVar11 = (SWindow *)(this->RootWindowPtr).WeakReferenceCount.ReferenceController;
    local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar11;
    if (pSVar11 != (SWindow *)0x0) {
      iVar14 = (int)pSVar11->_padding_;
      do {
        local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar9;
        if (iVar14 == 0) goto LAB_1427c8c25;
        LOCK();
        iVar4 = (int)pSVar11->_padding_;
        bVar3 = iVar14 == iVar4;
        if (bVar3) {
          *(int *)&pSVar11->_padding_ = iVar14 + 1;
          iVar4 = iVar14;
        }
        UNLOCK();
        iVar14 = iVar4;
      } while (!bVar3);
      pSVar9 = (this->RootWindowPtr).Object;
      local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar11;
    }
LAB_1427c8c25:
    iVar14 = 2;
    pSVar11 = (SWindow *)local_c8.SharedReferenceCount.ReferenceController;
    pSVar12 = local_30;
  }
  else {
    local_c8.SharedReferenceCount.ReferenceController =
         (param_1->ForWindow).SharedReferenceCount.ReferenceController;
    if ((SWindow *)local_c8.SharedReferenceCount.ReferenceController != (SWindow *)0x0) {
      LOCK();
      *(int *)&((SWindow *)local_c8.SharedReferenceCount.ReferenceController)->_padding_ =
           (int)((SWindow *)local_c8.SharedReferenceCount.ReferenceController)->_padding_ + 1;
      UNLOCK();
    }
    pSVar9 = pSVar11;
    pSVar11 = local_40;
    pSVar12 = (SWindow *)local_c8.SharedReferenceCount.ReferenceController;
    iVar14 = iVar13;
    iVar13 = 1;
  }
  if ((SWindow *)local_c8.SharedReferenceCount.ReferenceController != (SWindow *)0x0) {
    LOCK();
    *(int *)&((SWindow *)local_c8.SharedReferenceCount.ReferenceController)->_padding_ =
         (int)((SWindow *)local_c8.SharedReferenceCount.ReferenceController)->_padding_ + 1;
    UNLOCK();
  }
  local_c8.Object = pSVar9;
  CreateStackForArea(this,&local_b8,&local_d8,&local_c8);
  if (iVar14 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar11);
  }
  if (iVar13 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar12);
  }
  puVar8 = (undefined8 *)
           (**(code **)((local_b8.Object)->_padding_ + 0x248))(local_b8.Object,local_a8,param_1);
  __return_storage_ptr__->Object = (SNotificationItem *)*puVar8;
  pTVar1 = (TReferenceControllerBase<1> *)puVar8[1];
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CancelProgressNotification @ 1427ecaf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateNotificationManager::CancelProgressNotification
          (FSlateNotificationManager *this,FProgressNotificationHandle param_1)

{
  if (this->ProgressNotificationHandler != (IProgressNotificationHandler *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001427ecafb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*this->ProgressNotificationHandler + 0x18))();
    return;
  }
  return;
}

// CreateStackForArea @ 1428002d0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SNotificationList,1> * __thiscall
FSlateNotificationManager::CreateStackForArea
          (FSlateNotificationManager *this,TSharedRef<SNotificationList,1> *__return_storage_ptr__,
          FSlateRect *param_1,TSharedPtr<SWindow,1> *param_2)

{
  byte *pbVar1;
  atomic<int> *paVar2;
  int *piVar3;
  atomic<int> aVar4;
  SNotificationList *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  SWindow *pSVar7;
  longlong lVar8;
  code *pcVar9;
  FSharedReferencer<1> FVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  char cVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  FSlateBaseNamedArgs *pFVar17;
  TSharedRef<SNotificationList,1> *pTVar18;
  FSlateApplication *pFVar19;
  TSharedRef<SWindow,1> *pTVar20;
  TSharedPtr<SWindow,1> *pTVar21;
  FSlateRect *pFVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  undefined1 local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_328 [5];
  TSharedRef<SWindow,1> local_318;
  ForAnyElementType local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  TSlateDecl<SNotificationList,RequiredArgs::T0RequiredArgs> local_2e8;
  FName local_2d0;
  FMemScope local_2c8;
  TSharedRef<SWidget,1> local_2c0;
  TSharedRef<SWindow,1> local_2a8;
  TSharedRef<SWindow,1> local_298;
  SWindow *local_288;
  TReferenceControllerBase<1> *pTStack_280;
  undefined1 local_278 [8];
  TReferenceControllerBase<1> *local_270;
  TSharedPtr<SWindow,1> local_268;
  TSharedRef<SWindow,1> local_258;
  FSlateRect local_248;
  FSlateBaseNamedArgs local_238;
  
  pFVar17 = (FSlateBaseNamedArgs *)
            SNotificationList::FArguments::FArguments((FArguments *)&local_238);
  FLLMScope::FLLMScope(local_328,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2d0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2c8,&local_2d0,true);
  TSlateDecl<SNotificationList,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SNotificationList,RequiredArgs::T0RequiredArgs>
            (&local_2e8,"SNotificationList",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Notifications\\NotificationManager.cpp"
             ,0xab,local_res10);
  FMemScope::~FMemScope(&local_2c8);
  FLLMScope::~FLLMScope(local_328);
  pSVar5 = local_2e8._Widget.Object;
  if (local_2e8._Widget.Object == (SNotificationList *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      pTVar18 = (TSharedRef<SNotificationList,1> *)(*pcVar9)();
      return pTVar18;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_2e8._Widget.Object,pFVar17);
  SNotificationList::Construct(local_2e8._Widget.Object,(FArguments *)pFVar17);
  if (local_2e8._Widget.Object == (SNotificationList *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      pTVar18 = (TSharedRef<SNotificationList,1> *)(*pcVar9)();
      return pTVar18;
    }
  }
  if (((local_2e8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar13 = (**(code **)((local_2e8._Widget.Object)->_padding_ + 0x228))(local_2e8._Widget.Object);
    bVar14 = 0;
    if (cVar13 != '\0') goto LAB_142800412;
  }
  else {
LAB_142800412:
    bVar14 = 0x20;
  }
  *(byte *)&(local_2e8._Widget.Object)->_padding_ =
       (byte)(local_2e8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_2e8._Widget.Object)->_padding_ =
       (byte)(local_2e8._Widget.Object)->_padding_ | bVar14;
  if (local_2e8._Widget.Object == (SNotificationList *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      pTVar18 = (TSharedRef<SNotificationList,1> *)(*pcVar9)();
      return pTVar18;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_2e8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_2e8._Widget.Object == (SNotificationList *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      pTVar18 = (TSharedRef<SNotificationList,1> *)(*pcVar9)();
      return pTVar18;
    }
  }
  __return_storage_ptr__->Object = local_2e8._Widget.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_2e8._Widget.SharedReferenceCount.ReferenceController;
  local_2e8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2e8._Widget.Object = (SNotificationList *)0x0;
  if (pSVar5 == (SNotificationList *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      pTVar18 = (TSharedRef<SNotificationList,1> *)(*pcVar9)();
      return pTVar18;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_238);
  SWindow::MakeNotificationWindow(&local_318);
  local_2c0.Object = (SWidget *)__return_storage_ptr__->Object;
  local_2c0.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_2c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SWindow::SetContent(local_318.Object,&local_2c0);
  FVar10.ReferenceController = local_318.SharedReferenceCount.ReferenceController;
  pSVar5 = __return_storage_ptr__->Object;
  (pSVar5->ParentWindowPtr).Object = local_318.Object;
  if (local_318.SharedReferenceCount.ReferenceController !=
      (pSVar5->ParentWindowPtr).WeakReferenceCount.ReferenceController) {
    if (local_318.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_318.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_318.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (pSVar5->ParentWindowPtr).WeakReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar6->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
    (pSVar5->ParentWindowPtr).WeakReferenceCount.ReferenceController = FVar10.ReferenceController;
  }
  if (param_2->Object == (SWindow *)0x0) {
LAB_1428005f5:
    pFVar19 = FSlateApplication::Get();
    local_288 = local_318.Object;
    pTStack_280 = local_318.SharedReferenceCount.ReferenceController;
    pcVar9 = *(code **)(*(longlong *)pFVar19 + 0x10);
    if (local_318.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_318.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_318.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar9)(pFVar19,local_278,&local_288);
    local_298.SharedReferenceCount.ReferenceController = local_270;
  }
  else {
    bVar12 = SWindow::IsVisible(param_2->Object);
    if (!bVar12) goto LAB_1428005f5;
    if (param_2->Object == (SWindow *)0x0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        pTVar18 = (TSharedRef<SNotificationList,1> *)(*pcVar9)();
        return pTVar18;
      }
    }
    bVar12 = SWindow::IsWindowMinimized(param_2->Object);
    if (bVar12) goto LAB_1428005f5;
    pFVar19 = FSlateApplication::Get();
    pTVar20 = TSharedPtr<SWindow,1>::ToSharedRef(param_2,&local_258);
    local_2a8.Object = local_318.Object;
    local_2a8.SharedReferenceCount.ReferenceController =
         local_318.SharedReferenceCount.ReferenceController;
    if (local_318.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_318.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_318.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateApplication::AddWindowAsNativeChild(pFVar19,&local_298,&local_2a8,pTVar20,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298.SharedReferenceCount.ReferenceController);
  pFVar19 = FSlateApplication::Get();
  pTVar21 = FSlateApplication::GetActiveModalWindow(pFVar19,&local_268);
  pSVar7 = pTVar21->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268.SharedReferenceCount.ReferenceController);
  if (pSVar7 == (SWindow *)0x0) {
    bVar12 = SWindow::IsActive(local_318.Object);
    if (!bVar12) {
      bVar12 = SWindow::HasActiveParent(local_318.Object);
      if (!bVar12) goto LAB_142800682;
    }
    SWindow::BringToFront(local_318.Object,false);
  }
LAB_142800682:
  iVar16 = (this->RegionalLists).ArrayNum;
  bVar12 = false;
  pFVar23 = (this->RegionalLists).AllocatorInstance.Data;
  pFVar24 = pFVar23 + (longlong)iVar16 * 0x20;
  while( true ) {
    if ((this->RegionalLists).ArrayNum != iVar16) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSlateNotificationManager::FRegionalNotificationList,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar23 == pFVar24) break;
    if ((((*(float *)&pFVar23[0x10].field_0x0 <= param_1->Left) &&
         (param_1->Right < *(float *)&pFVar23[0x18].field_0x0 ||
          param_1->Right == *(float *)&pFVar23[0x18].field_0x0)) &&
        (*(float *)(pFVar23 + 0x14) <= param_1->Top)) &&
       (param_1->Bottom < *(float *)(pFVar23 + 0x1c) ||
        param_1->Bottom == *(float *)(pFVar23 + 0x1c))) {
      if ((*(TSharedRef<SNotificationList,1> **)&pFVar23->field_0x0 <= __return_storage_ptr__) &&
         (__return_storage_ptr__ <
          *(TSharedRef<SNotificationList,1> **)&pFVar23->field_0x0 + *(int *)(pFVar23 + 0xc))) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar9 = (code *)swi(3);
          pTVar18 = (TSharedRef<SNotificationList,1> *)(*pcVar9)();
          return pTVar18;
        }
      }
      iVar15 = *(int *)&pFVar23[8].field_0x0;
      if (iVar15 == *(int *)(pFVar23 + 0xc)) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)pFVar23,(int *)(pFVar23 + 0xc));
      }
      *(int *)&pFVar23[8].field_0x0 = iVar15 + 1;
      lVar8 = *(longlong *)&pFVar23->field_0x0;
      *(SNotificationList **)(lVar8 + (longlong)iVar15 * 0x10) = __return_storage_ptr__->Object;
      pTVar6 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar8 + (longlong)iVar15 * 0x10 + 8) = pTVar6;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar12 = true;
    }
    pFVar23 = pFVar23 + 0x20;
  }
  if (!bVar12) {
    pFVar19 = FSlateApplication::Get();
    pFVar22 = FSlateApplication::GetWorkArea(pFVar19,&local_248,param_1);
    local_308.Data = (FScriptContainerElement *)0x0;
    local_300 = 0;
    local_2f8._0_4_ = pFVar22->Left;
    local_2f8._4_4_ = pFVar22->Top;
    uStack_2f0._0_4_ = pFVar22->Right;
    uStack_2f0._4_4_ = pFVar22->Bottom;
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_308,(int *)((longlong)&local_300 + 4));
    local_300 = CONCAT44(local_300._4_4_,iVar16 + 1);
    *(SNotificationList **)&local_308.Data[(longlong)iVar16 * 0x10].field_0x0 =
         __return_storage_ptr__->Object;
    pTVar6 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(local_308.Data + (longlong)iVar16 * 0x10 + 8) = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar23 = (this->RegionalLists).AllocatorInstance.Data;
    if ((pFVar23 <= (FScriptContainerElement *)&local_308) &&
       ((FScriptContainerElement *)&local_308 <
        pFVar23 + (longlong)(this->RegionalLists).ArrayMax * 0x20)) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        pTVar18 = (TSharedRef<SNotificationList,1> *)(*pcVar9)();
        return pTVar18;
      }
    }
    iVar16 = (this->RegionalLists).ArrayNum;
    piVar3 = &(this->RegionalLists).ArrayMax;
    if (iVar16 == *piVar3) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&(this->RegionalLists).AllocatorInstance,piVar3);
    }
    FVar11.Data = local_308.Data;
    pFVar23 = (this->RegionalLists).AllocatorInstance.Data;
    (this->RegionalLists).ArrayNum = iVar16 + 1;
    pFVar23 = pFVar23 + (longlong)iVar16 * 0x20;
    *(undefined8 *)&pFVar23->field_0x0 = 0;
    iVar16 = (int)local_300;
    *(int *)&pFVar23[8].field_0x0 = (int)local_300;
    if ((int)local_300 == 0) {
      *(int *)(pFVar23 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(int)local_300,0,(ForAnyElementType *)pFVar23,(int)local_300,
                 (int *)(pFVar23 + 0xc));
      ConstructItems<TSharedRef<SNotificationList,1>,TSharedRef<SNotificationList,1>,int>
                (*(void **)&pFVar23->field_0x0,(TSharedRef<SNotificationList,1> *)FVar11.Data,iVar16
                );
    }
    *(undefined8 *)&pFVar23[0x10].field_0x0 = local_2f8;
    *(undefined8 *)&pFVar23[0x18].field_0x0 = uStack_2f0;
    DestructItems<TSharedRef<SNotificationList,1>,int>
              ((TSharedRef<SNotificationList,1> *)local_308.Data,(int)local_300);
    if ((TSharedRef<SNotificationList,1> *)local_308.Data != (TSharedRef<SNotificationList,1> *)0x0)
    {
      FMemory::Free(local_308.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_318.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// ForceNotificationsInFront @ 14280b0c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateNotificationManager::ForceNotificationsInFront
          (FSlateNotificationManager *this,TSharedRef<SWindow,1> *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  SWindow *pSVar4;
  SWindow *this_00;
  atomic<int> aVar5;
  atomic<int> aVar6;
  FSlateApplication *this_01;
  TSharedPtr<SWindow,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  longlong *plVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_68;
  undefined1 local_67 [7];
  TSharedPtr<SWindow,1> local_60 [2];
  
  iVar1 = (this->RegionalLists).ArrayNum;
  pFVar11 = (this->RegionalLists).AllocatorInstance.Data;
  pFVar12 = pFVar11 + (longlong)iVar1 * 0x20;
  do {
    if ((this->RegionalLists).ArrayNum != iVar1) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FSlateNotificationManager::FRegionalNotificationList,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar11 == pFVar12) {
      this_01 = FSlateApplication::Get();
      pTVar7 = FSlateApplication::GetActiveModalWindow(this_01,local_60);
      pSVar4 = pTVar7->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_60[0].SharedReferenceCount.ReferenceController);
      iVar1 = (this->RegionalLists).ArrayNum;
      pFVar11 = (this->RegionalLists).AllocatorInstance.Data;
      pFVar12 = pFVar11 + (longlong)iVar1 * 0x20;
      while( true ) {
        if ((this->RegionalLists).ArrayNum != iVar1) {
          local_68 = 0;
          `TCheckedPointerIterator<FSlateNotificationManager::FRegionalNotificationList,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_68);
        }
        if (pFVar11 == pFVar12) break;
        iVar2 = *(int *)(pFVar11 + 8);
        plVar9 = *(longlong **)pFVar11;
        plVar10 = plVar9 + (longlong)iVar2 * 2;
        while( true ) {
          if (*(int *)(pFVar11 + 8) != iVar2) {
            local_67[0] = 0;
            `TCheckedPointerIterator<TSharedRef<SNotificationList,1>_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_67);
          }
          if (plVar9 == plVar10) break;
          lVar3 = *plVar9;
          pTVar8 = *(TReferenceControllerBase<1> **)(lVar3 + 0x2c0);
          if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_14280b253:
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar8);
            plVar9 = plVar9 + 2;
          }
          else {
            aVar5 = pTVar8->SharedReferenceCount;
            do {
              if (aVar5 == (atomic<int>)0x0) {
                pTVar8 = (TReferenceControllerBase<1> *)0x0;
                goto LAB_14280b253;
              }
              LOCK();
              aVar6 = pTVar8->SharedReferenceCount;
              bVar13 = aVar5 == aVar6;
              if (bVar13) {
                pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
                aVar6 = aVar5;
              }
              UNLOCK();
              aVar5 = aVar6;
            } while (!bVar13);
            this_00 = *(SWindow **)(lVar3 + 0x2b8);
            if ((this_00 == (SWindow *)0x0) || (pSVar4 != (SWindow *)0x0)) goto LAB_14280b253;
            SWindow::BringToFront(this_00,false);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar8);
            plVar9 = plVar9 + 2;
          }
        }
        pFVar11 = pFVar11 + 0x20;
      }
LAB_14280b2a5:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return;
    }
    iVar2 = *(int *)(pFVar11 + 8);
    plVar9 = *(longlong **)pFVar11;
    plVar10 = plVar9 + (longlong)iVar2 * 2;
    while( true ) {
      if (*(int *)(pFVar11 + 8) != iVar2) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TSharedRef<SNotificationList,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (plVar9 == plVar10) break;
      lVar3 = *plVar9;
      pTVar8 = *(TReferenceControllerBase<1> **)(lVar3 + 0x2c0);
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        aVar5 = pTVar8->SharedReferenceCount;
        do {
          if (aVar5 == (atomic<int>)0x0) {
            pTVar8 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14280b170;
          }
          LOCK();
          aVar6 = pTVar8->SharedReferenceCount;
          bVar13 = aVar5 == aVar6;
          if (bVar13) {
            pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar6 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar6;
        } while (!bVar13);
        pSVar4 = *(SWindow **)(lVar3 + 0x2b8);
        if ((pSVar4 != (SWindow *)0x0) && (pSVar4 == param_1->Object)) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar8);
          goto LAB_14280b2a5;
        }
      }
LAB_14280b170:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      plVar9 = plVar9 + 2;
    }
    pFVar11 = pFVar11 + 0x20;
  } while( true );
}

// Get @ 14280cf20

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateNotificationManager * __cdecl FSlateNotificationManager::Get(void)

{
  FText *this;
  FString *pFVar1;
  wchar_t *pwVar2;
  FText local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)&::Instance.StagedNotificationCS,4000);
      ::Instance.bAllowNotifications = true;
      this = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"SlateNotifications",L"AllowDescription",
                        L"If false, then notifications will not be displayed to the user.");
      pFVar1 = FText::ToString(this);
      if ((pFVar1->Data).ArrayNum == 0) {
        pwVar2 = L"";
      }
      else {
        pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
      }
      FAutoConsoleVariableRef::FAutoConsoleVariableRef
                (&::Instance.CVarAllowNotifications,L"Slate.bAllowNotifications",
                 &::Instance.bAllowNotifications,pwVar2,0);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddRaw<FSlateNotificationManager>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &FCoreDelegates::OnPreExit,(FSlateNotificationManager *)&stack0x00000008,
                 (pmf_698acb01)0x155057120);
      atexit(`FSlateNotificationManager::Get'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
      return &::Instance;
    }
  }
  return &::Instance;
}

// GetWindows @ 1428171d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateNotificationManager::GetWindows
          (FSlateNotificationManager *this,
          TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  int iVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  longlong *plVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  bool bVar14;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  longlong local_48;
  TReferenceControllerBase<1> *local_40;
  
  local_res20 = (this->RegionalLists).ArrayNum;
  uVar7 = (ulonglong)(int)local_res20;
  pFVar13 = (this->RegionalLists).AllocatorInstance.Data;
  pFVar12 = pFVar13 + uVar7 * 0x20;
  do {
    if ((this->RegionalLists).ArrayNum != (int)uVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSlateNotificationManager::FRegionalNotificationList_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar12) {
      return;
    }
    iVar1 = *(int *)(pFVar13 + 8);
    plVar11 = *(longlong **)pFVar13;
    plVar10 = plVar11 + (longlong)iVar1 * 2;
    while( true ) {
      if (*(int *)(pFVar13 + 8) != iVar1) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TSharedRef<SNotificationList,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (plVar11 == plVar10) break;
      lVar2 = *plVar11;
      pTVar9 = *(TReferenceControllerBase<1> **)(lVar2 + 0x2c0);
      if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
LAB_142817282:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
        plVar11 = plVar11 + 2;
      }
      else {
        aVar4 = pTVar9->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            pTVar9 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_142817282;
          }
          LOCK();
          aVar5 = pTVar9->SharedReferenceCount;
          bVar14 = aVar4 == aVar5;
          if (bVar14) {
            pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar5 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar5;
        } while (!bVar14);
        lVar2 = *(longlong *)(lVar2 + 0x2b8);
        if (lVar2 == 0) goto LAB_142817282;
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
        local_48 = lVar2;
        local_40 = pTVar9;
        if ((lVar2 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar14)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar8 = (param_1->AllocatorInstance).Data;
        if (((pFVar8 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 < pFVar8 + (longlong)param_1->ArrayMax * 0x10)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == param_1->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar6 + 1;
        pFVar8 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
        *(longlong *)pFVar8 = local_48;
        *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_40;
        if (local_40 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_40);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
        plVar11 = plVar11 + 2;
      }
    }
    uVar7 = (ulonglong)local_res20;
    pFVar13 = pFVar13 + 0x20;
  } while( true );
}

// QueueNotification @ 14282fa70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateNotificationManager::QueueNotification
          (FSlateNotificationManager *this,FNotificationInfo *param_1)

{
  TLockFreePointerListLIFO<FNotificationInfo> TVar1;
  uint uVar2;
  FIndexedLockFreeLink *pFVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  
  uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
  uVar5 = (ulonglong)uVar2;
  if (uVar2 == 0) {
    pFVar3 = (FIndexedLockFreeLink *)0x0;
    uVar5 = 0;
  }
  else {
    pFVar3 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe] + (uVar2 & 0x3fff);
  }
  pFVar3->Payload = (atomic<void_*>)param_1;
  do {
    TVar1 = this->PendingNotifications;
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    uVar4 = (((ulonglong)TVar1 >> 0x1a) + 1) * 0x4000000;
    if (uVar4 < ((ulonglong)TVar1 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    if (uVar2 == 0) {
      pFVar3 = (FIndexedLockFreeLink *)0x0;
    }
    else {
      pFVar3 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar5 >> 0xe] + ((uint)uVar5 & 0x3fff);
    }
    pFVar3->SingleNext = (atomic<unsigned_int>)(TVar1._0_4_ & 0x3ffffff);
    if (GTestCriticalStalls != 0) {
      DoTestCriticalStall();
    }
    LOCK();
    bVar6 = TVar1 == this->PendingNotifications;
    if (bVar6) {
      this->PendingNotifications = (TLockFreePointerListLIFO<FNotificationInfo>)(uVar4 | uVar5);
    }
    UNLOCK();
  } while (!bVar6);
  return;
}

// RegisterStagedNotification @ 142830a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateNotificationManager::RegisterStagedNotification
          (FSlateNotificationManager *this,TSharedPtr<IAsyncTaskNotificationImpl,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TSharedPtr<IAsyncTaskNotificationImpl,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  lpCriticalSection = &this->StagedNotificationCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar2 = (TSharedPtr<IAsyncTaskNotificationImpl,1> *)
           (this->StagedNotifications).AllocatorInstance.Data;
  if ((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->StagedNotifications).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->StagedNotifications).ArrayNum;
  piVar1 = &(this->StagedNotifications).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->StagedNotifications).AllocatorInstance,piVar1);
  }
  (this->StagedNotifications).ArrayNum = iVar6 + 1;
  pFVar7 = (this->StagedNotifications).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(IAsyncTaskNotificationImpl **)pFVar7 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetProgressNotificationHandler @ 1428357d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateNotificationManager::SetProgressNotificationHandler
          (FSlateNotificationManager *this,IProgressNotificationHandler *param_1)

{
  this->ProgressNotificationHandler = param_1;
  return;
}

// SetRootWindow @ 142835800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateNotificationManager::SetRootWindow
          (FSlateNotificationManager *this,TSharedRef<SWindow,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  (this->RootWindowPtr).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->RootWindowPtr).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->RootWindowPtr).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->RootWindowPtr).WeakReferenceCount.ReferenceController = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ShutdownOnPreExit @ 142835f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateNotificationManager::ShutdownOnPreExit(FSlateNotificationManager *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnPreExit,this);
  DestructItems<FSlateNotificationManager::FRegionalNotificationList,int>
            ((FRegionalNotificationList *)(this->RegionalLists).AllocatorInstance.Data,
             (this->RegionalLists).ArrayNum);
  piVar1 = &(this->RegionalLists).ArrayMax;
  (this->RegionalLists).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->RegionalLists).AllocatorInstance,0,piVar1);
  }
  lpCriticalSection = &this->StagedNotificationCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DestructItems<TSharedPtr<IAsyncTaskNotificationImpl,1>,int>
              ((TSharedPtr<IAsyncTaskNotificationImpl,1> *)
               (this->StagedNotifications).AllocatorInstance.Data,
               (this->StagedNotifications).ArrayNum);
    piVar1 = &(this->StagedNotifications).ArrayMax;
    (this->StagedNotifications).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->StagedNotifications).AllocatorInstance,0,piVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x000142836023. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StartProgressNotification @ 1428362b0

/* WARNING: Enum "Type": Some values do not have unique names */

FProgressNotificationHandle __thiscall
FSlateNotificationManager::StartProgressNotification
          (FSlateNotificationManager *this,FText *param_1,int param_2)

{
  IProgressNotificationHandler *pIVar1;
  code *pcVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 in_register_00000084;
  undefined4 in_R9D;
  undefined1 local_res8 [8];
  longlong *local_28;
  undefined4 local_20;
  
  plVar3 = (longlong *)CONCAT44(in_register_00000084,param_2);
  if (this->ProgressNotificationHandler == (IProgressNotificationHandler *)0x0) {
    plVar3 = (longlong *)*plVar3;
    *(undefined4 *)&(param_1->TextData).Reference = 0xffffffff;
  }
  else {
    iVar4 = ProgressHandleCounter + 1;
    pIVar1 = this->ProgressNotificationHandler;
    local_28 = (longlong *)*plVar3;
    pcVar2 = *(code **)((longlong)*pIVar1 + 8);
    ProgressHandleCounter = iVar4;
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 8))(local_28,local_res8);
    }
    local_20 = (undefined4)plVar3[1];
    (*pcVar2)(pIVar1,iVar4,&local_28,in_R9D);
    plVar3 = (longlong *)*plVar3;
    *(int *)&(param_1->TextData).Reference = iVar4;
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  return (FProgressNotificationHandle)(int)param_1;
}

// Tick @ 142836ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateNotificationManager::Tick(FSlateNotificationManager *this)

{
  TArray<FSlateNotificationManager::FRegionalNotificationList,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  FSlateRect *pFVar9;
  FNotificationInfo *this_00;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FSlateRect *pFVar16;
  undefined1 local_res8 [8];
  TSharedPtr<SNotificationItem,1> local_48;
  FSlateRect local_38;
  
  pFVar15 = (this->RegionalLists).AllocatorInstance.Data;
  pTVar1 = &this->RegionalLists;
  iVar10 = (this->RegionalLists).ArrayNum;
  pFVar12 = pFVar15 + (longlong)iVar10 * 0x20;
  pFVar16 = (FSlateRect *)(pFVar15 + 0x10);
  while( true ) {
    if ((this->RegionalLists).ArrayNum != iVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSlateNotificationManager::FRegionalNotificationList,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar15 == pFVar12) {
      this_00 = FLockFreePointerListLIFOBase<FNotificationInfo,0,1>::Pop
                          ((FLockFreePointerListLIFOBase<FNotificationInfo,0,1> *)
                           &this->PendingNotifications);
      while (this_00 != (FNotificationInfo *)0x0) {
        AddNotification(this,&local_48,this_00);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
        FNotificationInfo::~FNotificationInfo(this_00);
        ::operator_delete(this_00,0x168);
        this_00 = FLockFreePointerListLIFOBase<FNotificationInfo,0,1>::Pop
                            ((FLockFreePointerListLIFOBase<FNotificationInfo,0,1> *)
                             &this->PendingNotifications);
      }
      uVar14 = (this->RegionalLists).ArrayNum - 1;
      if (-1 < (int)uVar14) {
        lVar13 = (longlong)(int)uVar14 << 5;
        do {
          uVar11 = ~uVar14 >> 0x1f;
          uVar8 = 0;
          if ((int)uVar14 < (this->RegionalLists).ArrayNum) {
            uVar8 = uVar11;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FRegionalNotificationList::RemoveDeadNotifications
                    ((FRegionalNotificationList *)((pTVar1->AllocatorInstance).Data + lVar13));
          uVar8 = 0;
          if ((int)uVar14 < (this->RegionalLists).ArrayNum) {
            uVar8 = uVar11;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar10 = (this->RegionalLists).ArrayNum;
          if (*(int *)((pTVar1->AllocatorInstance).Data + lVar13 + 8) == 0) {
            uVar8 = 0;
            if ((int)uVar14 < iVar10) {
              uVar8 = uVar11;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar15 = (pTVar1->AllocatorInstance).Data + lVar13;
            DestructItems<TSharedRef<SNotificationList,1>,int>
                      (*(TSharedRef<SNotificationList,1> **)pFVar15,*(int *)(pFVar15 + 8));
            if (*(void **)pFVar15 != (void *)0x0) {
              FMemory::Free(*(void **)pFVar15);
            }
            iVar10 = (this->RegionalLists).ArrayNum + ~uVar14;
            if (iVar10 != 0) {
              memmove(pFVar15,pFVar15 + 0x20,(longlong)iVar10 << 5);
            }
            piVar2 = &(this->RegionalLists).ArrayNum;
            *piVar2 = *piVar2 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,&pTVar1->AllocatorInstance,(this->RegionalLists).ArrayNum,
                       &(this->RegionalLists).ArrayMax);
          }
          else {
            uVar8 = 0;
            if ((int)uVar14 < iVar10) {
              uVar8 = uVar11;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FRegionalNotificationList::Arrange
                      ((FRegionalNotificationList *)((pTVar1->AllocatorInstance).Data + lVar13));
          }
          lVar13 = lVar13 + -0x20;
          uVar14 = uVar14 - 1;
        } while (-1 < (int)uVar14);
      }
      return;
    }
    if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentApplication.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                           ,0x141,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar7 = IsInGameThread();
    if ((((!bVar7) && (bVar7 = IsInSlateThread(), !bVar7)) &&
        (bVar7 = (*IsInAsyncLoadingThread)(), !bVar7)) &&
       ((bVar7 = IsInParallelLoadingThread(), !bVar7 &&
        (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                            ,0x142,L""), bVar7)))) break;
    if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar9 = FSlateApplication::GetWorkArea
                       (FSlateApplication::CurrentApplication.Object,&local_38,pFVar16);
    pFVar15 = pFVar15 + 0x20;
    fVar4 = pFVar9->Top;
    fVar5 = pFVar9->Right;
    fVar6 = pFVar9->Bottom;
    pFVar16->Left = pFVar9->Left;
    pFVar16->Top = fVar4;
    pFVar16->Right = fVar5;
    pFVar16->Bottom = fVar6;
    pFVar16 = pFVar16 + 2;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// UnregisterStagedNotification @ 142838260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateNotificationManager::UnregisterStagedNotification
          (FSlateNotificationManager *this,TSharedPtr<IAsyncTaskNotificationImpl,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TSharedPtr<IAsyncTaskNotificationImpl,1> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
  lpCriticalSection = &this->StagedNotificationCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar1 = (TSharedPtr<IAsyncTaskNotificationImpl,1> *)
           (this->StagedNotifications).AllocatorInstance.Data;
  if ((pTVar1 <= param_1) && (param_1 < pTVar1 + (this->StagedNotifications).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar8 = (this->StagedNotifications).ArrayNum;
  lVar5 = (longlong)iVar8;
  if (iVar8 != 0) {
    pFVar2 = (this->StagedNotifications).AllocatorInstance.Data;
    iVar11 = 0;
    bVar4 = *(IAsyncTaskNotificationImpl **)pFVar2 != param_1->Object;
    lVar10 = 0;
    iVar8 = 0;
    do {
      lVar10 = lVar10 + 1;
      iVar9 = iVar8 + 1;
      if (lVar10 < lVar5) {
        pFVar6 = pFVar2 + lVar10 * 0x10;
        do {
          if (bVar4 != (*(IAsyncTaskNotificationImpl **)pFVar6 != param_1->Object)) break;
          iVar9 = iVar9 + 1;
          lVar10 = lVar10 + 1;
          pFVar6 = pFVar6 + 0x10;
        } while (lVar10 < lVar5);
      }
      iVar7 = iVar9 - iVar8;
      if (bVar4 == false) {
        DestructItems<TSharedPtr<IAsyncTaskNotificationImpl,1>,int>
                  ((TSharedPtr<IAsyncTaskNotificationImpl,1> *)(pFVar2 + (longlong)iVar8 * 0x10),
                   iVar7);
      }
      else {
        if (iVar11 != iVar8) {
          memmove(pFVar2 + (longlong)iVar11 * 0x10,pFVar2 + (longlong)iVar8 * 0x10,
                  (longlong)iVar7 << 4);
        }
        iVar11 = iVar11 + iVar7;
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar8 = iVar9;
    } while (lVar10 < lVar5);
    (this->StagedNotifications).ArrayNum = iVar11;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateProgressNotification @ 14283a490

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateNotificationManager::UpdateProgressNotification
          (FSlateNotificationManager *this,FProgressNotificationHandle param_1,int param_2,
          int param_3,FText *param_4)

{
  IProgressNotificationHandler *pIVar1;
  code *pcVar2;
  ITextData *pIVar3;
  FText *pFVar4;
  ITextData *local_28;
  uint local_20;
  
  pFVar4 = param_4;
  pIVar1 = this->ProgressNotificationHandler;
  if (pIVar1 != (IProgressNotificationHandler *)0x0) {
    local_28 = (param_4->TextData).Reference;
    pcVar2 = *(code **)((longlong)*pIVar1 + 0x10);
    if (local_28 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28 + 8))(local_28,&param_4);
    }
    local_20 = pFVar4->Flags;
    (*pcVar2)(pIVar1,param_1.Id,param_2,param_3,&local_28);
  }
  pIVar3 = (pFVar4->TextData).Reference;
  if (pIVar3 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014283a52f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar3 + 0x10))();
    return;
  }
  return;
}

