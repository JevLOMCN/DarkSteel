// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 14

// AppendDiagnosticString @ 142298000

void __thiscall
UE::Verse::FRuntimeTypeDynamic::AppendDiagnosticString
          (FRuntimeTypeDynamic *this,TStringBuilderBase<char8_t> *param_1,void *param_2,uint param_3
          )

{
  FDynamicallyTypedValueType *pFVar1;
  FDynamicallyTypedValueType *pFVar2;
  void *pvVar3;
  longlong lVar4;
  
  pFVar2 = FDynamicallyTypedValue::NullType();
  pFVar1 = *(FDynamicallyTypedValueType **)param_2;
  if (pFVar1 == pFVar2) {
    if (param_1->End < param_1->CurPos + 0xd) {
      TStringBuilderBase<char8_t>::Extend(param_1,0xd);
    }
    pvVar3 = FGenericPlatformString::Memcpy(param_1->CurPos,"Uninitialized",0xd);
    param_1->CurPos = (uchar *)((longlong)pvVar3 + 0xd);
    return;
  }
  if ((8 < pFVar1->NumBytes) || (lVar4 = (longlong)param_2 + 8, 3 < pFVar1->MinAlignmentLogTwo)) {
    lVar4 = *(longlong *)((longlong)param_2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00014229809b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar1->_padding_ + 0x48))(pFVar1,param_1,lVar4,param_3);
  return;
}

// AreEquivalent @ 1422980b0

bool __thiscall
UE::Verse::FRuntimeTypeDynamic::AreEquivalent
          (FRuntimeTypeDynamic *this,void *param_1,FRuntimeType *param_2,void *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)param_1;
  if (param_2->Kind != Dynamic) {
    if (((ulonglong)plVar1[1] < 9) && (*(byte *)(plVar1 + 2) < 4)) {
                    /* WARNING: Could not recover jumptable at 0x000142298109. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,(longlong)param_1 + 8);
      return (bool)uVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x000142298111. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,*(undefined8 *)((longlong)param_1 + 8));
    return (bool)uVar3;
  }
  if (((ulonglong)plVar1[1] < 9) && (*(byte *)(plVar1 + 2) < 4)) {
    lVar4 = (longlong)param_1 + 8;
  }
  else {
    lVar4 = *(longlong *)((longlong)param_1 + 8);
  }
  lVar2 = *(longlong *)param_3;
  if ((*(ulonglong *)(lVar2 + 8) < 9) && (*(byte *)(lVar2 + 0x10) < 4)) {
                    /* WARNING: Could not recover jumptable at 0x0001422980e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar1 + 0x50))();
    return (bool)uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001422980f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,lVar4,lVar2,*(undefined8 *)((longlong)param_3 + 8));
  return (bool)uVar3;
}

// AreIdentical @ 142298150

bool __thiscall
UE::Verse::FRuntimeTypeDynamic::AreIdentical(FRuntimeTypeDynamic *this,void *param_1,void *param_2)

{
  FDynamicallyTypedValueType *pFVar1;
  FDynamicallyTypedValueType *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 uVar5;
  FDynamicallyTypedValueType *pFVar6;
  FDynamicallyTypedValueType *pFVar7;
  longlong lVar8;
  longlong lVar9;
  
  pFVar1 = *(FDynamicallyTypedValueType **)param_1;
  pFVar6 = FDynamicallyTypedValue::NullType();
  pFVar2 = *(FDynamicallyTypedValueType **)param_2;
  pFVar7 = FDynamicallyTypedValue::NullType();
  if (pFVar1 == pFVar6) {
    if (pFVar2 == pFVar7) {
      return true;
    }
  }
  else if (pFVar2 != pFVar7) {
    lVar3 = *(longlong *)param_2;
    plVar4 = *(longlong **)param_1;
    if ((8 < *(ulonglong *)(lVar3 + 8)) ||
       (lVar9 = (longlong)param_2 + 8, 3 < *(byte *)(lVar3 + 0x10))) {
      lVar9 = *(longlong *)((longlong)param_2 + 8);
    }
    if ((8 < (ulonglong)plVar4[1]) || (lVar8 = (longlong)param_1 + 8, 3 < *(byte *)(plVar4 + 2))) {
      lVar8 = *(longlong *)((longlong)param_1 + 8);
    }
    uVar5 = (**(code **)(*plVar4 + 0x50))(plVar4,lVar8,lVar3,lVar9);
    return (bool)uVar5;
  }
  return false;
}

// DestroyValue @ 142299de0

void __thiscall
UE::Verse::FRuntimeTypeDynamic::DestroyValue(FRuntimeTypeDynamic *this,void *param_1)

{
  FDynamicallyTypedValue::Deinit(param_1);
  return;
}

// ExportValueToText @ 14229a8d0

void __thiscall
UE::Verse::FRuntimeTypeDynamic::ExportValueToText
          (FRuntimeTypeDynamic *this,FString *param_1,void *param_2,void *param_3,UObject *param_4,
          UObject *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  IEngineEnvironment *pIVar5;
  longlong lVar6;
  longlong lVar7;
  
  pIVar5 = ::Verse::VerseVM::GetEngineEnvironment();
  if (pIVar5 == (IEngineEnvironment *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Engine",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\VerseVM\\VBPVMRuntimeType.cpp"
                       ,0x72,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (**(code **)((longlong)*pIVar5 + 0x30))(pIVar5,param_1,*(undefined8 *)param_2);
  ::FString::AppendChar(param_1,L'(');
  plVar1 = *(longlong **)param_2;
  if ((param_3 == (void *)0x0) || (plVar2 = *(longlong **)param_3, plVar2 != plVar1)) {
    lVar7 = 0;
  }
  else if (((ulonglong)plVar2[1] < 9) && (*(byte *)(plVar2 + 2) < 4)) {
    lVar7 = (longlong)param_3 + 8;
  }
  else {
    lVar7 = *(longlong *)((longlong)param_3 + 8);
  }
  if ((8 < (ulonglong)plVar1[1]) || (lVar6 = (longlong)param_2 + 8, 3 < *(byte *)(plVar1 + 2))) {
    lVar6 = *(longlong *)((longlong)param_2 + 8);
  }
  (**(code **)(*plVar1 + 0x58))(plVar1,param_1,lVar6,lVar7,param_4,param_5);
  ::FString::AppendChar(param_1,L')');
  return;
}

// Get @ 14229cab0

FRuntimeTypeDynamic * __cdecl UE::Verse::FRuntimeTypeDynamic::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::Verse::FRuntimeTypeDynamic::Get'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetValueHash @ 14229eac0

uint __thiscall
UE::Verse::FRuntimeTypeDynamic::GetValueHash(FRuntimeTypeDynamic *this,void *param_1)

{
  longlong *plVar1;
  uint uVar2;
  
  plVar1 = *(longlong **)param_1;
  if (((ulonglong)plVar1[1] < 9) && (*(byte *)(plVar1 + 2) < 4)) {
                    /* WARNING: Could not recover jumptable at 0x00014229ead7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,(longlong)param_1 + 8);
    return uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014229eadf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,*(undefined8 *)((longlong)param_1 + 8));
  return uVar2;
}

// ImportValueFromText @ 1422a05a0

bool __thiscall
UE::Verse::FRuntimeTypeDynamic::ImportValueFromText
          (FRuntimeTypeDynamic *this,wchar_t **param_1,void *param_2,UObject *param_3,
          FOutputDevice *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  IEngineEnvironment *pIVar5;
  FDynamicallyTypedValueType *pFVar6;
  longlong lVar7;
  
  pIVar5 = ::Verse::VerseVM::GetEngineEnvironment();
  if ((pIVar5 == (IEngineEnvironment *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Engine",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\VerseVM\\VBPVMRuntimeType.cpp"
                         ,0x7f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pFVar6 = (FDynamicallyTypedValueType *)
           (**(code **)((longlong)*pIVar5 + 0x28))(pIVar5,param_1,param_4);
  if ((pFVar6 != (FDynamicallyTypedValueType *)0x0) && (**param_1 == L'(')) {
    *param_1 = *param_1 + 1;
    FDynamicallyTypedValue::InitializeAsType(param_2,pFVar6);
    if ((8 < *(ulonglong *)(*(longlong *)param_2 + 8)) ||
       (lVar7 = (longlong)param_2 + 8, 3 < *(byte *)(*(longlong *)param_2 + 0x10))) {
      lVar7 = *(longlong *)((longlong)param_2 + 8);
    }
    cVar4 = (**(code **)(pFVar6->_padding_ + 0x60))(pFVar6,param_1,lVar7,param_3,param_4);
    if ((cVar4 != '\0') && (**param_1 == L')')) {
      *param_1 = *param_1 + 1;
      return true;
    }
  }
  return false;
}

// InitializeValue @ 1422a08c0

void __thiscall
UE::Verse::FRuntimeTypeDynamic::InitializeValue(FRuntimeTypeDynamic *this,void *param_1)

{
  FDynamicallyTypedValueType *pFVar1;
  FReferenceCollector local_18;
  
  pFVar1 = FDynamicallyTypedValue::NullType();
  *(FDynamicallyTypedValueType **)param_1 = pFVar1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
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
  return;
}

// InitializeValueFromCopy @ 1422a0920

void __thiscall
UE::Verse::FRuntimeTypeDynamic::InitializeValueFromCopy
          (FRuntimeTypeDynamic *this,void *param_1,void *param_2)

{
  FDynamicallyTypedValueType *pFVar1;
  FReferenceCollector local_18;
  
  pFVar1 = FDynamicallyTypedValue::NullType();
  *(FDynamicallyTypedValueType **)param_1 = pFVar1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
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
  FDynamicallyTypedValue::InitializeFromCopy(param_1,param_2);
  return;
}

// InstanceSubobjects @ 1422a09b0

void __thiscall
UE::Verse::FRuntimeTypeDynamic::InstanceSubobjects
          (FRuntimeTypeDynamic *this,void *param_1,void *param_2,TNotNull<UObject_*> param_3,
          FObjectInstancingGraph *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)0x0;
  if ((param_2 != (void *)0x0) && (*(longlong *)param_2 != *(longlong *)param_1)) {
    param_2 = plVar2;
  }
  plVar1 = *(longlong **)param_1;
  if (*(char *)((longlong)plVar1 + 0x11) == '\0') {
    return;
  }
  if (param_2 != (longlong *)0x0) {
    if ((*(ulonglong *)(*(longlong *)param_2 + 8) < 9) &&
       (*(byte *)(*(longlong *)param_2 + 0x10) < 4)) {
      plVar2 = (longlong *)((longlong)param_2 + 8);
    }
    else {
      plVar2 = *(longlong **)((longlong)param_2 + 8);
    }
  }
  if (((ulonglong)plVar1[1] < 9) && (*(byte *)(plVar1 + 2) < 4)) {
                    /* WARNING: Could not recover jumptable at 0x0001422a0a07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x68))(plVar1,(longlong)param_1 + 8,plVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001422a0a0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x68))(plVar1,*(undefined8 *)((longlong)param_1 + 8),plVar2);
  return;
}

// IsValid @ 1422a0e80

bool __thiscall UE::Verse::FRuntimeTypeDynamic::IsValid(FRuntimeTypeDynamic *this,void *param_1)

{
  FDynamicallyTypedValueType *pFVar1;
  char cVar2;
  FDynamicallyTypedValueType *pFVar3;
  longlong lVar4;
  
  pFVar3 = FDynamicallyTypedValue::NullType();
  pFVar1 = *(FDynamicallyTypedValueType **)param_1;
  if (pFVar1 != pFVar3) {
    if ((8 < pFVar1->NumBytes) || (lVar4 = (longlong)param_1 + 8, 3 < pFVar1->MinAlignmentLogTwo)) {
      lVar4 = *(longlong *)((longlong)param_1 + 8);
    }
    cVar2 = (**(code **)(pFVar1->_padding_ + 0x70))(pFVar1,lVar4);
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// MarkValueReachable @ 1422a3760

void __thiscall
UE::Verse::FRuntimeTypeDynamic::MarkValueReachable
          (FRuntimeTypeDynamic *this,void *param_1,FReferenceCollector *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)**(undefined8 **)param_1)(*(undefined8 **)param_1,param_2);
  plVar1 = *(longlong **)param_1;
  if ((8 < (ulonglong)plVar1[1]) || (lVar2 = (longlong)param_1 + 8, 3 < *(byte *)(plVar1 + 2))) {
    lVar2 = *(longlong *)((longlong)param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001422a37a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))(plVar1,lVar2,param_2);
  return;
}

// SerializeValue @ 1422a6510

void __thiscall
UE::Verse::FRuntimeTypeDynamic::SerializeValue
          (FRuntimeTypeDynamic *this,FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  code *pcVar1;
  FSlotBase FVar2;
  bool bVar3;
  FArchive *pFVar4;
  FDynamicallyTypedValueType *pFVar5;
  IEngineEnvironment *pIVar6;
  FDynamicallyTypedValue_u_8 *pFVar7;
  longlong lVar8;
  FSlotBase local_res10;
  FArchiveFieldName local_res20;
  FDynamicallyTypedValueType *local_38;
  FReferenceCollector local_30;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar4 = StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  if ((pFVar4->field_0x28 & 1) != 0) {
    param_2 = FDynamicallyTypedValue::FDynamicallyTypedValue(param_2);
  }
  pFVar4 = StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  FVar2.StructuredArchive = local_res10.StructuredArchive;
  local_38 = ((FDynamicallyTypedValue *)param_2)->Type;
  pFVar5 = FDynamicallyTypedValue::NullType();
  bVar3 = FBinaryArchiveFormatter::TryEnterField
                    ((FVar2.StructuredArchive)->Formatter,local_res20,local_38 != pFVar5);
  if (bVar3) {
    pIVar6 = ::Verse::VerseVM::GetEngineEnvironment();
    if ((pIVar6 == (IEngineEnvironment *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Engine",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\VerseVM\\VBPVMRuntimeType.cpp"
                           ,0x54,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,FVar2.StructuredArchive,&local_38);
    if ((pFVar4->field_0x28 & 1) != 0) {
      FDynamicallyTypedValue::InitializeAsType(param_2,local_38);
    }
  }
  else {
    FDynamicallyTypedValue::Deinit(param_2);
    pFVar5 = FDynamicallyTypedValue::NullType();
    ((FDynamicallyTypedValue *)param_2)->Type = pFVar5;
    (((FDynamicallyTypedValue *)param_2)->field1_0x8).InlineData = 0;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pFVar5 != (FDynamicallyTypedValueType *)0x0)) {
      local_30.DefaultReferenceCollectorArchive.Ptr = (FReferenceCollectorArchive *)0x0;
      local_30._padding_ =
           (longlong)
           &
           ___7FTypeReferenceCollector__1__MarkTypeReachableIfIncrementalReachabilityPending_FDynamicallyTypedValue_UE__AEAAXXZ_6B_
      ;
      (**(code **)pFVar5->_padding_)(pFVar5,&local_30);
      FReferenceCollector::~FReferenceCollector(&local_30);
    }
  }
  pFVar5 = FDynamicallyTypedValue::NullType();
  if (local_38 != pFVar5) {
    if ((param_3 == (void *)0x0) ||
       (pFVar5 = *(FDynamicallyTypedValueType **)param_3, pFVar5 != local_38)) {
      lVar8 = 0;
    }
    else if ((8 < pFVar5->NumBytes) ||
            (lVar8 = (longlong)param_3 + 8, 3 < pFVar5->MinAlignmentLogTwo)) {
      lVar8 = *(longlong *)((longlong)param_3 + 8);
    }
    if ((8 < ((FDynamicallyTypedValue *)param_2)->Type->NumBytes) ||
       (pFVar7 = &((FDynamicallyTypedValue *)param_2)->field1_0x8,
       3 < ((FDynamicallyTypedValue *)param_2)->Type->MinAlignmentLogTwo)) {
      pFVar7 = (FDynamicallyTypedValue_u_8 *)
               (((FDynamicallyTypedValue *)param_2)->field1_0x8).InlineData;
    }
    (**(code **)(local_38->_padding_ + 0x28))(local_38,FVar2.StructuredArchive,pFVar7,lVar8);
  }
  return;
}

