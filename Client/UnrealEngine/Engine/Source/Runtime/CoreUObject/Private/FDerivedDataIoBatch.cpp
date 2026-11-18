// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// Cache @ 141f298c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDerivedDataIoRequest __thiscall
UE::FDerivedDataIoBatch::Cache
          (FDerivedDataIoBatch *this,FDerivedData *param_1,FDerivedDataIoOptions *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TStringBuilderWithBuffer<wchar_t,256> *this_00;
  longlong *in_R9;
  undefined1 auStack_288 [32];
  longlong local_268;
  TStringBuilderWithBuffer<wchar_t,256> local_258;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_288;
  if (*in_R9 != 0) {
    this_00 = WriteToString<256,UE::FDerivedData_const_&>(&local_258,(FDerivedData *)param_2);
    if ((ulonglong)this_00->_padding_ < this_00->_padding_ + 2U) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this_00,1);
    }
    *(undefined2 *)this_00->_padding_ = 0;
    local_268 = this_00->_padding_;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Options.GetTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\DerivedData.cpp"
                       ,0x510,L"Target is not supported by Cache. %s");
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)&local_258);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return (FDerivedDataIoRequest)iVar3;
    }
  }
  local_268 = CONCAT71(local_268._1_7_,1);
  DerivedData::Private::FIoResponse::Queue
            ((TPimplPtr<UE::DerivedData::Private::FIoResponse,0> *)param_1,(FDerivedData *)this,
             param_2,(EIoRequestType)in_R9);
  return (FDerivedDataIoRequest)(int)param_1;
}

// Dispatch @ 141f2d4f0

void __thiscall
UE::FDerivedDataIoBatch::Dispatch
          (FDerivedDataIoBatch *this,FDerivedDataIoResponse *param_1,
          TUniqueFunction<void___cdecl(void)> *param_2)

{
  Dispatch(this,param_1,(FDerivedDataIoPriority)0x0,param_2);
  return;
}

// Dispatch @ 141f2d510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::FDerivedDataIoBatch::Dispatch(FDerivedDataIoBatch *this,FDerivedDataIoResponse *param_1)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48._0_8_ = 0;
  local_20 = (longlong *)0x0;
  Dispatch(this,param_1,(FDerivedDataIoPriority)0x0,(TUniqueFunction<void___cdecl(void)> *)local_48)
  ;
  if (local_48._0_8_ != 0) {
    plVar1 = (longlong *)(local_48 + 0x10);
    if (local_20 != (longlong *)0x0) {
      plVar1 = local_20;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// Dispatch @ 141f2d580

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::FDerivedDataIoBatch::Dispatch
          (FDerivedDataIoBatch *this,FDerivedDataIoResponse *param_1,FDerivedDataIoPriority param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  int iVar1;
  FIoResponse *pFVar2;
  code *pcVar3;
  FIoResponse *pFVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong *plVar19;
  FIoRequestState *pFVar20;
  FIoRequestState *pFVar21;
  undefined1 local_res18 [8];
  FIoResponseDispatcher local_38;
  
  if ((this->Response).Ptr == (FIoResponse *)0x0) {
    pFVar2 = (param_1->Response).Ptr;
    if (pFVar2 != (FIoResponse *)0x0) {
      (param_1->Response).Ptr = (FIoResponse *)0x0;
      (**(code **)&pFVar2[-1].ResponseComplete.field_0x20)();
    }
    if (*(void **)param_3 != (void *)0x0) {
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar3 = *(code **)param_3;
      plVar19 = (longlong *)&param_3->field_0x10;
      if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
        plVar19 = *(longlong **)&param_3->field_0x28;
      }
      uVar18 = (**(code **)(*plVar19 + 8))();
      (*pcVar3)(uVar18);
    }
  }
  pFVar2 = (this->Response).Ptr;
  uVar18 = *(undefined8 *)&param_3->field_0x8;
  uVar5 = *(undefined4 *)&pFVar2->ResponseComplete;
  uVar6 = *(undefined4 *)&(pFVar2->ResponseComplete).field_0x4;
  uVar7 = *(undefined4 *)&(pFVar2->ResponseComplete).field_0x8;
  uVar8 = *(undefined4 *)&(pFVar2->ResponseComplete).field_0xc;
  uVar9 = *(undefined4 *)&(pFVar2->ResponseComplete).field_0x10;
  uVar10 = *(undefined4 *)&(pFVar2->ResponseComplete).field_0x14;
  uVar11 = *(undefined4 *)&(pFVar2->ResponseComplete).field_0x18;
  uVar12 = *(undefined4 *)&(pFVar2->ResponseComplete).field_0x1c;
  uVar16 = *(undefined8 *)&(pFVar2->ResponseComplete).field_0x20;
  uVar17 = *(undefined8 *)&(pFVar2->ResponseComplete).field_0x28;
  *(undefined8 *)&pFVar2->ResponseComplete = *(undefined8 *)param_3;
  *(undefined8 *)&(pFVar2->ResponseComplete).field_0x8 = uVar18;
  uVar13 = *(undefined4 *)&param_3->field_0x14;
  uVar14 = *(undefined4 *)&param_3->field_0x18;
  uVar15 = *(undefined4 *)&param_3->field_0x1c;
  *(undefined4 *)&(pFVar2->ResponseComplete).field_0x10 = *(undefined4 *)&param_3->field_0x10;
  *(undefined4 *)&(pFVar2->ResponseComplete).field_0x14 = uVar13;
  *(undefined4 *)&(pFVar2->ResponseComplete).field_0x18 = uVar14;
  *(undefined4 *)&(pFVar2->ResponseComplete).field_0x1c = uVar15;
  uVar13 = *(undefined4 *)&param_3->field_0x24;
  uVar14 = *(undefined4 *)&param_3->field_0x28;
  uVar15 = *(undefined4 *)&param_3->field_0x2c;
  *(undefined4 *)&(pFVar2->ResponseComplete).field_0x20 = *(undefined4 *)&param_3->field_0x20;
  *(undefined4 *)&(pFVar2->ResponseComplete).field_0x24 = uVar13;
  *(undefined4 *)&(pFVar2->ResponseComplete).field_0x28 = uVar14;
  *(undefined4 *)&(pFVar2->ResponseComplete).field_0x2c = uVar15;
  *(undefined4 *)param_3 = uVar5;
  *(undefined4 *)&param_3->field_0x4 = uVar6;
  *(undefined4 *)&param_3->field_0x8 = uVar7;
  *(undefined4 *)&param_3->field_0xc = uVar8;
  *(undefined4 *)&param_3->field_0x10 = uVar9;
  *(undefined4 *)&param_3->field_0x14 = uVar10;
  *(undefined4 *)&param_3->field_0x18 = uVar11;
  *(undefined4 *)&param_3->field_0x1c = uVar12;
  *(undefined8 *)&param_3->field_0x20 = uVar16;
  *(undefined8 *)&param_3->field_0x28 = uVar17;
  if (this != (FDerivedDataIoBatch *)param_1) {
    pFVar4 = (param_1->Response).Ptr;
    (param_1->Response).Ptr = (this->Response).Ptr;
    (this->Response).Ptr = (FIoResponse *)0x0;
    if (pFVar4 != (FIoResponse *)0x0) {
      (**(code **)&pFVar4[-1].ResponseComplete.field_0x20)(&pFVar4[-1].ResponseComplete.field_0x20);
    }
  }
  LOCK();
  pFVar2->RemainingRequests = (atomic<unsigned_int>)((int)pFVar2->RemainingRequests + 1);
  UNLOCK();
  FIoBatch::FIoBatch(&local_38.Batch);
  iVar1 = (pFVar2->Requests).ArrayNum;
  pFVar20 = (FIoRequestState *)(pFVar2->Requests).AllocatorInstance.Data;
  pFVar21 = pFVar20 + iVar1;
  local_38.Priority.Value = param_2.Value;
  while( true ) {
    if ((pFVar2->Requests).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::DerivedData::Private::FIoRequestState,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar20 == pFVar21) break;
    if (((pFVar20->State).TypeIndex == '\x01') && (pFVar20 != (FIoRequestState *)0x0)) {
      DerivedData::Private::FIoResponseDispatcher::DispatchCooked
                (&local_38,pFVar2,pFVar20,(FIoCookedState *)pFVar20);
      pFVar20 = pFVar20 + 1;
    }
    else {
      pFVar20->Status = (atomic<UE::EDerivedDataIoStatus>)0x1;
      pFVar20 = pFVar20 + 1;
    }
  }
  FIoBatch::Issue(&local_38.Batch);
  FIoBatch::~FIoBatch(&local_38.Batch);
  DerivedData::Private::FIoResponse::EndRequest(pFVar2);
  return;
}

// Dispatch @ 141f2d6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::FDerivedDataIoBatch::Dispatch
          (FDerivedDataIoBatch *this,FDerivedDataIoResponse *param_1,FDerivedDataIoPriority param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48._0_8_ = 0;
  local_20 = (longlong *)0x0;
  Dispatch(this,param_1,param_2,(TUniqueFunction<void___cdecl(void)> *)local_48);
  if (local_48._0_8_ != 0) {
    plVar1 = (longlong *)(local_48 + 0x10);
    if (local_20 != (longlong *)0x0) {
      plVar1 = local_20;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// Exists @ 141f2e7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDerivedDataIoRequest __thiscall
UE::FDerivedDataIoBatch::Exists
          (FDerivedDataIoBatch *this,FDerivedData *param_1,FDerivedDataIoOptions *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TStringBuilderWithBuffer<wchar_t,256> *this_00;
  longlong *in_R9;
  undefined1 auStack_288 [32];
  longlong local_268;
  TStringBuilderWithBuffer<wchar_t,256> local_258;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_288;
  if (*in_R9 != 0) {
    this_00 = WriteToString<256,UE::FDerivedData_const_&>(&local_258,(FDerivedData *)param_2);
    if ((ulonglong)this_00->_padding_ < this_00->_padding_ + 2U) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this_00,1);
    }
    *(undefined2 *)this_00->_padding_ = 0;
    local_268 = this_00->_padding_;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Options.GetTarget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\DerivedData.cpp"
                       ,0x517,L"Target is not supported by Exists. %s");
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)&local_258);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return (FDerivedDataIoRequest)iVar3;
    }
  }
  local_268 = CONCAT71(local_268._1_7_,2);
  DerivedData::Private::FIoResponse::Queue
            ((TPimplPtr<UE::DerivedData::Private::FIoResponse,0> *)param_1,(FDerivedData *)this,
             param_2,(EIoRequestType)in_R9);
  return (FDerivedDataIoRequest)(int)param_1;
}

// Read @ 141f416b0

FDerivedDataIoRequest __thiscall
UE::FDerivedDataIoBatch::Read
          (FDerivedDataIoBatch *this,FDerivedData *param_1,FDerivedDataIoOptions *param_2)

{
  EIoRequestType in_R9B;
  
  DerivedData::Private::FIoResponse::Queue
            ((TPimplPtr<UE::DerivedData::Private::FIoResponse,0> *)param_1,(FDerivedData *)this,
             param_2,in_R9B);
  return (FDerivedDataIoRequest)(int)param_1;
}

