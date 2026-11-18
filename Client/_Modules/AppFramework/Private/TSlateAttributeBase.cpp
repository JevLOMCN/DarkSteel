// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 4

// Assign @ 142f58bc0

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> *param_2,
        ESlateAttributeBindAction param_3)

{
  TDelegate<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
  *this_00;
  char cVar1;
  bool bVar2;
  longlong *plVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
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
      pTVar4 = TAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>::Get(param_2);
      bVar2 = Set(this,param_1,pTVar4);
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
        *local_res18[0].Ptr =
             (ISlateAttributeGetter)
             &
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__V__TArray_HV__TSizedDefaultAllocator__0CA_____U__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__V__TArray_HV__TSizedDefaultAllocator__0CA_____U__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
        ;
        TDelegate<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
        ::
        TDelegate<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
                  ((TDelegate<TArray<int,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
                    *)(local_res18[0].Ptr + 1),this_00);
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

// Set @ 14300ccd0

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Set(TSlateAttributeBase<SWidget,TArray<int,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      *this,SWidget *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  bool bVar3;
  int iVar4;
  
  FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
  iVar4 = (this->Value).ArrayNum;
  iVar2 = param_2->ArrayNum;
  if (iVar4 == iVar2) {
    if (iVar4 != 0) {
      iVar4 = memcmp((this->Value).AllocatorInstance.Data,(param_2->AllocatorInstance).Data,
                     (longlong)iVar4 << 2);
      if (iVar4 != 0) goto LAB_14300cd1f;
    }
    bVar3 = false;
  }
  else {
LAB_14300cd1f:
    if (&this->Value != param_2) {
      iVar4 = (this->Value).ArrayMax;
      piVar1 = &(this->Value).ArrayMax;
      _Src = (param_2->AllocatorInstance).Data;
      (this->Value).ArrayNum = iVar2;
      if ((iVar2 == 0) && (iVar4 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,iVar4,(ForAnyElementType *)this,iVar2,piVar1);
        if (iVar2 != 0) {
          memcpy((this->Value).AllocatorInstance.Data,_Src,(longlong)iVar2 << 2);
        }
      }
    }
    FSlateAttributeImpl::ProtectedInvalidateWidget((FSlateAttributeImpl *)this,param_1,Member,Paint)
    ;
    bVar3 = true;
  }
  return bVar3;
}

// Assign @ 14301d3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EOrientation,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(void *this,SWidget *param_1,TAttribute<EOrientation> *param_2,
        ESlateAttributeBindAction param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  TVariant<EOrientation,TDelegate<EOrientation___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_b8;
  undefined1 local_b0 [40];
  FReadAccessScope local_88;
  TVariant<EOrientation,TDelegate<EOrientation___cdecl(void),FDefaultDelegateUserPolicy>_> local_70;
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
      goto LAB_14301d43b;
    }
  }
  bVar4 = false;
LAB_14301d43b:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_b0 + 0x10));
  if (bVar4) {
    pTVar7 = TAttribute<enum_EOrientation>::Steal(param_2,&local_70);
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
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget__W4EOrientation__U__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget__W4EOrientation__U__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
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
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<EOrientation,TDelegate<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    FSlateAttributeImpl::ProtectedUnregisterAttribute(this,param_1,Member);
    bVar4 = false;
  }
  else {
    pTVar7 = TAttribute<enum_EOrientation>::Steal
                       (param_2,(TVariant<EOrientation,TDelegate<EOrientation___cdecl(void),FDefaultDelegateUserPolicy>_>
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
      FSlateAttributeImpl::ProtectedInvalidateWidget(this,param_1,Member,Paint);
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
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<EOrientation,TDelegate<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50[0x18]])(local_50);
  }
  return bVar4;
}

// Assign @ 14301d6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Assign(TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *this,SWidget *param_1,TAttribute<bool> *param_2,ESlateAttributeBindAction param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  TVariant<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  TUniquePtr<SlateAttributePrivate::ISlateAttributeGetter,TDefaultDelete<SlateAttributePrivate::ISlateAttributeGetter>_>
  local_b8;
  undefined1 local_b0 [40];
  FReadAccessScope local_88;
  TVariant<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_> local_70;
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
      goto LAB_14301d6fb;
    }
  }
  bVar3 = false;
LAB_14301d6fb:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_b0 + 0x10));
  if (bVar3) {
    pTVar6 = TAttribute<bool>::Steal(param_2,&local_70);
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
             ___7__FSlateAttributeGetterWrapper_U__TSlateAttributeBase_VSWidget___NU__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate_____TSlateAttributeBase_VSWidget___NU__TSlateAttributeInvalidationReason__01__U__TSlateAttributeComparePredicate_U__TEqualTo_X_____0A__SlateAttributePrivate__6B_
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
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.TypeIndex])(&local_70);
  }
  else if (param_2->bIsSet == false) {
    FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
    bVar3 = false;
  }
  else {
    pTVar6 = TAttribute<bool>::Steal
                       (param_2,(TVariant<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
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
    bVar5 = SUB81(pTVar6->_padding_,0);
    bVar3 = this->Value != bVar5;
    if (bVar3) {
      this->Value = bVar5;
      FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)this,param_1,Member,Paint);
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
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50[0x18]])(local_50);
  }
  return bVar3;
}

