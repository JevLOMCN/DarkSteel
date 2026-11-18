// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 25

// TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_Child,RequiredArgs::T0RequiredArgs> @ 142541000

TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_Child,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_Child,RequiredArgs::T0RequiredArgs>::
TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_Child,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_Child,RequiredArgs::T0RequiredArgs>
           *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_Child,RequiredArgs::T0RequiredArgs> *pTVar7;
  SAttributeLeftWidget_Child *pSVar8;
  SAttributeLeftWidget_Child *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SAttributeLeftWidget_Child *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x260);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SAttributeLeftWidget_Child *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSAttributeLeftWidget_Child_Private_Slate_UE___00_SharedPointerInternals__6B_
    ;
    UE::Slate::Private::SAttributeLeftWidget_Child::SAttributeLeftWidget_Child
              ((SAttributeLeftWidget_Child *)(pTVar6 + 1));
    pSVar8 = (SAttributeLeftWidget_Child *)(pTVar6 + 1);
    if (pSVar8 == (SAttributeLeftWidget_Child *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_Child,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14254111f;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14254111f:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_Child,RequiredArgs::T0RequiredArgs>
               *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SAttributeLeftWidget_Child *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SAttributeLeftWidget_Child *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_Child,RequiredArgs::T0RequiredArgs>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x250);
  return this;
}

// TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild,RequiredArgs::T0RequiredArgs> @ 1425411e0

TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild,RequiredArgs::T0RequiredArgs>
* __thiscall
TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild,RequiredArgs::T0RequiredArgs>
::
TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild,RequiredArgs::T0RequiredArgs>
           *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild,RequiredArgs::T0RequiredArgs>
  *pTVar7;
  SAttributeLeftWidget_OnInvalidationChild *pSVar8;
  SAttributeLeftWidget_OnInvalidationChild *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SAttributeLeftWidget_OnInvalidationChild *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x260);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SAttributeLeftWidget_OnInvalidationChild *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSAttributeLeftWidget_OnInvalidationChild_Private_Slate_UE___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x250);
    UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::
    SAttributeLeftWidget_OnInvalidationParent
              ((SAttributeLeftWidget_OnInvalidationParent *)(pTVar6 + 1));
    pSVar8 = (SAttributeLeftWidget_OnInvalidationChild *)(pTVar6 + 1);
    pTVar6[1]._padding_ =
         (longlong)&___7SAttributeLeftWidget_OnInvalidationChild_Private_Slate_UE__6B_;
    if (pSVar8 == (SAttributeLeftWidget_OnInvalidationChild *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14254131b;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14254131b:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild,RequiredArgs::T0RequiredArgs>
               *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SAttributeLeftWidget_OnInvalidationChild *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SAttributeLeftWidget_OnInvalidationChild *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild,RequiredArgs::T0RequiredArgs>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x250);
  return this;
}

// TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent,RequiredArgs::T0RequiredArgs> @ 1425413e0

TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent,RequiredArgs::T0RequiredArgs>
* __thiscall
TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent,RequiredArgs::T0RequiredArgs>
::
TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent,RequiredArgs::T0RequiredArgs>
           *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent,RequiredArgs::T0RequiredArgs>
  *pTVar7;
  SAttributeLeftWidget_OnInvalidationParent *pSVar8;
  SAttributeLeftWidget_OnInvalidationParent *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SAttributeLeftWidget_OnInvalidationParent *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x250);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SAttributeLeftWidget_OnInvalidationParent *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSAttributeLeftWidget_OnInvalidationParent_Private_Slate_UE___00_SharedPointerInternals__6B_
    ;
    UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::
    SAttributeLeftWidget_OnInvalidationParent
              ((SAttributeLeftWidget_OnInvalidationParent *)(pTVar6 + 1));
    pSVar8 = (SAttributeLeftWidget_OnInvalidationParent *)(pTVar6 + 1);
    if (pSVar8 == (SAttributeLeftWidget_OnInvalidationParent *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_1425414ff;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_1425414ff:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent,RequiredArgs::T0RequiredArgs>
               *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SAttributeLeftWidget_OnInvalidationParent *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SAttributeLeftWidget_OnInvalidationParent *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent,RequiredArgs::T0RequiredArgs>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x240);
  return this;
}

// TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_Parent,RequiredArgs::T0RequiredArgs> @ 1425415c0

TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_Parent,RequiredArgs::T0RequiredArgs> *
__thiscall
TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_Parent,RequiredArgs::T0RequiredArgs>::
TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_Parent,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_Parent,RequiredArgs::T0RequiredArgs>
           *this,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_Parent,RequiredArgs::T0RequiredArgs> *pTVar7;
  SAttributeLeftWidget_Parent *pSVar8;
  SAttributeLeftWidget_Parent *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SAttributeLeftWidget_Parent *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x248);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SAttributeLeftWidget_Parent *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSAttributeLeftWidget_Parent_Private_Slate_UE___00_SharedPointerInternals__6B_
    ;
    UE::Slate::Private::SAttributeLeftWidget_Parent::SAttributeLeftWidget_Parent
              ((SAttributeLeftWidget_Parent *)(pTVar6 + 1));
    pSVar8 = (SAttributeLeftWidget_Parent *)(pTVar6 + 1);
    if (pSVar8 == (SAttributeLeftWidget_Parent *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_Parent,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_1425416df;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_1425416df:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_Parent,RequiredArgs::T0RequiredArgs>
               *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SAttributeLeftWidget_Parent *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SAttributeLeftWidget_Parent *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_Parent,RequiredArgs::T0RequiredArgs>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x238);
  return this;
}

// TSlateDecl<UE::Slate::Private::SContainerAttribute,RequiredArgs::T0RequiredArgs> @ 1425417a0

TSlateDecl<UE::Slate::Private::SContainerAttribute,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<UE::Slate::Private::SContainerAttribute,RequiredArgs::T0RequiredArgs>::
TSlateDecl<UE::Slate::Private::SContainerAttribute,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UE::Slate::Private::SContainerAttribute,RequiredArgs::T0RequiredArgs> *this,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<UE::Slate::Private::SContainerAttribute,RequiredArgs::T0RequiredArgs> *pTVar7;
  SContainerAttribute *pSVar8;
  SContainerAttribute *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SContainerAttribute *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x268);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SContainerAttribute *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSContainerAttribute_Private_Slate_UE___00_SharedPointerInternals__6B_
    ;
    UE::Slate::Private::SContainerAttribute::SContainerAttribute
              ((SContainerAttribute *)(pTVar6 + 1));
    pSVar8 = (SContainerAttribute *)(pTVar6 + 1);
    if (pSVar8 == (SContainerAttribute *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<UE::Slate::Private::SContainerAttribute,RequiredArgs::T0RequiredArgs> *
                 )(*pcVar4)();
        return pTVar7;
      }
      goto LAB_1425418bf;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_1425418bf:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<UE::Slate::Private::SContainerAttribute,RequiredArgs::T0RequiredArgs> *)
              &local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SContainerAttribute *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SContainerAttribute *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<UE::Slate::Private::SContainerAttribute,RequiredArgs::T0RequiredArgs> *)
               (*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,600);
  return this;
}

// operator<<= @ 1425634e0

TSharedRef<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild,1> * __thiscall
TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild,RequiredArgs::T0RequiredArgs>
::operator<<=(TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild,RequiredArgs::T0RequiredArgs>
              *this,TSharedRef<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SAttributeLeftWidget_OnInvalidationChild *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild,1> *pTVar7;
  
  if ((this->_Widget).Object == (SAttributeLeftWidget_OnInvalidationChild *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild,1> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  if ((this->_Widget).Object == (SAttributeLeftWidget_OnInvalidationChild *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild,1> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142563576;
  }
  bVar6 = 0x20;
LAB_142563576:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SAttributeLeftWidget_OnInvalidationChild *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild,1> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SAttributeLeftWidget_OnInvalidationChild *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild,1> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SAttributeLeftWidget_OnInvalidationChild *)0x0;
  if (__return_storage_ptr__->Object == (SAttributeLeftWidget_OnInvalidationChild *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild,1> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 142563640

TSharedRef<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent,1> * __thiscall
TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent,RequiredArgs::T0RequiredArgs>
::operator<<=(TSlateDecl<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent,RequiredArgs::T0RequiredArgs>
              *this,TSharedRef<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent,1>
                    *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SAttributeLeftWidget_OnInvalidationParent *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent,1> *pTVar7;
  
  if ((this->_Widget).Object == (SAttributeLeftWidget_OnInvalidationParent *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent,1> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::Construct
            ((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SAttributeLeftWidget_OnInvalidationParent *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent,1> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_1425636e1;
  }
  bVar6 = 0x20;
LAB_1425636e1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SAttributeLeftWidget_OnInvalidationParent *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent,1> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SAttributeLeftWidget_OnInvalidationParent *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent,1> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SAttributeLeftWidget_OnInvalidationParent *)0x0;
  if (__return_storage_ptr__->Object == (SAttributeLeftWidget_OnInvalidationParent *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent,1> *)
               (*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 1425637b0

TSharedRef<UE::Slate::Private::SContainerAttribute,1> * __thiscall
TSlateDecl<UE::Slate::Private::SContainerAttribute,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<UE::Slate::Private::SContainerAttribute,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<UE::Slate::Private::SContainerAttribute,1> *__return_storage_ptr__,
          FArguments *param_1)

{
  byte *pbVar1;
  SContainerAttribute *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<UE::Slate::Private::SContainerAttribute,1> *pTVar7;
  
  if ((this->_Widget).Object == (SContainerAttribute *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<UE::Slate::Private::SContainerAttribute,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  if ((this->_Widget).Object == (SContainerAttribute *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<UE::Slate::Private::SContainerAttribute,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142563846;
  }
  bVar6 = 0x20;
LAB_142563846:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SContainerAttribute *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<UE::Slate::Private::SContainerAttribute,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SContainerAttribute *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<UE::Slate::Private::SContainerAttribute,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SContainerAttribute *)0x0;
  if (__return_storage_ptr__->Object == (SContainerAttribute *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<UE::Slate::Private::SContainerAttribute,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// Expose<SOverlay> @ 1425b4ba0

TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::Expose<SOverlay>
          (TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *this,TSharedPtr<SOverlay,1> *param_1)

{
  SOverlay *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// Expose<SPopupLayer> @ 1425b4bf0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_> * __thiscall
TSlateDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_>::Expose<SPopupLayer>
          (TSlateDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_> *this,
          TSharedPtr<SPopupLayer,1> *param_1)

{
  SPopupLayer *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pSVar1 = (this->_Widget).Object;
  pTVar2 = (this->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = pSVar1;
  (param_1->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// TSlateDecl<UE::Slate::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs> @ 1425bb100

TSlateDecl<UE::Slate::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<UE::Slate::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs>::
TSlateDecl<UE::Slate::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UE::Slate::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs> *this,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<UE::Slate::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs> *pTVar7;
  SEmptyLeftWidget *pSVar8;
  SEmptyLeftWidget *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SEmptyLeftWidget *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x228);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SEmptyLeftWidget *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSEmptyLeftWidget_Private_Slate_UE___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x218);
    SWidget::SWidget((SWidget *)(pTVar6 + 1));
    *(byte *)&pTVar6[4]._padding_ = (byte)pTVar6[4]._padding_ & 0xfd;
    pSVar8 = (SEmptyLeftWidget *)(pTVar6 + 1);
    pTVar6[1]._padding_ = (longlong)&___7SEmptyLeftWidget_Private_Slate_UE__6B_;
    if (pSVar8 == (SEmptyLeftWidget *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<UE::Slate::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs> *)
                 (*pcVar4)();
        return pTVar7;
      }
      goto LAB_1425bb23f;
    }
  }
  if (((*(longlong *)&pSVar8->field_0x8 == 0) || (*(longlong *)&pSVar8->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar8->field_0x10 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(SEmptyLeftWidget **)&pSVar8->field_0x8 = pSVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pSVar8->field_0x10) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pSVar8->field_0x10;
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
      *(TReferenceControllerBase<1> **)&pSVar8->field_0x10 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_1425bb23f:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<UE::Slate::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs> *)
              &local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SEmptyLeftWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SEmptyLeftWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<UE::Slate::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs> *)
               (*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x218);
  return this;
}

// TSlateDecl<UE::Slate::Test::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs> @ 1425bb300

TSlateDecl<UE::Slate::Test::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<UE::Slate::Test::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs>::
TSlateDecl<UE::Slate::Test::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UE::Slate::Test::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs> *this
          ,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<UE::Slate::Test::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs> *pTVar7;
  SEmptyLeftWidget *pSVar8;
  SEmptyLeftWidget *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SEmptyLeftWidget *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x228);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SEmptyLeftWidget *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSEmptyLeftWidget_Private_Test_Slate_UE___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x218);
    SWidget::SWidget((SWidget *)(pTVar6 + 1));
    *(byte *)&pTVar6[4]._padding_ = (byte)pTVar6[4]._padding_ & 0xfd;
    pSVar8 = (SEmptyLeftWidget *)(pTVar6 + 1);
    pTVar6[1]._padding_ = (longlong)&___7SEmptyLeftWidget_Private_Test_Slate_UE__6B_;
    if (pSVar8 == (SEmptyLeftWidget *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<UE::Slate::Test::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs>
                  *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_1425bb43f;
    }
  }
  if (((*(longlong *)&pSVar8->field_0x8 == 0) || (*(longlong *)&pSVar8->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar8->field_0x10 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(SEmptyLeftWidget **)&pSVar8->field_0x8 = pSVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pSVar8->field_0x10) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pSVar8->field_0x10;
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
      *(TReferenceControllerBase<1> **)&pSVar8->field_0x10 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_1425bb43f:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<UE::Slate::Test::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs> *
              )&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SEmptyLeftWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SEmptyLeftWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<UE::Slate::Test::Private::SEmptyLeftWidget,RequiredArgs::T0RequiredArgs>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x218);
  return this;
}

// TSlateDecl<SNullWidgetContent,RequiredArgs::T0RequiredArgs> @ 1425bb500

TSlateDecl<SNullWidgetContent,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SNullWidgetContent,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SNullWidgetContent,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SNullWidgetContent,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  EWidgetUpdateFlags EVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSlateDecl<SNullWidgetContent,RequiredArgs::T0RequiredArgs> *pTVar8;
  SNullWidgetContent *pSVar9;
  EWidgetUpdateFlags EVar10;
  SNullWidgetContent *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SNullWidgetContent *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = ::operator_new(0x228);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    pSVar9 = (SNullWidgetContent *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSNullWidgetContent___00_SharedPointerInternals__6B_;
    SWidget::SWidget((SWidget *)(pTVar7 + 1));
    EVar3 = *(EWidgetUpdateFlags *)&pTVar7[4].SharedReferenceCount;
    pTVar7[1]._padding_ = (longlong)&___7SNullWidgetContent__6B_;
    EVar10 = EVar3 & ~NeedsTick;
    *(EWidgetUpdateFlags *)&pTVar7[4].SharedReferenceCount = EVar10;
    FWidgetProxyHandle::UpdateWidgetFlags
              ((FWidgetProxyHandle *)&pTVar7[2].SharedReferenceCount,(SWidget *)(pTVar7 + 1),EVar3,
               EVar10);
    *(byte *)&pTVar7[4]._padding_ = (byte)pTVar7[4]._padding_ & 0xfc;
    pSVar9 = (SNullWidgetContent *)(pTVar7 + 1);
    if (pSVar9 == (SNullWidgetContent *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSlateDecl<SNullWidgetContent,RequiredArgs::T0RequiredArgs> *)(*pcVar5)();
        return pTVar8;
      }
      goto LAB_1425bb650;
    }
  }
  if (((*(longlong *)&pSVar9->field_0x8 == 0) || (*(longlong *)&pSVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar9->field_0x10 + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(SNullWidgetContent **)&pSVar9->field_0x8 = pSVar9;
    if (pTVar7 != *(TReferenceControllerBase<1> **)&pSVar9->field_0x10) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&pSVar9->field_0x10;
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
      *(TReferenceControllerBase<1> **)&pSVar9->field_0x10 = pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_1425bb650:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar9;
  local_20.ReferenceController = pTVar7;
  if (this != (TSlateDecl<SNullWidgetContent,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar9;
    local_28 = (SNullWidgetContent *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if ((this->_Widget).Object == (SNullWidgetContent *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSlateDecl<SNullWidgetContent,RequiredArgs::T0RequiredArgs> *)(*pcVar5)();
      return pTVar8;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x218);
  return this;
}

// TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> @ 1425bb710

TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  SWidget *this_00;
  int *piVar1;
  int iVar2;
  EWidgetUpdateFlags EVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  FNameEntryId FVar7;
  uint uVar8;
  bool bVar9;
  TReferenceControllerBase<1> *pTVar10;
  FName *pFVar11;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  SOverlay *pSVar14;
  EWidgetUpdateFlags EVar15;
  SOverlay *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SOverlay *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar10 = ::operator_new(600);
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pSVar14 = (SOverlay *)&DAT_00000010;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    this_00 = (SWidget *)(pTVar10 + 1);
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VSOverlay___00_SharedPointerInternals__6B_;
    SWidget::SWidget(this_00);
    this_00->_padding_ = (longlong)&___7SOverlay__6B_;
    pFVar11 = ::FName::FName((FName *)&param_4,8,L"Children",FNAME_Add);
    FVar7.Value = (pFVar11->ComparisonIndex).Value;
    uVar8 = pFVar11->Number;
    *(undefined ***)&pTVar10[0x22].SharedReferenceCount = &___7FChildren__6B_;
    pTVar10[0x23]._padding_ = (longlong)this_00;
    pTVar10[0x23].SharedReferenceCount = (atomic<int>)FVar7.Value;
    pTVar10[0x23].WeakReferenceCount = (atomic<int>)uVar8;
    *(undefined2 *)&pTVar10[0x24]._padding_ = 0xdc00;
    if (this_00 == (SWidget *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOwner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\ChildrenBase.h"
                         ,0x27,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *)(*pcVar6)();
        return pTVar12;
      }
    }
    lVar4._0_4_ = pTVar10[0x23].SharedReferenceCount;
    lVar4._4_4_ = pTVar10[0x23].WeakReferenceCount;
    if (lVar4 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Name.IsNone()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\ChildrenBase.h"
                         ,0x28,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *)(*pcVar6)();
        return pTVar12;
      }
    }
    *(undefined ***)&pTVar10[0x22].SharedReferenceCount =
         &___7__TPanelChildren_VFOverlaySlot_SOverlay____6B_;
    pTVar10[0x24].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[0x24].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[0x25]._padding_ = 0;
    EVar3 = *(EWidgetUpdateFlags *)&pTVar10[4].SharedReferenceCount;
    EVar15 = EVar3 & ~NeedsTick;
    *(EWidgetUpdateFlags *)&pTVar10[4].SharedReferenceCount = EVar15;
    FWidgetProxyHandle::UpdateWidgetFlags
              ((FWidgetProxyHandle *)&pTVar10[2].SharedReferenceCount,this_00,EVar3,EVar15);
    *(byte *)&pTVar10[4]._padding_ = (byte)pTVar10[4]._padding_ & 0xfe;
    pSVar14 = (SOverlay *)(pTVar10 + 1);
    pTVar13 = pTVar10;
    if (pSVar14 == (SOverlay *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *)(*pcVar6)();
        return pTVar12;
      }
      goto LAB_1425bb919;
    }
  }
  if (((pSVar14->_padding_ == 0) || (pSVar14->_padding_ == 0)) ||
     (*(int *)(pSVar14->_padding_ + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar14->_padding_ = (longlong)pSVar14;
    if (pTVar13 != (TReferenceControllerBase<1> *)pSVar14->_padding_) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pSVar14->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pSVar14->_padding_ = (longlong)pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_1425bb919:
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar14;
  local_30.ReferenceController = pTVar13;
  if (this != (TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *)&local_38) {
    (this->_Widget).Object = pSVar14;
    local_38 = (SOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  if ((this->_Widget).Object == (SOverlay *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *)(*pcVar6)();
      return pTVar12;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x248);
  return this;
}

// TSlateDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_> @ 1425bb9e0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_> * __thiscall
TSlateDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_>::
TSlateDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_>
          (TSlateDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_> *this,
          char *param_1,char *param_2,int param_3,T1RequiredArgs<TSharedRef<SWindow,1>_&&> *param_4)

{
  SWidget *this_00;
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SPopupLayer *pSVar9;
  SPopupLayer *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SPopupLayer *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(0x268);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SPopupLayer *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    this_00 = (SWidget *)(pTVar6 + 1);
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSPopupLayer___00_SharedPointerInternals__6B_;
    SWidget::SWidget(this_00);
    this_00->_padding_ = (longlong)&___7SPopupLayer__6B_;
    pTVar6[0x23]._padding_ = (longlong)this_00;
    *(undefined ***)&pTVar6[0x22].SharedReferenceCount = &___7FChildren__6B_;
    ::FName::FName((FName *)&pTVar6[0x23].SharedReferenceCount,"Children");
    *(undefined2 *)&pTVar6[0x24]._padding_ = 0xdc00;
    *(undefined ***)&pTVar6[0x22].SharedReferenceCount =
         &___7__TPanelChildren_UFPopupLayerSlot____6B_;
    pSVar9 = (SPopupLayer *)(pTVar6 + 1);
    pTVar6[0x24].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x24].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x25]._padding_ = 0;
    pTVar6[0x25].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x25].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x26]._padding_ = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SPopupLayer *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_> *)
                 (*pcVar4)();
        return pTVar7;
      }
      goto LAB_1425bbb66;
    }
  }
  if (((pSVar9->_padding_ == 0) || (pSVar9->_padding_ == 0)) ||
     (*(int *)(pSVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar9->_padding_ = (longlong)pSVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar9->_padding_;
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
      pSVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_1425bbb66:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_> *)
              &local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SPopupLayer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SPopupLayer *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_> *)
               (*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,600);
  return this;
}

// TSlateDecl<UE::Slate::Test::Private::SSingleChild,RequiredArgs::T0RequiredArgs> @ 1425bbc30

TSlateDecl<UE::Slate::Test::Private::SSingleChild,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<UE::Slate::Test::Private::SSingleChild,RequiredArgs::T0RequiredArgs>::
TSlateDecl<UE::Slate::Test::Private::SSingleChild,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UE::Slate::Test::Private::SSingleChild,RequiredArgs::T0RequiredArgs> *this,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  SWidget *this_00;
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSlateDecl<UE::Slate::Test::Private::SSingleChild,RequiredArgs::T0RequiredArgs> *pTVar8;
  SSingleChild *pSVar9;
  SSingleChild *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SSingleChild *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = ::operator_new(0x268);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    pSVar9 = (SSingleChild *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    this_00 = (SWidget *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSSingleChild_Private_Test_Slate_UE___00_SharedPointerInternals__6B_
    ;
    SWidget::SWidget(this_00);
    paVar2 = &pTVar7[0x22].SharedReferenceCount;
    this_00->_padding_ = (longlong)&___7SSingleChild_Private_Test_Slate_UE__6B_;
    pTVar7[0x23]._padding_ = (longlong)this_00;
    *(undefined ***)&paVar2->field_0x0 = &___7FChildren__6B_;
    ::FName::FName((FName *)&pTVar7[0x23].SharedReferenceCount,"Children");
    *(undefined2 *)&pTVar7[0x24]._padding_ = 0xdc00;
    FSlotBase::FSlotBase((FSlotBase *)&pTVar7[0x24].SharedReferenceCount,(FChildren *)paVar2);
    *(undefined ***)&paVar2->field_0x0 = &FSingleWidgetChildrenWithSlot::_vftable__for__FChildren__;
    *(undefined ***)&pTVar7[0x24].SharedReferenceCount =
         &FSingleWidgetChildrenWithSlot::_vftable__for__TSlotBase<FSingleWidgetChildrenWithSlot>__;
    pSVar9 = (SSingleChild *)(pTVar7 + 1);
    if (pSVar9 == (SSingleChild *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSlateDecl<UE::Slate::Test::Private::SSingleChild,RequiredArgs::T0RequiredArgs> *)
                 (*pcVar5)();
        return pTVar8;
      }
      goto LAB_1425bbdac;
    }
  }
  if (((pSVar9->_padding_ == 0) || (pSVar9->_padding_ == 0)) ||
     (*(int *)(pSVar9->_padding_ + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar9->_padding_ = (longlong)pSVar9;
    if (pTVar7 != (TReferenceControllerBase<1> *)pSVar9->_padding_) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pSVar9->_padding_;
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
      pSVar9->_padding_ = (longlong)pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_1425bbdac:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar9;
  local_20.ReferenceController = pTVar7;
  if (this != (TSlateDecl<UE::Slate::Test::Private::SSingleChild,RequiredArgs::T0RequiredArgs> *)
              &local_28) {
    (this->_Widget).Object = pSVar9;
    local_28 = (SSingleChild *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if ((this->_Widget).Object == (SSingleChild *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSlateDecl<UE::Slate::Test::Private::SSingleChild,RequiredArgs::T0RequiredArgs> *)
               (*pcVar5)();
      return pTVar8;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,600);
  return this;
}

// TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> @ 1425bbe70

TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *pTVar7;
  SVerticalBox *pSVar8;
  SVerticalBox *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SVerticalBox *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x260);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SVerticalBox *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSVerticalBox___00_SharedPointerInternals__6B_;
    SVerticalBox::SVerticalBox((SVerticalBox *)(pTVar6 + 1));
    pSVar8 = (SVerticalBox *)(pTVar6 + 1);
    if (pSVar8 == (SVerticalBox *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_1425bbf8f;
    }
  }
  if (((*(longlong *)&pSVar8->field_0x8 == 0) || (*(longlong *)&pSVar8->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pSVar8->field_0x10 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(SVerticalBox **)&pSVar8->field_0x8 = pSVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pSVar8->field_0x10) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pSVar8->field_0x10;
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
      *(TReferenceControllerBase<1> **)&pSVar8->field_0x10 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_1425bbf8f:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SVerticalBox *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x250);
  return this;
}

// TSlateDecl<UE::Slate::Test::Private::SWeakChild,RequiredArgs::T0RequiredArgs> @ 1425bc050

TSlateDecl<UE::Slate::Test::Private::SWeakChild,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<UE::Slate::Test::Private::SWeakChild,RequiredArgs::T0RequiredArgs>::
TSlateDecl<UE::Slate::Test::Private::SWeakChild,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UE::Slate::Test::Private::SWeakChild,RequiredArgs::T0RequiredArgs> *this,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  SWidget *this_00;
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<UE::Slate::Test::Private::SWeakChild,RequiredArgs::T0RequiredArgs> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SWeakChild *pSVar9;
  SWeakChild *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SWeakChild *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_RequiredArgs = param_4;
  pTVar6 = ::operator_new(600);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pSVar9 = (SWeakChild *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    this_00 = (SWidget *)(pTVar6 + 1);
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSWeakChild_Private_Test_Slate_UE___00_SharedPointerInternals__6B_
    ;
    SWidget::SWidget(this_00);
    this_00->_padding_ = (longlong)&___7SWeakChild_Private_Test_Slate_UE__6B_;
    pTVar6[0x23]._padding_ = (longlong)this_00;
    *(undefined ***)&pTVar6[0x22].SharedReferenceCount = &___7FChildren__6B_;
    ::FName::FName((FName *)&pTVar6[0x23].SharedReferenceCount,"Children");
    *(undefined2 *)&pTVar6[0x24]._padding_ = 0xdc00;
    *(undefined ***)&pTVar6[0x22].SharedReferenceCount = &___7__TWeakChild_VSWidget____6B_;
    pSVar9 = (SWeakChild *)(pTVar6 + 1);
    pTVar6[0x24].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x24].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x25]._padding_ = 0;
    pTVar8 = pTVar6;
    if (pSVar9 == (SWeakChild *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<UE::Slate::Test::Private::SWeakChild,RequiredArgs::T0RequiredArgs> *)
                 (*pcVar4)();
        return pTVar7;
      }
      goto LAB_1425bc1c8;
    }
  }
  if (((pSVar9->_padding_ == 0) || (pSVar9->_padding_ == 0)) ||
     (*(int *)(pSVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar9->_padding_ = (longlong)pSVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar9->_padding_;
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
      pSVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_1425bc1c8:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar9;
  local_30.ReferenceController = pTVar8;
  if (this != (TSlateDecl<UE::Slate::Test::Private::SWeakChild,RequiredArgs::T0RequiredArgs> *)
              &local_38) {
    (this->_Widget).Object = pSVar9;
    local_38 = (SWeakChild *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->_Widget).Object == (SWeakChild *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<UE::Slate::Test::Private::SWeakChild,RequiredArgs::T0RequiredArgs> *)
               (*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x248);
  return this;
}

// TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> @ 1425bc290

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> *this,char *param_1,char *param_2,
          int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> *pTVar7;
  SWindow *pSVar8;
  SWindow *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SWindow *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x750);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pSVar8 = (SWindow *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VSWindow___00_SharedPointerInternals__6B_;
    SWindow::SWindow((SWindow *)(pTVar6 + 1));
    pSVar8 = (SWindow *)(pTVar6 + 1);
    if (pSVar8 == (SWindow *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_1425bc3af;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pSVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar8->_padding_;
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
      pSVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_1425bc3af:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = pTVar6;
  if (this != (TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SWindow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((this->_Widget).Object == (SWindow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x740);
  return this;
}

// operator<<= @ 1425c46a0

TSharedRef<SOverlay,1> * __thiscall
TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SOverlay,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SOverlay *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SOverlay,1> *pTVar7;
  FIdentityFunctor local_res8 [8];
  TArray<SOverlay::FOverlaySlot::FSlotArguments,TSizedDefaultAllocator<32>_> local_28;
  
  if ((this->_Widget).Object == (SOverlay *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SOverlay,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  AlgoImpl::
  StableSortInternal<SOverlay::FOverlaySlot::FSlotArguments,FIdentityFunctor,TDereferenceWrapper<SOverlay::FOverlaySlot::FSlotArguments,_SOverlay::Construct_::__l2::<lambda_1>_>_>
            ((FSlotArguments *)(param_1->_Slots).AllocatorInstance.Data,(param_1->_Slots).ArrayNum,
             local_res8[0],(<lambda_1> *)local_res8);
  local_28.AllocatorInstance.Data = (param_1->_Slots).AllocatorInstance.Data;
  (param_1->_Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = (param_1->_Slots).ArrayNum;
  local_28.ArrayMax = (param_1->_Slots).ArrayMax;
  (param_1->_Slots).ArrayNum = 0;
  (param_1->_Slots).ArrayMax = 0;
  TPanelChildren<SOverlay::FOverlaySlot>::AddSlots(&pSVar2->Children,&local_28);
  if ((this->_Widget).Object == (SOverlay *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SOverlay,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_1425c479a;
  }
  bVar6 = 0x20;
LAB_1425c479a:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SOverlay *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SOverlay,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SOverlay *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SOverlay,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SOverlay *)0x0;
  if (__return_storage_ptr__->Object == (SOverlay *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SOverlay,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 1425c4860

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SPopupLayer,1> * __thiscall
TSlateDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_>::operator<<=
          (TSlateDecl<SPopupLayer,RequiredArgs::T1RequiredArgs<TSharedRef<SWindow,1>_&&>_> *this,
          TSharedRef<SPopupLayer,1> *__return_storage_ptr__,FArguments *param_1)

{
  atomic<int> *paVar1;
  byte *pbVar2;
  atomic<int> aVar3;
  EWidgetUpdateFlags EVar4;
  SPopupLayer *pSVar5;
  TSharedRef<SWindow,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  TSharedRef<SPopupLayer,1> *pTVar13;
  EWidgetUpdateFlags EVar14;
  TArray<FPopupLayerSlot::FSlotArguments,TSizedDefaultAllocator<32>_> local_28;
  
  if ((this->_Widget).Object == (SPopupLayer *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pTVar13 = (TSharedRef<SPopupLayer,1> *)(*pcVar9)();
      return pTVar13;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar5 = (this->_Widget).Object;
  EVar4 = *(EWidgetUpdateFlags *)&pSVar5->_padding_;
  pTVar6 = this->_RequiredArgs->Arg0;
  EVar14 = EVar4 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&pSVar5->_padding_ = EVar14;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&pSVar5->_padding_,(SWidget *)pSVar5,EVar4,EVar14);
  (pSVar5->OwnerWindow).Object = pTVar6->Object;
  pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
  if (pTVar7 != (pSVar5->OwnerWindow).WeakReferenceCount.ReferenceController) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar8 = (pSVar5->OwnerWindow).WeakReferenceCount.ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar8->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
      }
    }
    (pSVar5->OwnerWindow).WeakReferenceCount.ReferenceController = pTVar7;
  }
  local_28.AllocatorInstance.Data = (param_1->_Slots).AllocatorInstance.Data;
  (param_1->_Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = (param_1->_Slots).ArrayNum;
  local_28.ArrayMax = (param_1->_Slots).ArrayMax;
  (param_1->_Slots).ArrayNum = 0;
  (param_1->_Slots).ArrayMax = 0;
  TPanelChildren<FPopupLayerSlot>::AddSlots(&pSVar5->Children,&local_28);
  if ((this->_Widget).Object == (SPopupLayer *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pTVar13 = (TSharedRef<SPopupLayer,1> *)(*pcVar9)();
      return pTVar13;
    }
  }
  pSVar5 = (this->_Widget).Object;
  if ((pSVar5->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)(pSVar5->_padding_ + 0x228))(pSVar5);
    bVar12 = 0;
    if (cVar11 == '\0') goto LAB_1425c49b4;
  }
  bVar12 = 0x20;
LAB_1425c49b4:
  *(byte *)&pSVar5->_padding_ = (byte)pSVar5->_padding_ & 0xdf;
  *(byte *)&pSVar5->_padding_ = (byte)pSVar5->_padding_ | bVar12;
  if ((this->_Widget).Object == (SPopupLayer *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pTVar13 = (TSharedRef<SPopupLayer,1> *)(*pcVar9)();
      return pTVar13;
    }
  }
  pbVar2 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((this->_Widget).Object == (SPopupLayer *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pTVar13 = (TSharedRef<SPopupLayer,1> *)(*pcVar9)();
      return pTVar13;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SPopupLayer *)0x0;
  if (__return_storage_ptr__->Object == (SPopupLayer *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pTVar13 = (TSharedRef<SPopupLayer,1> *)(*pcVar9)();
      return pTVar13;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 1425c4a80

TSharedRef<UE::Slate::Test::Private::SSingleChild,1> * __thiscall
TSlateDecl<UE::Slate::Test::Private::SSingleChild,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<UE::Slate::Test::Private::SSingleChild,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<UE::Slate::Test::Private::SSingleChild,1> *__return_storage_ptr__,
          FArguments *param_1)

{
  byte *pbVar1;
  SSingleChild *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  TSharedRef<UE::Slate::Test::Private::SSingleChild,1> *pTVar10;
  
  if ((this->_Widget).Object == (SSingleChild *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedRef<UE::Slate::Test::Private::SSingleChild,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  FSlotBase::DetatchParentFromContent((FSlotBase *)&(pSVar2->ChildSlot).field_0x20);
  pTVar3 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->_Content).Widget.Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = *(TReferenceControllerBase<1> **)&(pSVar2->ChildSlot).field_0x38;
  *(SWidget **)&(pSVar2->ChildSlot).field_0x30 = pSVar4;
  *(TReferenceControllerBase<1> **)&(pSVar2->ChildSlot).field_0x38 = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&(pSVar2->ChildSlot).field_0x20);
  if ((this->_Widget).Object == (SSingleChild *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedRef<UE::Slate::Test::Private::SSingleChild,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_1425c4b71;
  }
  bVar9 = 0x20;
LAB_1425c4b71:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar9;
  if ((this->_Widget).Object == (SSingleChild *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedRef<UE::Slate::Test::Private::SSingleChild,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SSingleChild *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedRef<UE::Slate::Test::Private::SSingleChild,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SSingleChild *)0x0;
  if (__return_storage_ptr__->Object == (SSingleChild *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedRef<UE::Slate::Test::Private::SSingleChild,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 1425c4c40

TSharedRef<SVerticalBox,1> * __thiscall
TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SVerticalBox,1> *__return_storage_ptr__,FArguments *param_1)

{
  undefined1 *puVar1;
  SVerticalBox *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SVerticalBox,1> *pTVar7;
  
  if ((this->_Widget).Object == (SVerticalBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SVerticalBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SVerticalBox::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SVerticalBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SVerticalBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->field_0x30 & 0x10) == 0) {
    cVar5 = (**(code **)(*(longlong *)pSVar2 + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_1425c4ce1;
  }
  bVar6 = 0x20;
LAB_1425c4ce1:
  pSVar2->field_0x30 = pSVar2->field_0x30 & 0xdf;
  pSVar2->field_0x30 = pSVar2->field_0x30 | bVar6;
  if ((this->_Widget).Object == (SVerticalBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SVerticalBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  puVar1 = &((this->_Widget).Object)->field_0x31;
  *puVar1 = *puVar1 | 4;
  if ((this->_Widget).Object == (SVerticalBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SVerticalBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SVerticalBox *)0x0;
  if (__return_storage_ptr__->Object == (SVerticalBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SVerticalBox,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 1425c4db0

TSharedRef<UE::Slate::Test::Private::SWeakChild,1> * __thiscall
TSlateDecl<UE::Slate::Test::Private::SWeakChild,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<UE::Slate::Test::Private::SWeakChild,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<UE::Slate::Test::Private::SWeakChild,1> *__return_storage_ptr__,
          FArguments *param_1)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWeakChild *pSVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  TSharedRef<UE::Slate::Test::Private::SWeakChild,1> *pTVar8;
  TSharedPtr<SWidget,1> local_18;
  
  if ((this->_Widget).Object == (SWeakChild *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<UE::Slate::Test::Private::SWeakChild,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  local_18.Object = (param_1->_Content).Widget.Object;
  pTVar2 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar3 = (this->_Widget).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar2;
  TWeakChild<SWidget>::AttachWidget(&pSVar3->WeakChild,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if ((this->_Widget).Object == (SWeakChild *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<UE::Slate::Test::Private::SWeakChild,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pSVar3 = (this->_Widget).Object;
  if ((pSVar3->_padding_ & 0x10) == 0) {
    cVar6 = (**(code **)(pSVar3->_padding_ + 0x228))(pSVar3);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_1425c4e83;
  }
  bVar7 = 0x20;
LAB_1425c4e83:
  *(byte *)&pSVar3->_padding_ = (byte)pSVar3->_padding_ & 0xdf;
  *(byte *)&pSVar3->_padding_ = (byte)pSVar3->_padding_ | bVar7;
  if ((this->_Widget).Object == (SWeakChild *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<UE::Slate::Test::Private::SWeakChild,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SWeakChild *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<UE::Slate::Test::Private::SWeakChild,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SWeakChild *)0x0;
  if (__return_storage_ptr__->Object == (SWeakChild *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<UE::Slate::Test::Private::SWeakChild,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  return __return_storage_ptr__;
}

// operator<<= @ 1425c4f50

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWindow,1> * __thiscall
TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SWindow,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SWindow *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SWindow,1> *pTVar7;
  
  if ((this->_Widget).Object == (SWindow *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SWindow,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  SWindow::Construct((this->_Widget).Object,param_1);
  if ((this->_Widget).Object == (SWindow *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SWindow,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_1425c4ff1;
  }
  bVar6 = 0x20;
LAB_1425c4ff1:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SWindow *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SWindow,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SWindow *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SWindow,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SWindow *)0x0;
  if (__return_storage_ptr__->Object == (SWindow *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SWindow,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

