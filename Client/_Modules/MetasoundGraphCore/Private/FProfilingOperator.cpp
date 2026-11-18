// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 11

// FProfilingOperator @ 14ad3c2b0

FProfilingOperator * __thiscall
Metasound::FProfilingOperator::FProfilingOperator
          (FProfilingOperator *this,
          TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> *param_1,
          INode *param_2)

{
  IOperator *pIVar1;
  code *pcVar2;
  bool bVar3;
  _func___cdecl_void_IOperator_ptr_FResetParams_ptr *p_Var4;
  _func___cdecl_void_IOperator_ptr *p_Var5;
  FProfilingOperator *pFVar6;
  longlong lVar7;
  FName *pFVar8;
  int iVar9;
  int iVar10;
  FName local_res8;
  
  this->_padding_ = (longlong)&___7FProfilingOperator_Metasound__6B_;
  (this->AssetMetaData).ClassName.ComparisonIndex = 0;
  (this->AssetMetaData).ClassName.Number = 0;
  (this->AssetMetaData).AssetName.ComparisonIndex = 0;
  (this->AssetMetaData).AssetName.Number = 0;
  (this->AssetMetaData).AssetPath.ComparisonIndex = 0;
  (this->AssetMetaData).AssetPath.Number = 0;
  (this->Operator).Ptr = param_1->Ptr;
  param_1->Ptr = (IOperator *)0x0;
  p_Var4 = (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)
           (**(code **)((longlong)*(this->Operator).Ptr + 0x30))();
  pIVar1 = (this->Operator).Ptr;
  this->ResetFunction = p_Var4;
  p_Var5 = (_func___cdecl_void_IOperator_ptr *)(**(code **)((longlong)*pIVar1 + 0x38))();
  pIVar1 = (this->Operator).Ptr;
  this->ExecuteFunction = p_Var5;
  p_Var5 = (_func___cdecl_void_IOperator_ptr *)(**(code **)((longlong)*pIVar1 + 0x40))();
  this->PostExecuteFunction = p_Var5;
  (this->InsightsResetEventName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InsightsResetEventName).Data.ArrayNum = 0;
  (this->InsightsResetEventName).Data.ArrayMax = 0;
  (this->InsightsExecuteEventName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InsightsExecuteEventName).Data.ArrayNum = 0;
  (this->InsightsExecuteEventName).Data.ArrayMax = 0;
  (this->InsightsPostExecuteEventName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InsightsPostExecuteEventName).Data.ArrayNum = 0;
  (this->InsightsPostExecuteEventName).Data.ArrayMax = 0;
  this->InsightsResetEventSpecId = 0;
  this->InsightsExecuteEventSpecId = 0;
  this->InsightsPostExecuteEventSpecId = 0;
  if ((this->Operator).Ptr == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Operator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundProfilingOperator.h"
                       ,0x21,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FProfilingOperator *)(*pcVar2)();
      return pFVar6;
    }
  }
  lVar7 = (**(code **)((longlong)*param_2 + 0x18))(param_2);
  local_res8 = *(FName *)(lVar7 + 8);
  if (local_res8 == (FName)0x0) {
    pFVar8 = (FName *)(**(code **)((longlong)*param_2 + 8))(param_2);
    local_res8 = *pFVar8;
  }
  ::FName::AppendString(&local_res8,&this->InsightsResetEventName);
  iVar10 = (this->InsightsResetEventName).Data.ArrayNum;
  iVar9 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar9 = 0;
  }
  ::FString::AssignRange
            (&this->InsightsExecuteEventName,
             (wchar_t *)(this->InsightsResetEventName).Data.AllocatorInstance.Data,iVar9);
  iVar9 = (this->InsightsResetEventName).Data.ArrayNum;
  iVar10 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar10 = 0;
  }
  ::FString::AssignRange
            (&this->InsightsPostExecuteEventName,
             (wchar_t *)(this->InsightsResetEventName).Data.AllocatorInstance.Data,iVar10);
  ::FString::AppendChars(&this->InsightsResetEventName,L"_RESET",6);
  ::FString::AppendChars(&this->InsightsExecuteEventName,L"_EXECUTE",8);
  ::FString::AppendChars(&this->InsightsPostExecuteEventName,L"_POSTEXECUTE",0xc);
  return this;
}

// ~FProfilingOperator @ 14ad3dfc0

void __thiscall Metasound::FProfilingOperator::~FProfilingOperator(FProfilingOperator *this)

{
  FScriptContainerElement *pFVar1;
  IOperator *pIVar2;
  
  pFVar1 = (this->InsightsPostExecuteEventName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InsightsExecuteEventName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InsightsResetEventName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->Operator).Ptr;
  if (pIVar2 != (IOperator *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// BindInputs @ 14ad48000

void __thiscall
Metasound::FProfilingOperator::BindInputs
          (FProfilingOperator *this,FInputVertexInterfaceData *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014ad48007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->Operator).Ptr + 0x20))();
  return;
}

// BindOutputs @ 14ad48440

void __thiscall
Metasound::FProfilingOperator::BindOutputs
          (FProfilingOperator *this,FOutputVertexInterfaceData *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014ad48447. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->Operator).Ptr + 0x28))();
  return;
}

// GetExecuteFunction @ 14ad55d00

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::FProfilingOperator::GetExecuteFunction(FProfilingOperator *this)

{
  _func___cdecl_void_IOperator_ptr *p_Var1;
  
  p_Var1 = StaticExecute;
  if (this->ExecuteFunction == (_func___cdecl_void_IOperator_ptr *)0x0) {
    p_Var1 = (_func___cdecl_void_IOperator_ptr *)0x0;
  }
  return p_Var1;
}

// GetPostExecuteFunction @ 14ad566e0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::FProfilingOperator::GetPostExecuteFunction(FProfilingOperator *this)

{
  _func___cdecl_void_IOperator_ptr *p_Var1;
  
  p_Var1 = StaticPostExecute;
  if (this->PostExecuteFunction == (_func___cdecl_void_IOperator_ptr *)0x0) {
    p_Var1 = (_func___cdecl_void_IOperator_ptr *)0x0;
  }
  return p_Var1;
}

// GetResetFunction @ 14ad567c0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::FProfilingOperator::GetResetFunction(FProfilingOperator *this)

{
  _func___cdecl_void_IOperator_ptr_FResetParams_ptr *p_Var1;
  
  p_Var1 = StaticReset;
  if (this->ResetFunction == (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0) {
    p_Var1 = (_func___cdecl_void_IOperator_ptr_FResetParams_ptr *)0x0;
  }
  return p_Var1;
}

// SetAssetMetaData @ 14ad63220

void __thiscall
Metasound::FProfilingOperator::SetAssetMetaData(FProfilingOperator *this,FAssetMetaData *param_1)

{
  FName FVar1;
  
  FVar1 = param_1->AssetName;
  (this->AssetMetaData).ClassName = param_1->ClassName;
  (this->AssetMetaData).AssetName = FVar1;
  (this->AssetMetaData).AssetPath = param_1->AssetPath;
  return;
}

// StaticExecute @ 14ad64f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl Metasound::FProfilingOperator::StaticExecute(IOperator *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  TEventRef<unsigned_int> TVar7;
  FWriteBuffer *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  undefined4 *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  pwVar10 = L"";
  if (((param_1 == (IOperator *)0x0) || (param_1[6] == (IOperator)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator && DerivedOperator->ExecuteFunction",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundProfilingOperator.cpp"
                         ,0x6a,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar6 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (*(int *)(param_1 + 0xb) == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = *(wchar_t **)(param_1 + 10);
  }
  if (bVar6) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,pwVar9);
  }
  if (*(int *)(param_1 + 0xb) != 0) {
    pwVar10 = *(wchar_t **)(param_1 + 10);
  }
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              ((uint *)&param_1[0xe].field_0x4,pwVar10,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundProfilingOperator.cpp"
               ,0x6b);
    FCpuProfilerTrace::OutputBeginEvent(*(uint *)&param_1[0xe].field_0x4);
  }
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_78 = 0;
    TVar7 = (TEventRef<unsigned_int>)&local_78;
  }
  else {
    TVar7 = FStringTrace::GetNameRef(&local_60);
  }
  uVar1 = *(undefined8 *)TVar7;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_70 = 0;
    TVar7 = (TEventRef<unsigned_int>)&local_70;
  }
  else {
    TVar7 = FStringTrace::GetNameRef(&local_58);
  }
  uVar2 = *(undefined8 *)TVar7;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_68 = 0;
    TVar7 = (TEventRef<unsigned_int>)&local_68;
  }
  else {
    TVar7 = FStringTrace::GetNameRef(&local_50);
  }
  uVar3 = *(undefined8 *)TVar7;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    (*(code *)param_1[6])(param_1[4]);
  }
  else {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_48);
    *local_48 = (int)uVar1;
    local_48[1] = (int)uVar2;
    local_48[2] = (int)uVar3;
    *(undefined8 *)(local_40 + 0x28) = *(undefined8 *)(local_40 + 0x20);
    (*(code *)param_1[6])(param_1[4]);
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar4 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar8 = *(FWriteBuffer **)(lVar4 + 0x20);
    if ((int)pFVar8 - *(int *)&pFVar8->Cursor < 1) {
      pFVar8 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar8->Cursor = '\n';
    pFVar8->Cursor = pFVar8->Cursor + 1;
    pFVar8->Committed = pFVar8->Cursor;
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// StaticPostExecute @ 14ad65310

void __cdecl Metasound::FProfilingOperator::StaticPostExecute(IOperator *param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  pwVar4 = L"";
  if ((param_1 == (IOperator *)0x0) || (param_1[7] == (IOperator)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator && DerivedOperator->PostExecuteFunction",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundProfilingOperator.cpp"
                       ,0x78,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (*(int *)(param_1 + 0xd) == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = *(wchar_t **)(param_1 + 0xc);
  }
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,pwVar3);
  }
  if (*(int *)(param_1 + 0xd) != 0) {
    pwVar4 = *(wchar_t **)(param_1 + 0xc);
  }
  if (CpuChannel->Enabled < 0) {
    (*(code *)param_1[7])(param_1[4]);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              ((uint *)(param_1 + 0xf),pwVar4,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundProfilingOperator.cpp"
               ,0x79);
    FCpuProfilerTrace::OutputBeginEvent(*(uint *)(param_1 + 0xf));
    (*(code *)param_1[7])(param_1[4]);
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// StaticReset @ 14ad65470

void __cdecl Metasound::FProfilingOperator::StaticReset(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  pwVar4 = L"";
  if ((param_1 == (IOperator *)0x0) || (param_1[5] == (IOperator)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator && DerivedOperator->ResetFunction",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundProfilingOperator.cpp"
                       ,0x62,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (*(int *)(param_1 + 9) == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = *(wchar_t **)(param_1 + 8);
  }
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,pwVar3);
  }
  if (*(int *)(param_1 + 9) != 0) {
    pwVar4 = *(wchar_t **)(param_1 + 8);
  }
  if (CpuChannel->Enabled < 0) {
    (*(code *)param_1[5])(param_1[4],param_2);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              ((uint *)(param_1 + 0xe),pwVar4,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundProfilingOperator.cpp"
               ,99);
    FCpuProfilerTrace::OutputBeginEvent(*(uint *)(param_1 + 0xe));
    (*(code *)param_1[5])(param_1[4],param_2);
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

