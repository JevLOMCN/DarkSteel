// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 17

// FDragDropOperation @ 1424e9900

/* WARNING: Enum "Type": Some values do not have unique names */

FDragDropOperation * __thiscall FDragDropOperation::FDragDropOperation(FDragDropOperation *this)

{
  this->bCreateNewWindow = true;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDragDropOperation__6B_;
  this->_padding_ = 0;
  (this->CursorDecoratorWindow).Object = (SWindow *)0x0;
  (this->CursorDecoratorWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MouseCursor).bIsSet = false;
  (this->MouseCursorOverride).bIsSet = false;
  return this;
}

// ~FDragDropOperation @ 1424ec710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDragDropOperation::~FDragDropOperation(FDragDropOperation *this)

{
  TSharedPtr<SWindow,1> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->CursorDecoratorWindow;
  this->_padding_ = (longlong)&___7FDragDropOperation__6B_;
  if (pTVar1->Object != (SWindow *)0x0) {
    SWindow::RequestDestroyWindow(pTVar1->Object);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<SWindow,1> *)&local_18) {
      pTVar1->Object = (SWindow *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CursorDecoratorWindow).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CursorDecoratorWindow).SharedReferenceCount.ReferenceController);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}

// AffectedByPointerEvent @ 1425018c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDragDropOperation::AffectedByPointerEvent(FDragDropOperation *this,FPointerEvent *param_1)

{
  return true;
}

// Construct @ 142505360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FDragDropOperation::Construct(FDragDropOperation *this)

{
  TSharedPtr<SWindow,1> *this_00;
  SWindow *this_01;
  code *pcVar1;
  bool bVar2;
  TSharedRef<SWindow,1> *pTVar3;
  FSlateApplicationBase *pFVar4;
  TSharedPtr<SWindow,1> local_68;
  SWidget *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  TSharedRef<SWidget,1> local_48;
  TSharedRef<SWindow,1> local_38;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  TSharedRef<SWindow,1> local_18;
  
  if (this->bCreateNewWindow != false) {
    (**(code **)(this->_padding_ + 0x28))(this,&local_58);
    if (local_58 != (SWidget *)0x0) {
      pTVar3 = SWindow::MakeCursorDecorator(&local_38);
      local_68.SharedReferenceCount.ReferenceController =
           (pTVar3->SharedReferenceCount).ReferenceController;
      local_68.Object = pTVar3->Object;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      this_00 = &this->CursorDecoratorWindow;
      if (this_00 != &local_68) {
        this_00->Object = local_68.Object;
        local_68.Object = (SWindow *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->CursorDecoratorWindow).SharedReferenceCount,
                   &local_68.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      if (this_00->Object == (SWindow *)0x0) {
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
      this_01 = this_00->Object;
      if (local_58 == (SWidget *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_48.Object = local_58;
      local_48.SharedReferenceCount.ReferenceController = pTStack_50;
      if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_50->SharedReferenceCount = (atomic<int>)((int)pTStack_50->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_58 == (SWidget *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      SWindow::SetContent(this_01,&local_48);
      pFVar4 = FSlateApplicationBase::Get();
      pcVar1 = *(code **)(*(longlong *)pFVar4 + 0x10);
      pTVar3 = TSharedPtr<SWindow,1>::ToSharedRef(this_00,&local_18);
      (*pcVar1)(pFVar4,local_28,pTVar3,1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  }
  return;
}

// ConvertTo @ 142505870

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDragDropOperation,1> * __thiscall
FDragDropOperation::ConvertTo
          (FDragDropOperation *this,TSharedPtr<FDragDropOperation,1> *__return_storage_ptr__,
          FString *param_1)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  FDragDropOperation *pFVar5;
  TSharedPtr<FDragDropOperation,1> *pTVar6;
  FDragDropOperation *pFVar7;
  FDragDropOperation *pFVar8;
  FDragDropOperation *pFVar9;
  bool bVar10;
  
  pFVar9 = (FDragDropOperation *)0x0;
  cVar3 = (**(code **)(this->_padding_ + 0x50))(this,param_1);
  if (cVar3 == '\0') {
    __return_storage_ptr__->Object = (FDragDropOperation *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  pFVar5 = (FDragDropOperation *)this->_padding_;
  pFVar7 = pFVar5;
  pFVar8 = pFVar9;
  if (pFVar5 != (FDragDropOperation *)0x0) {
    iVar2 = (int)pFVar5->_padding_;
    do {
      pFVar7 = pFVar9;
      pFVar8 = (FDragDropOperation *)0x0;
      if (iVar2 == 0) goto LAB_1425058d4;
      LOCK();
      iVar4 = (int)pFVar5->_padding_;
      bVar10 = iVar2 == iVar4;
      if (bVar10) {
        *(int *)&pFVar5->_padding_ = iVar2 + 1;
        iVar4 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar4;
    } while (!bVar10);
    pFVar7 = pFVar5;
    pFVar8 = (FDragDropOperation *)this->_padding_;
  }
LAB_1425058d4:
  pFVar5 = (FDragDropOperation *)&pFVar8->_padding_;
  if (pFVar8 == (FDragDropOperation *)0x0) {
    pFVar5 = pFVar9;
  }
  if ((pFVar5 != (FDragDropOperation *)&this->_padding_) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x67f,L""), bVar10)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FDragDropOperation,1> *)(*pcVar1)();
    return pTVar6;
  }
  if ((pFVar8 == (FDragDropOperation *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar10)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FDragDropOperation,1> *)(*pcVar1)();
    return pTVar6;
  }
  if ((pFVar8 == (FDragDropOperation *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar10)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FDragDropOperation,1> *)(*pcVar1)();
    return pTVar6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pFVar7 != (FDragDropOperation *)0x0) {
    LOCK();
    *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
    UNLOCK();
  }
  __return_storage_ptr__->Object = pFVar8;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  return __return_storage_ptr__;
}

// CreateCursorDecoratorWindow @ 142506090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FDragDropOperation::CreateCursorDecoratorWindow(FDragDropOperation *this)

{
  SWindow *this_00;
  code *pcVar1;
  bool bVar2;
  TSharedRef<SWindow,1> *pTVar3;
  FSlateApplicationBase *pFVar4;
  TSharedPtr<SWindow,1> *this_01;
  TSharedPtr<SWindow,1> local_68;
  SWidget *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  TSharedRef<SWidget,1> local_48;
  TSharedRef<SWindow,1> local_38;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  TSharedRef<SWindow,1> local_18;
  
  (**(code **)(this->_padding_ + 0x28))(this,&local_58);
  if (local_58 != (SWidget *)0x0) {
    pTVar3 = SWindow::MakeCursorDecorator(&local_38);
    local_68.SharedReferenceCount.ReferenceController =
         (pTVar3->SharedReferenceCount).ReferenceController;
    local_68.Object = pTVar3->Object;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_01 = &this->CursorDecoratorWindow;
    if (this_01 != &local_68) {
      this_01->Object = local_68.Object;
      local_68.Object = (SWindow *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CursorDecoratorWindow).SharedReferenceCount,&local_68.SharedReferenceCount)
      ;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    if (this_01->Object == (SWindow *)0x0) {
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
    this_00 = this_01->Object;
    if (local_58 == (SWidget *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_48.Object = local_58;
    local_48.SharedReferenceCount.ReferenceController = pTStack_50;
    if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_50->SharedReferenceCount = (atomic<int>)((int)pTStack_50->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_58 == (SWidget *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    SWindow::SetContent(this_00,&local_48);
    pFVar4 = FSlateApplicationBase::Get();
    pcVar1 = *(code **)(*(longlong *)pFVar4 + 0x10);
    pTVar3 = TSharedPtr<SWindow,1>::ToSharedRef(this_01,&local_18);
    (*pcVar1)(pFVar4,local_28,pTVar3,1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  return;
}

// DestroyCursorDecoratorWindow @ 142507710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDragDropOperation::DestroyCursorDecoratorWindow(FDragDropOperation *this)

{
  SWindow *this_00;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this_00 = (this->CursorDecoratorWindow).Object;
  if (this_00 != (SWindow *)0x0) {
    SWindow::RequestDestroyWindow(this_00);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->CursorDecoratorWindow != (TSharedPtr<SWindow,1> *)&local_18) {
      (this->CursorDecoratorWindow).Object = (SWindow *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CursorDecoratorWindow).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    return;
  }
  return;
}

// GetDecoratorPosition @ 14250d440

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
FDragDropOperation::GetDecoratorPosition
          (FDragDropOperation *this,TVector2<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  return __return_storage_ptr__;
}

// GetDefaultDecorator @ 14250d550

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
FDragDropOperation::GetDefaultDecorator
          (FDragDropOperation *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// IsExternalOperation @ 142511160

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDragDropOperation::IsExternalOperation(FDragDropOperation *this)

{
  return false;
}

// IsOfTypeImpl @ 142511180

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDragDropOperation::IsOfTypeImpl(FDragDropOperation *this,FString *param_1)

{
  return false;
}

// IsWindowlessOperation @ 142511ba0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDragDropOperation::IsWindowlessOperation(FDragDropOperation *this)

{
  return this->bCreateNewWindow == false;
}

// OnCursorQuery @ 142517720

/* WARNING: Enum "Type": Some values do not have unique names */

FCursorReply * __thiscall
FDragDropOperation::OnCursorQuery(FDragDropOperation *this,FCursorReply *__return_storage_ptr__)

{
  Type TVar1;
  
  if ((this->MouseCursorOverride).bIsSet == false) {
    if ((this->MouseCursor).bIsSet == false) {
      *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = 0;
      (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
      (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
      (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      __return_storage_ptr__->MouseCursor = Default;
      return __return_storage_ptr__;
    }
    TVar1 = (this->MouseCursor).TypedValue;
  }
  else {
    TVar1 = (this->MouseCursorOverride).TypedValue;
  }
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
  (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
  (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->MouseCursor = TVar1;
  return __return_storage_ptr__;
}

// OnDragged @ 142517790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FDragDropOperation::OnDragged(FDragDropOperation *this,FDragDropEvent *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSlateApplicationBase *pFVar3;
  FSlateApplicationBase *pFVar4;
  float *pfVar5;
  FDeprecateSlateVector2D FVar6;
  FDeprecateVector2DParameter *pFVar7;
  undefined8 local_res8;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined1 local_38 [8];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  if ((this->CursorDecoratorWindow).Object != (SWindow *)0x0) {
    pFVar3 = FSlateApplicationBase::Get();
    pFVar4 = FSlateApplicationBase::Get();
    pfVar5 = (float *)(**(code **)(*(longlong *)pFVar4 + 0x78))(pFVar4,local_res20);
    local_res8._0_4_ = *pfVar5 + *(float *)&param_1->_padding_;
    local_res8._4_4_ = *(float *)((longlong)&param_1->_padding_ + 4) + pfVar5[1];
    if ((this->CursorDecoratorWindow).Object == (SWindow *)0x0) {
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
    FVar6 = SWindow::GetPositionInScreen((this->CursorDecoratorWindow).Object);
    if (((float)local_res8 != *(float *)FVar6) ||
       (local_res8._4_4_ != *(float *)((longlong)FVar6 + 4))) {
      pcVar1 = *(code **)(*(longlong *)pFVar3 + 0x110);
      local_30 = (float)local_res8;
      local_2c = local_res8._4_4_;
      local_28 = (float)local_res8;
      local_24 = local_res8._4_4_;
      if ((this->CursorDecoratorWindow).Object == (SWindow *)0x0) {
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
      FVar6 = SWindow::GetDesiredSizeDesktopPixels((this->CursorDecoratorWindow).Object);
      local_res18 = *(undefined8 *)FVar6;
      pFVar7 = (FDeprecateVector2DParameter *)(*pcVar1)(pFVar3,local_38,&local_30,&local_res18,0,0);
      local_res8 = *pFVar7;
    }
    if ((this->CursorDecoratorWindow).Object == (SWindow *)0x0) {
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
    SWindow::MoveWindowTo((this->CursorDecoratorWindow).Object,local_res8);
  }
  return;
}

// OnDrop @ 142517940

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDragDropOperation::OnDrop(FDragDropOperation *this,bool param_1,FPointerEvent *param_2)

{
  SWindow *this_00;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this_00 = (this->CursorDecoratorWindow).Object;
  if (this_00 != (SWindow *)0x0) {
    SWindow::RequestDestroyWindow(this_00);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->CursorDecoratorWindow != (TSharedPtr<SWindow,1> *)&local_18) {
      (this->CursorDecoratorWindow).Object = (SWindow *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CursorDecoratorWindow).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    return;
  }
  return;
}

// SetCursorOverride @ 14251f280

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDragDropOperation::SetCursorOverride
          (FDragDropOperation *this,TOptional<EMouseCursor::Type> param_1)

{
  if (param_1 != (TOptional<EMouseCursor::Type>)&this->MouseCursorOverride) {
    if (*(char *)((longlong)param_1 + 4) != '\0') {
      (this->MouseCursorOverride).TypedValue = *(Type *)param_1;
      (this->MouseCursorOverride).bIsSet = true;
      return;
    }
    if ((this->MouseCursorOverride).bIsSet != false) {
      (this->MouseCursorOverride).bIsSet = false;
    }
  }
  return;
}

// SetDecoratorVisibility @ 14251f2b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDragDropOperation::SetDecoratorVisibility(FDragDropOperation *this,bool param_1)

{
  SWindow *this_00;
  code *pcVar1;
  bool bVar2;
  longlong *local_58;
  TReferenceControllerBase<1> *local_50;
  uchar local_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  uchar local_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  this_00 = (this->CursorDecoratorWindow).Object;
  if (this_00 != (SWindow *)0x0) {
    if (!param_1) {
      SWindow::HideWindow(this_00);
      return;
    }
    SWindow::ShowWindow(this_00);
    return;
  }
  if (this->bCreateNewWindow == false) {
    (**(code **)(this->_padding_ + 0x28))(this,&local_58);
    if (local_58 != (longlong *)0x0) {
      if (param_1) {
        if ((local_58 == (longlong *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_48[1] = 1;
        local_40 = 0;
        uStack_38 = 0;
        local_48[0] = (uchar)EVisibility::HitTestInvisible.Value.Value;
        local_30 = 0;
        (**(code **)(*local_58 + 0x1c8))(local_58,local_48);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
        return;
      }
      if ((local_58 == (longlong *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_28[1] = 1;
      local_20 = 0;
      uStack_18 = 0;
      local_28[0] = (uchar)EVisibility::Hidden.Value.Value;
      local_10 = 0;
      (**(code **)(*local_58 + 0x1c8))(local_58,local_28);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  }
  return;
}

