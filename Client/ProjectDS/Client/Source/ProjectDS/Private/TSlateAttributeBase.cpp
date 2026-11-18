// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// Assign @ 14bd462b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
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
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__MU__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__MU__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
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
                ((FSlateAttributeImpl *)this,param_1,Member,Paint);
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

