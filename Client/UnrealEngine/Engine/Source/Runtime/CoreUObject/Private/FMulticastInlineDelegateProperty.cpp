// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 13

// FMulticastInlineDelegateProperty @ 142161790

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FMulticastInlineDelegateProperty * __thiscall
FMulticastInlineDelegateProperty::FMulticastInlineDelegateProperty
          (FMulticastInlineDelegateProperty *this,FFieldVariant param_1,
          FMulticastDelegatePropertyParams *param_2)

{
  ulonglong uVar1;
  UFunction *pUVar2;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  local_res8 = uVar1;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  FMulticastDelegateProperty::FMulticastDelegateProperty
            ((FMulticastDelegateProperty *)this,(FFieldVariant)&local_res8,param_2,
             CPF_ZeroConstructor);
  *(undefined ***)this =
       &
       ___7__TProperty_V__TMulticastScriptDelegate_UFNotThreadSafeDelegateMode____VFMulticastDelegateProperty____6B_
  ;
  FProperty::SetElementSize((FProperty *)this,0x18);
  *(undefined ***)this =
       &
       ___7__TProperty_MulticastDelegate_V__TMulticastScriptDelegate_UFNotThreadSafeDelegateMode______6B_
  ;
  if (param_2->SignatureFunctionFunc == (_func___cdecl_UFunction_ptr *)0x0) {
    pUVar2 = (UFunction *)0x0;
  }
  else {
    pUVar2 = (*param_2->SignatureFunctionFunc)();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UFunction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  *(UFunction **)&this->field_0x70 = pUVar2;
  *(undefined ***)this = &___7FMulticastInlineDelegateProperty__6B_;
  return this;
}

// AddDelegate @ 1421663d0

void __thiscall
FMulticastInlineDelegateProperty::AddDelegate
          (FMulticastInlineDelegateProperty *this,
          TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UObject *param_2,void *param_3)

{
  UObject *local_res18;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_res20;
  
  local_res18 = param_2;
  local_res20 = param_3;
  ResolveDelegateReference(this,&local_res18,&local_res20);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddUnique(local_res20,param_1);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// ClearDelegate @ 1421697c0

void __thiscall
FMulticastInlineDelegateProperty::ClearDelegate
          (FMulticastInlineDelegateProperty *this,UObject *param_1,void *param_2)

{
  undefined1 *puVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar2;
  UObject *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *local_res18 [2];
  FDestructionSentinel local_28;
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  ResolveDelegateReference(this,&local_res10,local_res18);
  pTVar2 = local_res18[0];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (local_res18[0],(FWriteAccessScope *)&local_28);
  puVar1 = &pTVar2[2].AccessDetector.State.field_0x4;
  *(undefined4 *)&pTVar2[2].AccessDetector.State = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)(pTVar2 + 1),0,(int *)puVar1);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Construct @ 14216bad0

FField * __cdecl
FMulticastInlineDelegateProperty::Construct
          (FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  FMulticastDelegateProperty *this;
  FFieldClass *pFVar2;
  ulonglong local_res20;
  
  this = FMemory::Malloc(0x78,0);
  if (this == (FMulticastDelegateProperty *)0x0) {
    return (FField *)0x0;
  }
  pFVar2 = StaticClass();
  FField::FField((FField *)this,EC_InternalUseOnlyConstructor,pFVar2);
  this->_padding_ = (longlong)&___7FMulticastInlineDelegateProperty__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SignatureFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  uVar1 = (param_1->Container).Unknown;
  local_res20 = uVar1;
  if ((((uVar1 & 1) == 0) || ((UObject *)(uVar1 & 0xfffffffffffffffe) == (UObject *)0x0)) ||
     (UE::GC::GIsIncrementalReachabilityPending == false)) {
    if ((uVar1 & 1) != 0) {
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_14216bb95;
      goto LAB_14216bbae;
    }
LAB_14216bbd2:
    if (((uVar1 & 1) == 0) || ((uVar1 & 0xfffffffffffffffe) == 0)) goto LAB_14216bbf1;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_14216bb95:
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14216bbae:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_14216bbd2;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14216bbd2;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_14216bbf1:
  FMulticastDelegateProperty::FMulticastDelegateProperty
            (this,(FFieldVariant)&local_res20,param_2,param_3);
  this->_padding_ =
       (longlong)
       &
       ___7__TProperty_V__TMulticastScriptDelegate_UFNotThreadSafeDelegateMode____VFMulticastDelegateProperty____6B_
  ;
  FProperty::SetElementSize((FProperty *)this,0x18);
  this->_padding_ = (longlong)&___7FMulticastInlineDelegateProperty__6B_;
  (this->SignatureFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  return (FField *)this;
}

// GetFieldSize @ 14217bc90

ulong64 __thiscall
FMulticastInlineDelegateProperty::GetFieldSize(FMulticastInlineDelegateProperty *this)

{
  return 0x78;
}

// GetMulticastDelegate @ 14217c5f0

TMulticastScriptDelegate<FNotThreadSafeDelegateMode> * __thiscall
FMulticastInlineDelegateProperty::GetMulticastDelegate
          (FMulticastInlineDelegateProperty *this,void *param_1)

{
  return param_1;
}

// GetMulticastScriptDelegate @ 14217c6b0

TMulticastScriptDelegate<FNotThreadSafeDelegateMode> * __thiscall
FMulticastInlineDelegateProperty::GetMulticastScriptDelegate
          (FMulticastInlineDelegateProperty *this,void *param_1,int param_2)

{
  if (param_1 != (void *)0x0) {
    return (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
           ((longlong)param_1 + (longlong)param_2 * 0x18);
  }
  return &FMulticastDelegateProperty::EmptyDelegate;
}

// ImportText_Internal @ 1421810f0

wchar_t * __thiscall
FMulticastInlineDelegateProperty::ImportText_Internal
          (FMulticastInlineDelegateProperty *this,wchar_t *param_1,void *param_2,
          EPropertyPointerType param_3,UObject *param_4,int param_5,FOutputDevice *param_6)

{
  char cVar1;
  wchar_t *pwVar2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> local_28;
  
  if (param_3 == Container) {
    cVar1 = (**(code **)(*(longlong *)this + 0x70))();
    if (cVar1 != '\0') {
      local_28._padding_ = 0;
      local_28.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.InvocationList.ArrayNum = 0;
      local_28.InvocationList.ArrayMax = 0;
      pwVar2 = FMulticastDelegateProperty::ImportDelegateFromText
                         ((FMulticastDelegateProperty *)this,&local_28,param_1,param_4,param_6);
      if (pwVar2 != (wchar_t *)0x0) {
        FProperty::SetValue_InContainer((FProperty *)this,param_2,&local_28);
      }
      if (local_28.InvocationList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.InvocationList.AllocatorInstance.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&local_28);
      return pwVar2;
    }
    param_2 = (void *)((longlong)*(int *)&this->field_0x44 + (longlong)param_2);
  }
  pwVar2 = FMulticastDelegateProperty::ImportDelegateFromText
                     ((FMulticastDelegateProperty *)this,param_2,param_1,param_4,param_6);
  return pwVar2;
}

// RemoveDelegate @ 142188f20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMulticastInlineDelegateProperty::RemoveDelegate
          (FMulticastInlineDelegateProperty *this,
          TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UObject *param_2,void *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_> *this_00
  ;
  <lambda_1> local_res10 [8];
  UObject *local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *local_res20;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_58;
  FDestructionSentinel local_48;
  FReadAccessScope local_30;
  
  local_res18 = param_2;
  local_res20 = param_3;
  ResolveDelegateReference(this,&local_res18,&local_res20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_30);
  local_58.Object = param_1->Object;
  local_58.FunctionName = param_1->FunctionName;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_30);
  pTVar4 = local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (local_res20,(FWriteAccessScope *)&local_48);
  this_00 = (TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
             *)(pTVar4 + 1);
  uVar6 = TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
          ::Find(this_00,&local_58);
  if (uVar6 != 0xffffffff) {
    uVar7 = 0;
    if ((int)(uVar6 + 1) <= *(int *)&pTVar4[2].AccessDetector.State) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar1 = *(int *)&pTVar4[2].AccessDetector.State;
    pFVar2 = (this_00->AllocatorInstance).Data;
    iVar8 = iVar1 + ~uVar6;
    if (1 < iVar8) {
      iVar8 = 1;
    }
    if (iVar8 != 0) {
      memmove(pFVar2 + (longlong)(int)uVar6 * 0x10,pFVar2 + (longlong)(iVar1 - iVar8) * 0x10,
              (longlong)iVar8 << 4);
    }
    *(int *)&pTVar4[2].AccessDetector.State = *(int *)&pTVar4[2].AccessDetector.State + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,(ForAnyElementType *)this_00,*(int *)&pTVar4[2].AccessDetector.State,
               (int *)&pTVar4[2].AccessDetector.State.field_0x4);
  }
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            (this_00,local_res10,Default);
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// SerializeItem @ 14218e620

void __thiscall
FMulticastInlineDelegateProperty::SerializeItem
          (FMulticastInlineDelegateProperty *this,FStructuredArchiveSlot param_1,void *param_2,
          void *param_3)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  ::operator<<(pFVar1,param_2);
  return;
}

// SetMulticastDelegate @ 142191c90

void __thiscall
FMulticastInlineDelegateProperty::SetMulticastDelegate
          (FMulticastInlineDelegateProperty *this,void *param_1,
          TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_2)

{
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  undefined8 local_48 [2];
  FDestructionSentinel local_38;
  
  pFVar3 = (FScriptContainerElement *)0x0;
  iVar4 = 0;
  iVar5 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
             (FReadAccessScope *)&local_38);
  pTVar1 = &param_2->InvocationList;
  if ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_> *)
      local_48 != pTVar1) {
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar4 = (param_2->InvocationList).ArrayNum;
    iVar5 = (param_2->InvocationList).ArrayMax;
    (param_2->InvocationList).ArrayNum = 0;
    (param_2->InvocationList).ArrayMax = 0;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (param_1,(FWriteAccessScope *)&local_38);
  puVar2 = (undefined8 *)((longlong)param_1 + 8);
  if (puVar2 != local_48) {
    if ((void *)*puVar2 != (void *)0x0) {
      FMemory::Free((void *)*puVar2);
    }
    *puVar2 = pFVar3;
    pFVar3 = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_1 + 0x10) = iVar4;
    *(int *)((longlong)param_1 + 0x14) = iVar5;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// StaticClass @ 142193940

FFieldClass * __cdecl FMulticastInlineDelegateProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FMulticastDelegateProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FMulticastInlineDelegateProperty",0x4000000000000,
                 CASTCLASS_FMulticastInlineDelegateProperty|CASTCLASS_FMulticastDelegateProperty|
                 CASTCLASS_FProperty|CASTCLASS_UField,pFVar1,Construct);
      atexit(`FMulticastInlineDelegateProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// operator_new @ 142259c50

void * __cdecl FMulticastInlineDelegateProperty::operator_new(ulong64 param_1)

{
  FField *this;
  FFieldClass *pFVar1;
  
  this = FMemory::Malloc(param_1,0);
  if (this != (FField *)0x0) {
    pFVar1 = StaticClass();
    FField::FField(this,EC_InternalUseOnlyConstructor,pFVar1);
    this[1].Next = (FField *)0x0;
    this[1].NamePrivate.ComparisonIndex = 0;
    this[1].NamePrivate.Number = 0;
    *(undefined8 *)&this[1].FlagsPrivate = 0;
    this[2]._padding_ = 0;
    this[2].ClassPrivate = (FFieldClass *)0x0;
    this[2].Owner.Container.Field = (FField *)0x0;
    this->_padding_ = (longlong)&___7FMulticastInlineDelegateProperty__6B_;
  }
  return this;
}

