// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 9

// FColorDragDrop @ 14301a640

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FColorDragDrop * __thiscall
FColorDragDrop::FColorDragDrop
          (FColorDragDrop *this,FLinearColor *param_1,bool param_2,bool param_3,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_4,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_5)

{
  SWindow *this_00;
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FSlateApplicationBase *pFVar5;
  SWidget *pSVar6;
  bool bVar7;
  ISlateStyle *pIVar8;
  FName *pFVar9;
  FWindowStyle *pFVar10;
  TSharedRef<SWindow,1> *pTVar11;
  FColorDragDrop *pFVar12;
  FName local_res8;
  SWindow *local_a8;
  FSharedReferencer<1> local_a0;
  TSharedPtr<SWidget,1> local_98;
  longlong local_88;
  longlong local_80;
  TSharedRef<SWidget,1> local_78;
  TSharedRef<SWindow,1> local_68;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  FReadAccessScope local_48;
  
  FDragDropOperation::FDragDropOperation((FDragDropOperation *)this);
  uVar3 = *(undefined8 *)&param_1->field0_0x0;
  uVar4 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  this->_padding_ = (longlong)&___7FColorDragDrop__6B_;
  (this->OriginBar).Object = (SThemeColorBlocksBar *)0x0;
  (this->OriginBar).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->ShowTrash = 0;
  *(undefined8 *)&(this->ShowTrash).field_0x8 = 0;
  *(undefined4 *)&(this->ShowTrash).field_0x10 = 0;
  *(undefined8 *)&this->HideTrash = 0;
  *(undefined8 *)&(this->HideTrash).field_0x8 = 0;
  *(undefined4 *)&(this->HideTrash).field_0x10 = 0;
  this->bUseAlpha = param_3;
  this->bUseSRGB = param_2;
  *(undefined8 *)&(this->Color).field0_0x0 = uVar3;
  *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8) = uVar4;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->ShowTrash,param_4);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->HideTrash,param_5);
  GetDefaultDecorator(this,&local_98);
  pSVar6 = local_98.Object;
  if (local_98.Object != (SWidget *)0x0) {
    pIVar8 = FAppStyle::Get();
    pFVar9 = ::FName::FName(&local_res8,"ColorPicker.CursorDecorator");
    pFVar10 = (FWindowStyle *)
              (**(code **)((longlong)*pIVar8 + 0xa0))(pIVar8,FWindowStyle::TypeName,*pFVar9,0,1);
    if (pFVar10 == (FWindowStyle *)0x0) {
      pFVar10 = FWindowStyle::GetDefault();
    }
    pTVar11 = SWindow::MakeStyledCursorDecorator(&local_68,pFVar10);
    local_a0.ReferenceController = (pTVar11->SharedReferenceCount).ReferenceController;
    local_a8 = pTVar11->Object;
    if (local_a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_a0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    plVar1 = &this->_padding_;
    if ((SWindow **)plVar1 != &local_a8) {
      *plVar1 = (longlong)local_a8;
      local_a8 = (SWindow *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&local_a0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    if (*plVar1 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        pFVar12 = (FColorDragDrop *)(*pcVar2)();
        return pFVar12;
      }
    }
    this_00 = (SWindow *)*plVar1;
    if (pSVar6 == (SWidget *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        pFVar12 = (FColorDragDrop *)(*pcVar2)();
        return pFVar12;
      }
    }
    local_78.Object = local_98.Object;
    local_78.SharedReferenceCount.ReferenceController =
         local_98.SharedReferenceCount.ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_98.Object == (SWidget *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        pFVar12 = (FColorDragDrop *)(*pcVar2)();
        return pFVar12;
      }
    }
    SWindow::SetContent(this_00,&local_78);
    if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentBaseApplication.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Application\\SlateApplicationBase.h"
                         ,0x22a,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        pFVar12 = (FColorDragDrop *)(*pcVar2)();
        return pFVar12;
      }
      if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          pFVar12 = (FColorDragDrop *)(*pcVar2)();
          return pFVar12;
        }
      }
    }
    pFVar5 = FSlateApplicationBase::CurrentBaseApplication.Object;
    pcVar2 = *(code **)(*(longlong *)FSlateApplicationBase::CurrentBaseApplication.Object + 0x10);
    if (*plVar1 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        pFVar12 = (FColorDragDrop *)(*pcVar2)();
        return pFVar12;
      }
    }
    local_80 = this->_padding_;
    local_88 = *plVar1;
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    if (local_88 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        pFVar12 = (FColorDragDrop *)(*pcVar2)();
        return pFVar12;
      }
    }
    (*pcVar2)(pFVar5,local_58,&local_88,1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ShowTrash,&local_48);
  if ((*(int *)&(this->ShowTrash).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->ShowTrash).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  return this;
}

// GetDefaultDecorator @ 143033900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
FColorDragDrop::GetDefaultDecorator
          (FColorDragDrop *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  FArguments *pFVar9;
  ISlateStyle *pIVar10;
  FName *pFVar11;
  FArguments *pFVar12;
  TSharedRef<SColorBlock,1> *pTVar13;
  TSharedRef<SBorder,1> *pTVar14;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  FDestructionSentinel local_968;
  undefined2 local_950;
  undefined1 local_948 [8];
  ForAnyElementType FStack_940;
  ulonglong local_938;
  EColorBlockAlphaDisplayMode local_930;
  undefined1 local_92f;
  undefined1 local_928 [8];
  ForAnyElementType FStack_920;
  ulonglong local_918;
  undefined1 local_910;
  undefined1 local_90f;
  undefined1 local_908 [8];
  ForAnyElementType FStack_900;
  ulonglong local_8f8;
  undefined1 local_8f0;
  undefined1 local_8ef;
  undefined1 local_8e8 [8];
  ForAnyElementType FStack_8e0;
  ulonglong local_8d8;
  FSlateBrush *local_8d0;
  undefined1 local_8c8;
  undefined1 local_8c0 [8];
  ForAnyElementType FStack_8b8;
  ulonglong local_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined1 local_898;
  undefined1 local_890 [8];
  ForAnyElementType FStack_888;
  ulonglong local_880;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined1 local_868;
  undefined1 local_860 [8];
  ForAnyElementType FStack_858;
  ulonglong local_850;
  double local_848;
  double dStack_840;
  undefined1 local_838;
  undefined1 local_830 [8];
  ForAnyElementType FStack_828;
  ulonglong local_820;
  double local_818;
  double dStack_810;
  double local_808;
  double dStack_800;
  undefined1 local_7f8;
  undefined1 local_7f0 [8];
  ForAnyElementType FStack_7e8;
  ulonglong local_7e0;
  FName local_7d8;
  TSharedRef<SBorder,1> local_7d0;
  TSharedRef<SColorBlock,1> local_7c0;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_7b0;
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs> local_798;
  FArguments local_778;
  FArguments local_418;
  
  pFVar9 = SBorder::FArguments::FArguments(&local_418);
  pIVar10 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar10 + 0x50);
  pFVar11 = ::FName::FName(&local_7d8,"ColorPicker.MultipleValuesBackground");
  local_8d0 = (FSlateBrush *)(*pcVar1)(pIVar10,*pFVar11);
  local_8c8 = 1;
  local_8c0 = (undefined1  [8])0x0;
  FStack_8b8.Data = (FScriptContainerElement *)0x0;
  local_8b0 = 0;
  (pFVar9->_BorderImage).Value = local_8d0;
  (pFVar9->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8c0,
             (FWriteAccessScope *)&local_968);
  if (((int)local_8b0 != 0) && (FStack_8b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_8b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_8b8,0,0,0x10);
    local_8b0 = local_8b0 & 0xffffffff00000000;
  }
  if (local_968.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_968.Accessor,&local_968);
  }
  if (FStack_8b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_8b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8c0);
  uVar5 = _UNK_15076b1f8;
  local_898 = 1;
  local_880 = 0;
  local_8a8 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_8a0 = _UNK_15076b1f8;
  local_890 = (undefined1  [8])0x0;
  FStack_888.Data = (FScriptContainerElement *)0x0;
  uVar4 = _UNK_15076b1f4;
  (pFVar9->_Padding).Value.Left = (float)___xmm_3f8000003f8000003f8000003f800000;
  uVar8 = _UNK_15076b1f8;
  (pFVar9->_Padding).Value.Top = (float)uVar4;
  _UNK_15076b1f8 = (undefined4)uVar5;
  _UNK_15076b1fc = SUB84(uVar5,4);
  uVar4 = _UNK_15076b1fc;
  (pFVar9->_Padding).Value.Right = (float)_UNK_15076b1f8;
  _UNK_15076b1f8 = uVar8;
  (pFVar9->_Padding).Value.Bottom = (float)uVar4;
  (pFVar9->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_890);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_890,
             (FWriteAccessScope *)&local_968);
  if (((int)local_880 != 0) && (FStack_888.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_888.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_888,0,0,0x10);
    local_880 = local_880 & 0xffffffff00000000;
  }
  if (local_968.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_968.Accessor,&local_968);
  }
  if (FStack_888.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_888.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_890);
  pFVar12 = SColorBlock::FArguments::FArguments(&local_778);
  local_878 = *(undefined8 *)&(this->Color).field0_0x0;
  uStack_870 = *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8);
  local_868 = 1;
  local_850 = 0;
  local_860 = (undefined1  [8])0x0;
  FStack_858.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(pFVar12->_Color).Value.field0_0x0 = local_878;
  *(undefined8 *)((longlong)&(pFVar12->_Color).Value.field0_0x0 + 8) = uStack_870;
  (pFVar12->_Color).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_Color).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_860);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_860,
             (FWriteAccessScope *)&local_968);
  if (((int)local_850 != 0) && (FStack_858.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_858.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_858,0,0,0x10);
    local_850 = local_850 & 0xffffffff00000000;
  }
  if (local_968.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_968.Accessor,&local_968);
  }
  if (FStack_858.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_858.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_860);
  local_950 = 0x101;
  local_938 = 0;
  local_948 = (undefined1  [8])0x0;
  FStack_940.Data = (FScriptContainerElement *)0x0;
  (pFVar12->_ColorIsHSV).Value = true;
  (pFVar12->_ColorIsHSV).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_ColorIsHSV).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_948);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_948,
             (FWriteAccessScope *)&local_968);
  if (((int)local_938 != 0) && (FStack_940.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_940.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_940,0,0,0x10);
    local_938 = local_938 & 0xffffffff00000000;
  }
  if (local_968.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_968.Accessor,&local_968);
  }
  if (FStack_940.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_940.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_948);
  local_92f = 1;
  local_930 = (this->bUseAlpha == false) + SeparateReverse;
  local_918 = 0;
  local_928 = (undefined1  [8])0x0;
  FStack_920.Data = (FScriptContainerElement *)0x0;
  (pFVar12->_AlphaDisplayMode).Value = local_930;
  (pFVar12->_AlphaDisplayMode).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_AlphaDisplayMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_928);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_928,
             (FWriteAccessScope *)&local_968);
  if (((int)local_918 != 0) && (FStack_920.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_920.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_920,0,0,0x10);
    local_918 = local_918 & 0xffffffff00000000;
  }
  if (local_968.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_968.Accessor,&local_968);
  }
  if (FStack_920.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_920.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_928);
  local_910 = this->bUseAlpha;
  local_90f = 1;
  local_8f8 = 0;
  local_908 = (undefined1  [8])0x0;
  FStack_900.Data = (FScriptContainerElement *)0x0;
  (pFVar12->_ShowBackgroundForAlpha).Value = (bool)local_910;
  (pFVar12->_ShowBackgroundForAlpha).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_ShowBackgroundForAlpha).Getter
             ,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_908);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_908,
             (FWriteAccessScope *)&local_968);
  if (((int)local_8f8 != 0) && (FStack_900.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_900.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_900,0,0,0x10);
    local_8f8 = local_8f8 & 0xffffffff00000000;
  }
  if (local_968.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_968.Accessor,&local_968);
  }
  if (FStack_900.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_900.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_908);
  local_8f0 = this->bUseSRGB;
  local_8ef = 1;
  local_8d8 = 0;
  local_8e8 = (undefined1  [8])0x0;
  FStack_8e0.Data = (FScriptContainerElement *)0x0;
  (pFVar12->_UseSRGB).Value = (bool)local_8f0;
  (pFVar12->_UseSRGB).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_UseSRGB).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8e8,
             (FWriteAccessScope *)&local_968);
  if (((int)local_8d8 != 0) && (FStack_8e0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_8e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_8e0,0,0,0x10);
    local_8d8 = local_8d8 & 0xffffffff00000000;
  }
  if (local_968.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_968.Accessor,&local_968);
  }
  if (FStack_8e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_8e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8e8);
  dVar6 = _UNK_150a1f5c8;
  local_838 = 1;
  local_820 = 0;
  local_848 = ___xmm_40360000000000004036000000000000;
  dStack_840 = _UNK_150a1f5c8;
  local_830 = (undefined1  [8])0x0;
  FStack_828.Data = (FScriptContainerElement *)0x0;
  (pFVar12->_Size).Value.field0_0x0._s_0.X = ___xmm_40360000000000004036000000000000;
  (pFVar12->_Size).Value.field0_0x0._s_0.Y = dVar6;
  (pFVar12->_Size).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_Size).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_830);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_830,
             (FWriteAccessScope *)&local_968);
  if (((int)local_820 != 0) && (FStack_828.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_828.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_828,0,0,0x10);
    local_820 = local_820 & 0xffffffff00000000;
  }
  if (local_968.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_968.Accessor,&local_968);
  }
  if (FStack_828.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_828.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_830);
  dVar7 = _UNK_15076bb98;
  dVar6 = ___xmm_40100000000000004010000000000000;
  local_808 = ___xmm_40100000000000004010000000000000;
  dStack_800 = _UNK_15076bb98;
  local_7f8 = 1;
  local_7f0 = (undefined1  [8])0x0;
  FStack_7e8.Data = (FScriptContainerElement *)0x0;
  local_7e0 = 0;
  local_818 = ___xmm_40100000000000004010000000000000;
  dStack_810 = _UNK_15076bb98;
  (pFVar12->_CornerRadius).Value.field0_0x0._s_0.X = ___xmm_40100000000000004010000000000000;
  (pFVar12->_CornerRadius).Value.field0_0x0._s_0.Y = dVar7;
  (pFVar12->_CornerRadius).Value.field0_0x0._s_0.Z = dVar6;
  (pFVar12->_CornerRadius).Value.field0_0x0._s_0.W = dVar7;
  (pFVar12->_CornerRadius).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_CornerRadius).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7f0,
             (FWriteAccessScope *)&local_968);
  if (((int)local_7e0 != 0) && (FStack_7e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_7e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7e8,0,0,0x10);
    local_7e0 = local_7e0 & 0xffffffff00000000;
  }
  if (local_968.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_968.Accessor,&local_968);
  }
  if (FStack_7e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_7e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7f0);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_968,&local_res20,true);
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>
            (&local_798,"SColorBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
             ,0x35,local_res8);
  FMemScope::~FMemScope((FMemScope *)&local_968);
  FLLMScope::~FLLMScope(local_res18);
  pTVar13 = TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_798,&local_7c0,pFVar12);
  pTVar2 = (pTVar13->SharedReferenceCount).ReferenceController;
  local_968._0_8_ = pTVar13->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar9->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar9->_Content).Widget.Object = (SWidget *)local_968._0_8_;
  (pFVar9->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  local_968.Accessor = (FMRSWRecursiveAccessDetector *)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_968,&local_res20,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_7b0,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
             ,0x31,local_res10);
  FMemScope::~FMemScope((FMemScope *)&local_968);
  FLLMScope::~FLLMScope(local_res18);
  pTVar14 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_7b0,&local_7d0,pFVar9);
  __return_storage_ptr__->Object = (SWidget *)pTVar14->Object;
  pTVar3 = (pTVar14->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7d0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7b0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_798._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_778._OnMouseButtonDown);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_778._Size.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_778._AlphaDisplayMode.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_778._UseSRGB.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_778._ShowBackgroundForAlpha.Getter)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_778._ColorIsHSV.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_778._CornerRadius.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_778._AlphaBackgroundBrush.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_778._Color.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_778);
  SBorder::FArguments::~FArguments(&local_418);
  return __return_storage_ptr__;
}

// GetTypeId @ 143035d40

FString * __cdecl FColorDragDrop::GetTypeId(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FString_const&___ptr64___cdecl_FColorDragDrop::GetTypeId(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_FColorDragDrop::GetTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FString_const&___ptr64___cdecl_FColorDragDrop::GetTypeId(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_FColorDragDrop::GetTypeId(void)'
                          ::__l2::Type,L"FColorDragDrop");
      atexit(`FColorDragDrop::GetTypeId'::__l2::_dynamic_atexit_destructor_for__Type__);
      _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_FColorDragDrop::GetTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FString_const&___ptr64___cdecl_FColorDragDrop::GetTypeId(void)'
              ::__l2::Type;
    }
  }
  return &`public:_static_class_FString_const&___ptr64___cdecl_FColorDragDrop::GetTypeId(void)'::
          __l2::Type;
}

// IsOfTypeImpl @ 143037af0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FColorDragDrop::IsOfTypeImpl(FColorDragDrop *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  bool bVar4;
  
  pFVar3 = GetTypeId();
  iVar2 = (param_1->Data).ArrayNum;
  iVar1 = (pFVar3->Data).ArrayNum;
  if (iVar1 == iVar2) {
    if (iVar1 < 2) {
      return true;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar4 = iVar2 == 0;
  }
  else {
    bVar4 = iVar2 + iVar1 == 1;
  }
  if (bVar4) {
    return true;
  }
  return false;
}

// MarkForAdd @ 143038a30

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FColorDragDrop::MarkForAdd(FColorDragDrop *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SWindow::SetOpacity((SWindow *)this->_padding_,__real_3f800000);
  return;
}

// MarkForDelete @ 143038a90

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FColorDragDrop::MarkForDelete(FColorDragDrop *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SWindow::SetOpacity((SWindow *)this->_padding_,__real_3ecccccd);
  return;
}

// New @ 143038b50

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FColorDragDrop,1> * __cdecl
FColorDragDrop::New(TSharedRef<FColorDragDrop,1> *__return_storage_ptr__,FLinearColor *param_1,
                   bool param_2,bool param_3,
                   TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_4,
                   TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_5,
                   TSharedPtr<SThemeColorBlocksBar,1> *param_6,int param_7)

{
  code *pcVar1;
  bool bVar2;
  FColorDragDrop *this;
  FColorDragDrop *pFVar3;
  TSharedRef<FColorDragDrop,1> *pTVar4;
  TRawPtrProxy<FColorDragDrop> local_res8;
  FLinearColor_u_0 local_58;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_48;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_30;
  
  this = ::operator_new(0xb8);
  pFVar3 = (FColorDragDrop *)0x0;
  if (this != (FColorDragDrop *)0x0) {
    local_48._0_8_ = 0;
    local_48._8_8_ = 0;
    local_48._16_4_ = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&local_48,param_5);
    local_30._0_8_ = 0;
    local_30._8_8_ = 0;
    local_30._16_4_ = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&local_30,param_4);
    local_58._0_8_ = *(undefined8 *)&param_1->field0_0x0;
    local_58._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    pFVar3 = FColorDragDrop(this,(FLinearColor *)&local_58._s_0,param_2,param_3,&local_30,&local_48)
    ;
    if ((((pFVar3 != (FColorDragDrop *)0x0) && (pFVar3->_padding_ != 0)) && (pFVar3->_padding_ != 0)
        ) && (0 < *(int *)(pFVar3->_padding_ + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FColorDragDrop,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  local_res8.Object = pFVar3;
  TSharedRef<FColorDragDrop,1>::TSharedRef<FColorDragDrop,1><FColorDragDrop>
            (__return_storage_ptr__,&local_res8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_6->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnDragged @ 14303a7a0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FColorDragDrop::OnDragged(FColorDragDrop *this,FDragDropEvent *param_1)

{
  SWindow *this_00;
  FDeprecateVector2DParameter FVar1;
  FDeprecateSlateVector2D FVar2;
  
  this_00 = (SWindow *)this->_padding_;
  if (this_00 != (SWindow *)0x0) {
    FVar2 = SWindow::GetSizeInScreen(this_00);
    FVar1._4_4_ = *(float *)((longlong)&param_1->_padding_ + 4) -
                  *(float *)((longlong)FVar2 + 4) * __real_3f000000;
    FVar1._0_4_ = *(float *)&param_1->_padding_ - *(float *)FVar2 * __real_3f000000;
    SWindow::MoveWindowTo(this_00,FVar1);
  }
  return;
}

// OnDrop @ 14303a840

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FColorDragDrop::OnDrop(FColorDragDrop *this,bool param_1,FPointerEvent *param_2)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->HideTrash,&local_28);
  if ((*(int *)&(this->HideTrash).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->HideTrash).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  FDragDropOperation::OnDrop((FDragDropOperation *)this,param_1,param_2);
  return;
}

