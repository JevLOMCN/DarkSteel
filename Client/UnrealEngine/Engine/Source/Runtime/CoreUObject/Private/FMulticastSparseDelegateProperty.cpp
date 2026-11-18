// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 15

// FMulticastSparseDelegateProperty @ 1421618a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FMulticastSparseDelegateProperty * __thiscall
FMulticastSparseDelegateProperty::FMulticastSparseDelegateProperty
          (FMulticastSparseDelegateProperty *this,FFieldVariant param_1,
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
            ((FMulticastDelegateProperty *)this,(FFieldVariant)&local_res8,param_2,CPF_NoDestructor)
  ;
  *(undefined ***)this = &___7__TProperty_UFSparseDelegate__VFMulticastDelegateProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,1);
  *(undefined ***)this = &___7__TProperty_MulticastDelegate_UFSparseDelegate____6B_;
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
  *(undefined ***)this = &___7FMulticastSparseDelegateProperty__6B_;
  return this;
}

// AddDelegate @ 142166420

void __thiscall
FMulticastSparseDelegateProperty::AddDelegate
          (FMulticastSparseDelegateProperty *this,
          TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UObject *param_2,void *param_3)

{
  byte bVar1;
  FName FVar2;
  byte *pbVar3;
  bool bVar4;
  USparseDelegateFunction *pUVar5;
  UObject *local_res18;
  byte *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FWeakObjectPtr local_60;
  FName local_58;
  TScriptDelegate<FNotThreadSafeDelegateMode> local_50;
  FReadAccessScope local_38;
  
  local_res18 = param_2;
  local_res20 = param_3;
  ResolveDelegateReference(this,&local_res18,&local_res20);
  pUVar5 = CastChecked<USparseDelegateFunction,UFunction>
                     ((TObjectPtr<UFunction> *)&this->field_0x70,NullChecked);
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FReadAccessScope *)&local_50);
  local_60 = param_1->Object;
  local_58 = param_1->FunctionName;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_50);
  pbVar3 = local_res20;
  FVar2 = pUVar5->DelegateName;
  local_50._padding_ = 0;
  bVar1 = *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_68,&local_38);
  local_50.Object = local_60;
  local_50.FunctionName = local_58;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  bVar4 = FSparseDelegateStorage::AddUnique(local_res18,FVar2,&local_50);
  *pbVar3 = bVar4 | bVar1;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// ClearDelegate @ 142169840

void __thiscall
FMulticastSparseDelegateProperty::ClearDelegate
          (FMulticastSparseDelegateProperty *this,UObject *param_1,void *param_2)

{
  char *pcVar1;
  USparseDelegateFunction *pUVar2;
  UObject *local_res10;
  char *local_res18 [2];
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  ResolveDelegateReference(this,&local_res10,local_res18);
  pUVar2 = CastChecked<USparseDelegateFunction,UFunction>
                     ((TObjectPtr<UFunction> *)&this->field_0x70,NullChecked);
  pcVar1 = local_res18[0];
  if (*local_res18[0] != '\0') {
    FSparseDelegateStorage::Clear(local_res10,pUVar2->DelegateName);
    *pcVar1 = '\0';
  }
  return;
}

// Construct @ 14216bc60

FField * __cdecl
FMulticastSparseDelegateProperty::Construct
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
  this->_padding_ = (longlong)&___7FMulticastSparseDelegateProperty__6B_;
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
      if ((uVar1 & 0xfffffffffffffffe) != 0) goto LAB_14216bd25;
      goto LAB_14216bd3e;
    }
LAB_14216bd62:
    if (((uVar1 & 1) == 0) || ((uVar1 & 0xfffffffffffffffe) == 0)) goto LAB_14216bd81;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
LAB_14216bd25:
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14216bd3e:
      if ((uVar1 & 0xfffffffffffffffe) == 0) goto LAB_14216bd62;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14216bd62;
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
LAB_14216bd81:
  FMulticastDelegateProperty::FMulticastDelegateProperty
            (this,(FFieldVariant)&local_res20,param_2,param_3);
  this->_padding_ = (longlong)&___7__TProperty_UFSparseDelegate__VFMulticastDelegateProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,1);
  this->_padding_ = (longlong)&___7FMulticastSparseDelegateProperty__6B_;
  (this->SignatureFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  return (FField *)this;
}

// GetFieldSize @ 14217bca0

ulong64 __thiscall
FMulticastSparseDelegateProperty::GetFieldSize(FMulticastSparseDelegateProperty *this)

{
  return 0x78;
}

// GetMulticastDelegate @ 14217c600

TMulticastScriptDelegate<FNotThreadSafeDelegateMode> * __thiscall
FMulticastSparseDelegateProperty::GetMulticastDelegate
          (FMulticastSparseDelegateProperty *this,void *param_1)

{
  USparseDelegateFunction *pUVar1;
  UObject *pUVar2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTVar3;
  
  if (*(char *)param_1 != '\0') {
    pUVar1 = CastChecked<USparseDelegateFunction,UFunction>
                       ((TObjectPtr<UFunction> *)&this->field_0x70,NullChecked);
    pUVar2 = FSparseDelegateStorage::ResolveSparseOwner
                       (param_1,pUVar1->OwningClassName,pUVar1->DelegateName);
    pTVar3 = FSparseDelegateStorage::GetMulticastDelegate(pUVar2,pUVar1->DelegateName);
    return pTVar3;
  }
  return (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
}

// GetMulticastScriptDelegate @ 14217c6d0

TMulticastScriptDelegate<FNotThreadSafeDelegateMode> * __thiscall
FMulticastSparseDelegateProperty::GetMulticastScriptDelegate
          (FMulticastSparseDelegateProperty *this,void *param_1,int param_2)

{
  USparseDelegateFunction *pUVar1;
  UObject *pUVar2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTVar3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTVar4;
  
  if ((param_1 != (void *)0x0) &&
     (((FSparseDelegate *)((longlong)param_2 + (longlong)param_1))->bIsBound != false)) {
    pUVar1 = CastChecked<USparseDelegateFunction,UFunction>
                       ((TObjectPtr<UFunction> *)&this->field_0x70,NullChecked);
    pUVar2 = FSparseDelegateStorage::ResolveSparseOwner
                       ((FSparseDelegate *)((longlong)param_2 + (longlong)param_1),
                        pUVar1->OwningClassName,pUVar1->DelegateName);
    pTVar3 = FSparseDelegateStorage::GetMulticastDelegate(pUVar2,pUVar1->DelegateName);
    pTVar4 = &FMulticastDelegateProperty::EmptyDelegate;
    if (pTVar3 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      pTVar4 = pTVar3;
    }
    return pTVar4;
  }
  return &FMulticastDelegateProperty::EmptyDelegate;
}

// ImportText_Internal @ 1421811e0

wchar_t * __thiscall
FMulticastSparseDelegateProperty::ImportText_Internal
          (FMulticastSparseDelegateProperty *this,wchar_t *param_1,void *param_2,
          EPropertyPointerType param_3,UObject *param_4,int param_5,FOutputDevice *param_6)

{
  int iVar1;
  char cVar2;
  wchar_t *pwVar3;
  USparseDelegateFunction *pUVar4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTVar5;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> local_38;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> local_20;
  
  local_38._padding_ = 0;
  local_38.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.InvocationList.ArrayNum = 0;
  local_38.InvocationList.ArrayMax = 0;
  pwVar3 = FMulticastDelegateProperty::ImportDelegateFromText
                     ((FMulticastDelegateProperty *)this,&local_38,param_1,param_4,param_6);
  if (pwVar3 != (wchar_t *)0x0) {
    if (param_3 == Container) {
      cVar2 = (**(code **)(*(longlong *)this + 0x70))(this);
      if (cVar2 != '\0') {
        FProperty::SetValue_InContainer((FProperty *)this,param_2,&local_38);
        goto LAB_1421812e2;
      }
      param_2 = (void *)((longlong)*(int *)&this->field_0x44 + (longlong)param_2);
    }
    pUVar4 = CastChecked<USparseDelegateFunction,UFunction>
                       ((TObjectPtr<UFunction> *)&this->field_0x70,NullChecked);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_38,
               (FReadAccessScope *)&local_20);
    iVar1 = local_38.InvocationList.ArrayNum;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    if (iVar1 < 1) {
      FSparseDelegateStorage::Clear(param_4,pUVar4->DelegateName);
      *(undefined1 *)param_2 = 0;
    }
    else {
      pTVar5 = TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::
               TMulticastScriptDelegate<FNotThreadSafeDelegateMode>(&local_20,&local_38);
      FSparseDelegateStorage::SetMulticastDelegate(param_4,pUVar4->DelegateName,pTVar5);
      *(undefined1 *)param_2 = 1;
    }
  }
LAB_1421812e2:
  if (local_38.InvocationList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.InvocationList.AllocatorInstance.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_38);
  return pwVar3;
}

// LoadTypeName @ 1421864b0

bool __thiscall
FMulticastSparseDelegateProperty::LoadTypeName
          (FMulticastSparseDelegateProperty *this,FPropertyTypeName param_1,FPropertyTag *param_2)

{
  FProperty::LoadTypeName((FProperty *)this,param_1,param_2);
  return false;
}

// RemoveDelegate @ 1421890c0

void __thiscall
FMulticastSparseDelegateProperty::RemoveDelegate
          (FMulticastSparseDelegateProperty *this,
          TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UObject *param_2,void *param_3)

{
  char *pcVar1;
  bool bVar2;
  USparseDelegateFunction *pUVar3;
  UObject *local_res18;
  char *local_res20;
  
  local_res18 = param_2;
  local_res20 = param_3;
  ResolveDelegateReference(this,&local_res18,&local_res20);
  pUVar3 = CastChecked<USparseDelegateFunction,UFunction>
                     ((TObjectPtr<UFunction> *)&this->field_0x70,NullChecked);
  pcVar1 = local_res20;
  if (*local_res20 != '\0') {
    bVar2 = FSparseDelegateStorage::Remove(local_res18,pUVar3->DelegateName,param_1);
    *pcVar1 = bVar2;
  }
  return;
}

// SerializeItem @ 14218e650

void __thiscall
FMulticastSparseDelegateProperty::SerializeItem
          (FMulticastSparseDelegateProperty *this,FStructuredArchiveSlot param_1,void *param_2,
          void *param_3)

{
  FArchive *pFVar1;
  FSlotBase local_res8;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  (**(code **)(*(longlong *)this + 0x200))(this,pFVar1,param_2,param_3);
  return;
}

// SerializeItemInternal @ 142190be0

void __thiscall
FMulticastSparseDelegateProperty::SerializeItemInternal
          (FMulticastSparseDelegateProperty *this,FArchive *param_1,void *param_2,void *param_3)

{
  int iVar1;
  USparseDelegateFunction *pUVar2;
  UObject *pUVar3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTVar4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> local_38;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> local_20;
  
  if ((param_1->field_0x28 & 1) == 0) {
    if (*(char *)param_2 != '\0') {
      pUVar2 = CastChecked<USparseDelegateFunction,UFunction>
                         ((TObjectPtr<UFunction> *)&this->field_0x70,NullChecked);
      pUVar3 = FSparseDelegateStorage::ResolveSparseOwner
                         (param_2,pUVar2->OwningClassName,pUVar2->DelegateName);
      pTVar4 = FSparseDelegateStorage::GetMulticastDelegate(pUVar3,pUVar2->DelegateName);
      if (pTVar4 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
        ::operator<<(param_1,pTVar4);
        return;
      }
    }
    local_38._padding_ = 0;
    local_38.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.InvocationList.ArrayNum = 0;
    local_38.InvocationList.ArrayMax = 0;
    ::operator<<(param_1,&local_38);
  }
  else {
    local_38._padding_ = 0;
    local_38.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.InvocationList.ArrayNum = 0;
    local_38.InvocationList.ArrayMax = 0;
    ::operator<<(param_1,&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_38,
               (FReadAccessScope *)&local_20);
    iVar1 = local_38.InvocationList.ArrayNum;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    if (iVar1 < 1) {
      if (*(char *)param_2 != '\0') {
        pUVar2 = CastChecked<USparseDelegateFunction,UFunction>
                           ((TObjectPtr<UFunction> *)&this->field_0x70,NullChecked);
        pUVar3 = FSparseDelegateStorage::ResolveSparseOwner
                           (param_2,pUVar2->OwningClassName,pUVar2->DelegateName);
        FSparseDelegateStorage::Clear(pUVar3,pUVar2->DelegateName);
        *(undefined1 *)param_2 = 0;
      }
    }
    else {
      pUVar2 = CastChecked<USparseDelegateFunction,UFunction>
                         ((TObjectPtr<UFunction> *)&this->field_0x70,NullChecked);
      pUVar3 = FSparseDelegateStorage::ResolveSparseOwner
                         (param_2,pUVar2->OwningClassName,pUVar2->DelegateName);
      pTVar4 = TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::
               TMulticastScriptDelegate<FNotThreadSafeDelegateMode>(&local_20,&local_38);
      FSparseDelegateStorage::SetMulticastDelegate(pUVar3,pUVar2->DelegateName,pTVar4);
      *(undefined1 *)param_2 = 1;
    }
  }
  if (local_38.InvocationList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.InvocationList.AllocatorInstance.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_38);
  return;
}

// SetMulticastDelegate @ 142191d80

void __thiscall
FMulticastSparseDelegateProperty::SetMulticastDelegate
          (FMulticastSparseDelegateProperty *this,void *param_1,
          TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  USparseDelegateFunction *pUVar3;
  UObject *pUVar4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTVar5;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> local_28;
  
  pUVar3 = CastChecked<USparseDelegateFunction,UFunction>
                     ((TObjectPtr<UFunction> *)&this->field_0x70,NullChecked);
  pUVar4 = FSparseDelegateStorage::ResolveSparseOwner
                     (param_1,pUVar3->OwningClassName,pUVar3->DelegateName);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
             (FReadAccessScope *)&local_28);
  iVar1 = (param_2->InvocationList).ArrayNum;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_28);
  if (iVar1 < 1) {
    if (*(char *)param_1 != '\0') {
      FSparseDelegateStorage::Clear(pUVar4,pUVar3->DelegateName);
      *(undefined1 *)param_1 = 0;
    }
  }
  else {
    pTVar5 = TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::
             TMulticastScriptDelegate<FNotThreadSafeDelegateMode>(&local_28,param_2);
    FSparseDelegateStorage::SetMulticastDelegate(pUVar4,pUVar3->DelegateName,pTVar5);
    *(undefined1 *)param_1 = 1;
  }
  pFVar2 = (param_2->InvocationList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// StaticClass @ 142193a00

FFieldClass * __cdecl FMulticastSparseDelegateProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FMulticastDelegateProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FMulticastSparseDelegateProperty",0x8000000000000,
                 CASTCLASS_FMulticastSparseDelegateProperty|CASTCLASS_FMulticastDelegateProperty|
                 CASTCLASS_FProperty|CASTCLASS_UField,pFVar1,Construct);
      atexit(`FMulticastSparseDelegateProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// operator_new @ 142259cb0

void * __cdecl FMulticastSparseDelegateProperty::operator_new(ulong64 param_1)

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
    this->_padding_ = (longlong)&___7FMulticastSparseDelegateProperty__6B_;
  }
  return this;
}

