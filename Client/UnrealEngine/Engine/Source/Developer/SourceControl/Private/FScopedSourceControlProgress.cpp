// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 4

// <lambda_invoker_cdecl> @ 146af5bb0

void __cdecl
`FScopedSourceControlProgress::Tick'::__l8::<lambda_1>::<lambda_invoker_cdecl>
          (FRHICommandListImmediate *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                       ,0x78b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145c9d4ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(GDynamicRHI->_padding_ + 0x38))(GDynamicRHI,param_1);
  return;
}

// FScopedSourceControlProgress @ 146aff210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FScopedSourceControlProgress * __thiscall
FScopedSourceControlProgress::FScopedSourceControlProgress
          (FScopedSourceControlProgress *this,FText *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  atomic<int> *paVar1;
  byte *pbVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  ITextData *pIVar5;
  code *pcVar6;
  FSharedReferencer<1> FVar7;
  SSourceControlProgress *pSVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  FArguments *pFVar13;
  FArguments *pFVar14;
  TAttribute<FText> *pTVar15;
  FScopedSourceControlProgress *pFVar16;
  TSharedRef<FGlobalTabmanager,1> *pTVar17;
  FSlateApplication *pFVar18;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar19;
  undefined ***pppuVar20;
  ulonglong uVar21;
  undefined1 auStackY_748 [32];
  T0RequiredArgs local_718;
  T0RequiredArgs local_717 [15];
  TSharedRef<SWindow,1> local_708;
  FLLMScope local_6f8;
  FLLMScope local_6f4;
  undefined1 local_6f0 [8];
  ForAnyElementType local_6e8;
  int local_6e0;
  TSlateDecl<SSourceControlProgress,RequiredArgs::T0RequiredArgs> local_6d8;
  FName local_6c0;
  FMemScope local_6b8;
  FName local_6b0;
  FMemScope local_6a8;
  SWindow *local_6a0;
  TSharedRef<SWidget,1> local_698;
  TSharedPtr<SWindow,1> local_688;
  FDestructionSentinel local_678;
  TSharedPtr<SWidget_const_,1> local_658;
  TSharedRef<SWindow,1> local_648;
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> local_638;
  TAttribute<FText> local_620;
  FArguments local_5f0;
  FArguments local_2f8;
  code *local_b8 [2];
  undefined **local_a8;
  code *pcStack_a0;
  undefined8 local_98;
  undefined ***local_90;
  undefined1 local_88 [16];
  undefined **local_78;
  code *pcStack_70;
  undefined8 local_68;
  undefined ***local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_748;
  (this->WindowPtr).Object = (SWindow *)0x0;
  (this->WindowPtr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar10 = FApp::IsUnattended();
  if (bVar10) {
    return this;
  }
  if (PRIVATE_GIsRunningCommandlet != false) {
    return this;
  }
  bVar10 = FText::IsEmpty(param_1);
  if (bVar10) {
    return this;
  }
  pFVar13 = SWindow::FArguments::FArguments(&local_5f0);
  pFVar13->_SizingRule = Autosized;
  pFVar13->_IsPopupWindow = true;
  pFVar13->_SupportsMaximize = false;
  pFVar13->_SupportsMinimize = false;
  pFVar13->_CreateTitleBar = false;
  FLLMScope::FLLMScope(&local_6f8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_6c0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_6b8,&local_6c0,true);
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>
            (&local_638,"SWindow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\ScopedSourceControlProgress.cpp"
             ,199,&local_718);
  FMemScope::~FMemScope(&local_6b8);
  FLLMScope::~FLLMScope(&local_6f8);
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::operator<<=(&local_638,&local_708,pFVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_638._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_5f0._CloseButtonToolTipText.Getter)
  ;
  if (local_5f0._CloseButtonToolTipText.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_5f0._CloseButtonToolTipText.Value.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5f0._Content.Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_5f0._Title.Getter);
  if (local_5f0._Title.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_5f0._Title.Value.TextData.Reference + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_5f0);
  FVar7.ReferenceController = local_708.SharedReferenceCount.ReferenceController;
  (this->WindowPtr).Object = local_708.Object;
  if (local_708.SharedReferenceCount.ReferenceController !=
      (this->WindowPtr).WeakReferenceCount.ReferenceController) {
    if (local_708.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_708.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_708.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->WindowPtr).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->WindowPtr).WeakReferenceCount.ReferenceController = FVar7.ReferenceController;
  }
  local_6a0 = local_708.Object;
  pFVar14 = SSourceControlProgress::FArguments::FArguments(&local_2f8);
  pTVar15 = TAttribute<FText>::TAttribute<FText><FText>(&local_620,param_1);
  FText::operator=(&(pFVar14->_Text).Value,&pTVar15->Value);
  (pFVar14->_Text).bIsSet = pTVar15->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar15->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar15->Getter);
  pIVar5 = (pTVar15->Value).TextData.Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  local_6f0 = (undefined1  [8])0x0;
  local_6e8.Data = (FScriptContainerElement *)0x0;
  local_6e0 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_6f0,param_2);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar14->_OnCancelled,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_6f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6f0,
             (FWriteAccessScope *)&local_678);
  if ((local_6e0 != 0) && (local_6e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_6e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_6e8,0,0,0x10);
    local_6e0 = 0;
  }
  if (local_678.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_678.Accessor,&local_678);
  }
  if (local_6e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6f0);
  FLLMScope::FLLMScope(&local_6f4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_6b0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_6a8,&local_6b0,true);
  TSlateDecl<SSourceControlProgress,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSourceControlProgress,RequiredArgs::T0RequiredArgs>
            (&local_6d8,"SSourceControlProgress",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\ScopedSourceControlProgress.cpp"
             ,0xd1,local_717);
  FMemScope::~FMemScope(&local_6a8);
  FLLMScope::~FLLMScope(&local_6f4);
  pSVar8 = local_6d8._Widget.Object;
  if ((local_6d8._Widget.Object == (SSourceControlProgress *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pFVar16 = (FScopedSourceControlProgress *)(*pcVar6)();
    return pFVar16;
  }
  SWidget::SWidgetConstruct((SWidget *)local_6d8._Widget.Object,(FSlateBaseNamedArgs *)pFVar14);
  SSourceControlProgress::Construct(local_6d8._Widget.Object,pFVar14);
  if ((local_6d8._Widget.Object == (SSourceControlProgress *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pFVar16 = (FScopedSourceControlProgress *)(*pcVar6)();
    return pFVar16;
  }
  if (((local_6d8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)((local_6d8._Widget.Object)->_padding_ + 0x228))(local_6d8._Widget.Object);
    bVar12 = 0;
    if (cVar11 == '\0') goto LAB_146aff5f0;
  }
  bVar12 = 0x20;
LAB_146aff5f0:
  *(byte *)&(local_6d8._Widget.Object)->_padding_ =
       (byte)(local_6d8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_6d8._Widget.Object)->_padding_ =
       (byte)(local_6d8._Widget.Object)->_padding_ | bVar12;
  if ((local_6d8._Widget.Object == (SSourceControlProgress *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pFVar16 = (FScopedSourceControlProgress *)(*pcVar6)();
    return pFVar16;
  }
  pbVar2 = (byte *)((longlong)&(local_6d8._Widget.Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_6d8._Widget.Object == (SSourceControlProgress *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pFVar16 = (FScopedSourceControlProgress *)(*pcVar6)();
    return pFVar16;
  }
  FVar9.ReferenceController = local_6d8._Widget.SharedReferenceCount.ReferenceController;
  local_6d8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_6d8._Widget.Object = (SSourceControlProgress *)0x0;
  if ((pSVar8 == (SSourceControlProgress *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pFVar16 = (FScopedSourceControlProgress *)(*pcVar6)();
    return pFVar16;
  }
  local_698.Object = (SWidget *)pSVar8;
  local_698.SharedReferenceCount.ReferenceController = FVar9.ReferenceController;
  if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar9.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SWindow::SetContent(local_6a0,&local_698);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2f8._OnCancelled);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2f8._Text.Getter);
  if (local_2f8._Text.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2f8._Text.Value.TextData.Reference + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2f8);
  pTVar17 = FGlobalTabmanager::Get();
  FGlobalTabmanager::GetRootWindow(pTVar17->Object,&local_688);
  pFVar18 = FSlateApplication::Get();
  local_658.Object = (SWidget *)local_688.Object;
  local_658.SharedReferenceCount.ReferenceController =
       local_688.SharedReferenceCount.ReferenceController;
  if (local_688.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_688.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_688.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_648.Object = local_708.Object;
  local_648.SharedReferenceCount.ReferenceController =
       local_708.SharedReferenceCount.ReferenceController;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateApplication::AddModalWindow(pFVar18,&local_648,&local_658,true);
  SWindow::ShowWindow(local_708.Object);
  bVar10 = FApp::IsUnattended();
  if ((((!bVar10) && (PRIVATE_GIsRunningCommandlet == false)) &&
      ((this->WindowPtr).Object != (SWindow *)0x0)) &&
     ((pTVar4 = (this->WindowPtr).WeakReferenceCount.ReferenceController,
      pTVar4 != (TReferenceControllerBase<1> *)0x0 && (0 < (int)pTVar4->SharedReferenceCount)))) {
    pFVar18 = FSlateApplication::Get();
    bVar10 = FSlateApplication::CanDisplayWindows(pFVar18);
    if (bVar10) {
      pFVar18 = FSlateApplication::Get();
      bVar10 = FSlateApplication::IsTicking(pFVar18);
      pFVar18 = FSlateApplication::Get();
      FSlateApplication::Tick(pFVar18,All);
      if ((!bVar10) && (GRHIGlobals.IsRHIInitialized != false)) {
        local_90 = (undefined ***)0x0;
        local_a8 = &
                   ___7__TFunction_OwnedObject_P6AXAEAVFRHICommandListImmediate___Z_00_0A__Function_Private_Core_UE__6B_
        ;
        pcStack_a0 = `FScopedSourceControlProgress::Tick'::__l8::<lambda_1>::<lambda_invoker_cdecl>;
        local_b8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<void_(__cdecl*)(FRHICommandListImmediate_&),void,FRHICommandListImmediate_&>
                      ::Call;
        this_00 = FRenderCommandList::GetInstanceTLS();
        if (this_00 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_FScopedSourceControlProgress::Tick_::__l8::TSTR_EndFrameCmd248>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
        }
        else {
          this_01 = FRenderCommandList::GetRenderThread(this_00);
          local_88._0_8_ = local_b8[0];
          local_60 = local_90;
          local_78 = local_a8;
          pcStack_70 = pcStack_a0;
          local_68 = local_98;
          local_b8[0] = (code *)0x0;
          local_58 = 2;
          pFVar19 = (FRenderCommandTag *)
                    TRenderCommandTag<`FScopedSourceControlProgress::Tick'::__l8::TSTR_EndFrameCmd248>
                    ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_88,pFVar19);
          uVar21 = (ulonglong)local_58;
          if ((2 < uVar21) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0xd4,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            pFVar16 = (FScopedSourceControlProgress *)(*pcVar6)();
            return pFVar16;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar21] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if ((code *)local_88._0_8_ != (code *)0x0) {
              pppuVar20 = (undefined ***)(local_88 + 0x10);
              if (local_60 != (undefined ***)0x0) {
                pppuVar20 = local_60;
              }
              (*(code *)(*pppuVar20)[2])();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar21])(local_88);
          }
        }
        if (local_b8[0] != (code *)0x0) {
          pppuVar20 = &local_a8;
          if (local_90 != (undefined ***)0x0) {
            pppuVar20 = local_90;
          }
          (*(code *)(*pppuVar20)[2])();
        }
      }
      pFVar18 = FSlateApplication::Get();
      (**(code **)(**(longlong **)&pFVar18->field_0x60 + 200))();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_688.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  return this;
}

// ~FScopedSourceControlProgress @ 146b00e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FScopedSourceControlProgress::~FScopedSourceControlProgress(FScopedSourceControlProgress *this)

{
  FWeakReferencer<1> *pFVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  atomic<int> aVar6;
  SWindow *pSVar7;
  SWindow *pSVar8;
  SWindow *this_00;
  bool bVar9;
  
  pFVar1 = &(this->WindowPtr).WeakReferenceCount;
  if ((((this->WindowPtr).Object == (SWindow *)0x0) ||
      (pTVar4 = pFVar1->ReferenceController, pTVar4 == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)pTVar4->SharedReferenceCount < 1)) goto LAB_146b00ea5;
  pSVar8 = (SWindow *)pFVar1->ReferenceController;
  this_00 = (SWindow *)0x0;
  pSVar7 = pSVar8;
  if (pSVar8 == (SWindow *)0x0) {
LAB_146b00e61:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pSVar8 = pSVar7;
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    aVar3 = *(atomic<int> *)&pSVar8->_padding_;
    do {
      pSVar7 = this_00;
      if (aVar3 == (atomic<int>)0x0) goto LAB_146b00e61;
      LOCK();
      aVar6 = *(atomic<int> *)&pSVar8->_padding_;
      bVar9 = aVar3 == aVar6;
      if (bVar9) {
        *(atomic<int> *)&pSVar8->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar9);
    this_00 = (this->WindowPtr).Object;
    pSVar7 = pSVar8;
    if (this_00 == (SWindow *)0x0) goto LAB_146b00e61;
  }
  SWindow::RequestDestroyWindow(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar8);
LAB_146b00ea5:
  pTVar4 = (this->WindowPtr).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar4->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000146b00ecd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      return;
    }
  }
  return;
}

// Tick @ 146b283e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FScopedSourceControlProgress::Tick(FScopedSourceControlProgress *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FSlateApplication *pFVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  undefined ***pppuVar6;
  ulonglong uVar7;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  code *pcStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  code *pcStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar3 = FApp::IsUnattended();
  if ((((!bVar3) && (PRIVATE_GIsRunningCommandlet == false)) &&
      ((this->WindowPtr).Object != (SWindow *)0x0)) &&
     ((pTVar1 = (this->WindowPtr).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0 && (0 < (int)pTVar1->SharedReferenceCount)))) {
    pFVar4 = FSlateApplication::Get();
    bVar3 = FSlateApplication::CanDisplayWindows(pFVar4);
    if (bVar3) {
      pFVar4 = FSlateApplication::Get();
      bVar3 = FSlateApplication::IsTicking(pFVar4);
      pFVar4 = FSlateApplication::Get();
      FSlateApplication::Tick(pFVar4,All);
      if ((!bVar3) && (GRHIGlobals.IsRHIInitialized != false)) {
        local_60 = (undefined ***)0x0;
        local_78 = &
                   ___7__TFunction_OwnedObject_P6AXAEAVFRHICommandListImmediate___Z_00_0A__Function_Private_Core_UE__6B_
        ;
        pcStack_70 = `FScopedSourceControlProgress::Tick'::__l8::<lambda_1>::<lambda_invoker_cdecl>;
        local_88[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<void_(__cdecl*)(FRHICommandListImmediate_&),void,FRHICommandListImmediate_&>
                      ::Call;
        this_00 = FRenderCommandList::GetInstanceTLS();
        if (this_00 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_FScopedSourceControlProgress::Tick_::__l8::TSTR_EndFrameCmd248>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
        }
        else {
          this_01 = FRenderCommandList::GetRenderThread(this_00);
          local_58._0_8_ = local_88[0];
          local_30 = local_60;
          local_48 = local_78;
          pcStack_40 = pcStack_70;
          local_38 = local_68;
          local_88[0] = (code *)0x0;
          local_28 = 2;
          pFVar5 = (FRenderCommandTag *)
                   TRenderCommandTag<`FScopedSourceControlProgress::Tick'::__l8::TSTR_EndFrameCmd248>
                   ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_58,pFVar5);
          uVar7 = (ulonglong)local_28;
          if (2 < uVar7) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L"");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar7] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if ((code *)local_58._0_8_ != (code *)0x0) {
              pppuVar6 = (undefined ***)(local_58 + 0x10);
              if (local_30 != (undefined ***)0x0) {
                pppuVar6 = local_30;
              }
              (*(code *)(*pppuVar6)[2])();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar7])(local_58);
          }
        }
        if (local_88[0] != (code *)0x0) {
          pppuVar6 = &local_78;
          if (local_60 != (undefined ***)0x0) {
            pppuVar6 = local_60;
          }
          (*(code *)(*pppuVar6)[2])();
        }
      }
      pFVar4 = FSlateApplication::Get();
      (**(code **)(**(longlong **)&pFVar4->field_0x60 + 200))();
    }
  }
  return;
}

