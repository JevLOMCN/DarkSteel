// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// NullType @ 141fd8990

FDynamicallyTypedValueType * __cdecl UE::FDynamicallyTypedValue::NullType(void)

{
  return (FDynamicallyTypedValueType *)&::Singleton;
}

// operator= @ 14225a140

FDynamicallyTypedValue * __thiscall
UE::FDynamicallyTypedValue::operator=(FDynamicallyTypedValue *this,FDynamicallyTypedValue *param_1)

{
  FDynamicallyTypedValueType *pFVar1;
  FDynamicallyTypedValue_u_8 *pFVar2;
  FDynamicallyTypedValue_u_8 *pFVar3;
  undefined **local_18;
  undefined8 *local_10;
  
  if (this != param_1) {
    Deinit(this);
    pFVar1 = param_1->Type;
    this->Type = pFVar1;
    if ((pFVar1->NumBytes < 9) && (pFVar1->MinAlignmentLogTwo < 4)) {
      (this->field1_0x8).InlineData = 0;
      pFVar2 = (FDynamicallyTypedValue_u_8 *)0x0;
    }
    else {
      pFVar2 = FMemory::Malloc(pFVar1->NumBytes,1 << (pFVar1->MinAlignmentLogTwo & 0x1f));
      (this->field1_0x8).HeapData = pFVar2;
    }
    pFVar1 = this->Type;
    if ((8 < param_1->Type->NumBytes) ||
       (pFVar3 = &param_1->field1_0x8, 3 < param_1->Type->MinAlignmentLogTwo)) {
      pFVar3 = (FDynamicallyTypedValue_u_8 *)(param_1->field1_0x8).InlineData;
    }
    if ((pFVar1->NumBytes < 9) && (pFVar1->MinAlignmentLogTwo < 4)) {
      pFVar2 = &this->field1_0x8;
    }
    (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,pFVar2,pFVar3);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pFVar1 = this->Type, pFVar1 != (FDynamicallyTypedValueType *)0x0)) {
      local_10 = (undefined8 *)0x0;
      local_18 = &
                 ___7FTypeReferenceCollector__1__MarkTypeReachableIfIncrementalReachabilityPending_FDynamicallyTypedValue_UE__AEAAXXZ_6B_
      ;
      (**(code **)pFVar1->_padding_)(pFVar1,&local_18);
      local_18 = &___7FReferenceCollector__6B_;
      if (local_10 != (undefined8 *)0x0) {
        (**(code **)*local_10)(local_10,1);
      }
    }
  }
  return this;
}

// Deinit @ 142269430

void __thiscall UE::FDynamicallyTypedValue::Deinit(FDynamicallyTypedValue *this)

{
  FDynamicallyTypedValueType *pFVar1;
  FDynamicallyTypedValue_u_8 *pFVar2;
  
  pFVar1 = this->Type;
  if ((pFVar1->NumBytes < 9) && (pFVar1->MinAlignmentLogTwo < 4)) {
    pFVar2 = &this->field1_0x8;
  }
  else {
    pFVar2 = (FDynamicallyTypedValue_u_8 *)(this->field1_0x8).InlineData;
  }
  (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,pFVar2);
  if ((this->Type->NumBytes < 9) && (this->Type->MinAlignmentLogTwo < 4)) {
    this->Type = (FDynamicallyTypedValueType *)0x0;
    return;
  }
  FMemory::Free((this->field1_0x8).HeapData);
  this->Type = (FDynamicallyTypedValueType *)0x0;
  (this->field1_0x8).InlineData = 0;
  return;
}

// InitializeToNull @ 142274350

void __thiscall UE::FDynamicallyTypedValue::InitializeToNull(FDynamicallyTypedValue *this)

{
  FDynamicallyTypedValueType *pFVar1;
  undefined **local_18;
  undefined8 *local_10;
  
  pFVar1 = NullType();
  this->Type = pFVar1;
  (this->field1_0x8).InlineData = 0;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pFVar1 != (FDynamicallyTypedValueType *)0x0)) {
    local_10 = (undefined8 *)0x0;
    local_18 = &
               ___7FTypeReferenceCollector__1__MarkTypeReachableIfIncrementalReachabilityPending_FDynamicallyTypedValue_UE__AEAAXXZ_6B_
    ;
    (**(code **)pFVar1->_padding_)(pFVar1,&local_18);
    local_18 = &___7FReferenceCollector__6B_;
    if (local_10 != (undefined8 *)0x0) {
      (**(code **)*local_10)(local_10,1);
    }
  }
  return;
}

// FDynamicallyTypedValue @ 1422947f0

FDynamicallyTypedValue * __thiscall
UE::FDynamicallyTypedValue::FDynamicallyTypedValue(FDynamicallyTypedValue *this)

{
  FDynamicallyTypedValueType *pFVar1;
  FReferenceCollector local_18;
  
  pFVar1 = NullType();
  this->Type = pFVar1;
  (this->field1_0x8).InlineData = 0;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pFVar1 != (FDynamicallyTypedValueType *)0x0)) {
    local_18.DefaultReferenceCollectorArchive.Ptr = (FReferenceCollectorArchive *)0x0;
    local_18._padding_ =
         (longlong)
         &
         ___7FTypeReferenceCollector__1__MarkTypeReachableIfIncrementalReachabilityPending_FDynamicallyTypedValue_UE__AEAAXXZ_6B_
    ;
    (**(code **)pFVar1->_padding_)(pFVar1,&local_18);
    FReferenceCollector::~FReferenceCollector(&local_18);
  }
  return this;
}

// InitializeAsType @ 1422a06b0

void __thiscall
UE::FDynamicallyTypedValue::InitializeAsType
          (FDynamicallyTypedValue *this,FDynamicallyTypedValueType *param_1)

{
  FDynamicallyTypedValueType *pFVar1;
  code *pcVar2;
  bool bVar3;
  FDynamicallyTypedValue_u_8 *pFVar4;
  FDynamicallyTypedValue_u_8 *pFVar5;
  FReferenceCollector local_18;
  
  if (param_1 == (FDynamicallyTypedValueType *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("&NewType != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\DynamicallyTypedValue.h"
                       ,0x82,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Deinit(this);
  this->Type = param_1;
  if ((param_1->NumBytes < 9) && (param_1->MinAlignmentLogTwo < 4)) {
    pFVar4 = (FDynamicallyTypedValue_u_8 *)0x0;
    (this->field1_0x8).InlineData = 0;
  }
  else {
    pFVar4 = FMemory::Malloc(param_1->NumBytes,1 << (param_1->MinAlignmentLogTwo & 0x1f));
    (this->field1_0x8).HeapData = pFVar4;
  }
  pFVar1 = this->Type;
  if ((8 < pFVar1->NumBytes) || (pFVar5 = &this->field1_0x8, 3 < pFVar1->MinAlignmentLogTwo)) {
    pFVar5 = pFVar4;
  }
  (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,pFVar5);
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pFVar1 = this->Type, pFVar1 != (FDynamicallyTypedValueType *)0x0)) {
    local_18.DefaultReferenceCollectorArchive.Ptr = (FReferenceCollectorArchive *)0x0;
    local_18._padding_ =
         (longlong)
         &
         ___7FTypeReferenceCollector__1__MarkTypeReachableIfIncrementalReachabilityPending_FDynamicallyTypedValue_UE__AEAAXXZ_6B_
    ;
    (**(code **)pFVar1->_padding_)(pFVar1,&local_18);
    FReferenceCollector::~FReferenceCollector(&local_18);
  }
  return;
}

// InitializeFromCopy @ 1422a07b0

void __thiscall
UE::FDynamicallyTypedValue::InitializeFromCopy
          (FDynamicallyTypedValue *this,FDynamicallyTypedValue *param_1)

{
  FDynamicallyTypedValueType *pFVar1;
  FDynamicallyTypedValue_u_8 *pFVar2;
  FDynamicallyTypedValue_u_8 *pFVar3;
  FReferenceCollector local_18;
  
  pFVar1 = param_1->Type;
  this->Type = pFVar1;
  if ((pFVar1->NumBytes < 9) && (pFVar1->MinAlignmentLogTwo < 4)) {
    (this->field1_0x8).InlineData = 0;
    pFVar2 = (FDynamicallyTypedValue_u_8 *)0x0;
  }
  else {
    pFVar2 = FMemory::Malloc(pFVar1->NumBytes,1 << (pFVar1->MinAlignmentLogTwo & 0x1f));
    (this->field1_0x8).HeapData = pFVar2;
  }
  pFVar1 = this->Type;
  if ((8 < param_1->Type->NumBytes) ||
     (pFVar3 = &param_1->field1_0x8, 3 < param_1->Type->MinAlignmentLogTwo)) {
    pFVar3 = (FDynamicallyTypedValue_u_8 *)(param_1->field1_0x8).InlineData;
  }
  if ((pFVar1->NumBytes < 9) && (pFVar1->MinAlignmentLogTwo < 4)) {
    pFVar2 = &this->field1_0x8;
  }
  (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,pFVar2,pFVar3);
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pFVar1 = this->Type, pFVar1 != (FDynamicallyTypedValueType *)0x0)) {
    local_18.DefaultReferenceCollectorArchive.Ptr = (FReferenceCollectorArchive *)0x0;
    local_18._padding_ =
         (longlong)
         &
         ___7FTypeReferenceCollector__1__MarkTypeReachableIfIncrementalReachabilityPending_FDynamicallyTypedValue_UE__AEAAXXZ_6B_
    ;
    (**(code **)pFVar1->_padding_)(pFVar1,&local_18);
    FReferenceCollector::~FReferenceCollector(&local_18);
  }
  return;
}

