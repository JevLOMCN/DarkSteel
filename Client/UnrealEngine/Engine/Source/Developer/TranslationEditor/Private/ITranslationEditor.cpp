// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 1

// OpenTranslationPicker @ 146bb8850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl ITranslationEditor::OpenTranslationPicker(void)

{
  atomic<int> *paVar1;
  byte *pbVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  STranslationPickerOverlay *pSVar7;
  FSharedReferencer<1> FVar8;
  UEngine *pUVar9;
  SWindow *pSVar10;
  STranslationPickerFloatingWindow *pSVar11;
  TSharedPtr<STranslationPickerFloatingWindow,1> TVar12;
  bool bVar13;
  char cVar14;
  byte bVar15;
  atomic<int> aVar16;
  TSharedRef<FGlobalTabmanager,1> *pTVar17;
  FSlateApplication *pFVar18;
  FDeprecateVector2DParameter *pFVar19;
  FArguments *pFVar20;
  TSharedRef<SWindow,1> *pTVar21;
  FSlateBaseNamedArgs *pFVar22;
  UClass *pUVar23;
  FScopedWidgetSlotArguments *pFVar24;
  FSharedReferencer<1> FVar25;
  TReferenceControllerBase<1> *pTVar26;
  undefined1 auStackY_648 [32];
  T0RequiredArgs TStack_618;
  T0RequiredArgs aTStack_617 [15];
  TSharedRef<SWindow,1> TStack_608;
  FLLMScope FStack_5f8;
  FLLMScope FStack_5f4;
  STranslationPickerOverlay *pSStack_5f0;
  FSharedReferencer<1> FStack_5e8;
  TSlateDecl<STranslationPickerFloatingWindow,RequiredArgs::T0RequiredArgs> TStack_5e0;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  SWindow *pSStack_5c0;
  TReferenceControllerBase<1> *pTStack_5b8;
  TSlateDecl<STranslationPickerOverlay,RequiredArgs::T0RequiredArgs> TStack_5b0;
  undefined8 uStack_598;
  FSharedReferencer<1> FStack_590;
  FName FStack_588;
  FMemScope FStack_580;
  FName FStack_578;
  FMemScope FStack_570;
  TSharedPtr<STranslationPickerFloatingWindow,1> TStack_568;
  undefined8 uStack_558;
  FSharedReferencer<1> FStack_550;
  TSharedPtr<SWindow,1> TStack_548;
  TSharedRef<SWidget,1> TStack_538;
  undefined1 auStack_528 [16];
  TSharedRef<SWindow,1> TStack_518;
  TSharedRef<SWindow,1> TStack_508;
  SWindow *pSStack_4f8;
  TReferenceControllerBase<1> *pTStack_4f0;
  undefined1 auStack_4e8 [8];
  TReferenceControllerBase<1> *pTStack_4e0;
  TSharedRef<SWindow,1> TStack_4d8;
  FArguments FStack_4c8;
  FSlateBaseNamedArgs FStack_2c0;
  FScopedWidgetSlotArguments FStack_c8;
  ulonglong uStack_28;
  
  if (TranslationPickerManager::PickerWindow.Object != (SWindow *)0x0) {
    return;
  }
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_648;
  if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
    return;
  }
  if (TranslationPickerManager::PickerWindowWidget.Object != (STranslationPickerFloatingWindow *)0x0
     ) {
    return;
  }
  pTVar17 = FGlobalTabmanager::Get();
  FGlobalTabmanager::GetRootWindow(pTVar17->Object,&TStack_548);
  SWindow::MakeCursorDecorator(&TStack_608);
  SWindow::SetSizingRule(TStack_608.Object,FixedSize);
  uStack_5c8 = 0x43fa0000;
  uStack_5c4 = 0x43fa0000;
  SWindow::Resize(TStack_608.Object,(FDeprecateVector2DParameter)0x43fa000043fa0000);
  pSVar10 = TStack_608.Object;
  pFVar18 = FSlateApplication::Get();
  pFVar19 = (FDeprecateVector2DParameter *)
            (**(code **)(*(longlong *)pFVar18 + 0x68))(pFVar18,auStack_528);
  SWindow::MoveWindowTo(pSVar10,*pFVar19);
  FStack_590.ReferenceController = TStack_608.SharedReferenceCount.ReferenceController;
  if (TStack_608.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_608.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_608.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TranslationPickerManager::PickerWindow.Object = TStack_608.Object;
  uStack_598 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&TranslationPickerManager::PickerWindow.SharedReferenceCount,&FStack_590);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_590.ReferenceController);
  pSVar10 = TStack_608.Object;
  pFVar20 = STranslationPickerFloatingWindow::FArguments::FArguments(&FStack_4c8);
  FVar8.ReferenceController = TStack_608.SharedReferenceCount.ReferenceController;
  if (TStack_608.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_608.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(TStack_608.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
    LOCK();
    (TStack_608.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(TStack_608.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  pSStack_5c0 = (pFVar20->_ParentWindow).Object;
  pTStack_5b8 = (pFVar20->_ParentWindow).WeakReferenceCount.ReferenceController;
  (pFVar20->_ParentWindow).Object = TStack_608.Object;
  (pFVar20->_ParentWindow).WeakReferenceCount.ReferenceController =
       TStack_608.SharedReferenceCount.ReferenceController;
  if (pTStack_5b8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTStack_5b8->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTStack_5b8->_padding_ + 8))(pTStack_5b8,1);
    }
  }
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar8.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((FVar8.ReferenceController)->_padding_ + 8))(FVar8.ReferenceController,1);
    }
  }
  FLLMScope::FLLMScope(&FStack_5f8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  FStack_588 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&FStack_580,&FStack_588,true);
  TSlateDecl<STranslationPickerFloatingWindow,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STranslationPickerFloatingWindow,RequiredArgs::T0RequiredArgs>
            (&TStack_5e0,"STranslationPickerFloatingWindow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerWidget.cpp"
             ,0x9e,&TStack_618);
  FMemScope::~FMemScope(&FStack_580);
  FLLMScope::~FLLMScope(&FStack_5f8);
  FVar8.ReferenceController = TStack_5e0._Widget.SharedReferenceCount.ReferenceController;
  pSVar11 = TStack_5e0._Widget.Object;
  TStack_568.SharedReferenceCount.ReferenceController =
       TStack_5e0._Widget.SharedReferenceCount.ReferenceController;
  TStack_568.Object = TStack_5e0._Widget.Object;
  TVar12 = TStack_568;
  if (TStack_5e0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_5e0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_5e0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  TStack_568 = TranslationPickerManager::PickerWindowWidget;
  FVar25 = TranslationPickerManager::PickerWindowWidget.SharedReferenceCount.ReferenceController;
  TranslationPickerManager::PickerWindowWidget = TVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar25.ReferenceController);
  if ((TStack_5e0._Widget.Object == (STranslationPickerFloatingWindow *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)TStack_5e0._Widget.Object,(FSlateBaseNamedArgs *)pFVar20);
  STranslationPickerFloatingWindow::Construct(TStack_5e0._Widget.Object,pFVar20);
  if ((TStack_5e0._Widget.Object == (STranslationPickerFloatingWindow *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((TStack_5e0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar14 = (**(code **)((TStack_5e0._Widget.Object)->_padding_ + 0x228))
                       (TStack_5e0._Widget.Object);
    bVar15 = 0;
    if (cVar14 != '\0') goto LAB_146bb8353;
  }
  else {
LAB_146bb8353:
    bVar15 = 0x20;
  }
  *(byte *)&(TStack_5e0._Widget.Object)->_padding_ =
       (byte)(TStack_5e0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(TStack_5e0._Widget.Object)->_padding_ =
       (byte)(TStack_5e0._Widget.Object)->_padding_ | bVar15;
  pbVar2 = (byte *)((longlong)&(TStack_5e0._Widget.Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  TStack_5e0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TStack_5e0._Widget.Object = (STranslationPickerFloatingWindow *)0x0;
  if ((pSVar11 == (STranslationPickerFloatingWindow *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  TStack_538.Object = (SWidget *)pSVar11;
  TStack_538.SharedReferenceCount.ReferenceController = FVar8.ReferenceController;
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SWindow::SetContent(pSVar10,&TStack_538);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (FStack_4c8._ParentWindow.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FStack_4c8._ParentWindow.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar3 == (atomic<int>)0x1) &&
       (FStack_4c8._ParentWindow.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)((FStack_4c8._ParentWindow.WeakReferenceCount.ReferenceController)->_padding_ + 8)
      )(FStack_4c8._ParentWindow.WeakReferenceCount.ReferenceController,1);
    }
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&FStack_4c8);
  if (TStack_548.Object == (SWindow *)0x0) {
    pFVar18 = FSlateApplication::Get();
    pSStack_4f8 = TStack_608.Object;
    pTStack_4f0 = TStack_608.SharedReferenceCount.ReferenceController;
    pcVar6 = *(code **)(*(longlong *)pFVar18 + 0x10);
    if (TStack_608.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_608.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_608.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar6)(pFVar18,auStack_4e8);
    TStack_508.SharedReferenceCount.ReferenceController = pTStack_4e0;
  }
  else {
    pFVar18 = FSlateApplication::Get();
    pTVar21 = TSharedPtr<SWindow,1>::ToSharedRef(&TStack_548,&TStack_4d8);
    TStack_518.Object = TStack_608.Object;
    TStack_518.SharedReferenceCount.ReferenceController =
         TStack_608.SharedReferenceCount.ReferenceController;
    if (TStack_608.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_608.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_608.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateApplication::AddWindowAsNativeChild(pFVar18,&TStack_508,&TStack_518,pTVar21,true);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_508.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_608.SharedReferenceCount.ReferenceController);
  if (TranslationPickerManager::MainWindowOverlay.Object != (STranslationPickerOverlay *)0x0)
  goto LAB_146bb86ac;
  pFVar22 = (FSlateBaseNamedArgs *)
            STranslationPickerOverlay::FArguments::FArguments((FArguments *)&FStack_2c0);
  FLLMScope::FLLMScope(&FStack_5f4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  FStack_578 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&FStack_570,&FStack_578,true);
  TSlateDecl<STranslationPickerOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STranslationPickerOverlay,RequiredArgs::T0RequiredArgs>
            (&TStack_5b0,"STranslationPickerOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerWidget.cpp"
             ,0xae,aTStack_617);
  FMemScope::~FMemScope(&FStack_570);
  FLLMScope::~FLLMScope(&FStack_5f4);
  pSVar7 = TStack_5b0._Widget.Object;
  if ((TStack_5b0._Widget.Object == (STranslationPickerOverlay *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)TStack_5b0._Widget.Object,pFVar22);
  if ((TStack_5b0._Widget.Object == (STranslationPickerOverlay *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((TStack_5b0._Widget.Object)->field_0x30 & 0x10) == 0) {
    cVar14 = (**(code **)(*(longlong *)TStack_5b0._Widget.Object + 0x228))
                       (TStack_5b0._Widget.Object);
    bVar15 = 0;
    if (cVar14 != '\0') goto LAB_146bb85b9;
  }
  else {
LAB_146bb85b9:
    bVar15 = 0x20;
  }
  FVar8.ReferenceController = TStack_5b0._Widget.SharedReferenceCount.ReferenceController;
  (TStack_5b0._Widget.Object)->field_0x30 = (TStack_5b0._Widget.Object)->field_0x30 & 0xdf;
  (TStack_5b0._Widget.Object)->field_0x30 = (TStack_5b0._Widget.Object)->field_0x30 | bVar15;
  (TStack_5b0._Widget.Object)->field_0x31 = (TStack_5b0._Widget.Object)->field_0x31 | 4;
  TStack_5b0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TStack_5b0._Widget.Object = (STranslationPickerOverlay *)0x0;
  if ((pSVar7 == (STranslationPickerOverlay *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FStack_550.ReferenceController = FVar8.ReferenceController;
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TranslationPickerManager::MainWindowOverlay.Object = pSVar7;
  uStack_558 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&TranslationPickerManager::MainWindowOverlay.SharedReferenceCount,&FStack_550);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_550.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&FStack_2c0);
  pUVar9 = GEngine;
  if (GEngine != (UEngine *)0x0) {
    pUVar23 = Z_Construct_UClass_UGameEngine_NoRegister();
    iVar4 = (int)pUVar23->_padding_;
    if ((iVar4 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar4 * 8)
        == &pUVar23->_padding_)) {
      pTVar5 = (TReferenceControllerBase<1> *)pUVar9[1]._padding_;
      pTVar26 = pTVar5;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = pTVar5->SharedReferenceCount;
        do {
          pTVar26 = (TReferenceControllerBase<1> *)0x0;
          if (aVar3 == (atomic<int>)0x0) goto LAB_146bb86a4;
          LOCK();
          aVar16 = pTVar5->SharedReferenceCount;
          bVar13 = aVar3 == aVar16;
          if (bVar13) {
            pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar16 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar16;
        } while (!bVar13);
        pTVar26 = pTVar5;
        if ((SWindow *)pUVar9[1]._padding_ != (SWindow *)0x0) {
          pFVar24 = SWindow::AddOverlaySlot((SWindow *)pUVar9[1]._padding_,&FStack_c8,-1);
          if ((TranslationPickerManager::MainWindowOverlay.Object ==
               (STranslationPickerOverlay *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x408,L""), bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar8.ReferenceController =
               TranslationPickerManager::MainWindowOverlay.SharedReferenceCount.ReferenceController;
          pSVar7 = TranslationPickerManager::MainWindowOverlay.Object;
          if (TranslationPickerManager::MainWindowOverlay.SharedReferenceCount.ReferenceController
              != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (TranslationPickerManager::MainWindowOverlay.SharedReferenceCount.ReferenceController)->
            SharedReferenceCount =
                 (atomic<int>)
                 ((int)(TranslationPickerManager::MainWindowOverlay.SharedReferenceCount.
                       ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((pSVar7 == (STranslationPickerOverlay *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x25d,L""), bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pSStack_5f0 = pSVar7;
          FStack_5e8.ReferenceController = FVar8.ReferenceController;
          if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar8.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            (FVar8.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((STranslationPickerOverlay **)&pFVar24->_padding_ != &pSStack_5f0) {
            pFVar24->_padding_ = (longlong)pSVar7;
            pSStack_5f0 = (STranslationPickerOverlay *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)&pFVar24->_padding_,&FStack_5e8);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_5e8.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar8.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar8.ReferenceController);
          TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::
          ~FScopedWidgetSlotArguments(&FStack_c8);
        }
      }
LAB_146bb86a4:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
    }
  }
LAB_146bb86ac:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_548.SharedReferenceCount.ReferenceController);
  return;
}

