// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 19

// AddContainer @ 14d841640

FHandle __thiscall
UE::PropertyViewer::SPropertyViewer::AddContainer
          (SPropertyViewer *this,UClass *param_1,TOptional<FText> *param_2)

{
  FPropertyViewerImpl *pFVar1;
  TRefCountPtr<ITextData> TVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong *in_R9;
  undefined1 local_res8 [8];
  TOptional<FText>_u_0 local_18;
  
  IdentifierGenerator = IdentifierGenerator + 1;
  pFVar1 = (this->Implementation).Object;
  *(int *)&param_1->_padding_ = IdentifierGenerator;
  if (pFVar1 == (FPropertyViewerImpl *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return (FHandle)iVar5;
    }
  }
  TVar2.Reference = (ITextData *)*in_R9;
  pFVar1 = (this->Implementation).Object;
  local_18.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_18.TypedValue.Flags = 0;
  if (TVar2.Reference != (ITextData *)0x0) {
    local_18.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)TVar2.Reference;
    (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
    local_18.TypedValue.Flags = *(undefined4 *)(in_R9 + 1);
  }
  PropertyViewer::Private::FPropertyViewerImpl::AddContainer
            (pFVar1,(FHandle)(int)param_1->_padding_,(TOptional<FText> *)&local_18.TypedValue,
             (UStruct *)param_2);
  if ((longlong *)*in_R9 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*in_R9 + 0x10))();
  }
  return (FHandle)(int)param_1;
}

// AddContainer @ 14d841710

FHandle __thiscall
UE::PropertyViewer::SPropertyViewer::AddContainer
          (SPropertyViewer *this,UFunction *param_1,TOptional<FText> *param_2)

{
  FPropertyViewerImpl *pFVar1;
  TRefCountPtr<ITextData> TVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong *in_R9;
  undefined1 local_res8 [8];
  TOptional<FText>_u_0 local_18;
  
  IdentifierGenerator = IdentifierGenerator + 1;
  pFVar1 = (this->Implementation).Object;
  *(int *)&param_1->_padding_ = IdentifierGenerator;
  if (pFVar1 == (FPropertyViewerImpl *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return (FHandle)iVar5;
    }
  }
  TVar2.Reference = (ITextData *)*in_R9;
  pFVar1 = (this->Implementation).Object;
  local_18.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_18.TypedValue.Flags = 0;
  if (TVar2.Reference != (ITextData *)0x0) {
    local_18.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)TVar2.Reference;
    (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
    local_18.TypedValue.Flags = *(undefined4 *)(in_R9 + 1);
  }
  PropertyViewer::Private::FPropertyViewerImpl::AddContainer
            (pFVar1,(FHandle)(int)param_1->_padding_,(TOptional<FText> *)&local_18.TypedValue,
             (UStruct *)param_2);
  if ((longlong *)*in_R9 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*in_R9 + 0x10))();
  }
  return (FHandle)(int)param_1;
}

// AddContainer @ 14d8417e0

FHandle __thiscall
UE::PropertyViewer::SPropertyViewer::AddContainer
          (SPropertyViewer *this,UScriptStruct *param_1,TOptional<FText> *param_2)

{
  FPropertyViewerImpl *pFVar1;
  TRefCountPtr<ITextData> TVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong *in_R9;
  undefined1 local_res8 [8];
  TOptional<FText>_u_0 local_18;
  
  IdentifierGenerator = IdentifierGenerator + 1;
  pFVar1 = (this->Implementation).Object;
  *(int *)&param_1->_padding_ = IdentifierGenerator;
  if (pFVar1 == (FPropertyViewerImpl *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return (FHandle)iVar5;
    }
  }
  TVar2.Reference = (ITextData *)*in_R9;
  pFVar1 = (this->Implementation).Object;
  local_18.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_18.TypedValue.Flags = 0;
  if (TVar2.Reference != (ITextData *)0x0) {
    local_18.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)TVar2.Reference;
    (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
    local_18.TypedValue.Flags = *(undefined4 *)(in_R9 + 1);
  }
  PropertyViewer::Private::FPropertyViewerImpl::AddContainer
            (pFVar1,(FHandle)(int)param_1->_padding_,(TOptional<FText> *)&local_18.TypedValue,
             (UStruct *)param_2);
  if ((longlong *)*in_R9 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*in_R9 + 0x10))();
  }
  return (FHandle)(int)param_1;
}

// AddInstance @ 14d842080

FHandle __thiscall
UE::PropertyViewer::SPropertyViewer::AddInstance
          (SPropertyViewer *this,UObject *param_1,TOptional<FText> *param_2)

{
  FPropertyViewerImpl *pFVar1;
  TRefCountPtr<ITextData> TVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong *in_R9;
  undefined1 local_res8 [8];
  TOptional<FText>_u_0 local_18;
  
  IdentifierGenerator = IdentifierGenerator + 1;
  pFVar1 = (this->Implementation).Object;
  *(int *)param_1 = IdentifierGenerator;
  if (pFVar1 == (FPropertyViewerImpl *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return (FHandle)iVar5;
    }
  }
  TVar2.Reference = (ITextData *)*in_R9;
  pFVar1 = (this->Implementation).Object;
  local_18.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_18.TypedValue.Flags = 0;
  if (TVar2.Reference != (ITextData *)0x0) {
    local_18.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)TVar2.Reference;
    (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
    local_18.TypedValue.Flags = *(undefined4 *)(in_R9 + 1);
  }
  PropertyViewer::Private::FPropertyViewerImpl::AddContainerInstance
            (pFVar1,(FHandle)*(int *)param_1,(TOptional<FText> *)&local_18.TypedValue,
             (UObject *)param_2);
  if ((longlong *)*in_R9 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*in_R9 + 0x10))();
  }
  return (FHandle)(int)param_1;
}

// AddInstance @ 14d842150

FHandle __thiscall
UE::PropertyViewer::SPropertyViewer::AddInstance
          (SPropertyViewer *this,UScriptStruct *param_1,void *param_2,TOptional<FText> *param_3)

{
  FPropertyViewerImpl *pFVar1;
  TRefCountPtr<ITextData> TVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 local_res8 [8];
  longlong *in_stack_00000028;
  TOptional<FText>_u_0 local_28;
  
  if (param_3 == (TOptional<FText> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SPropertyViewer.cpp"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return (FHandle)iVar5;
    }
  }
  IdentifierGenerator = IdentifierGenerator + 1;
  pFVar1 = (this->Implementation).Object;
  *(int *)&param_1->_padding_ = IdentifierGenerator;
  if (pFVar1 == (FPropertyViewerImpl *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return (FHandle)iVar5;
    }
  }
  pFVar1 = (this->Implementation).Object;
  local_28.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_28.TypedValue.Flags = 0;
  TVar2.Reference = (ITextData *)*in_stack_00000028;
  if (TVar2.Reference != (ITextData *)0x0) {
    local_28.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)TVar2.Reference;
    (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
    local_28.TypedValue.Flags = *(undefined4 *)(in_stack_00000028 + 1);
  }
  PropertyViewer::Private::FPropertyViewerImpl::AddContainerInstance
            (pFVar1,(FHandle)(int)param_1->_padding_,(TOptional<FText> *)&local_28.TypedValue,
             param_2,param_3);
  if ((longlong *)*in_stack_00000028 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*in_stack_00000028 + 0x10))();
  }
  return (FHandle)(int)param_1;
}

// Construct @ 14d850700

void __thiscall
UE::PropertyViewer::SPropertyViewer::Construct(SPropertyViewer *this,FArguments *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FPropertyViewerImpl *pFVar7;
  FPropertyViewerImpl *local_28;
  FSharedReferencer<1> local_20;
  
  pTVar6 = ::operator_new(0x2a0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pFVar7 = (FPropertyViewerImpl *)&DAT_00000010;
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPropertyViewerImpl_Private_PropertyViewer_UE___00_SharedPointerInternals__6B_
    ;
    PropertyViewer::Private::FPropertyViewerImpl::FPropertyViewerImpl
              ((FPropertyViewerImpl *)(pTVar6 + 1),param_1);
    pFVar7 = (FPropertyViewerImpl *)(pTVar6 + 1);
    if (pFVar7 == (FPropertyViewerImpl *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_14d8507fe;
    }
  }
  if (((pFVar7->_padding_ == 0) || (pFVar7->_padding_ == 0)) ||
     (*(int *)(pFVar7->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar7->_padding_ = (longlong)pFVar7;
    if (pTVar6 != (TReferenceControllerBase<1> *)pFVar7->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar7->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pFVar7->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14d8507fe:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pFVar7;
  local_20.ReferenceController = pTVar6;
  if (&this->Implementation !=
      (TSharedPtr<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *)&local_28) {
    (this->Implementation).Object = pFVar7;
    local_28 = (FPropertyViewerImpl *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Implementation).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  ConstructInternal(this,param_1);
  return;
}

// Construct @ 14d850880

void __thiscall
UE::PropertyViewer::SPropertyViewer::Construct
          (SPropertyViewer *this,FArguments *param_1,UObject *param_2)

{
  int *piVar1;
  TSharedPtr<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *pTVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  FPropertyViewerImpl *pFVar8;
  FPropertyViewerImpl *local_38;
  FSharedReferencer<1> local_30;
  TOptional<FText>_u_0 local_28;
  
  pTVar7 = ::operator_new(0x2a0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar8 = (FPropertyViewerImpl *)&DAT_00000010;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPropertyViewerImpl_Private_PropertyViewer_UE___00_SharedPointerInternals__6B_
    ;
    PropertyViewer::Private::FPropertyViewerImpl::FPropertyViewerImpl
              ((FPropertyViewerImpl *)(pTVar7 + 1),param_1);
    pFVar8 = (FPropertyViewerImpl *)(pTVar7 + 1);
    if (pFVar8 == (FPropertyViewerImpl *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_14d850987;
    }
  }
  if (((pFVar8->_padding_ == 0) || (pFVar8->_padding_ == 0)) ||
     (*(int *)(pFVar8->_padding_ + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar8->_padding_ = (longlong)pFVar8;
    if (pTVar7 != (TReferenceControllerBase<1> *)pFVar8->_padding_) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pFVar8->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      pFVar8->_padding_ = (longlong)pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_14d850987:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->Implementation;
  local_38 = pFVar8;
  local_30.ReferenceController = pTVar7;
  if (pTVar2 != (TSharedPtr<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *)&local_38) {
    pTVar2->Object = pFVar8;
    local_38 = (FPropertyViewerImpl *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Implementation).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (pTVar2->Object == (FPropertyViewerImpl *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  IdentifierGenerator = IdentifierGenerator + 1;
  local_28.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_28.TypedValue.Flags = 0;
  PropertyViewer::Private::FPropertyViewerImpl::AddContainerInstance
            (pTVar2->Object,(FHandle)IdentifierGenerator,(TOptional<FText> *)&local_28.TypedValue,
             param_2);
  ConstructInternal(this,param_1);
  return;
}

// Construct @ 14d850a70

void __thiscall
UE::PropertyViewer::SPropertyViewer::Construct
          (SPropertyViewer *this,FArguments *param_1,UClass *param_2)

{
  int *piVar1;
  TSharedPtr<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *pTVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  FPropertyViewerImpl *pFVar8;
  FPropertyViewerImpl *local_38;
  FSharedReferencer<1> local_30;
  TOptional<FText>_u_0 local_28;
  
  pTVar7 = ::operator_new(0x2a0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar8 = (FPropertyViewerImpl *)&DAT_00000010;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPropertyViewerImpl_Private_PropertyViewer_UE___00_SharedPointerInternals__6B_
    ;
    PropertyViewer::Private::FPropertyViewerImpl::FPropertyViewerImpl
              ((FPropertyViewerImpl *)(pTVar7 + 1),param_1);
    pFVar8 = (FPropertyViewerImpl *)(pTVar7 + 1);
    if (pFVar8 == (FPropertyViewerImpl *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_14d850b77;
    }
  }
  if (((pFVar8->_padding_ == 0) || (pFVar8->_padding_ == 0)) ||
     (*(int *)(pFVar8->_padding_ + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar8->_padding_ = (longlong)pFVar8;
    if (pTVar7 != (TReferenceControllerBase<1> *)pFVar8->_padding_) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pFVar8->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      pFVar8->_padding_ = (longlong)pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_14d850b77:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->Implementation;
  local_38 = pFVar8;
  local_30.ReferenceController = pTVar7;
  if (pTVar2 != (TSharedPtr<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *)&local_38) {
    pTVar2->Object = pFVar8;
    local_38 = (FPropertyViewerImpl *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Implementation).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (pTVar2->Object == (FPropertyViewerImpl *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  IdentifierGenerator = IdentifierGenerator + 1;
  local_28.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_28.TypedValue.Flags = 0;
  PropertyViewer::Private::FPropertyViewerImpl::AddContainer
            (pTVar2->Object,(FHandle)IdentifierGenerator,(TOptional<FText> *)&local_28.TypedValue,
             (UStruct *)param_2);
  ConstructInternal(this,param_1);
  return;
}

// Construct @ 14d850c60

void __thiscall
UE::PropertyViewer::SPropertyViewer::Construct
          (SPropertyViewer *this,FArguments *param_1,UFunction *param_2)

{
  int *piVar1;
  TSharedPtr<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *pTVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  FPropertyViewerImpl *pFVar8;
  FPropertyViewerImpl *local_38;
  FSharedReferencer<1> local_30;
  TOptional<FText>_u_0 local_28;
  
  pTVar7 = ::operator_new(0x2a0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar8 = (FPropertyViewerImpl *)&DAT_00000010;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPropertyViewerImpl_Private_PropertyViewer_UE___00_SharedPointerInternals__6B_
    ;
    PropertyViewer::Private::FPropertyViewerImpl::FPropertyViewerImpl
              ((FPropertyViewerImpl *)(pTVar7 + 1),param_1);
    pFVar8 = (FPropertyViewerImpl *)(pTVar7 + 1);
    if (pFVar8 == (FPropertyViewerImpl *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_14d850d67;
    }
  }
  if (((pFVar8->_padding_ == 0) || (pFVar8->_padding_ == 0)) ||
     (*(int *)(pFVar8->_padding_ + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar8->_padding_ = (longlong)pFVar8;
    if (pTVar7 != (TReferenceControllerBase<1> *)pFVar8->_padding_) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pFVar8->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      pFVar8->_padding_ = (longlong)pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_14d850d67:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->Implementation;
  local_38 = pFVar8;
  local_30.ReferenceController = pTVar7;
  if (pTVar2 != (TSharedPtr<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *)&local_38) {
    pTVar2->Object = pFVar8;
    local_38 = (FPropertyViewerImpl *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Implementation).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (pTVar2->Object == (FPropertyViewerImpl *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  IdentifierGenerator = IdentifierGenerator + 1;
  local_28.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_28.TypedValue.Flags = 0;
  PropertyViewer::Private::FPropertyViewerImpl::AddContainer
            (pTVar2->Object,(FHandle)IdentifierGenerator,(TOptional<FText> *)&local_28.TypedValue,
             (UStruct *)param_2);
  ConstructInternal(this,param_1);
  return;
}

// Construct @ 14d850e50

void __thiscall
UE::PropertyViewer::SPropertyViewer::Construct
          (SPropertyViewer *this,FArguments *param_1,UScriptStruct *param_2)

{
  int *piVar1;
  TSharedPtr<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *pTVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  FPropertyViewerImpl *pFVar8;
  FPropertyViewerImpl *local_38;
  FSharedReferencer<1> local_30;
  TOptional<FText>_u_0 local_28;
  
  pTVar7 = ::operator_new(0x2a0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar8 = (FPropertyViewerImpl *)&DAT_00000010;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPropertyViewerImpl_Private_PropertyViewer_UE___00_SharedPointerInternals__6B_
    ;
    PropertyViewer::Private::FPropertyViewerImpl::FPropertyViewerImpl
              ((FPropertyViewerImpl *)(pTVar7 + 1),param_1);
    pFVar8 = (FPropertyViewerImpl *)(pTVar7 + 1);
    if (pFVar8 == (FPropertyViewerImpl *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_14d850f57;
    }
  }
  if (((pFVar8->_padding_ == 0) || (pFVar8->_padding_ == 0)) ||
     (*(int *)(pFVar8->_padding_ + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar8->_padding_ = (longlong)pFVar8;
    if (pTVar7 != (TReferenceControllerBase<1> *)pFVar8->_padding_) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pFVar8->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      pFVar8->_padding_ = (longlong)pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_14d850f57:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->Implementation;
  local_38 = pFVar8;
  local_30.ReferenceController = pTVar7;
  if (pTVar2 != (TSharedPtr<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *)&local_38) {
    pTVar2->Object = pFVar8;
    local_38 = (FPropertyViewerImpl *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Implementation).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (pTVar2->Object == (FPropertyViewerImpl *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  IdentifierGenerator = IdentifierGenerator + 1;
  local_28.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_28.TypedValue.Flags = 0;
  PropertyViewer::Private::FPropertyViewerImpl::AddContainer
            (pTVar2->Object,(FHandle)IdentifierGenerator,(TOptional<FText> *)&local_28.TypedValue,
             (UStruct *)param_2);
  ConstructInternal(this,param_1);
  return;
}

// Construct @ 14d851040

void __thiscall
UE::PropertyViewer::SPropertyViewer::Construct
          (SPropertyViewer *this,FArguments *param_1,UScriptStruct *param_2,void *param_3)

{
  int *piVar1;
  TSharedPtr<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *pTVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  FPropertyViewerImpl *pFVar8;
  FPropertyViewerImpl *local_48;
  FSharedReferencer<1> local_40;
  TOptional<FText>_u_0 local_38;
  
  pTVar7 = ::operator_new(0x2a0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar8 = (FPropertyViewerImpl *)&DAT_00000010;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPropertyViewerImpl_Private_PropertyViewer_UE___00_SharedPointerInternals__6B_
    ;
    PropertyViewer::Private::FPropertyViewerImpl::FPropertyViewerImpl
              ((FPropertyViewerImpl *)(pTVar7 + 1),param_1);
    pFVar8 = (FPropertyViewerImpl *)(pTVar7 + 1);
    if (pFVar8 == (FPropertyViewerImpl *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_14d851148;
    }
  }
  if (((pFVar8->_padding_ == 0) || (pFVar8->_padding_ == 0)) ||
     (*(int *)(pFVar8->_padding_ + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar8->_padding_ = (longlong)pFVar8;
    if (pTVar7 != (TReferenceControllerBase<1> *)pFVar8->_padding_) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pFVar8->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      pFVar8->_padding_ = (longlong)pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_14d851148:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->Implementation;
  local_48 = pFVar8;
  local_40.ReferenceController = pTVar7;
  if (pTVar2 != (TSharedPtr<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *)&local_48) {
    pTVar2->Object = pFVar8;
    local_48 = (FPropertyViewerImpl *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Implementation).SharedReferenceCount,&local_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if ((pTVar2->Object == (FPropertyViewerImpl *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  IdentifierGenerator = IdentifierGenerator + 1;
  local_38.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_38.TypedValue.Flags = 0;
  PropertyViewer::Private::FPropertyViewerImpl::AddContainerInstance
            (pTVar2->Object,(FHandle)IdentifierGenerator,(TOptional<FText> *)&local_38.TypedValue,
             param_2,param_3);
  ConstructInternal(this,param_1);
  return;
}

// ConstructInternal @ 14d8526f0

void __thiscall
UE::PropertyViewer::SPropertyViewer::ConstructInternal(SPropertyViewer *this,FArguments *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  TSharedRef<SWidget,1> *pTVar6;
  TSharedRef<SWidget,1> local_18;
  
  if ((this->Implementation).Object == (FPropertyViewerImpl *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar6 = PropertyViewer::Private::FPropertyViewerImpl::Construct
                     ((this->Implementation).Object,&local_18,param_1);
  FSlotBase::DetatchParentFromContent((FSlotBase *)&this->_padding_);
  pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar6->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar2;
  this->_padding_ = (longlong)pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// GetSelectedItems @ 14d86ce40

TArray<UE::PropertyViewer::SPropertyViewer::FSelectedItem,TSizedDefaultAllocator<32>_> * __thiscall
UE::PropertyViewer::SPropertyViewer::GetSelectedItems
          (SPropertyViewer *this,
          TArray<UE::PropertyViewer::SPropertyViewer::FSelectedItem,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArray<UE::PropertyViewer::SPropertyViewer::FSelectedItem,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if ((this->Implementation).Object == (FPropertyViewerImpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<UE::PropertyViewer::SPropertyViewer::FSelectedItem,TSizedDefaultAllocator<32>_>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  PropertyViewer::Private::FPropertyViewerImpl::GetSelectedItems
            ((this->Implementation).Object,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// MakeContainerIdentifier @ 14d8729e0

FHandle __cdecl UE::PropertyViewer::SPropertyViewer::MakeContainerIdentifier(void)

{
  int *in_RCX;
  
  IdentifierGenerator = IdentifierGenerator + 1;
  *in_RCX = IdentifierGenerator;
  return (FHandle)(int)in_RCX;
}

// Remove @ 14d884a10

void __thiscall UE::PropertyViewer::SPropertyViewer::Remove(SPropertyViewer *this,FHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Implementation).Object == (FPropertyViewerImpl *)0x0) {
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
  PropertyViewer::Private::FPropertyViewerImpl::Remove((this->Implementation).Object,param_1);
  return;
}

// RemoveAll @ 14d884bb0

void __thiscall UE::PropertyViewer::SPropertyViewer::RemoveAll(SPropertyViewer *this)

{
  int *piVar1;
  int iVar2;
  FPropertyViewerImpl *pFVar3;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar4;
  TSharedPtr<UE::PropertyViewer::Private::FContainer,1> *pTVar5;
  TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this_00;
  code *pcVar6;
  bool bVar7;
  
  if ((this->Implementation).Object == (FPropertyViewerImpl *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar3 = (this->Implementation).Object;
  iVar2 = (pFVar3->TreeSource).ArrayNum;
  if ((iVar2 < 1) && ((pFVar3->Containers).ArrayNum < 1)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  piVar1 = &(pFVar3->TreeSource).ArrayMax;
  pTVar4 = (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)
           (pFVar3->TreeSource).AllocatorInstance.Data;
  if ((pFVar3->TreeSource).ArrayMax < 0) {
    DestructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>(pTVar4,iVar2);
    (pFVar3->TreeSource).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(pFVar3->TreeSource).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>(pTVar4,iVar2);
    (pFVar3->TreeSource).ArrayNum = 0;
  }
  piVar1 = &(pFVar3->Containers).ArrayMax;
  pTVar5 = (TSharedPtr<UE::PropertyViewer::Private::FContainer,1> *)
           (pFVar3->Containers).AllocatorInstance.Data;
  iVar2 = (pFVar3->Containers).ArrayNum;
  if ((pFVar3->Containers).ArrayMax < 0) {
    DestructItems<TSharedPtr<UE::PropertyViewer::Private::FContainer,1>,int>(pTVar5,iVar2);
    (pFVar3->Containers).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(pFVar3->Containers).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<UE::PropertyViewer::Private::FContainer,1>,int>(pTVar5,iVar2);
    (pFVar3->Containers).ArrayNum = 0;
  }
  if (bVar7) {
    this_00 = (pFVar3->FilterHandler).Object;
    if (this_00 != (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0)
    {
      TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::RefreshAndFilterTree
                (this_00);
      return;
    }
    if ((pFVar3->TreeWidget).Object ==
        (STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014d884d11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(pFVar3->TreeWidget).Object + 0x248))();
    return;
  }
  return;
}

// SetRawFilterText @ 14d8878e0

void __thiscall
UE::PropertyViewer::SPropertyViewer::SetRawFilterText(SPropertyViewer *this,FText *param_1)

{
  code *pcVar1;
  bool bVar2;
  FText local_18;
  
  if ((this->Implementation).Object == (FPropertyViewerImpl *)0x0) {
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
  PropertyViewer::Private::FPropertyViewerImpl::SetRawFilterTextInternal
            ((this->Implementation).Object,&local_18,param_1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// SetSelection @ 14d887f60

void __thiscall
UE::PropertyViewer::SPropertyViewer::SetSelection
          (SPropertyViewer *this,FHandle param_1,TArrayView<FFieldVariant_const_,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FFieldVariant_const_,int> local_18;
  
  if ((this->Implementation).Object == (FPropertyViewerImpl *)0x0) {
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
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  PropertyViewer::Private::FPropertyViewerImpl::SetSelection
            ((this->Implementation).Object,param_1,&local_18);
  return;
}

// Tick @ 14d88afa0

void __thiscall
UE::PropertyViewer::SPropertyViewer::Tick
          (SPropertyViewer *this,FGeometry *param_1,double param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  
  SWidget::Tick((SWidget *)this,param_1,param_2,param_3);
  if ((this->Implementation).Object == (FPropertyViewerImpl *)0x0) {
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
  PropertyViewer::Private::FPropertyViewerImpl::Tick((this->Implementation).Object);
  return;
}

