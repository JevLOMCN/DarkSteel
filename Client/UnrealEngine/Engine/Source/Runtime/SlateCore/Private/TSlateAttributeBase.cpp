// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 60

// TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1> @ 142540980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
* __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::
TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
          (TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
           *this,SWidget *param_1,TAttribute<UE::Slate::Private::FConstructionCounter> *param_2,
          FConstructionCounter *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
  *pTVar6;
  TVariant<UE::Slate::Private::FConstructionCounter,TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  FReadAccessScope local_90;
  TVariant<UE::Slate::Private::FConstructionCounter,TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_78;
  TVariant<UE::Slate::Private::FConstructionCounter,TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  bVar4 = false;
  local_98 = 0;
  if (param_2->bIsSet != false) {
    bVar3 = TAttribute<UE::Slate::Private::FConstructionCounter>::IsBound(param_2);
    if (!bVar3) {
      param_3 = (FConstructionCounter *)
                TAttribute<UE::Slate::Private::FConstructionCounter>::Steal(param_2,&local_78);
      if (((TVariant<UE::Slate::Private::FConstructionCounter,TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>
            *)param_3)->TypeIndex != '\0') {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                    *)(*pcVar2)();
          return pTVar6;
        }
      }
      bVar4 = true;
    }
  }
  (this->Value).Value =
       (int)((TVariant<UE::Slate::Private::FConstructionCounter,TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>
              *)param_3)->_padding_;
  UE::Slate::Private::FConstructionCounter::MoveConstructionCounter =
       UE::Slate::Private::FConstructionCounter::MoveConstructionCounter + 1;
  if (bVar4) {
    if (1 < (ulonglong)local_78.TypeIndex) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                  *)(*pcVar2)();
        return pTVar6;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Slate::Private::FConstructionCounter,TDelegate<struct_UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_78.TypeIndex])(&local_78);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_90);
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(param_2->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar5 = (**(code **)(*plVar1 + 0x38))();
    if (cVar5 != '\0') {
      bVar4 = true;
      goto LAB_142540a83;
    }
  }
  bVar4 = false;
LAB_142540a83:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_90);
  if (bVar4) {
    pTVar7 = TAttribute<UE::Slate::Private::FConstructionCounter>::Steal(param_2,&local_58);
    if (pTVar7->TypeIndex != '\x01') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                  *)(*pcVar2)();
        return pTVar6;
      }
    }
    ConstructWrapper(this,param_1,
                     (TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>
                      *)pTVar7,None);
    if (1 < (ulonglong)local_58.TypeIndex) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                  *)(*pcVar2)();
        return pTVar6;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Slate::Private::FConstructionCounter,TDelegate<struct_UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  return this;
}

// Assign @ 142566640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::Assign(TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
         *this,ISlateAttributeContainer *param_1,TAttribute<int> *param_2,
        ESlateAttributeBindAction param_3)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  TVariant<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar8;
  ISlateAttributeContainer *pIVar9;
  ISlateAttributeContainer IVar10;
  undefined1 auStack_d8 [32];
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_b8;
  ISlateAttributeContainer local_b0;
  undefined1 local_a8 [8];
  FReadAccessScope local_a0;
  FReadAccessScope local_88;
  TVariant<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_> local_70;
  TVariant<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_> local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_a0);
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(param_2->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*plVar2 + 0x38))();
    if (cVar4 != '\0') {
      bVar5 = true;
      goto LAB_14256669b;
    }
  }
  bVar5 = false;
LAB_14256669b:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a0);
  if (bVar5) {
    pTVar8 = TAttribute<int>::Steal(param_2,&local_70);
    if (pTVar8->TypeIndex != '\x01') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,&local_b0,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar8,&local_88);
    if (((int)pTVar8->_padding_ == 0) ||
       (plVar2 = (longlong *)pTVar8->_padding_, plVar2 == (longlong *)0x0)) {
      IVar10 = (ISlateAttributeContainer)0x0;
    }
    else {
      pIVar9 = (ISlateAttributeContainer *)(**(code **)(*plVar2 + 0x40))(plVar2,local_a8);
      IVar10 = *pIVar9;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (local_b0 == IVar10) {
      bVar5 = false;
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
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VISlateAttributeContainer_SlateAttributePrivate__HUFSlateAttributeNoInvalidationReason_2_U__TSlateAttributeComparePredicate_U__TEqualTo_X_____01_SlateAttributePrivate_____TSlateAttributeBase_VISlateAttributeContainer_SlateAttributePrivate__HUFSlateAttributeNoInvalidationReason_2_U__TSlateAttributeComparePredicate_U__TEqualTo_X_____01_SlateAttributePrivate__6B_
        ;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_b8.Ptr + 1),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar8);
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
      bVar5 = true;
    }
    if (1 < (ulonglong)local_70.TypeIndex) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Contained)
    ;
    bVar5 = false;
  }
  else {
    pTVar8 = TAttribute<int>::Steal(param_2,&local_50);
    if (pTVar8->TypeIndex != '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Contained)
    ;
    (**(code **)*param_1)(param_1);
    iVar1 = (int)pTVar8->_padding_;
    bVar5 = this->Value != iVar1;
    if (bVar5) {
      this->Value = iVar1;
      (**(code **)*param_1)(param_1);
      FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)this,param_1,Contained,None);
    }
    if (1 < (ulonglong)local_50.TypeIndex) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50.TypeIndex])(&local_50);
  }
  return bVar5;
}

// Assign @ 142566910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::Assign(TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
         *this,ISlateAttributeContainer *param_1,TAttribute<FMargin> *param_2,
        ESlateAttributeBindAction param_3)

{
  longlong *plVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  TVariant<FMargin,TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar10;
  ISlateAttributeContainer *pIVar11;
  ISlateAttributeContainer IVar12;
  undefined1 auStack_d8 [32];
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_b8;
  ISlateAttributeContainer local_b0;
  undefined1 local_a8 [8];
  FReadAccessScope local_a0;
  FReadAccessScope local_88;
  TVariant<FMargin,TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>_> local_70;
  TVariant<FMargin,TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>_> local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_a0);
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(param_2->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar6 = (**(code **)(*plVar1 + 0x38))();
    if (cVar6 != '\0') {
      bVar7 = true;
      goto LAB_14256696b;
    }
  }
  bVar7 = false;
LAB_14256696b:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a0);
  if (bVar7) {
    pTVar10 = TAttribute<FMargin>::Steal(param_2,&local_70);
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
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VISlateAttributeContainer_SlateAttributePrivate__UFMargin__UFSlateAttributeNoInvalidationReason_2_U__TSlateAttributeComparePredicate_U__TEqualTo_X_____01_SlateAttributePrivate_____TSlateAttributeBase_VISlateAttributeContainer_SlateAttributePrivate__UFMargin__UFSlateAttributeNoInvalidationReason_2_U__TSlateAttributeComparePredicate_U__TEqualTo_X_____01_SlateAttributePrivate__6B_
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
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMargin,TDelegate<struct_FMargin___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Contained)
    ;
    bVar7 = false;
  }
  else {
    pTVar10 = TAttribute<FMargin>::Steal(param_2,&local_50);
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
    if ((((*(float *)&pTVar10->_padding_ == (this->Value).Left) &&
         (*(float *)&pTVar10->_padding_ == (this->Value).Right)) &&
        (*(float *)((longlong)&pTVar10->_padding_ + 4) == (this->Value).Top)) &&
       (*(float *)((longlong)&pTVar10->_padding_ + 4) == (this->Value).Bottom)) {
      bVar7 = false;
    }
    else {
      fVar3 = *(float *)((longlong)&pTVar10->_padding_ + 4);
      fVar4 = *(float *)&pTVar10->_padding_;
      fVar5 = *(float *)((longlong)&pTVar10->_padding_ + 4);
      (this->Value).Left = *(float *)&pTVar10->_padding_;
      (this->Value).Top = fVar3;
      (this->Value).Right = fVar4;
      (this->Value).Bottom = fVar5;
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
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMargin,TDelegate<struct_FMargin___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50.TypeIndex])(&local_50);
  }
  return bVar7;
}

// Assign @ 142566c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<int> *param_2,ESlateAttributeBindAction param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  TVariant<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_b8;
  undefined1 local_b0 [40];
  FReadAccessScope local_88;
  TVariant<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_> local_70;
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
      goto LAB_142566c6b;
    }
  }
  bVar4 = false;
LAB_142566c6b:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_b0 + 0x10));
  if (bVar4) {
    pTVar7 = TAttribute<int>::Steal(param_2,&local_70);
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
              ((FSlateAttributeImpl *)this,(SWidget *)local_b0,(ESlateAttributeType)param_1);
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
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__HU__TSlateAttributeInvalidationReason__00__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__HU__TSlateAttributeInvalidationReason__00__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_b8.Ptr + 1),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar7);
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
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    bVar4 = false;
  }
  else {
    pTVar7 = TAttribute<int>::Steal
                       (param_2,(TVariant<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_>
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
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    iVar1 = (int)pTVar7->_padding_;
    bVar4 = this->Value != iVar1;
    if (bVar4) {
      this->Value = iVar1;
      FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)this,param_1,Member,Layout);
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
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50[0x18]])(local_50);
  }
  return bVar4;
}

// Assign @ 142566ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<int> *param_2,int *param_3,
        ESlateAttributeBindAction param_4)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  TVariant<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar7;
  undefined1 auStack_a8 [32];
  FReadAccessScope local_88;
  TVariant<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_> local_70;
  TVariant<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_> local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_88);
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(param_2->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar1 + 0x38))();
    if (cVar3 != '\0') {
      bVar4 = true;
      goto LAB_142566f28;
    }
  }
  bVar4 = false;
LAB_142566f28:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_88);
  if (bVar4) {
    pTVar7 = TAttribute<int>::Steal(param_2,&local_70);
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
                          (TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *)pTVar7,param_4)
    ;
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
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    bVar4 = Set(this,param_1,param_3);
  }
  else {
    pTVar7 = TAttribute<int>::Steal(param_2,&local_50);
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
    bVar4 = Set(this,param_1,(int *)pTVar7);
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
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50.TypeIndex])(&local_50);
  }
  return bVar4;
}

// Assign @ 1425670b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<int> *param_2,ESlateAttributeBindAction param_3)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  TVariant<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar7;
  undefined1 auStack_a8 [32];
  FReadAccessScope local_88;
  TVariant<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_> local_70;
  TVariant<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_> local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_88);
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(param_2->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar1 + 0x38))();
    if (cVar3 != '\0') {
      bVar4 = true;
      goto LAB_142567108;
    }
  }
  bVar4 = false;
LAB_142567108:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_88);
  if (bVar4) {
    pTVar7 = TAttribute<int>::Steal(param_2,&local_70);
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
                          (TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *)pTVar7,param_3)
    ;
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
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    bVar4 = false;
  }
  else {
    pTVar7 = TAttribute<int>::Steal(param_2,&local_50);
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
    bVar4 = Set(this,param_1,(int *)pTVar7);
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
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50.TypeIndex])(&local_50);
  }
  return bVar4;
}

// Assign @ 142567290

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<int> *param_2,int *param_3,
        ESlateAttributeBindAction param_4)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_28);
  if (((*(int *)&(param_2->Getter).field_0x10 != 0) &&
      (plVar1 = *(longlong **)&(param_2->Getter).field_0x8, plVar1 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    bVar3 = AssignBinding(this,param_1,&param_2->Getter,param_4);
    return bVar3;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (param_2->bIsSet == false) {
    bVar3 = Set(this,param_1,param_3);
  }
  else {
    piVar4 = TAttribute<int>::Get(param_2);
    bVar3 = Set(this,param_1,piVar4);
  }
  return bVar3;
}

// Assign @ 142567360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<int> *param_2,ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  TVariant<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_b8;
  undefined1 local_b0 [40];
  FReadAccessScope local_88;
  TVariant<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_> local_70;
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
      goto LAB_1425673bb;
    }
  }
  bVar3 = false;
LAB_1425673bb:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_b0 + 0x10));
  if (bVar3) {
    pTVar6 = TAttribute<int>::Steal(param_2,&local_70);
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
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__HUFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__HUFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
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
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    bVar3 = false;
  }
  else {
    pTVar6 = TAttribute<int>::Steal
                       (param_2,(TVariant<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_>
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
    bVar3 = Set(this,param_1,(int *)pTVar6);
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
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50[0x18]])(local_50);
  }
  return bVar3;
}

// Assign @ 142567600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::Assign(TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
         *this,SWidget *param_1,TAttribute<UE::Slate::Private::FConstructionCounter> *param_2,
        FConstructionCounter *param_3,ESlateAttributeBindAction param_4)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  TVariant<UE::Slate::Private::FConstructionCounter,TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar7;
  undefined1 auStack_a8 [32];
  FReadAccessScope local_88;
  TVariant<UE::Slate::Private::FConstructionCounter,TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_70;
  TVariant<UE::Slate::Private::FConstructionCounter,TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_88);
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(param_2->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar1 + 0x38))();
    if (cVar3 != '\0') {
      bVar4 = true;
      goto LAB_142567658;
    }
  }
  bVar4 = false;
LAB_142567658:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_88);
  if (bVar4) {
    pTVar7 = TAttribute<UE::Slate::Private::FConstructionCounter>::Steal(param_2,&local_70);
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
                          (TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>
                           *)pTVar7,param_4);
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
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Slate::Private::FConstructionCounter,TDelegate<struct_UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    bVar4 = Set(this,param_1,param_3);
  }
  else {
    pTVar7 = TAttribute<UE::Slate::Private::FConstructionCounter>::Steal(param_2,&local_50);
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
    bVar4 = Set(this,param_1,(FConstructionCounter *)pTVar7);
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
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Slate::Private::FConstructionCounter,TDelegate<struct_UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50.TypeIndex])(&local_50);
  }
  return bVar4;
}

// Assign @ 1425677e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::Assign(TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
         *this,SWidget *param_1,TAttribute<UE::Slate::Private::FConstructionCounter> *param_2,
        FConstructionCounter *param_3,ESlateAttributeBindAction param_4)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  TVariant<UE::Slate::Private::FConstructionCounter,TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar7;
  undefined1 auStack_a8 [32];
  FReadAccessScope local_88;
  TVariant<UE::Slate::Private::FConstructionCounter,TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_70;
  TVariant<UE::Slate::Private::FConstructionCounter,TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_88);
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(param_2->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar1 + 0x38))();
    if (cVar3 != '\0') {
      bVar4 = true;
      goto LAB_142567838;
    }
  }
  bVar4 = false;
LAB_142567838:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_88);
  if (bVar4) {
    pTVar7 = TAttribute<UE::Slate::Private::FConstructionCounter>::Steal(param_2,&local_70);
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
                          (TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>
                           *)pTVar7,param_4);
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
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Slate::Private::FConstructionCounter,TDelegate<struct_UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    bVar4 = Set(this,param_1,param_3);
  }
  else {
    pTVar7 = TAttribute<UE::Slate::Private::FConstructionCounter>::Steal(param_2,&local_50);
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
    bVar4 = Set(this,param_1,(FConstructionCounter *)pTVar7);
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
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Slate::Private::FConstructionCounter,TDelegate<struct_UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50.TypeIndex])(&local_50);
  }
  return bVar4;
}

// Assign @ 1425679c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::Assign(TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
         *this,SWidget *param_1,TAttribute<UE::Slate::Private::FConstructionCounter> *param_2,
        ESlateAttributeBindAction param_3)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  TVariant<UE::Slate::Private::FConstructionCounter,TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar7;
  undefined1 auStack_a8 [32];
  FReadAccessScope local_88;
  TVariant<UE::Slate::Private::FConstructionCounter,TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_70;
  TVariant<UE::Slate::Private::FConstructionCounter,TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_88);
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(param_2->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar1 + 0x38))();
    if (cVar3 != '\0') {
      bVar4 = true;
      goto LAB_142567a18;
    }
  }
  bVar4 = false;
LAB_142567a18:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_88);
  if (bVar4) {
    pTVar7 = TAttribute<UE::Slate::Private::FConstructionCounter>::Steal(param_2,&local_70);
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
                          (TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>
                           *)pTVar7,param_3);
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
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Slate::Private::FConstructionCounter,TDelegate<struct_UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Managed);
    bVar4 = false;
  }
  else {
    pTVar7 = TAttribute<UE::Slate::Private::FConstructionCounter>::Steal(param_2,&local_50);
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
    bVar4 = Set(this,param_1,(FConstructionCounter *)pTVar7);
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
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Slate::Private::FConstructionCounter,TDelegate<struct_UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50.TypeIndex])(&local_50);
  }
  return bVar4;
}

// AssignBinding @ 142567ff0

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::AssignBinding(TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                *this,SWidget *param_1,
               TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
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
           ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__HU__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__HU__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
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

// AssignBinding @ 1425680f0

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::AssignBinding(TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                *this,SWidget *param_1,
               TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
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
           ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__HU__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__HU__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
      ;
      TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *)(local_res18[0].Ptr + 1)
                 ,param_2);
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

// AssignBinding @ 1425681f0

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::AssignBinding(TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                *this,SWidget *param_1,
               TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>
               *param_2,ESlateAttributeBindAction param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_res18;
  undefined1 local_38 [8];
  FReadAccessScope local_30;
  
  FSlateAttributeImpl::ProtectedFindGetterHandle
            ((FSlateAttributeImpl *)this,(SWidget *)&local_res18,(ESlateAttributeType)param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_30);
  if ((*(int *)&param_2->field_0x10 == 0) ||
     (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 == (longlong *)0x0)) {
    lVar2 = 0;
  }
  else {
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1,local_38);
    lVar2 = *plVar1;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_30);
  if (local_res18 != lVar2) {
    ConstructWrapper(this,param_1,param_2,param_3);
  }
  return local_res18 != lVar2;
}

// AssignBinding @ 142568290

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::AssignBinding(TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                *this,SWidget *param_1,
               TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>
               *param_2,ESlateAttributeBindAction param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_res18;
  undefined1 local_38 [8];
  FReadAccessScope local_30;
  
  FSlateAttributeImpl::ProtectedFindGetterHandle
            ((FSlateAttributeImpl *)this,(SWidget *)&local_res18,(ESlateAttributeType)param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_30);
  if ((*(int *)&param_2->field_0x10 == 0) ||
     (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 == (longlong *)0x0)) {
    lVar2 = 0;
  }
  else {
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1,local_38);
    lVar2 = *plVar1;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_30);
  if (local_res18 != lVar2) {
    ConstructWrapper(this,param_1,param_2,param_3);
  }
  return local_res18 != lVar2;
}

// ConstructWrapper @ 142568bd0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::ConstructWrapper(TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                   *this,SWidget *param_1,
                  TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>
                  *param_2,ESlateAttributeBindAction param_3)

{
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_18 [2];
  
  local_18[0].Ptr = ::operator_new(0x28);
  if (local_18[0].Ptr == (ISlateAttributeGetter *)0x0) {
    local_18[0].Ptr = (ISlateAttributeGetter *)0x0;
  }
  else {
    *local_18[0].Ptr =
         (ISlateAttributeGetter)
         &
         ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__UFConstructionCounter_Private_Slate_UE__U__TSlateAttributeInvalidationReason__00__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____00_SlateAttributePrivate_____TSlateAttributeBase_VSWidget__UFConstructionCounter_Private_Slate_UE__U__TSlateAttributeInvalidationReason__00__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____00_SlateAttributePrivate__6B_
    ;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_18[0].Ptr + 1),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
    local_18[0].Ptr[4] = (ISlateAttributeGetter)this;
  }
  FSlateAttributeImpl::ProtectedRegisterAttribute
            ((FSlateAttributeImpl *)this,param_1,Managed,local_18);
  if ((param_3 & Initialize) != None) {
    FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Managed);
  }
  if (local_18[0].Ptr != (ISlateAttributeGetter *)0x0) {
    (**(code **)((longlong)*local_18[0].Ptr + 0x20))(local_18[0].Ptr,1);
  }
  return;
}

// ConstructWrapper @ 142568c90

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::ConstructWrapper(TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                   *this,SWidget *param_1,
                  TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>
                  *param_2,ESlateAttributeBindAction param_3)

{
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_18 [2];
  
  local_18[0].Ptr = ::operator_new(0x28);
  if (local_18[0].Ptr == (ISlateAttributeGetter *)0x0) {
    local_18[0].Ptr = (ISlateAttributeGetter *)0x0;
  }
  else {
    *local_18[0].Ptr =
         (ISlateAttributeGetter)
         &
         ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__UFConstructionCounter_Private_Slate_UE__U__TSlateAttributeInvalidationReason__00__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____00_SlateAttributePrivate_____TSlateAttributeBase_VSWidget__UFConstructionCounter_Private_Slate_UE__U__TSlateAttributeInvalidationReason__00__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____00_SlateAttributePrivate__6B_
    ;
    TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>
                *)(local_18[0].Ptr + 1),param_2);
    local_18[0].Ptr[4] = (ISlateAttributeGetter)this;
  }
  FSlateAttributeImpl::ProtectedRegisterAttribute
            ((FSlateAttributeImpl *)this,param_1,Managed,local_18);
  if ((param_3 & Initialize) != None) {
    FSlateAttributeImpl::ProtectedUpdateNow((FSlateAttributeImpl *)this,param_1,Managed);
  }
  if (local_18[0].Ptr != (ISlateAttributeGetter *)0x0) {
    (**(code **)((longlong)*local_18[0].Ptr + 0x20))(local_18[0].Ptr,1);
  }
  return;
}

// Set @ 142590080

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Set(TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      *this,SWidget *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  
  FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
  iVar1 = *param_2;
  bVar2 = this->Value != iVar1;
  if (bVar2) {
    this->Value = iVar1;
    FSlateAttributeImpl::ProtectedInvalidateWidget((FSlateAttributeImpl *)this,param_1,Member,Paint)
    ;
  }
  return bVar2;
}

// Set @ 1425900e0

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Set(TSlateAttributeBase<SWidget,int,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      *this,SWidget *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  
  FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
  iVar1 = *param_2;
  bVar2 = this->Value != iVar1;
  if (bVar2) {
    this->Value = iVar1;
    FSlateAttributeImpl::ProtectedInvalidateWidget((FSlateAttributeImpl *)this,param_1,Member,Paint)
    ;
  }
  return bVar2;
}

// Set @ 142590140

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Set(TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      *this,SWidget *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  
  FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
  iVar1 = *param_2;
  bVar2 = this->Value != iVar1;
  if (bVar2) {
    this->Value = iVar1;
    FSlateAttributeImpl::ProtectedInvalidateWidget((FSlateAttributeImpl *)this,param_1,Member,None);
  }
  return bVar2;
}

// Set @ 1425901a0

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::Set(TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
      *this,SWidget *param_1,FConstructionCounter *param_2)

{
  int iVar1;
  bool bVar2;
  
  FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Managed);
  iVar1 = param_2->Value;
  bVar2 = iVar1 != (this->Value).Value;
  if (bVar2) {
    (this->Value).Value = iVar1;
    UE::Slate::Private::FConstructionCounter::MoveOperatorCounter =
         UE::Slate::Private::FConstructionCounter::MoveOperatorCounter + 1;
    FSlateAttributeImpl::ProtectedInvalidateWidget
              ((FSlateAttributeImpl *)this,param_1,Managed,Layout);
  }
  return bVar2;
}

// Set @ 142590210

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::Set(TSlateAttributeBase<SWidget,UE::Slate::Private::FConstructionCounter,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
      *this,SWidget *param_1,FConstructionCounter *param_2)

{
  int iVar1;
  bool bVar2;
  
  FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Managed);
  iVar1 = param_2->Value;
  bVar2 = iVar1 != (this->Value).Value;
  if (bVar2) {
    (this->Value).Value = iVar1;
    UE::Slate::Private::FConstructionCounter::CopyOperatorCounter =
         UE::Slate::Private::FConstructionCounter::CopyOperatorCounter + 1;
    FSlateAttributeImpl::ProtectedInvalidateWidget
              ((FSlateAttributeImpl *)this,param_1,Managed,Layout);
  }
  return bVar2;
}

// TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1> @ 1425bad50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
* __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::
TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
          (TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
           *this,SWidget *param_1,TAttribute<FSlateBrush_const_*> *param_2,FSlateBrush **param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
  *pTVar6;
  TVariant<FSlateBrush_const_*,TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  FReadAccessScope local_90;
  TVariant<FSlateBrush_const_*,TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_78;
  TVariant<FSlateBrush_const_*,TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  bVar4 = false;
  local_98 = 0;
  if (param_2->bIsSet != false) {
    bVar3 = TAttribute<FSlateBrush_const_*>::IsBound(param_2);
    if (!bVar3) {
      param_3 = (FSlateBrush **)TAttribute<FSlateBrush_const_*>::Steal(param_2,&local_78);
      if (((TVariant<FSlateBrush_const_*,TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>_>
            *)param_3)->TypeIndex != '\0') {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                    *)(*pcVar2)();
          return pTVar6;
        }
      }
      bVar4 = true;
    }
  }
  this->Value = (FSlateBrush *)
                ((TVariant<FSlateBrush_const_*,TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)param_3)->_padding_;
  if (bVar4) {
    if (1 < (ulonglong)local_78.TypeIndex) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                  *)(*pcVar2)();
        return pTVar6;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSlateBrush_const*___ptr64,TDelegate<struct_FSlateBrush_const*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_78.TypeIndex])(&local_78);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_90);
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(param_2->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar5 = (**(code **)(*plVar1 + 0x38))();
    if (cVar5 != '\0') {
      bVar4 = true;
      goto LAB_1425bae4f;
    }
  }
  bVar4 = false;
LAB_1425bae4f:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_90);
  if (bVar4) {
    pTVar7 = TAttribute<FSlateBrush_const_*>::Steal(param_2,&local_58);
    if (pTVar7->TypeIndex != '\x01') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                  *)(*pcVar2)();
        return pTVar6;
      }
    }
    ConstructWrapper(this,param_1,
                     (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)
                     pTVar7,None);
    if (1 < (ulonglong)local_58.TypeIndex) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                  *)(*pcVar2)();
        return pTVar6;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSlateBrush_const*___ptr64,TDelegate<struct_FSlateBrush_const*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  return this;
}

// TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1> @ 1425baf20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
* __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::
TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
          (TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
           *this,SWidget *param_1,TAttribute<FSlateColor> *param_2,FSlateColor *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
  *pTVar8;
  TVariant<FSlateColor,TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  FReadAccessScope local_90;
  TVariant<FSlateColor,TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_> local_78;
  TVariant<FSlateColor,TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_> local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98 = 0;
  bVar6 = false;
  if (param_2->bIsSet != false) {
    bVar5 = TAttribute<FSlateColor>::IsBound(param_2);
    bVar6 = false;
    if (!bVar5) {
      param_3 = (FSlateColor *)TAttribute<FSlateColor>::Steal(param_2,&local_78);
      if (((TVariant<FSlateColor,TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_> *
           )param_3)->TypeIndex != '\0') {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                    *)(*pcVar3)();
          return pTVar8;
        }
      }
      bVar6 = true;
    }
  }
  lVar4 = ((TVariant<FSlateColor,TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_> *
           )param_3)->_padding_;
  *(longlong *)&(this->Value).SpecifiedColor.field0_0x0 =
       ((TVariant<FSlateColor,TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_> *)
       param_3)->_padding_;
  *(longlong *)((longlong)&(this->Value).SpecifiedColor.field0_0x0 + 8) = lVar4;
  uVar1 = (undefined4)
          ((TVariant<FSlateColor,TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_> *
           )param_3)->_padding_;
  (this->Value).ColorUseRule = (char)uVar1;
  (this->Value).ColorTableId = (char)((uint)uVar1 >> 8);
  *(short *)&(this->Value).field_0x12 = (short)((uint)uVar1 >> 0x10);
  if (bVar6) {
    if (1 < (ulonglong)local_78.TypeIndex) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                  *)(*pcVar3)();
        return pTVar8;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSlateColor,TDelegate<struct_FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_78.TypeIndex])(&local_78);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_90);
  if ((*(int *)&(param_2->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(param_2->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar7 = (**(code **)(*plVar2 + 0x38))();
    if (cVar7 != '\0') {
      bVar6 = true;
      goto LAB_1425bb02c;
    }
  }
  bVar6 = false;
LAB_1425bb02c:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_90);
  if (bVar6) {
    pTVar9 = TAttribute<FSlateColor>::Steal(param_2,&local_58);
    if (pTVar9->TypeIndex != '\x01') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                  *)(*pcVar3)();
        return pTVar8;
      }
    }
    ConstructWrapper(this,param_1,
                     (TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)pTVar9,None)
    ;
    if (1 < (ulonglong)local_58.TypeIndex) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                  *)(*pcVar3)();
        return pTVar8;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSlateColor,TDelegate<struct_FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  return this;
}

// Assign @ 1425cb260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::Assign(TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
         *this,ISlateAttributeContainer *param_1,TAttribute<float> *param_2,
        ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  ESlateAttributeType EVar5;
  bool bVar6;
  TVariant<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar7;
  longlong *plVar8;
  SWidget *pSVar9;
  longlong lVar10;
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
     (plVar8 = *(longlong **)&(param_2->Getter).field_0x8, plVar8 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar8 + 0x38))();
    if (cVar2 != '\0') {
      bVar3 = true;
      goto LAB_1425cb2bb;
    }
  }
  bVar3 = false;
LAB_1425cb2bb:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_b0 + 0x10));
  if (bVar3) {
    pTVar7 = TAttribute<float>::Steal(param_2,&local_70);
    if (pTVar7->TypeIndex != '\x01') {
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
    EVar5 = (**(code **)*param_1)(param_1);
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_b0,EVar5);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar7,&local_88);
    if (((int)pTVar7->_padding_ == 0) ||
       (plVar8 = (longlong *)pTVar7->_padding_, plVar8 == (longlong *)0x0)) {
      lVar10 = 0;
    }
    else {
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x40))(plVar8,local_b0 + 8);
      lVar10 = *plVar8;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (local_b0._0_8_ == lVar10) {
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
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VISlateAttributeContainer_SlateAttributePrivate__MUFSlateAttributeNoInvalidationReason_2_U__TSlateAttributeComparePredicate_U__TEqualTo_X_____01_SlateAttributePrivate_____TSlateAttributeBase_VISlateAttributeContainer_SlateAttributePrivate__MUFSlateAttributeNoInvalidationReason_2_U__TSlateAttributeComparePredicate_U__TEqualTo_X_____01_SlateAttributePrivate__6B_
        ;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_b8.Ptr + 1),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar7);
        local_b8.Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeMetaData::RegisterAttribute
                (param_1,(FSlateAttributeBase *)this,Contained,&local_b8);
      if ((param_3 & Initialize) != None) {
        pSVar9 = (SWidget *)(**(code **)*param_1)(param_1);
        FSlateAttributeMetaData::UpdateAttribute(pSVar9,(FSlateAttributeBase *)this);
      }
      if (local_b8.Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_b8.Ptr + 0x20))(local_b8.Ptr,1);
      }
      bVar3 = true;
    }
    if (1 < (ulonglong)local_70.TypeIndex) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    pSVar9 = (SWidget *)(**(code **)*param_1)(param_1);
    FSlateAttributeMetaData::UnregisterAttribute(pSVar9,(FSlateAttributeBase *)this);
    bVar3 = false;
  }
  else {
    pTVar7 = TAttribute<float>::Steal
                       (param_2,(TVariant<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_>
                                 *)local_50);
    if (pTVar7->TypeIndex != '\0') {
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
    bVar3 = Set(this,param_1,(float *)pTVar7);
    if (1 < (ulonglong)(byte)local_50[0x18]) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
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

// Assign @ 1425cb510

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::Assign(TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
         *this,ISlateAttributeContainer *param_1,TAttribute<float> *param_2,
        ESlateAttributeBindAction param_3)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  char cVar1;
  ESlateAttributeType EVar2;
  longlong *plVar3;
  SWidget *pSVar4;
  float *pfVar5;
  longlong lVar6;
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
    if (param_2->bIsSet == false) {
      pSVar4 = (SWidget *)(**(code **)*param_1)(param_1);
      FSlateAttributeMetaData::UnregisterAttribute(pSVar4,(FSlateAttributeBase *)this);
    }
    else {
      pfVar5 = TAttribute<float>::Get(param_2);
      pSVar4 = (SWidget *)(**(code **)*param_1)(param_1);
      FSlateAttributeMetaData::UnregisterAttribute(pSVar4,(FSlateAttributeBase *)this);
      (**(code **)*param_1)(param_1);
      if (*pfVar5 != this->Value) {
        this->Value = *pfVar5;
        (**(code **)*param_1)(param_1);
        FSlateAttributeMetaData::InvalidateWidget
                  (param_1,(FSlateAttributeBase *)this,Contained,None);
        return true;
      }
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    EVar2 = (**(code **)*param_1)(param_1);
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_38,EVar2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)(local_38 + 8));
    if ((*(int *)&(param_2->Getter).field_0x10 == 0) ||
       (plVar3 = *(longlong **)&(param_2->Getter).field_0x8, plVar3 == (longlong *)0x0)) {
      lVar6 = 0;
    }
    else {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3,local_res18);
      lVar6 = *plVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 8));
    if (local_38._0_8_ != lVar6) {
      local_res18[0].Ptr = ::operator_new(0x28);
      if (local_res18[0].Ptr == (ISlateAttributeGetter *)0x0) {
        local_res18[0].Ptr = (ISlateAttributeGetter *)0x0;
      }
      else {
        *local_res18[0].Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VISlateAttributeContainer_SlateAttributePrivate__MUFSlateAttributeNoInvalidationReason_2_U__TSlateAttributeComparePredicate_U__TEqualTo_X_____01_SlateAttributePrivate_____TSlateAttributeBase_VISlateAttributeContainer_SlateAttributePrivate__MUFSlateAttributeNoInvalidationReason_2_U__TSlateAttributeComparePredicate_U__TEqualTo_X_____01_SlateAttributePrivate__6B_
        ;
        TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
        TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>
                  ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)
                   (local_res18[0].Ptr + 1),this_00);
        local_res18[0].Ptr[4] = (ISlateAttributeGetter)this;
      }
      FSlateAttributeMetaData::RegisterAttribute
                (param_1,(FSlateAttributeBase *)this,Contained,local_res18);
      if ((param_3 & Initialize) != None) {
        pSVar4 = (SWidget *)(**(code **)*param_1)(param_1);
        FSlateAttributeMetaData::UpdateAttribute(pSVar4,(FSlateAttributeBase *)this);
      }
      if (local_res18[0].Ptr != (ISlateAttributeGetter *)0x0) {
        (**(code **)((longlong)*local_res18[0].Ptr + 0x20))(local_res18[0].Ptr,1);
      }
      return true;
    }
  }
  return false;
}

// Assign @ 1425cb6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::Assign(TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
         *this,SWidget *param_1,TAttribute<FSlateBrush_const_*> *param_2,
        ESlateAttributeBindAction param_3)

{
  FSlateBrush *pFVar1;
  FSlateBrush *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  TVariant<FSlateBrush_const_*,TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [40];
  FReadAccessScope local_90;
  TVariant<FSlateBrush_const_*,TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_78;
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
             (FReadAccessScope *)(local_b8 + 0x10));
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar9 = *(longlong **)&(param_2->Getter).field_0x8, plVar9 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar9 + 0x38))(), cVar4 == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_b8 + 0x10));
  if (bVar5) {
    pTVar8 = TAttribute<FSlateBrush_const_*>::Steal(param_2,&local_78);
    if ((pTVar8->TypeIndex != '\x01') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_b8,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar8,&local_90);
    if (((int)pTVar8->_padding_ == 0) ||
       (plVar9 = (longlong *)pTVar8->_padding_, plVar9 == (longlong *)0x0)) {
      lVar10 = 0;
    }
    else {
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x40))(plVar9,local_b8 + 8);
      lVar10 = *plVar9;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_90);
    bVar5 = local_b8._0_8_ != lVar10;
    if (bVar5) {
      ConstructWrapper(this,param_1,
                       (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)
                       pTVar8,param_3);
    }
    if ((1 < (ulonglong)local_78.TypeIndex) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSlateBrush_const*___ptr64,TDelegate<struct_FSlateBrush_const*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_78.TypeIndex])(&local_78);
  }
  else if (param_2->bIsSet == false) {
    FSlateAttributeMetaData::UnregisterAttribute(param_1,(FSlateAttributeBase *)this);
    bVar5 = false;
  }
  else {
    pTVar8 = TAttribute<FSlateBrush_const_*>::Steal
                       (param_2,(TVariant<FSlateBrush_const_*,TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>_>
                                 *)local_58);
    if ((pTVar8->TypeIndex != '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    FSlateAttributeMetaData::UnregisterAttribute(param_1,(FSlateAttributeBase *)this);
    pFVar1 = (FSlateBrush *)pTVar8->_padding_;
    pFVar2 = this->Value;
    if (pFVar2 != pFVar1) {
      this->Value = pFVar1;
      FSlateAttributeMetaData::InvalidateWidget(param_1,(FSlateAttributeBase *)this,Managed,Paint);
    }
    bVar5 = pFVar2 != pFVar1;
    if ((1 < (ulonglong)(byte)local_58[0x18]) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSlateBrush_const*___ptr64,TDelegate<struct_FSlateBrush_const*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_58[0x18]])(local_58);
  }
  return bVar5;
}

// Assign @ 1425cb940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<FSlateBrush_const_*> *param_2,
        ESlateAttributeBindAction param_3)

{
  FSlateBrush *pFVar1;
  FSlateBrush *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  TVariant<FSlateBrush_const_*,TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar8;
  longlong *plVar9;
  FString *pFVar10;
  longlong lVar11;
  undefined1 auStack_118 [32];
  FScriptContainerElement *local_f8;
  undefined1 local_e8 [32];
  FString local_c8;
  FString local_b8;
  FReadAccessScope local_a8;
  FReadAccessScope local_90;
  TVariant<FSlateBrush_const_*,TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_78;
  TVariant<FSlateBrush_const_*,TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_a8);
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar9 = *(longlong **)&(param_2->Getter).field_0x8, plVar9 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar9 + 0x38))(), cVar4 == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a8);
  if (bVar5) {
    pTVar8 = TAttribute<FSlateBrush_const_*>::Steal(param_2,&local_78);
    if ((pTVar8->TypeIndex != '\x01') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_e8,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar8,&local_90);
    if (((int)pTVar8->_padding_ == 0) ||
       (plVar9 = (longlong *)pTVar8->_padding_, plVar9 == (longlong *)0x0)) {
      lVar11 = 0;
    }
    else {
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x40))(plVar9,local_e8 + 8);
      lVar11 = *plVar9;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_90);
    bVar5 = local_e8._0_8_ != lVar11;
    if (bVar5) {
      ConstructWrapper(this,param_1,
                       (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)
                       pTVar8,param_3);
    }
    if ((1 < (ulonglong)local_78.TypeIndex) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSlateBrush_const*___ptr64,TDelegate<struct_FSlateBrush_const*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_78.TypeIndex])(&local_78);
  }
  else if (param_2->bIsSet == false) {
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      pFVar10 = FReflectionMetaData::GetWidgetPath(&local_b8,param_1,true,false);
      if ((pFVar10->Data).ArrayNum == 0) {
        local_f8 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_f8 = (pFVar10->Data).AllocatorInstance.Data;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    FSlateAttributeMetaData::UnregisterAttribute(param_1,(FSlateAttributeBase *)this);
    bVar5 = false;
  }
  else {
    pTVar8 = TAttribute<FSlateBrush_const_*>::Steal(param_2,&local_58);
    if ((pTVar8->TypeIndex != '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      pFVar10 = FReflectionMetaData::GetWidgetPath((FString *)(local_e8 + 0x10),param_1,true,false);
      if ((pFVar10->Data).ArrayNum == 0) {
        local_f8 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_f8 = (pFVar10->Data).AllocatorInstance.Data;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if ((void *)local_e8._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_e8._16_8_);
      }
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    FSlateAttributeMetaData::UnregisterAttribute(param_1,(FSlateAttributeBase *)this);
    pFVar1 = (FSlateBrush *)pTVar8->_padding_;
    pFVar2 = this->Value;
    if (pFVar2 != pFVar1) {
      this->Value = pFVar1;
      if ((param_1->AllocSize != 0) &&
         ((this < param_1 ||
          ((TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
        pFVar10 = FReflectionMetaData::GetWidgetPath(&local_c8,param_1,true,false);
        if ((pFVar10->Data).ArrayNum == 0) {
          local_f8 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_f8 = (pFVar10->Data).AllocatorInstance.Data;
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                           ,0x1a,
                           L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                          );
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      FSlateAttributeMetaData::InvalidateWidget(param_1,(FSlateAttributeBase *)this,Member,None);
    }
    bVar5 = pFVar2 != pFVar1;
    if ((1 < (ulonglong)local_58.TypeIndex) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSlateBrush_const*___ptr64,TDelegate<struct_FSlateBrush_const*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  return bVar5;
}

// Assign @ 1425cbd30

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<FSlateBrush_const_*> *param_2,
        ESlateAttributeBindAction param_3)

{
  FSlateBrush *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong *plVar6;
  FSlateBrush *pFVar7;
  longlong lVar8;
  longlong local_res18;
  undefined1 local_b8 [8];
  FString local_b0;
  FString local_a0;
  FString local_90;
  FReadAccessScope local_80;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  FReadAccessScope local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_80);
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar6 = *(longlong **)&(param_2->Getter).field_0x8, plVar6 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*plVar6 + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_80);
    if (param_2->bIsSet != false) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
                 &local_68);
      if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
          (plVar6 = *(longlong **)&(param_2->Getter).field_0x8, plVar6 == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(*plVar6 + 0x38))(), cVar3 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_68);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_68);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
                   &local_38);
        if (*(int *)&(param_2->Getter).field_0x10 == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = *(longlong **)&(param_2->Getter).field_0x8;
        }
        pFVar7 = (FSlateBrush *)(**(code **)(*plVar6 + 0x60))(plVar6);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        param_2->Value = pFVar7;
      }
      if ((param_1->AllocSize != 0) &&
         ((this < param_1 ||
          ((TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
        FReflectionMetaData::GetWidgetPath(&local_b0,param_1,true,false);
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                           ,0x1a,
                           L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                          );
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      FSlateAttributeMetaData::UnregisterAttribute(param_1,(FSlateAttributeBase *)this);
      pFVar7 = param_2->Value;
      pFVar1 = this->Value;
      if (pFVar1 != pFVar7) {
        this->Value = pFVar7;
        if ((param_1->AllocSize != 0) &&
           ((this < param_1 ||
            ((TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
          FReflectionMetaData::GetWidgetPath(&local_a0,param_1,true,false);
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                             ,0x1a,
                             L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                            );
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
        }
        FSlateAttributeMetaData::InvalidateWidget(param_1,(FSlateAttributeBase *)this,Member,None);
      }
      return pFVar1 != pFVar7;
    }
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      FReflectionMetaData::GetWidgetPath(&local_90,param_1,true,false);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    FSlateAttributeMetaData::UnregisterAttribute(param_1,(FSlateAttributeBase *)this);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_80);
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)&local_res18,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_50)
    ;
    if ((*(int *)&(param_2->Getter).field_0x10 == 0) ||
       (plVar6 = *(longlong **)&(param_2->Getter).field_0x8, plVar6 == (longlong *)0x0)) {
      lVar8 = 0;
    }
    else {
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x40))(plVar6,local_b8);
      lVar8 = *plVar6;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    if (local_res18 != lVar8) {
      ConstructWrapper(this,param_1,&param_2->Getter,param_3);
      return true;
    }
  }
  return false;
}

// Assign @ 1425cc080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<TOptional<UE::Math::TVector2<double>_>_> *param_2,
        ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  TVariant<TOptional<UE::Math::TVector2<double>_>,TDelegate<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar6;
  longlong *plVar7;
  FString *pFVar8;
  longlong lVar9;
  undefined1 auStack_f8 [32];
  FScriptContainerElement *local_d8;
  undefined1 local_c8 [32];
  FReadAccessScope local_a8;
  FReadAccessScope local_90;
  undefined1 local_78 [32];
  TVariant<TOptional<UE::Math::TVector2<double>_>,TDelegate<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_a8);
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar7 + 0x38))(), cVar2 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a8);
  if (bVar3) {
    pTVar6 = TAttribute<TOptional<UE::Math::TVector2<double>_>_>::Steal
                       (param_2,(TVariant<TOptional<UE::Math::TVector2<double>_>,TDelegate<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>_>
                                 *)local_78);
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
              ((FSlateAttributeImpl *)this,(SWidget *)local_c8,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar6,&local_90);
    if (((int)pTVar6->_padding_ == 0) ||
       (plVar7 = (longlong *)pTVar6->_padding_, plVar7 == (longlong *)0x0)) {
      lVar9 = 0;
    }
    else {
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x40))(plVar7,local_c8 + 8);
      lVar9 = *plVar7;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_90);
    bVar3 = local_c8._0_8_ != lVar9;
    if (bVar3) {
      ConstructWrapper(this,param_1,
                       (TDelegate<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>
                        *)pTVar6,param_3);
    }
    if ((1 < (ulonglong)(byte)local_78[0x18]) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TOptional<UE::Math::TVector2<double>_>,TDelegate<struct_TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_78[0x18]])(local_78);
  }
  else if (param_2->bIsSet == false) {
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      pFVar8 = FReflectionMetaData::GetWidgetPath((FString *)(local_c8 + 0x10),param_1,true,false);
      if ((pFVar8->Data).ArrayNum == 0) {
        local_d8 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_d8 = (pFVar8->Data).AllocatorInstance.Data;
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if ((void *)local_c8._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_c8._16_8_);
      }
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    FSlateAttributeMetaData::UnregisterAttribute(param_1,(FSlateAttributeBase *)this);
    bVar3 = false;
  }
  else {
    pTVar6 = TAttribute<TOptional<UE::Math::TVector2<double>_>_>::Steal(param_2,&local_58);
    if ((pTVar6->TypeIndex != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    bVar3 = Set(this,param_1,(TOptional<UE::Math::TVector2<double>_> *)pTVar6);
    if ((1 < (ulonglong)local_58.TypeIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TOptional<UE::Math::TVector2<double>_>,TDelegate<struct_TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  return bVar3;
}

// Assign @ 1425cc360

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<TOptional<UE::Math::TVector2<double>_>_> *param_2,
        ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong local_res18;
  TVector2<double>_u_0 local_b8;
  char local_a8;
  undefined1 local_a0 [8];
  FString local_98;
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_88);
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(param_2->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar5 + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (param_2->bIsSet != false) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
                 &local_58);
      if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
          (plVar5 = *(longlong **)&(param_2->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
         (cVar2 = (**(code **)(*plVar5 + 0x38))(), cVar2 == '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      if (bVar3) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
                   &local_40);
        if (*(int *)&(param_2->Getter).field_0x10 == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)&(param_2->Getter).field_0x8;
        }
        (**(code **)(*plVar5 + 0x60))(plVar5,&local_b8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_40);
        if (&local_b8 != (TVector2<double>_u_0 *)param_2) {
          if (local_a8 != '\0') {
            (param_2->Value).TypedValue.field0_0x0._s_0.X = local_b8._s_0.X;
            (param_2->Value).TypedValue.field0_0x0._s_0.Y = local_b8._s_0.Y;
            (param_2->Value).bIsSet = true;
            bVar3 = Set(this,param_1,&param_2->Value);
            return bVar3;
          }
          if ((param_2->Value).bIsSet != false) {
            (param_2->Value).bIsSet = false;
          }
        }
      }
      bVar3 = Set(this,param_1,&param_2->Value);
      return bVar3;
    }
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      FReflectionMetaData::GetWidgetPath(&local_98,param_1,true,false);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    FSlateAttributeMetaData::UnregisterAttribute(param_1,(FSlateAttributeBase *)this);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)&local_res18,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_70)
    ;
    if ((*(int *)&(param_2->Getter).field_0x10 == 0) ||
       (plVar5 = *(longlong **)&(param_2->Getter).field_0x8, plVar5 == (longlong *)0x0)) {
      lVar6 = 0;
    }
    else {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5,local_a0);
      lVar6 = *plVar5;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
    if (local_res18 != lVar6) {
      ConstructWrapper(this,param_1,&param_2->Getter,param_3);
      return true;
    }
  }
  return false;
}

// Assign @ 1425cc5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<TOptional<TTransform2<float>_>_> *param_2,
        ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  float afVar2 [2];
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  TVariant<TOptional<TTransform2<float>_>,TDelegate<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar7;
  longlong *plVar8;
  FString *pFVar9;
  longlong lVar10;
  undefined1 auStack_128 [32];
  FScriptContainerElement *local_108;
  undefined1 local_f8 [32];
  FString local_d8;
  FString local_c8;
  FReadAccessScope local_b8;
  FReadAccessScope local_a0;
  TVariant<TOptional<TTransform2<float>_>,TDelegate<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_88;
  TVariant<TOptional<TTransform2<float>_>,TDelegate<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_60;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_b8);
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar8 = *(longlong **)&(param_2->Getter).field_0x8, plVar8 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*plVar8 + 0x38))(), cVar3 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_b8);
  if (bVar4) {
    pTVar7 = TAttribute<TOptional<TTransform2<float>_>_>::Steal(param_2,&local_88);
    if ((pTVar7->TypeIndex != '\x01') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_f8,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar7,&local_a0);
    if (((int)pTVar7->_padding_ == 0) ||
       (plVar8 = (longlong *)pTVar7->_padding_, plVar8 == (longlong *)0x0)) {
      lVar10 = 0;
    }
    else {
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x40))(plVar8,local_f8 + 8);
      lVar10 = *plVar8;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_a0);
    bVar4 = local_f8._0_8_ != lVar10;
    if (bVar4) {
      ConstructWrapper(this,param_1,
                       (TDelegate<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
                        *)pTVar7,param_3);
    }
    if ((1 < (ulonglong)local_88.TypeIndex) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TOptional<TTransform2<float>_>,TDelegate<struct_TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_88.TypeIndex])(&local_88);
  }
  else if (param_2->bIsSet == false) {
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      pFVar9 = FReflectionMetaData::GetWidgetPath(&local_c8,param_1,true,false);
      if ((pFVar9->Data).ArrayNum == 0) {
        local_108 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_108 = (pFVar9->Data).AllocatorInstance.Data;
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    FSlateAttributeMetaData::UnregisterAttribute(param_1,(FSlateAttributeBase *)this);
    bVar4 = false;
  }
  else {
    pTVar7 = TAttribute<TOptional<TTransform2<float>_>_>::Steal(param_2,&local_60);
    if ((pTVar7->TypeIndex != '\0') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      pFVar9 = FReflectionMetaData::GetWidgetPath((FString *)(local_f8 + 0x10),param_1,true,false);
      if ((pFVar9->Data).ArrayNum == 0) {
        local_108 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_108 = (pFVar9->Data).AllocatorInstance.Data;
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if ((void *)local_f8._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_f8._16_8_);
      }
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    FSlateAttributeMetaData::UnregisterAttribute(param_1,(FSlateAttributeBase *)this);
    bVar4 = ::operator==(&this->Value,(TOptional<TTransform2<float>_> *)pTVar7);
    if (!bVar4) {
      if (pTVar7 != (TVariant<TOptional<TTransform2<float>_>,TDelegate<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>_>
                     *)this) {
        if ((char)pTVar7->_padding_ == '\0') {
          if ((this->Value).bIsSet != false) {
            (this->Value).bIsSet = false;
          }
        }
        else {
          afVar2 = (float  [2])pTVar7->_padding_;
          (this->Value).TypedValue.M.M[0] = (float  [2])pTVar7->_padding_;
          (this->Value).TypedValue.M.M[1] = afVar2;
          (this->Value).TypedValue.Trans.field0_0x0 = (TVector2<float>_u_0)pTVar7->_padding_;
          (this->Value).bIsSet = true;
        }
      }
      if ((param_1->AllocSize != 0) &&
         ((this < param_1 ||
          ((TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
        pFVar9 = FReflectionMetaData::GetWidgetPath(&local_d8,param_1,true,false);
        if ((pFVar9->Data).ArrayNum == 0) {
          local_108 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_108 = (pFVar9->Data).AllocatorInstance.Data;
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                           ,0x1a,
                           L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                          );
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
      }
      FSlateAttributeMetaData::InvalidateWidget(param_1,(FSlateAttributeBase *)this,Member,None);
    }
    bVar4 = !bVar4;
    if ((1 < (ulonglong)local_60.TypeIndex) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TOptional<TTransform2<float>_>,TDelegate<struct_TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_60.TypeIndex])(&local_60);
  }
  return bVar4;
}

// Assign @ 1425cca00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<UE::Math::TVector2<double>_> *param_2,
        ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  double dVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  TVariant<UE::Math::TVector2<double>,TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar7;
  longlong *plVar8;
  FString *pFVar9;
  longlong lVar10;
  undefined1 auStack_118 [32];
  FScriptContainerElement *local_f8;
  undefined1 local_e8 [32];
  FString local_c8;
  FString local_b8;
  FReadAccessScope local_a8;
  FReadAccessScope local_90;
  TVariant<UE::Math::TVector2<double>,TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_78;
  TVariant<UE::Math::TVector2<double>,TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_a8);
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar8 = *(longlong **)&(param_2->Getter).field_0x8, plVar8 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*plVar8 + 0x38))(), cVar3 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a8);
  if (bVar4) {
    pTVar7 = TAttribute<UE::Math::TVector2<double>_>::Steal(param_2,&local_78);
    if ((pTVar7->TypeIndex != '\x01') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_e8,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar7,&local_90);
    if (((int)pTVar7->_padding_ == 0) ||
       (plVar8 = (longlong *)pTVar7->_padding_, plVar8 == (longlong *)0x0)) {
      lVar10 = 0;
    }
    else {
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x40))(plVar8,local_e8 + 8);
      lVar10 = *plVar8;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_90);
    bVar4 = local_e8._0_8_ != lVar10;
    if (bVar4) {
      ConstructWrapper(this,param_1,
                       (TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
                        *)pTVar7,param_3);
    }
    if ((1 < (ulonglong)local_78.TypeIndex) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Math::TVector2<double>,TDelegate<struct_UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_78.TypeIndex])(&local_78);
  }
  else if (param_2->bIsSet == false) {
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      pFVar9 = FReflectionMetaData::GetWidgetPath(&local_b8,param_1,true,false);
      if ((pFVar9->Data).ArrayNum == 0) {
        local_f8 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_f8 = (pFVar9->Data).AllocatorInstance.Data;
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    FSlateAttributeMetaData::UnregisterAttribute(param_1,(FSlateAttributeBase *)this);
    bVar4 = false;
  }
  else {
    pTVar7 = TAttribute<UE::Math::TVector2<double>_>::Steal(param_2,&local_58);
    if ((pTVar7->TypeIndex != '\0') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      pFVar9 = FReflectionMetaData::GetWidgetPath((FString *)(local_e8 + 0x10),param_1,true,false);
      if ((pFVar9->Data).ArrayNum == 0) {
        local_f8 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_f8 = (pFVar9->Data).AllocatorInstance.Data;
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if ((void *)local_e8._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_e8._16_8_);
      }
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    FSlateAttributeMetaData::UnregisterAttribute(param_1,(FSlateAttributeBase *)this);
    if (((double)pTVar7->_padding_ == (this->Value).field0_0x0._s_0.X) &&
       ((double)pTVar7->_padding_ == (this->Value).field0_0x0._s_0.Y)) {
      bVar4 = false;
    }
    else {
      dVar2 = (double)pTVar7->_padding_;
      (this->Value).field0_0x0._s_0.X = (double)pTVar7->_padding_;
      (this->Value).field0_0x0._s_0.Y = dVar2;
      if ((param_1->AllocSize != 0) &&
         ((this < param_1 ||
          ((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
        pFVar9 = FReflectionMetaData::GetWidgetPath(&local_c8,param_1,true,false);
        if ((pFVar9->Data).ArrayNum == 0) {
          local_f8 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_f8 = (pFVar9->Data).AllocatorInstance.Data;
        }
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                           ,0x1a,
                           L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                          );
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
      }
      FSlateAttributeMetaData::InvalidateWidget(param_1,(FSlateAttributeBase *)this,Member,None);
      bVar4 = true;
    }
    if ((1 < (ulonglong)local_58.TypeIndex) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Math::TVector2<double>,TDelegate<struct_UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  return bVar4;
}

// Assign @ 1425cce00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<EVisibility> *param_2,ESlateAttributeBindAction param_3)

{
  uchar uVar1;
  uchar uVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  TVariant<EVisibility,TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar8;
  longlong *plVar9;
  FString *pFVar10;
  longlong lVar11;
  undefined1 auStack_118 [32];
  FScriptContainerElement *local_f8;
  undefined1 local_e8 [32];
  FString local_c8;
  FString local_b8;
  FReadAccessScope local_a8;
  FReadAccessScope local_90;
  TVariant<EVisibility,TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>_> local_78;
  TVariant<EVisibility,TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>_> local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_a8);
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar9 = *(longlong **)&(param_2->Getter).field_0x8, plVar9 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar9 + 0x38))(), cVar4 == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a8);
  if (bVar5) {
    pTVar8 = TAttribute<EVisibility>::Steal(param_2,&local_78);
    if ((pTVar8->TypeIndex != '\x01') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_e8,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar8,&local_90);
    if (((int)pTVar8->_padding_ == 0) ||
       (plVar9 = (longlong *)pTVar8->_padding_, plVar9 == (longlong *)0x0)) {
      lVar11 = 0;
    }
    else {
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x40))(plVar9,local_e8 + 8);
      lVar11 = *plVar9;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_90);
    bVar5 = local_e8._0_8_ != lVar11;
    if (bVar5) {
      ConstructWrapper(this,param_1,
                       (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)pTVar8,
                       param_3);
    }
    if ((1 < (ulonglong)local_78.TypeIndex) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<EVisibility,TDelegate<struct_EVisibility___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_78.TypeIndex])(&local_78);
  }
  else if (param_2->bIsSet == false) {
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      pFVar10 = FReflectionMetaData::GetWidgetPath(&local_b8,param_1,true,false);
      if ((pFVar10->Data).ArrayNum == 0) {
        local_f8 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_f8 = (pFVar10->Data).AllocatorInstance.Data;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    FSlateAttributeMetaData::UnregisterAttribute(param_1,(FSlateAttributeBase *)this);
    bVar5 = false;
  }
  else {
    pTVar8 = TAttribute<EVisibility>::Steal(param_2,&local_58);
    if ((pTVar8->TypeIndex != '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      pFVar10 = FReflectionMetaData::GetWidgetPath((FString *)(local_e8 + 0x10),param_1,true,false);
      if ((pFVar10->Data).ArrayNum == 0) {
        local_f8 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_f8 = (pFVar10->Data).AllocatorInstance.Data;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if ((void *)local_e8._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_e8._16_8_);
      }
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    FSlateAttributeMetaData::UnregisterAttribute(param_1,(FSlateAttributeBase *)this);
    uVar1 = (this->Value).Value.Value;
    uVar2 = (uchar)pTVar8->_padding_;
    if (uVar1 != uVar2) {
      (this->Value).Value.Value = uVar2;
      if ((param_1->AllocSize != 0) &&
         ((this < param_1 ||
          ((TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
        pFVar10 = FReflectionMetaData::GetWidgetPath(&local_c8,param_1,true,false);
        if ((pFVar10->Data).ArrayNum == 0) {
          local_f8 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_f8 = (pFVar10->Data).AllocatorInstance.Data;
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                           ,0x1a,
                           L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                          );
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      FSlateAttributeMetaData::InvalidateWidget(param_1,(FSlateAttributeBase *)this,Member,None);
    }
    bVar5 = uVar1 != uVar2;
    if ((1 < (ulonglong)local_58.TypeIndex) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<EVisibility,TDelegate<struct_EVisibility___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  return bVar5;
}

// Assign @ 1425cd1f0

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<EVisibility> *param_2,ESlateAttributeBindAction param_3)

{
  uchar uVar1;
  uchar uVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong *plVar7;
  longlong lVar8;
  EVisibility local_res18 [8];
  undefined1 local_b8 [32];
  FString local_98;
  FString local_88;
  FReadAccessScope local_78;
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  FReadAccessScope local_30;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_78);
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar7 + 0x38))(), cVar4 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
    if (param_2->bIsSet != false) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
                 &local_60);
      if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
          (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*plVar7 + 0x38))(), cVar4 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_60);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_60);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
                   &local_30);
        if (*(int *)&(param_2->Getter).field_0x10 == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)&(param_2->Getter).field_0x8;
        }
        (**(code **)(*plVar7 + 0x60))(plVar7,local_res18);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_30);
        (param_2->Value).Value.Value = (uchar)local_res18[0].Value.Value;
      }
      if ((param_1->AllocSize != 0) &&
         ((this < param_1 ||
          ((TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
        FReflectionMetaData::GetWidgetPath((FString *)(local_b8 + 0x10),param_1,true,false);
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                           ,0x1a,
                           L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                          );
        if ((void *)local_b8._16_8_ != (void *)0x0) {
          FMemory::Free((void *)local_b8._16_8_);
        }
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      FSlateAttributeMetaData::UnregisterAttribute(param_1,(FSlateAttributeBase *)this);
      uVar1 = (this->Value).Value.Value;
      uVar2 = (param_2->Value).Value.Value;
      if (uVar1 != uVar2) {
        (this->Value).Value.Value = uVar2;
        if ((param_1->AllocSize != 0) &&
           ((this < param_1 ||
            ((TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
          FReflectionMetaData::GetWidgetPath(&local_98,param_1,true,false);
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                             ,0x1a,
                             L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                            );
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
        }
        FSlateAttributeMetaData::InvalidateWidget(param_1,(FSlateAttributeBase *)this,Member,None);
      }
      return uVar1 != uVar2;
    }
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      FReflectionMetaData::GetWidgetPath(&local_88,param_1,true,false);
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    FSlateAttributeMetaData::UnregisterAttribute(param_1,(FSlateAttributeBase *)this);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_b8,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_48)
    ;
    if ((*(int *)&(param_2->Getter).field_0x10 == 0) ||
       (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 == (longlong *)0x0)) {
      lVar8 = 0;
    }
    else {
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x40))(plVar7,local_b8 + 8);
      lVar8 = *plVar7;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    if (local_b8._0_8_ != lVar8) {
      ConstructWrapper(this,param_1,&param_2->Getter,param_3);
      return true;
    }
  }
  return false;
}

// Assign @ 1425cd550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::Assign(TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
         *this,SWidget *param_1,TAttribute<FSlateColor> *param_2,ESlateAttributeBindAction param_3)

{
  ESlateColorStylingMode EVar1;
  undefined4 uVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  TVariant<FSlateColor,TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [40];
  FReadAccessScope local_90;
  TVariant<FSlateColor,TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_> local_78;
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,
             (FReadAccessScope *)(local_b8 + 0x10));
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar9 = *(longlong **)&(param_2->Getter).field_0x8, plVar9 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar9 + 0x38))(), cVar4 == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_b8 + 0x10));
  if (bVar5) {
    pTVar8 = TAttribute<FSlateColor>::Steal(param_2,&local_78);
    if ((pTVar8->TypeIndex != '\x01') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)local_b8,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar8,&local_90);
    if (((int)pTVar8->_padding_ == 0) ||
       (plVar9 = (longlong *)pTVar8->_padding_, plVar9 == (longlong *)0x0)) {
      lVar10 = 0;
    }
    else {
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x40))(plVar9,local_b8 + 8);
      lVar10 = *plVar9;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_90);
    bVar5 = local_b8._0_8_ != lVar10;
    if (bVar5) {
      ConstructWrapper(this,param_1,
                       (TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)pTVar8,
                       param_3);
    }
    if ((1 < (ulonglong)local_78.TypeIndex) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSlateColor,TDelegate<struct_FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_78.TypeIndex])(&local_78);
  }
  else if (param_2->bIsSet == false) {
    FSlateAttributeMetaData::UnregisterAttribute(param_1,(FSlateAttributeBase *)this);
    bVar5 = false;
  }
  else {
    pTVar8 = TAttribute<FSlateColor>::Steal
                       (param_2,(TVariant<FSlateColor,TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_>
                                 *)local_58);
    if ((pTVar8->TypeIndex != '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    FSlateAttributeMetaData::UnregisterAttribute(param_1,(FSlateAttributeBase *)this);
    if ((((*(float *)&pTVar8->_padding_ == (this->Value).SpecifiedColor.field0_0x0._s_0.R) &&
         (*(float *)((longlong)&pTVar8->_padding_ + 4) ==
          (this->Value).SpecifiedColor.field0_0x0._s_0.G)) &&
        ((*(float *)&pTVar8->_padding_ == (this->Value).SpecifiedColor.field0_0x0._s_0.B &&
         ((*(float *)((longlong)&pTVar8->_padding_ + 4) ==
           (this->Value).SpecifiedColor.field0_0x0._s_0.A &&
          (EVar1 = (this->Value).ColorUseRule, EVar1 == (ESlateColorStylingMode)pTVar8->_padding_)))
         ))) && ((EVar1 != UseColor_ColorTable ||
                 ((this->Value).ColorTableId == *(EStyleColor *)((longlong)&pTVar8->_padding_ + 1)))
                )) {
      bVar5 = false;
    }
    else {
      lVar10 = pTVar8->_padding_;
      *(longlong *)&(this->Value).SpecifiedColor.field0_0x0 = pTVar8->_padding_;
      *(longlong *)((longlong)&(this->Value).SpecifiedColor.field0_0x0 + 8) = lVar10;
      uVar2 = (undefined4)pTVar8->_padding_;
      (this->Value).ColorUseRule = (char)uVar2;
      (this->Value).ColorTableId = (char)((uint)uVar2 >> 8);
      *(short *)&(this->Value).field_0x12 = (short)((uint)uVar2 >> 0x10);
      FSlateAttributeMetaData::InvalidateWidget(param_1,(FSlateAttributeBase *)this,Managed,Paint);
      bVar5 = true;
    }
    if ((1 < (ulonglong)(byte)local_58[0x18]) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSlateColor,TDelegate<struct_FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_58[0x18]])(local_58);
  }
  return bVar5;
}

// Assign @ 1425cd7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<FSlateColor> *param_2,ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  TVariant<FSlateColor,TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar6;
  longlong *plVar7;
  FString *pFVar8;
  longlong lVar9;
  undefined1 auStack_f8 [32];
  FScriptContainerElement *local_d8;
  undefined1 local_c8 [32];
  FReadAccessScope local_a8;
  FReadAccessScope local_90;
  undefined1 local_78 [32];
  TVariant<FSlateColor,TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_> local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_a8);
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar7 + 0x38))(), cVar2 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a8);
  if (bVar3) {
    pTVar6 = TAttribute<FSlateColor>::Steal
                       (param_2,(TVariant<FSlateColor,TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_>
                                 *)local_78);
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
              ((FSlateAttributeImpl *)this,(SWidget *)local_c8,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar6,&local_90);
    if (((int)pTVar6->_padding_ == 0) ||
       (plVar7 = (longlong *)pTVar6->_padding_, plVar7 == (longlong *)0x0)) {
      lVar9 = 0;
    }
    else {
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x40))(plVar7,local_c8 + 8);
      lVar9 = *plVar7;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_90);
    bVar3 = local_c8._0_8_ != lVar9;
    if (bVar3) {
      ConstructWrapper(this,param_1,
                       (TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)pTVar6,
                       param_3);
    }
    if ((1 < (ulonglong)(byte)local_78[0x18]) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSlateColor,TDelegate<struct_FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_78[0x18]])(local_78);
  }
  else if (param_2->bIsSet == false) {
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      pFVar8 = FReflectionMetaData::GetWidgetPath((FString *)(local_c8 + 0x10),param_1,true,false);
      if ((pFVar8->Data).ArrayNum == 0) {
        local_d8 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_d8 = (pFVar8->Data).AllocatorInstance.Data;
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if ((void *)local_c8._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_c8._16_8_);
      }
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    FSlateAttributeMetaData::UnregisterAttribute(param_1,(FSlateAttributeBase *)this);
    bVar3 = false;
  }
  else {
    pTVar6 = TAttribute<FSlateColor>::Steal(param_2,&local_58);
    if ((pTVar6->TypeIndex != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    bVar3 = Set(this,param_1,(FSlateColor *)pTVar6);
    if ((1 < (ulonglong)local_58.TypeIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSlateColor,TDelegate<struct_FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  return bVar3;
}

// Assign @ 1425cdad0

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<FSlateColor> *param_2,ESlateAttributeBindAction param_3)

{
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  ESlateColorStylingMode EVar1;
  code *pcVar2;
  undefined8 uVar3;
  EStyleColor EVar4;
  undefined2 uVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  longlong *plVar9;
  FSlateColor *pFVar10;
  longlong lVar11;
  longlong local_res18;
  undefined1 local_88 [8];
  FString local_80;
  FString local_70;
  FString local_60;
  FReadAccessScope local_50;
  FReadAccessScope local_38;
  
  this_00 = &param_2->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_50);
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar9 = *(longlong **)&(param_2->Getter).field_0x8, plVar9 == (longlong *)0x0)) ||
     (cVar6 = (**(code **)(*plVar9 + 0x38))(), cVar6 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    if (param_2->bIsSet == false) {
      if ((param_1->AllocSize != 0) &&
         ((this < param_1 ||
          ((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
        FReflectionMetaData::GetWidgetPath(&local_60,param_1,true,false);
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                           ,0x1a,
                           L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                          );
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return (bool)uVar8;
        }
      }
      FSlateAttributeMetaData::UnregisterAttribute(param_1,(FSlateAttributeBase *)this);
    }
    else {
      pFVar10 = TAttribute<FSlateColor>::Get(param_2);
      if ((param_1->AllocSize != 0) &&
         ((this < param_1 ||
          ((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
        FReflectionMetaData::GetWidgetPath(&local_80,param_1,true,false);
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                           ,0x1a,
                           L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                          );
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return (bool)uVar8;
        }
      }
      FSlateAttributeMetaData::UnregisterAttribute(param_1,(FSlateAttributeBase *)this);
      if ((((((pFVar10->SpecifiedColor).field0_0x0._s_0.R !=
              (this->Value).SpecifiedColor.field0_0x0._s_0.R) ||
            ((pFVar10->SpecifiedColor).field0_0x0._s_0.G !=
             (this->Value).SpecifiedColor.field0_0x0._s_0.G)) ||
           ((pFVar10->SpecifiedColor).field0_0x0._s_0.B !=
            (this->Value).SpecifiedColor.field0_0x0._s_0.B)) ||
          (((pFVar10->SpecifiedColor).field0_0x0._s_0.A !=
            (this->Value).SpecifiedColor.field0_0x0._s_0.A ||
           (EVar1 = (this->Value).ColorUseRule, EVar1 != pFVar10->ColorUseRule)))) ||
         ((EVar1 == UseColor_ColorTable && ((this->Value).ColorTableId != pFVar10->ColorTableId))))
      {
        uVar3 = *(undefined8 *)((longlong)&(pFVar10->SpecifiedColor).field0_0x0 + 8);
        *(undefined8 *)&(this->Value).SpecifiedColor.field0_0x0 =
             *(undefined8 *)&(pFVar10->SpecifiedColor).field0_0x0;
        *(undefined8 *)((longlong)&(this->Value).SpecifiedColor.field0_0x0 + 8) = uVar3;
        EVar4 = pFVar10->ColorTableId;
        uVar5 = *(undefined2 *)&pFVar10->field_0x12;
        (this->Value).ColorUseRule = pFVar10->ColorUseRule;
        (this->Value).ColorTableId = EVar4;
        *(undefined2 *)&(this->Value).field_0x12 = uVar5;
        if ((param_1->AllocSize != 0) &&
           ((this < param_1 ||
            ((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
          FReflectionMetaData::GetWidgetPath(&local_70,param_1,true,false);
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                             ,0x1a,
                             L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                            );
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
        }
        FSlateAttributeMetaData::InvalidateWidget(param_1,(FSlateAttributeBase *)this,Member,None);
        return true;
      }
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    FSlateAttributeImpl::ProtectedFindGetterHandle
              ((FSlateAttributeImpl *)this,(SWidget *)&local_res18,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_38);
    if ((*(int *)&(param_2->Getter).field_0x10 == 0) ||
       (plVar9 = *(longlong **)&(param_2->Getter).field_0x8, plVar9 == (longlong *)0x0)) {
      lVar11 = 0;
    }
    else {
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x40))(plVar9,local_88);
      lVar11 = *plVar9;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    if (local_res18 != lVar11) {
      ConstructWrapper(this,param_1,this_00,param_3);
      return true;
    }
  }
  return false;
}

// Assign @ 1425cdde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<bool> *param_2,ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  TVariant<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar6;
  longlong *plVar7;
  FString *pFVar8;
  longlong lVar9;
  undefined1 auStack_f8 [32];
  FScriptContainerElement *local_d8;
  undefined1 local_c8 [32];
  FReadAccessScope local_a8;
  FReadAccessScope local_90;
  undefined1 local_78 [32];
  TVariant<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_> local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_2->Getter,&local_a8);
  if (((*(int *)&(param_2->Getter).field_0x10 == 0) ||
      (plVar7 = *(longlong **)&(param_2->Getter).field_0x8, plVar7 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar7 + 0x38))(), cVar2 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a8);
  if (bVar3) {
    pTVar6 = TAttribute<bool>::Steal
                       (param_2,(TVariant<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
                                 *)local_78);
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
              ((FSlateAttributeImpl *)this,(SWidget *)local_c8,(ESlateAttributeType)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar6,&local_90);
    if (((int)pTVar6->_padding_ == 0) ||
       (plVar7 = (longlong *)pTVar6->_padding_, plVar7 == (longlong *)0x0)) {
      lVar9 = 0;
    }
    else {
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x40))(plVar7,local_c8 + 8);
      lVar9 = *plVar7;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_90);
    bVar3 = local_c8._0_8_ != lVar9;
    if (bVar3) {
      ConstructWrapper(this,param_1,
                       (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)pTVar6,param_3);
    }
    if ((1 < (ulonglong)(byte)local_78[0x18]) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_78[0x18]])(local_78);
  }
  else if (param_2->bIsSet == false) {
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      pFVar8 = FReflectionMetaData::GetWidgetPath((FString *)(local_c8 + 0x10),param_1,true,false);
      if ((pFVar8->Data).ArrayNum == 0) {
        local_d8 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_d8 = (pFVar8->Data).AllocatorInstance.Data;
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if ((void *)local_c8._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_c8._16_8_);
      }
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    FSlateAttributeMetaData::UnregisterAttribute(param_1,(FSlateAttributeBase *)this);
    bVar3 = false;
  }
  else {
    pTVar6 = TAttribute<bool>::Steal(param_2,&local_58);
    if ((pTVar6->TypeIndex != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    bVar3 = Set(this,param_1,(bool *)pTVar6);
    if ((1 < (ulonglong)local_58.TypeIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  return bVar3;
}

// ConstructWrapper @ 1425d75e0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::ConstructWrapper(TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                   *this,SWidget *param_1,
                  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
                  ESlateAttributeBindAction param_3)

{
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_18 [2];
  
  local_18[0].Ptr = ::operator_new(0x28);
  if (local_18[0].Ptr == (ISlateAttributeGetter *)0x0) {
    local_18[0].Ptr = (ISlateAttributeGetter *)0x0;
  }
  else {
    *local_18[0].Ptr =
         (ISlateAttributeGetter)
         &
         ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__PEBUFSlateBrush__U__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____00_SlateAttributePrivate_____TSlateAttributeBase_VSWidget__PEBUFSlateBrush__U__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____00_SlateAttributePrivate__6B_
    ;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_18[0].Ptr + 1),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
    local_18[0].Ptr[4] = (ISlateAttributeGetter)this;
  }
  FSlateAttributeMetaData::RegisterAttribute(param_1,(FSlateAttributeBase *)this,Managed,local_18);
  if ((param_3 & Initialize) != None) {
    FSlateAttributeMetaData::UpdateAttribute(param_1,(FSlateAttributeBase *)this);
  }
  if (local_18[0].Ptr != (ISlateAttributeGetter *)0x0) {
    (**(code **)((longlong)*local_18[0].Ptr + 0x20))(local_18[0].Ptr,1);
  }
  return;
}

// ConstructWrapper @ 1425d76a0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::ConstructWrapper(TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                   *this,SWidget *param_1,
                  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
                  ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res10;
  FString local_38;
  FString local_28;
  
  local_res10.Ptr = ::operator_new(0x28);
  if (local_res10.Ptr == (ISlateAttributeGetter *)0x0) {
    local_res10.Ptr = (ISlateAttributeGetter *)0x0;
  }
  else {
    *local_res10.Ptr =
         (ISlateAttributeGetter)
         &
         ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__PEBUFSlateBrush__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__PEBUFSlateBrush__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
    ;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_res10.Ptr + 1),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
    local_res10.Ptr[4] = (ISlateAttributeGetter)this;
  }
  if ((param_1->AllocSize != 0) &&
     ((this < param_1 ||
      ((TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
    FReflectionMetaData::GetWidgetPath(&local_38,param_1,true,false);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                       ,0x1a,
                       L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSlateAttributeMetaData::RegisterAttribute
            (param_1,(FSlateAttributeBase *)this,Member,&local_res10);
  if ((param_3 & Initialize) != None) {
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      FReflectionMetaData::GetWidgetPath(&local_28,param_1,true,false);
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FSlateAttributeMetaData::UpdateAttribute(param_1,(FSlateAttributeBase *)this);
  }
  if (local_res10.Ptr != (ISlateAttributeGetter *)0x0) {
    (**(code **)((longlong)*local_res10.Ptr + 0x20))(local_res10.Ptr,1);
  }
  return;
}

// ConstructWrapper @ 1425d7840

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::ConstructWrapper(TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                   *this,SWidget *param_1,
                  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
                  ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res10;
  FString local_38;
  FString local_28;
  
  local_res10.Ptr = ::operator_new(0x28);
  if (local_res10.Ptr == (ISlateAttributeGetter *)0x0) {
    local_res10.Ptr = (ISlateAttributeGetter *)0x0;
  }
  else {
    *local_res10.Ptr =
         (ISlateAttributeGetter)
         &
         ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__PEBUFSlateBrush__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__PEBUFSlateBrush__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
    ;
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)
               (local_res10.Ptr + 1),param_2);
    local_res10.Ptr[4] = (ISlateAttributeGetter)this;
  }
  if ((param_1->AllocSize != 0) &&
     ((this < param_1 ||
      ((TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
    FReflectionMetaData::GetWidgetPath(&local_38,param_1,true,false);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                       ,0x1a,
                       L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSlateAttributeMetaData::RegisterAttribute
            (param_1,(FSlateAttributeBase *)this,Member,&local_res10);
  if ((param_3 & Initialize) != None) {
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      FReflectionMetaData::GetWidgetPath(&local_28,param_1,true,false);
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FSlateAttributeMetaData::UpdateAttribute(param_1,(FSlateAttributeBase *)this);
  }
  if (local_res10.Ptr != (ISlateAttributeGetter *)0x0) {
    (**(code **)((longlong)*local_res10.Ptr + 0x20))(local_res10.Ptr,1);
  }
  return;
}

// ConstructWrapper @ 1425d79e0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::ConstructWrapper(TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                   *this,SWidget *param_1,
                  TDelegate<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>
                  *param_2,ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res10;
  FString local_38;
  FString local_28;
  
  local_res10.Ptr = ::operator_new(0x28);
  if (local_res10.Ptr == (ISlateAttributeGetter *)0x0) {
    local_res10.Ptr = (ISlateAttributeGetter *)0x0;
  }
  else {
    *local_res10.Ptr =
         (ISlateAttributeGetter)
         &
         ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__U__TOptional_U__TVector2_N_Math_UE____UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__U__TOptional_U__TVector2_N_Math_UE____UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
    ;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_res10.Ptr + 1),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
    local_res10.Ptr[4] = (ISlateAttributeGetter)this;
  }
  if ((param_1->AllocSize != 0) &&
     ((this < param_1 ||
      ((TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
    FReflectionMetaData::GetWidgetPath(&local_38,param_1,true,false);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                       ,0x1a,
                       L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSlateAttributeMetaData::RegisterAttribute
            (param_1,(FSlateAttributeBase *)this,Member,&local_res10);
  if ((param_3 & Initialize) != None) {
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      FReflectionMetaData::GetWidgetPath(&local_28,param_1,true,false);
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FSlateAttributeMetaData::UpdateAttribute(param_1,(FSlateAttributeBase *)this);
  }
  if (local_res10.Ptr != (ISlateAttributeGetter *)0x0) {
    (**(code **)((longlong)*local_res10.Ptr + 0x20))(local_res10.Ptr,1);
  }
  return;
}

// ConstructWrapper @ 1425d7b80

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::ConstructWrapper(TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                   *this,SWidget *param_1,
                  TDelegate<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>
                  *param_2,ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res10;
  FString local_38;
  FString local_28;
  
  local_res10.Ptr = ::operator_new(0x28);
  if (local_res10.Ptr == (ISlateAttributeGetter *)0x0) {
    local_res10.Ptr = (ISlateAttributeGetter *)0x0;
  }
  else {
    *local_res10.Ptr =
         (ISlateAttributeGetter)
         &
         ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__U__TOptional_U__TVector2_N_Math_UE____UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__U__TOptional_U__TVector2_N_Math_UE____UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
    ;
    TDelegate<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>
                *)(local_res10.Ptr + 1),param_2);
    local_res10.Ptr[4] = (ISlateAttributeGetter)this;
  }
  if ((param_1->AllocSize != 0) &&
     ((this < param_1 ||
      ((TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
    FReflectionMetaData::GetWidgetPath(&local_38,param_1,true,false);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                       ,0x1a,
                       L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSlateAttributeMetaData::RegisterAttribute
            (param_1,(FSlateAttributeBase *)this,Member,&local_res10);
  if ((param_3 & Initialize) != None) {
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      FReflectionMetaData::GetWidgetPath(&local_28,param_1,true,false);
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FSlateAttributeMetaData::UpdateAttribute(param_1,(FSlateAttributeBase *)this);
  }
  if (local_res10.Ptr != (ISlateAttributeGetter *)0x0) {
    (**(code **)((longlong)*local_res10.Ptr + 0x20))(local_res10.Ptr,1);
  }
  return;
}

// ConstructWrapper @ 1425d7d20

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::ConstructWrapper(TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                   *this,SWidget *param_1,
                  TDelegate<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
                  *param_2,ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res10;
  FString local_38;
  FString local_28;
  
  local_res10.Ptr = ::operator_new(0x28);
  if (local_res10.Ptr == (ISlateAttributeGetter *)0x0) {
    local_res10.Ptr = (ISlateAttributeGetter *)0x0;
  }
  else {
    *local_res10.Ptr =
         (ISlateAttributeGetter)
         &
         ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__U__TOptional_V__TTransform2_M____UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__U__TOptional_V__TTransform2_M____UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
    ;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_res10.Ptr + 1),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
    local_res10.Ptr[4] = (ISlateAttributeGetter)this;
  }
  if ((param_1->AllocSize != 0) &&
     ((this < param_1 ||
      ((TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
    FReflectionMetaData::GetWidgetPath(&local_38,param_1,true,false);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                       ,0x1a,
                       L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSlateAttributeMetaData::RegisterAttribute
            (param_1,(FSlateAttributeBase *)this,Member,&local_res10);
  if ((param_3 & Initialize) != None) {
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      FReflectionMetaData::GetWidgetPath(&local_28,param_1,true,false);
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FSlateAttributeMetaData::UpdateAttribute(param_1,(FSlateAttributeBase *)this);
  }
  if (local_res10.Ptr != (ISlateAttributeGetter *)0x0) {
    (**(code **)((longlong)*local_res10.Ptr + 0x20))(local_res10.Ptr,1);
  }
  return;
}

// ConstructWrapper @ 1425d7ec0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::ConstructWrapper(TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                   *this,SWidget *param_1,
                  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
                  *param_2,ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res10;
  FString local_38;
  FString local_28;
  
  local_res10.Ptr = ::operator_new(0x28);
  if (local_res10.Ptr == (ISlateAttributeGetter *)0x0) {
    local_res10.Ptr = (ISlateAttributeGetter *)0x0;
  }
  else {
    *local_res10.Ptr =
         (ISlateAttributeGetter)
         &
         ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__U__TVector2_N_Math_UE__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__U__TVector2_N_Math_UE__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
    ;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_res10.Ptr + 1),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
    local_res10.Ptr[4] = (ISlateAttributeGetter)this;
  }
  if ((param_1->AllocSize != 0) &&
     ((this < param_1 ||
      ((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
    FReflectionMetaData::GetWidgetPath(&local_38,param_1,true,false);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                       ,0x1a,
                       L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSlateAttributeMetaData::RegisterAttribute
            (param_1,(FSlateAttributeBase *)this,Member,&local_res10);
  if ((param_3 & Initialize) != None) {
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      FReflectionMetaData::GetWidgetPath(&local_28,param_1,true,false);
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FSlateAttributeMetaData::UpdateAttribute(param_1,(FSlateAttributeBase *)this);
  }
  if (local_res10.Ptr != (ISlateAttributeGetter *)0x0) {
    (**(code **)((longlong)*local_res10.Ptr + 0x20))(local_res10.Ptr,1);
  }
  return;
}

// ConstructWrapper @ 1425d8060

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::ConstructWrapper(TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                   *this,SWidget *param_1,
                  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
                  ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res10;
  FString local_38;
  FString local_28;
  
  local_res10.Ptr = ::operator_new(0x28);
  if (local_res10.Ptr == (ISlateAttributeGetter *)0x0) {
    local_res10.Ptr = (ISlateAttributeGetter *)0x0;
  }
  else {
    *local_res10.Ptr =
         (ISlateAttributeGetter)
         &
         ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__UEVisibility__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__UEVisibility__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
    ;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_res10.Ptr + 1),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
    local_res10.Ptr[4] = (ISlateAttributeGetter)this;
  }
  if ((param_1->AllocSize != 0) &&
     ((this < param_1 ||
      ((TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
    FReflectionMetaData::GetWidgetPath(&local_38,param_1,true,false);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                       ,0x1a,
                       L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSlateAttributeMetaData::RegisterAttribute
            (param_1,(FSlateAttributeBase *)this,Member,&local_res10);
  if ((param_3 & Initialize) != None) {
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      FReflectionMetaData::GetWidgetPath(&local_28,param_1,true,false);
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FSlateAttributeMetaData::UpdateAttribute(param_1,(FSlateAttributeBase *)this);
  }
  if (local_res10.Ptr != (ISlateAttributeGetter *)0x0) {
    (**(code **)((longlong)*local_res10.Ptr + 0x20))(local_res10.Ptr,1);
  }
  return;
}

// ConstructWrapper @ 1425d8200

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::ConstructWrapper(TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                   *this,SWidget *param_1,
                  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
                  ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res10;
  FString local_38;
  FString local_28;
  
  local_res10.Ptr = ::operator_new(0x28);
  if (local_res10.Ptr == (ISlateAttributeGetter *)0x0) {
    local_res10.Ptr = (ISlateAttributeGetter *)0x0;
  }
  else {
    *local_res10.Ptr =
         (ISlateAttributeGetter)
         &
         ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__UEVisibility__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__UEVisibility__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
    ;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)
               (local_res10.Ptr + 1),param_2);
    local_res10.Ptr[4] = (ISlateAttributeGetter)this;
  }
  if ((param_1->AllocSize != 0) &&
     ((this < param_1 ||
      ((TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
    FReflectionMetaData::GetWidgetPath(&local_38,param_1,true,false);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                       ,0x1a,
                       L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSlateAttributeMetaData::RegisterAttribute
            (param_1,(FSlateAttributeBase *)this,Member,&local_res10);
  if ((param_3 & Initialize) != None) {
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      FReflectionMetaData::GetWidgetPath(&local_28,param_1,true,false);
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FSlateAttributeMetaData::UpdateAttribute(param_1,(FSlateAttributeBase *)this);
  }
  if (local_res10.Ptr != (ISlateAttributeGetter *)0x0) {
    (**(code **)((longlong)*local_res10.Ptr + 0x20))(local_res10.Ptr,1);
  }
  return;
}

// ConstructWrapper @ 1425d83a0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
::ConstructWrapper(TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                   *this,SWidget *param_1,
                  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
                  ESlateAttributeBindAction param_3)

{
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_18 [2];
  
  local_18[0].Ptr = ::operator_new(0x28);
  if (local_18[0].Ptr == (ISlateAttributeGetter *)0x0) {
    local_18[0].Ptr = (ISlateAttributeGetter *)0x0;
  }
  else {
    *local_18[0].Ptr =
         (ISlateAttributeGetter)
         &
         ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__UFSlateColor__U__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____00_SlateAttributePrivate_____TSlateAttributeBase_VSWidget__UFSlateColor__U__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____00_SlateAttributePrivate__6B_
    ;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_18[0].Ptr + 1),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
    local_18[0].Ptr[4] = (ISlateAttributeGetter)this;
  }
  FSlateAttributeMetaData::RegisterAttribute(param_1,(FSlateAttributeBase *)this,Managed,local_18);
  if ((param_3 & Initialize) != None) {
    FSlateAttributeMetaData::UpdateAttribute(param_1,(FSlateAttributeBase *)this);
  }
  if (local_18[0].Ptr != (ISlateAttributeGetter *)0x0) {
    (**(code **)((longlong)*local_18[0].Ptr + 0x20))(local_18[0].Ptr,1);
  }
  return;
}

// ConstructWrapper @ 1425d8460

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::ConstructWrapper(TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                   *this,SWidget *param_1,
                  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
                  ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res10;
  FString local_38;
  FString local_28;
  
  local_res10.Ptr = ::operator_new(0x28);
  if (local_res10.Ptr == (ISlateAttributeGetter *)0x0) {
    local_res10.Ptr = (ISlateAttributeGetter *)0x0;
  }
  else {
    *local_res10.Ptr =
         (ISlateAttributeGetter)
         &
         ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__UFSlateColor__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__UFSlateColor__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
    ;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_res10.Ptr + 1),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
    local_res10.Ptr[4] = (ISlateAttributeGetter)this;
  }
  if ((param_1->AllocSize != 0) &&
     ((this < param_1 ||
      ((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
    FReflectionMetaData::GetWidgetPath(&local_38,param_1,true,false);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                       ,0x1a,
                       L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSlateAttributeMetaData::RegisterAttribute
            (param_1,(FSlateAttributeBase *)this,Member,&local_res10);
  if ((param_3 & Initialize) != None) {
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      FReflectionMetaData::GetWidgetPath(&local_28,param_1,true,false);
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FSlateAttributeMetaData::UpdateAttribute(param_1,(FSlateAttributeBase *)this);
  }
  if (local_res10.Ptr != (ISlateAttributeGetter *)0x0) {
    (**(code **)((longlong)*local_res10.Ptr + 0x20))(local_res10.Ptr,1);
  }
  return;
}

// ConstructWrapper @ 1425d8600

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::ConstructWrapper(TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                   *this,SWidget *param_1,
                  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
                  ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res10;
  FString local_38;
  FString local_28;
  
  local_res10.Ptr = ::operator_new(0x28);
  if (local_res10.Ptr == (ISlateAttributeGetter *)0x0) {
    local_res10.Ptr = (ISlateAttributeGetter *)0x0;
  }
  else {
    *local_res10.Ptr =
         (ISlateAttributeGetter)
         &
         ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__UFSlateColor__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__UFSlateColor__UFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
    ;
    TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)
               (local_res10.Ptr + 1),param_2);
    local_res10.Ptr[4] = (ISlateAttributeGetter)this;
  }
  if ((param_1->AllocSize != 0) &&
     ((this < param_1 ||
      ((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
    FReflectionMetaData::GetWidgetPath(&local_38,param_1,true,false);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                       ,0x1a,
                       L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSlateAttributeMetaData::RegisterAttribute
            (param_1,(FSlateAttributeBase *)this,Member,&local_res10);
  if ((param_3 & Initialize) != None) {
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      FReflectionMetaData::GetWidgetPath(&local_28,param_1,true,false);
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FSlateAttributeMetaData::UpdateAttribute(param_1,(FSlateAttributeBase *)this);
  }
  if (local_res10.Ptr != (ISlateAttributeGetter *)0x0) {
    (**(code **)((longlong)*local_res10.Ptr + 0x20))(local_res10.Ptr,1);
  }
  return;
}

// ConstructWrapper @ 1425d87a0

void __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::ConstructWrapper(TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                   *this,SWidget *param_1,
                  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
                  ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_res10;
  FString local_38;
  FString local_28;
  
  local_res10.Ptr = ::operator_new(0x28);
  if (local_res10.Ptr == (ISlateAttributeGetter *)0x0) {
    local_res10.Ptr = (ISlateAttributeGetter *)0x0;
  }
  else {
    *local_res10.Ptr =
         (ISlateAttributeGetter)
         &
         ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget___NUFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget___NUFSlateAttributeNoInvalidationReason_SlateAttributePrivate__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
    ;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_res10.Ptr + 1),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
    local_res10.Ptr[4] = (ISlateAttributeGetter)this;
  }
  if ((param_1->AllocSize != 0) &&
     ((this < param_1 ||
      ((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
    FReflectionMetaData::GetWidgetPath(&local_38,param_1,true,false);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                       ,0x1a,
                       L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSlateAttributeMetaData::RegisterAttribute
            (param_1,(FSlateAttributeBase *)this,Member,&local_res10);
  if ((param_3 & Initialize) != None) {
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      FReflectionMetaData::GetWidgetPath(&local_28,param_1,true,false);
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FSlateAttributeMetaData::UpdateAttribute(param_1,(FSlateAttributeBase *)this);
  }
  if (local_res10.Ptr != (ISlateAttributeGetter *)0x0) {
    (**(code **)((longlong)*local_res10.Ptr + 0x20))(local_res10.Ptr,1);
  }
  return;
}

// Set @ 1425faea0

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::Set(TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
      *this,ISlateAttributeContainer *param_1,float *param_2)

{
  SWidget *pSVar1;
  
  pSVar1 = (SWidget *)(**(code **)*param_1)(param_1);
  FSlateAttributeMetaData::UnregisterAttribute(pSVar1,(FSlateAttributeBase *)this);
  (**(code **)*param_1)(param_1);
  if (*param_2 == this->Value) {
    return false;
  }
  this->Value = *param_2;
  (**(code **)*param_1)(param_1);
  FSlateAttributeMetaData::InvalidateWidget(param_1,(FSlateAttributeBase *)this,Contained,None);
  return true;
}

// Set @ 1425faf30

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Set(TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      *this,SWidget *param_1,TOptional<UE::Math::TVector2<double>_> *param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  undefined1 uVar4;
  byte bVar5;
  FString local_28;
  FString local_18;
  
  if ((param_1->AllocSize != 0) &&
     ((this < param_1 ||
      ((TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
    FReflectionMetaData::GetWidgetPath(&local_28,param_1,true,false);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                       ,0x1a,
                       L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                      );
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  FSlateAttributeMetaData::UnregisterAttribute(param_1,(FSlateAttributeBase *)this);
  bVar3 = (this->Value).bIsSet;
  if ((bVar3 == param_2->bIsSet) &&
     ((bVar3 == false ||
      (((param_2->TypedValue).field0_0x0._s_0.X == (this->Value).TypedValue.field0_0x0._s_0.X &&
       ((param_2->TypedValue).field0_0x0._s_0.Y == (this->Value).TypedValue.field0_0x0._s_0.Y))))))
  {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
    if (param_2 != &this->Value) {
      if (param_2->bIsSet == false) {
        if (bVar3 != false) {
          (this->Value).bIsSet = false;
        }
      }
      else {
        dVar2 = (param_2->TypedValue).field0_0x0._s_0.Y;
        (this->Value).TypedValue.field0_0x0._s_0.X = (param_2->TypedValue).field0_0x0._s_0.X;
        (this->Value).TypedValue.field0_0x0._s_0.Y = dVar2;
        (this->Value).bIsSet = true;
      }
    }
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      FReflectionMetaData::GetWidgetPath(&local_18,param_1,true,false);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    FSlateAttributeMetaData::InvalidateWidget(param_1,(FSlateAttributeBase *)this,Member,None);
  }
  return (bool)(bVar5 ^ 1);
}

// Set @ 1425fb0e0

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Set(TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      *this,SWidget *param_1,TOptional<UE::Math::TVector2<double>_> *param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  undefined1 uVar4;
  byte bVar5;
  FString local_28;
  FString local_18;
  
  if ((param_1->AllocSize != 0) &&
     ((this < param_1 ||
      ((TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
    FReflectionMetaData::GetWidgetPath(&local_28,param_1,true,false);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                       ,0x1a,
                       L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                      );
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  FSlateAttributeMetaData::UnregisterAttribute(param_1,(FSlateAttributeBase *)this);
  bVar3 = (this->Value).bIsSet;
  if ((bVar3 == param_2->bIsSet) &&
     ((bVar3 == false ||
      (((param_2->TypedValue).field0_0x0._s_0.X == (this->Value).TypedValue.field0_0x0._s_0.X &&
       ((param_2->TypedValue).field0_0x0._s_0.Y == (this->Value).TypedValue.field0_0x0._s_0.Y))))))
  {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
    if (param_2 != &this->Value) {
      if (param_2->bIsSet == false) {
        if (bVar3 != false) {
          (this->Value).bIsSet = false;
        }
      }
      else {
        dVar2 = (param_2->TypedValue).field0_0x0._s_0.Y;
        (this->Value).TypedValue.field0_0x0._s_0.X = (param_2->TypedValue).field0_0x0._s_0.X;
        (this->Value).TypedValue.field0_0x0._s_0.Y = dVar2;
        (this->Value).bIsSet = true;
      }
    }
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      FReflectionMetaData::GetWidgetPath(&local_18,param_1,true,false);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    FSlateAttributeMetaData::InvalidateWidget(param_1,(FSlateAttributeBase *)this,Member,None);
  }
  return (bool)(bVar5 ^ 1);
}

// Set @ 1425fb290

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Set(TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      *this,SWidget *param_1,FSlateColor *param_2)

{
  ESlateColorStylingMode EVar1;
  code *pcVar2;
  undefined8 uVar3;
  EStyleColor EVar4;
  undefined2 uVar5;
  bool bVar6;
  undefined1 uVar7;
  FString local_28;
  FString local_18;
  
  if ((param_1->AllocSize != 0) &&
     ((this < param_1 ||
      ((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
    FReflectionMetaData::GetWidgetPath(&local_28,param_1,true,false);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                       ,0x1a,
                       L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                      );
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
  }
  FSlateAttributeMetaData::UnregisterAttribute(param_1,(FSlateAttributeBase *)this);
  if ((((((param_2->SpecifiedColor).field0_0x0._s_0.R ==
          (this->Value).SpecifiedColor.field0_0x0._s_0.R) &&
        ((param_2->SpecifiedColor).field0_0x0._s_0.G ==
         (this->Value).SpecifiedColor.field0_0x0._s_0.G)) &&
       ((param_2->SpecifiedColor).field0_0x0._s_0.B ==
        (this->Value).SpecifiedColor.field0_0x0._s_0.B)) &&
      (((param_2->SpecifiedColor).field0_0x0._s_0.A ==
        (this->Value).SpecifiedColor.field0_0x0._s_0.A &&
       (EVar1 = (this->Value).ColorUseRule, EVar1 == param_2->ColorUseRule)))) &&
     ((EVar1 != UseColor_ColorTable || ((this->Value).ColorTableId == param_2->ColorTableId)))) {
    bVar6 = false;
  }
  else {
    uVar3 = *(undefined8 *)((longlong)&(param_2->SpecifiedColor).field0_0x0 + 8);
    *(undefined8 *)&(this->Value).SpecifiedColor.field0_0x0 =
         *(undefined8 *)&(param_2->SpecifiedColor).field0_0x0;
    *(undefined8 *)((longlong)&(this->Value).SpecifiedColor.field0_0x0 + 8) = uVar3;
    EVar4 = param_2->ColorTableId;
    uVar5 = *(undefined2 *)&param_2->field_0x12;
    (this->Value).ColorUseRule = param_2->ColorUseRule;
    (this->Value).ColorTableId = EVar4;
    *(undefined2 *)&(this->Value).field_0x12 = uVar5;
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      FReflectionMetaData::GetWidgetPath(&local_18,param_1,true,false);
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
    }
    FSlateAttributeMetaData::InvalidateWidget(param_1,(FSlateAttributeBase *)this,Member,None);
    bVar6 = true;
  }
  return bVar6;
}

// Set @ 1425fb440

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Set(TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      *this,SWidget *param_1,bool *param_2)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FString local_38;
  FString local_28;
  
  if ((param_1->AllocSize != 0) &&
     ((this < param_1 ||
      ((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
        *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
    FReflectionMetaData::GetWidgetPath(&local_38,param_1,true,false);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                       ,0x1a,
                       L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                      );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  FSlateAttributeMetaData::UnregisterAttribute(param_1,(FSlateAttributeBase *)this);
  bVar3 = this->Value;
  bVar1 = *param_2;
  if (bVar3 != bVar1) {
    this->Value = bVar1;
    if ((param_1->AllocSize != 0) &&
       ((this < param_1 ||
        ((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          *)((longlong)&param_1->_padding_ + param_1->AllocSize) < this)))) {
      FReflectionMetaData::GetWidgetPath(&local_28,param_1,true,false);
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlateAttributePtr >= WidgetPtr && SlateAttributePtr <= WidgetPtr + OwningWidget.GetAllocSize()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttribute.cpp"
                         ,0x1a,
                         L"You can only register Attribute that are defined in a SWidget. Use TAttribute or TSlateExternalAttribute instead. See SWidget: \'%s\'. See SlateAttribute.h for more info."
                        );
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    FSlateAttributeMetaData::InvalidateWidget(param_1,(FSlateAttributeBase *)this,Member,None);
  }
  return bVar3 != bVar1;
}

// operator() @ 150490920

bool __thiscall
`SlateAttributePrivate::
TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
::VerifyNan'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_133510780678045638>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_133510780678045638>,
                       &`public:___cdecl_`private:_void___cdecl_SlateAttributePrivate::TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>::VerifyNan(void)const___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150490e50

bool __thiscall
`SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::VerifyNan'::__l17::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_133510780678045626>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_133510780678045626>,
                       &`public:___cdecl_`private:_void___cdecl_SlateAttributePrivate::TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>::VerifyNan(void)const___ptr64'::`17'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150490f80

bool __thiscall
`SlateAttributePrivate::
TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::VerifyNan'::__l37::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_133510780678045606>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_133510780678045606>,
                       &`public:___cdecl_`private:_void___cdecl_SlateAttributePrivate::TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>::VerifyNan(void)const___ptr64'::`37'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

