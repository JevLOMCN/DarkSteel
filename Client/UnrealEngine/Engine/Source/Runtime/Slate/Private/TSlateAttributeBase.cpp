// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 65

// Assign @ 14270dc20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<FLinearColor> *param_2,ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  TVariant<FLinearColor,TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_b8;
  undefined1 local_b0 [40];
  FReadAccessScope local_88;
  TVariant<FLinearColor,TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>_> local_70;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
             (FReadAccessScope *)(local_b0 + 0x10));
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar7 + 0x38))();
    if (cVar2 != '\0') {
      bVar3 = true;
      goto LAB_14270dc7b;
    }
  }
  bVar3 = false;
LAB_14270dc7b:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_b0 + 0x10));
  if (bVar3) {
    pTVar6 = TAttribute<FLinearColor>::Steal(param_2,&local_70);
    if (pTVar6->TypeIndex != '\x01') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_b0,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar6,&local_88);
    if (((int)pTVar6->_padding_ == 0) ||
       (plVar7 = (longlong *)pTVar6->_padding_, plVar7 == (longlong *)0x0)) {
      lVar8 = 0;
    }
    else {
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x40))(plVar7,local_b0 + 8);
      lVar8 = *plVar7;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (local_b0._0_8_ == lVar8) {
      bVar3 = false;
    }
    else {
      local_b8.Ptr = ::operator_new(0x28);
      if (local_b8.Ptr == (ISlateAttributeGetter *)0x0) {
        local_b8.Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *local_b8.Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__UFLinearColor__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__UFLinearColor__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_b8.Ptr + 1),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar6);
        local_b8.Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,&local_b8);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_b8.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_b8.Ptr + 0x20))(local_b8.Ptr,1);
      }
      bVar3 = true;
    }
    if (1 < (ulonglong)local_70.TypeIndex) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FLinearColor,TDelegate<struct_FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    bVar3 = false;
  }
  else {
    pTVar6 = TAttribute<FLinearColor>::Steal
                       (param_2,(TVariant<FLinearColor,TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>_>
                                 *)local_50);
    if (pTVar6->TypeIndex != '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    if ((((*(float *)&pTVar6->_padding_ == (this->Value).field0_0x0._s_0.R) &&
         (*(float *)((longlong)&pTVar6->_padding_ + 4) == (this->Value).field0_0x0._s_0.G)) &&
        (*(float *)&pTVar6->_padding_ == (this->Value).field0_0x0._s_0.B)) &&
       (*(float *)((longlong)&pTVar6->_padding_ + 4) == (this->Value).field0_0x0._s_0.A)) {
      bVar3 = false;
    }
    else {
      lVar8 = pTVar6->_padding_;
      *(longlong *)&(this->Value).field0_0x0 = pTVar6->_padding_;
      *(longlong *)((longlong)&(this->Value).field0_0x0 + 8) = lVar8;
      FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)this,param_1,Member,None);
      bVar3 = true;
    }
    if (1 < (ulonglong)(byte)local_50[0x18]) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FLinearColor,TDelegate<struct_FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50[0x18]])(local_50);
  }
  return bVar3;
}

// Assign @ 14270df10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<FMargin> *param_2,ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  TVariant<FMargin,TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_d8 [32];
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_b8;
  undefined1 local_b0 [40];
  FReadAccessScope local_88;
  TVariant<FMargin,TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>_> local_70;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
             (FReadAccessScope *)(local_b0 + 0x10));
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar10 = *(longlong **)&(param_2->Getter).field_0x8, plVar10 != (longlong *)0x0)) {
    cVar5 = (**(code **)(*plVar10 + 0x38))();
    if (cVar5 != '\0') {
      bVar6 = true;
      goto LAB_14270df6b;
    }
  }
  bVar6 = false;
LAB_14270df6b:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_b0 + 0x10));
  if (bVar6) {
    pTVar9 = TAttribute<FMargin>::Steal(param_2,&local_70);
    if (pTVar9->TypeIndex != '\x01') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
    }
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_b0,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar9,&local_88);
    if (((int)pTVar9->_padding_ == 0) ||
       (plVar10 = (longlong *)pTVar9->_padding_, plVar10 == (longlong *)0x0)) {
      lVar11 = 0;
    }
    else {
      plVar10 = (longlong *)(**(code **)(*plVar10 + 0x40))(plVar10,local_b0 + 8);
      lVar11 = *plVar10;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (local_b0._0_8_ == lVar11) {
      bVar6 = false;
    }
    else {
      local_b8.Ptr = ::operator_new(0x28);
      if (local_b8.Ptr == (ISlateAttributeGetter *)0x0) {
        local_b8.Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *local_b8.Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__UFMargin__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__UFMargin__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_b8.Ptr + 1),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar9);
        local_b8.Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,&local_b8);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_b8.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_b8.Ptr + 0x20))(local_b8.Ptr,1);
      }
      bVar6 = true;
    }
    if (1 < (ulonglong)local_70.TypeIndex) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar8) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMargin,TDelegate<struct_FMargin___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    bVar6 = false;
  }
  else {
    pTVar9 = TAttribute<FMargin>::Steal
                       (param_2,(TVariant<FMargin,TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>_>
                                 *)local_50);
    if (pTVar9->TypeIndex != '\0') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    if ((((*(float *)&pTVar9->_padding_ == (this->Value).Left) &&
         (*(float *)&pTVar9->_padding_ == (this->Value).Right)) &&
        (*(float *)((longlong)&pTVar9->_padding_ + 4) == (this->Value).Top)) &&
       (*(float *)((longlong)&pTVar9->_padding_ + 4) == (this->Value).Bottom)) {
      bVar6 = false;
    }
    else {
      uVar2 = *(undefined4 *)((longlong)&pTVar9->_padding_ + 4);
      uVar3 = *(undefined4 *)&pTVar9->_padding_;
      uVar4 = *(undefined4 *)((longlong)&pTVar9->_padding_ + 4);
      (this->Value).Left = (float)*(undefined4 *)&pTVar9->_padding_;
      (this->Value).Top = (float)uVar2;
      (this->Value).Right = (float)uVar3;
      (this->Value).Bottom = (float)uVar4;
      FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)this,param_1,Member,None);
      bVar6 = true;
    }
    if (1 < (ulonglong)(byte)local_50[0x18]) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar8) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMargin,TDelegate<struct_FMargin___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50[0x18]])(local_50);
  }
  return bVar6;
}

// Assign @ 1427d37c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,enum_UE::Slate::PrioritizedWrapBox::EWrapMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::Assign(void *this,ISlateAttributeContainer *param_1,
        TAttribute<UE::Slate::PrioritizedWrapBox::EWrapMode> *param_2,
        ESlateAttributeBindAction param_3)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  TVariant<UE::Slate::PrioritizedWrapBox::EWrapMode,TDelegate<UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar7;
  ISlateAttributeContainer *pIVar8;
  ISlateAttributeContainer IVar9;
  undefined1 auStack_d8 [32];
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_b8;
  ISlateAttributeContainer local_b0;
  undefined1 local_a8 [8];
  FReadAccessScope local_a0;
  FReadAccessScope local_88;
  TVariant<UE::Slate::PrioritizedWrapBox::EWrapMode,TDelegate<UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_70;
  TVariant<UE::Slate::PrioritizedWrapBox::EWrapMode,TDelegate<UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_a0);
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(param_2->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar1 + 0x38))();
    if (cVar3 != '\0') {
      bVar4 = true;
      goto LAB_1427d381b;
    }
  }
  bVar4 = false;
LAB_1427d381b:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a0);
  if (bVar4) {
    pTVar7 = TAttribute<enum_UE::Slate::PrioritizedWrapBox::EWrapMode>::Steal(param_2,&local_70);
    if (pTVar7->TypeIndex != '\x01') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    FSlateAttributeImpl::ProtectedFindGetterHandle(this,&local_b0,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar7,&local_88);
    if (((int)pTVar7->_padding_ == 0) ||
       (plVar1 = (longlong *)pTVar7->_padding_, plVar1 == (longlong *)0x0)) {
      IVar9 = (ISlateAttributeContainer)0x0;
    }
    else {
      pIVar8 = (ISlateAttributeContainer *)(**(code **)(*plVar1 + 0x40))(plVar1,local_a8);
      IVar9 = *pIVar8;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (local_b0 == IVar9) {
      bVar4 = false;
    }
    else {
      local_b8.Ptr = ::operator_new(0x28);
      if (local_b8.Ptr == (ISlateAttributeGetter *)0x0) {
        local_b8.Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *local_b8.Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VISlateAttributeContainer_SlateAttributePrivate__W4EWrapMode_PrioritizedWrapBox_Slate_UE__UFSlateAttributeNoInvalidationReason_2_U__TSlateAttributeComparePredicate_U__TEqualTo_X_____01_SlateAttributePrivate_____TSlateAttributeBase_VISlateAttributeContainer_SlateAttributePrivate__W4EWrapMode_PrioritizedWrapBox_Slate_UE__UFSlateAttributeNoInvalidationReason_2_U__TSlateAttributeComparePredicate_U__TEqualTo_X_____01_SlateAttributePrivate__6B_
        ;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_b8.Ptr + 1),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar7);
        local_b8.Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute(this,param_1,Contained,&local_b8);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow(this,param_1,Contained);
      }
      if (local_b8.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_b8.Ptr + 0x20))(local_b8.Ptr,1);
      }
      bVar4 = true;
    }
    if (1 < (ulonglong)local_70.TypeIndex) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Slate::PrioritizedWrapBox::EWrapMode,TDelegate<enum_UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    FSlateAttributeImpl::ProtectedUnregisterAttribute(this,param_1,Contained);
    bVar4 = false;
  }
  else {
    pTVar7 = TAttribute<enum_UE::Slate::PrioritizedWrapBox::EWrapMode>::Steal(param_2,&local_50);
    if (pTVar7->TypeIndex != '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute(this,param_1,Contained);
    (**(code **)*param_1)(param_1);
    cVar3 = (char)pTVar7->_padding_;
    bVar4 = *(char *)this != cVar3;
    if (bVar4) {
      *(char *)this = cVar3;
      (**(code **)*param_1)(param_1);
      FSlateAttributeImpl::ProtectedInvalidateWidget(this,param_1,Contained,None);
    }
    if (1 < (ulonglong)local_50.TypeIndex) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Slate::PrioritizedWrapBox::EWrapMode,TDelegate<enum_UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50.TypeIndex])(&local_50);
  }
  return bVar4;
}

// Assign @ 1427d3a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::Assign(TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
         *this,ISlateAttributeContainer *param_1,TAttribute<bool> *param_2,
        ESlateAttributeBindAction param_3)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  TVariant<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar7;
  ISlateAttributeContainer *pIVar8;
  ISlateAttributeContainer IVar9;
  undefined1 auStack_d8 [32];
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_b8;
  ISlateAttributeContainer local_b0;
  undefined1 local_a8 [8];
  FReadAccessScope local_a0;
  FReadAccessScope local_88;
  TVariant<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_> local_70;
  TVariant<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_> local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_a0);
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(param_2->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar1 + 0x38))();
    if (cVar3 != '\0') {
      bVar4 = true;
      goto LAB_1427d3aeb;
    }
  }
  bVar4 = false;
LAB_1427d3aeb:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a0);
  if (bVar4) {
    pTVar7 = TAttribute<bool>::Steal(param_2,&local_70);
    if (pTVar7->TypeIndex != '\x01') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,&local_b0,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar7,&local_88);
    if (((int)pTVar7->_padding_ == 0) ||
       (plVar1 = (longlong *)pTVar7->_padding_, plVar1 == (longlong *)0x0)) {
      IVar9 = (ISlateAttributeContainer)0x0;
    }
    else {
      pIVar8 = (ISlateAttributeContainer *)(**(code **)(*plVar1 + 0x40))(plVar1,local_a8);
      IVar9 = *pIVar8;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (local_b0 == IVar9) {
      bVar4 = false;
    }
    else {
      local_b8.Ptr = ::operator_new(0x28);
      if (local_b8.Ptr == (ISlateAttributeGetter *)0x0) {
        local_b8.Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *local_b8.Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VISlateAttributeContainer_SlateAttributePrivate___NUFSlateAttributeNoInvalidationReason_2_U__TSlateAttributeComparePredicate_U__TEqualTo_X_____01_SlateAttributePrivate_____TSlateAttributeBase_VISlateAttributeContainer_SlateAttributePrivate___NUFSlateAttributeNoInvalidationReason_2_U__TSlateAttributeComparePredicate_U__TEqualTo_X_____01_SlateAttributePrivate__6B_
        ;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_b8.Ptr + 1),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar7);
        local_b8.Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Contained,&local_b8);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Contained);
      }
      if (local_b8.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_b8.Ptr + 0x20))(local_b8.Ptr,1);
      }
      bVar4 = true;
    }
    if (1 < (ulonglong)local_70.TypeIndex) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Contained)
    ;
    bVar4 = false;
  }
  else {
    pTVar7 = TAttribute<bool>::Steal(param_2,&local_50);
    if (pTVar7->TypeIndex != '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Contained)
    ;
    (**(code **)*param_1)(param_1);
    bVar6 = SUB81(pTVar7->_padding_,0);
    bVar4 = this->Value != bVar6;
    if (bVar4) {
      this->Value = bVar6;
      (**(code **)*param_1)(param_1);
      FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)this,param_1,Contained,None);
    }
    if (1 < (ulonglong)local_50.TypeIndex) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50.TypeIndex])(&local_50);
  }
  return bVar4;
}

// Assign @ 1427d3d60

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<float> *param_2,ESlateAttributeBindAction param_3)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  char cVar1;
  longlong *plVar2;
  float *pfVar3;
  longlong lVar4;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18 [2];
  undefined1 local_38 [32];
  
  this_00 = &param_2->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)(local_38 + 8));
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(param_2->Getter).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar2 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (param_2->bIsSet == false) {
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    }
    else {
      pfVar3 = TAttribute<float>::Get(param_2);
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
      if (*pfVar3 != this->Value) {
        this->Value = *pfVar3;
        FSlateAttributeImpl::ProtectedInvalidateWidget
                  ((FSlateAttributeImpl *)this,param_1,Member,None);
        return true;
      }
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_38,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)(local_38 + 8));
    if ((*(int *)&(param_2->Getter).field_0x10 == 0) ||
       (plVar2 = *(longlong **)&(param_2->Getter).field_0x8, plVar2 == (longlong *)0x0)) {
      lVar4 = 0;
    }
    else {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x40))(plVar2,local_res18);
      lVar4 = *plVar2;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (local_38._0_8_ != lVar4) {
      local_res18[0].Ptr = ::operator_new(0x28);
      if (local_res18[0].Ptr == (ISlateAttributeGetter *)0x0) {
        local_res18[0].Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *(undefined8 *)(local_res18[0].Ptr + 1) = 0;
        *local_res18[0].Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__MUFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__MUFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        local_res18[0].Ptr[2] = (ISlateAttributeGetter)0x0;
        *(undefined4 *)(local_res18[0].Ptr + 3) = 0;
        TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)
                   (local_res18[0].Ptr + 1),this_00);
        local_res18[0].Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,local_res18);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_res18[0].Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_res18[0].Ptr + 0x20))(local_res18[0].Ptr,1);
      }
      return true;
    }
  }
  return false;
}

// Assign @ 1427d3f20

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,TOptional<float>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<TOptional<float>_> *param_2,
        ESlateAttributeBindAction param_3)

{
  TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  ISlateAttributeGetter *pIVar5;
  ISlateAttributeGetter *pIVar6;
  longlong *plVar7;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18;
  undefined1 local_48 [8];
  undefined1 local_40 [40];
  
  this_00 = &param_2->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)(local_40 + 8));
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*plVar7 + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_40 + 8));
    if (param_2->bIsSet != false) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FReadAccessScope *)(local_40 + 8));
      if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
          (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(*plVar7 + 0x38))(), cVar3 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)(local_40 + 8));
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)(local_40 + 8));
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FReadAccessScope *)(local_40 + 8));
        if (*(int *)&(param_2->Getter).field_0x10 == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)&(param_2->Getter).field_0x8;
        }
        (**(code **)(*plVar7 + 0x60))(plVar7,local_48);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)(local_40 + 8));
        if ((TAttribute<TOptional<float>_> *)local_48 != param_2) {
          if (local_48[4] == false) {
            if ((param_2->Value).bIsSet != false) {
              (param_2->Value).bIsSet = false;
            }
          }
          else {
            (param_2->Value).TypedValue = (float)local_48._0_4_;
            (param_2->Value).bIsSet = true;
          }
        }
      }
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
      bVar1 = (this->Value).bIsSet;
      bVar2 = (param_2->Value).bIsSet;
      if ((bVar1 == bVar2) &&
         ((bVar1 == false || ((param_2->Value).TypedValue == (this->Value).TypedValue)))) {
        return false;
      }
      if (param_2 != (TAttribute<TOptional<float>_> *)this) {
        if (bVar2 == false) {
          if (bVar1 != false) {
            (this->Value).bIsSet = false;
          }
        }
        else {
          (this->Value).TypedValue = (param_2->Value).TypedValue;
          (this->Value).bIsSet = true;
        }
      }
      FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)this,param_1,Member,None);
      return true;
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_40 + 8));
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_40,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)(local_40 + 8));
    pIVar6 = (ISlateAttributeGetter *)0x0;
    pIVar5 = pIVar6;
    if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
       (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 != (longlong *)0x0)) {
      puVar4 = (undefined8 *)(**(code **)(*plVar7 + 0x40))(plVar7,&local_res18);
      pIVar5 = (ISlateAttributeGetter *)*puVar4;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_40 + 8));
    if ((ISlateAttributeGetter *)local_40._0_8_ != pIVar5) {
      pIVar5 = ::operator_new(0x28);
      if (pIVar5 != (ISlateAttributeGetter *)0x0) {
        *pIVar5 = (ISlateAttributeGetter)
                  &
                  ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__U__TOptional_M__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__U__TOptional_M__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
        TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
                  ((TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy> *)
                   (pIVar5 + 1),this_00);
        pIVar5[4] = (ISlateAttributeGetter)this;
        pIVar6 = pIVar5;
      }
      local_res18.Ptr = pIVar6;
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,&local_res18);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_res18.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_res18.Ptr + 0x20))(local_res18.Ptr,1);
      }
      return true;
    }
  }
  return false;
}

// TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0> @ 1428430e0

TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
* __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          (TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
           *this,SWidget *param_1,FLinearColor *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined1 local_res8 [32];
  
  fVar1 = (param_2->field0_0x0)._s_0.R;
  fVar2 = (param_2->field0_0x0)._s_0.G;
  fVar3 = (param_2->field0_0x0)._s_0.B;
  fVar4 = (param_2->field0_0x0)._s_0.A;
  (this->Value).field0_0x0._s_0.R = fVar1;
  (this->Value).field0_0x0._s_0.G = fVar2;
  (this->Value).field0_0x0._s_0.B = fVar3;
  (this->Value).field0_0x0._s_0.A = fVar4;
  iVar5 = _finite((double)fVar1);
  if ((((iVar5 != 0) && (iVar5 = _finite((double)fVar2), iVar5 != 0)) &&
      (iVar5 = _finite((double)fVar3), iVar5 != 0)) && (iVar5 = _finite((double)fVar4), iVar5 != 0))
  {
    return this;
  }
  `SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::VerifyNan'::__l37::<lambda_1>::operator()(local_res8);
  return this;
}

// Assign @ 1428540d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<float> *param_2,float *param_3,
        ESlateAttributeBindAction param_4)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  TVariant<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_b8;
  undefined1 local_b0 [40];
  FReadAccessScope local_88;
  TVariant<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_> local_70;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
             (FReadAccessScope *)(local_b0 + 0x10));
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar7 + 0x38))();
    if (cVar2 != '\0') {
      bVar3 = true;
      goto LAB_14285412b;
    }
  }
  bVar3 = false;
LAB_14285412b:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_b0 + 0x10));
  if (bVar3) {
    pTVar6 = TAttribute<float>::Steal(param_2,&local_70);
    if (pTVar6->TypeIndex != '\x01') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_b0,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar6,&local_88);
    if (((int)pTVar6->_padding_ == 0) ||
       (plVar7 = (longlong *)pTVar6->_padding_, plVar7 == (longlong *)0x0)) {
      lVar8 = 0;
    }
    else {
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x40))(plVar7,local_b0 + 8);
      lVar8 = *plVar7;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (local_b0._0_8_ == lVar8) {
      bVar3 = false;
    }
    else {
      local_b8.Ptr = ::operator_new(0x28);
      if (local_b8.Ptr == (ISlateAttributeGetter *)0x0) {
        local_b8.Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *local_b8.Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__MUFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__MUFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_b8.Ptr + 1),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar6);
        local_b8.Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,&local_b8);
      if ((param_4 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_b8.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_b8.Ptr + 0x20))(local_b8.Ptr,1);
      }
      bVar3 = true;
    }
    if (1 < (ulonglong)local_70.TypeIndex) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    bVar3 = Set(this,param_1,param_3);
  }
  else {
    pTVar6 = TAttribute<float>::Steal
                       (param_2,(TVariant<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_>
                                 *)local_50);
    if (pTVar6->TypeIndex != '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    bVar3 = Set(this,param_1,(float *)pTVar6);
    if (1 < (ulonglong)(byte)local_50[0x18]) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50[0x18]])(local_50);
  }
  return bVar3;
}

// Assign @ 142854370

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<TOptional<UE::Math::TVector2<double>_>_> *param_2,
        ESlateAttributeBindAction param_3)

{
  TDelegate<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>
  *this_00;
  bool bVar1;
  bool bVar2;
  double dVar3;
  char cVar4;
  undefined8 *puVar5;
  ISlateAttributeGetter *pIVar6;
  ISlateAttributeGetter *pIVar7;
  longlong *plVar8;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18 [2];
  undefined1 local_68 [8];
  undefined1 local_60 [56];
  
  this_00 = &param_2->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)(local_60 + 0x18));
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar8 = *(longlong **)&(param_2->Getter).field_0x8, plVar8 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar8 + 0x38))(), cVar4 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_60 + 0x18));
    if (param_2->bIsSet != false) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FReadAccessScope *)(local_60 + 0x18));
      if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
          (plVar8 = *(longlong **)&(param_2->Getter).field_0x8, plVar8 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*plVar8 + 0x38))(), cVar4 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_60 + 0x18));
      if (bVar1) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FReadAccessScope *)(local_60 + 0x18));
        if (*(int *)&(param_2->Getter).field_0x10 == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = *(longlong **)&(param_2->Getter).field_0x8;
        }
        (**(code **)(*plVar8 + 0x60))(plVar8,local_60);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)(local_60 + 0x18));
        if ((TAttribute<TOptional<UE::Math::TVector2<double>_>_> *)local_60 != param_2) {
          if (local_60[0x10] == false) {
            if ((param_2->Value).bIsSet != false) {
              (param_2->Value).bIsSet = false;
            }
          }
          else {
            (param_2->Value).TypedValue.field0_0x0._s_0.X = (double)local_60._0_8_;
            (param_2->Value).TypedValue.field0_0x0._s_0.Y = (double)local_60._8_8_;
            (param_2->Value).bIsSet = true;
          }
        }
      }
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
      bVar1 = (this->Value).bIsSet;
      bVar2 = (param_2->Value).bIsSet;
      if ((bVar1 == bVar2) &&
         ((bVar1 == false ||
          (((param_2->Value).TypedValue.field0_0x0._s_0.X ==
            (this->Value).TypedValue.field0_0x0._s_0.X &&
           ((param_2->Value).TypedValue.field0_0x0._s_0.Y ==
            (this->Value).TypedValue.field0_0x0._s_0.Y)))))) {
        return false;
      }
      if (param_2 != (TAttribute<TOptional<UE::Math::TVector2<double>_>_> *)this) {
        if (bVar2 == false) {
          if (bVar1 != false) {
            (this->Value).bIsSet = false;
          }
        }
        else {
          dVar3 = (param_2->Value).TypedValue.field0_0x0._s_0.Y;
          (this->Value).TypedValue.field0_0x0._s_0.X = (param_2->Value).TypedValue.field0_0x0._s_0.X
          ;
          (this->Value).TypedValue.field0_0x0._s_0.Y = dVar3;
          (this->Value).bIsSet = true;
        }
      }
      FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)this,param_1,Member,Layout);
      return true;
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_60 + 0x18));
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_68,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)(local_60 + 0x18));
    pIVar7 = (ISlateAttributeGetter *)0x0;
    pIVar6 = pIVar7;
    if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
       (plVar8 = *(longlong **)&(param_2->Getter).field_0x8, plVar8 != (longlong *)0x0)) {
      puVar5 = (undefined8 *)(**(code **)(*plVar8 + 0x40))(plVar8,local_res18);
      pIVar6 = (ISlateAttributeGetter *)*puVar5;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_60 + 0x18));
    if (local_68 != (undefined1  [8])pIVar6) {
      pIVar6 = ::operator_new(0x28);
      if (pIVar6 != (ISlateAttributeGetter *)0x0) {
        *pIVar6 = (ISlateAttributeGetter)
                  &
                  ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__U__TOptional_U__TVector2_N_Math_UE____U__TSlateAttributeInvalidationReason__00__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__U__TOptional_U__TVector2_N_Math_UE____U__TSlateAttributeInvalidationReason__00__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        TDelegate<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>::
        TDelegate<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>
                  ((TDelegate<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>
                    *)(pIVar6 + 1),this_00);
        pIVar6[4] = (ISlateAttributeGetter)this;
        pIVar7 = pIVar6;
      }
      local_res18[0].Ptr = pIVar7;
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,local_res18);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_res18[0].Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_res18[0].Ptr + 0x20))(local_res18[0].Ptr,1);
      }
      return true;
    }
  }
  return false;
}

// Assign @ 142854620

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<UE::Math::TVector2<double>_> *param_2,
        ESlateAttributeBindAction param_3)

{
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  double dVar1;
  char cVar2;
  undefined8 *puVar3;
  ISlateAttributeGetter *pIVar4;
  ISlateAttributeGetter *pIVar5;
  longlong *plVar6;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18;
  ISlateAttributeGetter *local_48;
  FMRSWRecursiveAccessDetector *pFStack_40;
  
  this_00 = &param_2->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)&stack0xffffffffffffffb8);
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar6 = *(longlong **)&(param_2->Getter).field_0x8, plVar6 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar6 + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&stack0xffffffffffffffb8);
    if (param_2->bIsSet == false) {
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FReadAccessScope *)&stack0xffffffffffffffb8);
      if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
          (plVar6 = *(longlong **)&(param_2->Getter).field_0x8, plVar6 == (longlong *)0x0)) ||
         (cVar2 = (**(code **)(*plVar6 + 0x38))(), cVar2 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&stack0xffffffffffffffb8);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&stack0xffffffffffffffb8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FReadAccessScope *)&stack0xffffffffffffffd0);
        if (*(int *)&(param_2->Getter).field_0x10 == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = *(longlong **)&(param_2->Getter).field_0x8;
        }
        (**(code **)(*plVar6 + 0x60))(plVar6,&stack0xffffffffffffffb8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&stack0xffffffffffffffd0);
        (param_2->Value).field0_0x0._s_0.X = (double)local_48;
        (param_2->Value).field0_0x0._s_0.Y = (double)pFStack_40;
      }
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
      if (((param_2->Value).field0_0x0._s_0.X != (this->Value).field0_0x0._s_0.X) ||
         ((param_2->Value).field0_0x0._s_0.Y != (this->Value).field0_0x0._s_0.Y)) {
        dVar1 = (param_2->Value).field0_0x0._s_0.Y;
        (this->Value).field0_0x0._s_0.X = (param_2->Value).field0_0x0._s_0.X;
        (this->Value).field0_0x0._s_0.Y = dVar1;
        FSlateAttributeImpl::ProtectedInvalidateWidget
                  ((FSlateAttributeImpl *)this,param_1,Member,None);
        return true;
      }
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&stack0xffffffffffffffb8);
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)&stack0xffffffffffffffb8,
               (ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)&stack0xffffffffffffffd0);
    pIVar5 = (ISlateAttributeGetter *)0x0;
    pIVar4 = pIVar5;
    if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
       (plVar6 = *(longlong **)&(param_2->Getter).field_0x8, plVar6 != (longlong *)0x0)) {
      puVar3 = (undefined8 *)(**(code **)(*plVar6 + 0x40))(plVar6,&stack0x00000018);
      pIVar4 = (ISlateAttributeGetter *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&stack0xffffffffffffffd0);
    if (local_48 != pIVar4) {
      pIVar4 = ::operator_new(0x28);
      if (pIVar4 != (ISlateAttributeGetter *)0x0) {
        *pIVar4 = (ISlateAttributeGetter)
                  &
                  ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__U__TVector2_N_Math_UE__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__U__TVector2_N_Math_UE__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
        TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
                  ((TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *
                   )(pIVar4 + 1),this_00);
        pIVar4[4] = (ISlateAttributeGetter)this;
        pIVar5 = pIVar4;
      }
      local_res18.Ptr = pIVar5;
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,&stack0x00000018);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_res18.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_res18.Ptr + 0x20))(local_res18.Ptr,1);
      }
      return true;
    }
  }
  return false;
}

// Assign @ 142854860

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<UE::Math::TVector4<double>_> *param_2,
        TVector4<double> *param_3,ESlateAttributeBindAction param_4)

{
  TDelegate<UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  double dVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ISlateAttributeGetter *pIVar5;
  ISlateAttributeGetter *pIVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18 [2];
  undefined1 local_68 [32];
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  
  this_00 = &param_2->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)(local_68 + 8));
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar7 + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_68 + 8));
    if (param_2->bIsSet == false) {
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
      if ((((param_3->field0_0x0)._s_0.X != (this->Value).field0_0x0._s_0.X) ||
          ((param_3->field0_0x0)._s_0.Y != (this->Value).field0_0x0._s_0.Y)) ||
         (((param_3->field0_0x0)._s_0.Z != (this->Value).field0_0x0._s_0.Z ||
          ((param_3->field0_0x0)._s_0.W != (this->Value).field0_0x0._s_0.W)))) {
        dVar1 = (param_3->field0_0x0)._s_0.Y;
        (this->Value).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
        (this->Value).field0_0x0._s_0.Y = dVar1;
        uVar8 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0x10);
        uVar9 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0x14);
        uVar10 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0x18);
        uVar11 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0x1c);
        goto LAB_142854ae8;
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FReadAccessScope *)(local_68 + 8));
      if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
          (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 == (longlong *)0x0)) ||
         (cVar2 = (**(code **)(*plVar7 + 0x38))(), cVar2 == '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_68 + 8));
      if (bVar3) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FReadAccessScope *)(local_68 + 8));
        if (*(int *)&(param_2->Getter).field_0x10 == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)&(param_2->Getter).field_0x8;
        }
        (**(code **)(*plVar7 + 0x60))(plVar7,&local_48);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)(local_68 + 8));
        (param_2->Value).field0_0x0._s_0.X = local_48;
        (param_2->Value).field0_0x0._s_0.Y = dStack_40;
        (param_2->Value).field0_0x0._s_0.Z = local_38;
        (param_2->Value).field0_0x0._s_0.W = dStack_30;
      }
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
      if (((((param_2->Value).field0_0x0._s_0.X != (this->Value).field0_0x0._s_0.X) ||
           ((param_2->Value).field0_0x0._s_0.Y != (this->Value).field0_0x0._s_0.Y)) ||
          ((param_2->Value).field0_0x0._s_0.Z != (this->Value).field0_0x0._s_0.Z)) ||
         ((param_2->Value).field0_0x0._s_0.W != (this->Value).field0_0x0._s_0.W)) {
        dVar1 = (param_2->Value).field0_0x0._s_0.Y;
        (this->Value).field0_0x0._s_0.X = (param_2->Value).field0_0x0._s_0.X;
        (this->Value).field0_0x0._s_0.Y = dVar1;
        uVar8 = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 0x10);
        uVar9 = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 0x14);
        uVar10 = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 0x18);
        uVar11 = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 0x1c);
LAB_142854ae8:
        *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 0x10) = uVar8;
        *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 0x14) = uVar9;
        *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 0x18) = uVar10;
        *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 0x1c) = uVar11;
        FSlateAttributeImpl::ProtectedInvalidateWidget
                  ((FSlateAttributeImpl *)this,param_1,Member,None);
        goto LAB_142854afd;
      }
    }
LAB_142854ad9:
    bVar3 = false;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_68 + 8));
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_68,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)(local_68 + 8));
    pIVar6 = (ISlateAttributeGetter *)0x0;
    pIVar5 = pIVar6;
    if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
       (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 != (longlong *)0x0)) {
      puVar4 = (undefined8 *)(**(code **)(*plVar7 + 0x40))(plVar7,local_res18);
      pIVar5 = (ISlateAttributeGetter *)*puVar4;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_68 + 8));
    if ((ISlateAttributeGetter *)local_68._0_8_ == pIVar5) goto LAB_142854ad9;
    pIVar5 = ::operator_new(0x28);
    if (pIVar5 != (ISlateAttributeGetter *)0x0) {
      *pIVar5 = (ISlateAttributeGetter)
                &
                ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__U__TVector4_N_Math_UE__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__U__TVector4_N_Math_UE__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
      ;
      TDelegate<UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy> *)
                 (pIVar5 + 1),this_00);
      pIVar5[4] = (ISlateAttributeGetter)this;
      pIVar6 = pIVar5;
    }
    local_res18[0].Ptr = pIVar6;
    FSlateAttributeImpl::ProtectedRegisterAttribute
              ((FSlateAttributeImpl *)this,param_1,Member,local_res18);
    if ((param_4 & Initialize) != None) {
      FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
    }
    if (local_res18[0].Ptr != (ISlateAttributeGetter *)0x0) {
      (**(code **)((longlong)*local_res18[0].Ptr + 0x20))(local_res18[0].Ptr,1);
    }
LAB_142854afd:
    bVar3 = true;
  }
  return bVar3;
}

// Assign @ 142854b20

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<FLinearColor> *param_2,ESlateAttributeBindAction param_3)

{
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  FLinearColor *pFVar4;
  longlong lVar5;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18 [2];
  undefined1 local_38 [32];
  
  this_00 = &param_2->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)(local_38 + 8));
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(param_2->Getter).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar3 + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (param_2->bIsSet == false) {
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    }
    else {
      pFVar4 = TAttribute<FLinearColor>::Get(param_2);
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
      if ((((pFVar4->field0_0x0)._s_0.R != (this->Value).field0_0x0._s_0.R) ||
          ((pFVar4->field0_0x0)._s_0.G != (this->Value).field0_0x0._s_0.G)) ||
         (((pFVar4->field0_0x0)._s_0.B != (this->Value).field0_0x0._s_0.B ||
          ((pFVar4->field0_0x0)._s_0.A != (this->Value).field0_0x0._s_0.A)))) {
        uVar1 = *(undefined8 *)((longlong)&pFVar4->field0_0x0 + 8);
        *(undefined8 *)&(this->Value).field0_0x0 = *(undefined8 *)&pFVar4->field0_0x0;
        *(undefined8 *)((longlong)&(this->Value).field0_0x0 + 8) = uVar1;
        FSlateAttributeImpl::ProtectedInvalidateWidget
                  ((FSlateAttributeImpl *)this,param_1,Member,Paint);
        return true;
      }
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_38,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)(local_38 + 8));
    if ((*(int *)&(param_2->Getter).field_0x10 == 0) ||
       (plVar3 = *(longlong **)&(param_2->Getter).field_0x8, plVar3 == (longlong *)0x0)) {
      lVar5 = 0;
    }
    else {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3,local_res18);
      lVar5 = *plVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (local_38._0_8_ != lVar5) {
      local_res18[0].Ptr = ::operator_new(0x28);
      if (local_res18[0].Ptr == (ISlateAttributeGetter *)0x0) {
        local_res18[0].Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *(undefined8 *)(local_res18[0].Ptr + 1) = 0;
        *local_res18[0].Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__UFLinearColor__U__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__UFLinearColor__U__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        local_res18[0].Ptr[2] = (ISlateAttributeGetter)0x0;
        *(undefined4 *)(local_res18[0].Ptr + 3) = 0;
        TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  ((TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)
                   (local_res18[0].Ptr + 1),this_00);
        local_res18[0].Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,local_res18);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_res18[0].Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_res18[0].Ptr + 0x20))(local_res18[0].Ptr,1);
      }
      return true;
    }
  }
  return false;
}

// Assign @ 142854d00

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<FLinearColor> *param_2,ESlateAttributeBindAction param_3)

{
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  FLinearColor *pFVar4;
  longlong lVar5;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18 [2];
  undefined1 local_38 [32];
  
  this_00 = &param_2->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)(local_38 + 8));
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(param_2->Getter).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar3 + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (param_2->bIsSet == false) {
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    }
    else {
      pFVar4 = TAttribute<FLinearColor>::Get(param_2);
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
      if ((((pFVar4->field0_0x0)._s_0.R != (this->Value).field0_0x0._s_0.R) ||
          ((pFVar4->field0_0x0)._s_0.G != (this->Value).field0_0x0._s_0.G)) ||
         (((pFVar4->field0_0x0)._s_0.B != (this->Value).field0_0x0._s_0.B ||
          ((pFVar4->field0_0x0)._s_0.A != (this->Value).field0_0x0._s_0.A)))) {
        uVar1 = *(undefined8 *)((longlong)&pFVar4->field0_0x0 + 8);
        *(undefined8 *)&(this->Value).field0_0x0 = *(undefined8 *)&pFVar4->field0_0x0;
        *(undefined8 *)((longlong)&(this->Value).field0_0x0 + 8) = uVar1;
        FSlateAttributeImpl::ProtectedInvalidateWidget
                  ((FSlateAttributeImpl *)this,param_1,Member,None);
        return true;
      }
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_38,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)(local_38 + 8));
    if ((*(int *)&(param_2->Getter).field_0x10 == 0) ||
       (plVar3 = *(longlong **)&(param_2->Getter).field_0x8, plVar3 == (longlong *)0x0)) {
      lVar5 = 0;
    }
    else {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3,local_res18);
      lVar5 = *plVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (local_38._0_8_ != lVar5) {
      local_res18[0].Ptr = ::operator_new(0x28);
      if (local_res18[0].Ptr == (ISlateAttributeGetter *)0x0) {
        local_res18[0].Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *(undefined8 *)(local_res18[0].Ptr + 1) = 0;
        *local_res18[0].Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__UFLinearColor__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__UFLinearColor__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        local_res18[0].Ptr[2] = (ISlateAttributeGetter)0x0;
        *(undefined4 *)(local_res18[0].Ptr + 3) = 0;
        TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  ((TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)
                   (local_res18[0].Ptr + 1),this_00);
        local_res18[0].Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,local_res18);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_res18[0].Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_res18[0].Ptr + 0x20))(local_res18[0].Ptr,1);
      }
      return true;
    }
  }
  return false;
}

// Assign @ 142854ee0

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<FMargin> *param_2,ESlateAttributeBindAction param_3)

{
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  char cVar1;
  bool bVar2;
  longlong *plVar3;
  FMargin *pFVar4;
  longlong lVar5;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18 [2];
  undefined1 local_38 [32];
  
  this_00 = &param_2->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)(local_38 + 8));
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(param_2->Getter).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar3 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (param_2->bIsSet != false) {
      pFVar4 = TAttribute<FMargin>::Get(param_2);
      bVar2 = Set(this,param_1,pFVar4);
      return bVar2;
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_38,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)(local_38 + 8));
    if ((*(int *)&(param_2->Getter).field_0x10 == 0) ||
       (plVar3 = *(longlong **)&(param_2->Getter).field_0x8, plVar3 == (longlong *)0x0)) {
      lVar5 = 0;
    }
    else {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3,local_res18);
      lVar5 = *plVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (local_38._0_8_ != lVar5) {
      local_res18[0].Ptr = ::operator_new(0x28);
      if (local_res18[0].Ptr == (ISlateAttributeGetter *)0x0) {
        local_res18[0].Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *(undefined8 *)(local_res18[0].Ptr + 1) = 0;
        *local_res18[0].Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__UFMargin__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__UFMargin__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        local_res18[0].Ptr[2] = (ISlateAttributeGetter)0x0;
        *(undefined4 *)(local_res18[0].Ptr + 3) = 0;
        TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)
                   (local_res18[0].Ptr + 1),this_00);
        local_res18[0].Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,local_res18);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_res18[0].Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_res18[0].Ptr + 0x20))(local_res18[0].Ptr,1);
      }
      return true;
    }
  }
  return false;
}

// Assign @ 142855070

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,
        TAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *param_2,
        ESlateAttributeBindAction param_3)

{
  TDelegate<TArray<FLinearColor,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
  *this_00;
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  char cVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18;
  longlong local_48;
  ForAnyElementType local_40;
  int local_38;
  int iStack_34;
  
  this_00 = &param_2->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)&stack0xffffffffffffffd0);
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*plVar7 + 0x38))(), cVar5 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&stack0xffffffffffffffd0);
    if (param_2->bIsSet == false) {
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FReadAccessScope *)&stack0xffffffffffffffd0);
      if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
          (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*plVar7 + 0x38))(), cVar5 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&stack0xffffffffffffffd0);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&stack0xffffffffffffffd0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FReadAccessScope *)&stack0xffffffffffffffd0);
        if (*(int *)&(param_2->Getter).field_0x10 == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)&(param_2->Getter).field_0x8;
        }
        (**(code **)(*plVar7 + 0x60))(plVar7,&stack0xffffffffffffffc0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&stack0xffffffffffffffd0);
        if (param_2 !=
            (TAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *)
            &stack0xffffffffffffffc0) {
          pFVar4 = (param_2->Value).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          (param_2->Value).AllocatorInstance.Data = local_40.Data;
          (param_2->Value).ArrayNum = local_38;
          (param_2->Value).ArrayMax = iStack_34;
          _local_38 = 0;
          local_40.Data = (FScriptContainerElement *)0x0;
        }
        if (local_40.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data);
        }
      }
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
      iVar2 = (param_2->Value).ArrayNum;
      iVar3 = (this->Value).ArrayNum;
      if ((iVar3 != iVar2) ||
         (bVar6 = CompareItems<FLinearColor,int>
                            ((FLinearColor *)(this->Value).AllocatorInstance.Data,
                             (FLinearColor *)(param_2->Value).AllocatorInstance.Data,iVar3), !bVar6)
         ) {
        if ((TAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *)this != param_2) {
          iVar3 = (this->Value).ArrayMax;
          piVar1 = &(this->Value).ArrayMax;
          pFVar4 = (param_2->Value).AllocatorInstance.Data;
          (this->Value).ArrayNum = iVar2;
          if ((iVar2 == 0) && (iVar3 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,iVar2,iVar3,(ForAnyElementType *)this,iVar2,piVar1);
            if (iVar2 != 0) {
              memcpy((this->Value).AllocatorInstance.Data,pFVar4,(longlong)iVar2 << 4);
            }
          }
        }
        FSlateAttributeImpl::ProtectedInvalidateWidget
                  ((FSlateAttributeImpl *)this,param_1,Member,Paint);
        return true;
      }
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&stack0xffffffffffffffd0);
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)&stack0xffffffffffffffb8,
               (ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)&stack0xffffffffffffffd0);
    if ((*(int *)&(param_2->Getter).field_0x10 == 0) ||
       (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 == (longlong *)0x0)) {
      lVar8 = 0;
    }
    else {
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x40))(plVar7,&stack0x00000018);
      lVar8 = *plVar7;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&stack0xffffffffffffffd0);
    if (local_48 != lVar8) {
      local_res18.Ptr = ::operator_new(0x28);
      if (local_res18.Ptr == (ISlateAttributeGetter *)0x0) {
        local_res18.Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *local_res18.Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__V__TArray_UFLinearColor__V__TSizedDefaultAllocator__0CA_____U__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__V__TArray_UFLinearColor__V__TSizedDefaultAllocator__0CA_____U__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        TDelegate<TArray<FLinearColor,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
        ::
        TDelegate<TArray<FLinearColor,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
                  ((TDelegate<TArray<FLinearColor,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
                    *)(local_res18.Ptr + 1),this_00);
        local_res18.Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,&stack0x00000018);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_res18.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_res18.Ptr + 0x20))(local_res18.Ptr,1);
      }
      return true;
    }
  }
  return false;
}

// Assign @ 142855330

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EColorBlockAlphaDisplayMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(void *this,SWidget *param_1,TAttribute<EColorBlockAlphaDisplayMode> *param_2,
        ESlateAttributeBindAction param_3)

{
  TDelegate<EColorBlockAlphaDisplayMode___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  char cVar1;
  EColorBlockAlphaDisplayMode EVar2;
  undefined8 *puVar3;
  ISlateAttributeGetter *pIVar4;
  ISlateAttributeGetter *pIVar5;
  longlong *plVar6;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18;
  undefined1 local_38 [32];
  
  this_00 = &param_2->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)(local_38 + 8));
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar6 = *(longlong **)&(param_2->Getter).field_0x8, plVar6 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar6 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (param_2->bIsSet != false) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FReadAccessScope *)(local_38 + 8));
      if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
          (plVar6 = *(longlong **)&(param_2->Getter).field_0x8, plVar6 == (longlong *)0x0)) ||
         (cVar1 = (**(code **)(*plVar6 + 0x38))(), cVar1 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)(local_38 + 8));
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)(local_38 + 8));
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FReadAccessScope *)(local_38 + 8));
        if (*(int *)&(param_2->Getter).field_0x10 == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = *(longlong **)&(param_2->Getter).field_0x8;
        }
        EVar2 = (**(code **)(*plVar6 + 0x60))(plVar6);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)(local_38 + 8));
        param_2->Value = EVar2;
      }
      FSlateAttributeImpl::ProtectedUnregisterAttribute(this,param_1,Member);
      if (*(EColorBlockAlphaDisplayMode *)this == param_2->Value) {
        return false;
      }
      *(EColorBlockAlphaDisplayMode *)this = param_2->Value;
      FSlateAttributeImpl::ProtectedInvalidateWidget(this,param_1,Member,None);
      return true;
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute(this,param_1,Member);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    FSlateAttributeImpl::ProtectedFindGetterHandle
              (this,(SWidget *)local_38,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)(local_38 + 8));
    pIVar5 = (ISlateAttributeGetter *)0x0;
    pIVar4 = pIVar5;
    if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
       (plVar6 = *(longlong **)&(param_2->Getter).field_0x8, plVar6 != (longlong *)0x0)) {
      puVar3 = (undefined8 *)(**(code **)(*plVar6 + 0x40))(plVar6,&local_res18);
      pIVar4 = (ISlateAttributeGetter *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if ((ISlateAttributeGetter *)local_38._0_8_ != pIVar4) {
      pIVar4 = ::operator_new(0x28);
      if (pIVar4 != (ISlateAttributeGetter *)0x0) {
        *pIVar4 = (ISlateAttributeGetter)
                  &
                  ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__W4EColorBlockAlphaDisplayMode__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__W4EColorBlockAlphaDisplayMode__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        TDelegate<enum_EColorBlockAlphaDisplayMode___cdecl(void),FDefaultDelegateUserPolicy>::
        TDelegate<enum_EColorBlockAlphaDisplayMode___cdecl(void),FDefaultDelegateUserPolicy>
                  (pIVar4 + 1,this_00);
        pIVar4[4] = (ISlateAttributeGetter)this;
        pIVar5 = pIVar4;
      }
      local_res18.Ptr = pIVar5;
      FSlateAttributeImpl::ProtectedRegisterAttribute(this,param_1,Member,&local_res18);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow(this,param_1,Member);
      }
      if (local_res18.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_res18.Ptr + 0x20))(local_res18.Ptr,1);
      }
      return true;
    }
  }
  return false;
}

// Assign @ 142855550

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<bool> *param_2,ESlateAttributeBindAction param_3)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  char cVar1;
  longlong *plVar2;
  bool *pbVar3;
  longlong lVar4;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18 [2];
  undefined1 local_38 [32];
  
  this_00 = &param_2->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)(local_38 + 8));
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(param_2->Getter).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar2 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (param_2->bIsSet != false) {
      pbVar3 = TAttribute<bool>::Get(param_2);
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
      if (this->Value == *pbVar3) {
        return false;
      }
      this->Value = *pbVar3;
      FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)this,param_1,Member,None);
      return true;
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_38,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)(local_38 + 8));
    if ((*(int *)&(param_2->Getter).field_0x10 == 0) ||
       (plVar2 = *(longlong **)&(param_2->Getter).field_0x8, plVar2 == (longlong *)0x0)) {
      lVar4 = 0;
    }
    else {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x40))(plVar2,local_res18);
      lVar4 = *plVar2;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (local_38._0_8_ != lVar4) {
      local_res18[0].Ptr = ::operator_new(0x28);
      if (local_res18[0].Ptr == (ISlateAttributeGetter *)0x0) {
        local_res18[0].Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *(undefined8 *)(local_res18[0].Ptr + 1) = 0;
        *local_res18[0].Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget___NUFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget___NUFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        local_res18[0].Ptr[2] = (ISlateAttributeGetter)0x0;
        *(undefined4 *)(local_res18[0].Ptr + 3) = 0;
        TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)
                   (local_res18[0].Ptr + 1),this_00);
        local_res18[0].Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,local_res18);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_res18[0].Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_res18[0].Ptr + 0x20))(local_res18[0].Ptr,1);
      }
      return true;
    }
  }
  return false;
}

// Set @ 1428955d0

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Set(TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      *this,SWidget *param_1,float *param_2)

{
  FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
  if (*param_2 == this->Value) {
    return false;
  }
  this->Value = *param_2;
  FSlateAttributeImpl::ProtectedInvalidateWidget((FSlateAttributeImpl *)this,param_1,Member,None);
  return true;
}

// Set @ 142895640

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Set(TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      *this,SWidget *param_1,FMargin *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
  if ((((param_2->Left == (this->Value).Left) && (param_2->Right == (this->Value).Right)) &&
      (param_2->Top == (this->Value).Top)) && (param_2->Bottom == (this->Value).Bottom)) {
    return false;
  }
  fVar1 = param_2->Top;
  fVar2 = param_2->Right;
  fVar3 = param_2->Bottom;
  (this->Value).Left = param_2->Left;
  (this->Value).Top = fVar1;
  (this->Value).Right = fVar2;
  (this->Value).Bottom = fVar3;
  FSlateAttributeImpl::ProtectedInvalidateWidget((FSlateAttributeImpl *)this,param_1,Member,None);
  return true;
}

// VerifyNan @ 14289fc30

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::VerifyNan(TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined1 local_res8 [32];
  
  fVar1 = (this->Value).field0_0x0._s_0.A;
  fVar2 = (this->Value).field0_0x0._s_0.B;
  fVar3 = (this->Value).field0_0x0._s_0.G;
  iVar4 = _finite((double)(this->Value).field0_0x0._s_0.R);
  if ((((iVar4 != 0) && (iVar4 = _finite((double)fVar3), iVar4 != 0)) &&
      (iVar4 = _finite((double)fVar2), iVar4 != 0)) && (iVar4 = _finite((double)fVar1), iVar4 != 0))
  {
    return;
  }
  `SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::VerifyNan'::__l37::<lambda_1>::operator()(local_res8);
  return;
}

// Assign @ 1428d7af0

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<int> *param_2,ESlateAttributeBindAction param_3)

{
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  char cVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18 [2];
  undefined1 local_38 [32];
  
  this_00 = &param_2->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)(local_38 + 8));
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(param_2->Getter).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar2 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (param_2->bIsSet != false) {
      piVar3 = TAttribute<int>::Get(param_2);
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
      if (this->Value == *piVar3) {
        return false;
      }
      this->Value = *piVar3;
      FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)this,param_1,Member,Paint);
      return true;
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_38,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)(local_38 + 8));
    if ((*(int *)&(param_2->Getter).field_0x10 == 0) ||
       (plVar2 = *(longlong **)&(param_2->Getter).field_0x8, plVar2 == (longlong *)0x0)) {
      lVar4 = 0;
    }
    else {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x40))(plVar2,local_res18);
      lVar4 = *plVar2;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (local_38._0_8_ != lVar4) {
      local_res18[0].Ptr = ::operator_new(0x28);
      if (local_res18[0].Ptr == (ISlateAttributeGetter *)0x0) {
        local_res18[0].Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *(undefined8 *)(local_res18[0].Ptr + 1) = 0;
        *local_res18[0].Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__HU__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__HU__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        local_res18[0].Ptr[2] = (ISlateAttributeGetter)0x0;
        *(undefined4 *)(local_res18[0].Ptr + 3) = 0;
        TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  ((TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *)
                   (local_res18[0].Ptr + 1),this_00);
        local_res18[0].Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,local_res18);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_res18[0].Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_res18[0].Ptr + 0x20))(local_res18[0].Ptr,1);
      }
      return true;
    }
  }
  return false;
}

// Assign @ 1428d7cb0

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<float> *param_2,ESlateAttributeBindAction param_3)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  char cVar1;
  longlong *plVar2;
  float *pfVar3;
  longlong lVar4;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18 [2];
  undefined1 local_38 [32];
  
  this_00 = &param_2->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)(local_38 + 8));
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(param_2->Getter).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar2 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (param_2->bIsSet == false) {
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    }
    else {
      pfVar3 = TAttribute<float>::Get(param_2);
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
      if (*pfVar3 != this->Value) {
        this->Value = *pfVar3;
        FSlateAttributeImpl::ProtectedInvalidateWidget
                  ((FSlateAttributeImpl *)this,param_1,Member,Layout);
        return true;
      }
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_38,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)(local_38 + 8));
    if ((*(int *)&(param_2->Getter).field_0x10 == 0) ||
       (plVar2 = *(longlong **)&(param_2->Getter).field_0x8, plVar2 == (longlong *)0x0)) {
      lVar4 = 0;
    }
    else {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x40))(plVar2,local_res18);
      lVar4 = *plVar2;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (local_38._0_8_ != lVar4) {
      local_res18[0].Ptr = ::operator_new(0x28);
      if (local_res18[0].Ptr == (ISlateAttributeGetter *)0x0) {
        local_res18[0].Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *(undefined8 *)(local_res18[0].Ptr + 1) = 0;
        *local_res18[0].Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__MU__TSlateAttributeInvalidationReason__00__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__MU__TSlateAttributeInvalidationReason__00__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        local_res18[0].Ptr[2] = (ISlateAttributeGetter)0x0;
        *(undefined4 *)(local_res18[0].Ptr + 3) = 0;
        TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)
                   (local_res18[0].Ptr + 1),this_00);
        local_res18[0].Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,local_res18);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_res18[0].Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_res18[0].Ptr + 0x20))(local_res18[0].Ptr,1);
      }
      return true;
    }
  }
  return false;
}

// Assign @ 1428d7e70

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<float> *param_2,ESlateAttributeBindAction param_3)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  char cVar1;
  bool bVar2;
  longlong *plVar3;
  float *pfVar4;
  longlong lVar5;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18 [2];
  undefined1 local_38 [32];
  
  this_00 = &param_2->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)(local_38 + 8));
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(param_2->Getter).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar3 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (param_2->bIsSet != false) {
      pfVar4 = TAttribute<float>::Get(param_2);
      bVar2 = Set(this,param_1,pfVar4);
      return bVar2;
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_38,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)(local_38 + 8));
    if ((*(int *)&(param_2->Getter).field_0x10 == 0) ||
       (plVar3 = *(longlong **)&(param_2->Getter).field_0x8, plVar3 == (longlong *)0x0)) {
      lVar5 = 0;
    }
    else {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3,local_res18);
      lVar5 = *plVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (local_38._0_8_ != lVar5) {
      local_res18[0].Ptr = ::operator_new(0x28);
      if (local_res18[0].Ptr == (ISlateAttributeGetter *)0x0) {
        local_res18[0].Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *(undefined8 *)(local_res18[0].Ptr + 1) = 0;
        *local_res18[0].Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__MU__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__MU__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        local_res18[0].Ptr[2] = (ISlateAttributeGetter)0x0;
        *(undefined4 *)(local_res18[0].Ptr + 3) = 0;
        TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)
                   (local_res18[0].Ptr + 1),this_00);
        local_res18[0].Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,local_res18);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_res18[0].Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_res18[0].Ptr + 0x20))(local_res18[0].Ptr,1);
      }
      return true;
    }
  }
  return false;
}

// Assign @ 1428d8000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<float> *param_2,ESlateAttributeBindAction param_3)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  TVariant<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar7;
  undefined1 auStack_a8 [32];
  FReadAccessScope local_88;
  TVariant<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_> local_70;
  TVariant<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_> local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_88);
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(param_2->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar1 + 0x38))();
    if (cVar3 != '\0') {
      bVar4 = true;
      goto LAB_1428d8058;
    }
  }
  bVar4 = false;
LAB_1428d8058:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_88);
  if (bVar4) {
    pTVar7 = TAttribute<float>::Steal(param_2,&local_70);
    if (pTVar7->TypeIndex != '\x01') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    bVar4 = AssignBinding(this,param_1,
                          (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)pTVar7,
                          param_3);
    if (1 < (ulonglong)local_70.TypeIndex) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    bVar4 = false;
  }
  else {
    pTVar7 = TAttribute<float>::Steal(param_2,&local_50);
    if (pTVar7->TypeIndex != '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    bVar4 = Set(this,param_1,(float *)pTVar7);
    if (1 < (ulonglong)local_50.TypeIndex) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50.TypeIndex])(&local_50);
  }
  return bVar4;
}

// Assign @ 1428d81e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<TOptional<int>_> *param_2,
        ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  TVariant<TOptional<int>,TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_b8;
  undefined1 local_b0 [40];
  FReadAccessScope local_88;
  TVariant<TOptional<int>,TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_70;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
             (FReadAccessScope *)(local_b0 + 0x10));
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar7 + 0x38))(), cVar2 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_b0 + 0x10));
  if (bVar3) {
    pTVar6 = TAttribute<TOptional<int>_>::Steal(param_2,&local_70);
    if ((pTVar6->TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_b0,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar6,&local_88);
    if (((int)pTVar6->_padding_ == 0) ||
       (plVar7 = (longlong *)pTVar6->_padding_, plVar7 == (longlong *)0x0)) {
      lVar8 = 0;
    }
    else {
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x40))(plVar7,local_b0 + 8);
      lVar8 = *plVar7;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (local_b0._0_8_ == lVar8) {
      bVar3 = false;
    }
    else {
      local_b8.Ptr = ::operator_new(0x28);
      if (local_b8.Ptr == (ISlateAttributeGetter *)0x0) {
        local_b8.Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *local_b8.Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__U__TOptional_H__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__U__TOptional_H__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_b8.Ptr + 1),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar6);
        local_b8.Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,&local_b8);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_b8.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_b8.Ptr + 0x20))(local_b8.Ptr,1);
      }
      bVar3 = true;
    }
    if ((1 < (ulonglong)local_70.TypeIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TOptional<int>,TDelegate<struct_TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
    return bVar3;
  }
  if (param_2->bIsSet == false) {
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    return false;
  }
  pTVar6 = TAttribute<TOptional<int>_>::Steal
                     (param_2,(TVariant<TOptional<int>,TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>_>
                               *)local_50);
  if ((pTVar6->TypeIndex != '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
  bVar3 = (this->Value).bIsSet;
  cVar2 = *(char *)((longlong)&pTVar6->_padding_ + 4);
  if (bVar3 == (bool)cVar2) {
    if (bVar3 == false) {
      bVar5 = false;
      goto LAB_1428d8453;
    }
    bVar5 = (this->Value).TypedValue != (int)pTVar6->_padding_;
    if (!bVar5) goto LAB_1428d8453;
  }
  else {
    bVar5 = true;
  }
  if (pTVar6 != (TVariant<TOptional<int>,TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>_>
                 *)this) {
    if (cVar2 == '\0') {
      if (bVar3 != false) {
        (this->Value).bIsSet = false;
      }
    }
    else {
      (this->Value).TypedValue = (int)pTVar6->_padding_;
      (this->Value).bIsSet = true;
    }
  }
  FSlateAttributeImpl::ProtectedInvalidateWidget((FSlateAttributeImpl *)this,param_1,Member,None);
LAB_1428d8453:
  if ((1 < (ulonglong)(byte)local_50[0x18]) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TOptional<int>,TDelegate<struct_TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_50[0x18]])(local_50);
  return bVar5;
}

// Assign @ 1428d84e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<UE::Math::TVector2<double>_> *param_2,
        ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  TVariant<UE::Math::TVector2<double>,TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_b8;
  undefined1 local_b0 [40];
  FReadAccessScope local_88;
  TVariant<UE::Math::TVector2<double>,TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_70;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
             (FReadAccessScope *)(local_b0 + 0x10));
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar7 + 0x38))();
    if (cVar2 != '\0') {
      bVar3 = true;
      goto LAB_1428d853b;
    }
  }
  bVar3 = false;
LAB_1428d853b:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_b0 + 0x10));
  if (bVar3) {
    pTVar6 = TAttribute<UE::Math::TVector2<double>_>::Steal(param_2,&local_70);
    if (pTVar6->TypeIndex != '\x01') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_b0,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar6,&local_88);
    if (((int)pTVar6->_padding_ == 0) ||
       (plVar7 = (longlong *)pTVar6->_padding_, plVar7 == (longlong *)0x0)) {
      lVar8 = 0;
    }
    else {
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x40))(plVar7,local_b0 + 8);
      lVar8 = *plVar7;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (local_b0._0_8_ == lVar8) {
      bVar3 = false;
    }
    else {
      local_b8.Ptr = ::operator_new(0x28);
      if (local_b8.Ptr == (ISlateAttributeGetter *)0x0) {
        local_b8.Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *local_b8.Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__U__TVector2_N_Math_UE__U__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__U__TVector2_N_Math_UE__U__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_b8.Ptr + 1),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar6);
        local_b8.Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,&local_b8);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_b8.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_b8.Ptr + 0x20))(local_b8.Ptr,1);
      }
      bVar3 = true;
    }
    if (1 < (ulonglong)local_70.TypeIndex) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Math::TVector2<double>,TDelegate<struct_UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    bVar3 = false;
  }
  else {
    pTVar6 = TAttribute<UE::Math::TVector2<double>_>::Steal
                       (param_2,(TVariant<UE::Math::TVector2<double>,TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
                                 *)local_50);
    if (pTVar6->TypeIndex != '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    bVar3 = Set(this,param_1,(TVector2<double> *)pTVar6);
    if (1 < (ulonglong)(byte)local_50[0x18]) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Math::TVector2<double>,TDelegate<struct_UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50[0x18]])(local_50);
  }
  return bVar3;
}

// Assign @ 1428d8780

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<UE::Math::TVector2<double>_> *param_2,
        ESlateAttributeBindAction param_3)

{
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  double dVar1;
  char cVar2;
  longlong *plVar3;
  TVector2<double> *pTVar4;
  longlong lVar5;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18 [2];
  undefined1 local_38 [32];
  
  this_00 = &param_2->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)(local_38 + 8));
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(param_2->Getter).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar3 + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (param_2->bIsSet == false) {
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    }
    else {
      pTVar4 = TAttribute<UE::Math::TVector2<double>_>::Get(param_2);
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
      if (((pTVar4->field0_0x0)._s_0.X != (this->Value).field0_0x0._s_0.X) ||
         ((pTVar4->field0_0x0)._s_0.Y != (this->Value).field0_0x0._s_0.Y)) {
        dVar1 = (pTVar4->field0_0x0)._s_0.Y;
        (this->Value).field0_0x0._s_0.X = (pTVar4->field0_0x0)._s_0.X;
        (this->Value).field0_0x0._s_0.Y = dVar1;
        FSlateAttributeImpl::ProtectedInvalidateWidget
                  ((FSlateAttributeImpl *)this,param_1,Member,Paint);
        return true;
      }
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_38,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)(local_38 + 8));
    if ((*(int *)&(param_2->Getter).field_0x10 == 0) ||
       (plVar3 = *(longlong **)&(param_2->Getter).field_0x8, plVar3 == (longlong *)0x0)) {
      lVar5 = 0;
    }
    else {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3,local_res18);
      lVar5 = *plVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (local_38._0_8_ != lVar5) {
      local_res18[0].Ptr = ::operator_new(0x28);
      if (local_res18[0].Ptr == (ISlateAttributeGetter *)0x0) {
        local_res18[0].Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *(undefined8 *)(local_res18[0].Ptr + 1) = 0;
        *local_res18[0].Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__U__TVector2_N_Math_UE__U__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__U__TVector2_N_Math_UE__U__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        local_res18[0].Ptr[2] = (ISlateAttributeGetter)0x0;
        *(undefined4 *)(local_res18[0].Ptr + 3) = 0;
        TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  ((TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *
                   )(local_res18[0].Ptr + 1),this_00);
        local_res18[0].Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,local_res18);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_res18[0].Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_res18[0].Ptr + 0x20))(local_res18[0].Ptr,1);
      }
      return true;
    }
  }
  return false;
}

// Assign @ 1428d8950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<UE::Math::TVector4<double>_> *param_2,
        ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  double dVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  TVariant<UE::Math::TVector4<double>,TDelegate<UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_108 [32];
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_e8;
  undefined1 local_e0 [40];
  FReadAccessScope local_b8;
  undefined1 local_98 [48];
  TVariant<UE::Math::TVector4<double>,TDelegate<UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_68;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
             (FReadAccessScope *)(local_e0 + 0x10));
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar8 = *(longlong **)&(param_2->Getter).field_0x8, plVar8 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar8 + 0x38))();
    if (cVar3 != '\0') {
      bVar4 = true;
      goto LAB_1428d89ab;
    }
  }
  bVar4 = false;
LAB_1428d89ab:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_e0 + 0x10));
  if (bVar4) {
    pTVar7 = TAttribute<UE::Math::TVector4<double>_>::Steal
                       (param_2,(TVariant<UE::Math::TVector4<double>,TDelegate<UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
                                 *)local_98);
    if (pTVar7->TypeIndex != '\x01') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_e0,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar7,&local_b8);
    if ((*(int *)&pTVar7->field_0x10 == 0) ||
       (plVar8 = *(longlong **)&pTVar7->field_0x8, plVar8 == (longlong *)0x0)) {
      lVar9 = 0;
    }
    else {
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x40))(plVar8,local_e0 + 8);
      lVar9 = *plVar8;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_b8);
    if (local_e0._0_8_ == lVar9) {
      bVar4 = false;
    }
    else {
      local_e8.Ptr = ::operator_new(0x28);
      if (local_e8.Ptr == (ISlateAttributeGetter *)0x0) {
        local_e8.Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *local_e8.Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__U__TVector4_N_Math_UE__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__U__TVector4_N_Math_UE__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_e8.Ptr + 1),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar7);
        local_e8.Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,&local_e8);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_e8.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_e8.Ptr + 0x20))(local_e8.Ptr,1);
      }
      bVar4 = true;
    }
    if (1 < (ulonglong)(byte)local_98[0x20]) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Math::TVector4<double>,TDelegate<struct_UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_98[0x20]])(local_98);
  }
  else if (param_2->bIsSet == false) {
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    bVar4 = false;
  }
  else {
    pTVar7 = TAttribute<UE::Math::TVector4<double>_>::Steal(param_2,&local_68);
    if (pTVar7->TypeIndex != '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    if ((((*(double *)pTVar7 == (this->Value).field0_0x0._s_0.X) &&
         (*(double *)&pTVar7->field_0x8 == (this->Value).field0_0x0._s_0.Y)) &&
        (*(double *)&pTVar7->field_0x10 == (this->Value).field0_0x0._s_0.Z)) &&
       (*(double *)&pTVar7->field_0x18 == (this->Value).field0_0x0._s_0.W)) {
      bVar4 = false;
    }
    else {
      dVar2 = *(double *)&pTVar7->field_0x8;
      (this->Value).field0_0x0.XYZW[0] = *(double *)pTVar7;
      (this->Value).field0_0x0._s_0.Y = dVar2;
      dVar2 = *(double *)&pTVar7->field_0x18;
      (this->Value).field0_0x0._s_0.Z = *(double *)&pTVar7->field_0x10;
      (this->Value).field0_0x0._s_0.W = dVar2;
      FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)this,param_1,Member,None);
      bVar4 = true;
    }
    if (1 < (ulonglong)local_68.TypeIndex) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Math::TVector4<double>,TDelegate<struct_UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_68.TypeIndex])(&local_68);
  }
  return bVar4;
}

// Assign @ 1428d8c40

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<FMargin> *param_2,ESlateAttributeBindAction param_3)

{
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  longlong *plVar5;
  FMargin *pFVar6;
  longlong lVar7;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18 [2];
  undefined1 local_38 [32];
  
  this_00 = &param_2->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)(local_38 + 8));
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(param_2->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar5 + 0x38))(), cVar4 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (param_2->bIsSet == false) {
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    }
    else {
      pFVar6 = TAttribute<FMargin>::Get(param_2);
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
      if (((pFVar6->Left != (this->Value).Left) || (pFVar6->Right != (this->Value).Right)) ||
         ((pFVar6->Top != (this->Value).Top || (pFVar6->Bottom != (this->Value).Bottom)))) {
        fVar1 = pFVar6->Top;
        fVar2 = pFVar6->Right;
        fVar3 = pFVar6->Bottom;
        (this->Value).Left = pFVar6->Left;
        (this->Value).Top = fVar1;
        (this->Value).Right = fVar2;
        (this->Value).Bottom = fVar3;
        FSlateAttributeImpl::ProtectedInvalidateWidget
                  ((FSlateAttributeImpl *)this,param_1,Member,Layout);
        return true;
      }
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_38,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)(local_38 + 8));
    if ((*(int *)&(param_2->Getter).field_0x10 == 0) ||
       (plVar5 = *(longlong **)&(param_2->Getter).field_0x8, plVar5 == (longlong *)0x0)) {
      lVar7 = 0;
    }
    else {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5,local_res18);
      lVar7 = *plVar5;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (local_38._0_8_ != lVar7) {
      local_res18[0].Ptr = ::operator_new(0x28);
      if (local_res18[0].Ptr == (ISlateAttributeGetter *)0x0) {
        local_res18[0].Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *(undefined8 *)(local_res18[0].Ptr + 1) = 0;
        *local_res18[0].Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__UFMargin__U__TSlateAttributeInvalidationReason__00__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__UFMargin__U__TSlateAttributeInvalidationReason__00__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        local_res18[0].Ptr[2] = (ISlateAttributeGetter)0x0;
        *(undefined4 *)(local_res18[0].Ptr + 3) = 0;
        TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)
                   (local_res18[0].Ptr + 1),this_00);
        local_res18[0].Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,local_res18);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_res18[0].Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_res18[0].Ptr + 0x20))(local_res18[0].Ptr,1);
      }
      return true;
    }
  }
  return false;
}

// Assign @ 1428d8e20

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,FOptionalSize,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<FOptionalSize> *param_2,ESlateAttributeBindAction param_3
        )

{
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  char cVar1;
  undefined8 *puVar2;
  ISlateAttributeGetter *pIVar3;
  ISlateAttributeGetter *pIVar4;
  longlong *plVar5;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18;
  undefined1 local_38 [32];
  
  this_00 = &param_2->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)(local_38 + 8));
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(param_2->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar5 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (param_2->bIsSet == false) {
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FReadAccessScope *)(local_38 + 8));
      if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
          (plVar5 = *(longlong **)&(param_2->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
         (cVar1 = (**(code **)(*plVar5 + 0x38))(), cVar1 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)(local_38 + 8));
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)(local_38 + 8));
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FReadAccessScope *)(local_38 + 8));
        if (*(int *)&(param_2->Getter).field_0x10 == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)&(param_2->Getter).field_0x8;
        }
        (**(code **)(*plVar5 + 0x60))(plVar5,&local_res18);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)(local_38 + 8));
        (param_2->Value).Size = local_res18.Ptr._0_4_;
      }
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
      if ((param_2->Value).Size != (this->Value).Size) {
        (this->Value).Size = (param_2->Value).Size;
        FSlateAttributeImpl::ProtectedInvalidateWidget
                  ((FSlateAttributeImpl *)this,param_1,Member,None);
        return true;
      }
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_38,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)(local_38 + 8));
    pIVar4 = (ISlateAttributeGetter *)0x0;
    pIVar3 = pIVar4;
    if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
       (plVar5 = *(longlong **)&(param_2->Getter).field_0x8, plVar5 != (longlong *)0x0)) {
      puVar2 = (undefined8 *)(**(code **)(*plVar5 + 0x40))(plVar5,&local_res18);
      pIVar3 = (ISlateAttributeGetter *)*puVar2;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if ((ISlateAttributeGetter *)local_38._0_8_ != pIVar3) {
      pIVar3 = ::operator_new(0x28);
      if (pIVar3 != (ISlateAttributeGetter *)0x0) {
        *pIVar3 = (ISlateAttributeGetter)
                  &
                  ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__UFOptionalSize__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__UFOptionalSize__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
        TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
                  ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)(pIVar3 + 1)
                   ,this_00);
        pIVar3[4] = (ISlateAttributeGetter)this;
        pIVar4 = pIVar3;
      }
      local_res18.Ptr = pIVar4;
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,&local_res18);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_res18.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_res18.Ptr + 0x20))(local_res18.Ptr,1);
      }
      return true;
    }
  }
  return false;
}

// Assign @ 1428d9050

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EStretch::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(void *this,SWidget *param_1,TAttribute<EStretch::Type> *param_2,
        ESlateAttributeBindAction param_3)

{
  TDelegate<EStretch::Type___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  char cVar1;
  bool bVar2;
  Type TVar3;
  undefined8 *puVar4;
  ISlateAttributeGetter *pIVar5;
  ISlateAttributeGetter *pIVar6;
  longlong *plVar7;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18;
  undefined1 local_38 [32];
  
  this_00 = &param_2->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)(local_38 + 8));
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar7 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (param_2->bIsSet != false) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FReadAccessScope *)(local_38 + 8));
      if (((*(int *)&(param_2->Getter).field_0x10 != 0) &&
          (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 != (longlong *)0x0)) &&
         (cVar1 = (**(code **)(*plVar7 + 0x38))(), cVar1 != '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)(local_38 + 8));
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FReadAccessScope *)(local_38 + 8));
        if (*(int *)&(param_2->Getter).field_0x10 == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)&(param_2->Getter).field_0x8;
        }
        TVar3 = (**(code **)(*plVar7 + 0x60))(plVar7);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)(local_38 + 8));
        param_2->Value = TVar3;
        bVar2 = Set(this,param_1,&param_2->Value);
        return bVar2;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 8));
      bVar2 = Set(this,param_1,&param_2->Value);
      return bVar2;
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute(this,param_1,Member);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    FSlateAttributeImpl::ProtectedFindGetterHandle
              (this,(SWidget *)local_38,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)(local_38 + 8));
    pIVar6 = (ISlateAttributeGetter *)0x0;
    pIVar5 = pIVar6;
    if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
       (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 != (longlong *)0x0)) {
      puVar4 = (undefined8 *)(**(code **)(*plVar7 + 0x40))(plVar7,&local_res18);
      pIVar5 = (ISlateAttributeGetter *)*puVar4;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if ((ISlateAttributeGetter *)local_38._0_8_ != pIVar5) {
      pIVar5 = ::operator_new(0x28);
      if (pIVar5 != (ISlateAttributeGetter *)0x0) {
        *pIVar5 = (ISlateAttributeGetter)
                  &
                  ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__W4Type_EStretch__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__W4Type_EStretch__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        TDelegate<enum_EStretch::Type___cdecl(void),FDefaultDelegateUserPolicy>::
        TDelegate<enum_EStretch::Type___cdecl(void),FDefaultDelegateUserPolicy>(pIVar5 + 1,this_00);
        pIVar5[4] = (ISlateAttributeGetter)this;
        pIVar6 = pIVar5;
      }
      local_res18.Ptr = pIVar6;
      FSlateAttributeImpl::ProtectedRegisterAttribute(this,param_1,Member,&local_res18);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow(this,param_1,Member);
      }
      if (local_res18.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_res18.Ptr + 0x20))(local_res18.Ptr,1);
      }
      return true;
    }
  }
  return false;
}

// Assign @ 1428d9260

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EStretchDirection::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(void *this,SWidget *param_1,TAttribute<EStretchDirection::Type> *param_2,
        ESlateAttributeBindAction param_3)

{
  TDelegate<EStretchDirection::Type___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  char cVar1;
  bool bVar2;
  Type TVar3;
  undefined8 *puVar4;
  ISlateAttributeGetter *pIVar5;
  ISlateAttributeGetter *pIVar6;
  longlong *plVar7;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18;
  undefined1 local_38 [32];
  
  this_00 = &param_2->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)(local_38 + 8));
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar7 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (param_2->bIsSet != false) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FReadAccessScope *)(local_38 + 8));
      if (((*(int *)&(param_2->Getter).field_0x10 != 0) &&
          (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 != (longlong *)0x0)) &&
         (cVar1 = (**(code **)(*plVar7 + 0x38))(), cVar1 != '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)(local_38 + 8));
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FReadAccessScope *)(local_38 + 8));
        if (*(int *)&(param_2->Getter).field_0x10 == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)&(param_2->Getter).field_0x8;
        }
        TVar3 = (**(code **)(*plVar7 + 0x60))(plVar7);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)(local_38 + 8));
        param_2->Value = TVar3;
        bVar2 = Set(this,param_1,&param_2->Value);
        return bVar2;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 8));
      bVar2 = Set(this,param_1,&param_2->Value);
      return bVar2;
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute(this,param_1,Member);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    FSlateAttributeImpl::ProtectedFindGetterHandle
              (this,(SWidget *)local_38,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)(local_38 + 8));
    pIVar6 = (ISlateAttributeGetter *)0x0;
    pIVar5 = pIVar6;
    if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
       (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 != (longlong *)0x0)) {
      puVar4 = (undefined8 *)(**(code **)(*plVar7 + 0x40))(plVar7,&local_res18);
      pIVar5 = (ISlateAttributeGetter *)*puVar4;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if ((ISlateAttributeGetter *)local_38._0_8_ != pIVar5) {
      pIVar5 = ::operator_new(0x28);
      if (pIVar5 != (ISlateAttributeGetter *)0x0) {
        *pIVar5 = (ISlateAttributeGetter)
                  &
                  ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__W4Type_EStretchDirection__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__W4Type_EStretchDirection__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        TDelegate<enum_EStretchDirection::Type___cdecl(void),FDefaultDelegateUserPolicy>::
        TDelegate<enum_EStretchDirection::Type___cdecl(void),FDefaultDelegateUserPolicy>
                  (pIVar5 + 1,this_00);
        pIVar5[4] = (ISlateAttributeGetter)this;
        pIVar6 = pIVar5;
      }
      local_res18.Ptr = pIVar6;
      FSlateAttributeImpl::ProtectedRegisterAttribute(this,param_1,Member,&local_res18);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow(this,param_1,Member);
      }
      if (local_res18.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_res18.Ptr + 0x20))(local_res18.Ptr,1);
      }
      return true;
    }
  }
  return false;
}

// Assign @ 1428d9470

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<bool> *param_2,ESlateAttributeBindAction param_3)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  char cVar1;
  longlong *plVar2;
  bool *pbVar3;
  longlong lVar4;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18 [2];
  undefined1 local_38 [32];
  
  this_00 = &param_2->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)(local_38 + 8));
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(param_2->Getter).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar2 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (param_2->bIsSet != false) {
      pbVar3 = TAttribute<bool>::Get(param_2);
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
      if (this->Value == *pbVar3) {
        return false;
      }
      this->Value = *pbVar3;
      FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)this,param_1,Member,Paint);
      return true;
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_38,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)(local_38 + 8));
    if ((*(int *)&(param_2->Getter).field_0x10 == 0) ||
       (plVar2 = *(longlong **)&(param_2->Getter).field_0x8, plVar2 == (longlong *)0x0)) {
      lVar4 = 0;
    }
    else {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x40))(plVar2,local_res18);
      lVar4 = *plVar2;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (local_38._0_8_ != lVar4) {
      local_res18[0].Ptr = ::operator_new(0x28);
      if (local_res18[0].Ptr == (ISlateAttributeGetter *)0x0) {
        local_res18[0].Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *(undefined8 *)(local_res18[0].Ptr + 1) = 0;
        *local_res18[0].Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget___NU__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget___NU__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        local_res18[0].Ptr[2] = (ISlateAttributeGetter)0x0;
        *(undefined4 *)(local_res18[0].Ptr + 3) = 0;
        TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)
                   (local_res18[0].Ptr + 1),this_00);
        local_res18[0].Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,local_res18);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_res18[0].Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_res18[0].Ptr + 0x20))(local_res18[0].Ptr,1);
      }
      return true;
    }
  }
  return false;
}

// AssignBinding @ 1428d9630

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::AssignBinding(TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                *this,SWidget *param_1,
               TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
               ESlateAttributeBindAction param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18 [2];
  undefined1 local_38 [32];
  
  FSlateAttributeImpl::ProtectedFindGetterHandle
            ((FSlateAttributeImpl *)this,(SWidget *)local_38,(ESlateAttributeType)param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
             (FReadAccessScope *)(local_38 + 8));
  if ((*(int *)&param_2->field_0x10 == 0) ||
     (plVar2 = *(longlong **)&param_2->field_0x8, plVar2 == (longlong *)0x0)) {
    lVar3 = 0;
  }
  else {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x40))(plVar2,local_res18);
    lVar3 = *plVar2;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_38 + 8));
  if (local_38._0_8_ == lVar3) {
    bVar1 = false;
  }
  else {
    local_res18[0].Ptr = ::operator_new(0x28);
    if (local_res18[0].Ptr == (ISlateAttributeGetter *)0x0) {
      local_res18[0].Ptr = (ISlateAttributeGetter *)0x0;
    }
    else {
      *local_res18[0].Ptr =
           (ISlateAttributeGetter)
           &
           ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__MUFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__MUFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
      ;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_res18[0].Ptr + 1),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
      local_res18[0].Ptr[4] = (ISlateAttributeGetter)this;
    }
    FSlateAttributeImpl::ProtectedRegisterAttribute
              ((FSlateAttributeImpl *)this,param_1,Member,local_res18);
    if ((param_3 & Initialize) != None) {
      FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
    }
    if (local_res18[0].Ptr != (ISlateAttributeGetter *)0x0) {
      (**(code **)((longlong)*local_res18[0].Ptr + 0x20))(local_res18[0].Ptr,1);
    }
    bVar1 = true;
  }
  return bVar1;
}

// AssignBinding @ 1428d9730

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::AssignBinding(TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                *this,SWidget *param_1,
               TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
               ESlateAttributeBindAction param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18 [2];
  undefined1 local_38 [32];
  
  FSlateAttributeImpl::ProtectedFindGetterHandle
            ((FSlateAttributeImpl *)this,(SWidget *)local_38,(ESlateAttributeType)param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
             (FReadAccessScope *)(local_38 + 8));
  if ((*(int *)&param_2->field_0x10 == 0) ||
     (plVar2 = *(longlong **)&param_2->field_0x8, plVar2 == (longlong *)0x0)) {
    lVar3 = 0;
  }
  else {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x40))(plVar2,local_res18);
    lVar3 = *plVar2;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_38 + 8));
  if (local_38._0_8_ == lVar3) {
    bVar1 = false;
  }
  else {
    local_res18[0].Ptr = ::operator_new(0x28);
    if (local_res18[0].Ptr == (ISlateAttributeGetter *)0x0) {
      local_res18[0].Ptr = (ISlateAttributeGetter *)0x0;
    }
    else {
      *(undefined8 *)(local_res18[0].Ptr + 1) = 0;
      *local_res18[0].Ptr =
           (ISlateAttributeGetter)
           &
           ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__MUFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__MUFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
      ;
      local_res18[0].Ptr[2] = (ISlateAttributeGetter)0x0;
      *(undefined4 *)(local_res18[0].Ptr + 3) = 0;
      TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)
                 (local_res18[0].Ptr + 1),param_2);
      local_res18[0].Ptr[4] = (ISlateAttributeGetter)this;
    }
    FSlateAttributeImpl::ProtectedRegisterAttribute
              ((FSlateAttributeImpl *)this,param_1,Member,local_res18);
    if ((param_3 & Initialize) != None) {
      FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
    }
    if (local_res18[0].Ptr != (ISlateAttributeGetter *)0x0) {
      (**(code **)((longlong)*local_res18[0].Ptr + 0x20))(local_res18[0].Ptr,1);
    }
    bVar1 = true;
  }
  return bVar1;
}

// AssignBinding @ 1428d9850

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::AssignBinding(TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                *this,SWidget *param_1,
               TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
               ESlateAttributeBindAction param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18 [2];
  undefined1 local_38 [32];
  
  FSlateAttributeImpl::ProtectedFindGetterHandle
            ((FSlateAttributeImpl *)this,(SWidget *)local_38,(ESlateAttributeType)param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
             (FReadAccessScope *)(local_38 + 8));
  if ((*(int *)&param_2->field_0x10 == 0) ||
     (plVar2 = *(longlong **)&param_2->field_0x8, plVar2 == (longlong *)0x0)) {
    lVar3 = 0;
  }
  else {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x40))(plVar2,local_res18);
    lVar3 = *plVar2;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_38 + 8));
  if (local_38._0_8_ == lVar3) {
    bVar1 = false;
  }
  else {
    local_res18[0].Ptr = ::operator_new(0x28);
    if (local_res18[0].Ptr == (ISlateAttributeGetter *)0x0) {
      local_res18[0].Ptr = (ISlateAttributeGetter *)0x0;
    }
    else {
      *(undefined8 *)(local_res18[0].Ptr + 1) = 0;
      *local_res18[0].Ptr =
           (ISlateAttributeGetter)
           &
           ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget___NUFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget___NUFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
      ;
      local_res18[0].Ptr[2] = (ISlateAttributeGetter)0x0;
      *(undefined4 *)(local_res18[0].Ptr + 3) = 0;
      TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)
                 (local_res18[0].Ptr + 1),param_2);
      local_res18[0].Ptr[4] = (ISlateAttributeGetter)this;
    }
    FSlateAttributeImpl::ProtectedRegisterAttribute
              ((FSlateAttributeImpl *)this,param_1,Member,local_res18);
    if ((param_3 & Initialize) != None) {
      FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
    }
    if (local_res18[0].Ptr != (ISlateAttributeGetter *)0x0) {
      (**(code **)((longlong)*local_res18[0].Ptr + 0x20))(local_res18[0].Ptr,1);
    }
    bVar1 = true;
  }
  return bVar1;
}

// Set @ 14298dd10

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Set(TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      *this,SWidget *param_1,float *param_2)

{
  FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
  if (*param_2 == this->Value) {
    return false;
  }
  this->Value = *param_2;
  FSlateAttributeImpl::ProtectedInvalidateWidget((FSlateAttributeImpl *)this,param_1,Member,Paint);
  return true;
}

// Set @ 14298dd80

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Set(TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      *this,SWidget *param_1,float *param_2)

{
  FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
  if (*param_2 == this->Value) {
    return false;
  }
  this->Value = *param_2;
  FSlateAttributeImpl::ProtectedInvalidateWidget((FSlateAttributeImpl *)this,param_1,Member,None);
  return true;
}

// Set @ 14298ddf0

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Set(TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      *this,SWidget *param_1,TVector2<double> *param_2)

{
  double dVar1;
  
  FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
  if (((param_2->field0_0x0)._s_0.X == (this->Value).field0_0x0._s_0.X) &&
     ((param_2->field0_0x0)._s_0.Y == (this->Value).field0_0x0._s_0.Y)) {
    return false;
  }
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (this->Value).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->Value).field0_0x0._s_0.Y = dVar1;
  FSlateAttributeImpl::ProtectedInvalidateWidget((FSlateAttributeImpl *)this,param_1,Member,Paint);
  return true;
}

// Set @ 14298de70

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EStretch::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Set(void *this,SWidget *param_1,Type *param_2)

{
  Type TVar1;
  Type TVar2;
  
  FSlateAttributeImpl::ProtectedUnregisterAttribute(this,param_1,Member);
  TVar1 = *param_2;
  TVar2 = *(Type *)this;
  if (TVar2 != TVar1) {
    *(Type *)this = TVar1;
    FSlateAttributeImpl::ProtectedInvalidateWidget(this,param_1,Member,None);
  }
  return TVar2 != TVar1;
}

// Set @ 14298ded0

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EStretchDirection::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Set(void *this,SWidget *param_1,Type *param_2)

{
  Type TVar1;
  Type TVar2;
  
  FSlateAttributeImpl::ProtectedUnregisterAttribute(this,param_1,Member);
  TVar1 = *param_2;
  TVar2 = *(Type *)this;
  if (TVar2 != TVar1) {
    *(Type *)this = TVar1;
    FSlateAttributeImpl::ProtectedInvalidateWidget(this,param_1,Member,None);
  }
  return TVar2 != TVar1;
}

// Set @ 14298df30

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Set(TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      *this,SWidget *param_1,bool *param_2)

{
  bool bVar1;
  bool bVar2;
  
  FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
  bVar1 = *param_2;
  bVar2 = this->Value != bVar1;
  if (bVar2) {
    this->Value = bVar1;
    FSlateAttributeImpl::ProtectedInvalidateWidget((FSlateAttributeImpl *)this,param_1,Member,None);
  }
  return bVar2;
}

// Assign @ 1429c8810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::Assign(TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
         *this,ISlateAttributeContainer *param_1,TAttribute<UE::Math::TVector2<double>_> *param_2,
        ESlateAttributeBindAction param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  TVariant<UE::Math::TVector2<double>,TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar10;
  ISlateAttributeContainer *pIVar11;
  ISlateAttributeContainer IVar12;
  undefined1 auStack_d8 [32];
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_b8;
  ISlateAttributeContainer local_b0;
  undefined1 local_a8 [8];
  FReadAccessScope local_a0;
  FReadAccessScope local_88;
  TVariant<UE::Math::TVector2<double>,TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_70;
  TVariant<UE::Math::TVector2<double>,TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_a0);
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(param_2->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar6 = (**(code **)(*plVar1 + 0x38))();
    if (cVar6 != '\0') {
      bVar7 = true;
      goto LAB_1429c886b;
    }
  }
  bVar7 = false;
LAB_1429c886b:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a0);
  if (bVar7) {
    pTVar10 = TAttribute<UE::Math::TVector2<double>_>::Steal(param_2,&local_70);
    if (pTVar10->TypeIndex != '\x01') {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
    }
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,&local_b0,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar10,&local_88);
    if (((int)pTVar10->_padding_ == 0) ||
       (plVar1 = (longlong *)pTVar10->_padding_, plVar1 == (longlong *)0x0)) {
      IVar12 = (ISlateAttributeContainer)0x0;
    }
    else {
      pIVar11 = (ISlateAttributeContainer *)(**(code **)(*plVar1 + 0x40))(plVar1,local_a8);
      IVar12 = *pIVar11;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (local_b0 == IVar12) {
      bVar7 = false;
    }
    else {
      local_b8.Ptr = ::operator_new(0x28);
      if (local_b8.Ptr == (ISlateAttributeGetter *)0x0) {
        local_b8.Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *local_b8.Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VISlateAttributeContainer_SlateAttributePrivate__U__TVector2_N_Math_UE__UFSlateAttributeNoInvalidationReason_2_U__TSlateAttributeComparePredicate_U__TEqualTo_X_____01_SlateAttributePrivate_____TSlateAttributeBase_VISlateAttributeContainer_SlateAttributePrivate__U__TVector2_N_Math_UE__UFSlateAttributeNoInvalidationReason_2_U__TSlateAttributeComparePredicate_U__TEqualTo_X_____01_SlateAttributePrivate__6B_
        ;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_b8.Ptr + 1),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar10);
        local_b8.Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Contained,&local_b8);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Contained);
      }
      if (local_b8.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_b8.Ptr + 0x20))(local_b8.Ptr,1);
      }
      bVar7 = true;
    }
    if (1 < (ulonglong)local_70.TypeIndex) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Math::TVector2<double>,TDelegate<struct_UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Contained)
    ;
    bVar7 = false;
  }
  else {
    pTVar10 = TAttribute<UE::Math::TVector2<double>_>::Steal(param_2,&local_50);
    if (pTVar10->TypeIndex != '\0') {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Contained)
    ;
    (**(code **)*param_1)(param_1);
    if (((double)pTVar10->_padding_ == (this->Value).field0_0x0._s_0.X) &&
       ((double)pTVar10->_padding_ == (this->Value).field0_0x0._s_0.Y)) {
      bVar7 = false;
    }
    else {
      uVar3 = *(undefined4 *)((longlong)&pTVar10->_padding_ + 4);
      lVar5 = pTVar10->_padding_;
      uVar4 = *(undefined4 *)((longlong)&pTVar10->_padding_ + 4);
      *(int *)&(this->Value).field0_0x0 = (int)pTVar10->_padding_;
      *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 4) = uVar3;
      *(int *)((longlong)&(this->Value).field0_0x0 + 8) = (int)lVar5;
      *(undefined4 *)((longlong)&(this->Value).field0_0x0 + 0xc) = uVar4;
      (**(code **)*param_1)(param_1);
      FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)this,param_1,Contained,None);
      bVar7 = true;
    }
    if (1 < (ulonglong)local_50.TypeIndex) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Math::TVector2<double>,TDelegate<struct_UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50.TypeIndex])(&local_50);
  }
  return bVar7;
}

// Assign @ 1429c8af0

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<int> *param_2,ESlateAttributeBindAction param_3)

{
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  char cVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18 [2];
  undefined1 local_38 [32];
  
  this_00 = &param_2->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)(local_38 + 8));
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(param_2->Getter).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar2 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (param_2->bIsSet != false) {
      piVar3 = TAttribute<int>::Get(param_2);
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
      if (this->Value == *piVar3) {
        return false;
      }
      this->Value = *piVar3;
      FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)this,param_1,Member,None);
      return true;
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_38,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)(local_38 + 8));
    if ((*(int *)&(param_2->Getter).field_0x10 == 0) ||
       (plVar2 = *(longlong **)&(param_2->Getter).field_0x8, plVar2 == (longlong *)0x0)) {
      lVar4 = 0;
    }
    else {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x40))(plVar2,local_res18);
      lVar4 = *plVar2;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (local_38._0_8_ != lVar4) {
      local_res18[0].Ptr = ::operator_new(0x28);
      if (local_res18[0].Ptr == (ISlateAttributeGetter *)0x0) {
        local_res18[0].Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *(undefined8 *)(local_res18[0].Ptr + 1) = 0;
        *local_res18[0].Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__HUFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__HUFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        local_res18[0].Ptr[2] = (ISlateAttributeGetter)0x0;
        *(undefined4 *)(local_res18[0].Ptr + 3) = 0;
        TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  ((TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *)
                   (local_res18[0].Ptr + 1),this_00);
        local_res18[0].Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,local_res18);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_res18[0].Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_res18[0].Ptr + 0x20))(local_res18[0].Ptr,1);
      }
      return true;
    }
  }
  return false;
}

// Assign @ 1429c8cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<float> *param_2,ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  TVariant<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_b8;
  undefined1 local_b0 [40];
  FReadAccessScope local_88;
  TVariant<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_> local_70;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
             (FReadAccessScope *)(local_b0 + 0x10));
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar7 + 0x38))(), cVar2 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_b0 + 0x10));
  if (bVar3) {
    pTVar6 = TAttribute<float>::Steal(param_2,&local_70);
    if ((pTVar6->TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_b0,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar6,&local_88);
    if (((int)pTVar6->_padding_ == 0) ||
       (plVar7 = (longlong *)pTVar6->_padding_, plVar7 == (longlong *)0x0)) {
      lVar8 = 0;
    }
    else {
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x40))(plVar7,local_b0 + 8);
      lVar8 = *plVar7;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (local_b0._0_8_ == lVar8) {
      bVar3 = false;
    }
    else {
      local_b8.Ptr = ::operator_new(0x28);
      if (local_b8.Ptr == (ISlateAttributeGetter *)0x0) {
        local_b8.Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *local_b8.Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__MU__TSlateAttributeInvalidationReason__00__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__MU__TSlateAttributeInvalidationReason__00__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_b8.Ptr + 1),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar6);
        local_b8.Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,&local_b8);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_b8.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_b8.Ptr + 0x20))(local_b8.Ptr,1);
      }
      bVar3 = true;
    }
    if ((1 < (ulonglong)local_70.TypeIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    bVar3 = false;
  }
  else {
    pTVar6 = TAttribute<float>::Steal
                       (param_2,(TVariant<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_>
                                 *)local_50);
    if ((pTVar6->TypeIndex != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    bVar3 = *(float *)&pTVar6->_padding_ != this->Value;
    if (bVar3) {
      this->Value = *(float *)&pTVar6->_padding_;
      FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)this,param_1,Member,Layout);
    }
    if ((1 < (ulonglong)(byte)local_50[0x18]) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50[0x18]])(local_50);
  }
  return bVar3;
}

// Assign @ 1429c8f80

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<UE::Math::TVector2<double>_> *param_2,
        ESlateAttributeBindAction param_3)

{
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  double dVar1;
  char cVar2;
  longlong *plVar3;
  TVector2<double> *pTVar4;
  longlong lVar5;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18 [2];
  undefined1 local_38 [32];
  
  this_00 = &param_2->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)(local_38 + 8));
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(param_2->Getter).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar3 + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (param_2->bIsSet == false) {
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    }
    else {
      pTVar4 = TAttribute<UE::Math::TVector2<double>_>::Get(param_2);
      FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
      if (((pTVar4->field0_0x0)._s_0.X != (this->Value).field0_0x0._s_0.X) ||
         ((pTVar4->field0_0x0)._s_0.Y != (this->Value).field0_0x0._s_0.Y)) {
        dVar1 = (pTVar4->field0_0x0)._s_0.Y;
        (this->Value).field0_0x0._s_0.X = (pTVar4->field0_0x0)._s_0.X;
        (this->Value).field0_0x0._s_0.Y = dVar1;
        FSlateAttributeImpl::ProtectedInvalidateWidget
                  ((FSlateAttributeImpl *)this,param_1,Member,Layout);
        return true;
      }
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_38,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)(local_38 + 8));
    if ((*(int *)&(param_2->Getter).field_0x10 == 0) ||
       (plVar3 = *(longlong **)&(param_2->Getter).field_0x8, plVar3 == (longlong *)0x0)) {
      lVar5 = 0;
    }
    else {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3,local_res18);
      lVar5 = *plVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (local_38._0_8_ != lVar5) {
      local_res18[0].Ptr = ::operator_new(0x28);
      if (local_res18[0].Ptr == (ISlateAttributeGetter *)0x0) {
        local_res18[0].Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *(undefined8 *)(local_res18[0].Ptr + 1) = 0;
        *local_res18[0].Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__U__TVector2_N_Math_UE__U__TSlateAttributeInvalidationReason__00__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__U__TVector2_N_Math_UE__U__TSlateAttributeInvalidationReason__00__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        local_res18[0].Ptr[2] = (ISlateAttributeGetter)0x0;
        *(undefined4 *)(local_res18[0].Ptr + 3) = 0;
        TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  ((TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *
                   )(local_res18[0].Ptr + 1),this_00);
        local_res18[0].Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,local_res18);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_res18[0].Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_res18[0].Ptr + 0x20))(local_res18[0].Ptr,1);
      }
      return true;
    }
  }
  return false;
}

// Assign @ 1429c9150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<FMargin> *param_2,ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  TVariant<FMargin,TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_d8 [32];
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_b8;
  undefined1 local_b0 [40];
  FReadAccessScope local_88;
  TVariant<FMargin,TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>_> local_70;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
             (FReadAccessScope *)(local_b0 + 0x10));
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar10 = *(longlong **)&(param_2->Getter).field_0x8, plVar10 != (longlong *)0x0)) {
    cVar5 = (**(code **)(*plVar10 + 0x38))();
    if (cVar5 != '\0') {
      bVar6 = true;
      goto LAB_1429c91ab;
    }
  }
  bVar6 = false;
LAB_1429c91ab:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_b0 + 0x10));
  if (bVar6) {
    pTVar9 = TAttribute<FMargin>::Steal(param_2,&local_70);
    if (pTVar9->TypeIndex != '\x01') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
    }
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_b0,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar9,&local_88);
    if (((int)pTVar9->_padding_ == 0) ||
       (plVar10 = (longlong *)pTVar9->_padding_, plVar10 == (longlong *)0x0)) {
      lVar11 = 0;
    }
    else {
      plVar10 = (longlong *)(**(code **)(*plVar10 + 0x40))(plVar10,local_b0 + 8);
      lVar11 = *plVar10;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (local_b0._0_8_ == lVar11) {
      bVar6 = false;
    }
    else {
      local_b8.Ptr = ::operator_new(0x28);
      if (local_b8.Ptr == (ISlateAttributeGetter *)0x0) {
        local_b8.Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *local_b8.Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__UFMargin__U__TSlateAttributeInvalidationReason__00__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__UFMargin__U__TSlateAttributeInvalidationReason__00__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_b8.Ptr + 1),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar9);
        local_b8.Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,&local_b8);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_b8.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_b8.Ptr + 0x20))(local_b8.Ptr,1);
      }
      bVar6 = true;
    }
    if (1 < (ulonglong)local_70.TypeIndex) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar8) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMargin,TDelegate<struct_FMargin___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    bVar6 = false;
  }
  else {
    pTVar9 = TAttribute<FMargin>::Steal
                       (param_2,(TVariant<FMargin,TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>_>
                                 *)local_50);
    if (pTVar9->TypeIndex != '\0') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    if ((((*(float *)&pTVar9->_padding_ == (this->Value).Left) &&
         (*(float *)&pTVar9->_padding_ == (this->Value).Right)) &&
        (*(float *)((longlong)&pTVar9->_padding_ + 4) == (this->Value).Top)) &&
       (*(float *)((longlong)&pTVar9->_padding_ + 4) == (this->Value).Bottom)) {
      bVar6 = false;
    }
    else {
      uVar2 = *(undefined4 *)((longlong)&pTVar9->_padding_ + 4);
      uVar3 = *(undefined4 *)&pTVar9->_padding_;
      uVar4 = *(undefined4 *)((longlong)&pTVar9->_padding_ + 4);
      (this->Value).Left = (float)*(undefined4 *)&pTVar9->_padding_;
      (this->Value).Top = (float)uVar2;
      (this->Value).Right = (float)uVar3;
      (this->Value).Bottom = (float)uVar4;
      FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)this,param_1,Member,Layout);
      bVar6 = true;
    }
    if (1 < (ulonglong)(byte)local_50[0x18]) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar8) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMargin,TDelegate<struct_FMargin___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50[0x18]])(local_50);
  }
  return bVar6;
}

// Assign @ 1429c9440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,FSlateFontInfo,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<FSlateFontInfo> *param_2,
        ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  TVariant<FSlateFontInfo,TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_168 [32];
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_148;
  undefined1 local_140 [40];
  FReadAccessScope local_118;
  TVariant<FSlateFontInfo,TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_100;
  TVariant<FSlateFontInfo,TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_98;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_168;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
             (FReadAccessScope *)(local_140 + 0x10));
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar7 + 0x38))();
    if (cVar2 != '\0') {
      bVar3 = true;
      goto LAB_1429c949b;
    }
  }
  bVar3 = false;
LAB_1429c949b:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_140 + 0x10));
  if (bVar3) {
    pTVar6 = TAttribute<FSlateFontInfo>::Steal(param_2,&local_100);
    if (pTVar6->TypeIndex != '\x01') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_140,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar6,&local_118);
    if (((int)pTVar6->_padding_ == 0) ||
       (plVar7 = (longlong *)pTVar6->_padding_, plVar7 == (longlong *)0x0)) {
      lVar8 = 0;
    }
    else {
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x40))(plVar7,local_140 + 8);
      lVar8 = *plVar7;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_118);
    if (local_140._0_8_ == lVar8) {
      bVar3 = false;
    }
    else {
      local_148.Ptr = ::operator_new(0x28);
      if (local_148.Ptr == (ISlateAttributeGetter *)0x0) {
        local_148.Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *local_148.Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__UFSlateFontInfo__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__UFSlateFontInfo__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_148.Ptr + 1),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar6);
        local_148.Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,&local_148);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_148.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_148.Ptr + 0x20))(local_148.Ptr,1);
      }
      bVar3 = true;
    }
    if (1 < (ulonglong)local_100.TypeIndex) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSlateFontInfo,TDelegate<struct_FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_100.TypeIndex])(&local_100);
  }
  else if (param_2->bIsSet == false) {
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    bVar3 = false;
  }
  else {
    pTVar6 = TAttribute<FSlateFontInfo>::Steal(param_2,&local_98);
    if (pTVar6->TypeIndex != '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    bVar3 = FSlateFontInfo::IsIdenticalTo(&this->Value,(FSlateFontInfo *)pTVar6);
    if (!bVar3) {
      FSlateFontInfo::operator=(&this->Value,(FSlateFontInfo *)pTVar6);
      FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)this,param_1,Member,None);
    }
    bVar3 = !bVar3;
    if (1 < (ulonglong)local_98.TypeIndex) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSlateFontInfo,TDelegate<struct_FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_98.TypeIndex])(&local_98);
  }
  return bVar3;
}

// Assign @ 1429c9710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>
::Assign(TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>
         *this,SWidget *param_1,TAttribute<FText> *param_2,ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  TVariant<FText,TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_b8;
  undefined1 local_b0 [40];
  FReadAccessScope local_88;
  TVariant<FText,TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>_> local_70;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
             (FReadAccessScope *)(local_b0 + 0x10));
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar7 + 0x38))();
    if (cVar2 != '\0') {
      bVar3 = true;
      goto LAB_1429c976b;
    }
  }
  bVar3 = false;
LAB_1429c976b:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_b0 + 0x10));
  if (bVar3) {
    pTVar6 = TAttribute<FText>::Steal(param_2,&local_70);
    if (pTVar6->TypeIndex != '\x01') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_b0,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar6,&local_88);
    if (((int)pTVar6->_padding_ == 0) ||
       (plVar7 = (longlong *)pTVar6->_padding_, plVar7 == (longlong *)0x0)) {
      lVar8 = 0;
    }
    else {
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x40))(plVar7,local_b0 + 8);
      lVar8 = *plVar7;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (local_b0._0_8_ == lVar8) {
      bVar3 = false;
    }
    else {
      local_b8.Ptr = ::operator_new(0x28);
      if (local_b8.Ptr == (ISlateAttributeGetter *)0x0) {
        local_b8.Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *local_b8.Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__VFText__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__UTSlateAttributeFTextComparePredicate___0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__VFText__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__UTSlateAttributeFTextComparePredicate___0A__SlateAttributePrivate__6B_
        ;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_b8.Ptr + 1),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar6);
        local_b8.Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute
                ((FSlateAttributeImpl *)this,param_1,Member,&local_b8);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
      }
      if (local_b8.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_b8.Ptr + 0x20))(local_b8.Ptr,1);
      }
      bVar3 = true;
    }
    if (1 < (ulonglong)local_70.TypeIndex) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FText,TDelegate<class_FText___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    bVar3 = false;
  }
  else {
    pTVar6 = TAttribute<FText>::Steal
                       (param_2,(TVariant<FText,TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>_>
                                 *)local_50);
    if (pTVar6->TypeIndex != '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    bVar3 = FText::IdenticalTo(&this->Value,(FText *)pTVar6,LexicalCompareInvariants|DeepCompare);
    if (!bVar3) {
      FText::operator=(&this->Value,(FText *)pTVar6);
      FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)this,param_1,Member,None);
    }
    bVar3 = !bVar3;
    if (1 < (ulonglong)(byte)local_50[0x18]) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FText,TDelegate<class_FText___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50[0x18]])(local_50);
  }
  return bVar3;
}

// Assign @ 1429c99e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EHorizontalAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(void *this,SWidget *param_1,TAttribute<EHorizontalAlignment> *param_2,
        ESlateAttributeBindAction param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  TVariant<EHorizontalAlignment,TDelegate<EHorizontalAlignment___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_b8;
  undefined1 local_b0 [40];
  FReadAccessScope local_88;
  TVariant<EHorizontalAlignment,TDelegate<EHorizontalAlignment___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_70;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
             (FReadAccessScope *)(local_b0 + 0x10));
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar8 = *(longlong **)&(param_2->Getter).field_0x8, plVar8 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar8 + 0x38))();
    if (cVar3 != '\0') {
      bVar4 = true;
      goto LAB_1429c9a3b;
    }
  }
  bVar4 = false;
LAB_1429c9a3b:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_b0 + 0x10));
  if (bVar4) {
    pTVar7 = TAttribute<enum_EHorizontalAlignment>::Steal(param_2,&local_70);
    if (pTVar7->TypeIndex != '\x01') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    FSlateAttributeImpl::ProtectedFindGetterHandle
              (this,(SWidget *)local_b0,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar7,&local_88);
    if (((int)pTVar7->_padding_ == 0) ||
       (plVar8 = (longlong *)pTVar7->_padding_, plVar8 == (longlong *)0x0)) {
      lVar9 = 0;
    }
    else {
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x40))(plVar8,local_b0 + 8);
      lVar9 = *plVar8;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (local_b0._0_8_ == lVar9) {
      bVar4 = false;
    }
    else {
      local_b8.Ptr = ::operator_new(0x28);
      if (local_b8.Ptr == (ISlateAttributeGetter *)0x0) {
        local_b8.Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *local_b8.Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__W4EHorizontalAlignment__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__W4EHorizontalAlignment__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_b8.Ptr + 1),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar7);
        local_b8.Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute(this,param_1,Member,&local_b8);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow(this,param_1,Member);
      }
      if (local_b8.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_b8.Ptr + 0x20))(local_b8.Ptr,1);
      }
      bVar4 = true;
    }
    if (1 < (ulonglong)local_70.TypeIndex) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<EHorizontalAlignment,TDelegate<enum_EHorizontalAlignment___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    FSlateAttributeImpl::ProtectedUnregisterAttribute(this,param_1,Member);
    bVar4 = false;
  }
  else {
    pTVar7 = TAttribute<enum_EHorizontalAlignment>::Steal
                       (param_2,(TVariant<EHorizontalAlignment,TDelegate<EHorizontalAlignment___cdecl(void),FDefaultDelegateUserPolicy>_>
                                 *)local_50);
    if (pTVar7->TypeIndex != '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute(this,param_1,Member);
    iVar1 = (int)pTVar7->_padding_;
    bVar4 = *(int *)this != iVar1;
    if (bVar4) {
      *(int *)this = iVar1;
      FSlateAttributeImpl::ProtectedInvalidateWidget(this,param_1,Member,None);
    }
    if (1 < (ulonglong)(byte)local_50[0x18]) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<EHorizontalAlignment,TDelegate<enum_EHorizontalAlignment___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50[0x18]])(local_50);
  }
  return bVar4;
}

// Assign @ 1429c9ca0

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EHorizontalAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(void *this,SWidget *param_1,TAttribute<EHorizontalAlignment> *param_2,
        ESlateAttributeBindAction param_3)

{
  TDelegate<EHorizontalAlignment___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  char cVar1;
  EHorizontalAlignment EVar2;
  undefined8 *puVar3;
  ISlateAttributeGetter *pIVar4;
  ISlateAttributeGetter *pIVar5;
  longlong *plVar6;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18;
  undefined1 local_38 [32];
  
  this_00 = &param_2->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)(local_38 + 8));
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar6 = *(longlong **)&(param_2->Getter).field_0x8, plVar6 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar6 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (param_2->bIsSet != false) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FReadAccessScope *)(local_38 + 8));
      if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
          (plVar6 = *(longlong **)&(param_2->Getter).field_0x8, plVar6 == (longlong *)0x0)) ||
         (cVar1 = (**(code **)(*plVar6 + 0x38))(), cVar1 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)(local_38 + 8));
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)(local_38 + 8));
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FReadAccessScope *)(local_38 + 8));
        if (*(int *)&(param_2->Getter).field_0x10 == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = *(longlong **)&(param_2->Getter).field_0x8;
        }
        EVar2 = (**(code **)(*plVar6 + 0x60))(plVar6);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)(local_38 + 8));
        param_2->Value = EVar2;
      }
      FSlateAttributeImpl::ProtectedUnregisterAttribute(this,param_1,Member);
      if (*(EHorizontalAlignment *)this == param_2->Value) {
        return false;
      }
      *(EHorizontalAlignment *)this = param_2->Value;
      FSlateAttributeImpl::ProtectedInvalidateWidget(this,param_1,Member,None);
      return true;
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute(this,param_1,Member);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    FSlateAttributeImpl::ProtectedFindGetterHandle
              (this,(SWidget *)local_38,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)(local_38 + 8));
    pIVar5 = (ISlateAttributeGetter *)0x0;
    pIVar4 = pIVar5;
    if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
       (plVar6 = *(longlong **)&(param_2->Getter).field_0x8, plVar6 != (longlong *)0x0)) {
      puVar3 = (undefined8 *)(**(code **)(*plVar6 + 0x40))(plVar6,&local_res18);
      pIVar4 = (ISlateAttributeGetter *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if ((ISlateAttributeGetter *)local_38._0_8_ != pIVar4) {
      pIVar4 = ::operator_new(0x28);
      if (pIVar4 != (ISlateAttributeGetter *)0x0) {
        *pIVar4 = (ISlateAttributeGetter)
                  &
                  ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__W4EHorizontalAlignment__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__W4EHorizontalAlignment__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        TDelegate<enum_EHorizontalAlignment___cdecl(void),FDefaultDelegateUserPolicy>::
        TDelegate<enum_EHorizontalAlignment___cdecl(void),FDefaultDelegateUserPolicy>
                  (pIVar4 + 1,this_00);
        pIVar4[4] = (ISlateAttributeGetter)this;
        pIVar5 = pIVar4;
      }
      local_res18.Ptr = pIVar5;
      FSlateAttributeImpl::ProtectedRegisterAttribute(this,param_1,Member,&local_res18);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow(this,param_1,Member);
      }
      if (local_res18.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_res18.Ptr + 0x20))(local_res18.Ptr,1);
      }
      return true;
    }
  }
  return false;
}

// Assign @ 1429c9ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_ETextTransformPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(void *this,SWidget *param_1,TAttribute<ETextTransformPolicy> *param_2,
        ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  TVariant<ETextTransformPolicy,TDelegate<ETextTransformPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_b8;
  undefined1 local_b0 [40];
  FReadAccessScope local_88;
  TVariant<ETextTransformPolicy,TDelegate<ETextTransformPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_70;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
             (FReadAccessScope *)(local_b0 + 0x10));
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar7 + 0x38))();
    if (cVar2 != '\0') {
      bVar3 = true;
      goto LAB_1429c9f1b;
    }
  }
  bVar3 = false;
LAB_1429c9f1b:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_b0 + 0x10));
  if (bVar3) {
    pTVar6 = TAttribute<enum_ETextTransformPolicy>::Steal(param_2,&local_70);
    if (pTVar6->TypeIndex != '\x01') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    FSlateAttributeImpl::ProtectedFindGetterHandle
              (this,(SWidget *)local_b0,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar6,&local_88);
    if (((int)pTVar6->_padding_ == 0) ||
       (plVar7 = (longlong *)pTVar6->_padding_, plVar7 == (longlong *)0x0)) {
      lVar8 = 0;
    }
    else {
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x40))(plVar7,local_b0 + 8);
      lVar8 = *plVar7;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (local_b0._0_8_ == lVar8) {
      bVar3 = false;
    }
    else {
      local_b8.Ptr = ::operator_new(0x28);
      if (local_b8.Ptr == (ISlateAttributeGetter *)0x0) {
        local_b8.Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *local_b8.Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__W4ETextTransformPolicy__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__W4ETextTransformPolicy__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_b8.Ptr + 1),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar6);
        local_b8.Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute(this,param_1,Member,&local_b8);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow(this,param_1,Member);
      }
      if (local_b8.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_b8.Ptr + 0x20))(local_b8.Ptr,1);
      }
      bVar3 = true;
    }
    if (1 < (ulonglong)local_70.TypeIndex) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<ETextTransformPolicy,TDelegate<enum_ETextTransformPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    FSlateAttributeImpl::ProtectedUnregisterAttribute(this,param_1,Member);
    bVar3 = false;
  }
  else {
    pTVar6 = TAttribute<enum_ETextTransformPolicy>::Steal
                       (param_2,(TVariant<ETextTransformPolicy,TDelegate<ETextTransformPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>
                                 *)local_50);
    if (pTVar6->TypeIndex != '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute(this,param_1,Member);
    cVar2 = (char)pTVar6->_padding_;
    bVar3 = *(char *)this != cVar2;
    if (bVar3) {
      *(char *)this = cVar2;
      FSlateAttributeImpl::ProtectedInvalidateWidget(this,param_1,Member,None);
    }
    if (1 < (ulonglong)(byte)local_50[0x18]) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<ETextTransformPolicy,TDelegate<enum_ETextTransformPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50[0x18]])(local_50);
  }
  return bVar3;
}

// Assign @ 1429ca190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_ETextWrappingPolicy,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(void *this,SWidget *param_1,TAttribute<ETextWrappingPolicy> *param_2,
        ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  TVariant<ETextWrappingPolicy,TDelegate<ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_b8;
  undefined1 local_b0 [40];
  FReadAccessScope local_88;
  TVariant<ETextWrappingPolicy,TDelegate<ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_70;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
             (FReadAccessScope *)(local_b0 + 0x10));
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar7 + 0x38))();
    if (cVar2 != '\0') {
      bVar3 = true;
      goto LAB_1429ca1eb;
    }
  }
  bVar3 = false;
LAB_1429ca1eb:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_b0 + 0x10));
  if (bVar3) {
    pTVar6 = TAttribute<enum_ETextWrappingPolicy>::Steal(param_2,&local_70);
    if (pTVar6->TypeIndex != '\x01') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    FSlateAttributeImpl::ProtectedFindGetterHandle
              (this,(SWidget *)local_b0,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar6,&local_88);
    if (((int)pTVar6->_padding_ == 0) ||
       (plVar7 = (longlong *)pTVar6->_padding_, plVar7 == (longlong *)0x0)) {
      lVar8 = 0;
    }
    else {
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x40))(plVar7,local_b0 + 8);
      lVar8 = *plVar7;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (local_b0._0_8_ == lVar8) {
      bVar3 = false;
    }
    else {
      local_b8.Ptr = ::operator_new(0x28);
      if (local_b8.Ptr == (ISlateAttributeGetter *)0x0) {
        local_b8.Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *local_b8.Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__W4ETextWrappingPolicy__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__W4ETextWrappingPolicy__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_b8.Ptr + 1),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar6);
        local_b8.Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute(this,param_1,Member,&local_b8);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow(this,param_1,Member);
      }
      if (local_b8.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_b8.Ptr + 0x20))(local_b8.Ptr,1);
      }
      bVar3 = true;
    }
    if (1 < (ulonglong)local_70.TypeIndex) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<ETextWrappingPolicy,TDelegate<enum_ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    FSlateAttributeImpl::ProtectedUnregisterAttribute(this,param_1,Member);
    bVar3 = false;
  }
  else {
    pTVar6 = TAttribute<enum_ETextWrappingPolicy>::Steal
                       (param_2,(TVariant<ETextWrappingPolicy,TDelegate<ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>
                                 *)local_50);
    if (pTVar6->TypeIndex != '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute(this,param_1,Member);
    cVar2 = (char)pTVar6->_padding_;
    bVar3 = *(char *)this != cVar2;
    if (bVar3) {
      *(char *)this = cVar2;
      FSlateAttributeImpl::ProtectedInvalidateWidget(this,param_1,Member,None);
    }
    if (1 < (ulonglong)(byte)local_50[0x18]) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<ETextWrappingPolicy,TDelegate<enum_ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50[0x18]])(local_50);
  }
  return bVar3;
}

// Assign @ 1429ca460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_ETextJustify::Type,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(void *this,SWidget *param_1,TAttribute<ETextJustify::Type> *param_2,
        ESlateAttributeBindAction param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  TVariant<ETextJustify::Type,TDelegate<ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_b8;
  undefined1 local_b0 [40];
  FReadAccessScope local_88;
  TVariant<ETextJustify::Type,TDelegate<ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_70;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
             (FReadAccessScope *)(local_b0 + 0x10));
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar8 = *(longlong **)&(param_2->Getter).field_0x8, plVar8 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar8 + 0x38))();
    if (cVar3 != '\0') {
      bVar4 = true;
      goto LAB_1429ca4bb;
    }
  }
  bVar4 = false;
LAB_1429ca4bb:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_b0 + 0x10));
  if (bVar4) {
    pTVar7 = TAttribute<enum_ETextJustify::Type>::Steal(param_2,&local_70);
    if (pTVar7->TypeIndex != '\x01') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    FSlateAttributeImpl::ProtectedFindGetterHandle
              (this,(SWidget *)local_b0,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar7,&local_88);
    if (((int)pTVar7->_padding_ == 0) ||
       (plVar8 = (longlong *)pTVar7->_padding_, plVar8 == (longlong *)0x0)) {
      lVar9 = 0;
    }
    else {
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x40))(plVar8,local_b0 + 8);
      lVar9 = *plVar8;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (local_b0._0_8_ == lVar9) {
      bVar4 = false;
    }
    else {
      local_b8.Ptr = ::operator_new(0x28);
      if (local_b8.Ptr == (ISlateAttributeGetter *)0x0) {
        local_b8.Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *local_b8.Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__W4Type_ETextJustify__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__W4Type_ETextJustify__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_b8.Ptr + 1),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar7);
        local_b8.Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeImpl::ProtectedRegisterAttribute(this,param_1,Member,&local_b8);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow(this,param_1,Member);
      }
      if (local_b8.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_b8.Ptr + 0x20))(local_b8.Ptr,1);
      }
      bVar4 = true;
    }
    if (1 < (ulonglong)local_70.TypeIndex) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<ETextJustify::Type,TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    FSlateAttributeImpl::ProtectedUnregisterAttribute(this,param_1,Member);
    bVar4 = false;
  }
  else {
    pTVar7 = TAttribute<enum_ETextJustify::Type>::Steal
                       (param_2,(TVariant<ETextJustify::Type,TDelegate<ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>_>
                                 *)local_50);
    if (pTVar7->TypeIndex != '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute(this,param_1,Member);
    iVar1 = (int)pTVar7->_padding_;
    bVar4 = *(int *)this != iVar1;
    if (bVar4) {
      *(int *)this = iVar1;
      FSlateAttributeImpl::ProtectedInvalidateWidget(this,param_1,Member,None);
    }
    if (1 < (ulonglong)(byte)local_50[0x18]) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<ETextJustify::Type,TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50[0x18]])(local_50);
  }
  return bVar4;
}

// Assign @ 1429ca720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<bool> *param_2,bool *param_3,
        ESlateAttributeBindAction param_4)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  TVariant<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar7;
  undefined1 auStack_a8 [32];
  FReadAccessScope local_88;
  TVariant<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_> local_70;
  TVariant<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_> local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_88);
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(param_2->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar1 + 0x38))();
    if (cVar3 != '\0') {
      bVar4 = true;
      goto LAB_1429ca778;
    }
  }
  bVar4 = false;
LAB_1429ca778:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_88);
  if (bVar4) {
    pTVar7 = TAttribute<bool>::Steal(param_2,&local_70);
    if (pTVar7->TypeIndex != '\x01') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    bVar4 = AssignBinding(this,param_1,
                          (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)pTVar7,param_4
                         );
    if (1 < (ulonglong)local_70.TypeIndex) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    bVar4 = Set(this,param_1,param_3);
  }
  else {
    pTVar7 = TAttribute<bool>::Steal(param_2,&local_50);
    if (pTVar7->TypeIndex != '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    bVar4 = Set(this,param_1,(bool *)pTVar7);
    if (1 < (ulonglong)local_50.TypeIndex) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50.TypeIndex])(&local_50);
  }
  return bVar4;
}

// AssignBinding @ 1429ca900

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::AssignBinding(TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                *this,SWidget *param_1,
               TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
               ESlateAttributeBindAction param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18 [2];
  undefined1 local_38 [32];
  
  FSlateAttributeImpl::ProtectedFindGetterHandle
            ((FSlateAttributeImpl *)this,(SWidget *)local_38,(ESlateAttributeType)param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
             (FReadAccessScope *)(local_38 + 8));
  if ((*(int *)&param_2->field_0x10 == 0) ||
     (plVar2 = *(longlong **)&param_2->field_0x8, plVar2 == (longlong *)0x0)) {
    lVar3 = 0;
  }
  else {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x40))(plVar2,local_res18);
    lVar3 = *plVar2;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_38 + 8));
  if (local_38._0_8_ == lVar3) {
    bVar1 = false;
  }
  else {
    local_res18[0].Ptr = ::operator_new(0x28);
    if (local_res18[0].Ptr == (ISlateAttributeGetter *)0x0) {
      local_res18[0].Ptr = (ISlateAttributeGetter *)0x0;
    }
    else {
      *local_res18[0].Ptr =
           (ISlateAttributeGetter)
           &
           ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget___NUFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget___NUFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
      ;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_res18[0].Ptr + 1),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
      local_res18[0].Ptr[4] = (ISlateAttributeGetter)this;
    }
    FSlateAttributeImpl::ProtectedRegisterAttribute
              ((FSlateAttributeImpl *)this,param_1,Member,local_res18);
    if ((param_3 & Initialize) != None) {
      FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Member);
    }
    if (local_res18[0].Ptr != (ISlateAttributeGetter *)0x0) {
      (**(code **)((longlong)*local_res18[0].Ptr + 0x20))(local_res18[0].Ptr,1);
    }
    bVar1 = true;
  }
  return bVar1;
}

// Assign @ 142a1b680

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EListItemAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(void *this,SWidget *param_1,TAttribute<EListItemAlignment> *param_2,
        ESlateAttributeBindAction param_3)

{
  TDelegate<EListItemAlignment___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  char cVar1;
  EListItemAlignment EVar2;
  undefined8 *puVar3;
  ISlateAttributeGetter *pIVar4;
  ISlateAttributeGetter *pIVar5;
  longlong *plVar6;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res18;
  undefined1 local_38 [32];
  
  this_00 = &param_2->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)(local_38 + 8));
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar6 = *(longlong **)&(param_2->Getter).field_0x8, plVar6 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*plVar6 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (param_2->bIsSet != false) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FReadAccessScope *)(local_38 + 8));
      if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
          (plVar6 = *(longlong **)&(param_2->Getter).field_0x8, plVar6 == (longlong *)0x0)) ||
         (cVar1 = (**(code **)(*plVar6 + 0x38))(), cVar1 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)(local_38 + 8));
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)(local_38 + 8));
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FReadAccessScope *)(local_38 + 8));
        if (*(int *)&(param_2->Getter).field_0x10 == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = *(longlong **)&(param_2->Getter).field_0x8;
        }
        EVar2 = (**(code **)(*plVar6 + 0x60))(plVar6);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)(local_38 + 8));
        param_2->Value = EVar2;
      }
      FSlateAttributeImpl::ProtectedUnregisterAttribute(this,param_1,Member);
      if (*(EListItemAlignment *)this == param_2->Value) {
        return false;
      }
      *(EListItemAlignment *)this = param_2->Value;
      FSlateAttributeImpl::ProtectedInvalidateWidget(this,param_1,Member,None);
      return true;
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute(this,param_1,Member);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    FSlateAttributeImpl::ProtectedFindGetterHandle
              (this,(SWidget *)local_38,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)(local_38 + 8));
    pIVar5 = (ISlateAttributeGetter *)0x0;
    pIVar4 = pIVar5;
    if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
       (plVar6 = *(longlong **)&(param_2->Getter).field_0x8, plVar6 != (longlong *)0x0)) {
      puVar3 = (undefined8 *)(**(code **)(*plVar6 + 0x40))(plVar6,&local_res18);
      pIVar4 = (ISlateAttributeGetter *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if ((ISlateAttributeGetter *)local_38._0_8_ != pIVar4) {
      pIVar4 = ::operator_new(0x28);
      if (pIVar4 != (ISlateAttributeGetter *)0x0) {
        *pIVar4 = (ISlateAttributeGetter)
                  &
                  ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__W4EListItemAlignment__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__W4EListItemAlignment__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        TDelegate<enum_EListItemAlignment___cdecl(void),FDefaultDelegateUserPolicy>::
        TDelegate<enum_EListItemAlignment___cdecl(void),FDefaultDelegateUserPolicy>
                  (pIVar4 + 1,this_00);
        pIVar4[4] = (ISlateAttributeGetter)this;
        pIVar5 = pIVar4;
      }
      local_res18.Ptr = pIVar5;
      FSlateAttributeImpl::ProtectedRegisterAttribute(this,param_1,Member,&local_res18);
      if ((param_3 & Initialize) != None) {
        FSlateAttributeImpl::ProtectedUpdateNow(this,param_1,Member);
      }
      if (local_res18.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_res18.Ptr + 0x20))(local_res18.Ptr,1);
      }
      return true;
    }
  }
  return false;
}

// operator() @ 150493840

bool __thiscall
`SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::VerifyNan'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_133510780678045638>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_133510780678045638>,
                       &`public:___cdecl_`private:_void___cdecl_SlateAttributePrivate::TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>::VerifyNan(void)const___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150494100

bool __thiscall
`SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::VerifyNan'::__l33::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_133510780678045610>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_133510780678045610>,
                       &`public:___cdecl_`private:_void___cdecl_SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>::VerifyNan(void)const___ptr64'::`33'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150494140

bool __thiscall
`SlateAttributePrivate::
TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::VerifyNan'::__l37::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_133510780678045606>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_133510780678045606>,
                       &`public:___cdecl_`private:_void___cdecl_SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>::VerifyNan(void)const___ptr64'::`37'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150494990

bool __thiscall
`SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::VerifyNan'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_133510780678045638>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_133510780678045638>,
                       &`public:___cdecl_`private:_void___cdecl_SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>::VerifyNan(void)const___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504949d0

bool __thiscall
`SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::VerifyNan'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_133510780678045638>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_133510780678045638>,
                       &`public:___cdecl_`private:_void___cdecl_SlateAttributePrivate::TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>::VerifyNan(void)const___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150494a50

bool __thiscall
`SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::VerifyNan'::__l17::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_133510780678045626>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_133510780678045626>,
                       &`public:___cdecl_`private:_void___cdecl_SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>::VerifyNan(void)const___ptr64'::`17'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150495250

bool __thiscall
`SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::VerifyNan'::__l17::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_133510780678045626>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_133510780678045626>,
                       &`public:___cdecl_`private:_void___cdecl_SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>::VerifyNan(void)const___ptr64'::`17'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150495290

bool __thiscall
`SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::VerifyNan'::__l17::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_133510780678045626>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_133510780678045626>,
                       &`public:___cdecl_`private:_void___cdecl_SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>::VerifyNan(void)const___ptr64'::`17'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

