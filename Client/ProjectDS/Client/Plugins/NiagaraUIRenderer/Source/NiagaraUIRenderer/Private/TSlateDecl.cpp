// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraUIRenderer
// Functions: 2

// TSlateDecl<SNiagaraUISystemWidget,RequiredArgs::T0RequiredArgs> @ 14d292400

TSlateDecl<SNiagaraUISystemWidget,RequiredArgs::T0RequiredArgs> * __thiscall
TSlateDecl<SNiagaraUISystemWidget,RequiredArgs::T0RequiredArgs>::
TSlateDecl<SNiagaraUISystemWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SNiagaraUISystemWidget,RequiredArgs::T0RequiredArgs> *this,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TIntrusiveReferenceController<SNiagaraUISystemWidget,1> *pTVar6;
  TSlateDecl<SNiagaraUISystemWidget,RequiredArgs::T0RequiredArgs> *pTVar7;
  SNiagaraUISystemWidget *pSVar8;
  SNiagaraUISystemWidget *local_28;
  FSharedReferencer<1> local_20;
  
  this->_RequiredArgs = param_4;
  (this->_Widget).Object = (SNiagaraUISystemWidget *)0x0;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x388);
  if (pTVar6 == (TIntrusiveReferenceController<SNiagaraUISystemWidget,1> *)0x0) {
    pTVar6 = (TIntrusiveReferenceController<SNiagaraUISystemWidget,1> *)0x0;
    pSVar8 = (SNiagaraUISystemWidget *)&DAT_00000010;
  }
  else {
    pTVar6 = SharedPointerInternals::TIntrusiveReferenceController<SNiagaraUISystemWidget,1>::
             TIntrusiveReferenceController<SNiagaraUISystemWidget,1><>(pTVar6);
    pSVar8 = (SNiagaraUISystemWidget *)&pTVar6->ObjectStorage;
    if (pSVar8 == (SNiagaraUISystemWidget *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSlateDecl<SNiagaraUISystemWidget,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14d2924fc;
    }
  }
  if (((pSVar8->_padding_ == 0) || (pSVar8->_padding_ == 0)) ||
     (*(int *)(pSVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TIntrusiveReferenceController<SNiagaraUISystemWidget,1> *)0x0) {
      LOCK();
      *(int *)&pTVar6->_padding_ = (int)pTVar6->_padding_ + 1;
      UNLOCK();
    }
    pSVar8->_padding_ = (longlong)pSVar8;
    if (pTVar6 != (TIntrusiveReferenceController<SNiagaraUISystemWidget,1> *)pSVar8->_padding_) {
      if (pTVar6 != (TIntrusiveReferenceController<SNiagaraUISystemWidget,1> *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)&pTVar6->_padding_ + 4);
        *piVar1 = *piVar1 + 1;
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
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar6);
  }
LAB_14d2924fc:
  if (pTVar6 != (TIntrusiveReferenceController<SNiagaraUISystemWidget,1> *)0x0) {
    LOCK();
    *(int *)&pTVar6->_padding_ = (int)pTVar6->_padding_ + 1;
    UNLOCK();
  }
  local_28 = pSVar8;
  local_20.ReferenceController = (TReferenceControllerBase<1> *)pTVar6;
  if (this != (TSlateDecl<SNiagaraUISystemWidget,RequiredArgs::T0RequiredArgs> *)&local_28) {
    (this->_Widget).Object = pSVar8;
    local_28 = (SNiagaraUISystemWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_Widget).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar6);
  if ((this->_Widget).Object == (SNiagaraUISystemWidget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSlateDecl<SNiagaraUISystemWidget,RequiredArgs::T0RequiredArgs> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SWidget::SetDebugInfo((SWidget *)(this->_Widget).Object,param_1,param_2,param_3,0x378);
  return this;
}

// operator<<= @ 14d293b90

TSharedRef<SNiagaraUISystemWidget,1> * __thiscall
TSlateDecl<SNiagaraUISystemWidget,RequiredArgs::T0RequiredArgs>::operator<<=
          (TSlateDecl<SNiagaraUISystemWidget,RequiredArgs::T0RequiredArgs> *this,
          TSharedRef<SNiagaraUISystemWidget,1> *__return_storage_ptr__,FArguments *param_1)

{
  byte *pbVar1;
  SNiagaraUISystemWidget *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  TSharedRef<SNiagaraUISystemWidget,1> *pTVar7;
  
  if ((this->_Widget).Object == (SNiagaraUISystemWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNiagaraUISystemWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)(this->_Widget).Object,(FSlateBaseNamedArgs *)param_1);
  pSVar2 = (this->_Widget).Object;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&pSVar2->DesiredSizeAttribute,(SWidget *)pSVar2,&param_1->_DesiredSize,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&pSVar2->ColorAndOpacityAttribute,(SWidget *)pSVar2,&param_1->_ColorAndOpacity,None);
  if ((this->_Widget).Object == (SNiagaraUISystemWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNiagaraUISystemWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pSVar2 = (this->_Widget).Object;
  if ((pSVar2->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)(pSVar2->_padding_ + 0x228))(pSVar2);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_14d293c60;
  }
  bVar6 = 0x20;
LAB_14d293c60:
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ & 0xdf;
  *(byte *)&pSVar2->_padding_ = (byte)pSVar2->_padding_ | bVar6;
  if ((this->_Widget).Object == (SNiagaraUISystemWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNiagaraUISystemWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pbVar1 = (byte *)((longlong)&((this->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this->_Widget).Object == (SNiagaraUISystemWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNiagaraUISystemWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = (this->_Widget).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->_Widget).SharedReferenceCount.ReferenceController;
  (this->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_Widget).Object = (SNiagaraUISystemWidget *)0x0;
  if (__return_storage_ptr__->Object == (SNiagaraUISystemWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedRef<SNiagaraUISystemWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  return __return_storage_ptr__;
}

