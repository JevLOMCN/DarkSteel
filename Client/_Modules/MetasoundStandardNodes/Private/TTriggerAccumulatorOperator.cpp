// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 88

// BindInputs @ 14b1ff810

void __thiscall
Metasound::TTriggerAccumulatorOperator<8>::BindInputs
          (TTriggerAccumulatorOperator<8> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_f8;
  FScriptContainerElement *local_e8;
  TDataReadReference<bool> *local_e0;
  FString local_d8;
  FName *local_c8;
  FScriptContainerElement *local_c0;
  code *local_b8;
  FScriptContainerElement **local_b0;
  code *local_a8;
  FName **local_a0;
  FName *local_98;
  TDataReadReference<bool> *local_90;
  code *local_88;
  TDataReadReference<bool> **local_80;
  code *local_78;
  FName **local_70;
  FString local_68;
  FStringFormatArg local_58;
  
  uVar6 = 0;
  do {
    if ((this->InputTriggers).ArrayNum <= (int)uVar6) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar7 = (this->InputTriggers).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
    FStringFormatArg::FStringFormatArg(&local_58,uVar6);
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_f8.AllocatorInstance,1,&local_f8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_f8.AllocatorInstance.Data,&local_58,1);
    FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputTriggerName);
    pFVar3 = ::FName::ToString(&local_res20,&local_68);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_d8,pwVar4,&local_f8);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar5.Data = local_d8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
    local_b0 = &local_e8;
    local_c8 = &local_res8;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_a0 = &local_c8;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_e8 = pFVar7;
    local_c0 = pFVar7;
    FInputVertexInterfaceData::Apply
              (param_1,&local_res8,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_a8,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_b8);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
    if ((FStringFormatArg *)local_f8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
    if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 8);
  FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputAutoResetName);
  local_e0 = &this->bAutoReset;
  local_80 = &local_e0;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_70 = &local_98;
  local_98 = &local_res18;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_90 = local_e0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_78,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_88)
  ;
  return;
}

// BindOutputs @ 14b1ffa60

void __thiscall
Metasound::TTriggerAccumulatorOperator<8>::BindOutputs
          (TTriggerAccumulatorOperator<8> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTrigger> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTrigger> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&TriggerAccumulatorVertexNames::AccumulateOutputOnTriggerName);
  local_res18[0] = &this->OutputTrigger;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b2004d0

void __thiscall
Metasound::TTriggerAccumulatorOperator<7>::BindInputs
          (TTriggerAccumulatorOperator<7> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_f8;
  FScriptContainerElement *local_e8;
  TDataReadReference<bool> *local_e0;
  FString local_d8;
  FName *local_c8;
  FScriptContainerElement *local_c0;
  code *local_b8;
  FScriptContainerElement **local_b0;
  code *local_a8;
  FName **local_a0;
  FName *local_98;
  TDataReadReference<bool> *local_90;
  code *local_88;
  TDataReadReference<bool> **local_80;
  code *local_78;
  FName **local_70;
  FString local_68;
  FStringFormatArg local_58;
  
  uVar6 = 0;
  do {
    if ((this->InputTriggers).ArrayNum <= (int)uVar6) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar7 = (this->InputTriggers).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
    FStringFormatArg::FStringFormatArg(&local_58,uVar6);
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_f8.AllocatorInstance,1,&local_f8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_f8.AllocatorInstance.Data,&local_58,1);
    FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputTriggerName);
    pFVar3 = ::FName::ToString(&local_res20,&local_68);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_d8,pwVar4,&local_f8);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar5.Data = local_d8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
    local_b0 = &local_e8;
    local_c8 = &local_res8;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_a0 = &local_c8;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_e8 = pFVar7;
    local_c0 = pFVar7;
    FInputVertexInterfaceData::Apply
              (param_1,&local_res8,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_a8,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_b8);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
    if ((FStringFormatArg *)local_f8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
    if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 7);
  FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputAutoResetName);
  local_e0 = &this->bAutoReset;
  local_80 = &local_e0;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_70 = &local_98;
  local_98 = &local_res18;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_90 = local_e0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_78,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_88)
  ;
  return;
}

// BindOutputs @ 14b200720

void __thiscall
Metasound::TTriggerAccumulatorOperator<7>::BindOutputs
          (TTriggerAccumulatorOperator<7> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTrigger> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTrigger> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&TriggerAccumulatorVertexNames::AccumulateOutputOnTriggerName);
  local_res18[0] = &this->OutputTrigger;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b200980

void __thiscall
Metasound::TTriggerAccumulatorOperator<6>::BindInputs
          (TTriggerAccumulatorOperator<6> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_f8;
  FScriptContainerElement *local_e8;
  TDataReadReference<bool> *local_e0;
  FString local_d8;
  FName *local_c8;
  FScriptContainerElement *local_c0;
  code *local_b8;
  FScriptContainerElement **local_b0;
  code *local_a8;
  FName **local_a0;
  FName *local_98;
  TDataReadReference<bool> *local_90;
  code *local_88;
  TDataReadReference<bool> **local_80;
  code *local_78;
  FName **local_70;
  FString local_68;
  FStringFormatArg local_58;
  
  uVar6 = 0;
  do {
    if ((this->InputTriggers).ArrayNum <= (int)uVar6) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar7 = (this->InputTriggers).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
    FStringFormatArg::FStringFormatArg(&local_58,uVar6);
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_f8.AllocatorInstance,1,&local_f8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_f8.AllocatorInstance.Data,&local_58,1);
    FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputTriggerName);
    pFVar3 = ::FName::ToString(&local_res20,&local_68);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_d8,pwVar4,&local_f8);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar5.Data = local_d8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
    local_b0 = &local_e8;
    local_c8 = &local_res8;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_a0 = &local_c8;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_e8 = pFVar7;
    local_c0 = pFVar7;
    FInputVertexInterfaceData::Apply
              (param_1,&local_res8,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_a8,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_b8);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
    if ((FStringFormatArg *)local_f8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
    if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 6);
  FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputAutoResetName);
  local_e0 = &this->bAutoReset;
  local_80 = &local_e0;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_70 = &local_98;
  local_98 = &local_res18;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_90 = local_e0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_78,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_88)
  ;
  return;
}

// BindOutputs @ 14b200bd0

void __thiscall
Metasound::TTriggerAccumulatorOperator<6>::BindOutputs
          (TTriggerAccumulatorOperator<6> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTrigger> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTrigger> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&TriggerAccumulatorVertexNames::AccumulateOutputOnTriggerName);
  local_res18[0] = &this->OutputTrigger;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b2012a0

void __thiscall
Metasound::TTriggerAccumulatorOperator<5>::BindInputs
          (TTriggerAccumulatorOperator<5> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_f8;
  FScriptContainerElement *local_e8;
  TDataReadReference<bool> *local_e0;
  FString local_d8;
  FName *local_c8;
  FScriptContainerElement *local_c0;
  code *local_b8;
  FScriptContainerElement **local_b0;
  code *local_a8;
  FName **local_a0;
  FName *local_98;
  TDataReadReference<bool> *local_90;
  code *local_88;
  TDataReadReference<bool> **local_80;
  code *local_78;
  FName **local_70;
  FString local_68;
  FStringFormatArg local_58;
  
  uVar6 = 0;
  do {
    if ((this->InputTriggers).ArrayNum <= (int)uVar6) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar7 = (this->InputTriggers).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
    FStringFormatArg::FStringFormatArg(&local_58,uVar6);
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_f8.AllocatorInstance,1,&local_f8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_f8.AllocatorInstance.Data,&local_58,1);
    FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputTriggerName);
    pFVar3 = ::FName::ToString(&local_res20,&local_68);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_d8,pwVar4,&local_f8);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar5.Data = local_d8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
    local_b0 = &local_e8;
    local_c8 = &local_res8;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_a0 = &local_c8;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_e8 = pFVar7;
    local_c0 = pFVar7;
    FInputVertexInterfaceData::Apply
              (param_1,&local_res8,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_a8,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_b8);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
    if ((FStringFormatArg *)local_f8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
    if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 5);
  FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputAutoResetName);
  local_e0 = &this->bAutoReset;
  local_80 = &local_e0;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_70 = &local_98;
  local_98 = &local_res18;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_90 = local_e0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_78,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_88)
  ;
  return;
}

// BindOutputs @ 14b2014f0

void __thiscall
Metasound::TTriggerAccumulatorOperator<5>::BindOutputs
          (TTriggerAccumulatorOperator<5> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTrigger> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTrigger> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&TriggerAccumulatorVertexNames::AccumulateOutputOnTriggerName);
  local_res18[0] = &this->OutputTrigger;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b2017b0

void __thiscall
Metasound::TTriggerAccumulatorOperator<4>::BindInputs
          (TTriggerAccumulatorOperator<4> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_f8;
  FScriptContainerElement *local_e8;
  TDataReadReference<bool> *local_e0;
  FString local_d8;
  FName *local_c8;
  FScriptContainerElement *local_c0;
  code *local_b8;
  FScriptContainerElement **local_b0;
  code *local_a8;
  FName **local_a0;
  FName *local_98;
  TDataReadReference<bool> *local_90;
  code *local_88;
  TDataReadReference<bool> **local_80;
  code *local_78;
  FName **local_70;
  FString local_68;
  FStringFormatArg local_58;
  
  uVar6 = 0;
  do {
    if ((this->InputTriggers).ArrayNum <= (int)uVar6) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar7 = (this->InputTriggers).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
    FStringFormatArg::FStringFormatArg(&local_58,uVar6);
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_f8.AllocatorInstance,1,&local_f8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_f8.AllocatorInstance.Data,&local_58,1);
    FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputTriggerName);
    pFVar3 = ::FName::ToString(&local_res20,&local_68);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_d8,pwVar4,&local_f8);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar5.Data = local_d8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
    local_b0 = &local_e8;
    local_c8 = &local_res8;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_a0 = &local_c8;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_e8 = pFVar7;
    local_c0 = pFVar7;
    FInputVertexInterfaceData::Apply
              (param_1,&local_res8,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_a8,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_b8);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
    if ((FStringFormatArg *)local_f8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
    if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputAutoResetName);
  local_e0 = &this->bAutoReset;
  local_80 = &local_e0;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_70 = &local_98;
  local_98 = &local_res18;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_90 = local_e0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_78,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_88)
  ;
  return;
}

// BindOutputs @ 14b201a00

void __thiscall
Metasound::TTriggerAccumulatorOperator<4>::BindOutputs
          (TTriggerAccumulatorOperator<4> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTrigger> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTrigger> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&TriggerAccumulatorVertexNames::AccumulateOutputOnTriggerName);
  local_res18[0] = &this->OutputTrigger;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b201df0

void __thiscall
Metasound::TTriggerAccumulatorOperator<3>::BindInputs
          (TTriggerAccumulatorOperator<3> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_f8;
  FScriptContainerElement *local_e8;
  TDataReadReference<bool> *local_e0;
  FString local_d8;
  FName *local_c8;
  FScriptContainerElement *local_c0;
  code *local_b8;
  FScriptContainerElement **local_b0;
  code *local_a8;
  FName **local_a0;
  FName *local_98;
  TDataReadReference<bool> *local_90;
  code *local_88;
  TDataReadReference<bool> **local_80;
  code *local_78;
  FName **local_70;
  FString local_68;
  FStringFormatArg local_58;
  
  uVar6 = 0;
  do {
    if ((this->InputTriggers).ArrayNum <= (int)uVar6) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar7 = (this->InputTriggers).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
    FStringFormatArg::FStringFormatArg(&local_58,uVar6);
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_f8.AllocatorInstance,1,&local_f8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_f8.AllocatorInstance.Data,&local_58,1);
    FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputTriggerName);
    pFVar3 = ::FName::ToString(&local_res20,&local_68);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_d8,pwVar4,&local_f8);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar5.Data = local_d8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
    local_b0 = &local_e8;
    local_c8 = &local_res8;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_a0 = &local_c8;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_e8 = pFVar7;
    local_c0 = pFVar7;
    FInputVertexInterfaceData::Apply
              (param_1,&local_res8,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_a8,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_b8);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
    if ((FStringFormatArg *)local_f8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
    if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 3);
  FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputAutoResetName);
  local_e0 = &this->bAutoReset;
  local_80 = &local_e0;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_70 = &local_98;
  local_98 = &local_res18;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_90 = local_e0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_78,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_88)
  ;
  return;
}

// BindOutputs @ 14b202040

void __thiscall
Metasound::TTriggerAccumulatorOperator<3>::BindOutputs
          (TTriggerAccumulatorOperator<3> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTrigger> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTrigger> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&TriggerAccumulatorVertexNames::AccumulateOutputOnTriggerName);
  local_res18[0] = &this->OutputTrigger;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b2024e0

void __thiscall
Metasound::TTriggerAccumulatorOperator<2>::BindInputs
          (TTriggerAccumulatorOperator<2> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_f8;
  FScriptContainerElement *local_e8;
  TDataReadReference<bool> *local_e0;
  FString local_d8;
  FName *local_c8;
  FScriptContainerElement *local_c0;
  code *local_b8;
  FScriptContainerElement **local_b0;
  code *local_a8;
  FName **local_a0;
  FName *local_98;
  TDataReadReference<bool> *local_90;
  code *local_88;
  TDataReadReference<bool> **local_80;
  code *local_78;
  FName **local_70;
  FString local_68;
  FStringFormatArg local_58;
  
  uVar6 = 0;
  do {
    if ((this->InputTriggers).ArrayNum <= (int)uVar6) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar7 = (this->InputTriggers).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
    FStringFormatArg::FStringFormatArg(&local_58,uVar6);
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_f8.AllocatorInstance,1,&local_f8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_f8.AllocatorInstance.Data,&local_58,1);
    FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputTriggerName);
    pFVar3 = ::FName::ToString(&local_res20,&local_68);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_d8,pwVar4,&local_f8);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar5.Data = local_d8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
    local_b0 = &local_e8;
    local_c8 = &local_res8;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_a0 = &local_c8;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_e8 = pFVar7;
    local_c0 = pFVar7;
    FInputVertexInterfaceData::Apply
              (param_1,&local_res8,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_a8,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_b8);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
    if ((FStringFormatArg *)local_f8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
    if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 2);
  FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputAutoResetName);
  local_e0 = &this->bAutoReset;
  local_80 = &local_e0;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_70 = &local_98;
  local_98 = &local_res18;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_90 = local_e0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_78,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_88)
  ;
  return;
}

// BindOutputs @ 14b202730

void __thiscall
Metasound::TTriggerAccumulatorOperator<2>::BindOutputs
          (TTriggerAccumulatorOperator<2> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTrigger> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTrigger> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&TriggerAccumulatorVertexNames::AccumulateOutputOnTriggerName);
  local_res18[0] = &this->OutputTrigger;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// BindInputs @ 14b202dd0

void __thiscall
Metasound::TTriggerAccumulatorOperator<1>::BindInputs
          (TTriggerAccumulatorOperator<1> *this,FInputVertexInterfaceData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  FName local_res8 [2];
  FName local_res18;
  FName local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_e8;
  FScriptContainerElement *local_d8;
  TDataReadReference<bool> *local_d0;
  FString local_c8;
  FName *local_b8;
  FScriptContainerElement *local_b0;
  code *local_a8;
  FScriptContainerElement **local_a0;
  code *local_98;
  FName **local_90;
  FName *local_88;
  TDataReadReference<bool> *local_80;
  code *local_78;
  TDataReadReference<bool> **local_70;
  code *local_68;
  FName **local_60;
  FString local_58;
  FStringFormatArg local_48;
  
  if ((this->InputTriggers).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->InputTriggers).AllocatorInstance.Data;
  FStringFormatArg::FStringFormatArg(&local_48,0);
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_e8.AllocatorInstance,1,&local_e8.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_e8.AllocatorInstance.Data,&local_48,1)
  ;
  FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputTriggerName);
  pFVar4 = ::FName::ToString(&local_res20,&local_58);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FormatImpl(&local_c8,pwVar5,&local_e8);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar6.Data = local_c8.Data.AllocatorInstance.Data;
  }
  ::FName::FName(local_res8,(wchar_t *)FVar6.Data);
  local_a0 = &local_d8;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_b8 = local_res8;
  local_90 = &local_b8;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_d8 = pFVar1;
  local_b0 = pFVar1;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_98,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_a8)
  ;
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
  if ((FStringFormatArg *)local_e8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputAutoResetName);
  local_d0 = &this->bAutoReset;
  local_70 = &local_d0;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_60 = &local_88;
  local_88 = &local_res18;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_80 = local_d0;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_68,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_78)
  ;
  return;
}

// BindOutputs @ 14b203030

void __thiscall
Metasound::TTriggerAccumulatorOperator<1>::BindOutputs
          (TTriggerAccumulatorOperator<1> *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FTrigger> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FTrigger> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&TriggerAccumulatorVertexNames::AccumulateOutputOnTriggerName);
  local_res18[0] = &this->OutputTrigger;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// TTriggerAccumulatorOperator<1> @ 14b22f120

TTriggerAccumulatorOperator<1> * __thiscall
Metasound::TTriggerAccumulatorOperator<1>::TTriggerAccumulatorOperator<1>
          (TTriggerAccumulatorOperator<1> *this,FOperatorSettings *param_1,
          TDataReadReference<bool> *param_2,
          TArray<Metasound::TDataReadReference<Metasound::FTrigger>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  TArray<Metasound::TDataReadReference<Metasound::FTrigger>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  TDataReadReference<Metasound::FTrigger> *pTVar5;
  
  this->_padding_ = (longlong)&___7__TTriggerAccumulatorOperator__00_Metasound__6B_;
  *(undefined ***)&this->bAutoReset = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bAutoReset).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar4 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->bAutoReset).field_0x10 = lVar4;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  pTVar1 = &this->InputTriggers;
  *(undefined ***)&this->bAutoReset = &___7__TDataReadReference__N_Metasound__6B_;
  piVar2 = &(this->InputTriggers).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_3->ArrayNum;
  pTVar5 = (TDataReadReference<Metasound::FTrigger> *)(param_3->AllocatorInstance).Data;
  (this->InputTriggers).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<Metasound::TDataReadReference<Metasound::FTrigger>,Metasound::TDataReadReference<Metasound::FTrigger>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar5,iVar3);
  }
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->OutputTrigger,NewObject,param_1);
  *(undefined ***)&this->OutputTrigger =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  (this->bInputWasTriggered).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->bInputWasTriggered).ArrayNum = 0;
  (this->bInputWasTriggered).ArrayMax = 0;
  this->bOutputTriggered = false;
  ResetTriggerState(this);
  return this;
}

// TTriggerAccumulatorOperator<2> @ 14b22f220

TTriggerAccumulatorOperator<2> * __thiscall
Metasound::TTriggerAccumulatorOperator<2>::TTriggerAccumulatorOperator<2>
          (TTriggerAccumulatorOperator<2> *this,FOperatorSettings *param_1,
          TDataReadReference<bool> *param_2,
          TArray<Metasound::TDataReadReference<Metasound::FTrigger>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  TArray<Metasound::TDataReadReference<Metasound::FTrigger>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  TDataReadReference<Metasound::FTrigger> *pTVar5;
  
  this->_padding_ = (longlong)&___7__TTriggerAccumulatorOperator__01_Metasound__6B_;
  *(undefined ***)&this->bAutoReset = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bAutoReset).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar4 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->bAutoReset).field_0x10 = lVar4;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  pTVar1 = &this->InputTriggers;
  *(undefined ***)&this->bAutoReset = &___7__TDataReadReference__N_Metasound__6B_;
  piVar2 = &(this->InputTriggers).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_3->ArrayNum;
  pTVar5 = (TDataReadReference<Metasound::FTrigger> *)(param_3->AllocatorInstance).Data;
  (this->InputTriggers).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<Metasound::TDataReadReference<Metasound::FTrigger>,Metasound::TDataReadReference<Metasound::FTrigger>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar5,iVar3);
  }
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->OutputTrigger,NewObject,param_1);
  *(undefined ***)&this->OutputTrigger =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  (this->bInputWasTriggered).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->bInputWasTriggered).ArrayNum = 0;
  (this->bInputWasTriggered).ArrayMax = 0;
  this->bOutputTriggered = false;
  ResetTriggerState(this);
  return this;
}

// TTriggerAccumulatorOperator<3> @ 14b22f320

TTriggerAccumulatorOperator<3> * __thiscall
Metasound::TTriggerAccumulatorOperator<3>::TTriggerAccumulatorOperator<3>
          (TTriggerAccumulatorOperator<3> *this,FOperatorSettings *param_1,
          TDataReadReference<bool> *param_2,
          TArray<Metasound::TDataReadReference<Metasound::FTrigger>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  TArray<Metasound::TDataReadReference<Metasound::FTrigger>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  TDataReadReference<Metasound::FTrigger> *pTVar5;
  
  this->_padding_ = (longlong)&___7__TTriggerAccumulatorOperator__02_Metasound__6B_;
  *(undefined ***)&this->bAutoReset = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bAutoReset).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar4 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->bAutoReset).field_0x10 = lVar4;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  pTVar1 = &this->InputTriggers;
  *(undefined ***)&this->bAutoReset = &___7__TDataReadReference__N_Metasound__6B_;
  piVar2 = &(this->InputTriggers).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_3->ArrayNum;
  pTVar5 = (TDataReadReference<Metasound::FTrigger> *)(param_3->AllocatorInstance).Data;
  (this->InputTriggers).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<Metasound::TDataReadReference<Metasound::FTrigger>,Metasound::TDataReadReference<Metasound::FTrigger>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar5,iVar3);
  }
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->OutputTrigger,NewObject,param_1);
  *(undefined ***)&this->OutputTrigger =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  (this->bInputWasTriggered).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->bInputWasTriggered).ArrayNum = 0;
  (this->bInputWasTriggered).ArrayMax = 0;
  this->bOutputTriggered = false;
  ResetTriggerState(this);
  return this;
}

// TTriggerAccumulatorOperator<4> @ 14b22f420

TTriggerAccumulatorOperator<4> * __thiscall
Metasound::TTriggerAccumulatorOperator<4>::TTriggerAccumulatorOperator<4>
          (TTriggerAccumulatorOperator<4> *this,FOperatorSettings *param_1,
          TDataReadReference<bool> *param_2,
          TArray<Metasound::TDataReadReference<Metasound::FTrigger>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  TArray<Metasound::TDataReadReference<Metasound::FTrigger>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  TDataReadReference<Metasound::FTrigger> *pTVar5;
  
  this->_padding_ = (longlong)&___7__TTriggerAccumulatorOperator__03_Metasound__6B_;
  *(undefined ***)&this->bAutoReset = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bAutoReset).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar4 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->bAutoReset).field_0x10 = lVar4;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  pTVar1 = &this->InputTriggers;
  *(undefined ***)&this->bAutoReset = &___7__TDataReadReference__N_Metasound__6B_;
  piVar2 = &(this->InputTriggers).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_3->ArrayNum;
  pTVar5 = (TDataReadReference<Metasound::FTrigger> *)(param_3->AllocatorInstance).Data;
  (this->InputTriggers).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<Metasound::TDataReadReference<Metasound::FTrigger>,Metasound::TDataReadReference<Metasound::FTrigger>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar5,iVar3);
  }
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->OutputTrigger,NewObject,param_1);
  *(undefined ***)&this->OutputTrigger =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  (this->bInputWasTriggered).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->bInputWasTriggered).ArrayNum = 0;
  (this->bInputWasTriggered).ArrayMax = 0;
  this->bOutputTriggered = false;
  ResetTriggerState(this);
  return this;
}

// TTriggerAccumulatorOperator<5> @ 14b22f520

TTriggerAccumulatorOperator<5> * __thiscall
Metasound::TTriggerAccumulatorOperator<5>::TTriggerAccumulatorOperator<5>
          (TTriggerAccumulatorOperator<5> *this,FOperatorSettings *param_1,
          TDataReadReference<bool> *param_2,
          TArray<Metasound::TDataReadReference<Metasound::FTrigger>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  TArray<Metasound::TDataReadReference<Metasound::FTrigger>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  TDataReadReference<Metasound::FTrigger> *pTVar5;
  
  this->_padding_ = (longlong)&___7__TTriggerAccumulatorOperator__04_Metasound__6B_;
  *(undefined ***)&this->bAutoReset = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bAutoReset).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar4 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->bAutoReset).field_0x10 = lVar4;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  pTVar1 = &this->InputTriggers;
  *(undefined ***)&this->bAutoReset = &___7__TDataReadReference__N_Metasound__6B_;
  piVar2 = &(this->InputTriggers).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_3->ArrayNum;
  pTVar5 = (TDataReadReference<Metasound::FTrigger> *)(param_3->AllocatorInstance).Data;
  (this->InputTriggers).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<Metasound::TDataReadReference<Metasound::FTrigger>,Metasound::TDataReadReference<Metasound::FTrigger>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar5,iVar3);
  }
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->OutputTrigger,NewObject,param_1);
  *(undefined ***)&this->OutputTrigger =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  (this->bInputWasTriggered).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->bInputWasTriggered).ArrayNum = 0;
  (this->bInputWasTriggered).ArrayMax = 0;
  this->bOutputTriggered = false;
  ResetTriggerState(this);
  return this;
}

// TTriggerAccumulatorOperator<6> @ 14b22f620

TTriggerAccumulatorOperator<6> * __thiscall
Metasound::TTriggerAccumulatorOperator<6>::TTriggerAccumulatorOperator<6>
          (TTriggerAccumulatorOperator<6> *this,FOperatorSettings *param_1,
          TDataReadReference<bool> *param_2,
          TArray<Metasound::TDataReadReference<Metasound::FTrigger>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  TArray<Metasound::TDataReadReference<Metasound::FTrigger>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  TDataReadReference<Metasound::FTrigger> *pTVar5;
  
  this->_padding_ = (longlong)&___7__TTriggerAccumulatorOperator__05_Metasound__6B_;
  *(undefined ***)&this->bAutoReset = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bAutoReset).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar4 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->bAutoReset).field_0x10 = lVar4;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  pTVar1 = &this->InputTriggers;
  *(undefined ***)&this->bAutoReset = &___7__TDataReadReference__N_Metasound__6B_;
  piVar2 = &(this->InputTriggers).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_3->ArrayNum;
  pTVar5 = (TDataReadReference<Metasound::FTrigger> *)(param_3->AllocatorInstance).Data;
  (this->InputTriggers).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<Metasound::TDataReadReference<Metasound::FTrigger>,Metasound::TDataReadReference<Metasound::FTrigger>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar5,iVar3);
  }
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->OutputTrigger,NewObject,param_1);
  *(undefined ***)&this->OutputTrigger =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  (this->bInputWasTriggered).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->bInputWasTriggered).ArrayNum = 0;
  (this->bInputWasTriggered).ArrayMax = 0;
  this->bOutputTriggered = false;
  ResetTriggerState(this);
  return this;
}

// TTriggerAccumulatorOperator<7> @ 14b22f720

TTriggerAccumulatorOperator<7> * __thiscall
Metasound::TTriggerAccumulatorOperator<7>::TTriggerAccumulatorOperator<7>
          (TTriggerAccumulatorOperator<7> *this,FOperatorSettings *param_1,
          TDataReadReference<bool> *param_2,
          TArray<Metasound::TDataReadReference<Metasound::FTrigger>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  TArray<Metasound::TDataReadReference<Metasound::FTrigger>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  TDataReadReference<Metasound::FTrigger> *pTVar5;
  
  this->_padding_ = (longlong)&___7__TTriggerAccumulatorOperator__06_Metasound__6B_;
  *(undefined ***)&this->bAutoReset = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bAutoReset).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar4 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->bAutoReset).field_0x10 = lVar4;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  pTVar1 = &this->InputTriggers;
  *(undefined ***)&this->bAutoReset = &___7__TDataReadReference__N_Metasound__6B_;
  piVar2 = &(this->InputTriggers).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_3->ArrayNum;
  pTVar5 = (TDataReadReference<Metasound::FTrigger> *)(param_3->AllocatorInstance).Data;
  (this->InputTriggers).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<Metasound::TDataReadReference<Metasound::FTrigger>,Metasound::TDataReadReference<Metasound::FTrigger>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar5,iVar3);
  }
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->OutputTrigger,NewObject,param_1);
  *(undefined ***)&this->OutputTrigger =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  (this->bInputWasTriggered).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->bInputWasTriggered).ArrayNum = 0;
  (this->bInputWasTriggered).ArrayMax = 0;
  this->bOutputTriggered = false;
  ResetTriggerState(this);
  return this;
}

// TTriggerAccumulatorOperator<8> @ 14b22f820

TTriggerAccumulatorOperator<8> * __thiscall
Metasound::TTriggerAccumulatorOperator<8>::TTriggerAccumulatorOperator<8>
          (TTriggerAccumulatorOperator<8> *this,FOperatorSettings *param_1,
          TDataReadReference<bool> *param_2,
          TArray<Metasound::TDataReadReference<Metasound::FTrigger>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  TArray<Metasound::TDataReadReference<Metasound::FTrigger>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  TDataReadReference<Metasound::FTrigger> *pTVar5;
  
  this->_padding_ = (longlong)&___7__TTriggerAccumulatorOperator__07_Metasound__6B_;
  *(undefined ***)&this->bAutoReset = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bAutoReset).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar4 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->bAutoReset).field_0x10 = lVar4;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  pTVar1 = &this->InputTriggers;
  *(undefined ***)&this->bAutoReset = &___7__TDataReadReference__N_Metasound__6B_;
  piVar2 = &(this->InputTriggers).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_3->ArrayNum;
  pTVar5 = (TDataReadReference<Metasound::FTrigger> *)(param_3->AllocatorInstance).Data;
  (this->InputTriggers).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<Metasound::TDataReadReference<Metasound::FTrigger>,Metasound::TDataReadReference<Metasound::FTrigger>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar5,iVar3);
  }
  TDataReference<Metasound::FTrigger>::
  TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FTrigger> *)&this->OutputTrigger,NewObject,param_1);
  *(undefined ***)&this->OutputTrigger =
       &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
  (this->bInputWasTriggered).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->bInputWasTriggered).ArrayNum = 0;
  (this->bInputWasTriggered).ArrayMax = 0;
  this->bOutputTriggered = false;
  ResetTriggerState(this);
  return this;
}

// ~TTriggerAccumulatorOperator<1> @ 14b235bd0

void __thiscall
Metasound::TTriggerAccumulatorOperator<1>::~TTriggerAccumulatorOperator<1>
          (TTriggerAccumulatorOperator<1> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->bInputWasTriggered).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputTrigger).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
            ((TDataReadReference<Metasound::FTrigger> *)(this->InputTriggers).AllocatorInstance.Data
             ,(this->InputTriggers).ArrayNum);
  pFVar1 = (this->InputTriggers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bAutoReset).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TTriggerAccumulatorOperator<2> @ 14b235c30

void __thiscall
Metasound::TTriggerAccumulatorOperator<2>::~TTriggerAccumulatorOperator<2>
          (TTriggerAccumulatorOperator<2> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->bInputWasTriggered).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputTrigger).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
            ((TDataReadReference<Metasound::FTrigger> *)(this->InputTriggers).AllocatorInstance.Data
             ,(this->InputTriggers).ArrayNum);
  pFVar1 = (this->InputTriggers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bAutoReset).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TTriggerAccumulatorOperator<3> @ 14b235c90

void __thiscall
Metasound::TTriggerAccumulatorOperator<3>::~TTriggerAccumulatorOperator<3>
          (TTriggerAccumulatorOperator<3> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->bInputWasTriggered).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputTrigger).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
            ((TDataReadReference<Metasound::FTrigger> *)(this->InputTriggers).AllocatorInstance.Data
             ,(this->InputTriggers).ArrayNum);
  pFVar1 = (this->InputTriggers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bAutoReset).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TTriggerAccumulatorOperator<4> @ 14b235cf0

void __thiscall
Metasound::TTriggerAccumulatorOperator<4>::~TTriggerAccumulatorOperator<4>
          (TTriggerAccumulatorOperator<4> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->bInputWasTriggered).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputTrigger).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
            ((TDataReadReference<Metasound::FTrigger> *)(this->InputTriggers).AllocatorInstance.Data
             ,(this->InputTriggers).ArrayNum);
  pFVar1 = (this->InputTriggers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bAutoReset).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TTriggerAccumulatorOperator<5> @ 14b235d50

void __thiscall
Metasound::TTriggerAccumulatorOperator<5>::~TTriggerAccumulatorOperator<5>
          (TTriggerAccumulatorOperator<5> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->bInputWasTriggered).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputTrigger).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
            ((TDataReadReference<Metasound::FTrigger> *)(this->InputTriggers).AllocatorInstance.Data
             ,(this->InputTriggers).ArrayNum);
  pFVar1 = (this->InputTriggers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bAutoReset).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TTriggerAccumulatorOperator<6> @ 14b235db0

void __thiscall
Metasound::TTriggerAccumulatorOperator<6>::~TTriggerAccumulatorOperator<6>
          (TTriggerAccumulatorOperator<6> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->bInputWasTriggered).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputTrigger).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
            ((TDataReadReference<Metasound::FTrigger> *)(this->InputTriggers).AllocatorInstance.Data
             ,(this->InputTriggers).ArrayNum);
  pFVar1 = (this->InputTriggers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bAutoReset).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TTriggerAccumulatorOperator<7> @ 14b235e10

void __thiscall
Metasound::TTriggerAccumulatorOperator<7>::~TTriggerAccumulatorOperator<7>
          (TTriggerAccumulatorOperator<7> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->bInputWasTriggered).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputTrigger).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
            ((TDataReadReference<Metasound::FTrigger> *)(this->InputTriggers).AllocatorInstance.Data
             ,(this->InputTriggers).ArrayNum);
  pFVar1 = (this->InputTriggers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bAutoReset).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// ~TTriggerAccumulatorOperator<8> @ 14b235e70

void __thiscall
Metasound::TTriggerAccumulatorOperator<8>::~TTriggerAccumulatorOperator<8>
          (TTriggerAccumulatorOperator<8> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->bInputWasTriggered).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutputTrigger).field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
            ((TDataReadReference<Metasound::FTrigger> *)(this->InputTriggers).AllocatorInstance.Data
             ,(this->InputTriggers).ArrayNum);
  pFVar1 = (this->InputTriggers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->bAutoReset).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// operator() @ 14b2383c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TTriggerAccumulatorOperator<1>::GetDefaultInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  undefined1 auStackY_188 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_148;
  FInputVertexInterface local_138;
  FName local_118;
  FName local_110;
  FString local_108;
  FOutputVertexInterface local_f8;
  FString local_d8;
  FStringFormatArg local_c8;
  TOutputDataVertex<Metasound::FTrigger> local_a8;
  TInputDataVertex<Metasound::FTrigger> local_88;
  TInputDataVertex<bool> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_138);
  FStringFormatArg::FStringFormatArg(&local_c8,0);
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_148.AllocatorInstance,1,&local_148.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_148.AllocatorInstance.Data,&local_c8,1);
  FLazyName::Resolve(&Metasound::TriggerAccumulatorVertexNames::InputTriggerName);
  pFVar3 = ::FName::ToString(&local_118,&local_d8);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  ::FString::FormatImpl(&local_108,pwVar7,&local_148);
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_108.Data.ArrayNum != 0) {
    FVar8.Data = local_108.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_110,(wchar_t *)FVar8.Data);
  pFVar4 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                     (&local_88,&local_110,&Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_138,pFVar4);
  if (0xc < (byte)local_88._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_88._48_1_])(&local_88.field_0x20);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_148.AllocatorInstance.Data,local_148.ArrayNum);
  if ((FStringFormatArg *)local_148.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  if (local_c8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.StringValue.Data.AllocatorInstance.Data);
  }
  pFVar4 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><>
                     (&local_50,&Metasound::TriggerAccumulatorVertexNames::InputAutoResetName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_138,pFVar4);
  if (0xc < (byte)local_50._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_f8);
  pTVar6 = Metasound::TOutputDataVertex<Metasound::FTrigger>::
           TOutputDataVertex<Metasound::FTrigger><>
                     (&local_a8,
                      &Metasound::TriggerAccumulatorVertexNames::AccumulateOutputOnTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
            ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_f8,
             (FOutputDataVertex *)pTVar6);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_138,&local_f8);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data,
             local_f8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_f8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_f8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_f8._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
             local_138.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_138._padding_,(int)local_138._padding_);
  if ((FInputDataVertex *)local_138._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b238690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TTriggerAccumulatorOperator<2>::GetDefaultInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStackY_198 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_158;
  FInputVertexInterface local_148;
  FName local_128;
  FName local_120;
  FString local_118;
  FOutputVertexInterface local_108;
  FString local_e8;
  FStringFormatArg local_d8;
  TOutputDataVertex<Metasound::FTrigger> local_b8;
  TInputDataVertex<Metasound::FTrigger> local_98;
  TInputDataVertex<bool> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_148);
  uVar9 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_d8,uVar9);
    local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_158.AllocatorInstance,1,&local_158.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_158.AllocatorInstance.Data,&local_d8,1);
    FLazyName::Resolve(&Metasound::TriggerAccumulatorVertexNames::InputTriggerName);
    pFVar3 = ::FName::ToString(&local_128,&local_e8);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_118,pwVar7,&local_158);
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_118.Data.ArrayNum != 0) {
      FVar8.Data = local_118.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_120,(wchar_t *)FVar8.Data);
    pFVar4 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FTrigger>::
             TInputDataVertex<Metasound::FTrigger><>
                       (&local_98,&local_120,&Metasound::FDataVertexMetadata::EmptyBasic);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_148,pFVar4);
    uVar10 = (ulonglong)(byte)local_98._48_1_;
    if (0xc < (byte)local_98._48_1_) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10])(&local_98.field_0x20);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_158.AllocatorInstance.Data,local_158.ArrayNum);
    if ((FStringFormatArg *)local_158.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_158.AllocatorInstance.Data);
    }
    if (local_d8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.StringValue.Data.AllocatorInstance.Data);
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 2);
  pFVar4 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><>
                     (&local_60,&Metasound::TriggerAccumulatorVertexNames::InputAutoResetName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_148,pFVar4);
  if (0xc < (byte)local_60._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_60._48_1_])(&local_60.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_108);
  pTVar6 = Metasound::TOutputDataVertex<Metasound::FTrigger>::
           TOutputDataVertex<Metasound::FTrigger><>
                     (&local_b8,
                      &Metasound::TriggerAccumulatorVertexNames::AccumulateOutputOnTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
            ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_108,
             (FOutputDataVertex *)pTVar6);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_148,&local_108);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_108.SubInterfaces.AllocatorInstance.Data,
             local_108.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_108.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_108.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_108._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_108._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data,
             local_148.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_148.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_148._padding_,(int)local_148._padding_);
  if ((FInputDataVertex *)local_148._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b238980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TTriggerAccumulatorOperator<3>::GetDefaultInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStackY_198 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_158;
  FInputVertexInterface local_148;
  FName local_128;
  FName local_120;
  FString local_118;
  FOutputVertexInterface local_108;
  FString local_e8;
  FStringFormatArg local_d8;
  TOutputDataVertex<Metasound::FTrigger> local_b8;
  TInputDataVertex<Metasound::FTrigger> local_98;
  TInputDataVertex<bool> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_148);
  uVar9 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_d8,uVar9);
    local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_158.AllocatorInstance,1,&local_158.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_158.AllocatorInstance.Data,&local_d8,1);
    FLazyName::Resolve(&Metasound::TriggerAccumulatorVertexNames::InputTriggerName);
    pFVar3 = ::FName::ToString(&local_128,&local_e8);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_118,pwVar7,&local_158);
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_118.Data.ArrayNum != 0) {
      FVar8.Data = local_118.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_120,(wchar_t *)FVar8.Data);
    pFVar4 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FTrigger>::
             TInputDataVertex<Metasound::FTrigger><>
                       (&local_98,&local_120,&Metasound::FDataVertexMetadata::EmptyBasic);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_148,pFVar4);
    uVar10 = (ulonglong)(byte)local_98._48_1_;
    if (0xc < (byte)local_98._48_1_) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10])(&local_98.field_0x20);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_158.AllocatorInstance.Data,local_158.ArrayNum);
    if ((FStringFormatArg *)local_158.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_158.AllocatorInstance.Data);
    }
    if (local_d8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.StringValue.Data.AllocatorInstance.Data);
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 3);
  pFVar4 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><>
                     (&local_60,&Metasound::TriggerAccumulatorVertexNames::InputAutoResetName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_148,pFVar4);
  if (0xc < (byte)local_60._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_60._48_1_])(&local_60.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_108);
  pTVar6 = Metasound::TOutputDataVertex<Metasound::FTrigger>::
           TOutputDataVertex<Metasound::FTrigger><>
                     (&local_b8,
                      &Metasound::TriggerAccumulatorVertexNames::AccumulateOutputOnTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
            ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_108,
             (FOutputDataVertex *)pTVar6);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_148,&local_108);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_108.SubInterfaces.AllocatorInstance.Data,
             local_108.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_108.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_108.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_108._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_108._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data,
             local_148.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_148.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_148._padding_,(int)local_148._padding_);
  if ((FInputDataVertex *)local_148._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b238c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TTriggerAccumulatorOperator<4>::GetDefaultInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStackY_198 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_158;
  FInputVertexInterface local_148;
  FName local_128;
  FName local_120;
  FString local_118;
  FOutputVertexInterface local_108;
  FString local_e8;
  FStringFormatArg local_d8;
  TOutputDataVertex<Metasound::FTrigger> local_b8;
  TInputDataVertex<Metasound::FTrigger> local_98;
  TInputDataVertex<bool> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_148);
  uVar9 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_d8,uVar9);
    local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_158.AllocatorInstance,1,&local_158.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_158.AllocatorInstance.Data,&local_d8,1);
    FLazyName::Resolve(&Metasound::TriggerAccumulatorVertexNames::InputTriggerName);
    pFVar3 = ::FName::ToString(&local_128,&local_e8);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_118,pwVar7,&local_158);
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_118.Data.ArrayNum != 0) {
      FVar8.Data = local_118.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_120,(wchar_t *)FVar8.Data);
    pFVar4 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FTrigger>::
             TInputDataVertex<Metasound::FTrigger><>
                       (&local_98,&local_120,&Metasound::FDataVertexMetadata::EmptyBasic);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_148,pFVar4);
    uVar10 = (ulonglong)(byte)local_98._48_1_;
    if (0xc < (byte)local_98._48_1_) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10])(&local_98.field_0x20);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_158.AllocatorInstance.Data,local_158.ArrayNum);
    if ((FStringFormatArg *)local_158.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_158.AllocatorInstance.Data);
    }
    if (local_d8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.StringValue.Data.AllocatorInstance.Data);
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 4);
  pFVar4 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><>
                     (&local_60,&Metasound::TriggerAccumulatorVertexNames::InputAutoResetName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_148,pFVar4);
  if (0xc < (byte)local_60._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_60._48_1_])(&local_60.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_108);
  pTVar6 = Metasound::TOutputDataVertex<Metasound::FTrigger>::
           TOutputDataVertex<Metasound::FTrigger><>
                     (&local_b8,
                      &Metasound::TriggerAccumulatorVertexNames::AccumulateOutputOnTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
            ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_108,
             (FOutputDataVertex *)pTVar6);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_148,&local_108);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_108.SubInterfaces.AllocatorInstance.Data,
             local_108.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_108.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_108.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_108._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_108._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data,
             local_148.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_148.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_148._padding_,(int)local_148._padding_);
  if ((FInputDataVertex *)local_148._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b238f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TTriggerAccumulatorOperator<5>::GetDefaultInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStackY_198 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_158;
  FInputVertexInterface local_148;
  FName local_128;
  FName local_120;
  FString local_118;
  FOutputVertexInterface local_108;
  FString local_e8;
  FStringFormatArg local_d8;
  TOutputDataVertex<Metasound::FTrigger> local_b8;
  TInputDataVertex<Metasound::FTrigger> local_98;
  TInputDataVertex<bool> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_148);
  uVar9 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_d8,uVar9);
    local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_158.AllocatorInstance,1,&local_158.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_158.AllocatorInstance.Data,&local_d8,1);
    FLazyName::Resolve(&Metasound::TriggerAccumulatorVertexNames::InputTriggerName);
    pFVar3 = ::FName::ToString(&local_128,&local_e8);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_118,pwVar7,&local_158);
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_118.Data.ArrayNum != 0) {
      FVar8.Data = local_118.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_120,(wchar_t *)FVar8.Data);
    pFVar4 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FTrigger>::
             TInputDataVertex<Metasound::FTrigger><>
                       (&local_98,&local_120,&Metasound::FDataVertexMetadata::EmptyBasic);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_148,pFVar4);
    uVar10 = (ulonglong)(byte)local_98._48_1_;
    if (0xc < (byte)local_98._48_1_) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10])(&local_98.field_0x20);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_158.AllocatorInstance.Data,local_158.ArrayNum);
    if ((FStringFormatArg *)local_158.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_158.AllocatorInstance.Data);
    }
    if (local_d8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.StringValue.Data.AllocatorInstance.Data);
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 5);
  pFVar4 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><>
                     (&local_60,&Metasound::TriggerAccumulatorVertexNames::InputAutoResetName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_148,pFVar4);
  if (0xc < (byte)local_60._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_60._48_1_])(&local_60.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_108);
  pTVar6 = Metasound::TOutputDataVertex<Metasound::FTrigger>::
           TOutputDataVertex<Metasound::FTrigger><>
                     (&local_b8,
                      &Metasound::TriggerAccumulatorVertexNames::AccumulateOutputOnTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
            ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_108,
             (FOutputDataVertex *)pTVar6);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_148,&local_108);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_108.SubInterfaces.AllocatorInstance.Data,
             local_108.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_108.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_108.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_108._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_108._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data,
             local_148.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_148.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_148._padding_,(int)local_148._padding_);
  if ((FInputDataVertex *)local_148._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b239250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TTriggerAccumulatorOperator<6>::GetDefaultInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStackY_198 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_158;
  FInputVertexInterface local_148;
  FName local_128;
  FName local_120;
  FString local_118;
  FOutputVertexInterface local_108;
  FString local_e8;
  FStringFormatArg local_d8;
  TOutputDataVertex<Metasound::FTrigger> local_b8;
  TInputDataVertex<Metasound::FTrigger> local_98;
  TInputDataVertex<bool> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_148);
  uVar9 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_d8,uVar9);
    local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_158.AllocatorInstance,1,&local_158.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_158.AllocatorInstance.Data,&local_d8,1);
    FLazyName::Resolve(&Metasound::TriggerAccumulatorVertexNames::InputTriggerName);
    pFVar3 = ::FName::ToString(&local_128,&local_e8);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_118,pwVar7,&local_158);
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_118.Data.ArrayNum != 0) {
      FVar8.Data = local_118.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_120,(wchar_t *)FVar8.Data);
    pFVar4 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FTrigger>::
             TInputDataVertex<Metasound::FTrigger><>
                       (&local_98,&local_120,&Metasound::FDataVertexMetadata::EmptyBasic);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_148,pFVar4);
    uVar10 = (ulonglong)(byte)local_98._48_1_;
    if (0xc < (byte)local_98._48_1_) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10])(&local_98.field_0x20);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_158.AllocatorInstance.Data,local_158.ArrayNum);
    if ((FStringFormatArg *)local_158.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_158.AllocatorInstance.Data);
    }
    if (local_d8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.StringValue.Data.AllocatorInstance.Data);
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 6);
  pFVar4 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><>
                     (&local_60,&Metasound::TriggerAccumulatorVertexNames::InputAutoResetName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_148,pFVar4);
  if (0xc < (byte)local_60._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_60._48_1_])(&local_60.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_108);
  pTVar6 = Metasound::TOutputDataVertex<Metasound::FTrigger>::
           TOutputDataVertex<Metasound::FTrigger><>
                     (&local_b8,
                      &Metasound::TriggerAccumulatorVertexNames::AccumulateOutputOnTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
            ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_108,
             (FOutputDataVertex *)pTVar6);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_148,&local_108);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_108.SubInterfaces.AllocatorInstance.Data,
             local_108.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_108.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_108.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_108._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_108._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data,
             local_148.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_148.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_148._padding_,(int)local_148._padding_);
  if ((FInputDataVertex *)local_148._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b239540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TTriggerAccumulatorOperator<7>::GetDefaultInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStackY_198 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_158;
  FInputVertexInterface local_148;
  FName local_128;
  FName local_120;
  FString local_118;
  FOutputVertexInterface local_108;
  FString local_e8;
  FStringFormatArg local_d8;
  TOutputDataVertex<Metasound::FTrigger> local_b8;
  TInputDataVertex<Metasound::FTrigger> local_98;
  TInputDataVertex<bool> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_148);
  uVar9 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_d8,uVar9);
    local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_158.AllocatorInstance,1,&local_158.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_158.AllocatorInstance.Data,&local_d8,1);
    FLazyName::Resolve(&Metasound::TriggerAccumulatorVertexNames::InputTriggerName);
    pFVar3 = ::FName::ToString(&local_128,&local_e8);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_118,pwVar7,&local_158);
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_118.Data.ArrayNum != 0) {
      FVar8.Data = local_118.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_120,(wchar_t *)FVar8.Data);
    pFVar4 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FTrigger>::
             TInputDataVertex<Metasound::FTrigger><>
                       (&local_98,&local_120,&Metasound::FDataVertexMetadata::EmptyBasic);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_148,pFVar4);
    uVar10 = (ulonglong)(byte)local_98._48_1_;
    if (0xc < (byte)local_98._48_1_) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10])(&local_98.field_0x20);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_158.AllocatorInstance.Data,local_158.ArrayNum);
    if ((FStringFormatArg *)local_158.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_158.AllocatorInstance.Data);
    }
    if (local_d8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.StringValue.Data.AllocatorInstance.Data);
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 7);
  pFVar4 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><>
                     (&local_60,&Metasound::TriggerAccumulatorVertexNames::InputAutoResetName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_148,pFVar4);
  if (0xc < (byte)local_60._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_60._48_1_])(&local_60.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_108);
  pTVar6 = Metasound::TOutputDataVertex<Metasound::FTrigger>::
           TOutputDataVertex<Metasound::FTrigger><>
                     (&local_b8,
                      &Metasound::TriggerAccumulatorVertexNames::AccumulateOutputOnTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
            ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_108,
             (FOutputDataVertex *)pTVar6);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_148,&local_108);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_108.SubInterfaces.AllocatorInstance.Data,
             local_108.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_108.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_108.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_108._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_108._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data,
             local_148.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_148.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_148._padding_,(int)local_148._padding_);
  if ((FInputDataVertex *)local_148._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b239830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TTriggerAccumulatorOperator<8>::GetDefaultInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  TOutputDataVertex<Metasound::FTrigger> *pTVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStackY_198 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_158;
  FInputVertexInterface local_148;
  FName local_128;
  FName local_120;
  FString local_118;
  FOutputVertexInterface local_108;
  FString local_e8;
  FStringFormatArg local_d8;
  TOutputDataVertex<Metasound::FTrigger> local_b8;
  TInputDataVertex<Metasound::FTrigger> local_98;
  TInputDataVertex<bool> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_148);
  uVar9 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_d8,uVar9);
    local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_158.AllocatorInstance,1,&local_158.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_158.AllocatorInstance.Data,&local_d8,1);
    FLazyName::Resolve(&Metasound::TriggerAccumulatorVertexNames::InputTriggerName);
    pFVar3 = ::FName::ToString(&local_128,&local_e8);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_118,pwVar7,&local_158);
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_118.Data.ArrayNum != 0) {
      FVar8.Data = local_118.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_120,(wchar_t *)FVar8.Data);
    pFVar4 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FTrigger>::
             TInputDataVertex<Metasound::FTrigger><>
                       (&local_98,&local_120,&Metasound::FDataVertexMetadata::EmptyBasic);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_148,pFVar4);
    uVar10 = (ulonglong)(byte)local_98._48_1_;
    if (0xc < (byte)local_98._48_1_) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10])(&local_98.field_0x20);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_158.AllocatorInstance.Data,local_158.ArrayNum);
    if ((FStringFormatArg *)local_158.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_158.AllocatorInstance.Data);
    }
    if (local_d8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.StringValue.Data.AllocatorInstance.Data);
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 8);
  pFVar4 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><>
                     (&local_60,&Metasound::TriggerAccumulatorVertexNames::InputAutoResetName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_148,pFVar4);
  if (0xc < (byte)local_60._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_60._48_1_])(&local_60.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_108);
  pTVar6 = Metasound::TOutputDataVertex<Metasound::FTrigger>::
           TOutputDataVertex<Metasound::FTrigger><>
                     (&local_b8,
                      &Metasound::TriggerAccumulatorVertexNames::AccumulateOutputOnTriggerName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
            ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_108,
             (FOutputDataVertex *)pTVar6);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_148,&local_108);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_108.SubInterfaces.AllocatorInstance.Data,
             local_108.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_108.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_108.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_108._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_108._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data,
             local_148.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_148.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_148.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_148._padding_,(int)local_148._padding_);
  if ((FInputDataVertex *)local_148._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b246fb0

void __thiscall
`Metasound::TTriggerAccumulatorOperator<1>::Execute'::__l7::<lambda_2>::operator()
          (void *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  TTriggerAccumulatorOperator<1> *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  uVar2 = *(uint *)((longlong)this + 8);
  lVar4 = *(longlong *)this;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar4 + 0x60)) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(undefined1 *)((longlong)(int)uVar2 + *(longlong *)(lVar4 + 0x58)) = 1;
  this_00 = *(TTriggerAccumulatorOperator<1> **)this;
  pFVar8 = (this_00->bInputWasTriggered).AllocatorInstance.Data;
  iVar3 = (this_00->bInputWasTriggered).ArrayNum;
  pFVar1 = pFVar8 + iVar3;
  while( true ) {
    if ((this_00->bInputWasTriggered).ArrayNum != iVar3) {
      `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    if (*pFVar8 == (FScriptContainerElement)0x0) {
      return;
    }
    pFVar8 = pFVar8 + 1;
  }
  if (**(char **)&(this_00->bAutoReset).field_0x8 != '\0') {
    Metasound::TTriggerAccumulatorOperator<1>::ResetTriggerState(this_00);
  }
  if (this_00->bOutputTriggered == false) {
    Metasound::FTrigger::TriggerFrame(*(FTrigger **)&(this_00->OutputTrigger).field_0x8,param_1);
    this_00->bOutputTriggered = true;
  }
  return;
}

// operator() @ 14b247090

void __thiscall
`Metasound::TTriggerAccumulatorOperator<2>::Execute'::__l7::<lambda_2>::operator()
          (void *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  TTriggerAccumulatorOperator<2> *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  uVar2 = *(uint *)((longlong)this + 8);
  lVar4 = *(longlong *)this;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar4 + 0x60)) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(undefined1 *)((longlong)(int)uVar2 + *(longlong *)(lVar4 + 0x58)) = 1;
  this_00 = *(TTriggerAccumulatorOperator<2> **)this;
  pFVar8 = (this_00->bInputWasTriggered).AllocatorInstance.Data;
  iVar3 = (this_00->bInputWasTriggered).ArrayNum;
  pFVar1 = pFVar8 + iVar3;
  while( true ) {
    if ((this_00->bInputWasTriggered).ArrayNum != iVar3) {
      `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    if (*pFVar8 == (FScriptContainerElement)0x0) {
      return;
    }
    pFVar8 = pFVar8 + 1;
  }
  if (**(char **)&(this_00->bAutoReset).field_0x8 != '\0') {
    Metasound::TTriggerAccumulatorOperator<2>::ResetTriggerState(this_00);
  }
  if (this_00->bOutputTriggered == false) {
    Metasound::FTrigger::TriggerFrame(*(FTrigger **)&(this_00->OutputTrigger).field_0x8,param_1);
    this_00->bOutputTriggered = true;
  }
  return;
}

// operator() @ 14b247170

void __thiscall
`Metasound::TTriggerAccumulatorOperator<3>::Execute'::__l7::<lambda_2>::operator()
          (void *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  TTriggerAccumulatorOperator<3> *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  uVar2 = *(uint *)((longlong)this + 8);
  lVar4 = *(longlong *)this;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar4 + 0x60)) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(undefined1 *)((longlong)(int)uVar2 + *(longlong *)(lVar4 + 0x58)) = 1;
  this_00 = *(TTriggerAccumulatorOperator<3> **)this;
  pFVar8 = (this_00->bInputWasTriggered).AllocatorInstance.Data;
  iVar3 = (this_00->bInputWasTriggered).ArrayNum;
  pFVar1 = pFVar8 + iVar3;
  while( true ) {
    if ((this_00->bInputWasTriggered).ArrayNum != iVar3) {
      `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    if (*pFVar8 == (FScriptContainerElement)0x0) {
      return;
    }
    pFVar8 = pFVar8 + 1;
  }
  if (**(char **)&(this_00->bAutoReset).field_0x8 != '\0') {
    Metasound::TTriggerAccumulatorOperator<3>::ResetTriggerState(this_00);
  }
  if (this_00->bOutputTriggered == false) {
    Metasound::FTrigger::TriggerFrame(*(FTrigger **)&(this_00->OutputTrigger).field_0x8,param_1);
    this_00->bOutputTriggered = true;
  }
  return;
}

// operator() @ 14b247250

void __thiscall
`Metasound::TTriggerAccumulatorOperator<4>::Execute'::__l7::<lambda_2>::operator()
          (void *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  TTriggerAccumulatorOperator<4> *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  uVar2 = *(uint *)((longlong)this + 8);
  lVar4 = *(longlong *)this;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar4 + 0x60)) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(undefined1 *)((longlong)(int)uVar2 + *(longlong *)(lVar4 + 0x58)) = 1;
  this_00 = *(TTriggerAccumulatorOperator<4> **)this;
  pFVar8 = (this_00->bInputWasTriggered).AllocatorInstance.Data;
  iVar3 = (this_00->bInputWasTriggered).ArrayNum;
  pFVar1 = pFVar8 + iVar3;
  while( true ) {
    if ((this_00->bInputWasTriggered).ArrayNum != iVar3) {
      `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    if (*pFVar8 == (FScriptContainerElement)0x0) {
      return;
    }
    pFVar8 = pFVar8 + 1;
  }
  if (**(char **)&(this_00->bAutoReset).field_0x8 != '\0') {
    Metasound::TTriggerAccumulatorOperator<4>::ResetTriggerState(this_00);
  }
  if (this_00->bOutputTriggered == false) {
    Metasound::FTrigger::TriggerFrame(*(FTrigger **)&(this_00->OutputTrigger).field_0x8,param_1);
    this_00->bOutputTriggered = true;
  }
  return;
}

// operator() @ 14b247330

void __thiscall
`Metasound::TTriggerAccumulatorOperator<5>::Execute'::__l7::<lambda_2>::operator()
          (void *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  TTriggerAccumulatorOperator<5> *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  uVar2 = *(uint *)((longlong)this + 8);
  lVar4 = *(longlong *)this;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar4 + 0x60)) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(undefined1 *)((longlong)(int)uVar2 + *(longlong *)(lVar4 + 0x58)) = 1;
  this_00 = *(TTriggerAccumulatorOperator<5> **)this;
  pFVar8 = (this_00->bInputWasTriggered).AllocatorInstance.Data;
  iVar3 = (this_00->bInputWasTriggered).ArrayNum;
  pFVar1 = pFVar8 + iVar3;
  while( true ) {
    if ((this_00->bInputWasTriggered).ArrayNum != iVar3) {
      `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    if (*pFVar8 == (FScriptContainerElement)0x0) {
      return;
    }
    pFVar8 = pFVar8 + 1;
  }
  if (**(char **)&(this_00->bAutoReset).field_0x8 != '\0') {
    Metasound::TTriggerAccumulatorOperator<5>::ResetTriggerState(this_00);
  }
  if (this_00->bOutputTriggered == false) {
    Metasound::FTrigger::TriggerFrame(*(FTrigger **)&(this_00->OutputTrigger).field_0x8,param_1);
    this_00->bOutputTriggered = true;
  }
  return;
}

// operator() @ 14b247410

void __thiscall
`Metasound::TTriggerAccumulatorOperator<6>::Execute'::__l7::<lambda_2>::operator()
          (void *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  TTriggerAccumulatorOperator<6> *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  uVar2 = *(uint *)((longlong)this + 8);
  lVar4 = *(longlong *)this;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar4 + 0x60)) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(undefined1 *)((longlong)(int)uVar2 + *(longlong *)(lVar4 + 0x58)) = 1;
  this_00 = *(TTriggerAccumulatorOperator<6> **)this;
  pFVar8 = (this_00->bInputWasTriggered).AllocatorInstance.Data;
  iVar3 = (this_00->bInputWasTriggered).ArrayNum;
  pFVar1 = pFVar8 + iVar3;
  while( true ) {
    if ((this_00->bInputWasTriggered).ArrayNum != iVar3) {
      `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    if (*pFVar8 == (FScriptContainerElement)0x0) {
      return;
    }
    pFVar8 = pFVar8 + 1;
  }
  if (**(char **)&(this_00->bAutoReset).field_0x8 != '\0') {
    Metasound::TTriggerAccumulatorOperator<6>::ResetTriggerState(this_00);
  }
  if (this_00->bOutputTriggered == false) {
    Metasound::FTrigger::TriggerFrame(*(FTrigger **)&(this_00->OutputTrigger).field_0x8,param_1);
    this_00->bOutputTriggered = true;
  }
  return;
}

// operator() @ 14b2474f0

void __thiscall
`Metasound::TTriggerAccumulatorOperator<7>::Execute'::__l7::<lambda_2>::operator()
          (void *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  TTriggerAccumulatorOperator<7> *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  uVar2 = *(uint *)((longlong)this + 8);
  lVar4 = *(longlong *)this;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar4 + 0x60)) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(undefined1 *)((longlong)(int)uVar2 + *(longlong *)(lVar4 + 0x58)) = 1;
  this_00 = *(TTriggerAccumulatorOperator<7> **)this;
  pFVar8 = (this_00->bInputWasTriggered).AllocatorInstance.Data;
  iVar3 = (this_00->bInputWasTriggered).ArrayNum;
  pFVar1 = pFVar8 + iVar3;
  while( true ) {
    if ((this_00->bInputWasTriggered).ArrayNum != iVar3) {
      `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    if (*pFVar8 == (FScriptContainerElement)0x0) {
      return;
    }
    pFVar8 = pFVar8 + 1;
  }
  if (**(char **)&(this_00->bAutoReset).field_0x8 != '\0') {
    Metasound::TTriggerAccumulatorOperator<7>::ResetTriggerState(this_00);
  }
  if (this_00->bOutputTriggered == false) {
    Metasound::FTrigger::TriggerFrame(*(FTrigger **)&(this_00->OutputTrigger).field_0x8,param_1);
    this_00->bOutputTriggered = true;
  }
  return;
}

// operator() @ 14b2475d0

void __thiscall
`Metasound::TTriggerAccumulatorOperator<8>::Execute'::__l7::<lambda_2>::operator()
          (void *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  TTriggerAccumulatorOperator<8> *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  uVar2 = *(uint *)((longlong)this + 8);
  lVar4 = *(longlong *)this;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar4 + 0x60)) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(undefined1 *)((longlong)(int)uVar2 + *(longlong *)(lVar4 + 0x58)) = 1;
  this_00 = *(TTriggerAccumulatorOperator<8> **)this;
  pFVar8 = (this_00->bInputWasTriggered).AllocatorInstance.Data;
  iVar3 = (this_00->bInputWasTriggered).ArrayNum;
  pFVar1 = pFVar8 + iVar3;
  while( true ) {
    if ((this_00->bInputWasTriggered).ArrayNum != iVar3) {
      `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    if (*pFVar8 == (FScriptContainerElement)0x0) {
      return;
    }
    pFVar8 = pFVar8 + 1;
  }
  if (**(char **)&(this_00->bAutoReset).field_0x8 != '\0') {
    Metasound::TTriggerAccumulatorOperator<8>::ResetTriggerState(this_00);
  }
  if (this_00->bOutputTriggered == false) {
    Metasound::FTrigger::TriggerFrame(*(FTrigger **)&(this_00->OutputTrigger).field_0x8,param_1);
    this_00->bOutputTriggered = true;
  }
  return;
}

// CreateOperator @ 14b2564f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerAccumulatorOperator<1>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  FInputBinding *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  FLiteral *pFVar7;
  code *pcVar8;
  TTriggerAccumulatorOperator<1> *this_00;
  TTriggerAccumulatorOperator<1> *pTVar9;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar10;
  wchar_t *pwVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStackY_178 [32];
  TArray<Metasound::TDataReadReference<Metasound::FTrigger>,TSizedDefaultAllocator<32>_> local_128;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_118;
  FName local_108;
  undefined1 local_100 [32];
  FName local_e0;
  FName local_d8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FStringFormatArg local_a0;
  undefined1 local_80 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_60;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputAutoResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_80,&local_e0,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar9 = (TTriggerAccumulatorOperator<1> *)0x0;
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  FStringFormatArg::FStringFormatArg(&local_a0,0);
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_118.AllocatorInstance,1,&local_118.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_118.AllocatorInstance.Data,&local_a0,1);
  FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputTriggerName);
  pFVar4 = ::FName::ToString(&local_d8,&local_b0);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FormatImpl(&local_d0,pwVar11,&local_118);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_d0.Data.ArrayNum != 0) {
    FVar12.Data = local_d0.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_108,(wchar_t *)FVar12.Data);
  pFVar5 = FInputVertexInterfaceData::Find(this,&local_108);
  if (pFVar5 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&local_108,&local_c0);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::FTrigger>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
    }
    pFVar7 = FLiteral::CreateInvalid((FLiteral *)&local_48);
    TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>::
    CreateExplicitArgs((TDataReadReference<Metasound::FTrigger> *)local_100,pFVar1,pFVar7);
    if ((0xc < local_48.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar8 = (code *)swi(3);
      TVar6.Ptr = (IOperator *)(*pcVar8)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
    }
    pcVar8 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                       ::__l2::Destructors)[local_48.TypeIndex];
    pTVar10 = &local_48;
  }
  else {
    if ((pFVar5->Data).bIsSet != false) {
      if (((pFVar5->Data).bIsSet == false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar8 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar8)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FTrigger>_>
                (&(pFVar5->Data).TypedValue,(TDataReadReference<Metasound::FTrigger> *)local_100);
      goto LAB_14b25676d;
    }
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_60,&(pFVar5->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>::
    CreateExplicitArgs((TDataReadReference<Metasound::FTrigger> *)local_100,pFVar1,
                       (FLiteral *)&local_60);
    if ((0xc < local_60.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar8 = (code *)swi(3);
      TVar6.Ptr = (IOperator *)(*pcVar8)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
    }
    pcVar8 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                       ::__l2::Destructors)[local_60.TypeIndex];
    pTVar10 = &local_60;
  }
  (*pcVar8)(pTVar10);
LAB_14b25676d:
  if (((local_128.AllocatorInstance.Data <= (TDataReadReference<Metasound::FTrigger> *)local_100) &&
      ((FScriptContainerElement *)local_100 <
       local_128.AllocatorInstance.Data + (longlong)local_128.ArrayMax * 0x20)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar8 = (code *)swi(3);
    TVar6.Ptr = (IOperator *)(*pcVar8)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
  }
  iVar3 = local_128.ArrayNum;
  if (local_128.ArrayNum == local_128.ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_128.AllocatorInstance,&local_128.ArrayMax);
  }
  local_128.ArrayNum = iVar3 + 1;
  pFVar13 = local_128.AllocatorInstance.Data + (longlong)iVar3 * 0x20;
  *(undefined ***)pFVar13 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)(pFVar13 + 8) = local_100._8_8_;
  *(undefined8 *)(pFVar13 + 0x10) = local_100._16_8_;
  if ((TReferenceControllerBase<0> *)local_100._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_100._16_8_ + 8) = *(int *)(local_100._16_8_ + 8) + 1;
  }
  *(undefined ***)pFVar13 = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_100._16_8_);
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
  if ((FStringFormatArg *)local_118.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  if (local_a0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.StringValue.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x70);
  if (this_00 != (TTriggerAccumulatorOperator<1> *)0x0) {
    pTVar9 = TTriggerAccumulatorOperator<1>
                       (this_00,pFVar1,(TDataReadReference<bool> *)local_80,&local_128);
  }
  param_1->Node = (INode *)pTVar9;
  DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
            ((TDataReadReference<Metasound::FTrigger> *)local_128.AllocatorInstance.Data,
             local_128.ArrayNum);
  if ((TDataReadReference<Metasound::FTrigger> *)local_128.AllocatorInstance.Data !=
      (TDataReadReference<Metasound::FTrigger> *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_80._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b256920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerAccumulatorOperator<2>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  FInputBinding *pFVar8;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar9;
  FLiteral *pFVar10;
  TTriggerAccumulatorOperator<2> *pTVar11;
  TTriggerAccumulatorOperator<2> *pTVar12;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar13;
  wchar_t *pwVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  undefined1 auStackY_198 [32];
  TArray<Metasound::TDataReadReference<Metasound::FTrigger>,TSizedDefaultAllocator<32>_> local_148;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_138;
  FName local_128;
  undefined1 local_120 [32];
  FName local_100;
  FName local_f8;
  FBuildOperatorParams *local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FStringFormatArg local_b8;
  undefined1 local_98 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_78;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_f0 = param_1;
  FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputAutoResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_98,&local_100,pFVar2);
  pTVar12 = (TTriggerAccumulatorOperator<2> *)0x0;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  pTVar11 = pTVar12;
  do {
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FStringFormatArg::FStringFormatArg(&local_b8,(uint)pTVar11);
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_138.AllocatorInstance,1,&local_138.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_138.AllocatorInstance.Data,&local_b8,1);
    FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputTriggerName);
    pFVar7 = ::FName::ToString(&local_f8,&local_c8);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_e8,pwVar14,&local_138);
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_e8.Data.ArrayNum != 0) {
      FVar15.Data = local_e8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_128,(wchar_t *)FVar15.Data);
    pFVar8 = FInputVertexInterfaceData::Find(this,&local_128);
    if (pFVar8 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(&local_128,&local_d8);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FTrigger>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      pFVar10 = FLiteral::CreateInvalid((FLiteral *)&local_60);
      TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>::
      CreateExplicitArgs((TDataReadReference<Metasound::FTrigger> *)local_120,pFVar2,pFVar10);
      bVar1 = local_60.TypeIndex;
      if ((0xc < local_60.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar9.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
      }
      pTVar13 = &local_60;
LAB_14b256ba2:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar13);
    }
    else {
      if ((pFVar8->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_78,&(pFVar8->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FTrigger> *)local_120,pFVar2,(FLiteral *)&local_78
                  );
        bVar1 = local_78.TypeIndex;
        if ((0xc < local_78.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar9.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
        }
        pTVar13 = &local_78;
        goto LAB_14b256ba2;
      }
      if (((pFVar8->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar9.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FTrigger>_>
                (&(pFVar8->Data).TypedValue,(TDataReadReference<Metasound::FTrigger> *)local_120);
    }
    if (((local_148.AllocatorInstance.Data <= (TDataReadReference<Metasound::FTrigger> *)local_120)
        && ((FScriptContainerElement *)local_120 <
            local_148.AllocatorInstance.Data + (longlong)local_148.ArrayMax * 0x20)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    iVar6 = local_148.ArrayNum;
    if (local_148.ArrayNum == local_148.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_148.AllocatorInstance,&local_148.ArrayMax);
    }
    local_148.ArrayNum = iVar6 + 1;
    pFVar16 = local_148.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
    *(undefined ***)pFVar16 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar16 + 8) = local_120._8_8_;
    *(undefined8 *)(pFVar16 + 0x10) = local_120._16_8_;
    if ((TReferenceControllerBase<0> *)local_120._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_120._16_8_ + 8) = *(int *)(local_120._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar16 = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_120._16_8_);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
    if ((FStringFormatArg *)local_138.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
    if (local_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.StringValue.Data.AllocatorInstance.Data);
    }
    uVar17 = (uint)pTVar11 + 1;
    pTVar11 = (TTriggerAccumulatorOperator<2> *)(ulonglong)uVar17;
    if (1 < uVar17) {
      pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
      pTVar11 = ::operator_new(0x70);
      if (pTVar11 != (TTriggerAccumulatorOperator<2> *)0x0) {
        pTVar12 = TTriggerAccumulatorOperator<2>
                            (pTVar11,pFVar2,(TDataReadReference<bool> *)local_98,&local_148);
      }
      pFVar4 = local_f0;
      local_f0->Node = (INode *)pTVar12;
      DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
                ((TDataReadReference<Metasound::FTrigger> *)local_148.AllocatorInstance.Data,
                 local_148.ArrayNum);
      if ((TDataReadReference<Metasound::FTrigger> *)local_148.AllocatorInstance.Data !=
          (TDataReadReference<Metasound::FTrigger> *)0x0) {
        FMemory::Free(local_148.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_98._16_8_);
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// CreateOperator @ 14b256d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerAccumulatorOperator<3>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  FInputBinding *pFVar8;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar9;
  FLiteral *pFVar10;
  TTriggerAccumulatorOperator<3> *pTVar11;
  TTriggerAccumulatorOperator<3> *pTVar12;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar13;
  wchar_t *pwVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  undefined1 auStackY_198 [32];
  TArray<Metasound::TDataReadReference<Metasound::FTrigger>,TSizedDefaultAllocator<32>_> local_148;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_138;
  FName local_128;
  undefined1 local_120 [32];
  FName local_100;
  FName local_f8;
  FBuildOperatorParams *local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FStringFormatArg local_b8;
  undefined1 local_98 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_78;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_f0 = param_1;
  FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputAutoResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_98,&local_100,pFVar2);
  pTVar12 = (TTriggerAccumulatorOperator<3> *)0x0;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  pTVar11 = pTVar12;
  do {
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FStringFormatArg::FStringFormatArg(&local_b8,(uint)pTVar11);
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_138.AllocatorInstance,1,&local_138.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_138.AllocatorInstance.Data,&local_b8,1);
    FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputTriggerName);
    pFVar7 = ::FName::ToString(&local_f8,&local_c8);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_e8,pwVar14,&local_138);
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_e8.Data.ArrayNum != 0) {
      FVar15.Data = local_e8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_128,(wchar_t *)FVar15.Data);
    pFVar8 = FInputVertexInterfaceData::Find(this,&local_128);
    if (pFVar8 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(&local_128,&local_d8);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FTrigger>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      pFVar10 = FLiteral::CreateInvalid((FLiteral *)&local_60);
      TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>::
      CreateExplicitArgs((TDataReadReference<Metasound::FTrigger> *)local_120,pFVar2,pFVar10);
      bVar1 = local_60.TypeIndex;
      if ((0xc < local_60.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar9.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
      }
      pTVar13 = &local_60;
LAB_14b256fe2:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar13);
    }
    else {
      if ((pFVar8->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_78,&(pFVar8->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FTrigger> *)local_120,pFVar2,(FLiteral *)&local_78
                  );
        bVar1 = local_78.TypeIndex;
        if ((0xc < local_78.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar9.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
        }
        pTVar13 = &local_78;
        goto LAB_14b256fe2;
      }
      if (((pFVar8->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar9.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FTrigger>_>
                (&(pFVar8->Data).TypedValue,(TDataReadReference<Metasound::FTrigger> *)local_120);
    }
    if (((local_148.AllocatorInstance.Data <= (TDataReadReference<Metasound::FTrigger> *)local_120)
        && ((FScriptContainerElement *)local_120 <
            local_148.AllocatorInstance.Data + (longlong)local_148.ArrayMax * 0x20)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    iVar6 = local_148.ArrayNum;
    if (local_148.ArrayNum == local_148.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_148.AllocatorInstance,&local_148.ArrayMax);
    }
    local_148.ArrayNum = iVar6 + 1;
    pFVar16 = local_148.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
    *(undefined ***)pFVar16 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar16 + 8) = local_120._8_8_;
    *(undefined8 *)(pFVar16 + 0x10) = local_120._16_8_;
    if ((TReferenceControllerBase<0> *)local_120._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_120._16_8_ + 8) = *(int *)(local_120._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar16 = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_120._16_8_);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
    if ((FStringFormatArg *)local_138.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
    if (local_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.StringValue.Data.AllocatorInstance.Data);
    }
    uVar17 = (uint)pTVar11 + 1;
    pTVar11 = (TTriggerAccumulatorOperator<3> *)(ulonglong)uVar17;
    if (2 < uVar17) {
      pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
      pTVar11 = ::operator_new(0x70);
      if (pTVar11 != (TTriggerAccumulatorOperator<3> *)0x0) {
        pTVar12 = TTriggerAccumulatorOperator<3>
                            (pTVar11,pFVar2,(TDataReadReference<bool> *)local_98,&local_148);
      }
      pFVar4 = local_f0;
      local_f0->Node = (INode *)pTVar12;
      DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
                ((TDataReadReference<Metasound::FTrigger> *)local_148.AllocatorInstance.Data,
                 local_148.ArrayNum);
      if ((TDataReadReference<Metasound::FTrigger> *)local_148.AllocatorInstance.Data !=
          (TDataReadReference<Metasound::FTrigger> *)0x0) {
        FMemory::Free(local_148.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_98._16_8_);
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// CreateOperator @ 14b2571a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerAccumulatorOperator<4>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  FInputBinding *pFVar8;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar9;
  FLiteral *pFVar10;
  TTriggerAccumulatorOperator<4> *pTVar11;
  TTriggerAccumulatorOperator<4> *pTVar12;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar13;
  wchar_t *pwVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  undefined1 auStackY_198 [32];
  TArray<Metasound::TDataReadReference<Metasound::FTrigger>,TSizedDefaultAllocator<32>_> local_148;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_138;
  FName local_128;
  undefined1 local_120 [32];
  FName local_100;
  FName local_f8;
  FBuildOperatorParams *local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FStringFormatArg local_b8;
  undefined1 local_98 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_78;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_f0 = param_1;
  FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputAutoResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_98,&local_100,pFVar2);
  pTVar12 = (TTriggerAccumulatorOperator<4> *)0x0;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  pTVar11 = pTVar12;
  do {
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FStringFormatArg::FStringFormatArg(&local_b8,(uint)pTVar11);
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_138.AllocatorInstance,1,&local_138.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_138.AllocatorInstance.Data,&local_b8,1);
    FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputTriggerName);
    pFVar7 = ::FName::ToString(&local_f8,&local_c8);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_e8,pwVar14,&local_138);
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_e8.Data.ArrayNum != 0) {
      FVar15.Data = local_e8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_128,(wchar_t *)FVar15.Data);
    pFVar8 = FInputVertexInterfaceData::Find(this,&local_128);
    if (pFVar8 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(&local_128,&local_d8);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FTrigger>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      pFVar10 = FLiteral::CreateInvalid((FLiteral *)&local_60);
      TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>::
      CreateExplicitArgs((TDataReadReference<Metasound::FTrigger> *)local_120,pFVar2,pFVar10);
      bVar1 = local_60.TypeIndex;
      if ((0xc < local_60.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar9.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
      }
      pTVar13 = &local_60;
LAB_14b257422:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar13);
    }
    else {
      if ((pFVar8->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_78,&(pFVar8->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FTrigger> *)local_120,pFVar2,(FLiteral *)&local_78
                  );
        bVar1 = local_78.TypeIndex;
        if ((0xc < local_78.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar9.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
        }
        pTVar13 = &local_78;
        goto LAB_14b257422;
      }
      if (((pFVar8->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar9.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FTrigger>_>
                (&(pFVar8->Data).TypedValue,(TDataReadReference<Metasound::FTrigger> *)local_120);
    }
    if (((local_148.AllocatorInstance.Data <= (TDataReadReference<Metasound::FTrigger> *)local_120)
        && ((FScriptContainerElement *)local_120 <
            local_148.AllocatorInstance.Data + (longlong)local_148.ArrayMax * 0x20)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    iVar6 = local_148.ArrayNum;
    if (local_148.ArrayNum == local_148.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_148.AllocatorInstance,&local_148.ArrayMax);
    }
    local_148.ArrayNum = iVar6 + 1;
    pFVar16 = local_148.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
    *(undefined ***)pFVar16 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar16 + 8) = local_120._8_8_;
    *(undefined8 *)(pFVar16 + 0x10) = local_120._16_8_;
    if ((TReferenceControllerBase<0> *)local_120._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_120._16_8_ + 8) = *(int *)(local_120._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar16 = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_120._16_8_);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
    if ((FStringFormatArg *)local_138.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
    if (local_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.StringValue.Data.AllocatorInstance.Data);
    }
    uVar17 = (uint)pTVar11 + 1;
    pTVar11 = (TTriggerAccumulatorOperator<4> *)(ulonglong)uVar17;
    if (3 < uVar17) {
      pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
      pTVar11 = ::operator_new(0x70);
      if (pTVar11 != (TTriggerAccumulatorOperator<4> *)0x0) {
        pTVar12 = TTriggerAccumulatorOperator<4>
                            (pTVar11,pFVar2,(TDataReadReference<bool> *)local_98,&local_148);
      }
      pFVar4 = local_f0;
      local_f0->Node = (INode *)pTVar12;
      DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
                ((TDataReadReference<Metasound::FTrigger> *)local_148.AllocatorInstance.Data,
                 local_148.ArrayNum);
      if ((TDataReadReference<Metasound::FTrigger> *)local_148.AllocatorInstance.Data !=
          (TDataReadReference<Metasound::FTrigger> *)0x0) {
        FMemory::Free(local_148.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_98._16_8_);
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// CreateOperator @ 14b2575e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerAccumulatorOperator<5>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  FInputBinding *pFVar8;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar9;
  FLiteral *pFVar10;
  TTriggerAccumulatorOperator<5> *pTVar11;
  TTriggerAccumulatorOperator<5> *pTVar12;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar13;
  wchar_t *pwVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  undefined1 auStackY_198 [32];
  TArray<Metasound::TDataReadReference<Metasound::FTrigger>,TSizedDefaultAllocator<32>_> local_148;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_138;
  FName local_128;
  undefined1 local_120 [32];
  FName local_100;
  FName local_f8;
  FBuildOperatorParams *local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FStringFormatArg local_b8;
  undefined1 local_98 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_78;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_f0 = param_1;
  FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputAutoResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_98,&local_100,pFVar2);
  pTVar12 = (TTriggerAccumulatorOperator<5> *)0x0;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  pTVar11 = pTVar12;
  do {
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FStringFormatArg::FStringFormatArg(&local_b8,(uint)pTVar11);
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_138.AllocatorInstance,1,&local_138.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_138.AllocatorInstance.Data,&local_b8,1);
    FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputTriggerName);
    pFVar7 = ::FName::ToString(&local_f8,&local_c8);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_e8,pwVar14,&local_138);
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_e8.Data.ArrayNum != 0) {
      FVar15.Data = local_e8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_128,(wchar_t *)FVar15.Data);
    pFVar8 = FInputVertexInterfaceData::Find(this,&local_128);
    if (pFVar8 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(&local_128,&local_d8);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FTrigger>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      pFVar10 = FLiteral::CreateInvalid((FLiteral *)&local_60);
      TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>::
      CreateExplicitArgs((TDataReadReference<Metasound::FTrigger> *)local_120,pFVar2,pFVar10);
      bVar1 = local_60.TypeIndex;
      if ((0xc < local_60.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar9.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
      }
      pTVar13 = &local_60;
LAB_14b257862:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar13);
    }
    else {
      if ((pFVar8->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_78,&(pFVar8->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FTrigger> *)local_120,pFVar2,(FLiteral *)&local_78
                  );
        bVar1 = local_78.TypeIndex;
        if ((0xc < local_78.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar9.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
        }
        pTVar13 = &local_78;
        goto LAB_14b257862;
      }
      if (((pFVar8->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar9.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FTrigger>_>
                (&(pFVar8->Data).TypedValue,(TDataReadReference<Metasound::FTrigger> *)local_120);
    }
    if (((local_148.AllocatorInstance.Data <= (TDataReadReference<Metasound::FTrigger> *)local_120)
        && ((FScriptContainerElement *)local_120 <
            local_148.AllocatorInstance.Data + (longlong)local_148.ArrayMax * 0x20)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    iVar6 = local_148.ArrayNum;
    if (local_148.ArrayNum == local_148.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_148.AllocatorInstance,&local_148.ArrayMax);
    }
    local_148.ArrayNum = iVar6 + 1;
    pFVar16 = local_148.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
    *(undefined ***)pFVar16 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar16 + 8) = local_120._8_8_;
    *(undefined8 *)(pFVar16 + 0x10) = local_120._16_8_;
    if ((TReferenceControllerBase<0> *)local_120._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_120._16_8_ + 8) = *(int *)(local_120._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar16 = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_120._16_8_);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
    if ((FStringFormatArg *)local_138.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
    if (local_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.StringValue.Data.AllocatorInstance.Data);
    }
    uVar17 = (uint)pTVar11 + 1;
    pTVar11 = (TTriggerAccumulatorOperator<5> *)(ulonglong)uVar17;
    if (4 < uVar17) {
      pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
      pTVar11 = ::operator_new(0x70);
      if (pTVar11 != (TTriggerAccumulatorOperator<5> *)0x0) {
        pTVar12 = TTriggerAccumulatorOperator<5>
                            (pTVar11,pFVar2,(TDataReadReference<bool> *)local_98,&local_148);
      }
      pFVar4 = local_f0;
      local_f0->Node = (INode *)pTVar12;
      DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
                ((TDataReadReference<Metasound::FTrigger> *)local_148.AllocatorInstance.Data,
                 local_148.ArrayNum);
      if ((TDataReadReference<Metasound::FTrigger> *)local_148.AllocatorInstance.Data !=
          (TDataReadReference<Metasound::FTrigger> *)0x0) {
        FMemory::Free(local_148.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_98._16_8_);
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// CreateOperator @ 14b257a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerAccumulatorOperator<6>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  FInputBinding *pFVar8;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar9;
  FLiteral *pFVar10;
  TTriggerAccumulatorOperator<6> *pTVar11;
  TTriggerAccumulatorOperator<6> *pTVar12;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar13;
  wchar_t *pwVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  undefined1 auStackY_198 [32];
  TArray<Metasound::TDataReadReference<Metasound::FTrigger>,TSizedDefaultAllocator<32>_> local_148;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_138;
  FName local_128;
  undefined1 local_120 [32];
  FName local_100;
  FName local_f8;
  FBuildOperatorParams *local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FStringFormatArg local_b8;
  undefined1 local_98 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_78;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_f0 = param_1;
  FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputAutoResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_98,&local_100,pFVar2);
  pTVar12 = (TTriggerAccumulatorOperator<6> *)0x0;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  pTVar11 = pTVar12;
  do {
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FStringFormatArg::FStringFormatArg(&local_b8,(uint)pTVar11);
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_138.AllocatorInstance,1,&local_138.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_138.AllocatorInstance.Data,&local_b8,1);
    FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputTriggerName);
    pFVar7 = ::FName::ToString(&local_f8,&local_c8);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_e8,pwVar14,&local_138);
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_e8.Data.ArrayNum != 0) {
      FVar15.Data = local_e8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_128,(wchar_t *)FVar15.Data);
    pFVar8 = FInputVertexInterfaceData::Find(this,&local_128);
    if (pFVar8 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(&local_128,&local_d8);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FTrigger>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      pFVar10 = FLiteral::CreateInvalid((FLiteral *)&local_60);
      TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>::
      CreateExplicitArgs((TDataReadReference<Metasound::FTrigger> *)local_120,pFVar2,pFVar10);
      bVar1 = local_60.TypeIndex;
      if ((0xc < local_60.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar9.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
      }
      pTVar13 = &local_60;
LAB_14b257ca2:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar13);
    }
    else {
      if ((pFVar8->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_78,&(pFVar8->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FTrigger> *)local_120,pFVar2,(FLiteral *)&local_78
                  );
        bVar1 = local_78.TypeIndex;
        if ((0xc < local_78.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar9.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
        }
        pTVar13 = &local_78;
        goto LAB_14b257ca2;
      }
      if (((pFVar8->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar9.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FTrigger>_>
                (&(pFVar8->Data).TypedValue,(TDataReadReference<Metasound::FTrigger> *)local_120);
    }
    if (((local_148.AllocatorInstance.Data <= (TDataReadReference<Metasound::FTrigger> *)local_120)
        && ((FScriptContainerElement *)local_120 <
            local_148.AllocatorInstance.Data + (longlong)local_148.ArrayMax * 0x20)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    iVar6 = local_148.ArrayNum;
    if (local_148.ArrayNum == local_148.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_148.AllocatorInstance,&local_148.ArrayMax);
    }
    local_148.ArrayNum = iVar6 + 1;
    pFVar16 = local_148.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
    *(undefined ***)pFVar16 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar16 + 8) = local_120._8_8_;
    *(undefined8 *)(pFVar16 + 0x10) = local_120._16_8_;
    if ((TReferenceControllerBase<0> *)local_120._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_120._16_8_ + 8) = *(int *)(local_120._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar16 = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_120._16_8_);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
    if ((FStringFormatArg *)local_138.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
    if (local_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.StringValue.Data.AllocatorInstance.Data);
    }
    uVar17 = (uint)pTVar11 + 1;
    pTVar11 = (TTriggerAccumulatorOperator<6> *)(ulonglong)uVar17;
    if (5 < uVar17) {
      pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
      pTVar11 = ::operator_new(0x70);
      if (pTVar11 != (TTriggerAccumulatorOperator<6> *)0x0) {
        pTVar12 = TTriggerAccumulatorOperator<6>
                            (pTVar11,pFVar2,(TDataReadReference<bool> *)local_98,&local_148);
      }
      pFVar4 = local_f0;
      local_f0->Node = (INode *)pTVar12;
      DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
                ((TDataReadReference<Metasound::FTrigger> *)local_148.AllocatorInstance.Data,
                 local_148.ArrayNum);
      if ((TDataReadReference<Metasound::FTrigger> *)local_148.AllocatorInstance.Data !=
          (TDataReadReference<Metasound::FTrigger> *)0x0) {
        FMemory::Free(local_148.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_98._16_8_);
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// CreateOperator @ 14b257e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerAccumulatorOperator<7>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  FInputBinding *pFVar8;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar9;
  FLiteral *pFVar10;
  TTriggerAccumulatorOperator<7> *pTVar11;
  TTriggerAccumulatorOperator<7> *pTVar12;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar13;
  wchar_t *pwVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  undefined1 auStackY_198 [32];
  TArray<Metasound::TDataReadReference<Metasound::FTrigger>,TSizedDefaultAllocator<32>_> local_148;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_138;
  FName local_128;
  undefined1 local_120 [32];
  FName local_100;
  FName local_f8;
  FBuildOperatorParams *local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FStringFormatArg local_b8;
  undefined1 local_98 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_78;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_f0 = param_1;
  FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputAutoResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_98,&local_100,pFVar2);
  pTVar12 = (TTriggerAccumulatorOperator<7> *)0x0;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  pTVar11 = pTVar12;
  do {
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FStringFormatArg::FStringFormatArg(&local_b8,(uint)pTVar11);
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_138.AllocatorInstance,1,&local_138.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_138.AllocatorInstance.Data,&local_b8,1);
    FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputTriggerName);
    pFVar7 = ::FName::ToString(&local_f8,&local_c8);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_e8,pwVar14,&local_138);
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_e8.Data.ArrayNum != 0) {
      FVar15.Data = local_e8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_128,(wchar_t *)FVar15.Data);
    pFVar8 = FInputVertexInterfaceData::Find(this,&local_128);
    if (pFVar8 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(&local_128,&local_d8);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FTrigger>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      pFVar10 = FLiteral::CreateInvalid((FLiteral *)&local_60);
      TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>::
      CreateExplicitArgs((TDataReadReference<Metasound::FTrigger> *)local_120,pFVar2,pFVar10);
      bVar1 = local_60.TypeIndex;
      if ((0xc < local_60.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar9.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
      }
      pTVar13 = &local_60;
LAB_14b2580e2:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar13);
    }
    else {
      if ((pFVar8->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_78,&(pFVar8->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FTrigger> *)local_120,pFVar2,(FLiteral *)&local_78
                  );
        bVar1 = local_78.TypeIndex;
        if ((0xc < local_78.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar9.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
        }
        pTVar13 = &local_78;
        goto LAB_14b2580e2;
      }
      if (((pFVar8->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar9.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FTrigger>_>
                (&(pFVar8->Data).TypedValue,(TDataReadReference<Metasound::FTrigger> *)local_120);
    }
    if (((local_148.AllocatorInstance.Data <= (TDataReadReference<Metasound::FTrigger> *)local_120)
        && ((FScriptContainerElement *)local_120 <
            local_148.AllocatorInstance.Data + (longlong)local_148.ArrayMax * 0x20)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    iVar6 = local_148.ArrayNum;
    if (local_148.ArrayNum == local_148.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_148.AllocatorInstance,&local_148.ArrayMax);
    }
    local_148.ArrayNum = iVar6 + 1;
    pFVar16 = local_148.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
    *(undefined ***)pFVar16 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar16 + 8) = local_120._8_8_;
    *(undefined8 *)(pFVar16 + 0x10) = local_120._16_8_;
    if ((TReferenceControllerBase<0> *)local_120._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_120._16_8_ + 8) = *(int *)(local_120._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar16 = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_120._16_8_);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
    if ((FStringFormatArg *)local_138.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
    if (local_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.StringValue.Data.AllocatorInstance.Data);
    }
    uVar17 = (uint)pTVar11 + 1;
    pTVar11 = (TTriggerAccumulatorOperator<7> *)(ulonglong)uVar17;
    if (6 < uVar17) {
      pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
      pTVar11 = ::operator_new(0x70);
      if (pTVar11 != (TTriggerAccumulatorOperator<7> *)0x0) {
        pTVar12 = TTriggerAccumulatorOperator<7>
                            (pTVar11,pFVar2,(TDataReadReference<bool> *)local_98,&local_148);
      }
      pFVar4 = local_f0;
      local_f0->Node = (INode *)pTVar12;
      DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
                ((TDataReadReference<Metasound::FTrigger> *)local_148.AllocatorInstance.Data,
                 local_148.ArrayNum);
      if ((TDataReadReference<Metasound::FTrigger> *)local_148.AllocatorInstance.Data !=
          (TDataReadReference<Metasound::FTrigger> *)0x0) {
        FMemory::Free(local_148.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_98._16_8_);
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// CreateOperator @ 14b2582a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TTriggerAccumulatorOperator<8>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  FInputBinding *pFVar8;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar9;
  FLiteral *pFVar10;
  TTriggerAccumulatorOperator<8> *pTVar11;
  TTriggerAccumulatorOperator<8> *pTVar12;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar13;
  wchar_t *pwVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  undefined1 auStackY_198 [32];
  TArray<Metasound::TDataReadReference<Metasound::FTrigger>,TSizedDefaultAllocator<32>_> local_148;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_138;
  FName local_128;
  undefined1 local_120 [32];
  FName local_100;
  FName local_f8;
  FBuildOperatorParams *local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FStringFormatArg local_b8;
  undefined1 local_98 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_78;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_f0 = param_1;
  FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputAutoResetName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_98,&local_100,pFVar2);
  pTVar12 = (TTriggerAccumulatorOperator<8> *)0x0;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  pTVar11 = pTVar12;
  do {
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FStringFormatArg::FStringFormatArg(&local_b8,(uint)pTVar11);
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_138.AllocatorInstance,1,&local_138.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_138.AllocatorInstance.Data,&local_b8,1);
    FLazyName::Resolve(&TriggerAccumulatorVertexNames::InputTriggerName);
    pFVar7 = ::FName::ToString(&local_f8,&local_c8);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_e8,pwVar14,&local_138);
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_e8.Data.ArrayNum != 0) {
      FVar15.Data = local_e8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_128,(wchar_t *)FVar15.Data);
    pFVar8 = FInputVertexInterfaceData::Find(this,&local_128);
    if (pFVar8 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(&local_128,&local_d8);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FTrigger>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      pFVar10 = FLiteral::CreateInvalid((FLiteral *)&local_60);
      TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>::
      CreateExplicitArgs((TDataReadReference<Metasound::FTrigger> *)local_120,pFVar2,pFVar10);
      bVar1 = local_60.TypeIndex;
      if ((0xc < local_60.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar9.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
      }
      pTVar13 = &local_60;
LAB_14b258522:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar13);
    }
    else {
      if ((pFVar8->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_78,&(pFVar8->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FTrigger> *)local_120,pFVar2,(FLiteral *)&local_78
                  );
        bVar1 = local_78.TypeIndex;
        if ((0xc < local_78.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar9.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
        }
        pTVar13 = &local_78;
        goto LAB_14b258522;
      }
      if (((pFVar8->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar9.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FTrigger>_>
                (&(pFVar8->Data).TypedValue,(TDataReadReference<Metasound::FTrigger> *)local_120);
    }
    if (((local_148.AllocatorInstance.Data <= (TDataReadReference<Metasound::FTrigger> *)local_120)
        && ((FScriptContainerElement *)local_120 <
            local_148.AllocatorInstance.Data + (longlong)local_148.ArrayMax * 0x20)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    iVar6 = local_148.ArrayNum;
    if (local_148.ArrayNum == local_148.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_148.AllocatorInstance,&local_148.ArrayMax);
    }
    local_148.ArrayNum = iVar6 + 1;
    pFVar16 = local_148.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
    *(undefined ***)pFVar16 = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar16 + 8) = local_120._8_8_;
    *(undefined8 *)(pFVar16 + 0x10) = local_120._16_8_;
    if ((TReferenceControllerBase<0> *)local_120._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_120._16_8_ + 8) = *(int *)(local_120._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar16 = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_120._16_8_);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
    if ((FStringFormatArg *)local_138.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
    if (local_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.StringValue.Data.AllocatorInstance.Data);
    }
    uVar17 = (uint)pTVar11 + 1;
    pTVar11 = (TTriggerAccumulatorOperator<8> *)(ulonglong)uVar17;
    if (7 < uVar17) {
      pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
      pTVar11 = ::operator_new(0x70);
      if (pTVar11 != (TTriggerAccumulatorOperator<8> *)0x0) {
        pTVar12 = TTriggerAccumulatorOperator<8>
                            (pTVar11,pFVar2,(TDataReadReference<bool> *)local_98,&local_148);
      }
      pFVar4 = local_f0;
      local_f0->Node = (INode *)pTVar12;
      DestructItems<Metasound::TDataReadReference<Metasound::FTrigger>,int>
                ((TDataReadReference<Metasound::FTrigger> *)local_148.AllocatorInstance.Data,
                 local_148.ArrayNum);
      if ((TDataReadReference<Metasound::FTrigger> *)local_148.AllocatorInstance.Data !=
          (TDataReadReference<Metasound::FTrigger> *)0x0) {
        FMemory::Free(local_148.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_98._16_8_);
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// Execute @ 14b2702f0

void __thiscall
Metasound::TTriggerAccumulatorOperator<1>::Execute(TTriggerAccumulatorOperator<1> *this)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  int local_res10;
  TTriggerAccumulatorOperator<1> *local_58;
  longlong lStack_50;
  TTriggerAccumulatorOperator<1> *local_48;
  undefined4 uStack_40;
  uint uStack_3c;
  
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->OutputTrigger).field_0x8);
  if ((this->bOutputTriggered == false) || (**(char **)&(this->bAutoReset).field_0x8 != '\0')) {
    if (((this->InputTriggers).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uStack_40 = 0;
    lStack_50 = (ulonglong)uStack_3c << 0x20;
    plVar5 = *(longlong **)((this->InputTriggers).AllocatorInstance.Data + 8);
    local_res10 = *(int *)((longlong)plVar5 + 0x14);
    if (0 < *(int *)((longlong)plVar5 + 0x1c)) {
      lVar6 = *plVar5;
      lVar12 = 0;
      lVar1 = (longlong)*(int *)((longlong)plVar5 + 0x1c) + -1;
      local_58 = this;
      local_48 = this;
      if (0 < lVar1) {
        do {
          lVar10 = (longlong)(int)(uint)lStack_50;
          iVar3 = *(int *)(lVar6 + lVar12 * 4);
          uVar9 = 0;
          if ((int)(uint)lStack_50 < (this->bInputWasTriggered).ArrayNum) {
            uVar9 = ~(uint)lStack_50 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (this->bInputWasTriggered).AllocatorInstance.Data[lVar10] = (FScriptContainerElement)0x1;
          pFVar11 = (this->bInputWasTriggered).AllocatorInstance.Data;
          iVar4 = (this->bInputWasTriggered).ArrayNum;
          pFVar2 = pFVar11 + iVar4;
          while( true ) {
            if ((this->bInputWasTriggered).ArrayNum != iVar4) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res8);
            }
            if (pFVar11 == pFVar2) break;
            if (*pFVar11 == (FScriptContainerElement)0x0) goto LAB_14b270490;
            pFVar11 = pFVar11 + 1;
          }
          if (**(char **)&(this->bAutoReset).field_0x8 != '\0') {
            ResetTriggerState(this);
          }
          if (this->bOutputTriggered == false) {
            FTrigger::TriggerFrame(*(FTrigger **)&(this->OutputTrigger).field_0x8,iVar3);
            this->bOutputTriggered = true;
          }
LAB_14b270490:
          lVar12 = lVar12 + 1;
        } while (lVar12 < lVar1);
      }
      `Metasound::TTriggerAccumulatorOperator<1>::Execute'::__l7::<lambda_2>::operator()
                (&local_58,*(int *)(lVar6 + lVar1 * 4),local_res10);
    }
  }
  return;
}

// Execute @ 14b2704f0

void __thiscall
Metasound::TTriggerAccumulatorOperator<2>::Execute(TTriggerAccumulatorOperator<2> *this)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  TTriggerAccumulatorOperator<2> *local_68;
  undefined8 uStack_60;
  TTriggerAccumulatorOperator<2> *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->OutputTrigger).field_0x8);
  if ((this->bOutputTriggered == false) || (**(char **)&(this->bAutoReset).field_0x8 != '\0')) {
    local_res18 = 0;
    do {
      uVar12 = local_res18;
      if (((this->InputTriggers).ArrayNum <= (int)local_res18) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uStack_60 = CONCAT44(uStack_4c,uVar12);
      plVar5 = *(longlong **)
                ((this->InputTriggers).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20 + 8);
      local_res20 = *(int *)((longlong)plVar5 + 0x14);
      local_68 = this;
      local_58 = this;
      uStack_50 = uVar12;
      if (0 < *(int *)((longlong)plVar5 + 0x1c)) {
        lVar6 = *plVar5;
        lVar1 = (longlong)*(int *)((longlong)plVar5 + 0x1c) + -1;
        lVar11 = 0;
        if (0 < lVar1) {
          do {
            lVar9 = (longlong)(int)(uint)uStack_60;
            iVar3 = *(int *)(lVar6 + lVar11 * 4);
            uVar12 = 0;
            if ((int)(uint)uStack_60 < (this->bInputWasTriggered).ArrayNum) {
              uVar12 = ~(uint)uStack_60 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            (this->bInputWasTriggered).AllocatorInstance.Data[lVar9] = (FScriptContainerElement)0x1;
            pFVar10 = (this->bInputWasTriggered).AllocatorInstance.Data;
            iVar4 = (this->bInputWasTriggered).ArrayNum;
            pFVar2 = pFVar10 + iVar4;
            while( true ) {
              if ((this->bInputWasTriggered).ArrayNum != iVar4) {
                local_res10[0] = 0;
                `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_res10);
              }
              if (pFVar10 == pFVar2) break;
              if (*pFVar10 == (FScriptContainerElement)0x0) goto LAB_14b2706b0;
              pFVar10 = pFVar10 + 1;
            }
            if (**(char **)&(this->bAutoReset).field_0x8 != '\0') {
              ResetTriggerState(this);
            }
            if (this->bOutputTriggered == false) {
              FTrigger::TriggerFrame(*(FTrigger **)&(this->OutputTrigger).field_0x8,iVar3);
              this->bOutputTriggered = true;
            }
LAB_14b2706b0:
            lVar11 = lVar11 + 1;
            uVar12 = local_res18;
          } while (lVar11 < lVar1);
        }
        `Metasound::TTriggerAccumulatorOperator<2>::Execute'::__l7::<lambda_2>::operator()
                  (&local_68,*(int *)(lVar6 + lVar1 * 4),local_res20);
      }
      local_res18 = uVar12 + 1;
    } while (local_res18 < 2);
  }
  return;
}

// Execute @ 14b270740

void __thiscall
Metasound::TTriggerAccumulatorOperator<3>::Execute(TTriggerAccumulatorOperator<3> *this)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  TTriggerAccumulatorOperator<3> *local_68;
  undefined8 uStack_60;
  TTriggerAccumulatorOperator<3> *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->OutputTrigger).field_0x8);
  if ((this->bOutputTriggered == false) || (**(char **)&(this->bAutoReset).field_0x8 != '\0')) {
    local_res18 = 0;
    do {
      uVar12 = local_res18;
      if (((this->InputTriggers).ArrayNum <= (int)local_res18) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uStack_60 = CONCAT44(uStack_4c,uVar12);
      plVar5 = *(longlong **)
                ((this->InputTriggers).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20 + 8);
      local_res20 = *(int *)((longlong)plVar5 + 0x14);
      local_68 = this;
      local_58 = this;
      uStack_50 = uVar12;
      if (0 < *(int *)((longlong)plVar5 + 0x1c)) {
        lVar6 = *plVar5;
        lVar1 = (longlong)*(int *)((longlong)plVar5 + 0x1c) + -1;
        lVar11 = 0;
        if (0 < lVar1) {
          do {
            lVar9 = (longlong)(int)(uint)uStack_60;
            iVar3 = *(int *)(lVar6 + lVar11 * 4);
            uVar12 = 0;
            if ((int)(uint)uStack_60 < (this->bInputWasTriggered).ArrayNum) {
              uVar12 = ~(uint)uStack_60 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            (this->bInputWasTriggered).AllocatorInstance.Data[lVar9] = (FScriptContainerElement)0x1;
            pFVar10 = (this->bInputWasTriggered).AllocatorInstance.Data;
            iVar4 = (this->bInputWasTriggered).ArrayNum;
            pFVar2 = pFVar10 + iVar4;
            while( true ) {
              if ((this->bInputWasTriggered).ArrayNum != iVar4) {
                local_res10[0] = 0;
                `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_res10);
              }
              if (pFVar10 == pFVar2) break;
              if (*pFVar10 == (FScriptContainerElement)0x0) goto LAB_14b270900;
              pFVar10 = pFVar10 + 1;
            }
            if (**(char **)&(this->bAutoReset).field_0x8 != '\0') {
              ResetTriggerState(this);
            }
            if (this->bOutputTriggered == false) {
              FTrigger::TriggerFrame(*(FTrigger **)&(this->OutputTrigger).field_0x8,iVar3);
              this->bOutputTriggered = true;
            }
LAB_14b270900:
            lVar11 = lVar11 + 1;
            uVar12 = local_res18;
          } while (lVar11 < lVar1);
        }
        `Metasound::TTriggerAccumulatorOperator<3>::Execute'::__l7::<lambda_2>::operator()
                  (&local_68,*(int *)(lVar6 + lVar1 * 4),local_res20);
      }
      local_res18 = uVar12 + 1;
    } while (local_res18 < 3);
  }
  return;
}

// Execute @ 14b270990

void __thiscall
Metasound::TTriggerAccumulatorOperator<4>::Execute(TTriggerAccumulatorOperator<4> *this)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  TTriggerAccumulatorOperator<4> *local_68;
  undefined8 uStack_60;
  TTriggerAccumulatorOperator<4> *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->OutputTrigger).field_0x8);
  if ((this->bOutputTriggered == false) || (**(char **)&(this->bAutoReset).field_0x8 != '\0')) {
    local_res18 = 0;
    do {
      uVar12 = local_res18;
      if (((this->InputTriggers).ArrayNum <= (int)local_res18) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uStack_60 = CONCAT44(uStack_4c,uVar12);
      plVar5 = *(longlong **)
                ((this->InputTriggers).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20 + 8);
      local_res20 = *(int *)((longlong)plVar5 + 0x14);
      local_68 = this;
      local_58 = this;
      uStack_50 = uVar12;
      if (0 < *(int *)((longlong)plVar5 + 0x1c)) {
        lVar6 = *plVar5;
        lVar1 = (longlong)*(int *)((longlong)plVar5 + 0x1c) + -1;
        lVar11 = 0;
        if (0 < lVar1) {
          do {
            lVar9 = (longlong)(int)(uint)uStack_60;
            iVar3 = *(int *)(lVar6 + lVar11 * 4);
            uVar12 = 0;
            if ((int)(uint)uStack_60 < (this->bInputWasTriggered).ArrayNum) {
              uVar12 = ~(uint)uStack_60 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            (this->bInputWasTriggered).AllocatorInstance.Data[lVar9] = (FScriptContainerElement)0x1;
            pFVar10 = (this->bInputWasTriggered).AllocatorInstance.Data;
            iVar4 = (this->bInputWasTriggered).ArrayNum;
            pFVar2 = pFVar10 + iVar4;
            while( true ) {
              if ((this->bInputWasTriggered).ArrayNum != iVar4) {
                local_res10[0] = 0;
                `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_res10);
              }
              if (pFVar10 == pFVar2) break;
              if (*pFVar10 == (FScriptContainerElement)0x0) goto LAB_14b270b50;
              pFVar10 = pFVar10 + 1;
            }
            if (**(char **)&(this->bAutoReset).field_0x8 != '\0') {
              ResetTriggerState(this);
            }
            if (this->bOutputTriggered == false) {
              FTrigger::TriggerFrame(*(FTrigger **)&(this->OutputTrigger).field_0x8,iVar3);
              this->bOutputTriggered = true;
            }
LAB_14b270b50:
            lVar11 = lVar11 + 1;
            uVar12 = local_res18;
          } while (lVar11 < lVar1);
        }
        `Metasound::TTriggerAccumulatorOperator<4>::Execute'::__l7::<lambda_2>::operator()
                  (&local_68,*(int *)(lVar6 + lVar1 * 4),local_res20);
      }
      local_res18 = uVar12 + 1;
    } while (local_res18 < 4);
  }
  return;
}

// Execute @ 14b270be0

void __thiscall
Metasound::TTriggerAccumulatorOperator<5>::Execute(TTriggerAccumulatorOperator<5> *this)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  TTriggerAccumulatorOperator<5> *local_68;
  undefined8 uStack_60;
  TTriggerAccumulatorOperator<5> *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->OutputTrigger).field_0x8);
  if ((this->bOutputTriggered == false) || (**(char **)&(this->bAutoReset).field_0x8 != '\0')) {
    local_res18 = 0;
    do {
      uVar12 = local_res18;
      if (((this->InputTriggers).ArrayNum <= (int)local_res18) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uStack_60 = CONCAT44(uStack_4c,uVar12);
      plVar5 = *(longlong **)
                ((this->InputTriggers).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20 + 8);
      local_res20 = *(int *)((longlong)plVar5 + 0x14);
      local_68 = this;
      local_58 = this;
      uStack_50 = uVar12;
      if (0 < *(int *)((longlong)plVar5 + 0x1c)) {
        lVar6 = *plVar5;
        lVar1 = (longlong)*(int *)((longlong)plVar5 + 0x1c) + -1;
        lVar11 = 0;
        if (0 < lVar1) {
          do {
            lVar9 = (longlong)(int)(uint)uStack_60;
            iVar3 = *(int *)(lVar6 + lVar11 * 4);
            uVar12 = 0;
            if ((int)(uint)uStack_60 < (this->bInputWasTriggered).ArrayNum) {
              uVar12 = ~(uint)uStack_60 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            (this->bInputWasTriggered).AllocatorInstance.Data[lVar9] = (FScriptContainerElement)0x1;
            pFVar10 = (this->bInputWasTriggered).AllocatorInstance.Data;
            iVar4 = (this->bInputWasTriggered).ArrayNum;
            pFVar2 = pFVar10 + iVar4;
            while( true ) {
              if ((this->bInputWasTriggered).ArrayNum != iVar4) {
                local_res10[0] = 0;
                `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_res10);
              }
              if (pFVar10 == pFVar2) break;
              if (*pFVar10 == (FScriptContainerElement)0x0) goto LAB_14b270da0;
              pFVar10 = pFVar10 + 1;
            }
            if (**(char **)&(this->bAutoReset).field_0x8 != '\0') {
              ResetTriggerState(this);
            }
            if (this->bOutputTriggered == false) {
              FTrigger::TriggerFrame(*(FTrigger **)&(this->OutputTrigger).field_0x8,iVar3);
              this->bOutputTriggered = true;
            }
LAB_14b270da0:
            lVar11 = lVar11 + 1;
            uVar12 = local_res18;
          } while (lVar11 < lVar1);
        }
        `Metasound::TTriggerAccumulatorOperator<5>::Execute'::__l7::<lambda_2>::operator()
                  (&local_68,*(int *)(lVar6 + lVar1 * 4),local_res20);
      }
      local_res18 = uVar12 + 1;
    } while (local_res18 < 5);
  }
  return;
}

// Execute @ 14b270e30

void __thiscall
Metasound::TTriggerAccumulatorOperator<6>::Execute(TTriggerAccumulatorOperator<6> *this)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  TTriggerAccumulatorOperator<6> *local_68;
  undefined8 uStack_60;
  TTriggerAccumulatorOperator<6> *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->OutputTrigger).field_0x8);
  if ((this->bOutputTriggered == false) || (**(char **)&(this->bAutoReset).field_0x8 != '\0')) {
    local_res18 = 0;
    do {
      uVar12 = local_res18;
      if (((this->InputTriggers).ArrayNum <= (int)local_res18) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uStack_60 = CONCAT44(uStack_4c,uVar12);
      plVar5 = *(longlong **)
                ((this->InputTriggers).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20 + 8);
      local_res20 = *(int *)((longlong)plVar5 + 0x14);
      local_68 = this;
      local_58 = this;
      uStack_50 = uVar12;
      if (0 < *(int *)((longlong)plVar5 + 0x1c)) {
        lVar6 = *plVar5;
        lVar1 = (longlong)*(int *)((longlong)plVar5 + 0x1c) + -1;
        lVar11 = 0;
        if (0 < lVar1) {
          do {
            lVar9 = (longlong)(int)(uint)uStack_60;
            iVar3 = *(int *)(lVar6 + lVar11 * 4);
            uVar12 = 0;
            if ((int)(uint)uStack_60 < (this->bInputWasTriggered).ArrayNum) {
              uVar12 = ~(uint)uStack_60 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            (this->bInputWasTriggered).AllocatorInstance.Data[lVar9] = (FScriptContainerElement)0x1;
            pFVar10 = (this->bInputWasTriggered).AllocatorInstance.Data;
            iVar4 = (this->bInputWasTriggered).ArrayNum;
            pFVar2 = pFVar10 + iVar4;
            while( true ) {
              if ((this->bInputWasTriggered).ArrayNum != iVar4) {
                local_res10[0] = 0;
                `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_res10);
              }
              if (pFVar10 == pFVar2) break;
              if (*pFVar10 == (FScriptContainerElement)0x0) goto LAB_14b270ff0;
              pFVar10 = pFVar10 + 1;
            }
            if (**(char **)&(this->bAutoReset).field_0x8 != '\0') {
              ResetTriggerState(this);
            }
            if (this->bOutputTriggered == false) {
              FTrigger::TriggerFrame(*(FTrigger **)&(this->OutputTrigger).field_0x8,iVar3);
              this->bOutputTriggered = true;
            }
LAB_14b270ff0:
            lVar11 = lVar11 + 1;
            uVar12 = local_res18;
          } while (lVar11 < lVar1);
        }
        `Metasound::TTriggerAccumulatorOperator<6>::Execute'::__l7::<lambda_2>::operator()
                  (&local_68,*(int *)(lVar6 + lVar1 * 4),local_res20);
      }
      local_res18 = uVar12 + 1;
    } while (local_res18 < 6);
  }
  return;
}

// Execute @ 14b271080

void __thiscall
Metasound::TTriggerAccumulatorOperator<7>::Execute(TTriggerAccumulatorOperator<7> *this)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  TTriggerAccumulatorOperator<7> *local_68;
  undefined8 uStack_60;
  TTriggerAccumulatorOperator<7> *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->OutputTrigger).field_0x8);
  if ((this->bOutputTriggered == false) || (**(char **)&(this->bAutoReset).field_0x8 != '\0')) {
    local_res18 = 0;
    do {
      uVar12 = local_res18;
      if (((this->InputTriggers).ArrayNum <= (int)local_res18) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uStack_60 = CONCAT44(uStack_4c,uVar12);
      plVar5 = *(longlong **)
                ((this->InputTriggers).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20 + 8);
      local_res20 = *(int *)((longlong)plVar5 + 0x14);
      local_68 = this;
      local_58 = this;
      uStack_50 = uVar12;
      if (0 < *(int *)((longlong)plVar5 + 0x1c)) {
        lVar6 = *plVar5;
        lVar1 = (longlong)*(int *)((longlong)plVar5 + 0x1c) + -1;
        lVar11 = 0;
        if (0 < lVar1) {
          do {
            lVar9 = (longlong)(int)(uint)uStack_60;
            iVar3 = *(int *)(lVar6 + lVar11 * 4);
            uVar12 = 0;
            if ((int)(uint)uStack_60 < (this->bInputWasTriggered).ArrayNum) {
              uVar12 = ~(uint)uStack_60 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            (this->bInputWasTriggered).AllocatorInstance.Data[lVar9] = (FScriptContainerElement)0x1;
            pFVar10 = (this->bInputWasTriggered).AllocatorInstance.Data;
            iVar4 = (this->bInputWasTriggered).ArrayNum;
            pFVar2 = pFVar10 + iVar4;
            while( true ) {
              if ((this->bInputWasTriggered).ArrayNum != iVar4) {
                local_res10[0] = 0;
                `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_res10);
              }
              if (pFVar10 == pFVar2) break;
              if (*pFVar10 == (FScriptContainerElement)0x0) goto LAB_14b271240;
              pFVar10 = pFVar10 + 1;
            }
            if (**(char **)&(this->bAutoReset).field_0x8 != '\0') {
              ResetTriggerState(this);
            }
            if (this->bOutputTriggered == false) {
              FTrigger::TriggerFrame(*(FTrigger **)&(this->OutputTrigger).field_0x8,iVar3);
              this->bOutputTriggered = true;
            }
LAB_14b271240:
            lVar11 = lVar11 + 1;
            uVar12 = local_res18;
          } while (lVar11 < lVar1);
        }
        `Metasound::TTriggerAccumulatorOperator<7>::Execute'::__l7::<lambda_2>::operator()
                  (&local_68,*(int *)(lVar6 + lVar1 * 4),local_res20);
      }
      local_res18 = uVar12 + 1;
    } while (local_res18 < 7);
  }
  return;
}

// Execute @ 14b2712d0

void __thiscall
Metasound::TTriggerAccumulatorOperator<8>::Execute(TTriggerAccumulatorOperator<8> *this)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  TTriggerAccumulatorOperator<8> *local_68;
  undefined8 uStack_60;
  TTriggerAccumulatorOperator<8> *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->OutputTrigger).field_0x8);
  if ((this->bOutputTriggered == false) || (**(char **)&(this->bAutoReset).field_0x8 != '\0')) {
    local_res18 = 0;
    do {
      uVar12 = local_res18;
      if (((this->InputTriggers).ArrayNum <= (int)local_res18) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uStack_60 = CONCAT44(uStack_4c,uVar12);
      plVar5 = *(longlong **)
                ((this->InputTriggers).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20 + 8);
      local_res20 = *(int *)((longlong)plVar5 + 0x14);
      local_68 = this;
      local_58 = this;
      uStack_50 = uVar12;
      if (0 < *(int *)((longlong)plVar5 + 0x1c)) {
        lVar6 = *plVar5;
        lVar1 = (longlong)*(int *)((longlong)plVar5 + 0x1c) + -1;
        lVar11 = 0;
        if (0 < lVar1) {
          do {
            lVar9 = (longlong)(int)(uint)uStack_60;
            iVar3 = *(int *)(lVar6 + lVar11 * 4);
            uVar12 = 0;
            if ((int)(uint)uStack_60 < (this->bInputWasTriggered).ArrayNum) {
              uVar12 = ~(uint)uStack_60 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            (this->bInputWasTriggered).AllocatorInstance.Data[lVar9] = (FScriptContainerElement)0x1;
            pFVar10 = (this->bInputWasTriggered).AllocatorInstance.Data;
            iVar4 = (this->bInputWasTriggered).ArrayNum;
            pFVar2 = pFVar10 + iVar4;
            while( true ) {
              if ((this->bInputWasTriggered).ArrayNum != iVar4) {
                local_res10[0] = 0;
                `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_res10);
              }
              if (pFVar10 == pFVar2) break;
              if (*pFVar10 == (FScriptContainerElement)0x0) goto LAB_14b271490;
              pFVar10 = pFVar10 + 1;
            }
            if (**(char **)&(this->bAutoReset).field_0x8 != '\0') {
              ResetTriggerState(this);
            }
            if (this->bOutputTriggered == false) {
              FTrigger::TriggerFrame(*(FTrigger **)&(this->OutputTrigger).field_0x8,iVar3);
              this->bOutputTriggered = true;
            }
LAB_14b271490:
            lVar11 = lVar11 + 1;
            uVar12 = local_res18;
          } while (lVar11 < lVar1);
        }
        `Metasound::TTriggerAccumulatorOperator<8>::Execute'::__l7::<lambda_2>::operator()
                  (&local_68,*(int *)(lVar6 + lVar1 * 4),local_res20);
      }
      local_res18 = uVar12 + 1;
    } while (local_res18 < 8);
  }
  return;
}

// GetNodeInfo @ 14b27b510

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerAccumulatorOperator<1>::GetNodeInfo(void)

{
  ForAnyElementType FVar1;
  int *piVar2;
  undefined1 local_res8 [8];
  FName local_res10 [3];
  FString local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<1>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<1>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<1>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_88,L"Trigger Accumulate (%d)");
      FVar1.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar1.Data = local_88.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res10,(wchar_t *)FVar1.Data);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_68);
      FText::FText(&local_78);
      if (*piVar2 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<1>::GetDefaultInterface(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<1>::GetDefaultInterface(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<1>::GetDefaultInterface(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          `Metasound::TTriggerAccumulatorOperator<1>::GetDefaultInterface'::__l2::<lambda_1>::
          operator()(local_res8,
                     &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<1>::GetDefaultInterface(void)'
                      ::__l2::DefaultInterface);
          atexit(`Metasound::TTriggerAccumulatorOperator<1>::GetDefaultInterface'::__l2::
                 _dynamic_atexit_destructor_for__DefaultInterface__);
          _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<1>::GetDefaultInterface(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      FVertexInterface::FVertexInterface
                (&local_58,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<1>::GetDefaultInterface(void)'
                  ::__l2::DefaultInterface);
      MetasoundTriggerAccumulatorNodePrivate::CreateNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<1>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_68,&local_78,&local_58);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TTriggerAccumulatorOperator<1>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<1>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<1>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<1>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b27b6a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerAccumulatorOperator<2>::GetNodeInfo(void)

{
  ForAnyElementType FVar1;
  int *piVar2;
  undefined1 local_res8 [8];
  FName local_res10 [3];
  FString local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<2>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<2>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<2>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_88,L"Trigger Accumulate (%d)");
      FVar1.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar1.Data = local_88.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res10,(wchar_t *)FVar1.Data);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_68);
      FText::FText(&local_78);
      if (*piVar2 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<2>::GetDefaultInterface(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<2>::GetDefaultInterface(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<2>::GetDefaultInterface(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          `Metasound::TTriggerAccumulatorOperator<2>::GetDefaultInterface'::__l2::<lambda_1>::
          operator()(local_res8,
                     &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<2>::GetDefaultInterface(void)'
                      ::__l2::DefaultInterface);
          atexit(`Metasound::TTriggerAccumulatorOperator<2>::GetDefaultInterface'::__l2::
                 _dynamic_atexit_destructor_for__DefaultInterface__);
          _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<2>::GetDefaultInterface(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      FVertexInterface::FVertexInterface
                (&local_58,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<2>::GetDefaultInterface(void)'
                  ::__l2::DefaultInterface);
      MetasoundTriggerAccumulatorNodePrivate::CreateNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<2>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_68,&local_78,&local_58);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TTriggerAccumulatorOperator<2>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<2>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<2>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<2>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b27b830

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerAccumulatorOperator<3>::GetNodeInfo(void)

{
  ForAnyElementType FVar1;
  int *piVar2;
  undefined1 local_res8 [8];
  FName local_res10 [3];
  FString local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<3>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<3>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<3>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_88,L"Trigger Accumulate (%d)");
      FVar1.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar1.Data = local_88.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res10,(wchar_t *)FVar1.Data);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_68);
      FText::FText(&local_78);
      if (*piVar2 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<3>::GetDefaultInterface(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<3>::GetDefaultInterface(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<3>::GetDefaultInterface(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          `Metasound::TTriggerAccumulatorOperator<3>::GetDefaultInterface'::__l2::<lambda_1>::
          operator()(local_res8,
                     &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<3>::GetDefaultInterface(void)'
                      ::__l2::DefaultInterface);
          atexit(`Metasound::TTriggerAccumulatorOperator<3>::GetDefaultInterface'::__l2::
                 _dynamic_atexit_destructor_for__DefaultInterface__);
          _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<3>::GetDefaultInterface(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      FVertexInterface::FVertexInterface
                (&local_58,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<3>::GetDefaultInterface(void)'
                  ::__l2::DefaultInterface);
      MetasoundTriggerAccumulatorNodePrivate::CreateNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<3>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_68,&local_78,&local_58);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TTriggerAccumulatorOperator<3>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<3>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<3>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<3>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b27b9c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerAccumulatorOperator<4>::GetNodeInfo(void)

{
  ForAnyElementType FVar1;
  int *piVar2;
  undefined1 local_res8 [8];
  FName local_res10 [3];
  FString local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<4>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<4>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<4>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_88,L"Trigger Accumulate (%d)");
      FVar1.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar1.Data = local_88.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res10,(wchar_t *)FVar1.Data);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_68);
      FText::FText(&local_78);
      if (*piVar2 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<4>::GetDefaultInterface(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<4>::GetDefaultInterface(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<4>::GetDefaultInterface(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          `Metasound::TTriggerAccumulatorOperator<4>::GetDefaultInterface'::__l2::<lambda_1>::
          operator()(local_res8,
                     &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<4>::GetDefaultInterface(void)'
                      ::__l2::DefaultInterface);
          atexit(`Metasound::TTriggerAccumulatorOperator<4>::GetDefaultInterface'::__l2::
                 _dynamic_atexit_destructor_for__DefaultInterface__);
          _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<4>::GetDefaultInterface(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      FVertexInterface::FVertexInterface
                (&local_58,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<4>::GetDefaultInterface(void)'
                  ::__l2::DefaultInterface);
      MetasoundTriggerAccumulatorNodePrivate::CreateNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<4>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_68,&local_78,&local_58);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TTriggerAccumulatorOperator<4>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<4>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<4>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<4>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b27bb50

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerAccumulatorOperator<5>::GetNodeInfo(void)

{
  ForAnyElementType FVar1;
  int *piVar2;
  undefined1 local_res8 [8];
  FName local_res10 [3];
  FString local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<5>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<5>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<5>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_88,L"Trigger Accumulate (%d)");
      FVar1.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar1.Data = local_88.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res10,(wchar_t *)FVar1.Data);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_68);
      FText::FText(&local_78);
      if (*piVar2 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<5>::GetDefaultInterface(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<5>::GetDefaultInterface(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<5>::GetDefaultInterface(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          `Metasound::TTriggerAccumulatorOperator<5>::GetDefaultInterface'::__l2::<lambda_1>::
          operator()(local_res8,
                     &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<5>::GetDefaultInterface(void)'
                      ::__l2::DefaultInterface);
          atexit(`Metasound::TTriggerAccumulatorOperator<5>::GetDefaultInterface'::__l2::
                 _dynamic_atexit_destructor_for__DefaultInterface__);
          _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<5>::GetDefaultInterface(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      FVertexInterface::FVertexInterface
                (&local_58,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<5>::GetDefaultInterface(void)'
                  ::__l2::DefaultInterface);
      MetasoundTriggerAccumulatorNodePrivate::CreateNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<5>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_68,&local_78,&local_58);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TTriggerAccumulatorOperator<5>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<5>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<5>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<5>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b27bce0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerAccumulatorOperator<6>::GetNodeInfo(void)

{
  ForAnyElementType FVar1;
  int *piVar2;
  undefined1 local_res8 [8];
  FName local_res10 [3];
  FString local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<6>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<6>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<6>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_88,L"Trigger Accumulate (%d)");
      FVar1.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar1.Data = local_88.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res10,(wchar_t *)FVar1.Data);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_68);
      FText::FText(&local_78);
      if (*piVar2 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<6>::GetDefaultInterface(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<6>::GetDefaultInterface(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<6>::GetDefaultInterface(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          `Metasound::TTriggerAccumulatorOperator<6>::GetDefaultInterface'::__l2::<lambda_1>::
          operator()(local_res8,
                     &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<6>::GetDefaultInterface(void)'
                      ::__l2::DefaultInterface);
          atexit(`Metasound::TTriggerAccumulatorOperator<6>::GetDefaultInterface'::__l2::
                 _dynamic_atexit_destructor_for__DefaultInterface__);
          _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<6>::GetDefaultInterface(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      FVertexInterface::FVertexInterface
                (&local_58,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<6>::GetDefaultInterface(void)'
                  ::__l2::DefaultInterface);
      MetasoundTriggerAccumulatorNodePrivate::CreateNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<6>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_68,&local_78,&local_58);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TTriggerAccumulatorOperator<6>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<6>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<6>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<6>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b27be70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerAccumulatorOperator<7>::GetNodeInfo(void)

{
  ForAnyElementType FVar1;
  int *piVar2;
  undefined1 local_res8 [8];
  FName local_res10 [3];
  FString local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<7>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<7>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<7>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_88,L"Trigger Accumulate (%d)");
      FVar1.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar1.Data = local_88.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res10,(wchar_t *)FVar1.Data);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_68);
      FText::FText(&local_78);
      if (*piVar2 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<7>::GetDefaultInterface(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<7>::GetDefaultInterface(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<7>::GetDefaultInterface(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          `Metasound::TTriggerAccumulatorOperator<7>::GetDefaultInterface'::__l2::<lambda_1>::
          operator()(local_res8,
                     &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<7>::GetDefaultInterface(void)'
                      ::__l2::DefaultInterface);
          atexit(`Metasound::TTriggerAccumulatorOperator<7>::GetDefaultInterface'::__l2::
                 _dynamic_atexit_destructor_for__DefaultInterface__);
          _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<7>::GetDefaultInterface(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      FVertexInterface::FVertexInterface
                (&local_58,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<7>::GetDefaultInterface(void)'
                  ::__l2::DefaultInterface);
      MetasoundTriggerAccumulatorNodePrivate::CreateNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<7>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_68,&local_78,&local_58);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TTriggerAccumulatorOperator<7>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<7>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<7>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<7>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b27c000

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TTriggerAccumulatorOperator<8>::GetNodeInfo(void)

{
  ForAnyElementType FVar1;
  int *piVar2;
  undefined1 local_res8 [8];
  FName local_res10 [3];
  FString local_88;
  FText local_78;
  FText local_68;
  FVertexInterface local_58;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar2 < `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<8>::GetNodeInfo(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<8>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<8>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_88,L"Trigger Accumulate (%d)");
      FVar1.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar1.Data = local_88.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res10,(wchar_t *)FVar1.Data);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_68);
      FText::FText(&local_78);
      if (*piVar2 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<8>::GetDefaultInterface(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<8>::GetDefaultInterface(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<8>::GetDefaultInterface(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          `Metasound::TTriggerAccumulatorOperator<8>::GetDefaultInterface'::__l2::<lambda_1>::
          operator()(local_res8,
                     &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<8>::GetDefaultInterface(void)'
                      ::__l2::DefaultInterface);
          atexit(`Metasound::TTriggerAccumulatorOperator<8>::GetDefaultInterface'::__l2::
                 _dynamic_atexit_destructor_for__DefaultInterface__);
          _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<8>::GetDefaultInterface(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      FVertexInterface::FVertexInterface
                (&local_58,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<8>::GetDefaultInterface(void)'
                  ::__l2::DefaultInterface);
      MetasoundTriggerAccumulatorNodePrivate::CreateNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<8>::GetNodeInfo(void)'
                  ::__l2::Metadata,local_res10,&local_68,&local_78,&local_58);
      FVertexInterface::~FVertexInterface(&local_58);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      atexit(`Metasound::TTriggerAccumulatorOperator<8>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<8>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<8>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TTriggerAccumulatorOperator<8>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// Reset @ 14b28a4b0

void __thiscall
Metasound::TTriggerAccumulatorOperator<1>::Reset
          (TTriggerAccumulatorOperator<1> *this,FResetParams *param_1)

{
  FTrigger::Reset(*(FTrigger **)&(this->OutputTrigger).field_0x8);
  ResetTriggerState(this);
  return;
}

// Reset @ 14b28a4e0

void __thiscall
Metasound::TTriggerAccumulatorOperator<2>::Reset
          (TTriggerAccumulatorOperator<2> *this,FResetParams *param_1)

{
  FTrigger::Reset(*(FTrigger **)&(this->OutputTrigger).field_0x8);
  ResetTriggerState(this);
  return;
}

// Reset @ 14b28a510

void __thiscall
Metasound::TTriggerAccumulatorOperator<3>::Reset
          (TTriggerAccumulatorOperator<3> *this,FResetParams *param_1)

{
  FTrigger::Reset(*(FTrigger **)&(this->OutputTrigger).field_0x8);
  ResetTriggerState(this);
  return;
}

// Reset @ 14b28a540

void __thiscall
Metasound::TTriggerAccumulatorOperator<4>::Reset
          (TTriggerAccumulatorOperator<4> *this,FResetParams *param_1)

{
  FTrigger::Reset(*(FTrigger **)&(this->OutputTrigger).field_0x8);
  ResetTriggerState(this);
  return;
}

// Reset @ 14b28a570

void __thiscall
Metasound::TTriggerAccumulatorOperator<5>::Reset
          (TTriggerAccumulatorOperator<5> *this,FResetParams *param_1)

{
  FTrigger::Reset(*(FTrigger **)&(this->OutputTrigger).field_0x8);
  ResetTriggerState(this);
  return;
}

// Reset @ 14b28a5a0

void __thiscall
Metasound::TTriggerAccumulatorOperator<6>::Reset
          (TTriggerAccumulatorOperator<6> *this,FResetParams *param_1)

{
  FTrigger::Reset(*(FTrigger **)&(this->OutputTrigger).field_0x8);
  ResetTriggerState(this);
  return;
}

// Reset @ 14b28a5d0

void __thiscall
Metasound::TTriggerAccumulatorOperator<7>::Reset
          (TTriggerAccumulatorOperator<7> *this,FResetParams *param_1)

{
  FTrigger::Reset(*(FTrigger **)&(this->OutputTrigger).field_0x8);
  ResetTriggerState(this);
  return;
}

// Reset @ 14b28a600

void __thiscall
Metasound::TTriggerAccumulatorOperator<8>::Reset
          (TTriggerAccumulatorOperator<8> *this,FResetParams *param_1)

{
  FTrigger::Reset(*(FTrigger **)&(this->OutputTrigger).field_0x8);
  ResetTriggerState(this);
  return;
}

// ResetTriggerState @ 14b28e860

void __thiscall
Metasound::TTriggerAccumulatorOperator<1>::ResetTriggerState(TTriggerAccumulatorOperator<1> *this)

{
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  pTVar1 = &this->bInputWasTriggered;
  this->bOutputTriggered = false;
  piVar2 = &(this->bInputWasTriggered).ArrayMax;
  piVar3 = &(this->bInputWasTriggered).ArrayNum;
  *piVar3 = 0;
  if ((this->bInputWasTriggered).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar4 = (this->InputTriggers).ArrayNum;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar4,&pTVar1->AllocatorInstance,piVar3,piVar2);
  memset((pTVar1->AllocatorInstance).Data + iVar5,0,(longlong)iVar4);
  return;
}

// ResetTriggerState @ 14b28e900

void __thiscall
Metasound::TTriggerAccumulatorOperator<2>::ResetTriggerState(TTriggerAccumulatorOperator<2> *this)

{
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  pTVar1 = &this->bInputWasTriggered;
  this->bOutputTriggered = false;
  piVar2 = &(this->bInputWasTriggered).ArrayMax;
  piVar3 = &(this->bInputWasTriggered).ArrayNum;
  *piVar3 = 0;
  if ((this->bInputWasTriggered).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar4 = (this->InputTriggers).ArrayNum;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar4,&pTVar1->AllocatorInstance,piVar3,piVar2);
  memset((pTVar1->AllocatorInstance).Data + iVar5,0,(longlong)iVar4);
  return;
}

// ResetTriggerState @ 14b28e9a0

void __thiscall
Metasound::TTriggerAccumulatorOperator<3>::ResetTriggerState(TTriggerAccumulatorOperator<3> *this)

{
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  pTVar1 = &this->bInputWasTriggered;
  this->bOutputTriggered = false;
  piVar2 = &(this->bInputWasTriggered).ArrayMax;
  piVar3 = &(this->bInputWasTriggered).ArrayNum;
  *piVar3 = 0;
  if ((this->bInputWasTriggered).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar4 = (this->InputTriggers).ArrayNum;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar4,&pTVar1->AllocatorInstance,piVar3,piVar2);
  memset((pTVar1->AllocatorInstance).Data + iVar5,0,(longlong)iVar4);
  return;
}

// ResetTriggerState @ 14b28ea40

void __thiscall
Metasound::TTriggerAccumulatorOperator<4>::ResetTriggerState(TTriggerAccumulatorOperator<4> *this)

{
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  pTVar1 = &this->bInputWasTriggered;
  this->bOutputTriggered = false;
  piVar2 = &(this->bInputWasTriggered).ArrayMax;
  piVar3 = &(this->bInputWasTriggered).ArrayNum;
  *piVar3 = 0;
  if ((this->bInputWasTriggered).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar4 = (this->InputTriggers).ArrayNum;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar4,&pTVar1->AllocatorInstance,piVar3,piVar2);
  memset((pTVar1->AllocatorInstance).Data + iVar5,0,(longlong)iVar4);
  return;
}

// ResetTriggerState @ 14b28eae0

void __thiscall
Metasound::TTriggerAccumulatorOperator<5>::ResetTriggerState(TTriggerAccumulatorOperator<5> *this)

{
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  pTVar1 = &this->bInputWasTriggered;
  this->bOutputTriggered = false;
  piVar2 = &(this->bInputWasTriggered).ArrayMax;
  piVar3 = &(this->bInputWasTriggered).ArrayNum;
  *piVar3 = 0;
  if ((this->bInputWasTriggered).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar4 = (this->InputTriggers).ArrayNum;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar4,&pTVar1->AllocatorInstance,piVar3,piVar2);
  memset((pTVar1->AllocatorInstance).Data + iVar5,0,(longlong)iVar4);
  return;
}

// ResetTriggerState @ 14b28eb80

void __thiscall
Metasound::TTriggerAccumulatorOperator<6>::ResetTriggerState(TTriggerAccumulatorOperator<6> *this)

{
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  pTVar1 = &this->bInputWasTriggered;
  this->bOutputTriggered = false;
  piVar2 = &(this->bInputWasTriggered).ArrayMax;
  piVar3 = &(this->bInputWasTriggered).ArrayNum;
  *piVar3 = 0;
  if ((this->bInputWasTriggered).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar4 = (this->InputTriggers).ArrayNum;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar4,&pTVar1->AllocatorInstance,piVar3,piVar2);
  memset((pTVar1->AllocatorInstance).Data + iVar5,0,(longlong)iVar4);
  return;
}

// ResetTriggerState @ 14b28ec20

void __thiscall
Metasound::TTriggerAccumulatorOperator<7>::ResetTriggerState(TTriggerAccumulatorOperator<7> *this)

{
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  pTVar1 = &this->bInputWasTriggered;
  this->bOutputTriggered = false;
  piVar2 = &(this->bInputWasTriggered).ArrayMax;
  piVar3 = &(this->bInputWasTriggered).ArrayNum;
  *piVar3 = 0;
  if ((this->bInputWasTriggered).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar4 = (this->InputTriggers).ArrayNum;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar4,&pTVar1->AllocatorInstance,piVar3,piVar2);
  memset((pTVar1->AllocatorInstance).Data + iVar5,0,(longlong)iVar4);
  return;
}

// ResetTriggerState @ 14b28ecc0

void __thiscall
Metasound::TTriggerAccumulatorOperator<8>::ResetTriggerState(TTriggerAccumulatorOperator<8> *this)

{
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  pTVar1 = &this->bInputWasTriggered;
  this->bOutputTriggered = false;
  piVar2 = &(this->bInputWasTriggered).ArrayMax;
  piVar3 = &(this->bInputWasTriggered).ArrayNum;
  *piVar3 = 0;
  if ((this->bInputWasTriggered).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar4 = (this->InputTriggers).ArrayNum;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar4,&pTVar1->AllocatorInstance,piVar3,piVar2);
  memset((pTVar1->AllocatorInstance).Data + iVar5,0,(longlong)iVar4);
  return;
}

