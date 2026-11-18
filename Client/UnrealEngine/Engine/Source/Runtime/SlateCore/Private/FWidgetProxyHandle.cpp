// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 12

// FWidgetProxyHandle @ 142477380

FWidgetProxyHandle * __thiscall
FWidgetProxyHandle::FWidgetProxyHandle
          (FWidgetProxyHandle *this,FSlateInvalidationRootHandle *param_1,
          FSlateInvalidationWidgetIndex param_2,FSlateInvalidationWidgetSortOrder param_3)

{
  FSlateInvalidationRoot *pFVar1;
  int iVar2;
  undefined4 uVar3;
  
  pFVar1 = param_1->InvalidationRoot;
  iVar2 = param_1->UniqueId;
  uVar3 = *(undefined4 *)&param_1->field_0xc;
  this->WidgetIndex = param_2;
  (this->WidgetSortOrder).Order = param_3.Order;
  (this->InvalidationRootHandle).InvalidationRoot = pFVar1;
  (this->InvalidationRootHandle).UniqueId = iVar2;
  *(undefined4 *)&(this->InvalidationRootHandle).field_0xc = uVar3;
  return this;
}

// FWidgetProxyHandle @ 1424773a0

FWidgetProxyHandle * __thiscall
FWidgetProxyHandle::FWidgetProxyHandle
          (FWidgetProxyHandle *this,FSlateInvalidationWidgetIndex param_1)

{
  FSlateInvalidationRootHandle::FSlateInvalidationRootHandle(&this->InvalidationRootHandle);
  this->WidgetIndex = param_1;
  (this->WidgetSortOrder).Order = 0;
  return this;
}

// GetProxy @ 142492d00

FWidgetProxy * __thiscall FWidgetProxyHandle::GetProxy(FWidgetProxyHandle *this)

{
  FWidgetProxy *pFVar1;
  
  pFVar1 = FSlateInvalidationWidgetList::operator[]
                     ((((this->InvalidationRootHandle).InvalidationRoot)->FastWidgetPathList).Ptr,
                      this->WidgetIndex);
  return pFVar1;
}

// GetProxy @ 142492d20

FWidgetProxy * __thiscall FWidgetProxyHandle::GetProxy(FWidgetProxyHandle *this)

{
  FWidgetProxy *pFVar1;
  
  pFVar1 = FSlateInvalidationWidgetList::operator[]
                     ((((this->InvalidationRootHandle).InvalidationRoot)->FastWidgetPathList).Ptr,
                      this->WidgetIndex);
  return pFVar1;
}

// GetWidgetVisibility @ 1424970c0

FSlateInvalidationWidgetVisibility __thiscall
FWidgetProxyHandle::GetWidgetVisibility(FWidgetProxyHandle *this,SWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSlateInvalidationWidgetVisibility_u_0 FVar3;
  FSlateInvalidationRoot *pFVar4;
  FWidgetProxy *pFVar5;
  SWidget *in_R8;
  
  if (in_R8 == (SWidget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Widget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\WidgetProxy.cpp"
                       ,0x148,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Flags = (*pcVar1)();
      return (FSlateInvalidationWidgetVisibility_u_0)
             (FSlateInvalidationWidgetVisibility_u_0)FVar3._s_0;
    }
  }
  pFVar4 = FSlateInvalidationRootHandle::GetInvalidationRoot(&this->InvalidationRootHandle);
  if (pFVar4 != (FSlateInvalidationRoot *)0x0) {
    bVar2 = FSlateInvalidationWidgetList::IsValidIndex
                      ((pFVar4->FastWidgetPathList).Ptr,this->WidgetIndex);
    if (bVar2) {
      pFVar5 = FSlateInvalidationWidgetList::operator[]
                         ((pFVar4->FastWidgetPathList).Ptr,this->WidgetIndex);
      if (pFVar5->Widget == in_R8) {
        pFVar5 = FSlateInvalidationWidgetList::operator[]
                           ((((this->InvalidationRootHandle).InvalidationRoot)->FastWidgetPathList).
                            Ptr,this->WidgetIndex);
        *(FSlateInvalidationWidgetVisibility_u_0 *)&param_1->_padding_ =
             (pFVar5->Visibility).field0_0x0;
        goto LAB_142497153;
      }
    }
  }
  *(undefined1 *)&param_1->_padding_ = 0;
LAB_142497153:
  return (FSlateInvalidationWidgetVisibility)SUB81(param_1,0);
}

// HasAllInvalidationReason @ 142497440

bool __thiscall
FWidgetProxyHandle::HasAllInvalidationReason
          (FWidgetProxyHandle *this,SWidget *param_1,EInvalidateWidgetReason param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FSlateInvalidationRoot *pFVar4;
  FWidgetProxy *pFVar5;
  
  if ((param_1 == (SWidget *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Widget",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\WidgetProxy.cpp"
                         ,0x148,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pFVar4 = FSlateInvalidationRootHandle::GetInvalidationRoot(&this->InvalidationRootHandle);
  if (((pFVar4 != (FSlateInvalidationRoot *)0x0) &&
      (bVar2 = FSlateInvalidationWidgetList::IsValidIndex
                         ((pFVar4->FastWidgetPathList).Ptr,this->WidgetIndex), bVar2)) &&
     (pFVar5 = FSlateInvalidationWidgetList::operator[]
                         ((pFVar4->FastWidgetPathList).Ptr,this->WidgetIndex),
     pFVar5->Widget == param_1)) {
    pFVar5 = FSlateInvalidationWidgetList::operator[]
                       ((((this->InvalidationRootHandle).InvalidationRoot)->FastWidgetPathList).Ptr,
                        this->WidgetIndex);
    return (pFVar5->CurrentInvalidateReason & param_2) == param_2;
  }
  return false;
}

// HasAnyInvalidationReason @ 142497500

bool __thiscall
FWidgetProxyHandle::HasAnyInvalidationReason
          (FWidgetProxyHandle *this,SWidget *param_1,EInvalidateWidgetReason param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FSlateInvalidationRoot *pFVar4;
  FWidgetProxy *pFVar5;
  
  if ((param_1 == (SWidget *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Widget",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\WidgetProxy.cpp"
                         ,0x148,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pFVar4 = FSlateInvalidationRootHandle::GetInvalidationRoot(&this->InvalidationRootHandle);
  if (((pFVar4 != (FSlateInvalidationRoot *)0x0) &&
      (bVar2 = FSlateInvalidationWidgetList::IsValidIndex
                         ((pFVar4->FastWidgetPathList).Ptr,this->WidgetIndex), bVar2)) &&
     (pFVar5 = FSlateInvalidationWidgetList::operator[]
                         ((pFVar4->FastWidgetPathList).Ptr,this->WidgetIndex),
     pFVar5->Widget == param_1)) {
    pFVar5 = FSlateInvalidationWidgetList::operator[]
                       ((((this->InvalidationRootHandle).InvalidationRoot)->FastWidgetPathList).Ptr,
                        this->WidgetIndex);
    return (pFVar5->CurrentInvalidateReason & param_2) != None;
  }
  return false;
}

// IsValid @ 14249b3b0

bool __thiscall FWidgetProxyHandle::IsValid(FWidgetProxyHandle *this,SWidget *param_1)

{
  bool bVar1;
  FSlateInvalidationRoot *pFVar2;
  FWidgetProxy *pFVar3;
  
  pFVar2 = FSlateInvalidationRootHandle::GetInvalidationRoot(&this->InvalidationRootHandle);
  if (pFVar2 != (FSlateInvalidationRoot *)0x0) {
    bVar1 = FSlateInvalidationWidgetList::IsValidIndex
                      ((pFVar2->FastWidgetPathList).Ptr,this->WidgetIndex);
    if (bVar1) {
      pFVar3 = FSlateInvalidationWidgetList::operator[]
                         ((pFVar2->FastWidgetPathList).Ptr,this->WidgetIndex);
      if (pFVar3->Widget == param_1) {
        return true;
      }
    }
  }
  return false;
}

// IsValid @ 14249b420

bool __thiscall FWidgetProxyHandle::IsValid(FWidgetProxyHandle *this,SWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FSlateInvalidationRoot *pFVar4;
  FWidgetProxy *pFVar5;
  
  if (param_1 == (SWidget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Widget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\WidgetProxy.cpp"
                       ,0x148,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pFVar4 = FSlateInvalidationRootHandle::GetInvalidationRoot(&this->InvalidationRootHandle);
  if (pFVar4 != (FSlateInvalidationRoot *)0x0) {
    bVar2 = FSlateInvalidationWidgetList::IsValidIndex
                      ((pFVar4->FastWidgetPathList).Ptr,this->WidgetIndex);
    if (bVar2) {
      pFVar5 = FSlateInvalidationWidgetList::operator[]
                         ((pFVar4->FastWidgetPathList).Ptr,this->WidgetIndex);
      if (pFVar5->Widget == param_1) {
        return true;
      }
    }
  }
  return false;
}

// MarkWidgetDirty_NoCheck @ 14249ca80

void __thiscall
FWidgetProxyHandle::MarkWidgetDirty_NoCheck(FWidgetProxyHandle *this,FWidgetProxy *param_1)

{
  FSlateInvalidationRoot::InvalidateWidget
            ((this->InvalidationRootHandle).InvalidationRoot,param_1,
             param_1->CurrentInvalidateReason);
  return;
}

// MarkWidgetDirty_NoCheck @ 14249caa0

void __thiscall
FWidgetProxyHandle::MarkWidgetDirty_NoCheck
          (FWidgetProxyHandle *this,EInvalidateWidgetReason param_1)

{
  FWidgetProxy *pFVar1;
  
  pFVar1 = FSlateInvalidationWidgetList::operator[]
                     ((((this->InvalidationRootHandle).InvalidationRoot)->FastWidgetPathList).Ptr,
                      this->WidgetIndex);
  FSlateInvalidationRoot::InvalidateWidget
            ((this->InvalidationRootHandle).InvalidationRoot,pFVar1,param_1);
  return;
}

// UpdateWidgetFlags @ 1424ad1b0

void __thiscall
FWidgetProxyHandle::UpdateWidgetFlags
          (FWidgetProxyHandle *this,SWidget *param_1,EWidgetUpdateFlags param_2,
          EWidgetUpdateFlags param_3)

{
  ushort uVar1;
  FSlateInvalidationWidgetList *pFVar2;
  SWidget *pSVar3;
  code *pcVar4;
  bool bVar5;
  FSlateInvalidationRoot *pFVar6;
  FWidgetProxy *pFVar7;
  TSlateElementSortedArray<unsigned_short,TLess<void>_> *this_00;
  undefined1 local_res18 [16];
  
  if ((param_2 != param_3) &&
     ((((param_2 & (NeedsVolatilePrepass|NeedsVolatilePaint|NeedsActiveTimerUpdate|NeedsTick)) !=
       None) != ((param_3 &
                 (NeedsVolatilePrepass|NeedsVolatilePaint|NeedsActiveTimerUpdate|NeedsTick)) != None
                ) || (param_2 >> 7 != param_3 >> 7)))) {
    if ((param_1 == (SWidget *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Widget",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\WidgetProxy.cpp"
                           ,0x148,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar6 = FSlateInvalidationRootHandle::GetInvalidationRoot(&this->InvalidationRootHandle);
    if (((pFVar6 != (FSlateInvalidationRoot *)0x0) &&
        (bVar5 = FSlateInvalidationWidgetList::IsValidIndex
                           ((pFVar6->FastWidgetPathList).Ptr,this->WidgetIndex), bVar5)) &&
       (pFVar7 = FSlateInvalidationWidgetList::operator[]
                           ((pFVar6->FastWidgetPathList).Ptr,this->WidgetIndex),
       pFVar7->Widget == param_1)) {
      pFVar7 = FSlateInvalidationWidgetList::operator[]
                         ((((this->InvalidationRootHandle).InvalidationRoot)->FastWidgetPathList).
                          Ptr,this->WidgetIndex);
      pFVar2 = (((this->InvalidationRootHandle).InvalidationRoot)->FastWidgetPathList).Ptr;
      if (pFVar2->NumberOfLock != 0) {
        local_res18[0] = 0;
        `FSlateInvalidationWidgetList::ProcessVolatileUpdateInvalidation'::__l2::<lambda_1>::
        operator()(local_res18);
      }
      pSVar3 = pFVar7->Widget;
      if ((pSVar3 == (SWidget *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("WidgetPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetList.cpp"
                             ,0x2eb,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar1 = (pFVar7->Index).ElementIndex;
      this_00 = (TSlateElementSortedArray<unsigned_short,TLess<void>_> *)
                ((ulonglong)(pFVar7->Index).ArrayIndex * 0x40 + *(longlong *)&pFVar2->Data + 0x30);
      if ((pSVar3->UpdateFlags &
          (NeedsVolatilePrepass|NeedsVolatilePaint|NeedsActiveTimerUpdate|NeedsTick)) == None) {
        TSlateElementSortedArray<unsigned_short,TLess<void>_>::RemoveSingle(this_00,uVar1);
      }
      else {
        TSlateElementSortedArray<unsigned_short,TLess<void>_>::InsertUnique(this_00,uVar1);
      }
      (pFVar7->field6_0x16).PrivateFlags =
           (pFVar7->field6_0x16).PrivateFlags ^
           (pSVar3->UpdateFlags >> 3 ^ (pFVar7->field6_0x16).PrivateFlags) & 0x10;
    }
  }
  return;
}

